class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v;

        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int i=0,j=0;
        int n=nums1.size();
        int m =nums2.size();
        int las =-1;
        while(i<n && j<m)
        {
            if(nums1[i]==nums2[j] )
            {
                if( las!=nums1[i])
                {   
                    v.push_back(nums1[i]);
                    las=nums1[i];
                }
                i++;
                j++; 
            }
            else if(nums1[i]>nums2[j])
            {
                j++;
            }
            else 
            {
                i++;
            }
        }
       return v;
    }
};