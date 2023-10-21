class Solution {
public:
    int countSegments(string s) {
        int n = s.length(), ans{};
        bool flag = 0;
        for(int i = 0; i < n; i++) {

            if(s[i] != ' ' && flag == 1 && i != n - 1) continue;

            if(s[i] == ' ' && flag == 0) continue;

            if(s[i] != ' ' && flag == 0) {
                flag = 1;
            }
            else if(s[i] == ' ' && flag == 1) {
                flag = 0;
                ans++;
            }

            if(i == n - 1 && flag == 1) ans++;
        }

        return ans;
    }
};