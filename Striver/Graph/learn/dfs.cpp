class Solution {
  public:
    void dfs(int node, bool visited[], vector<int> &dfsRes, vector<int> adj[]){
        visited[node] = true;
        dfsRes.push_back(node);
        
        // traverse in the depth of this node
        for(int it : adj[node]){
            if(!visited[it]){
                dfs(it, visited, dfsRes, adj);
            }
        }
    }
  
  
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        bool visited[V] = {false};
        vector<int> dfsRes;
        
        dfs(0, visited, dfsRes, adj);
        
        return dfsRes;
    }
};