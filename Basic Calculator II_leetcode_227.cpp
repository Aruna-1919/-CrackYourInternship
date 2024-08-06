class Solution {
public:
    int calculate(string s) {
        stack<int> values;
        int num = 0;
        char sign = '+'; 
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (isdigit(c)) {
                num = num * 10 + (c - '0');
            }
            if (!isdigit(c) && c != ' ' || i == s.length() - 1) {
                if (sign == '+') {
                    values.push(num);
                } else if (sign == '-') {
                    values.push(-num);
                } else if (sign == '*') {
                    int top = values.top();
                    values.pop();
                    values.push(top * num);
                } else if (sign == '/') {
                    int top = values.top();
                    values.pop();
                    values.push(top / num);
                }
                sign = c;
                num = 0;
            }
        }
        int result = 0;
        while (!values.empty()) {
            result += values.top();
            values.pop();
        }

        return result;
    }
};
