
#include "endtoendproject.hpp"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <string>

int main(int argc, char *argv[])
{
    // test ci pull request

    qDebug() << "rePush test1112222";

    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "QtEndToEndProject_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    EndToEndProject w;
    w.show();
    return a.exec();
}
