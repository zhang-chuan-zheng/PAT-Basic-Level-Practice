import math
import time
'''
import sys
sys.setrecursionlimit(100000)
def getNpri(N):
    if N == 1:
        return []
    elif N ==2:
        return [2]
    else:
        lis = getNpri(N-1)
        for i in lis:
            if N % i == 0:
                return lis
        else:
            lis.append(N)
            return lis
'''

def getNpri(N):
    lis = [2]
    n = 3
    while n <= N:
        for i in lis:
            if n % i == 0:
                n += 1
                break
        else:
            lis.append(n)
            n += 1
    return lis

N = eval(input())
p_lis = getNpri(N)
d_lis = [p_lis[i+1]-p_lis[i] for i in range(len(p_lis)-1)]
print(d_lis.count(2))

# def main(N):
#     count_2 = 0
#     pri_lis = [2]
#     if N == 2:
#         return 0
#     else:
#         for n in range(3,N+1):
#             for i in pri_lis:
#                 if n % i == 0:
#                     break
#             else:
#                 if n-pri_lis[-1] == 2:count_2 += 1
#                 pri_lis.append(n)
#         return count_2
#
# print(main(eval(input())))
