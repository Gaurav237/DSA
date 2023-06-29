#include <bits/stdc++.h>
using namespace std;

// using Size
class DisjointSet{
    vector<int> size;
    vector<int> parent;
public:
    DisjointSet(int n){
        // here we are taking care of both 0 and 1 based indexing graph .
        size.resize(n+1, 1);
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

    void unionBySize(int u, int v){
        int ulp_u = findUltParent(u);
        int ulp_v = findUltParent(v);

        // if they belong to the same component
        if(ulp_u == ulp_v){
            return;
        }

        if(size[ulp_u] > size[ulp_v]){
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }else{
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }
    }
};

int main(){
    DisjointSet ds(7);
    ds.unionBySize(1,2);
    ds.unionBySize(2,3);
    ds.unionBySize(4,5);
    ds.unionBySize(6,7);
    ds.unionBySize(5,6);

    // check if 3 and 7 belong to same component or not
    if(ds.findUltParent(3) == ds.findUltParent(7)){
        cout << "Same\n";
    }else{
        cout << "Not Same\n";
    }

    ds.unionBySize(3,7);

    // now, check if 3 and 7 belong to same component or not
    if(ds.findUltParent(3) == ds.findUltParent(7)){
        cout << "Same\n";
    }else{
        cout << "Not Same\n";
    }

    return 0;
}