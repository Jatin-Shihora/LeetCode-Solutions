**DP**
​
DP: Instead of going through all the previous Palindromes again and again, how about we save them somewhere and calculate the new ones based on them, but how do we d that? Lets see it below
​
Concept: To check a Palindrome of length ,say l, we just have to check if
i.) s[first character]==s[last character]
ii.) s[first character+1, last charcter -1] is a Palindrome
​
For example : say s=" balab"
Now, to check , if "s" is Palindrome or not, we just have to look at
i.) s[first character]==s[last character] -> b==b -> True
ii.)s[first character+1, last charcter -1] is a Palindrome --> "aba" is a Palindrome??
To check for "aba", a==a--> True , and "b" is a Palindrome(of length 1)
==> s is a Plaindrome
​
Review: We will make a table dp containing if the string from left to right is a Pal. or not, and to do that, we will fill in the table with 1 or 0.