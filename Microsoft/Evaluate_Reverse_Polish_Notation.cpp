int evalRPN(vector<string>& tokens) {
        set<string> st = {"+","-","*","/"};
        stack<long long> s;
        long long res;
        for(auto it:tokens){
            if(st.find(it)==st.end())
                s.push(stoi(it));
            else{
                long a = s.top();
                s.pop();
                long b = s.top();
                s.pop();
                if(it=="+")
                    res = (b+a);
                else if(it=="-")
                    res = (b-a);
                else if(it=="*")
                    res = (b*a);
                else
                    res = (b/a);
                s.push(res);
            }
        }
        if(s.empty())
            return (int)res;
        return (int)s.top();
    }
