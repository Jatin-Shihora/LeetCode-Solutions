# Huffman Encoding
## Medium 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">Given a string <strong>S</strong>&nbsp;of distinct character&nbsp;of size <strong>N</strong>&nbsp;and their corresponding frequency <strong>f[ ]</strong> i.e. character <strong>S[i]</strong> has<strong> f[i]</strong> frequency. Your task is to build&nbsp;the Huffman tree print all the huffman codes in preorder traversal&nbsp;of the tree.<br>
<strong>Note:&nbsp;</strong>If two elements have same frequency, then the element which occur&nbsp;at first will be taken on the left of Binary Tree and other one to the right.</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px">S = "abcdef"
f[] = {5, 9, 12, 13, 16, 45}
<strong>Output: </strong>
0 100 101 1100 1101 111
<strong>Explanation:
</strong>HuffmanCodes will be:
f : 0
c : 100
d : 101
a : 1100
b : 1101
e : 111
Hence printing them in the PreOrder of Binary 
Tree.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read or print anything. Your task is to complete the function&nbsp;<strong>huffmanCodes()&nbsp;</strong>which takes the given string <strong>S</strong>, frequency array <strong>f[ ]</strong>&nbsp;and number of characters <strong>N</strong> as input parameters and returns a vector of strings containing all huffman codes in order of preorder traversal&nbsp;of the tree.</span></p>

<p><span style="font-size:18px"><strong>Expected Time complexity: </strong>O(N * LogN)&nbsp;<br>
<strong>Expected Space complexity:&nbsp;</strong>O(N)&nbsp;</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N&nbsp;≤ 26</span></p>
 <p></p>
            </div>