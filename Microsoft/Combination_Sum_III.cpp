void fun(vector<vector<int>>&vec,vector<int> v,int k,int n){
        if(v.size()==k){
            if(n==0){
                vec.push_back(v);
                return;
            }
            else
                return;
        }
        for(int i=v.empty()?1:v.back()+1;i<=9;i++){
            if((n-i)<0)
                break;
            v.push_back(i);
            fun(vec,v,k,n-i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> vec;
        vector<int> v;
        fun(vec,v,k,n);
        return vec;
    }
