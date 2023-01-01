        long sum=0;
        long ind_sum=0;
        long res = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum += (long)nums[i];
            ind_sum += (long)(i*nums[i]);
        }
        res = max(res,ind_sum);
        int ind = nums.size()-1;
        for(int i=0;i<nums.size()-1;i++){
            int temp = nums[ind];
            ind_sum -= (temp*(nums.size()-1));
            ind_sum += (sum-temp);
            --ind;
            res = max(res,ind_sum);
        }
        return (int)res;
