// Превратить строку 03.04.2023 в три числа

#include <iostream>
#include <string>

using namespace std;

string Parser(string& input, char delimiter) {
    int position = input.find(delimiter);
    string result = input.substr(0, position);
    input = input.substr(position + 1);
    return result;
}

int main() {
    string input;
    cout << "Enter date (dd.mm.yyyy) : ";
    getline(cin, input);

    // 03.04.2023
    /*int position = input.find('.');
    string _day = input.substr(0, position);
    input = input.substr(position + 1); // 04.2023
    position = input.find('.');
    string _month = input.substr(0, position);
    string _year = input.substr(position + 1);*/

    string _day = Parser(input, '.');
    string _month = Parser(input, '.');
    string _year = input;

    int day = stoi(_day);
    int month = stoi(_month);
    int year = stoi(_year);

    cout << year << "-" << month << "-" << day << endl;

    return 0;
}
