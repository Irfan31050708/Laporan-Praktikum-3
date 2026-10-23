n = int(input())
k = int(input())

grand_total = 0

for r in range(1, n + 1):
    row_total = 0

    for j in range(r, 0, -1):
        print(f"({j} * {k})", end="")
        row_total += j * k
        if j != 1:
            print(" + ", end="")

    print(" =", row_total)
    grand_total += row_total

print(grand_total)