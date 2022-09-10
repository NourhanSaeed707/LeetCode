
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> visit(rooms.size(), false);
        visit[0] = true;
        int i = 0;
        queue<int> q;
        while( i < rooms.size() ) {
            for(int j = 0; j < rooms[i].size();j++){
                if(visit[rooms[i][j]] == false){
                   q.push(rooms[i][j]);
                     visit[rooms[i][j]] = true;
                }
            }
            i = q.front();
            q.pop();
        }
        for(int i = 0; i < visit.size(); i++)
            if(visit[i] == false) return false;
        return true;
    }
};
