#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QStringList headers;
    //headers =
    ui->setupUi(this);

    //Задаем подписи к осям на графике
    ui -> plot -> xAxis->setLabel("x");
    ui -> plot -> yAxis->setLabel("y");
    ui->plot->setInteraction(QCP::iRangeZoom,true);   // Включаем взаимодействие удаления/приближения
    ui->plot->setInteraction(QCP::iRangeDrag, true);  // Включаем взаимодействие перетаскивания графика

    ui -> xtbl -> setColumnCount(10);

}

double F(double x, double a, double b) //Подпрограмма функция
{
    if((0 < x) & (x < 1))
    {
        return cos(5*x)-pow(sin(a*b),2);
    }
    else
    {
        return pow(x,3)+sqrt(a*b+6);
    }
}

void Tab(double x[], double B, int N, int M, int *Err, double a[], double * f)  //Подпрограмма табулирования функции
{
    for(int j=1; j < M; j++)
    {
        *Err=0;
        for(int i=0; i < N; i++)
        {
        if(((a[i-1]*B+6)>=0) || ((x[j] <= 0) || (x[j] >= 1)))
            *(f + i*M + j) = F(x[j], a[i-1], B);
        if(a[i-1]*B+6<=0)
            *Err=1;
        }
    }
}

float F4(float x)
{
    return exp(x)*sin(16*x)*sin(5*x);
}

void integral(double A, double B, double Eps, double *Integ, int Km, int *Err)
{

    float x, w, h, i1, i2;
    int i, j, k;


    j=1;
    *Err=1;
    i1=0;
    k=4;
    while(j<=Km){
        x=A;
        h=((B-A)/k);
        i2=F4(A);
        i=1;
        do
        {
            x=x+h;
            i2=i2+F4(x);
            i=i+1;
        }
        while(i >= (k-1));

        i2=i2*h;
        w=abs(i1-i2);

        if(w >= Eps){
            i1=i2;
            k=2*k;
        }

        if(w < Eps){
            j=Km;
            *Err=0;
            *Integ=i2;
        }
    j=j+1;
    }
}

void MainWindow::on_startbtn_clicked()
{
    int m = ui->mtxt->text().toInt();
    int n = ui->ntxt->text().toInt();
    int km = ui->kmtxt->text().toInt();
    int err;

    double f[n][m];

    double c = ui->ctxt->text().toDouble();
    double d = ui->dtxt->text().toDouble();
    double eps = ui->epstxt->text().toDouble();
    double integ;

    double an = ui->antxt->text().toDouble();
    double da = ui->datxt->text().toDouble();

    double x[m];
    double a[n];

    QVector<double> X;
    QVector<double> Y;

    for(int i=0; i<m; i++){
        x[i] = ui->xtbl->item(0,i)->text().toDouble();
        X.push_back(x[i]);
    }

    ui -> ftbl -> setColumnCount(m);
    ui -> ftbl -> setRowCount(n);
    ui->plot->xAxis->setRange(x[0], x[m-1]);
    ui->plot->yAxis->setRange(-2, 10);

    a[0]=an;

    for(int i=1; i<n; i++){
        a[i] = a[i-1]+da;
    }

    if(eps>=1){
        QMessageBox::information(0,"Неверная погрешность", "Погрешность задана >=1. Использую Eps=0.001");
        eps=0.001;
    }

    integral(c, d, eps, &integ, km, &err);

    if(err==1){
        QMessageBox::critical(0,"Интеграл не найден!", "Заданное число итераций Km недостаточно для определения интеграла. Остановка.");
        return;
    }
    ui->intlbl->setText(QString::fromStdString("Интеграл = " + std::to_string(integ)));

    Tab(x,integ, n, m, &err, a, (double * ) f);

    for(int i=0; i<n; i++){
        Y.clear();
        for(int j=0; j<m; j++){
            QTableWidgetItem *itm = new QTableWidgetItem(QString::number(f[i][j]));
            ui->ftbl->setItem(i,j, itm);
            Y.push_back(f[i][j]);
        }
        ui->plot->addGraph();
        ui->plot->graph(i)->setData(X, Y);
    }
    ui->plot->replot();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_mtxt_textEdited(const QString &ColCo)
{
    QString text;
    ui -> xtbl -> setColumnCount(ColCo.toInt());

}

void MainWindow::on_xtbl_cellChanged(int row, int column)
{
    ui -> xtbl -> resizeColumnToContents(column);
    ui -> xtbl -> resizeRowToContents(row);
}

void MainWindow::on_extbtn_clicked()
{
    exit(0);
}
