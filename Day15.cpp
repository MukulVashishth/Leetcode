class Solution {
public:
    string reverseWords(string s) {
        string res;
        int i=0;
        int len = s.length();
        
        while(i<len)
        {
            while(i<len && s[i]==' ')
                i++;
            if(i>=len)
                break;
            int j=i+1;
            while(j<len && s[j]!=' ')
                j++;
            string s1 = s.substr(i , j-i);  
            if(res.length()==0)
                res = s1;
            else
                res = s1 + " " + res;
            i = j+1;
        }
        return res;
    }
};