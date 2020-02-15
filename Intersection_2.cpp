//Sorted Solution
//Time Complexity-O(nlogn+mlogm)
//Space Complexity-O(1)
//Did the code execute on Leetcode? Yes

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int a=0,b=0;
        int k=0;
        while(a<nums1.size() && b<nums2.size())
        {
            if(nums1[a]<nums2[b])
            {
                a++;
            }
            else if(nums1[a]>nums2[b])
            {
                b++;
            }
            else
            {
                nums2[k]=nums1[a];
                k++;
                a++;
                b++;
            }
        }
        return vector(nums2.begin(),nums2.begin()+k);
    }
};