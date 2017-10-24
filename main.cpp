#include <QApplication>
#include "MyWidget.h"

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
   MyWidget window;
   window.resize(1000, 1000);
   window.setWindowTitle(QApplication::translate("childwidget", "Boot"));
   window.show();

   
   return app.exec();

}