#include <QWidget>

class MyWidget : public QWidget
{
//   Q_OBJECT

    
public:
   MyWidget(QWidget *parent = 0);
   void del();
   
protected:
   virtual void paintEvent(QPaintEvent *event);
};


