
#include "main.h"
#include "ksql.h"
#include "connect.h"

IMPLEMENT_APP(ksqlApp)

bool ksqlApp::OnInit()
{

    Ksql *ksql = new Ksql(wxT("Ksql"));

    ksql->Show(true);

    return true;
}
