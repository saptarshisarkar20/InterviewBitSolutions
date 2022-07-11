



int Solution::solve(int A, vector<vector<int> > &B) {
    vector<bool> vis(A+1, false);
    vector<int> adj[A+1];
    
    for(auto it:B){
        adj[it[0]].push_back(it[1]);
    }
    
    stack<int> st;
    st.push(1);
    vis[1]=true;
    
    while(!st.empty()){
        int x = st.top();
        st.pop();
        for(auto it:adj[x]){
            if(!vis[it]){
                st.push(it);
                vis[it]=true;
            }
        }
    }
    
    return vis[A];
    
}
