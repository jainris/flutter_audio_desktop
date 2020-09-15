/* http://github.com/alexmercerind/flutter_audio_desktop */

#include "AudioPlayer.hpp"

namespace Audio {
    AudioPlayer audioPlayer;

    void initPlayer(int debug) {
        audioPlayer = new AudioPlayer(static_cast<bool>(debug));
    }

    void loadPlayer(const char* fileLocation) {
        audioPlayer.load(fileLocation);
    }

    void playPlayer() {
        audioPlayer.play();
    }

    void pausePlayer() {
        audioPlayer.pause();
    }

    void stopPlayer() {
        audioPlayer.stop();
    }

    int getDuration() {
        return audioPlayer.getDuration();
    }

    int getPosition() {
        return audioPlayer.getPosition();
    }

    void setPosition(int timeMilliseconds) {
        audioPlayer.setPosition(timeMilliseconds);
    }

    void setVolume(float volume) {
        audioPlayer.setVolume(volume);
    }

    int getVolume() {
        return audioPlayer.getVolume();
    }
}

int main(int argc, const char** argv) {
    AudioPlayer audioPlayer(true);
    audioPlayer.load(argv[2]);
    audioPlayer.play();
    std::cin.get();
    return 0;
}