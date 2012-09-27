///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Sep  8 2010)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "bidibidendlggen.h"

///////////////////////////////////////////////////////////////////////////

BidibIdentDlgGen::BidibIdentDlgGen( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxHORIZONTAL );
	
	m_Tree = new wxTreeCtrl( this, wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), wxTR_DEFAULT_STYLE|wxTR_SINGLE|wxSUNKEN_BORDER );
	bSizer2->Add( m_Tree, 1, wxALL|wxEXPAND, 5 );
	
	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer2->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );
	
	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxVERTICAL );
	
	wxFlexGridSizer* fgSizer8;
	fgSizer8 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer8->AddGrowableCol( 1 );
	fgSizer8->SetFlexibleDirection( wxBOTH );
	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );
	
	m_labPath = new wxStaticText( this, wxID_ANY, wxT("Path"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labPath->Wrap( -1 );
	fgSizer8->Add( m_labPath, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Path = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
	fgSizer8->Add( m_Path, 0, wxEXPAND|wxALL, 5 );
	
	m_labUID = new wxStaticText( this, wxID_ANY, wxT("Unique-ID"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labUID->Wrap( -1 );
	fgSizer8->Add( m_labUID, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_UID = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxTE_READONLY );
	fgSizer8->Add( m_UID, 0, wxEXPAND|wxALL, 5 );
	
	m_labVendor = new wxStaticText( this, wxID_ANY, wxT("Vendor"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labVendor->Wrap( -1 );
	fgSizer8->Add( m_labVendor, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_VendorName = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), wxTE_READONLY );
	fgSizer8->Add( m_VendorName, 0, wxEXPAND|wxALL, 5 );
	
	m_labClass = new wxStaticText( this, wxID_ANY, wxT("Class"), wxDefaultPosition, wxDefaultSize, 0 );
	m_labClass->Wrap( -1 );
	fgSizer8->Add( m_labClass, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_Class = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), wxTE_READONLY );
	fgSizer8->Add( m_Class, 0, wxEXPAND|wxALL, 5 );
	
	bSizer4->Add( fgSizer8, 0, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxHORIZONTAL );
	
	m_Setup = new wxButton( this, wxID_ANY, wxT("Setup..."), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer3->Add( m_Setup, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	m_stdButtons = new wxStdDialogButtonSizer();
	m_stdButtonsOK = new wxButton( this, wxID_OK );
	m_stdButtons->AddButton( m_stdButtonsOK );
	m_stdButtonsCancel = new wxButton( this, wxID_CANCEL );
	m_stdButtons->AddButton( m_stdButtonsCancel );
	m_stdButtons->Realize();
	bSizer3->Add( m_stdButtons, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );
	
	bSizer4->Add( bSizer3, 0, wxALIGN_RIGHT, 5 );
	
	bSizer2->Add( bSizer4, 1, wxEXPAND, 5 );
	
	bSizer7->Add( bSizer2, 1, wxEXPAND, 5 );
	
	this->SetSizer( bSizer7 );
	this->Layout();
	bSizer7->Fit( this );
	
	this->Centre( wxBOTH );
	
	// Connect Events
	m_Tree->Connect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( BidibIdentDlgGen::onTreeSelChanged ), NULL, this );
	m_Setup->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onSetup ), NULL, this );
	m_stdButtonsCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onCancel ), NULL, this );
	m_stdButtonsOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onOK ), NULL, this );
}

BidibIdentDlgGen::~BidibIdentDlgGen()
{
	// Disconnect Events
	m_Tree->Disconnect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( BidibIdentDlgGen::onTreeSelChanged ), NULL, this );
	m_Setup->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onSetup ), NULL, this );
	m_stdButtonsCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onCancel ), NULL, this );
	m_stdButtonsOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onOK ), NULL, this );
	
}
