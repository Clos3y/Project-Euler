def fizzbuzz_sum(n: int) -> int:

	k = (n-1) // 3
	l = (n-1) // 5
	m = (n-1) // 15
	
	return ( 3*k*(k+1) + 5*l*(l+1) - 15*m*(m+1) ) // 2