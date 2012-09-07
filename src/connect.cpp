
#include "connect.h"

connectDialog::connectDialog(wxWindow * parent, wxWindowID id, 
        const wxString& title,
        const wxPoint& position,
        const wxSize& size,
        long style) : wxDialog(parent, id, title, position, size, style)
{
    std::cout << "connect dialog has been initialized!\n";

    wxSize sz;
    panel = new wxPanel(this, -1);

    hbox = new wxBoxSizer(wxHORIZONTAL);

    fgs = new wxFlexGridSizer(2, 5);


    // setups inputs
    hostTxt = new wxTextCtrl(panel, -1, wxT(""));
    userTxt = new wxTextCtrl(panel, -1, wxT(""));
    passTxt = new wxTextCtrl(panel, -1, wxT(""));
    portTxt = new wxTextCtrl(panel, -1, wxT(""));


    fgs->Add(new wxStaticText(panel, -1, wxT("Host")));
    fgs->Add(hostTxt, 1, wxEXPAND);

    fgs->Add(new wxStaticText(panel, -1, wxT("Username")));
    fgs->Add(userTxt, 1, wxEXPAND);

    fgs->Add(new wxStaticText(panel, -1, wxT("Password")));
    fgs->Add(passTxt, 1, wxEXPAND);

    fgs->Add(new wxStaticText(panel, -1, wxT("Port")));
    fgs->Add(portTxt, 1, wxEXPAND);

    hbox->Add(fgs, 1, wxALL | wxEXPAND, 15);
    panel->SetSizer(hbox);


    sz.SetWidth(size.GetWidth() - 20);
    sz.SetHeight(size.GetHeight() - 40);

    Centre();
    ShowModal();

    Destroy();
}
