class Solution {
public:
    int Merge(vector < int > & nums, int low, int mid, int high) {
       int total = 0;
       int j = mid + 1;
       for (int i = low; i <= mid; i++) {
            while (j <= high && nums[i] > 2LL * nums[j]) {
                     j++;
         }
           total += (j - (mid + 1));
        }

        vector < int > t;
        int left = low, right = mid + 1;

        while (left <= mid && right <= high) {

          if (nums[left] <= nums[right]) {
              t.push_back(nums[left++]);
        } else {
                  t.push_back(nums[right++]);
        }
     }

          while (left <= mid) {
               t.push_back(nums[left++]);
        }
          while (right <= high) {
               t.push_back(nums[right++]);
        }

           for (int i = low; i <= high; i++) {
    nums[i] = t[i - low];
  }
  return total;
}
    
    int MergeSort(vector < int > & nums, int low, int high) {

  if (low >= high) return 0;
  int mid = (low + high) / 2;
  int inv = MergeSort(nums, low, mid);
  inv += MergeSort(nums, mid + 1, high);
  inv += Merge(nums, low, mid, high);
  return inv;
}
    int reversePairs(vector<int>& nums) {
        
        return MergeSort(nums,0,nums.size()-1);
    }
};
   /* int mergesort(vector<int>&nums,int low,int high)
    {
        if(low<=high)return 0;
        int mid = (low+high)/2;
        int inv = mergesort(nums,low,mid);
        inv = inv+mergesort(nums,mid+1,high);
        inv = inv + merge(nums,low,mid,high);
        return inv;
    }
    */
    
   /* int merge(vector<int>&nums,int low,int mid,int high)
    {
        int count=0;
        int j = mid+1;
        for(int i=low;i<=mid;i++)
        {
            while(j<=high && nums[i] > 2LL*nums[j])
                j++;
            count = count + j-(mid+1);
        }
        
        vector<int>v;
        int left = low,right =  mid+1;
        while(left<=mid && right<=high)
        {
            if(nums[left]<=nums[right])
                v.push_back(nums[left++]);
            else
                v.push_back(nums[right++]);
        }
        while(left<=mid)
            v.push_back(nums[left++]);
        while(right<=high)
            v.push_back(nums[right++]);
        
        for(int i=low;i<=high;i++)
        {
            nums[i] = v[i-low];
        }
        return count;
    }
};*/