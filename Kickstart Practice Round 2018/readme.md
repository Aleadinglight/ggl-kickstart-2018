# Kickstart Practice round 2018

## Problem A ([link](./A/main.cpp)):
This is a problem about how many lines go through one particular point. We can use a tracking array for it. For example, consider a line `l-r`, we will add 1 to `track[l]` and minus 1 from `track[r+1]`. Then we create an accumulate matrix for this track[] array: `accumulate[i] = accumulate[i-1]+track[i]`. This means all the point from `l -> r` will be notice that they have `+1 line` here when we add 1 to `track[l]`, and `-1` at `r+1` to determine that this line is over at this position.

Note on bugs: 
- Assume that there is N `l-r pairs`, the accumulate array should be calculated till the maximum `r`. Sometimes we forget and only calculate till N.
- Reset accumulate array if everytime we run on a new test case.

## Problem B ([link](./B/main.cpp)):
In this problem, we can see that there is a pattern here when we generate the string. For example:

s0: ""
s1: "0"
s2: "001"
s3: "0010011"

We see the recursive pattern here: s3[4] is the s3[2] after reversed position and switched. Therefore, given an index k, we can find it counterpart on the other half of the string (because the new string was made by modified the old string and concat it to the end). To implement this, first we need to find the longest length we can have `Length`, then we can feed in the `Position`. Using recursion, we can devide the `Length` into half each time and return the `Position` counterpart on the tree, remember to apply a switch on answer. Finally, when `Length == Position` then the answer is switch(0, NumberOfCounterpart). This algorithm has the complexity of O(log(n)). 

Notes:
- If the `Length`/2+1 > `Position` then we don't have to switch it, we just need to consider the other half string with new `Length`= `oldLength`/2 and the same `Position`.
- Return `!result(length, position)` will do the switching easily.

## Problem C ([link](./C/main.cpp)):
This problem is pretty straight forward. We will use a map point from one string to another string to represent the flight from one city to another. Here we see that the start and end city only appears once, therefore we can made a counting `map<string, int>` to determine the number of time a city name appeared. Then we can iterate through the map, find the element which appear once and not the last city (the start city will point to somewhere, but the last city won't). Then we can output all the city trace from the start city.

Notes:
- Don't put `int` in the `for` loop of map's iterator. It is a determine pointer type itself to declear before.
- If you `getline(cin,st)` twice one string will be ignore, use `cin>>st>>st1` instead.