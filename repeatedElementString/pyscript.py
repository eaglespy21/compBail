#s = input("-->")
#print s
import sys, fileinput
#for line in sys.stdin:
#  print line
d = {}
for line in fileinput.input():
  print line
  for c in line:
    if c in d:
      print c
      break
    else:
      d[c] = 1
    #print c
  pass

