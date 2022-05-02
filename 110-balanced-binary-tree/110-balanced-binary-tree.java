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
    public boolean isBalanced(TreeNode root) {
//         T.c = 0(N^2)
        
        
        // if(root==null) return true;
        // int leftHeight = height(root.left);
        // int rightHeight = height(root.right);
        // if(Math.abs(leftHeight-rightHeight)>1) return false;
        // boolean leftTree = isBalanced(root.left);
        // boolean rightTree = isBalanced(root.right);
        // if(!leftTree || !rightTree) return false;
        // return true;
        
//          better code.. T.c = 0(N)
        return height(root)!=-1;
        
    }
    
    public static int height(TreeNode root){
        if(root==null) return 0;
        int leftHeight = height(root.left);
        if(leftHeight==-1) return -1;
        int rightHeight = height(root.right);
        if(rightHeight==-1) return -1;
        
        if(Math.abs(leftHeight-rightHeight)>1) return -1;
        return Math.max(leftHeight,rightHeight)+1;
    }
}