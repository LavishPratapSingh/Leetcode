class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return 0;
        string s=to_string(x);
        int i=0,j=s.length()-1;
        while(i<s.length())
        {
            if(s[j--]!=s[i++])
            return 0;
        }
        return 1;
    }
};