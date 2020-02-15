//Time Complexity-O(n)
//Space Complexity-O(1)
//Did the code run on Leetcode? yes

class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size()==0)
        {
            return 0;
        }
        for(int i=0;i<citations.size();i++)
        {
            int a=citations[i];
            int b=citations.size()-i;
            if(a==b)
            {
                return a;
            }
            else if(a>b)
            {
                return citations.size()-i;
            }
        }
        return 0;
    }
};