#include <bits/stdc++.h>
using namespace std;

// usigng Rank
class DisjointSet{
    vector<int> rank;
    vector<int> parent;
public:
    DisjointSet(int n){
        // here we are taking care of both 0 and 1 based indexing graph .
        rank.resize(n+1, 0);
        parent.resize(n+1);
        for(int i = 0; i <= n; i++){
            parent[i] = i;
        }
    }

    int findUltParent(int node){
        if(node == parent[node]){
            return node;
        }
        return parent[node] = findUltParent(parent[node]);
    }

    void unionByRank(int u, int v){
        int ulp_u = findUltParent(u);
        int ulp_v = findUltParent(v);

        // if they belong to the same component
        if(ulp_u == ulp_v){
            return;
        }

        // smaller rank gets attached to big rank, no change in rank
        if(rank[ulp_u] > rank[ulp_v]){
            parent[ulp_v] = ulp_u;
        }else if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }else{  // if same rank, attach it to ulp_u
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
};

int main(){
    DisjointSet ds(7);
    ds.unionByRank(1,2);
    ds.unionByRank(2,3);
    ds.unionByRank(4,5);
    ds.unionByRank(6,7);
    ds.unionByRank(5,6);

    // check if 3 and 7 belong to same component or not
    if(ds.findUltParent(3) == ds.findUltParent(7)){
        cout << "Same\n";
    }else{
        cout << "Not Same\n";
    }

    ds.unionByRank(3,7);

    // now, check if 3 and 7 belong to same component or not
    if(ds.findUltParent(3) == ds.findUltParent(7)){
        cout << "Same\n";
    }else{
        cout << "Not Same\n";
    }

    return 0;
}