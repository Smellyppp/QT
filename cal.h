#ifndef CAL_H
#define CAL_H

#include <QWidget>
#include <QStack>
#include <QString>
#include <string.h>

QT_BEGIN_NAMESPACE
namespace Ui { class cal; }
QT_END_NAMESPACE

class cal : public QWidget
{
    Q_OBJECT

public:
    cal(QWidget *parent = nullptr);
    ~cal();

private slots:
    void on_onebutton_clicked();

    void on_twobutton_clicked();

    void on_zerobutton_clicked();

    void on_cancelonebutton_clicked();

    void on_amountbutton_clicked();

    void on_nobutton_clicked();

    void on_threebutton_clicked();

    void on_subbutton_clicked();

    void on_fourbutton_clicked();

    void on_fivebutton_clicked();

    void on_sixbutton_clicked();

    void on_mulbutton_clicked();

    void on_sevenbutton_clicked();

    void on_eightbutton_clicked();

    void on_ninebutton_clicked();

    void on_divbutton_clicked();

    void on_leftbutton_clicked();

    void on_rightbutton_clicked();

    void on_cancelallbutton_clicked();

    void on_addbutton_clicked();

private:
    Ui::cal *ui;
    QString str;
};
#endif // CAL_H
