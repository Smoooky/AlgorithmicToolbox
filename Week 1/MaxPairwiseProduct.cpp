//
// Created by matsony on 20.04.22.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long maxPairProd(vector<int> &nums, int n){
    long long prod1, prod2;

    sort(nums.begin(), nums.end());
    prod1 = (long long)nums[0] * (long long)nums[1];
    prod2 = (long long)nums[n - 1] * (long long)nums[n - 2];
    if (prod1 > prod2)
        return (prod1);
    return (prod2);
}

int main(){
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++)
        cin >> nums[i];
    cout << maxPairProd(nums, n) << endl;
    return (0);
}