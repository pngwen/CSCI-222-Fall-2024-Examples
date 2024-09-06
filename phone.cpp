// File: phone.cpp
// Purpose: Validate US Phone Numbers
#include <iostream>

using namespace std;

const int MAX_PHONE=20;


/**
 * Validate that the given phone number is ###-###-####
 */
bool isValidPhone(char phone[]);

bool isDigit(char c);

int main() 
{
    char phone[MAX_PHONE];

    // Note: The following is very dangerous
    cout << "Enter a phone number: ";
    cin >> phone;

    // print the phone number
    cout << phone << " is ";
    if(isValidPhone(phone)) {
        cout << "valid";
    } else {
        cout << "invalid";
    }
    cout << endl;
}


bool isValidPhone(char phone[]) {
    // validate 3 digits
    for(int i=0; i<3; i++) {
        if(not isDigit(phone[i])) {
            return false;
        }
    }

    // validate dash
    if(phone[3] != '-') {
        return false;
    }

    // validate 3 digits
    for(int i=4; i<7; i++) {
        if(not isDigit(phone[i])) {
            return false;
        }
    }

    // validate dash
    if(phone[7] != '-') {
        return false;
    }

    for(int i=8; i<12; i++) {
        if(not isDigit(phone[i])) {
            return false;
        }
    }

    return phone[12] == 0;
}

bool isDigit(char c) {
    return c >= '0' and c <= '9';
}