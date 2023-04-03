// Превратить строку 03.04.2023 в три числа

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cout << "Enter date (dd.mm.yyyy) : ";
    getline(cin, input);

    // 03.04.2023
    int position = input.find('.');
    string _day = input.substr(0, position);
    input = input.substr(position + 1); // 04.2023
    position = input.find('.');
    string _month = input.substr(0, position);
    string _year = input.substr(position + 1);

    int day = stoi(_day);
    int month = stoi(_month);
    int year = stoi(_year);

    return 0;
}
