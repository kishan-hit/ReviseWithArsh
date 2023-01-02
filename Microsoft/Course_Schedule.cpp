bool check(int s,vector<int>&vis,vector<vector<int>>&pre){
        if(vis[s]==2)
            return true;
        vis[s] = 2;
        for(auto it:pre[s]){
            if(vis[it]!=1){
                if(check(it,vis,pre))
                    return true;
            }
        }
        vis[s] = 1;
        return false;
    }
    bool canFinish(int n, vector<vector<int>>& prereq) {
        vector<vector<int>> pre(n);
        for(int i=0;i<prereq.size();i++)
            pre[prereq[i][0]].push_back(prereq[i][1]);
        vector<int> vis(n);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                if(check(i,vis,pre)){
                    return false;
                }
            }
        }
        return true;
    }
