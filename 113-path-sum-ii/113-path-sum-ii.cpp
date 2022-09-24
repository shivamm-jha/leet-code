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
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        List<List<Integer>> paths =  new ArrayList<>();
        
        findPaths(root,paths, new ArrayList<Integer>(),targetSum);
        
        return paths;
    }
    
    public void findPaths(TreeNode root, List<List<Integer>> paths, List<Integer> current , int targetSum){
        
        if(root==null) return ;
        
        current.add(root.val);
        
        if(root.val == targetSum  && root.left==null && root.right==null){
            paths.add(current);
            return;
        }
        
        findPaths(root.left, paths,new ArrayList<Integer>(current), targetSum-root.val);
        findPaths(root.right, paths, new ArrayList<Integer>(current), targetSum-root.val);
        
    }
}