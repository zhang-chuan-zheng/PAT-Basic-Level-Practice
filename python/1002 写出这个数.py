num = eval(input())
sum = 0
for i in range(1,101):
    sum += num%10
    num = num//10
plis = ['ling','yi','er','san','si','wu','liu','qi','ba','jiu']
str1 = ''
for i in str(sum):
    str1 = str1 + plis[eval(i)]+' '
print(str1[:-1])