# basic math functions

def gcd(a, b):
    # gcd of a and b?
    while b != 0:
        a, b = b, a % b
    return a

def lcm(a, b):
    # lcm of a and b?
    # is just a*b / gcd(a, b)
    return a*b // gcd(a, b)
    
def unique(x):
    return len(str(x)) == len(set(str(x)))

def prime_sieve(n):
    prime = [True for i in range(n+1)]
    k = 2
    while k*k <= n:
        if prime[k]:
            for i in range(k*2, n+1, k):
                prime[i] = False
        k += 1
    
    prime[0], prime[1] = False, False
    res = []
    for i in range(n+1):
        if prime[i]:
            # print(res)
            res.append(i)
    return res
