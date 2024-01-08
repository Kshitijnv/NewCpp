#include <iostream>
#include <string>

using namespace std;

struct Song
{
    string title;
    string singer;
    int duration; // in seconds
};

int main()
{
    const int numberOfSongs = 10;
    Song songs[numberOfSongs];

    // Input details for each song
    for (int i = 0; i < numberOfSongs; ++i)
    {
        cout << "Enter details for song #" << i + 1 << ":" << endl;
        cout << "Title: ";
        getline(cin >> ws, songs[i].title); // Read the title with spaces
        cout << "Singer: ";
        getline(cin >> ws, songs[i].singer); // Read the singer with spaces
        cout << "Duration (in seconds): ";
        cin >> songs[i].duration;
        cout << endl;
    }

    // Accept singer name from the user
    string searchSinger;
    cout << "Enter the singer's name to search for songs: ";
    getline(cin >> ws, searchSinger);

    // Search for songs sung by the given singer and calculate total duration
    int totalDuration = 0;
    bool singerFound = false;

    for (int i = 0; i < numberOfSongs; ++i)
    {
        if (songs[i].singer == searchSinger)
        {
            cout << "Song: " << songs[i].title << ", Duration: " << songs[i].duration << " seconds" << endl;
            totalDuration += songs[i].duration;
            singerFound = true;
        }
    }

    // Display the total duration or a message if the singer was not found
    if (singerFound)
    {
        cout << "Total duration of songs by " << searchSinger << ": " << totalDuration << " seconds" << endl;
    }
    else
    {
        cout << "No songs found for singer " << searchSinger << "." << endl;
    }

    return 0;
}
