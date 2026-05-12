#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Variable to store the chosen number
    int chosenNumber = 7;

    // Variable to store the user's guess
    int userGuess = 0;

    // Array/List to store all guesses
    vector<int> guesses;

    // While loop continues until the correct number is guessed
    while (userGuess != chosenNumber)
    {
        // Ask user to enter a number
        cout << "Enter a number: ";
        cin >> userGuess;

        // Store the guess in the array/list
        guesses.push_back(userGuess);

        // Compare the guess with the chosen number
        if (userGuess > chosenNumber)
        {
            cout << "Too high" << endl;
        }
        else if (userGuess < chosenNumber)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Correct" << endl;
        }
    }

    // Display all guesses after the loop ends
    cout << endl;
    cout << "All guesses entered:" << endl;

    for (int i = 0; i < guesses.size(); i++)
    {
        cout << guesses[i] << endl;
    }

    return 0;
}
