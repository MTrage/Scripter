#ifndef SCRIPTER_H
#define SCRIPTER_H
#include <QPushButton>
#include <QMainWindow>

namespace Ui {
class Scripter;
}

class Scripter : public QMainWindow
{
    Q_OBJECT

public:
    explicit Scripter(QWidget *parent = 0);
    ~Scripter();

private slots:
    void alert(QString a, QString b);
    void startSHnow();
    void startSHnowSUDO();
    void TMPkiller();
    void LittleKiller(QString a);

private:
    Ui::Scripter *ui;

};

class QYN : public QPushButton
{
    Q_OBJECT
public:
    explicit QYN(QWidget *parent = 0);

public slots:

private:

};

#endif // R.E.M. - it's the end of the world as we know it ...
