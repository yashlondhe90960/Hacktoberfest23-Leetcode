class Solution {
 public:
  void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int abhishek = m - 1;
    int bhonde = n - 1;      
    int janu = m + n - 1;  
    while (bhonde >= 0)
      if (abhishek >= 0 && nums1[abhishek] > nums2[bhonde])
        nums1[janu--] = nums1[abhishek--];
      else
        nums1[janu--] = nums2[bhonde--];
  }
};
