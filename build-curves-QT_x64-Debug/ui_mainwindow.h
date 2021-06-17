/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "renderarea.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    RenderArea *renderArea;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnBackground;
    QPushButton *btnLineColor;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QPushButton *btnAstroid;
    QPushButton *btnCycloid;
    QPushButton *Huygens;
    QPushButton *btnHypo;
    QPushButton *btnLine;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QDoubleSpinBox *spinScale;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QDoubleSpinBox *spinInterval;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinCount;
    QSpacerItem *verticalSpacer;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(663, 427);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        renderArea = new RenderArea(centralWidget);
        renderArea->setObjectName(QString::fromUtf8("renderArea"));

        verticalLayout_2->addWidget(renderArea);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnBackground = new QPushButton(centralWidget);
        btnBackground->setObjectName(QString::fromUtf8("btnBackground"));

        horizontalLayout_4->addWidget(btnBackground);

        btnLineColor = new QPushButton(centralWidget);
        btnLineColor->setObjectName(QString::fromUtf8("btnLineColor"));

        horizontalLayout_4->addWidget(btnLineColor);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_4);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        btnAstroid = new QPushButton(centralWidget);
        btnAstroid->setObjectName(QString::fromUtf8("btnAstroid"));

        verticalLayout->addWidget(btnAstroid);

        btnCycloid = new QPushButton(centralWidget);
        btnCycloid->setObjectName(QString::fromUtf8("btnCycloid"));

        verticalLayout->addWidget(btnCycloid);

        Huygens = new QPushButton(centralWidget);
        Huygens->setObjectName(QString::fromUtf8("Huygens"));

        verticalLayout->addWidget(Huygens);

        btnHypo = new QPushButton(centralWidget);
        btnHypo->setObjectName(QString::fromUtf8("btnHypo"));

        verticalLayout->addWidget(btnHypo);

        btnLine = new QPushButton(centralWidget);
        btnLine->setObjectName(QString::fromUtf8("btnLine"));

        verticalLayout->addWidget(btnLine);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        spinScale = new QDoubleSpinBox(centralWidget);
        spinScale->setObjectName(QString::fromUtf8("spinScale"));
        spinScale->setMaximumSize(QSize(60, 16777215));
        spinScale->setDecimals(1);
        spinScale->setSingleStep(0.100000000000000);

        horizontalLayout->addWidget(spinScale);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        spinInterval = new QDoubleSpinBox(centralWidget);
        spinInterval->setObjectName(QString::fromUtf8("spinInterval"));
        spinInterval->setMaximumSize(QSize(60, 16777215));
        spinInterval->setMaximum(100.000000000000000);
        spinInterval->setSingleStep(0.100000000000000);

        horizontalLayout_2->addWidget(spinInterval);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        spinCount = new QSpinBox(centralWidget);
        spinCount->setObjectName(QString::fromUtf8("spinCount"));
        spinCount->setMaximumSize(QSize(60, 16777215));
        spinCount->setMaximum(512);
        spinCount->setSingleStep(1);

        horizontalLayout_3->addWidget(spinCount);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 373, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnBackground->setText(QCoreApplication::translate("MainWindow", "Background", nullptr));
        btnLineColor->setText(QCoreApplication::translate("MainWindow", "Line Color", nullptr));
        btnAstroid->setText(QCoreApplication::translate("MainWindow", "Astroid", nullptr));
        btnCycloid->setText(QCoreApplication::translate("MainWindow", "Cycloid", nullptr));
        Huygens->setText(QCoreApplication::translate("MainWindow", "Huygens", nullptr));
        btnHypo->setText(QCoreApplication::translate("MainWindow", "Hypo Cycloid", nullptr));
        btnLine->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Scale:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Interval Length:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Step Count:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
