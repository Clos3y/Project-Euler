from functools import lru_cache
from math import isqrt

@functools.lru_cache
def is_prime(n: int) -> bool:
  for i in range(2,isqrt(n)):
    if is_prime(i):
      if n % i == 0:
        return False
  return True
