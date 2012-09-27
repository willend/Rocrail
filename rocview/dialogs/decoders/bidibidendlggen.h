///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __bidibidendlggen__
#define __bidibidendlggen__

#include <wx/treectrl.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/string.h>
#include <wx/statline.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/button.h>
#include <wx/dialog.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class BidibIdentDlgGen
///////////////////////////////////////////////////////////////////////////////
class BidibIdentDlgGen : public wxDialog 
{
	private:
	
	protected:
		wxTreeCtrl* m_Tree;
		wxStaticLine* m_staticline1;
		wxStaticText* m_labPath;
		wxTextCtrl* m_Path;
		wxStaticText* m_labUID;
		wxTextCtrl* m_UID;
		wxStaticText* m_labVendor;
		wxTextCtrl* m_VendorName;
		wxStaticText* m_labClass;
		wxTextCtrl* m_Class;
		wxButton* m_Setup;
		wxStdDialogButtonSizer* m_stdButtons;
		wxButton* m_stdButtonsOK;
		wxButton* m_stdButtonsCancel;
		
		// Virtual event handlers, overide them in your derived class
		virtual void onTreeSelChanged( wxTreeEvent& event ) { event.Skip(); }
		virtual void onSetup( wxCommandEvent& event ) { event.Skip(); }
		virtual void onCancel( wxCommandEvent& event ) { event.Skip(); }
		virtual void onOK( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		BidibIdentDlgGen( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("BiDiB Notifier"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER );
		~BidibIdentDlgGen();
	
};

#endif //__bidibidendlggen__
