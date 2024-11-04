class Solution {
public:
    string makeFancyString(string& s) {
        string ans;
        ans.reserve(s.size());
        
        int count = 0;
        char* lastChar = nullptr;

        for (char x : s) {
            if (lastChar && *lastChar == x) {
                if (count < 2) {
                    ans += x;
                    count++;
                }
            } else {
                ans += x;
                count = 1;
                lastChar = &ans.back();
            }
        }
        return ans;
    }
};