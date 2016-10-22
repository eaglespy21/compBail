T = raw_input()
for i in range(int(T)):
    N = raw_input()
    a = map(int, raw_input().split(' '))
    val = []
    sum_conti = 0
    sum_conti_max = 0
    sum_nconti = 0
    for i in range(len(a)):
        #if sum_conti+a[i] > 0:
        sum_conti +=a[i]
        if sum_conti > sum_conti_max :
            sum_conti_max = sum_conti
        elif i != len(a)-1 and sum_conti > 0 :
            sum_conti_max = sum_conti
            #print a[i]
        else:
                sum_conti = 0
        #print sum_conti, sum_conti_max
        if a[i] > 0:
            sum_nconti += a[i]
    if sum_conti_max == 0:
        print max(a), max(a)
    else:
        print sum_conti_max, sum_nconti
