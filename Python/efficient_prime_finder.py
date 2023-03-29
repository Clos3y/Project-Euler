from functools import lru_cache
from math import isqrt

@lru_cache
def is_prime(n: int) -> bool:
    if n == 1:
        return False
    elif n == 2:
        return True
    else:
        for i in range(2,isqrt(n)+1):
            if is_prime(i) and n % i == 0:
                return False
        return True
