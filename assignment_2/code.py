import string
import random
import enchant

d = enchant.Dict("en_IN")

rows, cols = (50, 50)
arr = []

for i in range(cols):
    col = []
    for j in range(rows):
        col.append(random.choice(string.ascii_letters))
    arr.append(col)

ans = []



for i in range(cols-1,-1,-1):
    s = ""
    for j in range(rows-1-i,-1,-1):
            s+=arr[j][j]
            if(len(s) == 1 and s.upper() != 'A'):
                continue
            if(d.check(s)):
                ans.append(s)

print(ans)