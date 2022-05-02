//
// Created by matsony on 30.04.22.
//

# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

double get_optimal_value(int capacity, vector<int> weights, vector<int> values, int n) {
    double res = 0.0;
    vector<double> ratio(n);
    int index = 1;

    for (int i = 0; i < n; i++){
        ratio[i] = (double) values[i] / (double) weights[i];
    }
    while(capacity > 0 && index) {
        index = max_element(ratio.begin(), ratio.end()) - ratio.begin();
        if (capacity >= weights[index])
            res += values[index];
        else
            res += values[index] * ((double)capacity / (double)weights[index]);
        capacity -= weights[index];
        ratio.erase(ratio.begin() + index);
        weights.erase(weights.begin() + index);
        values.erase(values.begin() + index);
    }
    return res;
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

    double optimal_value = get_optimal_value(capacity, weights, values, n);

    cout.precision(10);
    cout << optimal_value << std::endl;
    return 0;
}