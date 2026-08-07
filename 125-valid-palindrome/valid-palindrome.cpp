class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;

        while(i < s.size()){
            if(!isalpha(s[i]) && !isdigit(s[i])) i++;
            else if(!isalpha(s[j]) && !isdigit(s[j])) j--;
            else{
                if(tolower(s[i]) == tolower(s[j])){
                    i++;
                    j--;
                }
                else return false;
            }
        }
        return true;
    }
};