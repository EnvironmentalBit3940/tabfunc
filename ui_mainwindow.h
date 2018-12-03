/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *header;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QLabel *label_4;
    QLabel *label_5;
    QTextBrowser *textBrowser;
    QWidget *inpttab;
    QGroupBox *groupBox;
    QGroupBox *groupBox_3;
    QTableWidget *xtbl;
    QLabel *label;
    QLineEdit *mtxt;
    QLabel *da;
    QLabel *an;
    QLabel *n;
    QLineEdit *datxt;
    QLineEdit *ntxt;
    QLineEdit *antxt;
    QGroupBox *groupBox_2;
    QLineEdit *epstxt;
    QLineEdit *kmtxt;
    QLabel *km;
    QLabel *eps;
    QLabel *d;
    QLineEdit *dtxt;
    QLabel *c;
    QLineEdit *ctxt;
    QPushButton *clrscr;
    QLabel *intlbl;
    QWidget *outpttab;
    QGroupBox *groupBox_5;
    QTableWidget *ftbl;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *tab;
    QGroupBox *groupBox_4;
    QCustomPlot *plot;
    QPushButton *startbtn;
    QPushButton *extbtn;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(658, 586);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        header = new QLabel(centralWidget);
        header->setObjectName(QStringLiteral("header"));
        header->setGeometry(QRect(6, 6, 580, 53));
        QFont font;
        font.setPointSize(36);
        font.setBold(true);
        font.setWeight(75);
        header->setFont(font);
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 60, 651, 421));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 10, 181, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8("\320\230\320\275\321\202\320\265\320\263\321\200\320\260\320\273.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(359, 10, 231, 51));
        label_5->setPixmap(QPixmap(QString::fromUtf8("\320\244\320\276\321\200\320\274\321\203\320\273\320\260.png")));
        label_5->setScaledContents(true);
        textBrowser = new QTextBrowser(tab_2);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(50, 90, 541, 281));
        tabWidget->addTab(tab_2, QString());
        inpttab = new QWidget();
        inpttab->setObjectName(QStringLiteral("inpttab"));
        groupBox = new QGroupBox(inpttab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 621, 201));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(290, 30, 321, 161));
        xtbl = new QTableWidget(groupBox_3);
        if (xtbl->columnCount() < 17)
            xtbl->setColumnCount(17);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(10, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(11, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(12, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(13, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(14, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(15, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        xtbl->setHorizontalHeaderItem(16, __qtablewidgetitem16);
        if (xtbl->rowCount() < 1)
            xtbl->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        xtbl->setVerticalHeaderItem(0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        xtbl->setItem(0, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        xtbl->setItem(0, 1, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        xtbl->setItem(0, 2, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        xtbl->setItem(0, 3, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        xtbl->setItem(0, 4, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        xtbl->setItem(0, 5, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        xtbl->setItem(0, 6, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        xtbl->setItem(0, 7, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        xtbl->setItem(0, 8, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        xtbl->setItem(0, 9, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        xtbl->setItem(0, 10, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        xtbl->setItem(0, 11, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        xtbl->setItem(0, 12, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        xtbl->setItem(0, 13, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        xtbl->setItem(0, 14, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        xtbl->setItem(0, 15, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        xtbl->setItem(0, 16, __qtablewidgetitem34);
        xtbl->setObjectName(QStringLiteral("xtbl"));
        xtbl->setGeometry(QRect(10, 60, 301, 91));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 33, 58, 21));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        mtxt = new QLineEdit(groupBox_3);
        mtxt->setObjectName(QStringLiteral("mtxt"));
        mtxt->setGeometry(QRect(50, 30, 113, 21));
        da = new QLabel(groupBox);
        da->setObjectName(QStringLiteral("da"));
        da->setGeometry(QRect(90, 41, 58, 31));
        an = new QLabel(groupBox);
        an->setObjectName(QStringLiteral("an"));
        an->setGeometry(QRect(90, 81, 58, 31));
        n = new QLabel(groupBox);
        n->setObjectName(QStringLiteral("n"));
        n->setGeometry(QRect(90, 120, 58, 31));
        datxt = new QLineEdit(groupBox);
        datxt->setObjectName(QStringLiteral("datxt"));
        datxt->setGeometry(QRect(120, 40, 81, 31));
        ntxt = new QLineEdit(groupBox);
        ntxt->setObjectName(QStringLiteral("ntxt"));
        ntxt->setGeometry(QRect(120, 120, 81, 31));
        antxt = new QLineEdit(groupBox);
        antxt->setObjectName(QStringLiteral("antxt"));
        antxt->setGeometry(QRect(120, 80, 81, 31));
        groupBox_2 = new QGroupBox(inpttab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 210, 291, 171));
        epstxt = new QLineEdit(groupBox_2);
        epstxt->setObjectName(QStringLiteral("epstxt"));
        epstxt->setGeometry(QRect(40, 110, 111, 28));
        kmtxt = new QLineEdit(groupBox_2);
        kmtxt->setObjectName(QStringLiteral("kmtxt"));
        kmtxt->setGeometry(QRect(192, 107, 91, 28));
        km = new QLabel(groupBox_2);
        km->setObjectName(QStringLiteral("km"));
        km->setGeometry(QRect(160, 110, 30, 21));
        eps = new QLabel(groupBox_2);
        eps->setObjectName(QStringLiteral("eps"));
        eps->setGeometry(QRect(8, 118, 32, 16));
        d = new QLabel(groupBox_2);
        d->setObjectName(QStringLiteral("d"));
        d->setGeometry(QRect(20, 50, 23, 31));
        dtxt = new QLineEdit(groupBox_2);
        dtxt->setObjectName(QStringLiteral("dtxt"));
        dtxt->setGeometry(QRect(40, 50, 111, 31));
        c = new QLabel(groupBox_2);
        c->setObjectName(QStringLiteral("c"));
        c->setGeometry(QRect(172, 52, 22, 21));
        ctxt = new QLineEdit(groupBox_2);
        ctxt->setObjectName(QStringLiteral("ctxt"));
        ctxt->setGeometry(QRect(192, 47, 91, 28));
        clrscr = new QPushButton(inpttab);
        clrscr->setObjectName(QStringLiteral("clrscr"));
        clrscr->setGeometry(QRect(410, 300, 151, 30));
        intlbl = new QLabel(inpttab);
        intlbl->setObjectName(QStringLiteral("intlbl"));
        intlbl->setGeometry(QRect(370, 260, 211, 21));
        tabWidget->addTab(inpttab, QString());
        outpttab = new QWidget();
        outpttab->setObjectName(QStringLiteral("outpttab"));
        groupBox_5 = new QGroupBox(outpttab);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 10, 621, 371));
        ftbl = new QTableWidget(groupBox_5);
        if (ftbl->columnCount() < 10)
            ftbl->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(1, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(2, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(3, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(4, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(5, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(6, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(7, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(8, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        ftbl->setHorizontalHeaderItem(9, __qtablewidgetitem44);
        if (ftbl->rowCount() < 4)
            ftbl->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        ftbl->setVerticalHeaderItem(0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        ftbl->setVerticalHeaderItem(1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        ftbl->setVerticalHeaderItem(2, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        ftbl->setVerticalHeaderItem(3, __qtablewidgetitem48);
        ftbl->setObjectName(QStringLiteral("ftbl"));
        ftbl->setGeometry(QRect(20, 40, 591, 321));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 591, 20));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        label_2->setFont(font2);
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 40, 16, 141));
        label_3->setFont(font2);
        tabWidget->addTab(outpttab, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 10, 621, 371));
        plot = new QCustomPlot(groupBox_4);
        plot->setObjectName(QStringLiteral("plot"));
        plot->setGeometry(QRect(10, 30, 601, 321));
        plot->setCursor(QCursor(Qt::CrossCursor));
        tabWidget->addTab(tab, QString());
        startbtn = new QPushButton(centralWidget);
        startbtn->setObjectName(QStringLiteral("startbtn"));
        startbtn->setGeometry(QRect(6, 495, 641, 30));
        extbtn = new QPushButton(centralWidget);
        extbtn->setObjectName(QStringLiteral("extbtn"));
        extbtn->setGeometry(QRect(6, 531, 641, 30));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(antxt, datxt);
        QWidget::setTabOrder(datxt, ntxt);
        QWidget::setTabOrder(ntxt, mtxt);
        QWidget::setTabOrder(mtxt, dtxt);
        QWidget::setTabOrder(dtxt, ctxt);
        QWidget::setTabOrder(ctxt, epstxt);
        QWidget::setTabOrder(epstxt, kmtxt);
        QWidget::setTabOrder(kmtxt, clrscr);
        QWidget::setTabOrder(clrscr, startbtn);
        QWidget::setTabOrder(startbtn, extbtn);
        QWidget::setTabOrder(extbtn, xtbl);
        QWidget::setTabOrder(xtbl, tabWidget);
        QWidget::setTabOrder(tabWidget, ftbl);

        retranslateUi(MainWindow);
        QObject::connect(clrscr, SIGNAL(clicked()), ctxt, SLOT(clear()));
        QObject::connect(clrscr, SIGNAL(clicked()), kmtxt, SLOT(clear()));
        QObject::connect(clrscr, SIGNAL(clicked()), epstxt, SLOT(clear()));
        QObject::connect(clrscr, SIGNAL(clicked()), dtxt, SLOT(clear()));
        QObject::connect(clrscr, SIGNAL(clicked()), datxt, SLOT(clear()));
        QObject::connect(clrscr, SIGNAL(clicked()), ntxt, SLOT(clear()));
        QObject::connect(clrscr, SIGNAL(clicked()), xtbl, SLOT(clearContents()));
        QObject::connect(clrscr, SIGNAL(clicked()), antxt, SLOT(clear()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        header->setText(QApplication::translate("MainWindow", "\320\242\320\260\320\261\321\203\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\320\265 \320\244\321\203\320\275\320\272\321\206\320\270\320\270", 0));
        label_4->setText(QString());
        label_5->setText(QString());
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\320\227\320\260\320\264\320\260\320\275\320\270\320\265:</span> \320\235\320\260\320\277\320\270\321\201\320\260\321\202\321\214 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203 \320\270 \320\277\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \321\201\321\205\320\265\320\274\321\213 \320\260\320\273\320\263\320\276\321\200\320\270\321\202\320\274\320\276\320\262 \320\264\320\273\321\217 \321\202\320\260\320\261\321\203\320\273\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217"
                        " \321\204\321\203\320\275\320\272\321\206\320\270\320\270 \320\270 \320\275\320\260\321\205\320\276\320\266\320\264\320\265\320\275\320\270\321\217 \320\270\320\275\321\202\320\265\320\263\321\200\320\260\320\273\320\260 \320\270\321\201\320\277\320\276\320\273\321\214\320\267\321\203\321\217 \321\201\321\200\320\265\320\264\321\201\321\202\320\262\320\260 \320\236\320\236\320\237 \320\270 \321\217\320\267\321\213\320\272 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\270\321\200\320\276\320\262\320\260\320\275\320\270\321\217 \320\241++</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\235\320\260\321\205\320\276\320\266\320\264\320\265\320\275\320\270\320\265 \320\270\320\275\321\202\320\265\320\263\321\200\320\260\320\273\320\260 \321\200\320\265"
                        "\320\260\320\273\320\270\320\267\321\203\320\265\321\202\321\201\321\217 \320\274\320\265\321\202\320\276\320\264\320\276\320\274 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\320\271</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\224\320\270\320\267\320\260\320\271\320\275 \320\277\321\200\320\276\320\265\320\272\321\202\320\260 \321\200\320\265\320\260\320\273\320\270\320\267\320\276\320\262\320\260\320\275 \320\261\320\270\320\261\320\273\320\270\320\276\321\202\320\265\320\272\320\276\320\271 Qt \320\264\320\273\321\217 C++</p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\265", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "\320\244\321\203\320\275\320\272\321\206\320\270\321\217", 0));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\227\320\275\320\260\321\207\320\265\320\275\320\270\321\217 \320\245", 0));
        QTableWidgetItem *___qtablewidgetitem = xtbl->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem1 = xtbl->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem2 = xtbl->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem3 = xtbl->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem4 = xtbl->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem5 = xtbl->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem6 = xtbl->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem7 = xtbl->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem8 = xtbl->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem9 = xtbl->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "10", 0));
        QTableWidgetItem *___qtablewidgetitem10 = xtbl->horizontalHeaderItem(10);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "11", 0));
        QTableWidgetItem *___qtablewidgetitem11 = xtbl->horizontalHeaderItem(11);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "12", 0));
        QTableWidgetItem *___qtablewidgetitem12 = xtbl->horizontalHeaderItem(12);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "13", 0));
        QTableWidgetItem *___qtablewidgetitem13 = xtbl->horizontalHeaderItem(13);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "14", 0));
        QTableWidgetItem *___qtablewidgetitem14 = xtbl->horizontalHeaderItem(14);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "15", 0));
        QTableWidgetItem *___qtablewidgetitem15 = xtbl->horizontalHeaderItem(15);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "16", 0));
        QTableWidgetItem *___qtablewidgetitem16 = xtbl->horizontalHeaderItem(16);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "17", 0));
        QTableWidgetItem *___qtablewidgetitem17 = xtbl->verticalHeaderItem(0);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\320\245", 0));

        const bool __sortingEnabled = xtbl->isSortingEnabled();
        xtbl->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem18 = xtbl->item(0, 0);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "0.2", 0));
        QTableWidgetItem *___qtablewidgetitem19 = xtbl->item(0, 1);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "0.4", 0));
        QTableWidgetItem *___qtablewidgetitem20 = xtbl->item(0, 2);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "0.6", 0));
        QTableWidgetItem *___qtablewidgetitem21 = xtbl->item(0, 3);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "0.8", 0));
        QTableWidgetItem *___qtablewidgetitem22 = xtbl->item(0, 4);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem23 = xtbl->item(0, 5);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem24 = xtbl->item(0, 6);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem25 = xtbl->item(0, 7);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem26 = xtbl->item(0, 8);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem27 = xtbl->item(0, 9);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem28 = xtbl->item(0, 10);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem29 = xtbl->item(0, 11);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem30 = xtbl->item(0, 12);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem31 = xtbl->item(0, 13);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "10", 0));
        QTableWidgetItem *___qtablewidgetitem32 = xtbl->item(0, 14);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "11", 0));
        QTableWidgetItem *___qtablewidgetitem33 = xtbl->item(0, 15);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "12", 0));
        QTableWidgetItem *___qtablewidgetitem34 = xtbl->item(0, 16);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "13", 0));
        xtbl->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("MainWindow", "\320\234 = ", 0));
        mtxt->setText(QApplication::translate("MainWindow", "10", 0));
        da->setText(QApplication::translate("MainWindow", "Da = ", 0));
        an->setText(QApplication::translate("MainWindow", "An = ", 0));
        n->setText(QApplication::translate("MainWindow", "N =", 0));
        datxt->setText(QApplication::translate("MainWindow", "1", 0));
        ntxt->setText(QApplication::translate("MainWindow", "4", 0));
        antxt->setText(QApplication::translate("MainWindow", "-4", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\230\320\275\321\202\320\265\320\263\321\200\320\260\320\273", 0));
        epstxt->setText(QApplication::translate("MainWindow", "0.001", 0));
        kmtxt->setText(QApplication::translate("MainWindow", "100", 0));
        km->setText(QApplication::translate("MainWindow", "Km =", 0));
        eps->setText(QApplication::translate("MainWindow", "Eps =", 0));
        d->setText(QApplication::translate("MainWindow", "D = ", 0));
        dtxt->setText(QApplication::translate("MainWindow", "-1", 0));
        c->setText(QApplication::translate("MainWindow", "C = ", 0));
        ctxt->setText(QApplication::translate("MainWindow", "4", 0));
        clrscr->setText(QApplication::translate("MainWindow", "\320\241\320\261\321\200\320\276\321\201\320\270\321\202\321\214 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\321\217", 0));
        intlbl->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(inpttab), QApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \321\204\321\203\320\275\320\272\321\206\320\270\320\270", 0));
        QTableWidgetItem *___qtablewidgetitem35 = ftbl->horizontalHeaderItem(0);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem36 = ftbl->horizontalHeaderItem(1);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem37 = ftbl->horizontalHeaderItem(2);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem38 = ftbl->horizontalHeaderItem(3);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "4", 0));
        QTableWidgetItem *___qtablewidgetitem39 = ftbl->horizontalHeaderItem(4);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "5", 0));
        QTableWidgetItem *___qtablewidgetitem40 = ftbl->horizontalHeaderItem(5);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "6", 0));
        QTableWidgetItem *___qtablewidgetitem41 = ftbl->horizontalHeaderItem(6);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "7", 0));
        QTableWidgetItem *___qtablewidgetitem42 = ftbl->horizontalHeaderItem(7);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "8", 0));
        QTableWidgetItem *___qtablewidgetitem43 = ftbl->horizontalHeaderItem(8);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "9", 0));
        QTableWidgetItem *___qtablewidgetitem44 = ftbl->horizontalHeaderItem(9);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "10", 0));
        QTableWidgetItem *___qtablewidgetitem45 = ftbl->verticalHeaderItem(0);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "1", 0));
        QTableWidgetItem *___qtablewidgetitem46 = ftbl->verticalHeaderItem(1);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "2", 0));
        QTableWidgetItem *___qtablewidgetitem47 = ftbl->verticalHeaderItem(2);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "3", 0));
        QTableWidgetItem *___qtablewidgetitem48 = ftbl->verticalHeaderItem(3);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "4", 0));
        label_2->setText(QApplication::translate("MainWindow", "X", 0));
        label_3->setText(QApplication::translate("MainWindow", "A", 0));
        tabWidget->setTabText(tabWidget->indexOf(outpttab), QApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", 0));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272\320\270 f(x)", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", 0));
        startbtn->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214", 0));
        extbtn->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
