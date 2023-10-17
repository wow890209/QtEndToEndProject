
#ifndef ENDTOENDPROJECT_HPP
#define ENDTOENDPROJECT_HPP

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui { class EndToEndProject; }
QT_END_NAMESPACE

class EndToEndProject : public QMainWindow

{
    Q_OBJECT

public:
    EndToEndProject(QWidget *parent = nullptr);
    ~EndToEndProject();

private slots:
    void on_pushButton_clicked();

private:
    Ui::EndToEndProject *ui;
};

#endif // ENDTOENDPROJECT_HPP
