from functools import lru_cache
from math import isqrt

@lru_cache
def is_prime(n: int) -> bool:
  for i in range(2,isqrt(n)):
    if is_prime(i) and n % i == 0:
      return False
  return True
