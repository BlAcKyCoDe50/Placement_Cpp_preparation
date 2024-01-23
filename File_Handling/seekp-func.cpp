#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile("data.txt", ios::out);

    if (!myfile.is_open()) {
        cout << "File not found!!" << endl;
    } else {
        cout << "Current position in the file: " << myfile.tellp() << endl;

        // Writing to the file
        myfile << "Hey..Vishu this side" << endl;

        // Moving the file pointer to position 2
        myfile.seekp(2);

        // Appending to the file from the current position
        myfile << "hello Vishu this side";

        // Closing the file
        myfile.close();

        // Reading the content of the file
        ifstream readfile("data.txt", ios::in);
        if (readfile.is_open()) {
            string content;
            while (getline(readfile, content)) {
                cout << content << endl;
            }
            readfile.close();
        } else {
            cout << "Unable to open file for reading." << endl;
        }
    }

    return 0;
}
