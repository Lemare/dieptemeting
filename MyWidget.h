#include <QtGui>

class MyWidget : public QWidget
{
//   Q_OBJECT

public:
   MyWidget(QWidget *parent = 0);

protected:
   virtual void paintEvent(QPaintEvent *event);
};


MyWidget::MyWidget(QWidget *parent)
     : QWidget(parent)
{
     setWindowTitle("MyWidget");
     resize(200, 200);
}

void MyWidget::paintEvent(QPaintEvent *event)
{
   QPainter painter(this);

   painter.drawLine(0, 0, 100, 150);


   // maak een lijst van 3 punten
   QPolygon polygon(3);
   polygon.putPoints(0, 3, 40,40, 100,40, 100,100);

   // stel een kleur is
   painter.setBrush(QColor(200, 100, 40));
   //painter.setBrush(Qt::cyan);
   
   // geen pen voor de rand
   painter.setPen(Qt::NoPen);
   
   // teken de veelhoek
   painter.drawPolygon(polygon);
}

int main(int argc, char *argv[])
{
   QApplication app(argc, argv);
   MyWidget window;
   window.resize(320, 240);
   window.setWindowTitle(QApplication::translate("childwidget", "Child widget"));
   window.show();

   return app.exec();
}