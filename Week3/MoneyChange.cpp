//
// Created by matsony on 30.04.22.
//

#include <iostream>

/* The goal in this problem is to find the minimum number of coins needed to change the input value
(an integer) into coins with denominations 1, 5, and 10. */

using namespace std;

int moneyChange(int input){
    int res = 0;

    res += input / 10;
    input %= 10;
    res += input / 5;
    input %= 5;
    res += input;
    return (res);
}

int main(){
    int n;

//    srand(time(NULL));
//
//    for (int i = 0; i < 10; i++) {
//        n = rand() % 100;
//        n = INT32_MAX;
//        cout << moneyChange(n) << endl;
//    }
    cin >> n;
    cout << moneyChange(n) << endl;
    return (0);
}
