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

        //wxBoxSizer *hboxPanel;
        //wxBoxSizer *vbox;
        wxBoxSizer *hbox;

        wxFlexGridSizer *fgs;

        wxTextCtrl *hostTxt;
        wxTextCtrl *userTxt;
        wxTextCtrl *passTxt;
        wxTextCtrl *portTxt;
};
