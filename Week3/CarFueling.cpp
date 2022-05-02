//
// Created by matsony on 02.05.22.
//
# include <iostream>
# include <vector>
# include <algorithm>

using namespace std;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    int res = 0;
    vector<int>distance(stops.size());
    int i = 1;
    int curTank = tank;

    vector<int>::iterator it = stops.begin();
    distance[0] = *it;
    for (it; it != stops.end() - 1; it++) {
        distance[i++] = *(it + 1) - *it;
    }
    distance[i] = dist - *it;
    sort(distance.begin(), distance.end(), greater<int>());
    for (int a : distance){
        if (tank >= a)
            curTank -= a;
        else {
            curTank = tank;
            res++;
        }
    }
    return res;
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