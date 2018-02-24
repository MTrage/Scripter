#include "scripter.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    // Read the command line values and save them in TMP files for Scripter and other applications.
    // This is a simple way to read out Scripter data and to check if Scripter is currently running.
    // After closing Scripter will be deleted this data.

    QString IV1,IV2,IV3;
    IV1 = argv[1]; system(qPrintable("echo " + IV1 +" > /tmp/Scripter-Theme"));
    IV2 = argv[2]; system(qPrintable("echo " + IV2 +" > /tmp/Scripter-Path"));
    IV3 = argv[3]; system(qPrintable("echo " + IV3 +" > /tmp/Scripter-SH-Path"));
    system(qPrintable("pidof Scripter | wc -w > /tmp/Scripter-Task"));

    QApplication a(argc, argv);
    Scripter w;
    w.show();
    return a.exec();
}
// Heute ist nicht alle Tage, ich komm wieder, keine Frage!
