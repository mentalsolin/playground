n = 5
m = n - 1

for i in range(n, -1, -1):
    for k in range(m, 0, -1):
        print(end=" ")
    m = m + 1
    for k in range(0, i + 1):
        print("+ ", end="")
    print()

for i in range(n, -1, -1):
    for k in range(m, 0, +1):
        print(end=" ")
    m = m - 1
    for k in range(0, i + 1):
        print("+ ", end="")
    print()
input()
