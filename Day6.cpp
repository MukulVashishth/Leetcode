class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1 ; i>=0 ;i--)
        {
            if(digits[i] == 9)
                digits[i] = 0;
            else
            {
                digits[i]++;
                return digits;      //Returns digits if all the digits are not 9 the size of array is same
            }
        }
        int x = digits.size();
        vector<int>vec(x+1);
        vec[0] = 1;
        return vec;
    }
};