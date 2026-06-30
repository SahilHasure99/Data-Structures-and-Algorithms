class Solution {
public:
    void reverseString(vector<char>& s) {
        int l= 0, R= s.size()-1;
        while(l <= R) {
            swap(s[l++], s[R--]);
        }
    }
};