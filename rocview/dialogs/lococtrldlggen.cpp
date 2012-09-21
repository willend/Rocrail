///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "lococtrldlggen.h"

///////////////////////////////////////////////////////////////////////////

LocoCtrlDlgGen::LocoCtrlDlgGen( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	this->SetExtraStyle( wxWS_EX_BLOCK_EVENTS );
	
	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxVERTICAL );
	
	m_LocoImage = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxSize( 240,88 ), wxBU_AUTODRAW );
	m_LocoImage->SetDefault(); 
	bSizer1->Add( m_LocoImage, 0, wxEXPAND|wxALL, 2 );
	
	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_LocoSpeed = new wxTextCtrl( this, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( -1,40 ), wxTE_READONLY|wxTE_CENTRE );
	bSizer2->Add( m_LocoSpeed, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 2 );
	
	m_LocoSlider = new Slider(this, 35,120);
	bSizer2->Add( m_LocoSlider, 0, wxALL|wxALIGN_CENTER_HORIZONTAL, 5 );
	
	fgSizer1->Add( bSizer2, 0, wxEXPAND|wxALIGN_TOP, 0 );
	
	wxBoxSizer* m_FunctionBox;
	m_FunctionBox = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* m_FunctionGrid;
	m_FunctionGrid = new wxFlexGridSizer( 0, 3, 0, 0 );
	m_FunctionGrid->AddGrowableCol( 0 );
	m_FunctionGrid->AddGrowableCol( 1 );
	m_FunctionGrid->AddGrowableCol( 2 );
	m_FunctionGrid->SetFlexibleDirection( wxBOTH );
	m_FunctionGrid->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_LB1 = new LEDButton(this, _("F1"), 50, 25, true);
	m_FunctionGrid->Add( m_LB1, 0, wxALL, 5 );
	
	m_F2 = new wxButton( this, wxID_ANY, wxT("F2"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F2->SetDefault(); 
	m_FunctionGrid->Add( m_F2, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_F3 = new wxButton( this, wxID_ANY, wxT("F3"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F3->SetDefault(); 
	m_FunctionGrid->Add( m_F3, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_F4 = new wxButton( this, wxID_ANY, wxT("F4"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F4->SetDefault(); 
	m_FunctionGrid->Add( m_F4, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxBOTTOM, 2 );
	
	m_F5 = new wxButton( this, wxID_ANY, wxT("F5"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F5->SetDefault(); 
	m_FunctionGrid->Add( m_F5, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_F6 = new wxButton( this, wxID_ANY, wxT("F6"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F6->SetDefault(); 
	m_FunctionGrid->Add( m_F6, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_F7 = new wxButton( this, wxID_ANY, wxT("F7"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F7->SetDefault(); 
	m_FunctionGrid->Add( m_F7, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxBOTTOM, 2 );
	
	m_F8 = new wxButton( this, wxID_ANY, wxT("F8"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F8->SetDefault(); 
	m_FunctionGrid->Add( m_F8, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_F9 = new wxButton( this, wxID_ANY, wxT("F9"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F9->SetDefault(); 
	m_FunctionGrid->Add( m_F9, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_F10 = new wxButton( this, wxID_ANY, wxT("F10"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F10->SetDefault(); 
	m_FunctionGrid->Add( m_F10, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxBOTTOM, 2 );
	
	m_F11 = new wxButton( this, wxID_ANY, wxT("F11"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F11->SetDefault(); 
	m_FunctionGrid->Add( m_F11, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_F12 = new wxButton( this, wxID_ANY, wxT("F12"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F12->SetDefault(); 
	m_FunctionGrid->Add( m_F12, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_FN = new wxButton( this, wxID_ANY, wxT("Fn"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_FN->SetDefault(); 
	m_FunctionGrid->Add( m_FN, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxBOTTOM, 2 );
	
	m_F13 = new wxButton( this, wxID_ANY, wxT("F13"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F13->SetDefault(); 
	m_FunctionGrid->Add( m_F13, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_F14 = new wxButton( this, wxID_ANY, wxT("F14"), wxDefaultPosition, wxSize( 50,-1 ), 0 );
	m_F14->SetDefault(); 
	m_FunctionGrid->Add( m_F14, 0, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_FunctionBox->Add( m_FunctionGrid, 0, wxEXPAND|wxRIGHT, 5 );
	
	wxFlexGridSizer* fgSizer3;
	fgSizer3 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer3->AddGrowableCol( 1 );
	fgSizer3->SetFlexibleDirection( wxBOTH );
	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_FG = new wxButton( this, wxID_ANY, wxT("FG"), wxDefaultPosition, wxDefaultSize, 0 );
	m_FG->SetDefault(); 
	fgSizer3->Add( m_FG, 0, wxALIGN_CENTER_HORIZONTAL|wxALIGN_TOP|wxBOTTOM, 2 );
	
	m_Dir = new wxBitmapButton( this, wxID_ANY, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	m_Dir->SetDefault(); 
	fgSizer3->Add( m_Dir, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL|wxLEFT|wxBOTTOM, 2 );
	
	m_FunctionBox->Add( fgSizer3, 0, wxEXPAND|wxRIGHT, 5 );
	
	fgSizer1->Add( m_FunctionBox, 1, wxEXPAND|wxEXPAND, 0 );
	
	bSizer1->Add( fgSizer1, 0, wxEXPAND|wxALL, 0 );
	
	m_LocoList = new wxComboBox( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY ); 
	bSizer1->Add( m_LocoList, 0, wxEXPAND|wxALL, 4 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );
	
	m_Cancel = new wxButton( this, wxID_ANY, wxT("Cancel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Cancel->SetDefault(); 
	bSizer4->Add( m_Cancel, 0, wxALIGN_CENTER_VERTICAL|wxALL, 4 );
	
	m_Stop = new wxButton( this, wxID_ANY, wxT("Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Stop->SetDefault(); 
	bSizer4->Add( m_Stop, 1, wxALIGN_CENTER_VERTICAL|wxALL, 4 );
	
	bSizer1->Add( bSizer4, 0, wxEXPAND|wxALL, 0 );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	m_Break = new wxButton( this, wxID_ANY, wxT("BREAK"), wxDefaultPosition, wxDefaultSize, 0 );
	m_Break->SetDefault(); 
	bSizer5->Add( m_Break, 1, wxEXPAND|wxALL, 4 );
	
	bSizer1->Add( bSizer5, 0, wxEXPAND|wxALL, 0 );
	
	this->SetSizer( bSizer1 );
	this->Layout();
	bSizer1->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_LB1->Connect( wxEVT_LEFT_UP, wxMouseEventHandler( LocoCtrlDlgGen::onLB1 ), NULL, this );
}

LocoCtrlDlgGen::~LocoCtrlDlgGen()
{
	// Disconnect Events
	m_LB1->Disconnect( wxEVT_LEFT_UP, wxMouseEventHandler( LocoCtrlDlgGen::onLB1 ), NULL, this );
	
}
