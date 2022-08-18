int = eval(input())
step = 0
while True:
    if int % 2 == 0:
        int /= 2
        step += 1
    elif int == 1:
        break
    else:
        int = 3*int + 1
print(step)

