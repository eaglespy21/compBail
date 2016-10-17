a = raw_input().split(' ')
t1 = int(a[0])
t2 = int(a[1])
n = int(a[2])
#print n, t1,t2
for i in range(n-1):
    t1,t2 = t2,t1+(t2)**2
print t1
