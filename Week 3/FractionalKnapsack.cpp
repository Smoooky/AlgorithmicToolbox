//
// Created by matsony on 30.04.22.
//

#include <iostream>
#include <vector>

using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
    double value = 0.0;



    return value;
}

int main() {
    int n;
    int capacity;
    cin >> n >> capacity;
    vector<int> values(n);
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        std::cin >> values[i] >> weights[i];
    }

    double optimal_value = get_optimal_value(capacity, weights, values);

    cout.precision(10);
    cout << optimal_value << std::endl;
    return 0;
}