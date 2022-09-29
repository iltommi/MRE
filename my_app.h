#ifndef my_app__H
#define my_app__H

#include <QApplication>
#include <QVector>

class my_app : public QApplication {
    Q_OBJECT
public:
    my_app( int &argc, char **argv ): QApplication(argc, argv) {};

public slots:

    QVector<double> my_slot() {
		return QVector<double>();
    };
};


#endif

