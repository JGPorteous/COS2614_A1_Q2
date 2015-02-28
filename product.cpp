/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 1 Question 2
    Unique assignment no: 576435
    GitHub: https://github.com/JGPorteous/COS2614_A1_Q2
 */
#include "product.h"
#include <QtCore>
#include "vendor.h"

QString m_Name = "";
double m_Price = 0;
Vendor m_Supplier;

Product::Product()
{
}

Product::Product(QString name, double price)
{
    m_Name = name;
    m_Price = price;
}

void Product::setSupplier(QString name, QString email, bool isManufacturer)
{
    m_Supplier.setDetails(name, email, isManufacturer);
}

QString Product::getManufacturer()
{
    return m_Supplier.isManufacturer() ? m_Supplier.getName() : "Unknown";
}

QString Product::toString()
{
    QString returnValue = "Product Name: " + m_Name + ", Price: " + QString::number(m_Price);

    if (m_Supplier.isManufacturer())
        returnValue += "\n" + m_Supplier.toString();
    return returnValue;
}
