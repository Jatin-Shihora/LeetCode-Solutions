# Leaves to DLL
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a Binary Tree of size N, extract all its leaf nodes to form a Doubly Link List starting from the left most leaf. Modify the original tree to make the DLL thus removing the leaf nodes from the tree. Consider the left and right pointers of the tree to be the previous and next pointer of the DLL respectively.</span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
        1
      /   \
     2     3
    / \   / \
   4   5 6   7    </span>

<span style="font-size:18px"><strong>Output: </strong>
Modified Tree :
        1
      /   \
     2     3</span>

<span style="font-size:18px">Doubly Link List :
4 &lt;-&gt; 5 &lt;-&gt; 6 &lt;-&gt; 7</span>

<span style="font-size:18px"><strong>Explanation:</strong>
The leaf nodes are modified to form the DLL 
in-place. Thus their links are removed from 
the tree.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input :</strong>
        1
      /   \
     2     3
    / \   
   4   5 </span>

<span style="font-size:18px"><strong>Output: </strong>
Modified Tree :
        1
      /   
     2    </span>

<span style="font-size:18px">Doubly Link List :
4 &lt;-&gt; 5 &lt;-&gt; 3</span></pre>

<p><br>
<span style="font-size:18px"><strong>Your Task: &nbsp;</strong><br>
You dont need to read input or print anything. Complete the function <strong>convertToDLL()</strong> which takes root of the given tree as input parameter and returns the head of the doubly link list.</span></p>

<p><span style="font-size:18px"><strong>Note:</strong><br>
The generated output will contain the inorder traversal of the modified tree, the DLL from left to right and the DLL from right to left.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N)<br>
<strong>Expected Auxiliary Space:</strong> O(height of tree)</span></p>

<p><br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10^4</span></p>
 <p></p>
            </div>