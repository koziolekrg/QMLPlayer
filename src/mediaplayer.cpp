#include "mediaplayer.h"

MediaPlayer::~MediaPlayer()
{

}

MediaPlayer::MediaPlayer()
    :m_volume(50), m_progress(0)
{

    m_player = new QMediaPlayer();
    m_playlist = new QMediaPlaylist();

    m_player->setPlaylist(m_playlist);

    connect(m_player, &QMediaPlayer::durationChanged,  this, &MediaPlayer::changeDuration);
    connect(m_player, &QMediaPlayer::positionChanged, this, &MediaPlayer::changeProgress);
}

void MediaPlayer::mediaPlay()
{
    m_player->play();
}

void MediaPlayer::mediaPause()
{
    m_player->pause();
}

void MediaPlayer::mediaStop()
{
    m_player->stop();
}

void MediaPlayer::mediaNext()
{
    m_playlist->next();
}

void MediaPlayer::mediaPrevious()
{
    m_playlist->previous();
}

void MediaPlayer::mediaJump(int index)
{
   m_playlist->setCurrentIndex(index);
   m_player->play();
}

void MediaPlayer::mediaRemove(int index)
{
    m_playlist->removeMedia(index);
}

int MediaPlayer::getVolume() const
{
    return m_volume;
}

int MediaPlayer::getProgress() const
{
    return m_player->position();
}

int MediaPlayer::getDuration() const
{
    return m_player->duration();
}

QString MediaPlayer::getTitle()
{

	if(m_fileUrl.isNull())
		return "NO_SONG";
	else{
    	    m_fileUrl = m_player->currentMedia().canonicalUrl().toString();
    	    m_fileUrl = m_fileUrl.replace(0,7,"");
	    TagLib::FileRef f(m_fileUrl.toUtf8());
	    TagLib::String artist_string = f.tag()->artist();
	    TagLib::String title_string = f.tag()->title();
	    QString artist = QString::fromStdWString(artist_string.toWString());
	    QString title = QString::fromStdWString(title_string.toWString());
	    QString string = artist + " - " + title;
	    return  string;
	}

}

int MediaPlayer::getSec()
{

    if(m_player->position()/1000 < 60){
        m_sec=m_player->position()/1000;
    }
    else{
        int counter = (m_player->position()/1000) / 60;
        m_sec=m_player->position()/1000;
        if(counter >= 1){
            m_sec = m_sec - (counter*60);
        }
    }
    return m_sec;
}

int MediaPlayer::getMin()
{
    m_min =  (m_player->position())/60000;
    return m_min;
}

void MediaPlayer::setVolume(int volume)
{
    m_volume = volume;
    m_player->setVolume(m_volume);
}

void MediaPlayer::setProgress(int progress)
{
    if(progress == m_player->position())
        return;
    else
        m_player->setPosition(progress);
}

void MediaPlayer::setFileUrl(QString url)
{
    m_playlist->addMedia(QUrl::fromLocalFile(url));
    m_fileUrl = url;
}

void MediaPlayer::changeProgress(int value)
{
    m_progress= value;
    emit progressChanged();

}

void MediaPlayer::changeDuration(int value)
{
    m_duration = value;
    emit durationChanged();
}

void MediaPlayer::changeFileUrl(QString url)
{
    m_fileUrl = url;
    emit fileUrlChanged();
}
