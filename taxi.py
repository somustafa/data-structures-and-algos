n = int(input())
s = list(map(int, input().split())) # 1 2 4 3 2 1 3 2
fours = s.count(4)
threes = s.count(3)
twos = s.count (2)
ones = s.count (1)
num_of_taxi = fours
num_of_taxi = num_of_taxi + threes

if threes <= ones:
    ones = ones - threes
else:
    ones = 0

num_of_taxi += twos // 2
if twos % 2:
    num_of_taxi = num_of_taxi + 1
    if ones > 2:
        ones = ones -2
    else:
        ones = 0

if ones % 4 == 0: 
    num_of_taxi =  num_of_taxi + ones // 4
else:
    num_of_taxi = (num_of_taxi + ones // 4)  + 1

print(num_of_taxi)

