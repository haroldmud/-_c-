#include <iostream>
#include <vector>
using namespace std;

void demo() {
    vector<int> v = {1, 2, 3, 12, 5};

    // --- Reference to update one item ---
    int& ref = v[3];  // key to the 4th mailbox
    ref = 4;          // changes 12 → 4
    cout << "After reference update: " << v[3] << endl;

    // - Pointer to walk through sequence -
    int* ptr = &v[0]; // walking stick at the first mailbox
    for (int i = 0; i < v.size(); i++) {
        cout << *(ptr + i) << " ";  // moves and see each mailbox
        if (*(ptr + i) == 3) *(ptr + i) = 33; // modify while walking
    }

    cout << "\nAfter pointer walk: ";
    for (int n : v) cout << n << " ";
    cout << endl;
}

int main() {
    demo();
    return 0;
}
