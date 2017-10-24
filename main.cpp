#include <QApplication>
#include "MyWidget.h"

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
   MyWidget window;
   window.resize(500, 500);
   window.setWindowTitle(QApplication::translate("childwidget", "Child widget"));
   window.show();

   
   return app.exec();

}