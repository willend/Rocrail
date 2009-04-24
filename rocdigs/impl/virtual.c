
 /*
 Rocrail - Model Railroad Software

 Copyright (C) 2002-2007 - Rob Versluis <r.j.versluis@rocrail.net>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
*/

#include "rocdigs/impl/virtual_impl.h"

#include "rocs/public/mem.h"
#include "rocs/public/objbase.h"
#include "rocs/public/string.h"

#include "rocrail/wrapper/public/DigInt.h"
#include "rocrail/wrapper/public/SysCmd.h"
#include "rocrail/wrapper/public/FunCmd.h"
#include "rocrail/wrapper/public/Loc.h"
#include "rocrail/wrapper/public/Feedback.h"
#include "rocrail/wrapper/public/Switch.h"
#include "rocrail/wrapper/public/Output.h"
#include "rocrail/wrapper/public/Signal.h"
#include "rocrail/wrapper/public/Program.h"
#include "rocrail/wrapper/public/State.h"

#include "rocdigs/impl/common/fada.h"

static int instCnt = 0;

/** ----- OBase ----- */
static const char* __id( void* inst ) {
  return NULL;
}

static void* __event( void* inst, const void* evt ) {
  return NULL;
}

static void __del( void* inst ) {
  if( inst != NULL ) {
    iOVirtualData data = Data(inst);
    /* Cleanup data->xxx members...*/

    freeMem( data );
    freeMem( inst );
    instCnt--;
  }
  return;
}

static const char* __name( void ) {
  return name;
}

static unsigned char* __serialize( void* inst, long* size ) {
  return NULL;
}

static void __deserialize( void* inst,unsigned char* bytestream ) {
  return;
}

static char* __toString( void* inst ) {
  return NULL;
}

static int __count( void ) {
  return instCnt;
}

static struct OBase* __clone( void* inst ) {
  return NULL;
}

static Boolean __equals( void* inst1, void* inst2 ) {
  return False;
}

static void* __properties( void* inst ) {
  return NULL;
}

/** ----- OVirtual ----- */

static void __inform( iOVirtual inst ) {
  iOVirtualData data = Data(inst);
  iONode node = NodeOp.inst( wState.name(), NULL, ELEMENT_NODE );
  wState.setiid( node, wDigInt.getiid( data->ini ) );
  wState.setpower( node, data->power );
  data->listenerFun( data->listenerObj, node, TRCLEVEL_INFO );
}

/**  */
static void _halt( obj inst ) {
  iOVirtualData data = Data(inst);
  data->run = False;
  return;
}


/**  */
static Boolean _setListener( obj inst ,obj listenerObj ,const digint_listener listenerFun ) {
  iOVirtualData data = Data(inst);
  data->listenerObj = listenerObj;
  data->listenerFun = listenerFun;
  return True;
}


/**  */
static Boolean _supportPT( obj inst ) {
  /* ProgrammingTrack (ServiceMode) */
  return True;
}


static Boolean __sendRequest( iOVirtual virtual, byte* outin ) {
  return True;
}

/** */
static iONode __translate( iOVirtual virtual, iONode node ) {
  iOVirtualData data = Data(virtual);
  iONode rsp = NULL;

  /*
  char* cmdStr = NodeOp.base.toString(node);
  TraceOp.println( cmdStr );
  StrOp.free(cmdStr);
  */

  /* Switch command. */
  if( StrOp.equals( NodeOp.getName( node ), wSwitch.name() ) ) {

    int addr = wSwitch.getaddr1( node );
    int port = wSwitch.getport1( node );
    int gate = wSwitch.getgate1( node );
    int fada = 0;
    int pada = 0;
    int dir  = 1;
    int action = 1;

    if( port == 0 ) {
      fada = addr;
      fromFADA( addr, &addr, &port, &gate );
    }
    else if( addr == 0 && port > 0 ) {
      pada = port;
      fromPADA( port, &addr, &port );
    }

    if( fada == 0 )
      fada = toFADA( addr, port, gate );
    if( pada == 0 )
      pada = toPADA( addr, port );

    if( StrOp.equals( wSwitch.getcmd( node ), wSwitch.turnout ) )
      dir = 0; /* thrown */

    if( wSwitch.issinglegate( node ) ) {
      dir = gate;
      if( StrOp.equals( wSwitch.getcmd( node ), wSwitch.straight ) )
        action = 0;
    }

    TraceOp.trc( name, TRCLEVEL_MONITOR, __LINE__, 9999,
        "turnout %04d %d %-10.10s fada=%04d pada=%04d addr=%d port=%d gate=%d dir=%d action=%d",
        addr, port, wSwitch.getcmd( node ), fada, pada, addr, port, gate, dir, action );
  }
  /* Output command. */
  else if( StrOp.equals( NodeOp.getName( node ), wOutput.name() ) ) {

    int addr = wOutput.getaddr( node );
    int port = wOutput.getport( node );
    int gate = wOutput.getgate( node );
    int fada = 0;
    int pada = 0;

    if( port == 0 ) {
      fada = addr;
      fromFADA( addr, &addr, &port, &gate );
    }
    else if( addr == 0 && port > 0 ) {
      pada = port;
      fromPADA( port, &addr, &port );
    }

    if( fada == 0 )
      fada = toFADA( addr, port, gate );
    if( pada == 0 )
      pada = toPADA( addr, port );

    TraceOp.trc( name, TRCLEVEL_MONITOR, __LINE__, 9999, "output %04d %d %d fada=%04d pada=%04d",
        addr, port, gate, fada, pada );
  }
  /* Signal command. */
  else if( StrOp.equals( NodeOp.getName( node ), wSignal.name() ) ) {
    TraceOp.trc( name, TRCLEVEL_WARNING, __LINE__, 9999,
        "Signal commands are no longer supported at this level." );
  }

  /* Sensor command. */
  else if( StrOp.equals( NodeOp.getName( node ), wFeedback.name() ) ) {
    int addr = wFeedback.getaddr( node );
    Boolean state = wFeedback.isstate( node );

    TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "simulate fb addr=%d state=%s", addr, state?"true":"false" );
    rsp = (iONode)NodeOp.base.clone( node );
  }

  /* Loc command. */
  else if( StrOp.equals( NodeOp.getName( node ), wLoc.name() ) ) {
    int   addr = wLoc.getaddr( node );
    int  speed = 0;
    Boolean fn = wLoc.isfn( node );
    int    dir = wLoc.isdir( node );
    int  spcnt = wLoc.getspcnt( node );

    Boolean fn1 = wFunCmd.isf1(node);
    Boolean fn2 = wFunCmd.isf2(node);
    Boolean fn3 = wFunCmd.isf3(node);
    Boolean fn4 = wFunCmd.isf4(node);

    if( StrOp.equals( wLoc.shortid, wLoc.getcmd(node) ) ) {
      TraceOp.trc( name, TRCLEVEL_MONITOR, __LINE__, 9999, "addr=%d spcnt=%d shortID=[%s]", addr, spcnt, wLoc.getshortid(node) );
    }
    else {
      if( wLoc.getV( node ) != -1 ) {
        if( StrOp.equals( wLoc.getV_mode( node ), wLoc.V_mode_percent ) )
          speed = (wLoc.getV( node ) * spcnt) / 100;
        else if( wLoc.getV_max( node ) > 0 )
          speed = (wLoc.getV( node ) * spcnt) / wLoc.getV_max( node );
        TraceOp.trc( name, TRCLEVEL_USER1, __LINE__, 9999, "speed=%d", speed );
      }
      TraceOp.trc( name, TRCLEVEL_MONITOR, __LINE__, 9999, "addr=%d V=%d(%d) dir=%s lights=%s f1=%s f2=%s f3=%s f4=%s",
          addr, speed, wLoc.getV( node ), wLoc.isdir( node )?"fwd":"rev", fn?"on":"off", fn1?"on":"off", fn2?"on":"off", fn3?"on":"off", fn4?"on":"off" );
    }


  }

  /* Function command. */
  else if( StrOp.equals( NodeOp.getName( node ), wFunCmd.name() ) ) {
    int   addr = wFunCmd.getaddr( node );
    Boolean f0 = wFunCmd.isf0( node );
    Boolean f1 = wFunCmd.isf1( node );
    Boolean f2 = wFunCmd.isf2( node );
    Boolean f3 = wFunCmd.isf3( node );
    Boolean f4 = wFunCmd.isf4( node );
    Boolean f5 = wFunCmd.isf5( node );
    Boolean f6 = wFunCmd.isf6( node );
    Boolean f7 = wFunCmd.isf7( node );
    Boolean f8 = wFunCmd.isf8( node );
    Boolean f9  = wFunCmd.isf9( node );
    Boolean f10 = wFunCmd.isf10( node );
    Boolean f11 = wFunCmd.isf11( node );
    Boolean f12 = wFunCmd.isf12( node );
    TraceOp.trc( name, TRCLEVEL_MONITOR, __LINE__, 9999,
            "loc %d f0=%s f1=%s f2=%s f3=%s f4=%s f5=%s f6=%s f7=%s f8=%s f9=%s f10=%s f11=%s f12=%s",
            addr, f0?"on":"off", f1?"on":"off", f2?"on":"off", f3?"on":"off", f4?"on":"off",
            f5?"on":"off", f6?"on":"off", f7?"on":"off", f8?"on":"off",
            f9?"on":"off", f10?"on":"off", f11?"on":"off", f12?"on":"off" );
  }

  /* System command. */
  else if( StrOp.equals( NodeOp.getName( node ), wSysCmd.name() ) ) {
    const char* cmd = wSysCmd.getcmd( node );

    if( StrOp.equals( cmd, wSysCmd.stop ) ) {
      TraceOp.trc( name, TRCLEVEL_MONITOR, __LINE__, 9999, "Power OFF" );
      data->power = False;
      __inform(virtual);
    }
    else if( StrOp.equals( cmd, wSysCmd.go ) ) {
      TraceOp.trc( name, TRCLEVEL_MONITOR, __LINE__, 9999, "Power ON" );
      data->power = True;
      __inform(virtual);
    }
    else if( StrOp.equals( cmd, wSysCmd.txshortids ) ) {
      TraceOp.trc( name, TRCLEVEL_MONITOR, __LINE__, 9999, "send short IDs to the throttle" );
    }

  }
  /* Program command. */
  else if( StrOp.equals( NodeOp.getName( node ), wProgram.name() ) ) {

    if( wProgram.getcmd( node ) == wProgram.get ) {
      int cv = wProgram.getcv( node );
      TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "get CV%d...", cv );
    }
    else if( wProgram.getcmd( node ) == wProgram.set ) {
      int cv = wProgram.getcv( node );
      int value = wProgram.getvalue( node );
      int decaddr = wProgram.getdecaddr( node );

      // POM ?
      if( wProgram.ispom(node) ) {
        TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "POM: set CV%d of loc %d to %d...", cv, decaddr, value );

        if ( cv == 0 )
          TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "POM does not allow writing of adress!");

      } else {

        TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "set CV%d to %d...", cv, value );

      }

    }
    else if(  wProgram.getcmd( node ) == wProgram.pton ) {
      TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "PT ON");
    }  // PT off, send: All ON"
    else if( wProgram.getcmd( node ) == wProgram.ptoff ) {
      TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "PT OFF");
    }

  }
  return rsp;
}


static void __transactor( void* threadinst ) {
  iOThread      th   = (iOThread)threadinst;
  iOVirtual     vcs  = (iOVirtual)ThreadOp.getParm(th);
  iOVirtualData data = Data(vcs);

/* Maybe we will do some fancy stuff here in the future ...
   ThreadOp.setDescription( th, "Transactor for Virtual" );
   TraceOp.trc( name, TRCLEVEL_MONITOR, __LINE__, 9999, "Transactor started." );
*/
  TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "Transactor is started.");

  do {
    // Give up timeslize:
    ThreadOp.sleep( 10 );

  } while( data->run );

  TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "Transactor has stopped.");
}

static iONode _cmd( obj inst ,const iONode nodeA ) {
  iOVirtualData data = Data(inst);
  char out[256];
  iONode nodeB = NULL;

  if( nodeA != NULL ) {
    nodeB = __translate( (iOVirtual)inst, nodeA );

    /* Cleanup Node1 */
    nodeA->base.del(nodeA);
  }

  /* return Node2 */
  return nodeB;
}


/* Status */
static int _state( obj inst ) {
  iOVirtualData data = Data(inst);
  int state = 0;
  state |= data->power << 0;
  return state;
}

/* VERSION: */
static int vmajor = 1;
static int vminor = 3;
static int patch  = 0;
static int _version( obj inst ) {
  iOVirtualData data = Data(inst);
  return vmajor*10000 + vminor*100 + patch;
}

/**  */
static struct OVirtual* _inst( const iONode ini ,const iOTrace trc ) {
  iOVirtual __Virtual = allocMem( sizeof( struct OVirtual ) );
  iOVirtualData data = allocMem( sizeof( struct OVirtualData ) );
  MemOp.basecpy( __Virtual, &VirtualOp, 0, sizeof( struct OVirtual ), data );

  TraceOp.set( trc );

  /* Initialize data->xxx members... */
  data->ini    = ini;
  data->iid    = StrOp.dup( wDigInt.getiid( ini ) );
  data->fbmod  = wDigInt.getfbmod( ini );
  data->readfb = wDigInt.isreadfb( ini );

  TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "----------------------------------------" );
  TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "virtual %d.%d.%d", vmajor, vminor, patch );
  TraceOp.trc( name, TRCLEVEL_INFO, __LINE__, 9999, "----------------------------------------" );

  data->run = True;


  data->transactor = ThreadOp.inst( "transactor", &__transactor, __Virtual );
  ThreadOp.start( data->transactor );

  instCnt++;
  return __Virtual;
}

/* Support for dynamic Loading */
iIDigInt rocGetDigInt( const iONode ini ,const iOTrace trc )
{
  return (iIDigInt)_inst(ini,trc);
}

/* ----- DO NOT REMOVE OR EDIT THIS INCLUDE LINE! -----*/
#include "rocdigs/impl/virtual.fm"
/* ----- DO NOT REMOVE OR EDIT THIS INCLUDE LINE! -----*/
