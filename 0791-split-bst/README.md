<h2><a href="https://leetcode.com/problems/split-bst/">791. Split BST</a></h2><h3>Medium</h3><hr><p>Given the <code>root</code> of a binary search tree (BST) and an integer <code>target</code>, split the tree into two subtrees where the first subtree has nodes that are all smaller or equal to the target value, while the second subtree has all nodes that are greater than the target value. It is not necessarily the case that the tree contains a node with the value <code>target</code>.</p>

<p>Additionally, most of the structure of the original tree should remain. Formally, for any child <code>c</code> with parent <code>p</code> in the original tree, if they are both in the same subtree after the split, then node <code>c</code> should still have the parent <code>p</code>.</p>

<p>Return <em>an array of the two roots of the two subtrees in order</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<img alt="" src="https://assets.leetcode.com/uploads/2021/06/13/split-tree.jpg" style="width: 600px; height: 193px;" />
<pre>
<strong>Input:</strong> root = [4,2,6,1,3,5,7], target = 2
<strong>Output:</strong> [[2,1],[4,3,6,null,null,5,7]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> root = [1], target = 1
<strong>Output:</strong> [[1],[]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li>The number of nodes in the tree is in the range <code>[1, 50]</code>.</li>
	<li><code>0 &lt;= Node.val, target &lt;= 1000</code></li>
</ul>
