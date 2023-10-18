
#include "endtoendproject.hpp"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <string>
#include <QtHttpServer/QHttpServer>
#include <QJsonArray>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QHttpServer server;


    QJsonArray myData;
    myData.append(QJsonValue("qt hello!!!"));

    server.route("/", QHttpServerRequest::Method::Get,
        [&myData](const QHttpServerRequest &request) {
            return "hello world qt!";
        }
    );

    const auto port = server.listen(QHostAddress::Any, 8080);

    if(!port){
        return 0;
    }

    qDebug() << QCoreApplication::translate("QHttpServerExample",
                                            "Running on http://127.0.0.1:%1/ (Press CTRL+C to quit)").arg(port);


    return app.exec();
}


int desktopApplication(int argc, char *argv[]){
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
