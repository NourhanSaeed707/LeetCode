
class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> partition;
        vector<int> res;
        int  sum = 0, last;
        for(char letter = 'a'; letter <= 'z'; letter++)
            partition[letter] = -1;
        for(int i = 0; i < s.size(); i++){
            partition[s[i]] = i; 
        }
        for(int i = 0; i < s.size(); i++){
           last = partition[s[i]];
           for(int j = i; j<=last; j++){
               last = max(last, partition[s[j]]);
               sum++;
           }
            res.push_back(sum);
            sum = 0;
            i = last;
        }
        return res;
    }
};
