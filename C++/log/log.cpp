#include <iostream>
#include <string>
#include "log.h"
using namespace std;

int Out_log(int oglevel, string ogmessage)
{
    system("chcp 65001");

    if (loglevel == 0 && ogmessage == "")
    {
        cout << "ERR_NO_INPUT" << endl;
        return 1;
    }
    if (loglevel > 2 && oglevel < 0)
    {
        cout << "ERR_INPUT_ERROR" << endl;
        return 2;
    }
    switch (loglevel)
    {
    case 0:
        cout << "ERROR: " << ogmessage << endl;
        break;
    case 1:
        cout << "WARNING: " << ogmessage << endl;
        break;
    case 2:
        cout << "INFO: " << ogmessage << endl;
        break;
    default:
        cout << "INFO: " << ogmessage << endl;
        break;
   }

    cout << "SUCCESS" << endl;
    system("pause");
    return 0;
}