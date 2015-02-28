/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 1 Question 2
    Unique assignment no: 576435
    GitHub: https://github.com/JGPorteous/COS2614_A1_Q2
 */

#ifndef VENDOR_H
#define VENDOR_H
#include <QtCore>

class Vendor
{
public:
    Vendor();
    void SetDetails(QString name, QString email, bool isManufacturer);
    bool isManufacturer();
    QString getName();
    QString toString();
    QString boolToYesNo(bool boolToConvert);

};

#endif // VENDOR_H
