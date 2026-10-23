first, second = map(int, input().split())

if first < second:
    for i in range(second - first + 1):
        a = first + i
        b = second - i
        print(a, b, end="")
        if a != second:
            print(" - ", end="")
else:
    for i in range(first - second + 1):
        a = first - i
        b = second + i
        print(a, b, end="")
        if a != second:
            print(" - ", end="")

print()