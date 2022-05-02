//
// Created by matsony on 20.04.22.
//
# include <algorithm>
# include <iostream>

using namespace std;

int gcd_naive(int a, int b) {
    int current_gcd = 1;
    for (int d = 2; d <= a && d <= b; d++) {
        if (a % d == 0 && b % d == 0) {
            if (d > current_gcd) {
                current_gcd = d;
            }
        }
    }
    return current_gcd;
}

int gcd(int a, int b){
    if (a == 0 || b == 0)
        return (1);
    while (a != 0 && b != 0 ) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return (a + b);
}


int main (){
    int a, b;
//    while (true) {
//        a = rand()%100000;
//        b = rand()%100000;
//        if ( gcd(a, b) == gcd_naive(a, b))
//            cout << "OK " << a << " " << b << gcd(a, b) << " " << gcd_naive(a, b) << endl ;
//        else {
//            cout << "KO " << a << " " << b << gcd(a, b) << " " << gcd_naive(a, b) << endl ;
//            break;
//        }
//    }
//    cout << gcd_naive(0, 378) << endl;
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    return (0);
}