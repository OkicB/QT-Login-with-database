#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <QDialog>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QDebug>
#include <QRadioButton>

namespace Ui {
class StudentInfo;
}

class StudentInfo : public QDialog
{
    Q_OBJECT

public:
    explicit StudentInfo(QWidget *parent = 0);
    ~StudentInfo();

private slots:
    void on_pushButton_Save_clicked();

    void on_pushButton_Edit_clicked();

    void on_pushButton_Delete_clicked();

    void on_pushButton_load_clicked();

    void on_pushButton_load_list_clicked();

    void on_comboBox_currentIndexChanged(const QString &arg1);

    void on_tableView_activated(const QModelIndex &index);

    void on_listView_activated(const QModelIndex &index);

    void on_loadButton_clicked();

private:
    Ui::StudentInfo *ui;
};

#endif // STUDENTINFO_H
