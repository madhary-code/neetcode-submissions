class Solution {
public:

    string encode(vector<string>& strs) {
        string separator = "#";

        string result = "";
        for(string s : strs)
        {
            result += to_string(s.size());
            result += separator;
            result += s;
        }
      //  cout << result << endl;
        return result;
    }

    vector<string> decode(string s) {
        char separator = '#';  
        vector<string> result;
        int sz = s.size();
        int i = 0;
        while(i < sz)
        {
            string len;
            while(s[i] != separator)
            {
                len += s[i];
                i++;
            }
            
            int size_st = stoi(len);

            string st;
            while(size_st--)
            {
                i++;
                st.push_back(s[i]);
            }
            result.push_back(st);
            i++;
        }

        return result;
    }
};
