import math
import time
from decimal import Decimal
n = 6;

def fibonacci_doubling(n):
    """ Calculate the Nth Fibonacci number using the doubling method. """
    return _fibonacci_doubling(n)[0]


def _fibonacci_doubling(n):
    """ Calculate Nth Fibonacci number using the doubling method. Return the
    tuple (F(n), F(n+1))."""
    if n == 0:
        return (0, 1)
    else:
        a, b = _fibonacci_doubling(n >> 1)
        c = a * ((b << 1) - a)
        d = a * a + b * b
        if n & 1:
            return (d, c + d)
        else:
            return (c, d)


def fib(n):
    if n in (0, 1):
        return 1
    if n & 1:  # if n is odd, it's faster than checking with modulo
        return fib((n+1)//2 - 1) * (2*fib((n+1)//2) - fib((n+1)//2 - 1))
    a, b = fib(n//2 - 1), fib(n//2)
    return a**2 + b**2


start = time.time()

print(fibonacci_doubling(150000))

print(time.time()-start)
