#ifndef nApp_H
#define nApp_H

#include <QApplication>
#include <QVector>
#include <QMainWindow>

class my_class : public QMainWindow {
    Q_OBJECT

public:
    my_class(QWidget *parent): QMainWindow(parent) {};
    ~my_class() {};
};


class my_app : public QApplication {
    Q_OBJECT
public:
    my_app( int &argc, char **argv ): QApplication(argc, argv) {};

public slots:

    QVector<my_class*> neus() {
		QVector<my_class*> retList;
		foreach (QWidget *widget, topLevelWidgets()) {
			my_class *my_neu=qobject_cast<my_class *>(widget);
			if (my_neu) retList << my_neu;
		}
		return retList;
    };
};

Q_DECLARE_METATYPE(my_class*);
Q_DECLARE_METATYPE(QVector<my_class*>);



#endif

