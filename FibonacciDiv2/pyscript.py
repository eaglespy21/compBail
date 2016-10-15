a,b=0,1
def F():
  global a,b
  yield a
  yield b
  while True:
    a,b = b, b+a
    yield b
N = int(raw_input())
for cur in F():
  if cur >= N:
    diff1 = N - a
    diff2 = cur - N
    print min(diff1, diff2)
    break
    
  
