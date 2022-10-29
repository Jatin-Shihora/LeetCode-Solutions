Algorithm
* sort the seeds by their growing time in decreasing order.
* we don't care about the planting time while sorting.
* while iterating through the sorted seeds, keep track of the current largest full bloom time tot and current ending time of plantings cur. Update them as follow:
* tot = max(tot, cur + seed[i].plantingTime + seed[i].growingTime
* cur += seed[i].plantingTime
* after going through all seeds, tot is the answer.
```
Code (C++)
I put the negative growing time in the first element of my pairs so that I can just call sort with the default comparator. This small trick may also be helpful for coding some algorithms that need a min-heap (like Dijkstra's or Prim's) with priority_queue(which is basically a max-heap) in C++.
```
​