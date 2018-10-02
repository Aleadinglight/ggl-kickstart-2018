# Kickstart Round A 2018

## Problem A ([link](./A/main.cpp)):

This problem requires you to have implementation ability and knowledge of constructive algorithms. You are given a number x, you need to find the next smaller and bigger numbers that is **beautiful** (fulfill the requirements). 

To find the smaller number, you need to decrease the first odd digit from the right and set all the odd digits to the left of it to 8.

To find the bigger number, it is a little bit trickier. First we need to +2 the digit to the right of the rightmost and then set all the odd digits to 0. However, if the right most digit is 9 and the digit near it is 8, then we need to increase all the 8 to the left near it till there is a number != 8 (this number will be even ofcourse) we increase it by 2. If till the beginning there is no digit != 8 then we append 2 to the start of the number. After that we set all the 8 number to 0.

Notes:
- Just some tricky things above to keep in mind, nothing more to note.

## Problem B ([link](./B/main.cpp)):

Understand **expected value** by watching [this](https://www.khanacademy.org/math/statistics-probability/random-variables-stats-library/random-variables-discrete/e/expected_value).

//git commit --date="Mon Oct 1 12:00 2018 +0100" -m "added class Flight"