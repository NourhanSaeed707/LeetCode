/*
here in this problem we count each node the incoming vertex get into it and save these counts in vector,
and the node that has 0 count that mean no node get into it so it mean it is one of min shortest path to visit all nodes.
*/
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
       vector<int> indegrees(n, 0);
       vector<int> res;
       for(int i=0; i<edges.size(); i++)
            indegrees[edges[i][1]]++; 
        for(int i=0; i < n; i++)
            if(indegrees[i] == 0)
                res.push_back(i);
        return res;
    }
};
