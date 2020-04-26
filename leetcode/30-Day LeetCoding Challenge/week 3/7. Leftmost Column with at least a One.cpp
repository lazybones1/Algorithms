/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int row, int col);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
        vector<int> dimension = binaryMatrix.dimensions();
        int col = dimension[0];
        int row = dimension[1];
        int x=0, y=row-1;
        int mostLeft = -1;
        while(x<col && y>=0){
            int value = binaryMatrix.get(x, y);
            if(value==1){
                mostLeft = y;
                y--;
            }
            else if(value ==0){
                x++;
            }
        }
        return mostLeft;
    }
};
