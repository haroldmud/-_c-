#include <iostream>
#include <algorithm>
using namespace std;

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
