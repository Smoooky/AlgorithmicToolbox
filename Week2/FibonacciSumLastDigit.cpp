//
// Created by matsony on 25.04.22.
//
# include <iostream>

using namespace std;

int fibonacci_sum_naive(long long n){
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

int FibonacciSumLastDigit(long long n){
    const int PeriodSize = 60;
    int list[PeriodSize] = {0, 1, 2, 4, 7, 2, 0, 3, 4, 8, 3,
                            2, 6, 9, 6, 6, 3, 0, 4, 5, 0, 6, 7, 4, 2, 7, 0, 8, 9, 8, 8, 7,
                            6, 4, 1, 6, 8, 5, 4, 0, 5, 6, 2, 9, 2, 2, 5, 8, 4, 3, 8, 2, 1,
                            4, 6, 1, 8, 0, 9, 0};
    return list[n % PeriodSize];
}

int main(){
    long long n;
//    srand(time(NULL));
//    while (true) {
//        n = rand()%100;
//        if ( FibonacciSumLastDigit(n) == fibonacci_sum_naive(n))
//            cout << "OK " << n << " " << FibonacciSumLastDigit(n) << " " << fibonacci_sum_naive(n) << endl;
//        else {
//            cout << "KO " << n << " " << FibonacciSumLastDigit(n) << " " << fibonacci_sum_naive(n) << endl;
//            break;
//        }
//    }
    cin >> n;
    cout << FibonacciSumLastDigit(n) << endl;
    return (0);
};