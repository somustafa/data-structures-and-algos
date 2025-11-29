i, j = map(int, input().split()) #1 10
max_cycle = 0
say = 0
for i in range(i, j+1):
    say =  1
    while i != 1:
        if i % 2 == 0:
            i = i // 2
        else:
            i = 3 * i +1
        say+=1
    if say > max_cycle:
        max_cycle = say

    
print(max_cycle)