def karatsuba(x,y):
    # print(x,y)
    
    # x · y = (10^n/2 · a + b) · (10^n/2 · c + d)
    #       = 10^n · (a · c) + 10^n/2 · (a · d + b · c) + b · d
    # note: a.d+b.c = ((a+b) . (c+d)) - ac -bd


    # base case
    if len(str(x))==1 or len(str(y))==1:
        # print("base case {}*{}={}".format(x,y,x*y))
        return x*y
    else:
        full = max(len(str(x)),len(str(y)))
        half = full//2

        a = x // (10**half)
        b = x % (10**half)

        c = y // (10**half)
        d = y % (10**half)

        ac = karatsuba(a,c)
        bd = karatsuba(b,d)
        ad_bc = karatsuba((a+b),(c+d))- ac - bd
        prod = (10**(half*2))*ac + (10**half)*(ad_bc) + bd
        # print("10^{} * {} + 10^{} * {} + {}".format(full, ac, half, ad_bc, bd))
        # print("({} , {}) = {}".format(x,y, prod))
        
        return prod

import time
def timed(f):
  start = time.time()
  ret = f()
  elapsed = time.time() - start
  return ret, elapsed


if __name__ == "__main__":
    x=9999392839489248592485984592589348593485934589345
    y=888839459348593845938495834958349589345894385938
    # print(karatsuba(x,y))
    # print(x*y)
    print(timed(lambda : karatsuba(x,y)))
    print(timed(lambda : x*y)) 


