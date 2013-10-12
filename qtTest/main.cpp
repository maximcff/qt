#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget wgt;

    QPushButton *cmd1 = new QPushButton("A");
    QPushButton *cmd2 = new QPushButton("B");
    QPushButton *cmd3 = new QPushButton("C");


    QBoxLayout *layout = new QBoxLayout(QBoxLayout::LeftToRight);
    layout->addWidget(cmd1,1);
    layout->addWidget(cmd2,2);
    layout->addWidget(cmd3,2);

    wgt.setLayout(layout);

    wgt.show();


    return a.exec();
}
