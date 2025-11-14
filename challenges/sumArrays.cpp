#include <iostream>
#include <vector>
using namespace std;

// Template function works with int, float, double, etc.
template <typename T>
T sum(const vector<T>& nums) {
    T total = 0;
    for (T n : nums) {   // C++11 range-based for loop
        total += n;
    }
    return total;
}

int main() {
    vector<double> a = {1, 2, 2.5, 2.5};  // C++11 initializer list
    cout << sum(a) << endl;               // prints 8
    return 0;
}
