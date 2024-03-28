#include <iostream>
#include <string>

using namespace std;

string spellDigit(int digit) {
    string word;
    // write a switch statement

    switch (digit) {
        case 0:
            word = "zero";
            break;
        case 1:
            word = "one";
            break;
        case 2:
            word = "two";
            break;
        case 3:
            word = "three";
            break;
        case 4:
            word = "four";
            break;
        case 5:
            word = "five";
            break;
        case 6:
            word = "six";
            break;
        case 7:
            word = "seven";
            break;
        case 8:
            word = "eight";
            break;
        case 9:
            word = "nine";
            break;
    }

    return word;

}
string spellTenth(int tenth, int digit) {
    string word = "";
    if (tenth == 1) {
        switch (digit) {
        case 0:
            word = "ten";
        break;
        case 1:
            word = "eleven";
        break;
        case 2:
            word = "twelve";
        break;
        case 3:
            word = "thirteen";
        break;
        case 4:
            word = "fourteen";
        break;
        case 5:
            word = "fifteen";
        break;
        case 6:
            word = "sixteen";
        break;
        case 7:
            word = "seventeen";
        break;
        case 8:
            word = "eighteen";
        break;
        case 9:
            word = "nineteen";
        break;
    }
    }
    else {
        switch (tenth) {
            case 2:
               word = "twenty";
               break;
            case 3:
                word = "thirty";
                break;
            case 4:
                word = "forty";
                break;
            case 5:
                word = "fifty";
                break;
            case 6:
                word = "sixty";
                break;
            case 7:
                word = "seventy";
                break;
            case 8:
                word = "eighty";
                break;
            case 9:
                word = "ninety";
                break;
        }
        if (digit > 0) {
            if (word.size() > 0) {
                word = word + " " + spellDigit(digit);
            }
            else {
                word = spellDigit(digit);
            }

        }
    }
    return word;
}

string spellTenth(int num) {  // 15 % 10 = 5; 15/10=1
    int d = num % 10;
    int t = num / 10;
    string words = spellTenth(t, d);
    return words;

}

string spellHundred(int num) {
    int h = num / 100;
    int t = num % 100;
    string word = "";
    if (h > 0) {
        word = spellDigit(h) + " hundred";
    }
    if (t > 0) {
        word = word + " " + spellTenth(t);
    }
    return word;
}
// 433 - count = 0
// 4,000, 5,120, 1,100  count = 1
// 10,000, 10,512, 100,444, 200,432
// 1,100,111, 10,445,222, 100,222,222  count = 2
// 2,111,121,111  count = 3





int main() {
    int num;

    // ask the user to enter a number between 0 - 9
    cout << "Enter a number (0-999): ";
    cin >> num;
    if (num == 0) {
        cout << "zero" << endl;
    }
    else {
        cout << spellHundred(num) << endl;

    }

    return 0;
}
