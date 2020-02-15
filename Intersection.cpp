//Hashmap Solution
//Time Complexity-O(m+n)--> where m and n are size of two given arrays
//Space Complexity-O(min(m,n))--> as I'm always storing the frequencies of elements of the array which has least size.
//Did the code execute on Leetcode? Yes

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()>nums1.size())
        {
            return intersect(nums2,nums1);
        }
        vector<int>res={};
        unordered_map<int,int>m;
        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            auto it=m.find(nums1[i]);
            if(m.find(nums1[i])!=m.end()&& it->second>0)
            {
                res.push_back(nums1[i]);
                it->second--;
            }
        }
        return res;
    }
};