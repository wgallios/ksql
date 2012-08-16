#include "ksql.h"
#include "connect.h"

Ksql::Ksql(const wxString& title) : wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(600,550))
{

    // setting up menu bar
    menubar = new wxMenuBar;

    file = new wxMenu;
    file->Append(wxID_EXIT, wxT("&Quit"));

    menubar->Append(file, wxT("&File"));

    SetMenuBar(menubar);

    // menubar connectors
    Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(Ksql::OnQuit));


    wxImage::AddHandler( new wxPNGHandler);
    wxBitmap exit(wxT("images/globe.png"), wxBITMAP_TYPE_PNG);

    // sets up toolbar
    toolbar = CreateToolBar();
    toolbar->AddTool(500, exit, wxT("Connect"));
    toolbar->Realize();

    // connects menu bar
    Connect(500, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(Ksql::openConnectDialog));

    // sets up status bar
    CreateStatusBar(3);

    panel = new wxPanel(this, -1);

    Centre();
}

void Ksql::openConnectDialog(wxCommandEvent& WXUNUSED(event))
{
    std::cout << "opening connection dialog..\n";

    connectDialog(this, -1, wxT("Connect"));
}

void Ksql::OnQuit(wxCommandEvent& WXUNUSED(event))
{
    Close(true);
}
