#storeFib = {0:0,1:1}
def F(n):
  if n ==0: return 0
  elif n ==1: return 1
  else: 
    return F(n-1) + F(n-2)
def F():
  a,b=0,1
  yield a
  yield b
  while True:
    a,b = b, b+a
    yield b
def mem_fib(n, _cache={}):
  if n in _cache:
    return _cache[n]
  elif n > 1:
    return _cache.setdefault(n, mem_fib(n-1) + mem_fib(n-2))
  return n #He is Manuel Nueuer for 0,1 

def subFib(startNumber, endNumber):
  for cur in F():
    if cur > endNumber: return
    if cur >= startNumber:
      yield cur
for i in subFib(0,1000000000):
  print i
#for i in range(40):
#  storeFib[i] = F(i)
#  print storeFib[i]
#  print F(i)
#  print mem_fib(i)

