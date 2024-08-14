n = int(input())

def Foo(s):
    ans = s[0] + str(len(s) - 2) + s[len(s) - 1]
    return ans

for i in range(n):
    s = input()
    if(len(s) > 10) :
        print(Foo(s))
    else :
        print(s)