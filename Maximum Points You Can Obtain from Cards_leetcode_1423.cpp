class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int total = 0;
        
        // Calculate the total sum of all elements in cardPoints
        for (int i = 0; i < n; ++i) {
            total += cardPoints[i];
        }
        
        // Calculate the sum of the first n - k elements
        int windowSum = 0;
        for (int i = 0; i < n - k; ++i) {
            windowSum += cardPoints[i];
        }
        
        int minWindowSum = windowSum;
        
        
        for (int i = n - k; i < n; ++i) {
            windowSum += cardPoints[i] - cardPoints[i - (n - k)];
            minWindowSum = min(minWindowSum, windowSum);
        }
        
       
        return total - minWindowSum;
    }
};
