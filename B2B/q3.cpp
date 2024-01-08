#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm> // for std::find

using namespace std;

int main()
{
    // Open the file in read mode
    ifstream inFile("words.txt");

    // Check if the file is successfully opened
    if (!inFile.is_open())
    {
        cerr << "Error opening the file words.txt." << endl;
        return 1;
    }

    // Read the words from the file and store them in a vector
    vector<string> wordsInFile;
    string wordFromFile;
    while (inFile >> wordFromFile)
    {
        wordsInFile.push_back(wordFromFile);
    }

    // Close the file
    inFile.close();

    // Open the file in append mode to add new words
    ofstream outFile("words.txt", ios::app);

    // Check if the file is successfully opened
    if (!outFile.is_open())
    {
        cerr << "Error opening the file words.txt for writing." << endl;
        return 1;
    }

    // Get 10 words from the user
    vector<string> userWords;
    cout << "Enter 10 words, one at a time:" << endl;
    for (int i = 0; i < 10; ++i)
    {
        string userInput;
        cin >> userInput;

        // Check if the word exists in the file
        if (find(wordsInFile.begin(), wordsInFile.end(), userInput) != wordsInFile.end())
        {
            cout << "Word '" << userInput << "' found in the file." << endl;
        }
        else
        {
            cout << "Word '" << userInput << "' not found in the file." << endl;

            // Add the user-entered word to the file in append mode
            outFile << userInput << endl;
        }

        // Add the user-entered word to the vector (for demonstration purposes)
        userWords.push_back(userInput);
    }

    // Close the file
    outFile.close();

    return 0;
}
