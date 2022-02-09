palin_prod := proc(n::posint)::posint:

options threadsafe;

uses StringTools:

for i from 10^(n+1)-1 to 10^n by -1 do:

	for k from 10^(n+1)-1 to 10^n by -1 do:

		val := i*k;

		val_string := convert(val,string);

		if val_string = Reverse(val_string) then:

			return val:

		else end if:

	od:

od:

return numbers;

end proc:

palin_prod(2);
