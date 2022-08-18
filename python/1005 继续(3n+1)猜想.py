def judge(n1,n2):
    s = []
    while n2 > 1:
        if n2 % 2 == 0:
            n2 /= 2
            s.append(n2)
        else:
            n2 = 3*n2+1
            #s.append(n2)
    if n1 in s:
        return 1
    else:
        return 0

n = eval(input())
num = list(set([eval(i) for i in input().split()]))
sl = []
for n1 in num:
    #print(n1,num)
    for n2 in num:
        if judge(n1,n2) == 1 :
            #num.remove(n1)
            break
        else:
            continue
    else:
        sl.append(str(n1))
sl.sort(reverse=True,key = lambda x:eval(x))
print(' '.join(sl))