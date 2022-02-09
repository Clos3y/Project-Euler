fizz_buzz_sum := proc(n::posint)::posint:

options threadsafe:

local val := 0:

for i from 1 to n-1 do:

if i mod 3 = 0  or i mod 5 = 0 then:

val += i:

else end if:

od:

return val:

end proc:

fizz_buzz_sum(1000);
