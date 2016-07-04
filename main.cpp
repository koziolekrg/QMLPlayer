#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QVector>
#include "mediaplayer.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    MediaPlayer player;

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("player", &player);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    return app.exec();
}
