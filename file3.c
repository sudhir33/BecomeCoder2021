num=int(input())#41232
mi=num%10# 2
ma=num%10# 2
while num:
    r=num%10
    num=num//10
    if r>ma:#3>2
        ma=r
    if r<mi:
        mi=r
        
print(mi,ma)
        


"""
414112

3 2



"""
















