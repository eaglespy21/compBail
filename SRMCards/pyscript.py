import math
a = map(int, raw_input().split(' '))
a.sort()
count = 1
turns = 0
#iterelement = iter(a)
#next(iterelement)
for index, cur in enumerate(a):
  print cur, index
  if index == 0:
    turns = 1
    #print turns
  else:
    if cur == a[index-1] + 1:
      count += 1
      #print count
    else:
      print float(count)/2
      turns += math.ceil(float(count)/2)
      count = 1
  #print turns
print turns
