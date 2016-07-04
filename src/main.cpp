#include <QGuiApplication>
#include <QQmlContext>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include <QVector>
#include "mediaplayer.h"
#include <gtest/gtest.h>

TEST(volumeTest, checkSetAndGetVolume){
	MediaPlayer player;
	player.setVolume(50);
	ASSERT_EQ(50, player.getVolume();
}

TEST(volumeTest, checkSetAndGetVolume){
	MediaPlayer player;
	player.setVolume(30);
	ASSERT_EQ(30, player.getVolume();
}
TEST(volumeTest, checkSetAndGetVolume){
	MediaPlayer player;
	player.setVolume(510);
	ASSERT_EQ(510, player.getVolume();
}
TEST(volumeTest, checkSetAndGetVolume){
	MediaPlayer player;
	player.setVolume(50);
	ASSERT_EQ(0, player.getVolume();
}


int main(int argc, char *argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
