
#include "connect.h"

connectDialog::connectDialog(wxWindow * parent, wxWindowID id, 
        const wxString& title,
        const wxPoint& position,
        const wxSize& size,
        long style) : wxDialog(parent, id, title, position, size, style)
{
    std::cout << "connect dialog has been initialized!\n";

    panel = new wxPanel(this, -1);

    wxSize sz;

    sz.SetWidth(size.GetWidth() - 20);
    sz.SetHeight(size.GetHeight() - 40);

    Centre();
    ShowModal();

    Destroy();
}
