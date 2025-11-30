#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string is_sorted_and_how(const vector<int>& numbers) {
    if (numbers.size() <= 1) return "yes, ascending"; // one or zero elements: treat as sorted

    bool asc = true, desc = true;
    for (size_t i = 1; i < numbers.size(); ++i) { // i = 1, the initialization starts from the second item which then is compared to the first one
        if (numbers[i] < numbers[i-1]) asc = false;   // strict decrease breaks ascending
        if (numbers[i] > numbers[i-1]) desc = false;  // strict increase breaks descending
        if (!asc && !desc) return "no";               // early exit 
    }

    if (asc) return "yes, ascending";
    if (desc) return "yes, descending";
    return "no";
}


// Ascending:
// bool asc = std::is_sorted(numbers.begin(), numbers.end());


// Descending:
// bool desc = std::is_sorted(numbers.rbegin(), numbers.rend());
