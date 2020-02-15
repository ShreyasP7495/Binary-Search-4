//Hashmap Solution
//Time Complexity-O(m+n)--> where m and n are size of two given arrays
//Space Complexity-O(min(m,n))--> as I'm always storing the frequencies of elements of the array which has least size.
//Here I'm not using extra vector to store my result instead I'm doing it inline with the vector which has least size as
//those elements will be stored in the hashmap
//Did the code execute on Leetcode? Yes


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()>nums1.size())
        {
            return intersect(nums2,nums1);
        }
        unordered_map<int,int>m;
        int a=0;
        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++)
        {
            auto it=m.find(nums1[i]);
            if(m.find(nums1[i])!=m.end()&& it->second>0)
            {
                nums2[a]=nums1[i];
                a++;
                it->second--;
            }
        }
        return vector(nums2.begin(),nums2.begin()+a);
    }
};