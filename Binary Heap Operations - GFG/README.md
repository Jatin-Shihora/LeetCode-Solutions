# Binary Heap Operations
## Easy 
<div class="problem-statement">
                <p></p><p><span style="font-size:18px">A <strong>binary heap</strong> is a Binary Tree with the following properties:<br>
<strong>1)</strong> It’s a <em>complete tree</em><strong> </strong>(All levels are completely filled except possibly the last level and the last level has all keys as left as possible). This property of Binary Heap makes them suitable to be stored in an array.</span></p>

<p><span style="font-size:18px"><strong>2)</strong> A Binary Heap is either <strong>Min Heap</strong> or <strong>Max Heap</strong>. In a <em>Min Binary Heap</em>, the key at the&nbsp;<em>root</em> must be <em>minimum</em><strong> </strong>among all keys present in Binary Heap. The same property must be recursively true for all nodes in Binary Tree. Max Binary Heap is similar to MinHeap.</span></p>

<p><span style="font-size:18px">You are given an empty Binary Min Heap and some queries and your task is to implement the three methods <strong>insertKey, &nbsp;deleteKey, </strong>&nbsp;and&nbsp;<strong>extractMin </strong>on&nbsp;the Binary Min Heap and call them as per the query given below:<br>
<strong>1) </strong><em>1 &nbsp;x</em> &nbsp;(a query of this type means to insert an element in the min-heap with value x&nbsp;)<br>
<strong>2)</strong> <em>2 &nbsp;x</em> &nbsp;(a query of this type means to remove an element at position x from the min-heap)<br>
<strong>3)</strong><strong> </strong><em>3</em> &nbsp;(a query like this removes&nbsp;the min element from the min-heap and prints it&nbsp;).</span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>Q = 7
<strong>Queries:</strong>
insertKey(4)
insertKey(2)
extractMin()
insertKey(6)
deleteKey(0)
extractMin()
extractMin()
<strong>Output: </strong>2 6 - 1<strong>
Explanation: </strong>In the first test case for
query&nbsp;
insertKey(4) the heap will have &nbsp;{4}&nbsp;&nbsp;
insertKey(2) the heap will be {2 4}
extractMin()&nbsp;removes min element from 
&nbsp;            heap ie 2 and prints it
&nbsp;            now heap is {4}&nbsp;
insertKey(6)&nbsp;inserts 6 to heap now heap
&nbsp;            is {4 6}
deleteKey(0)&nbsp;delete element at position 0
             of the heap,now heap is {6}
extractMin() remove min element from heap
             ie 6 and prints it&nbsp;&nbsp;now the
&nbsp;            heap is empty
extractMin() since the heap is empty thus
             no min element exist so -1
&nbsp;            is printed.</span>
</pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:
</strong>Q = 5
Queries:
insertKey(8)
insertKey(9)
deleteKey(1)
extractMin()
extractMin()
<strong>Output: </strong>8 -1</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You are required to complete the 3 methods <strong>insertKey()</strong> which take one argument the value to be inserted, <strong>deleteKey()</strong> which takes one argument the position from where the element is to be deleted and <strong>extractMin()</strong> which returns the minimum element in the heap(-1 if the heap is empty)</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:&nbsp;</strong>O(Q*Log(size of Heap) ).<br>
<strong>Expected Auxiliary Space:&nbsp;</strong>O(1).</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= <strong>Q</strong> &lt;= 10<sup>4</sup><br>
1 &lt;= <strong>x</strong> &lt;= 10<sup>4</sup></span></p>
 <p></p>
            </div>