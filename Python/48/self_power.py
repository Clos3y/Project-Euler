def self_power(n: int) -> int:
  sum_power = 0
  modular = pow(10,10)
  for i in range(1,n+1):
    sum_power += pow(i,i,modular)
  return sum_power
