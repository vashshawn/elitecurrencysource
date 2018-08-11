/********************************************************************************
** Form generated from reading UI file 'overviewpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OVERVIEWPAGE_H
#define UI_OVERVIEWPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qt/qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_OverviewPage
{
public:
    QVBoxLayout *verticalLayout_5;
    QFrame *frameTop;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLabel *labelWalletStatus;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QLabel *labelStake;
    QLabel *label_3;
    QLabel *labelUnconfirmed;
    QLabel *labelImmatureText;
    QLabel *labelImmature;
    QLabel *label_2;
    QLabel *labelNumTransactions;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelBalance;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLabel *labelTransactionsStatus;
    QSpacerItem *horizontalSpacer;
    QListView *listTransactions;
    QSpacerItem *verticalSpacer_2;
    QFrame *diffplotframe;
    QGridLayout *gridLayout;
    QCustomPlot *diffplot;

    void setupUi(QWidget *OverviewPage)
    {
        if (OverviewPage->objectName().isEmpty())
            OverviewPage->setObjectName(QString::fromUtf8("OverviewPage"));
        OverviewPage->resize(760, 498);
        verticalLayout_5 = new QVBoxLayout(OverviewPage);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, 2, -1, -1);
        frameTop = new QFrame(OverviewPage);
        frameTop->setObjectName(QString::fromUtf8("frameTop"));
        frameTop->setFrameShape(QFrame::NoFrame);
        frameTop->setFrameShadow(QFrame::Sunken);
        frameTop->setLineWidth(0);
        verticalLayout_4 = new QVBoxLayout(frameTop);
        verticalLayout_4->setSpacing(5);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(frameTop);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        label_5->setFont(font);

        horizontalLayout_4->addWidget(label_5);

        labelWalletStatus = new QLabel(frameTop);
        labelWalletStatus->setObjectName(QString::fromUtf8("labelWalletStatus"));
        labelWalletStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelWalletStatus->setText(QString::fromUtf8("(Out of sync with the Elite network)"));
        labelWalletStatus->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        horizontalLayout_4->addWidget(labelWalletStatus);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(10, 5, 10, 5);
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setHorizontalSpacing(12);
        formLayout_2->setVerticalSpacing(12);
        label_6 = new QLabel(frameTop);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setMinimumSize(QSize(182, 0));
        label_6->setBaseSize(QSize(80, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Sans"));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        labelStake = new QLabel(frameTop);
        labelStake->setObjectName(QString::fromUtf8("labelStake"));
        labelStake->setFont(font1);
        labelStake->setCursor(QCursor(Qt::IBeamCursor));
        labelStake->setText(QString::fromUtf8("<html><head/><body><p><span style=\" color:#333333;\">0 1337</span></p></body></html>"));
        labelStake->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, labelStake);

        label_3 = new QLabel(frameTop);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMinimumSize(QSize(182, 0));
        label_3->setBaseSize(QSize(80, 0));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_3);

        labelUnconfirmed = new QLabel(frameTop);
        labelUnconfirmed->setObjectName(QString::fromUtf8("labelUnconfirmed"));
        labelUnconfirmed->setFont(font1);
        labelUnconfirmed->setCursor(QCursor(Qt::IBeamCursor));
        labelUnconfirmed->setText(QString::fromUtf8("<html><head/><body><p><span style=\" color:#333333;\">0 1337</span></p></body></html>"));
        labelUnconfirmed->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, labelUnconfirmed);

        labelImmatureText = new QLabel(frameTop);
        labelImmatureText->setObjectName(QString::fromUtf8("labelImmatureText"));
        sizePolicy.setHeightForWidth(labelImmatureText->sizePolicy().hasHeightForWidth());
        labelImmatureText->setSizePolicy(sizePolicy);
        labelImmatureText->setMinimumSize(QSize(182, 0));
        labelImmatureText->setBaseSize(QSize(80, 0));
        labelImmatureText->setFont(font1);
        labelImmatureText->setLayoutDirection(Qt::RightToLeft);
        labelImmatureText->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelImmatureText);

        labelImmature = new QLabel(frameTop);
        labelImmature->setObjectName(QString::fromUtf8("labelImmature"));
        labelImmature->setFont(font1);
        labelImmature->setText(QString::fromUtf8("<html><head/><body><p><span style=\" color:#333333;\">0 1337</span></p></body></html>"));
        labelImmature->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, labelImmature);

        label_2 = new QLabel(frameTop);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(182, 0));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_2);

        labelNumTransactions = new QLabel(frameTop);
        labelNumTransactions->setObjectName(QString::fromUtf8("labelNumTransactions"));
        labelNumTransactions->setFont(font1);
        labelNumTransactions->setText(QString::fromUtf8("0"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, labelNumTransactions);


        horizontalLayout->addLayout(formLayout_2);

        frame_3 = new QFrame(frameTop);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        frame_3->setLineWidth(-1);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        labelBalance = new QLabel(frame_3);
        labelBalance->setObjectName(QString::fromUtf8("labelBalance"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelBalance->sizePolicy().hasHeightForWidth());
        labelBalance->setSizePolicy(sizePolicy1);
        labelBalance->setMinimumSize(QSize(200, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setWeight(50);
        labelBalance->setFont(font2);
        labelBalance->setCursor(QCursor(Qt::IBeamCursor));
        labelBalance->setText(QString::fromUtf8("<html><head/><body><p><span style=\" color:#333333;\">0.00000000 1337</span></p></body></html>"));
        labelBalance->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        labelBalance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_6->addWidget(labelBalance);


        horizontalLayout->addWidget(frame_3);


        verticalLayout_4->addLayout(horizontalLayout);


        verticalLayout_5->addWidget(frameTop);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame_2 = new QFrame(OverviewPage);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Sans"));
        font3.setPointSize(11);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);

        horizontalLayout_2->addWidget(label_4);

        labelTransactionsStatus = new QLabel(frame_2);
        labelTransactionsStatus->setObjectName(QString::fromUtf8("labelTransactionsStatus"));
        labelTransactionsStatus->setStyleSheet(QString::fromUtf8("QLabel { color: red; }"));
        labelTransactionsStatus->setText(QString::fromUtf8("(Out of sync with the Elite network)"));
        labelTransactionsStatus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(labelTransactionsStatus);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        listTransactions = new QListView(frame_2);
        listTransactions->setObjectName(QString::fromUtf8("listTransactions"));
        listTransactions->setStyleSheet(QString::fromUtf8(""));
        listTransactions->setFrameShape(QFrame::NoFrame);
        listTransactions->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listTransactions->setSelectionMode(QAbstractItemView::NoSelection);

        verticalLayout->addWidget(listTransactions);


        verticalLayout_3->addWidget(frame_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_5->addLayout(verticalLayout_3);

        diffplotframe = new QFrame(OverviewPage);
        diffplotframe->setObjectName(QString::fromUtf8("diffplotframe"));
        diffplotframe->setFrameShape(QFrame::NoFrame);
        diffplotframe->setFrameShadow(QFrame::Plain);
        diffplotframe->setLineWidth(0);
        gridLayout = new QGridLayout(diffplotframe);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        diffplot = new QCustomPlot(diffplotframe);
        diffplot->setObjectName(QString::fromUtf8("diffplot"));
        sizePolicy.setHeightForWidth(diffplot->sizePolicy().hasHeightForWidth());
        diffplot->setSizePolicy(sizePolicy);
        diffplot->setMinimumSize(QSize(0, 180));

        gridLayout->addWidget(diffplot, 0, 0, 1, 1);


        verticalLayout_5->addWidget(diffplotframe);

        verticalLayout_5->setStretch(1, 1);

        retranslateUi(OverviewPage);

        QMetaObject::connectSlotsByName(OverviewPage);
    } // setupUi

    void retranslateUi(QWidget *OverviewPage)
    {
        OverviewPage->setWindowTitle(QApplication::translate("OverviewPage", "Form", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("OverviewPage", "My Balance", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelWalletStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Elite network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("OverviewPage", "Stake:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelStake->setToolTip(QApplication::translate("OverviewPage", "Total of coins that was staked, and do not yet count towards the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("OverviewPage", "Unconfirmed:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelUnconfirmed->setToolTip(QApplication::translate("OverviewPage", "Total of transactions that have yet to be confirmed, and do not yet count towards the current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        labelImmatureText->setText(QApplication::translate("OverviewPage", "Immature:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelImmature->setToolTip(QApplication::translate("OverviewPage", "Mined balance that has not yet matured", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" color:#333333;\">Number of Transactions:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelNumTransactions->setToolTip(QApplication::translate("OverviewPage", "Total number of transactions in wallet", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        labelBalance->setToolTip(QApplication::translate("OverviewPage", "Your current balance", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("OverviewPage", "<html><head/><body><p><span style=\" font-size:11pt; color:#333333;\">Recent Elite Transactions</span></p></body></html>", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        labelTransactionsStatus->setToolTip(QApplication::translate("OverviewPage", "The displayed information may be out of date. Your wallet automatically synchronizes with the Elite network after a connection is established, but this process has not completed yet.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class OverviewPage: public Ui_OverviewPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OVERVIEWPAGE_H
