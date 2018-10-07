#ifndef MAINWINDOW_H
#define MAINWINDOW_H

class MainWindow : public QMainWindow {
	Q_OBJECT
	public:
		explicit MainWindow(QWidget *parent = 0);
	private slots:
		void handleButton();
	private:
		QPushButton * m_button;
};

#endif
