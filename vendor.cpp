/*
    Author : Justin Porteous
    Student : 51565579
    Assignment 1 Question 2
    Unique assignment no: 576435
    GitHub: https://github.com/JGPorteous/COS2614_A1_Q2
 */

#include "vendor.h"
#include <QtCore>


static QString m_Name = "";
static QString m_Email = "";
static bool m_IsManufacturer = false;

Vendor::Vendor()
{

}

void Vendor::setDetails(QString name, QString email, bool isManufacturer)
{
    m_Name = name;
    m_Email = email;
    m_IsManufacturer = isManufacturer;
}

bool Vendor::isManufacturer()
{
    return m_IsManufacturer;
}

QString Vendor::getName()
{
    return m_Email;
}

QString Vendor::toString()
{
    QString returnValue = "Vendor Name: " + m_Name + ", Vendor Email: " + m_Email + ", Is Manufacturer: " + boolToYesNo(m_IsManufacturer);
    return returnValue;
}

QString Vendor::boolToYesNo(bool boolToConvert)
{
    return boolToConvert ? "Yes" : "No";
}
