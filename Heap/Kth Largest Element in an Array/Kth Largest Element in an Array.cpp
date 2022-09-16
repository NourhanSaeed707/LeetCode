
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int, int> umap;
        int c = k, res;
        for(int i = 0; i < nums.size(); i++) 
            umap[nums[i]] += 1;
        for(auto it = umap.rbegin(); it != umap.rend(); it++){
            c -= it->second;
            if( c <= 0){
                res = it->first; break;
            }
        }
        return res;
    }
};
