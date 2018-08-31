# Kickstart Practice round 2018

## Problem A:
This is a problem about how many lines go through one particular point. We can use a tracking array for it. For example, consider a line `l-r`, we will add 1 to `track[l]` and minus 1 from `track[r+1]`. Then we create an accumulate matrix for this track[] array: `accumulate[i] = accumulate[i-1]+track[i]`. This means all the point from `l -> r` will be notice that they have `+1 line` here when we add 1 to `track[l]`, and `-1` at `r+1` to determine that this line is over at this position.

Note on bugs: 
- Assume that there is N `l-r pairs`, the accumulate array should be calculated till the maximum `r`. Sometimes we forget and only calculate till N.
- Reset accumulate array if everytime we run on a new test case.