/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 1 Question 2
    Unique assignment no: 576435
    GitHub: https://github.com/JGPorteous/COS2614_A1_Q2
 */

#ifndef PRODUCT_H
#define PRODUCT_H
#include <QtCore>
#include "vendor.h"

class Product
{
public:
    Product();
    Product(QString name, double price);
    void setSupplier(QString name, QString email, bool isManufacturer);
    QString getManufacturer();
    QString toString();

};

#endif // PRODUCT_H
