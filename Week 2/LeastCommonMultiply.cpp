//
// Created by matsony on 25.04.22.
//

# include <iostream>

using namespace std;

long long lcm_naive(int a, int b) {
    for (long l = 1; l <= (long long) a * b; ++l)
        if (l % a == 0 && l % b == 0)
            return l;

    return (long long) a * b;
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

long long lcm(int a, int b){
    return (abs((long long)a*(long long)b)/gcd(a, b));
}

int main(){
    int a, b;
//    srand(time(NULL));
//    while (true) {
//        a = rand()%10000000;
//        b = rand()%10000000;
//        if ( lcm(a, b) == lcm_naive(a, b))
//            cout << "OK " << a << " " << b << " " << lcm(a, b) << " " << lcm_naive(a, b) << endl;
//        else {
//            cout << "KO " << a << " " << b << " " << lcm(a, b) << " " << lcm_naive(a, b) << endl;
//            break;
//        }
//    }
    cin >> a >> b;
    cout << lcm(a, b) << endl;
    return (0);
}
