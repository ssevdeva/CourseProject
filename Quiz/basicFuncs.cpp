/**
*
* Solution to course project # 1
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Sanya Sevdeva
* @idnumber 62517
* @compiler GCC
*
* <file with basic helper functions>
*
*/

#include <iostream>
#include <string>
#include <random>

#include "structsNconstants.h"

using namespace std;

/*
 * Print() function prints aligned string s in the console.
 */
void Print(const Position pos, const string &s, const int linelength) {
    unsigned long spaces = 0;
    switch (pos) {
        case CENTER: {
            spaces = (linelength - s.size()) / 2;
        }
            break;
        case RIGHT: {
            spaces = linelength - s.size();
        }
            break;
        case LEFT:
            break;
    }
    if (spaces > 0) cout << string(spaces, ' ');
    cout << s;
}

/*
 * Border() function creates a border-like display in the console.
 */
void Border() {
    string header(LINE, '=');
    cout << header << '\n';
}

/*
 * TitleBar() function creates a title header display in the console.
 */
void TitleBar() {
    string s = " WHO WANTS TO BE A MILLIONAIRE ";
    string header(LINE / 2 - s.length() / 2 - 1, '=');
    cout << header;
    cout << s;
    cout << header << '\n';
}

/*
 * GetWholeAnswer() function reads from the console and saves the input with its whitespaces in str.
 */
void GetWholeQuestion(string& str) {
    char input[LINE];
    cin >> str;
    while(str[str.length() - 1] != '?') {
        cin.getline(input, LINE);
        for (int i = 0; input[i] != '\0'; ++i) {
            str +=input[i];
        }
    }
}

/*
 * GetWholeAnswer() function reads from the console and saves the input with its whitespaces in str.
 */
void GetWholeAnswer(string& str) {
    char input[LINE];
    cin >> str;
    cin.getline(input, LINE);
    for (int i = 0; input[i] != '\0'; ++i) {
        str +=input[i];
    }
}

/*
 * GenerateID() function generates an ID code for each question.
 */
string GenerateID(const char& topic, const int lvl) {
    random_device dev;
    (mt19937(dev()));
    return ('#' + to_string(lvl) + topic + to_string(dev()));
}




