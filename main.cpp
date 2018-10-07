#include <qapplication.h>
#include <QComboBox>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>

#include "ZebraHandler.h"

//#include <qvbox.h>

int main(int argc, char **argv) {
	QApplication a(argc,argv);

	QWidget window;
	window.setFixedSize(300, 245);

	//Printer
	QLabel *printerText = new QLabel(&window);
	printerText->setText("Path to printer:");
	printerText->setGeometry(10, 10, 100, 10);

	QLineEdit *printerPath = new QLineEdit(&window);
	printerPath->setGeometry(120, 5, 170, 20);//x, y, w, h

	//Source spreadsheet
	QLabel *spreadsheetText= new QLabel(&window);
	spreadsheetText->setText("Path to spreadsheet:");
	spreadsheetText->setGeometry(10, 40, 100, 10);

	QLineEdit *spreadsheetPath = new QLineEdit(&window);
	spreadsheetPath->setGeometry(120, 35, 170, 20);//x, y, w, h

	//source machine column
	QLabel *sourceMachineText = new QLabel(&window);
	sourceMachineText->setText("Source machine column:");
	sourceMachineText->setGeometry(10, 70, 120, 10);

	QLineEdit *sourceMachineColumn = new QLineEdit(&window);
	sourceMachineColumn->setGeometry(150, 65, 140, 20);//x, y, w, h
	
	//Source port column
	QLabel *sourcePortText = new QLabel(&window);
	sourcePortText->setText("Source port column:");
	sourcePortText->setGeometry(10, 100, 120, 10);

	QLineEdit *sourcePortColumn = new QLineEdit(&window);
	sourcePortColumn->setGeometry(150, 95, 140, 20);//x, y, w, h
	
	//Destinaiton machine column
	QLabel *destinationMachineText = new QLabel(&window);
	destinationMachineText->setText("Destination machine column:");
	destinationMachineText->setGeometry(10, 130, 150, 10);

	QLineEdit *destinationMachineColumn = new QLineEdit(&window);
	destinationMachineColumn->setGeometry(150, 125, 140, 20);//x, y, w, h

	//Destinaiton port column
	QLabel *destinationPortText = new QLabel(&window);
	destinationPortText->setText("Destination port column:");
	destinationPortText->setGeometry(10, 160, 150, 10);

	QLineEdit *destinationPortColumn = new QLineEdit(&window);
	destinationPortColumn->setGeometry(150, 155, 140, 20);//x, y, w, h

	//Label type
	QLabel *labelTypeText = new QLabel(&window);
	labelTypeText->setText("Label type:");
	labelTypeText->setGeometry(10, 190, 150, 10);

	QComboBox *labelTypeDrop = new QComboBox(&window);
	labelTypeDrop->addItem("Audio");
	labelTypeDrop->addItem("Video");
	labelTypeDrop->setGeometry(150, 185, 140, 20);

	//Print button
	QPushButton *printButton = new QPushButton(&window);
	printButton->setText("Print");
	printButton->setGeometry(200, 215, 90, 20);



	ZebraHandler zeb;
	zeb.print("~/Docs/source");

	window.show();

	return a.exec();
}
