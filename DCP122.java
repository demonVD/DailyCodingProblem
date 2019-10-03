/*You are given a 2-d matrix where each cell represents number of coins in that cell. 
Assuming we start at matrix[0][0], and can only move right or down,
 find the maximum number of coins you can collect by the bottom right corner.*/

 /*For example, in this matrix

0 3 1 1
2 0 0 4
1 5 3 1

The most we can collect is 0 + 2 + 1 + 5 + 3 + 1 = 12 coins.*/
class Solution{
	public int maxCoins(int[][] mat){
		int rows = mat.length;
		int cols = mat[0].length;
		int[][] max = new int[rows][cols];
		// max[0][0] = mat[0][0];
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				int maxFromUp = 0, maxFromLeft = 0;
				if( i-1 >= 0 ){
					maxFromUp = max[i-1][j];
				}
				if( j-1 >= 0 ){
					maxFromLeft = max[i][j-1];
				}
				max[i][j] = Math.max(maxFromUp, maxFromLeft) + mat[i][j];
			}
		}
		return max[rows-1][cols-1];
	}
}
class DCP122{
	public static void main(String[] args) {
		int[][] mat = {{0, 3, 1, 1}, {2, 8, 9, 4}, {1, 5, 3, 1}};
		System.out.println(new Solution().maxCoins(mat));
	}
}