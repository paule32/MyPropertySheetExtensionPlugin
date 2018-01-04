/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>
#include "popupmenu.h"

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    PopupMenu *popupMenu;
    PopupMenu *popupMenu_2;
    PopupMenu *popupMenu_3;
    PopupMenu *popupMenu_4;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QLatin1String("Form"));
        Form->resize(400, 300);
        popupMenu = new PopupMenu(Form);
        popupMenu->setObjectName(QLatin1String("popupMenu"));
        popupMenu->setGeometry(QRect(20, 150, 91, 91));
        popupMenu_2 = new PopupMenu(Form);
        popupMenu_2->setObjectName(QLatin1String("popupMenu_2"));
        popupMenu_2->setGeometry(QRect(150, 150, 80, 80));
        popupMenu_3 = new PopupMenu(Form);
        popupMenu_3->setObjectName(QLatin1String("popupMenu_3"));
        popupMenu_3->setGeometry(QRect(260, 100, 80, 80));
        popupMenu_4 = new PopupMenu(Form);
        popupMenu_4->setObjectName(QLatin1String("popupMenu_4"));
        popupMenu_4->setGeometry(QRect(180, 200, 80, 80));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
