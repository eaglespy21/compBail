#import re
#a = [int(i) for i in raw_input().split(' ') if i !=''] #muliple delimiters can only be used as regular expressions for splitting strings, ? 
#print a
k,n = [int(i) for i in raw_input().split(' ')]
print k,n
v = []
for i in range(0,k+1): #Use the full range function call range(0, 3)
  temp = []
  for j in range(0,n+1):
    temp.append(0)
  v.append(temp)
#print v 
for i in range(0, k+1):
  for j in range(0, n+1):
    if i == 0:
      v[i][j] = j
    elif j == 0:
      v[i][j] = 0
    else:
      v[i][j] = v[i][j-1] + v[i-1][j]
#print v
print v[k][n]
      
   
    
