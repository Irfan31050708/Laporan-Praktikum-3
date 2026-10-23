multiple = int(input())
symbol = input()

for i in range(1, 51):
    if i % multiple == 0:
        print(symbol, end=" ")
    else:
        print(i, end=" ")
print()