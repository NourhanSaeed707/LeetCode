class Solution {
public:
    int findTheWinner(int n, int k) {
        vector <int> vec;
        int i = 0, count = 1, winner;
        for(int i = 1; i <= n; i++)
           vec.push_back(i);
        while( vec.size() > 1 ){
            if( count == k ){
                vec.erase( vec.begin() + i);
                count = 0;
                i--;
            }
            count++, i++;
            if(i >= vec.size()) i = 0;
        }
        for(int i = 0; i < n; i++){
            if(vec[i] != -1)
                winner = vec[i]; break;
        } 
        return winner;
    }
};
