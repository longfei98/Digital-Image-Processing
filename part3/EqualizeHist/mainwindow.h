#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/opencv.hpp>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_OpenImageButton_clicked();
    void on_EqualizeButton_clicked();

private:
    cv::Mat commonEqualize(const cv::Mat& image);
    Ui::MainWindow *ui;
    cv::Mat image;
};

#endif // MAINWINDOW_H
