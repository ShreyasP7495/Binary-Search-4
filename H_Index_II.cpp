//Time Complexity-O(logn)
//Space Complexity-O(1)
//Did the code run on Leetcode? yes

class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size()==0)
        {
            return 0;
        }
        int low=0;
        int high=citations.size()-1;
        while(low<=high)
        {
           int mid=low+(high-low)/2;
            if(citations[mid]==citations.size()-mid)
            {
                return citations[mid];
            }
            else if(citations[mid]<citations.size()-mid)
            {
                    low=mid+1;
            }
            else
            {
                    high=mid-1;
            }
        }
        return citations.size()-low;
    }
};