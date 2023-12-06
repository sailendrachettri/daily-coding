class Solution {
public:
    int totalMoney(int n) {
      int dollarStart = 1;
      int dollarEnd = 7;
      int sevenPeriodSum = 28;
      int total = 0;

      // some what of a sliding window approach
      // i increment by seven and add the sum to the total
      // then i recalculate sevenPeriodSum and loop again
      // if i can sub a full week from n
      while ((n - 7) > 0) {
        total += sevenPeriodSum;

        sevenPeriodSum -= dollarStart++;
        sevenPeriodSum += ++dollarEnd;

        n -= 7;
      }

      // this for loop is to clean up the last partial week
      // and what it does is take the dollar start week and 
      // add it up to the last n day 
      for (int i = 0; i < n; ++i) {
        total += dollarStart;
        ++dollarStart;
      }

      return total;
    }
};