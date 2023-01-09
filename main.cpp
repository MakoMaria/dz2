#include <iostream>
#include <vector>
using namespace std;
/*The thing is to achieve maximum profit.
 * From buying at very least price and selling at very higher price
 *
 * So, if buy at 7 & sell at any time in the future, we'll face loss.
 * Because buying price is way higher then selling price available we have
 * Now, I have seen a dip & I buy at 1 & sell at 5 my overall profit will be 5 - 1 = 4
 * But what if, I had buy at 1 & sell at 6 my profit will be 6 - 1 = 5. Which is greater then my overall profit. So, i will update my overall profit with new value.
 * Now we have done as further we don't have any higher point to sell. We will return our answer.
 * */
int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    int answer = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            answer = max(answer, prices[j] - prices[i]);
        }
    }
    return answer;
}
int main()
{
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    cout << maxProfit(prices) << endl;
    return 0;
}