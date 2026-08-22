/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */

class Solution {

    int mDepth=0;

    public void mxDepth(TreeNode root, int depth){

        
        if(root==null){
            mDepth= Math.max(depth, mDepth);
            return;
        }

        depth++;

        
        mxDepth(root.left, depth);
        mxDepth(root.right, depth);
        
    }
    public int maxDepth(TreeNode root) {
        
        mxDepth(root, 0);

        return mDepth;
        
    }
}
