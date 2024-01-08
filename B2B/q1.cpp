#include <iostream>
#include <string>

using namespace std;

class Song
{
private:
    int songId;
    string songLyrics;
    int duration; // in seconds
    string singerName;

public:
    // Default constructor
    Song() : songId(0), duration(0) {}

    // Parameterized constructor
    Song(int id, const string &lyrics, int dur, const string &singer)
        : songId(id), songLyrics(lyrics), duration(dur), singerName(singer) {}

    // Setter methods
    void setSongId(int id)
    {
        songId = id;
    }

    void setSongLyrics(const string &lyrics)
    {
        songLyrics = lyrics;
    }

    void setDuration(int dur)
    {
        duration = dur;
    }

    void setSingerName(const string &singer)
    {
        singerName = singer;
    }

    // Getter methods
    int getSongId() const
    {
        return songId;
    }

    const string &getSongLyrics() const
    {
        return songLyrics;
    }

    int getDuration() const
    {
        return duration;
    }

    const string &getSingerName() const
    {
        return singerName;
    }

    // Display song details
    void displaySongDetails() const
    {
        cout << "Song ID: " << songId << endl;
        cout << "Song Lyrics: " << songLyrics << endl;
        cout << "Duration: " << duration << " seconds" << endl;
        cout << "Singer: " << singerName << endl;
    }
};

int main()
{
    // Create an instance of the Song class
    Song song1;

    // Set song details using setter methods
    song1.setSongId(1);
    song1.setSongLyrics("Some song lyrics...");
    song1.setDuration(240); // Assuming a 4-minute song
    song1.setSingerName("John Doe");

    // Display song details using the displaySongDetails method
    cout << "Song Details:" << endl;
    song1.displaySongDetails();

    return 0;
}
