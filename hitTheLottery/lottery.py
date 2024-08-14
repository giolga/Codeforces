n = int(input())

cnt = 0

cnt += n // 100
if(n // 100 > 0) : n = n - (n // 100) * 100

cnt += n // 20
if(n // 20 > 0) : n = n - (n // 20) * 20

cnt += n // 10
if(n // 10 > 0) : n = n - (n // 10) * 10

cnt += n // 5
if(n // 5 > 0) : n = n - (n // 5) * 5

cnt += n // 1
if(n // 1 > 0) : n = n - (n // 1) * 1

print(cnt)