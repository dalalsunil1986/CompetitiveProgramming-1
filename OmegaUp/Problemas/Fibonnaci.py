import math
from math import sqrt

from decimal import *
D = Decimal

# fib(0) = 0
getcontext().Emin = 0

# On 64-bit machines, decimal.MAX_EMAX is 999999999999999999. On 32-bit ones, ut's 425000000.
getcontext().Emax = MAX_EMAX

def fib(n):
    assert n >= 0
    if n < 4784972: 
        return _binet(n)
    else:
        return _fast_doubling(n)[0]
  
  
def _binet(n):
    """Binet's formula:
    (golden**n - (1-golden)**n)/sqrt(5)
    """   
    golden = (1 + D(5).sqrt())/2
    fib = (Context().power(golden,D(n)) - Context().power(1-golden, D(n)))/D(5).sqrt()
    return Context().to_integral_exact(fib)
  
  
def _fast_doubling(n):
    """Fast doubling method:
    F(2n) = F(n)*(2*F(n+1) – F(n))
    F(2n + 1) = F(n)**2 + F(n+1)**2
    """
    if n <= 4784970:
        return (_binet(n), _binet(n+1))
    else:
        fib_n, fib_n_plus_1 = _fast_doubling(n // 2)
        fib_2n = fib_n * (fib_n_plus_1 * 2 - fib_n)
        fib_2n_plus_1 = fib_n**2 + fib_n_plus_1**2
        fib_2n_plus_2 = fib_2n + fib_2n_plus_1
      
        if n % 2 == 0:
            return (fib_2n, fib_2n_plus_1)
        else:
            return (fib_2n_plus_1, fib_2n_plus_2)

n = int(input())

print(fib(n))

