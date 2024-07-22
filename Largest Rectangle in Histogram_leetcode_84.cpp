class Solution {
public:
    int largestRectangleArea(std::vector<int>& heights) {
        std::stack<int> st;
        int max_area = 0;
        int n = heights.size();
        
        for (int i = 0; i <= n; ++i) {
            while (!st.empty() && (i == n || heights[st.top()] > heights[i])) {
                int height = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() - 1;
                max_area = std::max(max_area, height * width);
            }
            st.push(i);
        }
        
        return max_area;
    }
};
