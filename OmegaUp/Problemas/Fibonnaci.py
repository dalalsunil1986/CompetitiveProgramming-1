import math



def fibonacci_doubling(n):
    return _fibonacci_doubling(n)[0]

def _fibonacci_doubling(n):
    if n == 0:
        return (0, 1)
    else:
        a, b = _fibonacci_doubling(n >> 1)
        c = a* ((b << 1) - a);
        d = (a*a) + (b*b)
        if n & 1:
            return (d, c + d)
        else:
            return (c, d)


n = int(input())

a = fibonacci_doubling(n);

if (a&1): print("Impar")
else: print(a)
