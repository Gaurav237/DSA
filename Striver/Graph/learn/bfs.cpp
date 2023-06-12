class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> bfsRes;
        
        queue<int> q;
        int visited[V] = {0};
        
        visited[0] = 1;
        q.push(0);
        
        while(!q.empty()){
            int curr = q.front();
            q.pop();
            bfsRes.push_back(curr);
            
            for(int it : adj[curr]){
                if(!visited[it]){
                    visited[it] = 1;
                    q.push(it);
                }
            }
            
            // for(int i = 0; i < adj[curr].size(); i++){
            //     if(visited[adj[curr][i]] == 0){
            //         visited[adj[curr][i]] = 1;
            //         q.push(adj[curr][i]);
            //     }
            // }
        }
        
        return bfsRes;
    }
};