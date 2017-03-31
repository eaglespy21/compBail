import collections
ropeStr = raw_input()
ropes = [r for r in ropeStr.split('.') if r != ''] #This is a list 
#ropes = (r for r in ropeStr.split('.') if r != '') #This is a generator expression
#print ropes
dots = ropeStr.count('.')
#print dots
#ropesOdd = [r for r in ropes if len(r)%2 !=0]
#ropedEven = [r for r in ropes if len(r)%2 == 0]
ropesOdd = []
ropesEven = []
for r in ropes:
  if len(r)%2 == 0:
    ropesEven.append(r)
  else:
    ropesOdd.append(r)
#ropesOdd = collections.OrderedDict(sorted(ropesOdd.items()))
#ropesEven = collections.OrderedDict(sorted(ropesEven.items()))
ropesEven.sort(key = len, reverse=True)
ropesOdd.sort(key = len, reverse=True)
#print ropesEven,ropesOdd
sol = ''
for index,r in enumerate(ropesEven):
  #if index == len(ropesEven)-1: #Collon negative index point to elements from back of the list, I think
    #sol += str(r) + '.'
  #else:
  #print ropesEven[r]
  if index != len(ropesEven) -1:
    sol += str(r) + '.'
    dots -= 1
  else:
    if len(ropesOdd) != 0:
      sol += str(r) + '.'
    else:
      sol += str(r)
for index,r in enumerate(ropesOdd):
  #if index == len(ropesOdd)-1:
  #  sol += str(r) + '.'
  #else:
  if index != len(ropesOdd) -1:
    sol += str(r) + '.'
    dots -= 1
  else:
    sol += str(r)
for i in range(0, dots):
  sol += '.'
print sol
#print ropesOdd
