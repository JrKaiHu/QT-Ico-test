#include "icotest2.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ICOTest2 w;
	w.show();
	return a.exec();
}
