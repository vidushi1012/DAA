# Assignment-2

**Team Members**
|   Enrollment No.  |   Name   | GithubId |
|   --------------  |   ----   | -------- |
|    IIT2019027  |   Vidushi Pathak | vidushi1012 |
|    IIT2019028  |   Shubham Netam | Shubham11Netam | 
|    IIT2019029 |   Puneet Singhwaiya | Puneet140500 |

**Group No-** 9

**Faculty Name-**Dr. Mohammed Javed

**Mentor Name-** Md. Meraz

---
## Problem Statement
Prepare a matrix of random characters of size 50×50 and check for valid English words reverse diagonally.

---
## How to use code

```
#Download project
https://github.com/vidushi1012/DAA/assignment_2.git
```
Project Initialize 
```
cd daa
#create assignment-2 folder
mkdir assignment_02

#go to assignment-2
cd assignment_02

#Create file
touch readme.md
touch main.py
.
.
```
---

Run the code
```
python main.py
```
---


**Test case**

Find valid english word
```

Test Case-1
Out:
is, as, get

Test Case-2
Out:
at, car
```

---

### Theory
For solving our problem we have used a python library PyEnchant to check if a word is valid english word or not. PyEnchant is a spell checking library for Python, based on the excellent Enchant library. PyEnchant combines all the functionality of the underlying Enchant library with the flexibility of Python and a nice “Pythonic” object-oriented interface.For generating random characters we have used Python random.choice() function.Python random module‘s random.choice() function returns a random element from the non-empty sequence. we can use the random.choice() function for selecting a random password from word-list, Selecting a random item from the available data

---

### Analysis

**Time Complexity**

In our code the outer for loop will
run n times and the inner for loop will run n(n+1)/2 times.
Therefore he time complexity of the algorithm will be O(n^2)


**Space Complexity**

As the size for the matrix is fixed according to the problem
statement thus, the space used by any of the algorithm will be
constant. Hence the space complexity is O(1).

---

### References

https://pyenchant.github.io/pyenchant</br>
https://pyenchant.github.io/pyenchant/tutorial.html</br>
https://pynative.com/python-random-choice
