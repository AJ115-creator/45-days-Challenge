
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    if (prices.empty())
      return 0; // Handle empty prices case

    int mini = prices[0];
    int maxprofit = 0;
    int n = prices.size();

    for (int i = 1; i < n; i++)
    { // Start loop from 1
      int cost = prices[i] - mini;
      maxprofit = max(maxprofit, cost);
      mini = min(mini, prices[i]);
    }

    return maxprofit; // Return maxprofit, not maxProfit()
  }
};
