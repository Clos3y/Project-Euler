def sum_sq_diff(n: int) -> int:
	k1 = (n+1)*n
	k2 = (2*n+1)
	return (pow(k1,2)//4) - (k1*k2//6)