/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 1 Question 2
    Unique assignment no: 576435
    GitHub: https://github.com/JGPorteous/COS2614_A1_Q2
 */

#include <QtCore/QCoreApplication>
#include <product.h>
#include <QTextStream>

QTextStream stdout(stdout);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Product p("Butter",25);
    stdout << p.getManufacturer();
    stdout << p.toString();

    stdout << "\n";

    Product j("Rasberry Jam",15);
    j.setSupplier("Jam Incorporated","jam@jaminc.co.za",true);
    stdout << j.getManufacturer();
    stdout << j.toString();


    return a.exec();
}
