#include "pudp.h"
#include "ptcp.h"
#include "test/testpudp.h"
#include "test/testptime.h"
int main(int argc, char *argv[]) {
//    testpudp();
    testptime();
    hlog(plib::getCmdOutput("cmd /c dir"));
    return 0;
}

