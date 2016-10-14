T = raw_input()
for i in range(int(T)):
    N = raw_input()
    a = map(int, raw_input().split(' '))
    val = []
    sumpos = 0
    for j in range(len(a)+1):
        new = []
        for i in range(len(a)+1):
            new.append(0)
        val.append(new)
    #print a
    for i in range(len(a)+1):
        for j in range(len(a)+1):
            if i == 0 or j == 0:
                val[i][j] = 0
            else:
                val[i][j] = max(val[i-1][j],a[i-1]+val[i-1][j-1])
                #print val[i][j]
        if i < len(a) and a[i] > 0 :
            sumpos += a[i]
        #print i
    print val[len(a)][len(a)], sumpos
    #print T,N,a
