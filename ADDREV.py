for _ in range(int(input())):
    a,b = list(map(int,input().split()))
    reva,revb,rans=0,0,0
    while(a>0):
        reva = (reva*10)+(a%10)
        a //= 10
    while(b>0):
        revb = (revb*10)+(b%10)
        b //= 10
    ans = revb + reva
    while(ans>0):
        rans = (rans*10)+(ans%10)
        ans //= 10
    print(rans)
