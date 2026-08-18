#include <iostream>
using namespace std;
#include <stack>
#include <vector>

vector<int> prevGreaterElement(vector<int> nums)
{
  int n = nums.size();
  stack<int> s;
  vector<int> prev(nums.size(), 0);
  for (int i = 0; i < n; i++)
  {
    while (s.size() > 0 && s.top() >= nums[i])
    {
      s.pop();
    }
    if (s.empty())
    {
      prev[i] = -1;
    }
    else
    {
      prev[i] = s.top();
    }
    s.push(nums[i]);
  }
  return prev;
}

int main()
{
  vector<int> nums = {3, 1, 0, 8, 6};
  vector<int> prevGreatEl = prevGreaterElement(nums);
  for (int val : prevGreatEl)
  {
    cout << val << " ";
  }
  cout << endl;

  return 0;
}