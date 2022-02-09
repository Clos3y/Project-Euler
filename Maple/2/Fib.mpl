fib_even_sum := proc()::integer:

options threadsafe:

uses combinat:

local val := 0, n := 1, FN := 0:

while FN <= 4000000 do:

if type(FN,even) then:
	
val += FN:

else end if:

++n:

FN := fibonacci(n):

end do:

return val:

end proc:

fib_even_sum();
