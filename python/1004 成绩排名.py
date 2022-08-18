n = eval(input())
grade = []
for i in range(n):
    grade.append(input().split())
grade.sort(key = lambda x:eval(x[2]))
#print(grade)
print(f'{grade[-1][0]} {grade[-1][1]}')
print(f'{grade[0][0]} {grade[0][1]}')
