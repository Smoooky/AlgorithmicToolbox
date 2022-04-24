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
    vector<int> nums(n + 1);
    nums[0] = 0;
    nums[1] = 1;
    for (int i = 2; i <= n; i++) {
        nums[i] = nums[i - 1] + nums[i - 2];
        if (nums[i] >= 10)
            nums[i] -= 10;
    }
    return (nums[n]);
}

int main(){
//    int a;
//    srand(time(NULL));
//    while (true) {
//        a = rand()%100;
//        if (get_fibonacci_last_digit_naive(a) == FibonacciLastDigit(a))
//            cout << "OK " << a << " " << a << " " << FibonacciLastDigit(a) << endl ;
//        else {
//            cout << "KO " << a << " " << a << " " << FibonacciLastDigit(a) << " " << get_fibonacci_last_digit_naive(a) << endl ;
//            break;
//        }
//    }
    int n;

    cin >> n;
    cout << FibonacciLastDigit(79) << endl;
    return (0);
}
