#include <vector>
using namespace std;

vector<int> twoNumberSum(vector<int> array, int targetSum) {
  unordered_set<int> nums;

  for (int i = 0; i <  array.size();i ++){
    int missing = targetSum  - array [ i ];
    if (nums.count(missing))
        return  { missing, array[i]};
    nums.insert(array[i]);
  }
  return {};
}
