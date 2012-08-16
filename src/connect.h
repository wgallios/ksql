#include <wx/wx.h>

class connectDialog : public wxDialog
{
    public:
        connectDialog(wxWindow * parent, wxWindowID id, 
                const wxString& title,
                const wxPoint& pos = wxDefaultPosition,
                const wxSize& size = wxDefaultSize,
                long style = wxDEFAULT_DIALOG_STYLE);

        wxPanel *panel;
};
