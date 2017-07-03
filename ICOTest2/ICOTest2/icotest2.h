#ifndef ICOTEST2_H
#define ICOTEST2_H

#include <QtWidgets/QMainWindow>
#include "ui_icotest2.h"

class ICOTest2 : public QMainWindow
{
	Q_OBJECT

public:
	ICOTest2(QWidget *parent = 0);
	~ICOTest2();

private:
	Ui::ICOTest2Class ui;
};

#endif // ICOTEST2_H
