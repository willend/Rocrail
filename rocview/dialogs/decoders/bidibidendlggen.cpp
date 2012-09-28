///////////////////////////////////////////////////////////////////////////// C++ code generated with wxFormBuilder (version Sep 12 2010)// http://www.wxformbuilder.org///// PLEASE DO "NOT" EDIT THIS FILE!///////////////////////////////////////////////////////////////////////////#include "bidibidendlggen.h"///////////////////////////////////////////////////////////////////////////BidibIdentDlgGen::BidibIdentDlgGen( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style ){	this->SetSizeHints( wxDefaultSize, wxDefaultSize );		wxBoxSizer* bSizer7;	bSizer7 = new wxBoxSizer( wxVERTICAL );		m_notebook1 = new wxNotebook( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0 );	m_IndexPanel = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );	wxBoxSizer* bSizer2;	bSizer2 = new wxBoxSizer( wxHORIZONTAL );		m_Tree = new wxTreeCtrl( m_IndexPanel, wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), wxTR_DEFAULT_STYLE|wxTR_SINGLE|wxSUNKEN_BORDER );	bSizer2->Add( m_Tree, 0, wxALL|wxEXPAND, 5 );		m_staticline1 = new wxStaticLine( m_IndexPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );	bSizer2->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );		wxBoxSizer* bSizer4;	bSizer4 = new wxBoxSizer( wxVERTICAL );		wxFlexGridSizer* fgSizer8;	fgSizer8 = new wxFlexGridSizer( 0, 2, 0, 0 );	fgSizer8->AddGrowableCol( 1 );	fgSizer8->SetFlexibleDirection( wxBOTH );	fgSizer8->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );		m_labPath = new wxStaticText( m_IndexPanel, wxID_ANY, wxT("Path"), wxDefaultPosition, wxDefaultSize, 0 );	m_labPath->Wrap( -1 );	fgSizer8->Add( m_labPath, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		m_Path = new wxTextCtrl( m_IndexPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY );	fgSizer8->Add( m_Path, 0, wxEXPAND|wxALL, 5 );		m_labUID = new wxStaticText( m_IndexPanel, wxID_ANY, wxT("Unique-ID"), wxDefaultPosition, wxDefaultSize, 0 );	m_labUID->Wrap( -1 );	fgSizer8->Add( m_labUID, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		m_UID = new wxTextCtrl( m_IndexPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 100,-1 ), wxTE_READONLY );	fgSizer8->Add( m_UID, 0, wxEXPAND|wxALL, 5 );		m_labVendor = new wxStaticText( m_IndexPanel, wxID_ANY, wxT("Vendor"), wxDefaultPosition, wxDefaultSize, 0 );	m_labVendor->Wrap( -1 );	fgSizer8->Add( m_labVendor, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		m_VendorName = new wxTextCtrl( m_IndexPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( -1,-1 ), wxTE_READONLY );	fgSizer8->Add( m_VendorName, 0, wxEXPAND|wxALL, 5 );		m_labClass = new wxStaticText( m_IndexPanel, wxID_ANY, wxT("Class"), wxDefaultPosition, wxDefaultSize, 0 );	m_labClass->Wrap( -1 );	fgSizer8->Add( m_labClass, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		m_Class = new wxTextCtrl( m_IndexPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 200,-1 ), wxTE_READONLY );	fgSizer8->Add( m_Class, 0, wxEXPAND|wxALL, 5 );		bSizer4->Add( fgSizer8, 0, wxEXPAND, 5 );		bSizer2->Add( bSizer4, 1, wxEXPAND, 5 );		m_IndexPanel->SetSizer( bSizer2 );	m_IndexPanel->Layout();	bSizer2->Fit( m_IndexPanel );	m_notebook1->AddPage( m_IndexPanel, wxT("Index"), false );	m_FeaturesPanel = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );	wxBoxSizer* bSizer6;	bSizer6 = new wxBoxSizer( wxVERTICAL );		wxBoxSizer* bSizer8;	bSizer8 = new wxBoxSizer( wxHORIZONTAL );		m_FeatureList = new wxListBox( m_FeaturesPanel, wxID_ANY, wxDefaultPosition, wxSize( 200,-1 ), 0, NULL, wxLB_HSCROLL ); 	bSizer8->Add( m_FeatureList, 0, wxALL|wxEXPAND, 5 );		m_staticline2 = new wxStaticLine( m_FeaturesPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );	bSizer8->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );		wxBoxSizer* bSizer9;	bSizer9 = new wxBoxSizer( wxVERTICAL );		wxFlexGridSizer* fgSizer3;	fgSizer3 = new wxFlexGridSizer( 0, 2, 0, 0 );	fgSizer3->AddGrowableCol( 1 );	fgSizer3->SetFlexibleDirection( wxBOTH );	fgSizer3->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );		m_labIID = new wxStaticText( m_FeaturesPanel, wxID_ANY, wxT("IID"), wxDefaultPosition, wxDefaultSize, 0 );	m_labIID->Wrap( -1 );	fgSizer3->Add( m_labIID, 0, wxALL, 5 );		m_IID = new wxTextCtrl( m_FeaturesPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );	fgSizer3->Add( m_IID, 0, wxALL|wxEXPAND, 5 );		m_staticline3 = new wxStaticLine( m_FeaturesPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );	fgSizer3->Add( m_staticline3, 0, wxEXPAND | wxALL, 5 );		m_staticline4 = new wxStaticLine( m_FeaturesPanel, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );	fgSizer3->Add( m_staticline4, 0, wxEXPAND | wxALL, 5 );		m_labFeature = new wxStaticText( m_FeaturesPanel, wxID_ANY, wxT("Feature"), wxDefaultPosition, wxDefaultSize, 0 );	m_labFeature->Wrap( -1 );	fgSizer3->Add( m_labFeature, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		m_Feature = new wxSpinCtrl( m_FeaturesPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), wxSP_ARROW_KEYS, 0, 255, 0 );	fgSizer3->Add( m_Feature, 0, wxALL, 5 );		m_labFeatureValue = new wxStaticText( m_FeaturesPanel, wxID_ANY, wxT("Value"), wxDefaultPosition, wxDefaultSize, 0 );	m_labFeatureValue->Wrap( -1 );	fgSizer3->Add( m_labFeatureValue, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		m_FeatureValue = new wxSpinCtrl( m_FeaturesPanel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize( 120,-1 ), wxSP_ARROW_KEYS, 0, 10, 0 );	fgSizer3->Add( m_FeatureValue, 0, wxALL, 5 );		bSizer9->Add( fgSizer3, 1, wxEXPAND, 5 );		wxBoxSizer* bSizer71;	bSizer71 = new wxBoxSizer( wxHORIZONTAL );		m_FeaturesGet = new wxButton( m_FeaturesPanel, wxID_ANY, wxT("Get"), wxDefaultPosition, wxDefaultSize, 0 );	bSizer71->Add( m_FeaturesGet, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		m_FeatureSet = new wxButton( m_FeaturesPanel, wxID_ANY, wxT("Set"), wxDefaultPosition, wxDefaultSize, 0 );	bSizer71->Add( m_FeatureSet, 0, wxALL, 5 );		bSizer9->Add( bSizer71, 0, wxALIGN_RIGHT, 5 );		bSizer8->Add( bSizer9, 1, wxEXPAND, 5 );		bSizer6->Add( bSizer8, 1, wxEXPAND, 5 );		m_FeaturesPanel->SetSizer( bSizer6 );	m_FeaturesPanel->Layout();	bSizer6->Fit( m_FeaturesPanel );	m_notebook1->AddPage( m_FeaturesPanel, wxT("Features"), false );	m_ServoPanel = new wxPanel( m_notebook1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );	wxBoxSizer* bSizer10;	bSizer10 = new wxBoxSizer( wxHORIZONTAL );		wxFlexGridSizer* fgSizer4;	fgSizer4 = new wxFlexGridSizer( 0, 3, 0, 0 );	fgSizer4->SetFlexibleDirection( wxBOTH );	fgSizer4->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );		m_labServoLeft = new wxStaticText( m_ServoPanel, wxID_ANY, wxT("L"), wxDefaultPosition, wxSize( -1,-1 ), 0 );	m_labServoLeft->Wrap( -1 );	fgSizer4->Add( m_labServoLeft, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );		m_labServoRight = new wxStaticText( m_ServoPanel, wxID_ANY, wxT("R"), wxDefaultPosition, wxDefaultSize, 0 );	m_labServoRight->Wrap( -1 );	fgSizer4->Add( m_labServoRight, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5 );		m_labServoSpeed = new wxStaticText( m_ServoPanel, wxID_ANY, wxT("V"), wxDefaultPosition, wxSize( -1,-1 ), 0 );	m_labServoSpeed->Wrap( -1 );	fgSizer4->Add( m_labServoSpeed, 0, wxALL|wxALIGN_CENTER_VERTICAL|wxALIGN_CENTER_HORIZONTAL, 5 );		m_ServoLeft = new wxSlider( m_ServoPanel, wxID_ANY, 0, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_AUTOTICKS|wxSL_INVERSE|wxSL_VERTICAL );	fgSizer4->Add( m_ServoLeft, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );		m_ServoRight = new wxSlider( m_ServoPanel, wxID_ANY, 0, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_AUTOTICKS|wxSL_INVERSE|wxSL_VERTICAL );	fgSizer4->Add( m_ServoRight, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );		m_ServoSpeed = new wxSlider( m_ServoPanel, wxID_ANY, 0, 0, 255, wxDefaultPosition, wxDefaultSize, wxSL_AUTOTICKS|wxSL_INVERSE|wxSL_VERTICAL );	fgSizer4->Add( m_ServoSpeed, 0, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL|wxEXPAND, 5 );		bSizer10->Add( fgSizer4, 0, 0, 5 );		wxFlexGridSizer* fgSizer5;	fgSizer5 = new wxFlexGridSizer( 0, 2, 0, 0 );	fgSizer5->SetFlexibleDirection( wxBOTH );	fgSizer5->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );		m_labServoPort1 = new wxStaticText( m_ServoPanel, wxID_ANY, wxT("Port"), wxDefaultPosition, wxDefaultSize, 0 );	m_labServoPort1->Wrap( -1 );	fgSizer5->Add( m_labServoPort1, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		m_labServoPort = new wxSpinCtrl( m_ServoPanel, wxID_ANY, wxT("0"), wxDefaultPosition, wxSize( 80,-1 ), wxSP_ARROW_KEYS, 0, 127, 0 );	fgSizer5->Add( m_labServoPort, 0, wxALL|wxALIGN_CENTER_VERTICAL, 5 );		bSizer10->Add( fgSizer5, 0, 0, 5 );		m_ServoPanel->SetSizer( bSizer10 );	m_ServoPanel->Layout();	bSizer10->Fit( m_ServoPanel );	m_notebook1->AddPage( m_ServoPanel, wxT("Servo"), false );		bSizer7->Add( m_notebook1, 1, wxEXPAND|wxTOP|wxRIGHT|wxLEFT, 5 );		m_stdButtons = new wxStdDialogButtonSizer();	m_stdButtonsOK = new wxButton( this, wxID_OK );	m_stdButtons->AddButton( m_stdButtonsOK );	m_stdButtonsCancel = new wxButton( this, wxID_CANCEL );	m_stdButtons->AddButton( m_stdButtonsCancel );	m_stdButtons->Realize();	bSizer7->Add( m_stdButtons, 0, wxALIGN_CENTER_VERTICAL|wxEXPAND|wxALIGN_RIGHT|wxBOTTOM|wxRIGHT|wxLEFT, 5 );		this->SetSizer( bSizer7 );	this->Layout();	bSizer7->Fit( this );		this->Centre( wxBOTH );		// Connect Events	m_Tree->Connect( wxEVT_COMMAND_TREE_BEGIN_DRAG, wxTreeEventHandler( BidibIdentDlgGen::onBeginDrag ), NULL, this );	m_Tree->Connect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( BidibIdentDlgGen::onItemActivated ), NULL, this );	m_Tree->Connect( wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, wxTreeEventHandler( BidibIdentDlgGen::onItemRightClick ), NULL, this );	m_Tree->Connect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( BidibIdentDlgGen::onTreeSelChanged ), NULL, this );	m_FeatureList->Connect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( BidibIdentDlgGen::onFeatureSelect ), NULL, this );	m_FeaturesGet->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onFeaturesGet ), NULL, this );	m_FeatureSet->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onFeatureSet ), NULL, this );	m_ServoLeft->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( BidibIdentDlgGen::onServoLeft ), NULL, this );	m_ServoRight->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( BidibIdentDlgGen::onServoRight ), NULL, this );	m_ServoSpeed->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( BidibIdentDlgGen::onServoSpeed ), NULL, this );	m_labServoPort->Connect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BidibIdentDlgGen::onServoPort ), NULL, this );	m_stdButtonsCancel->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onCancel ), NULL, this );	m_stdButtonsOK->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onOK ), NULL, this );}BidibIdentDlgGen::~BidibIdentDlgGen(){	// Disconnect Events	m_Tree->Disconnect( wxEVT_COMMAND_TREE_BEGIN_DRAG, wxTreeEventHandler( BidibIdentDlgGen::onBeginDrag ), NULL, this );	m_Tree->Disconnect( wxEVT_COMMAND_TREE_ITEM_ACTIVATED, wxTreeEventHandler( BidibIdentDlgGen::onItemActivated ), NULL, this );	m_Tree->Disconnect( wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK, wxTreeEventHandler( BidibIdentDlgGen::onItemRightClick ), NULL, this );	m_Tree->Disconnect( wxEVT_COMMAND_TREE_SEL_CHANGED, wxTreeEventHandler( BidibIdentDlgGen::onTreeSelChanged ), NULL, this );	m_FeatureList->Disconnect( wxEVT_COMMAND_LISTBOX_SELECTED, wxCommandEventHandler( BidibIdentDlgGen::onFeatureSelect ), NULL, this );	m_FeaturesGet->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onFeaturesGet ), NULL, this );	m_FeatureSet->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onFeatureSet ), NULL, this );	m_ServoLeft->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( BidibIdentDlgGen::onServoLeft ), NULL, this );	m_ServoRight->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( BidibIdentDlgGen::onServoRight ), NULL, this );	m_ServoSpeed->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( BidibIdentDlgGen::onServoSpeed ), NULL, this );	m_labServoPort->Disconnect( wxEVT_COMMAND_SPINCTRL_UPDATED, wxSpinEventHandler( BidibIdentDlgGen::onServoPort ), NULL, this );	m_stdButtonsCancel->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onCancel ), NULL, this );	m_stdButtonsOK->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( BidibIdentDlgGen::onOK ), NULL, this );	}