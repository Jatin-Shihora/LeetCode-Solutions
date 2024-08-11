class Solution {

   public List<Integer> postorderTraversal(TreeNode root) {
		List<Integer> out = new ArrayList<Integer>();
		if(root==null)
			return out;
		TreeNode pre=null;
		Stack<TreeNode> s = new Stack();      
		while(root!=null || !s.empty()){
			if(root!=null){				
				s.push(root);
				root = root.left;
			}
			else{
				root = s.peek();
				if(root.right==null || root.right==pre){
				    out.add(root.val);
				    s.pop();
				    pre=root;
				    root = null;
				}
				else
				    root = root.right;
			}
		}
		return out;
	}
};