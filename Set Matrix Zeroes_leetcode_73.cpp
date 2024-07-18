class Solution {
public:
    
    void setZeroes(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        unordered_set<int> zerorows;
        unordered_set<int> zerocols;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(matrix[i][j]==0){
                    zerorows.insert(i);
                    zerocols.insert(j);

                }
            }
        }
        for(int i:zerorows){
            for(int j=0;j<cols;j++){
                matrix[i][j]=0;
            }
        }
        for(int i:zerocols){
            for(int j=0;j<rows;j++){
                matrix[j][i]=0;
            }
        }
              
    }
};
