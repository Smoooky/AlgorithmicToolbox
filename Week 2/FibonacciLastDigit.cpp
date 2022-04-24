//
// Created by matsony on 24.04.22.
//
# include <iostream>
# include <vector>

using namespace std;

int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % 10;
}

int FibonacciLastDigit(int n) {
    int n1, n2, n3;

    n1 = 0;
    n2 = 1;
    if (n == 0)
        return (n1);
    for (int i = 2; i <= n; i++) {
        n3 = (n1 + n2) % 10;
        n1 = n2;
        n2 = n3;
    }
    return (n2);
}

int main(){
//    int a;
//    srand(time(NULL));
//    while (true) {
//        a = rand()%25;
//        if (get_fibonacci_last_digit_naive(a) == FibonacciLastDigit(a))
//            cout << "OK " << a << " " << a << " " << FibonacciLastDigit(a) << endl ;
//        else {
//            cout << "KO " << a << " " << a << " " << FibonacciLastDigit(a) << " " << get_fibonacci_last_digit_naive(a) << endl ;
//            break;
//        }
//    }
    int n;

    cin >> n;
    cout << FibonacciLastDigit(n) << endl;
    return (0);
}
