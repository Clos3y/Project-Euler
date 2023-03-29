def divisors(n: int) -> list:
  divisor_list = [1,n]
  for i in range(2,(n+1)//2):
    if n % i == 0 and ((i not in divisor_list) and ((cofactor := n//i) not in divisor_list)):
      divisor_list.append(i)
      divisor_list.append(cofactor)
  return divisor_list

def num_divisors_triangle(n: int) -> int:
  counter = 1
  tri_num = 1
  while len(divisors(tri_num)) < n:
    counter +=1
    tri_num = (counter)*(counter+1)//2
  return counter
