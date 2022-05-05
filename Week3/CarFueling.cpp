//
// Created by matsony on 02.05.22.
//
# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    int refills = 0;
    int curr_refill = 0;
    int limit = tank;

    while (limit < dist){
        if (curr_refill >= stops.size() || stops[curr_refill] > limit)
            return -1;
        while (curr_refill < stops.size() - 1 && stops[curr_refill + 1] <= limit)
            curr_refill++;
        refills++;
        limit = stops[curr_refill] + tank;
        curr_refill++;
    }
    return refills;
}


int main() {
    int d, m, n;

    cin >> d >> m >> n;
    vector<int> stops(n);

    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);
    cout << compute_min_refills(d, m, stops) << "\n";
    return 0;
}