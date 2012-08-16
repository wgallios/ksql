#include <wx/wx.h>
#include <wx/menu.h>

class Ksql : public wxFrame
{
    public:
        Ksql(const wxString& title);

        void OnQuit(wxCommandEvent& event);
        void openConnectDialog(wxCommandEvent& event);


        wxMenuBar *menubar;
        wxMenu *file;

        wxToolBar *toolbar;

        wxPanel *panel;
};
