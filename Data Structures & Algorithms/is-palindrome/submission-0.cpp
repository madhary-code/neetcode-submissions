class Solution {
public:
    bool isPalindrome(string s) {
        int sz = s.size();
        
        int i = 0; int j = sz-1;

        while(j > i)
        {
            while(i < j && !isalnum(s[i]))
            {
                i++;
            }

            while (j >= 0 && !isalnum(s[j]))
            {
                j--;
            }           
             if(i < j)
            {
                if(tolower(s[i]) != tolower(s[j]))
                {
                    cout << i << j << endl;
                    return false;
                }
                i++;
                j--;
            }
        }
    
        return true;
    }
};
