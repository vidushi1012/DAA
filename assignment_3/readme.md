
# Assignment-3

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019027  |   Vidushi Pathak | vidushi1012 |
|    IIT2019028  |   Shubham Netam | Shubham11Netam | 
|    IIT2019029 |   Puneet Singhwaiya | Puneet140500 |

**Group No-** 9

**Faculty Name-** Dr. Mohammed Javed

**Mentor Name-** Md. Meraz

---
## Problem Statement
Design an algorithm to implement quaternary search.

---
## How to use code

```
#Download project
git clone https://github.com/vidushi1012/DAA.git
```
Project Initialize 
```
cd daa
#create assignment-3 folder
mkdir assignment_03

#go to assignment-3
cd assignment_03

#Create file
touch readme.md
touch main.cpp

```
---

Run the code
```
gcc main.cpp
```
---


**Test case**

Search an element in array
```

Test Case-1
Input:
1,2,3,4,5,6
5
Out:
The element is present at index 4.

Test Case-2
Input:
11,14,15,17,20
14
Out:
The element is present at index 1.

```

---

### Theory
Quaternary search is just like binary search, but divides the
array into four parts instead of two. After evenly dividing the
array, the three divisors are compared to the input value. If
it matches the index is returned. If not then algorithm check
for the value in subarray that contains the value. This search
algorithm works on the principle of divide and conquer. For
this algorithm to work properly, the data collection should be
in the sorted form.


---

### Analysis

**Time Complexity**

In this algorithm at each iteration the array is divided by 4.
Suppose length of array is n and after K iteration the length
of array becomes 1.Then we get,<br/>
n/4^k = 1<br/>
n = 4^k<br/>
log(n) = log(4^k)<br/>
log(n) = klog(4)<br/>
k = log(n)<br/>
Therefore, Time complexity is O(log(n))


**Space Complexity**

In the iterative method, the space complexity would be O(1).
While in the recursive method, the space complexity would be
O(log(n))

---

### References

https://stackoverflow.com/questions/39845641/quaternarysearch-algorithm<br/>
https://github.com/estensen/quaternary-search
