#include <QApplication>
#include "MyWidget.h"

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
   MyWidget window;
   window.resize(900, 500);
   window.setWindowTitle(QApplication::translate("childwidget", "Boot met metingen"));
   window.show();

   
   return app.exec();

}