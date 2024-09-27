#include <iostream>
#include <string>
#include "log.h"
using namespace std;

int Out_log(int loglevel, string logmessage)
{
    system("chcp 65001");

    if (loglevel == 0 && logmessage == "")
    {
        cout << "ERR_NO_INPUT" << endl;
        return 1;
    }
    if (loglevel > 2 && loglevel < 0)
    {
        cout << "ERR_INPUT_ERROR" << endl;
        return 2;
    }
    switch (loglevel)
    {
    case 0:
        cout << "ERROR: " << logmessage << endl;
        break;
    case 1:
        cout << "WARNING: " << logmessage << endl;
        break;
    case 2:
        cout << "INFO: " << logmessage << endl;
        break;
    default:
        cout << "INFO: " << logmessage << endl;
        break;
   }

    cout << "SUCCESS" << endl;
    system("pause");
    return 0;
}