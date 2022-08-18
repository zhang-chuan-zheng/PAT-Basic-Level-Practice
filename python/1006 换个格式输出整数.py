def get_ind(n):
    if n == 1:
        return '1'
    elif n == 0:
        return ''
    else:
        return get_ind(n-1) + str(n)

num = eval(input())
alp = ["B","S"]
for i in range(2):
    print(alp[i]*(num // 100),end='')
    num %= 100
    num *= 10
print(get_ind(num//100))
