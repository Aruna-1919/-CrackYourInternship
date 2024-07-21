class Solution {
public:
    bool check(int x,int y,int row,int col){
        return 0<=x && x<row && 0<=y && y<col;
    }
    void makeone(int x,int y,int row,int col,vector<vector<int>>& ans,vector<vector<int>>& board){
        int count=0;
        vector<pair<int,int>> dir={{-1,0},{1,0},{0,-1},{0,1},{1,1},{-1,-1},{1,-1},{-1,1}};
        for(auto d:dir){
            int new_x=x+d.first;
            int new_y=y+d.second;
            if(check(new_x,new_y,row,col) && board[new_x][new_y]){
                count++;
            }
        }
        if(count==2 || count==3){
            ans[x][y]=1;
        }
    }
    void makezero(int x,int y,int row,int col,vector<vector<int>>& ans,vector<vector<int>>& board){
        int count=0;
        vector<pair<int,int>> dir={{-1,0},{1,0},{0,-1},{0,1},{1,1},{-1,-1},{1,-1},{-1,1}};
        for(auto d:dir){
            int new_x=x+d.first;
            int new_y=y+d.second;
            if(check(new_x,new_y,row,col) && board[new_x][new_y]){
                count++;
            }
        }
        if(count==3){
            ans[x][y]=1;
        }
    }
    void gameOfLife(vector<vector<int>>& board) {      
        int row=board.size();
        int col=board[0].size();
         vector<vector<int>> ans(row,vector<int>(col));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]==1){
                    makeone(i,j,row,col,ans,board);
                }
                else{
                    makezero(i,j,row,col,ans,board);
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                board[i][j]=ans[i][j];
            }
        }    
    }
};
