collatz := proc(n::posint)::posint:

options threadsafe:

if n = 1 then:
	return 1:
elif type(n,even) then:
	return n/2:
elif type(n,odd) then:
	return 3*n + 1:
else end if:

end proc:

collatz_stack := proc(N::posint)::posint:

max_val::posint := 1:

max_val_index::posint := 1:

for i from 2 to N-1 do:

	local val::posint := i:

	local counter::posint := 1:

	while val <> 1 do:
			
		val := collatz(val):

		++counter:

	od:

	if counter > max_val then:

		max_val := counter:

		max_val_index := i:

	else end if:

od:

return max_val_index:

end proc:

collatz_stack(1000000);
