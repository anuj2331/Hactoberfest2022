 #include <iostream>
#include <vector>
using namespace std;

bool canJump(const vector<int>& arr) {
    int maxReach = 0;
    int size = arr.size();
    
    for (int i = 0; i < size; i++) {
        if (i > maxReach) {
            return false;
        }
        maxReach = max(maxReach, i + arr[i]);
    }
    return true;
}

int main() {
    int size;
    cin >> size;
    vector<int> arr(size); // Reserve space for size elements
    
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // Fill the vector with input values
    }
    
    bool ans = canJump(arr);
    cout << (ans ? "True" : "False") << endl; // Output "True" or "False"
    
    return 0;
}