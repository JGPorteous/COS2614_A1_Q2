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

QTextStream out(stdout, QIODevice::WriteOnly);
QTextStream in(stdin, QIODevice::ReadOnly);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    out << "Welcome to Assignment 1, Question 2 by Justin Porteous" << endl;
    out << "------------------------------------------------------" << endl;


    //Declare Local Variables
    QString sProductName = "";
    QString sProductPrice = "";
    double dProductPrice = 0;
    QString sVendorName = "";
    QString sVendorEmail = "";
    QString sVendorIsManufacturer = "";
    bool bVendorIsManufacturer = false;

    //Get user Input - Product Name
    out << endl << "Enter Product's' Name: ";
    out.flush();
    sProductName = in.readLine();

    //Get user Input - Product Price
    out << "Enter Product's' Price: ";
    out.flush();
    sProductPrice = in.readLine();
    dProductPrice = sProductPrice.toDouble();

    //Get user Input - Vendor's Name
    out << endl << "Enter Vendor's Name: ";
    out.flush();
    sVendorName = in.readLine();

    //Get user Input - Vendor's Email
    out << "Enter Vendor's Email: ";
    out.flush();
    sVendorEmail = in.readLine();

    //Get user Input - Is Vendor the Manucaturer?
    out << "Is the Vendor the Manufacturer [yes/no]: ";
    out.flush();
    sVendorIsManufacturer = in.readLine();
    bVendorIsManufacturer = (sVendorIsManufacturer.toLower() == "yes") ? true : false;

    //Create Objects
    Product productCatpured(sProductName, dProductPrice);
    productCatpured.setSupplier(sVendorName, sVendorEmail, bVendorIsManufacturer);

    //Display info Captures
    out << endl << "Thank you, the details of the product are:" << endl << productCatpured.toString() << endl << endl;
    out.flush();


    //return a.exec();
    return 0;
}
