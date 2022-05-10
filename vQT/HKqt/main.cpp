#include "hedgehogkindom.h"//Добавляем заголовочный файл она выбора уровня сложности
//Подключаем необходимые библиотеки:
#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])//главная функция
{
    QApplication a(argc, argv);//Создаем объект QApplication
    HedgehogKindom w;//Создаем объект класса нашего окна выбора уровня сложности
    w.show();//Показываем наше окно выбора уровня сложности
     QFile qss(":/style.qss");//Добавляем файл таблицы стилей
     qss.open(QFile::ReadOnly);//Открываем файл
     QString styleSheet = QString::fromLatin1(qss.readAll());//Читаем файл содержащий стиль
     qApp->setStyleSheet(styleSheet);//устанавливаем стиль
    return a.exec();//выполняем приложение
}
