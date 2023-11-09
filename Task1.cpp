#include <iostream>
using namespace std;

class MediaPlayer {
public:
    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void stop() = 0;
};

class AudioPlayer : public MediaPlayer {
public:
    void play() override {
        cout << "Playing audio" << endl;
    }

    void pause() override {
        cout << "Pausing audio" << endl;
    }

    void stop() override {
        cout << "Stopping audio" << endl;
    }

    void adjustVolume(int volume) {
        cout << "Adjusting volume to " << volume << endl;
    }
};

class VideoPlayer : public MediaPlayer {
public:
    void play() override {
        cout << "Playing video" << endl;
    }

    void pause() override {
        cout << "Pausing video" << endl;
    }

    void stop() override {
        cout << "Stopping video" << endl;
    }

    void rewind() {
        cout << "Rewinding video" << endl;
    }
};

int main() {
    AudioPlayer audioPlayer;
    audioPlayer.play();
    audioPlayer.adjustVolume(50);
    audioPlayer.pause();
    audioPlayer.stop();

    VideoPlayer videoPlayer;
    videoPlayer.play();
    videoPlayer.rewind();
    videoPlayer.pause();
    videoPlayer.stop();

    return 0;
}
