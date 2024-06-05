//given x amount the vending machine will return with least no of particular changes in 100 50 20 and 1rs
//for example x=1330rs
//13---100rs
//1----20rs
//10----1rs

#include <iostream>
using namespace std;

int main() {
    int amount;
    cin >> amount;

    int fivehund=0,hund = 0, fif = 0, twe = 0, one = 0;

    // Calculate five hundreds
    switch (amount / 500) {
        case 0: break;
        default:
            fivehund = amount / 500;
            amount %= 500;
    }

    // Calculate hundreds
    switch (amount / 100) {
        case 0: break;
        default:
            hund = amount / 100;
            amount %= 100;
    }

    // Calculate fifties
    switch (amount / 50) {
        case 0: break;
        default:
            fif = amount / 50;
            amount %= 50;
    }

    // Calculate twenties
    switch (amount / 20) {
        case 0: break;
        default:
            twe = amount / 20;
            amount %= 20;
    }

    // Calculate ones
    switch (amount / 1) {
        case 0: break;
        default:
            one = amount / 1;
            amount %= 1;
    }
    
    cout << "Number of Five Hundred Rs notes = " << fivehund << endl;
    cout << "Number of Hundred Rs notes = " << hund << endl;
    cout << "Number of Fifty Rs notes = " << fif << endl;
    cout << "Number of Twenty Rs notes = " << twe << endl;
    cout << "Number of One Rs coins = " << one << endl;

    return 0;
}
