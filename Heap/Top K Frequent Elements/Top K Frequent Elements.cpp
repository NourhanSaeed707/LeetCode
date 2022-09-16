
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int c = 0;
        map<int, int> umap;
        map<int, map<int,int> > rep;
        vector<int> v;
        for(int i = 0; i < nums.size(); i++)
            umap[nums[i]] = 0;
        for(int i = 0; i < nums.size(); i++)
            umap[nums[i]] += 1;
        for(auto it = umap.begin(); it != umap.end(); it++){
            rep[it->second][it->first] = it->second; 
        }
        for(auto it = rep.rbegin(); it != rep.rend(); it++){
            auto inner_map = it->second;
            for(auto it2 = inner_map.begin(); it2 != inner_map.end(); it2++){
                c++;
                if(c <= k)
                    v.push_back(it2->first);
            }
        }
        return v;
    }
};
