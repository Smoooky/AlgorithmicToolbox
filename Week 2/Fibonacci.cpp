//
// Created by matsony on 20.04.22.
//
# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int fibonacci_naive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}

long long Fibonacci(int n) {
    vector<long long> nums(n + 1);
    nums[0] = 0;
    nums[1] = 1;
    for (int i = 2; i <= n; i++)
        nums[i] = nums[i - 1] + nums[i - 2];
    return (nums[n]);
}

int main(){
    int n;

    cin >> n;

    cout << Fibonacci(n) << " " << fibonacci_naive(n) << endl;
    return (0);
}