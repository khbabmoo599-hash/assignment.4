#include <iostream>
#include <fstream>
#include <string>
#include "notepad.h"
using namespace std;

void writeFile(string filename) {
    ofstream outFile(filename.c_str());
    if (!outFile) return;
    cout << "Enter text (Type 'END' to save):\n";
    string line;
    cin.ignore();
    while (getline(cin, line) && line != "END") {
        outFile << line << endl;
    }
    outFile.close();
}

void readFile(string filename) {
    ifstream inFile(filename.c_str());
    if (!inFile) { cout << "File not found!\n"; return; }
    string line;
    while (getline(inFile, line)) cout << line << endl;
    inFile.close();
}

void appendFile(string filename) {
    ofstream outFile(filename.c_str(), ios::app);
    if (!outFile) return;
    cout << "Enter text to append (Type 'END' to save):\n";
    string line;
    cin.ignore();
    while (getline(cin, line) && line != "END") {
        outFile << line << endl;
    }
    outFile.close();
}
