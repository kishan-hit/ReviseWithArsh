int findUnsortedSubarray(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX;
        for(int i=1;i<nums.size();i++)
            if(nums[i]<nums[i-1])
                mini = min(mini,nums[i]);
        for(int j=nums.size()-2;j>=0;j--)
            if(nums[j]>nums[j+1])
                maxi = max(maxi,nums[j]);
        if(mini==INT_MAX && maxi==INT_MIN)
            return 0;
        int s=0,e=nums.size()-1;
        for(;s<nums.size();s++)
            if(nums[s]>mini)
                break;
        for(;e>=0;e--)
            if(nums[e]<maxi)
                break;
        return e-s+1;
    }
