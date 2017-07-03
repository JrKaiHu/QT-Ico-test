#include "icotest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ICOTest w;
	w.show();
	return a.exec();
}
