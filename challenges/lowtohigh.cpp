#include <iostream>
#include <algorithm>
using namespace std;

// FOR ARRAYS
int main() {
  int nums[] = {3,2,1,12,5};
  int n = sizeof(nums) / sizeof(nums[0]);
  sort(nums, nums + n);
  int sum = 0; 
  for(int x: nums) {
    sum += x;
  }
  int res = sum - nums[0] - nums[n-1];
  cout << res;
  return 0;
}
//output: 10

// FOR VECTORS
#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;

int sum(vector<int> numbers)
{
    sort(numbers.begin(), numbers.end());
    int sum = 0;
    for(int x: numbers) {
      sum += x;
      cout << x << " ";
    }
    if(numbers.size() < 2){
      return 0;
    } else {
      return sum - numbers[0] - numbers[numbers.size() - 1];
    }
}
