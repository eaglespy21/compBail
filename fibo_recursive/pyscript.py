#def F(n):
#  if n ==0: return 0
#  elif n ==1: return 1
#  else: return F(n-1) + F(n-2)
def F():
  a,b=0,1
  yield a
  yield b
  while True:
    a,b = b, b+a
    yield b

def subFib(startNumber, endNumber):
  for cur in F():
    if cur > endNumber: return
    if cur >= startNumber:
      yield cur
for i in subFib(10,200):
  print i
#print F(5)
