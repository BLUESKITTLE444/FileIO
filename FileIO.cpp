#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    // Initialize file pointer
    ifstream file("data.cvsc");

    // Initialize stringstream object
    stringstream ss;

    // Needed variables
    int IntA, IntB;
    string text;

    // Temporary string variables
    string sIntA, sIntB;

    // Check if file opened
    if (file.is_open()) {
        string line;

        // Loop through each line of the file
        while (getline(file, line)) {

            // Load the line into a stringstream
            ss.clear();
            ss.str(line);

            // Read until first comma
            getline(ss, sIntA, ',');

            // Read until second comma
            getline(ss, sIntB, ',');

            // Read the rest of the line as text
            getline(ss, text);

            // Convert string integers to actual ints
            ss.clear();
            ss.str(sIntA + " " + sIntB);
            ss >> IntA >> IntB;

            // Add the integers
            int total = IntA + IntB;

            // Print the text "total" number of times
            for (int i = 0; i < total; i++) {
                cout << text << endl;
            }
        }

        // Close the file
        file.close();
    }
    else {
        cout << "Error opening file." << endl;
    }

    return 0;
}

