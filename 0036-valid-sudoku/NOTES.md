***For each row, column and block we keep a set of numbers.
If we find a number that was seen already in that row, column or block - return false.**
​
​
​
1. *(i/3)3+j/3 , how did you count this , means how did you think of this no , how it came in your mind that this will be the index of that block ??*
​
The problem is to come up with an equation to map (n*n) coordinates to (n) numbers so we can use it as an index into the blocks array.
​
Our board would look like this:
​
(0,0) (0,1) (0,2) (0,3) (0,4) (0,5) (0,6) (0,7) (0,8)
(1,0) (1,1) (1,2) (1,3) (1,4) (1,5) (1,6) (1,7) (1,8)
(2,0) (2,1) (2,2) (2,3) (2,4) (2,5) (2,6) (2,7) (2,8)
(3,0) (3,1) (3,2) (3,3) (3,4) (3,5) (3,6) (3,7) (3,8)
(4,0) (4,1) (4,2) (4,3) (4,4) (4,5) (4,6) (4,7) (4,8)
(5,0) (5,1) (5,2) (5,3) (5,4) (5,5) (5,6) (5,7) (5,8)
(6,0) (6,1) (6,2) (6,3) (6,4) (6,5) (6,6) (6,7) (6,8)
(7,0) (7,1) (7,2) (7,3) (7,4) (7,5) (7,6) (7,7) (7,8)
(8,0) (8,1) (8,2) (8,3) (8,4) (8,5) (8,6) (8,7) (8,8)
​
Let's divide this into 3x3 boxes, and label the boxes like this:
​
0 1 2
3 4 5
6 7 8
​
Thus
(0,0) (0,1) (0, 2)
(1,0) (1,1) (1, 2)
(2,0) (2,1) (2, 2)
will map to box 0.
​
And
(0,3) (0,4) (0,5)
(1,3) (1,4) (1,5)
(2,3) (2,4) (2,5)
will map to box 1.
​
And so on.