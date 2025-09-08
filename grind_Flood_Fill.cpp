#include <stdlib.h>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int> > floodFill(vector<vector<int> >& image, int sr, int sc, int color) {
        int target, R, C;
        target = image[sr][sc];
        R = image.size();
        C = image[0].size();

        // Prevent infinite loop
        if (target == color){
            return image;
        }

        dfs(image, sr, sc, R, C, target, color);

        return image;
    }

    void dfs(vector<vector<int> >& image, int x, int y, int R, int C, int target, int color){
        image[x][y] = color;

        // Move
        int dx4[4] = {0, 0, 1, -1};
        int dy4[4] = {1, -1, 0, 0};

        for(int i = 0; i < 4; i++){
            int temp_x = x + dx4[i];
            int temp_y = y + dy4[i];

            if(temp_x >= 0 && temp_x < R && temp_y >=0 && temp_y < C && 
                image[temp_x][temp_y] == target){
                dfs(image, temp_x, temp_y, R, C, target, color);
            }
        }
    }
};