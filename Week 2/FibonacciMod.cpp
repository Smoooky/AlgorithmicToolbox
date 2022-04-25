//
// Created by matsony on 25.04.22.
//

# include <iostream>

using namespace std;

long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}

long long PisanoPeriod(long long m)
{
    long long prev = 0;
    long long curr = 1;
    long long res = 0;

    for(int i = 0; i < m * m; i++)
    {
        long long temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;

        if (prev == 0 && curr == 1)
            res = i + 1;
    }
    return res;
}

long long FibonacciMod(long long n, long long m)
{
    if (n <= 1)
        return n;
    long long period = PisanoPeriod(m);
    n = n % period;
    long long prev = 0;
    long long curr = 1;
    for(int i = 0; i < n - 1; i++)
    {
        long long temp = 0;
        temp = curr;
        curr = (prev + curr) % m;
        prev = temp;
    }
    return curr % m;
}

int main()
{
    long long n, m;

//    srand(time(NULL));
//    while (true) {
//        n = rand()%100;
//        m = rand()%100;
//        if (FibonacciMod(n, m) == get_fibonacci_huge_naive(m, n)){
//            cout << "OK " << n << " " << m << " " << FibonacciMod(n, m) << " " << get_fibonacci_huge_naive(n, m) << endl;
//        }
//        else {
//            cout << (FibonacciMod(n, m) == get_fibonacci_huge_naive(m, n)) << endl;
//            cout << "KO " << n << " " << m << " " << FibonacciMod(n, m) << " " << get_fibonacci_huge_naive(n, m) << endl;
//            break;
//        }
//    }

    cin >> n >> m;
    cout << (FibonacciMod(9999999999999, 2)) << endl;
    return (0);
}
 