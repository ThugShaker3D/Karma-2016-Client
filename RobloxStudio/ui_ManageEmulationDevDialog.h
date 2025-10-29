/********************************************************************************
** Form generated from reading UI file 'ManageEmulationDevDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.14
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEEMULATIONDEVDIALOG_H
#define UI_MANAGEEMULATIONDEVDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ManageEmulationDevDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *deviceListWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *plusButton;
    QPushButton *minusButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *ManageEmulationDevDialog)
    {
        if (ManageEmulationDevDialog->objectName().isEmpty())
            ManageEmulationDevDialog->setObjectName(QString::fromUtf8("ManageEmulationDevDialog"));
        ManageEmulationDevDialog->resize(246, 204);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/RobloxStudio.png"), QSize(), QIcon::Normal, QIcon::Off);
        ManageEmulationDevDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ManageEmulationDevDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        deviceListWidget = new QListWidget(ManageEmulationDevDialog);
        deviceListWidget->setObjectName(QString::fromUtf8("deviceListWidget"));
        deviceListWidget->setSelectionMode(QAbstractItemView::ExtendedSelection);
        deviceListWidget->setSpacing(2);
        deviceListWidget->setSortingEnabled(false);

        verticalLayout->addWidget(deviceListWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        plusButton = new QPushButton(ManageEmulationDevDialog);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/plus_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        plusButton->setIcon(icon1);

        horizontalLayout->addWidget(plusButton);

        minusButton = new QPushButton(ManageEmulationDevDialog);
        minusButton->setObjectName(QString::fromUtf8("minusButton"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/16x16/images/Studio 2.0 icons/16x16/minus_16.png"), QSize(), QIcon::Normal, QIcon::Off);
        minusButton->setIcon(icon2);

        horizontalLayout->addWidget(minusButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(ManageEmulationDevDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ManageEmulationDevDialog);

        QMetaObject::connectSlotsByName(ManageEmulationDevDialog);
    } // setupUi

    void retranslateUi(QDialog *ManageEmulationDevDialog)
    {
        ManageEmulationDevDialog->setWindowTitle(QCoreApplication::translate("ManageEmulationDevDialog", "Manage Devices", nullptr));
        plusButton->setText(QString());
        minusButton->setText(QString());
        okButton->setText(QCoreApplication::translate("ManageEmulationDevDialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageEmulationDevDialog: public Ui_ManageEmulationDevDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEEMULATIONDEVDIALOG_H
