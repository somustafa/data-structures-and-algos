n = int(input())
total_a = 0
total_g = 0
netice = []
for i in range(n):
    a, g = map(int, input().split())
    if abs((total_a + a) - total_g) <= 500:
        total_a += a
        netice.append("A")
    else:
        total_g += g
        netice.append("G")
print("".join(netice))

    

    
