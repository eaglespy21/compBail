import math
a = raw_input()
l = len(a)
print len(a), len(a)/2
if l%2 == 1:
  mid = len(a)/2
  rhs = a[mid+1:]
  rhs_rev = rhs[::-1]
  lhs = a[:mid]
  if lhs == rhs_rev:
    print "Already a palindrome", len(a)
  else:
    print l*2-1
else:
  mid_f = len(a)/2 - 1
  mid_c = len(a)/2
  rhs = a[mid_c:]
  lhs = a[:mid_c]
  rhs_rev = rhs[::-1]
  if lhs == rhs_rev:
    print "Already a palindrome", len(a)
  else:
    rhs = a[mid_c+1:]
    rhs_rev = rhs[::-1]
    lhs_sub = a[mid_c-len(rhs):mid_c]
    if lhs_sub == rhs_rev:
      print "Sub, append", len(lhs)-len(rhs)
    else:
      print "All chars are diff", l*2-1
  print mid_f, mid_c

