class Solution {
public:
    int nthUglyNumber(int n) {
    if (n == 0) 
        return 1;

        vector<int> vec;

        vec.push_back(1);

        int i = 0;
        int j = 0;
        int k = 0;

        while (vec.size() <= n) {
            int numTwo = vec[i] * 2;

            int numThree = vec[j] * 3;

            int numFive = vec[k] * 5;

            int minNum = min({numTwo, numThree, numFive});

            vec.push_back(minNum);

            if (minNum == numTwo) i += 1;
            if (minNum == numThree) j += 1;
            if (minNum == numFive) k += 1;
        }

        return vec[n - 1];
    }
};