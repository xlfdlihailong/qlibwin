#include "qlib.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qlib::initLog("xlfd.log");
    hlog(plib::pwd());
    hlog(plib::xshzky("172.16.14.2","ifconfig|grep inet"));
//    (plib::ssh("172.16.11.6"));
//    hlog(plib::xshzky("172.16.14.2","top -n 1"));
//    hlog(plib::xsh("106.12.222.93","ps -ef|grep ssh"));
//    hlog(plib::xsh("106.12.222.93","df -h"));
//    hlog(plib::xsh("106.12.222.93","ll"));
//    plib::ssh("106.12.222.93","npants0703***");
//    plib::sshThread("106.12.222.93","npants0703***");
//    plib::ssh("zdg0ynrf1d.54http.tech:12698","scfwq_325");

//    plib::vnc("x5glk6u6td.54http.tech:40527","sjcs_325");
//    pscp scp("106.12.222.93");
//    scp.uploadThread("icons","/root",funshow);
    //这个ui界面会弹黑框,这个不会弹
//    pstring cmd="pscp.exe -r -l root -pw npants0703*** qss 106.12.222.93:/root";
//    plib::getCmdDirect(cmd);


//    plib::getCmdOutput(cmd);
//    std::thread([]{
//        hlog(plib::xsh("106.12.222.93","ls -l /root/Desktop |grep -v total| awk '{print $5,$9,$1}'"));
//    }).detach();
//    plib::sleep(2000);
    //        hlog(plib::xsh("192.168.72.216","ifconfig"));
//            hlog(plib::xsh("192.168.72.216","ls -al"));
    //    hlog(plib::xsh("172.16.11.6","xsh scfwq_325 130.242.60.241 'ifconfig|grep inet'","scfwq_325"));

//            hlog(plib::getCmdOutputFun("qxshnofile.exe 106.12.222.93 \"df -h\" npants0703*** root 22",show));
//    hlog(plib::getCmdOutput("qxshnofile.exe 106.12.222.93 pwd npants0703*** root 22"));
//            hlog(getCMD("qxshnofile.exe 106.12.222.93 \"df -h\" npants0703*** root 22"));
//    xprocess proc("qxshnofile.exe",QStringList()<<"106.12.222.93"<<"ifconfig"<<"npants0703***"<<"root"<<"22");
//    xprocess proc("C:\\Users\\Administrator\\Desktop\\xlib\\windows\\projects\\qtest\\debug\\qtest.exe");
//    proc.open();
    return a.exec();
}
