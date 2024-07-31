class Solution
{
public:
  int findDuplicate(vector<int> &nums)
  {
    int ptr1 = 0;
    int ptr2 = 0;

    // Phase 1: Finding the intersection point
    do
    {
      ptr1 = nums[ptr1];
      ptr2 = nums[nums[ptr2]];
    } while (ptr1 != ptr2);

    // Phase 2: Finding the entrance to the cycle
    ptr1 = 0;
    while (ptr1 != ptr2)
    {
      ptr1 = nums[ptr1];
      ptr2 = nums[ptr2];
    }

    return ptr1;
  }
};

// Usage example
int main()
{
  Solution solution;
  vector<int> nums = {1, 3, 4, 2, 2}; // Example input
  int result = solution.findDuplicate(nums);
  cout << "Duplicate number: " << result << endl;
  return 0;
}
