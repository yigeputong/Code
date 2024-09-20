#include "log.h"
#include <iostream>
using namespace std;

void init_log() {
    log("initializing log");
}

void log (const char* message) {
    cout << message << endl;
}