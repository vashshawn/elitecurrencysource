/********************************************************************************
** Form generated from reading UI file 'multisenddialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISENDDIALOG_H
#define UI_MULTISENDDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MultiSendDialog
{
public:
    QLineEdit *multiSendPercentEdit;
    QLineEdit *multiSendAddressEdit;
    QLabel *label_2;
    QLabel *message;
    QPushButton *addButton;
    QPushButton *disableButton;
    QPushButton *addressBookButton;
    QLabel *label;
    QLabel *label_5;
    QPushButton *deleteButton;
    QPushButton *activateButton;
    QPushButton *viewButton;

    void setupUi(QWidget *MultiSendDialog)
    {
        if (MultiSendDialog->objectName().isEmpty())
            MultiSendDialog->setObjectName(QString::fromUtf8("MultiSendDialog"));
        MultiSendDialog->setWindowModality(Qt::NonModal);
        MultiSendDialog->resize(652, 300);
        multiSendPercentEdit = new QLineEdit(MultiSendDialog);
        multiSendPercentEdit->setObjectName(QString::fromUtf8("multiSendPercentEdit"));
        multiSendPercentEdit->setGeometry(QRect(170, 120, 201, 20));
        multiSendAddressEdit = new QLineEdit(MultiSendDialog);
        multiSendAddressEdit->setObjectName(QString::fromUtf8("multiSendAddressEdit"));
        multiSendAddressEdit->setGeometry(QRect(170, 150, 401, 21));
        label_2 = new QLabel(MultiSendDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 0, 451, 121));
        label_2->setLineWidth(1);
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        label_2->setWordWrap(true);
        message = new QLabel(MultiSendDialog);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(240, 200, 381, 91));
        addButton = new QPushButton(MultiSendDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(20, 230, 91, 23));
        disableButton = new QPushButton(MultiSendDialog);
        disableButton->setObjectName(QString::fromUtf8("disableButton"));
        disableButton->setGeometry(QRect(120, 260, 91, 23));
        addressBookButton = new QPushButton(MultiSendDialog);
        addressBookButton->setObjectName(QString::fromUtf8("addressBookButton"));
        addressBookButton->setGeometry(QRect(570, 150, 28, 21));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/address-book"), QSize(), QIcon::Normal, QIcon::Off);
        addressBookButton->setIcon(icon);
        addressBookButton->setAutoDefault(false);
        label = new QLabel(MultiSendDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 120, 121, 20));
        label_5 = new QLabel(MultiSendDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 150, 111, 16));
        deleteButton = new QPushButton(MultiSendDialog);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(120, 230, 91, 23));
        activateButton = new QPushButton(MultiSendDialog);
        activateButton->setObjectName(QString::fromUtf8("activateButton"));
        activateButton->setGeometry(QRect(20, 260, 91, 23));
        viewButton = new QPushButton(MultiSendDialog);
        viewButton->setObjectName(QString::fromUtf8("viewButton"));
        viewButton->setGeometry(QRect(60, 200, 121, 23));

        retranslateUi(MultiSendDialog);

        QMetaObject::connectSlotsByName(MultiSendDialog);
    } // setupUi

    void retranslateUi(QWidget *MultiSendDialog)
    {
        MultiSendDialog->setWindowTitle(QApplication::translate("MultiSendDialog", "MultiSend", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        multiSendPercentEdit->setToolTip(QApplication::translate("MultiSendDialog", "Enter whole numbers 1 - 100", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        multiSendPercentEdit->setPlaceholderText(QApplication::translate("MultiSendDialog", "Enter % to Give (1-100)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        multiSendAddressEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        multiSendAddressEdit->setPlaceholderText(QApplication::translate("MultiSendDialog", "Enter Address to Send to", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MultiSendDialog", "MultiSend allows you to automatically send up to 100% of your stake to a list of other Elite addresses after it matures.\n"
"Add: Enter percentage to send. Enter Elite address receving this percentage of your stake. \n"
"Delete: Enter address to delete and press delete.\n"
"MultiSend will not be activated unless you have clicked Activate", 0, QApplication::UnicodeUTF8));
        message->setText(QString());
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        addButton->setStatusTip(QApplication::translate("MultiSendDialog", "Add to MultiSend Vector", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        addButton->setText(QApplication::translate("MultiSendDialog", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        disableButton->setStatusTip(QApplication::translate("MultiSendDialog", "Deactivate MultiSend", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        disableButton->setText(QApplication::translate("MultiSendDialog", "Deactivate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addressBookButton->setToolTip(QApplication::translate("MultiSendDialog", "Choose an address from the address book", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addressBookButton->setText(QString());
        addressBookButton->setShortcut(QApplication::translate("MultiSendDialog", "Alt+A", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("MultiSendDialog", "Percentage of stake to send", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MultiSendDialog", "Percentage:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_5->setToolTip(QApplication::translate("MultiSendDialog", "Address to send portion of stake to", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("MultiSendDialog", "Address:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        deleteButton->setStatusTip(QApplication::translate("MultiSendDialog", "Delete Address From MultiSend Vector", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        deleteButton->setText(QApplication::translate("MultiSendDialog", "Delete", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        activateButton->setStatusTip(QApplication::translate("MultiSendDialog", "Activate MultiSend", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        activateButton->setText(QApplication::translate("MultiSendDialog", "Activate", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        viewButton->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        viewButton->setStatusTip(QApplication::translate("MultiSendDialog", "View MultiSend Vector", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        viewButton->setText(QApplication::translate("MultiSendDialog", "View MultiSend", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MultiSendDialog: public Ui_MultiSendDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISENDDIALOG_H
