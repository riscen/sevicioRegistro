/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *labsLayout;
    QTabWidget *labs;
    QWidget *lab1;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *pcInfoLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *pcNumber;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *pcStatus;
    QGraphicsView *pcStatusImg;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *changeStatus;
    QSpacerItem *horizontalSpacer_5;
    QFrame *line_2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *studentId;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *studentName;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *studentCareer;
    QFrame *line_3;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLineEdit *beginHour;
    QFrame *line_4;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *changePc;
    QPushButton *actionButton;
    QSpacerItem *horizontalSpacer_7;
    QFrame *line;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(928, 601);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 591, 531));
        labsLayout = new QVBoxLayout(verticalLayoutWidget);
        labsLayout->setSpacing(6);
        labsLayout->setContentsMargins(11, 11, 11, 11);
        labsLayout->setObjectName(QStringLiteral("labsLayout"));
        labsLayout->setContentsMargins(0, 0, 0, 0);
        labs = new QTabWidget(verticalLayoutWidget);
        labs->setObjectName(QStringLiteral("labs"));
        lab1 = new QWidget();
        lab1->setObjectName(QStringLiteral("lab1"));
        labs->addTab(lab1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        labs->addTab(tab_2, QString());

        labsLayout->addWidget(labs);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(620, 10, 301, 531));
        pcInfoLayout = new QVBoxLayout(verticalLayoutWidget_2);
        pcInfoLayout->setSpacing(6);
        pcInfoLayout->setContentsMargins(11, 11, 11, 11);
        pcInfoLayout->setObjectName(QStringLiteral("pcInfoLayout"));
        pcInfoLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        pcInfoLayout->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        pcNumber = new QSpinBox(verticalLayoutWidget_2);
        pcNumber->setObjectName(QStringLiteral("pcNumber"));
        pcNumber->setFont(font1);

        horizontalLayout->addWidget(pcNumber);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);


        pcInfoLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        pcStatus = new QLineEdit(verticalLayoutWidget_2);
        pcStatus->setObjectName(QStringLiteral("pcStatus"));
        pcStatus->setFont(font1);
        pcStatus->setReadOnly(true);

        horizontalLayout_5->addWidget(pcStatus);

        pcStatusImg = new QGraphicsView(verticalLayoutWidget_2);
        pcStatusImg->setObjectName(QStringLiteral("pcStatusImg"));

        horizontalLayout_5->addWidget(pcStatusImg);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        changeStatus = new QPushButton(verticalLayoutWidget_2);
        changeStatus->setObjectName(QStringLiteral("changeStatus"));
        changeStatus->setFont(font1);

        horizontalLayout_6->addWidget(changeStatus);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_6);


        pcInfoLayout->addLayout(verticalLayout_2);

        line_2 = new QFrame(verticalLayoutWidget_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        pcInfoLayout->addWidget(line_2);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font);

        pcInfoLayout->addWidget(label_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        studentId = new QLineEdit(verticalLayoutWidget_2);
        studentId->setObjectName(QStringLiteral("studentId"));
        studentId->setFont(font1);

        horizontalLayout_2->addWidget(studentId);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        pcInfoLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        studentName = new QLineEdit(verticalLayoutWidget_2);
        studentName->setObjectName(QStringLiteral("studentName"));
        studentName->setFont(font1);

        horizontalLayout_3->addWidget(studentName);


        pcInfoLayout->addLayout(horizontalLayout_3);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setFont(font1);

        horizontalLayout_9->addWidget(label_11);

        lineEdit = new QLineEdit(verticalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFont(font1);

        horizontalLayout_9->addWidget(lineEdit);


        pcInfoLayout->addLayout(horizontalLayout_9);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        studentCareer = new QComboBox(verticalLayoutWidget_2);
        studentCareer->setObjectName(QStringLiteral("studentCareer"));
        studentCareer->setFont(font1);

        horizontalLayout_4->addWidget(studentCareer);


        pcInfoLayout->addLayout(horizontalLayout_4);

        line_3 = new QFrame(verticalLayoutWidget_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        pcInfoLayout->addWidget(line_3);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setFont(font);

        pcInfoLayout->addWidget(label_9);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setFont(font1);

        horizontalLayout_7->addWidget(label_8);

        beginHour = new QLineEdit(verticalLayoutWidget_2);
        beginHour->setObjectName(QStringLiteral("beginHour"));
        beginHour->setFont(font1);
        beginHour->setReadOnly(true);

        horizontalLayout_7->addWidget(beginHour);


        pcInfoLayout->addLayout(horizontalLayout_7);

        line_4 = new QFrame(verticalLayoutWidget_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        pcInfoLayout->addWidget(line_4);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setFont(font);

        pcInfoLayout->addWidget(label_10);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_6);

        changePc = new QPushButton(verticalLayoutWidget_2);
        changePc->setObjectName(QStringLiteral("changePc"));
        changePc->setFont(font1);

        horizontalLayout_8->addWidget(changePc);

        actionButton = new QPushButton(verticalLayoutWidget_2);
        actionButton->setObjectName(QStringLiteral("actionButton"));
        actionButton->setFont(font1);

        horizontalLayout_8->addWidget(actionButton);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);


        pcInfoLayout->addLayout(horizontalLayout_8);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(600, 10, 21, 531));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 928, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setFont(font1);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Registro", 0));
        labs->setTabText(labs->indexOf(lab1), QApplication::translate("MainWindow", "Tab 1", 0));
        labs->setTabText(labs->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
        label->setText(QApplication::translate("MainWindow", "Informaci\303\263n de la computadora", 0));
        label_2->setText(QApplication::translate("MainWindow", "No.", 0));
        label_7->setText(QApplication::translate("MainWindow", "Estado", 0));
        changeStatus->setText(QApplication::translate("MainWindow", "Cambiar estado", 0));
        label_6->setText(QApplication::translate("MainWindow", "Informaci\303\263n del estudiante", 0));
        label_3->setText(QApplication::translate("MainWindow", "C\303\263digo", 0));
        label_4->setText(QApplication::translate("MainWindow", "Nombre(s)", 0));
        label_11->setText(QApplication::translate("MainWindow", "Apellidos", 0));
        label_5->setText(QApplication::translate("MainWindow", "Carrera", 0));
        label_9->setText(QApplication::translate("MainWindow", "Informaci\303\263n de uso", 0));
        label_8->setText(QApplication::translate("MainWindow", "Hora inicio", 0));
        label_10->setText(QApplication::translate("MainWindow", "Acciones", 0));
        changePc->setText(QApplication::translate("MainWindow", "Cambiar", 0));
        actionButton->setText(QApplication::translate("MainWindow", "Action*", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
