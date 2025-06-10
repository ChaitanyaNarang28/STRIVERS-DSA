#include <bits/stdc++.h>
using namespace std;

pair<int, int> position(vector<int>& arr, int n, int target) {
    int low = 0, high = n - 1;
    int floor = -1, ceil = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return {arr[mid], arr[mid]};
        } else if (arr[mid] > target) {
            ceil = arr[mid];
            high = mid - 1;
        } else {
            floor = arr[mid];
            low = mid + 1;
        }
    }

    return {floor, ceil};
}

int main() {
    vector<int> arr = {3, 4, 4, 7, 8, 10};
    int target = 8;
    pair<int, int> ans = position(arr, arr.size(), target);
    cout << "Floor is: " << ans.first << ", Ceil is: " << ans.second << endl;
}
