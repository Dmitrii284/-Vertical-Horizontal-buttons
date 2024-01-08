#include <iostream>
#include <QtWidgets>
#include <QApplication>

int main(int argc, char** argv) {

    QApplication app(argc, argv);
    QWidget wgt;

    QPushButton* pcmdA = new QPushButton("A");
    QPushButton* pcmdB = new QPushButton("B");
    QPushButton* pcmdC = new QPushButton("C");
    QPushButton* pcmdD = new QPushButton("D");

    QVBoxLayout* pvbxLayout = new QVBoxLayout;
    QHBoxLayout* phbxLayout = new QHBoxLayout;
    phbxLayout->setContentsMargins(10,10,10,10);
    phbxLayout->setSpacing(20);
    phbxLayout->addWidget(pcmdC);
    phbxLayout->addWidget(pcmdD);



    pvbxLayout->setContentsMargins(10,10,10,10);
    pvbxLayout->setSpacing(20);
    pvbxLayout->addWidget(pcmdA);
    pvbxLayout->addWidget(pcmdB);

    pvbxLayout->addLayout(phbxLayout);
    wgt.setLayout(pvbxLayout);
    wgt.show();
    return app.exec();
}
