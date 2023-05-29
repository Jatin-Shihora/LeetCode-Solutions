<h2><a href="https://leetcode.com/problems/check-if-object-instance-of-class/">2618. Check if Object Instance of Class</a></h2><h3>Medium</h3><hr><div><p>Write a function that checks if a given value&nbsp;is an instance of a given class or superclass. For this problem, an object is considered an instance of a given class if that object has access to that class's methods.</p>

<p>There are&nbsp;no constraints on the data types that can be passed to the function. For example, the value or the class could be&nbsp;<code>undefined</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> func = () =&gt; checkIfInstanceOf(new Date(), Date)
<strong>Output:</strong> true
<strong>Explanation: </strong>The object returned by the Date constructor is, by definition, an instance of Date.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> func = () =&gt; { class Animal {}; class Dog extends Animal {}; return checkIfInstanceOf(new Dog(), Animal); }
<strong>Output:</strong> true
<strong>Explanation:</strong>
class Animal {};
class Dog extends Animal {};
checkIfInstance(new Dog(), Animal); // true

Dog is a subclass of Animal. Therefore, a Dog object is an instance of both Dog and Animal.</pre>

<p><strong class="example">Example 3:</strong></p>

<pre><strong>Input:</strong> func = () =&gt; checkIfInstanceOf(Date, Date)
<strong>Output:</strong> false
<strong>Explanation: </strong>A date constructor cannot logically be an instance of itself.
</pre>

<p><strong class="example">Example 4:</strong></p>

<pre><strong>Input:</strong> func = () =&gt; checkIfInstanceOf(5, Number)
<strong>Output:</strong> true
<strong>Explanation: </strong>5 is a Number. Note that the "instanceof" keyword would return false. However, it is still considered an instance of Number because it accesses the Number methods. For example "toFixed()".
</pre>
</div>