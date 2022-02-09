sum_v_sum := proc(n::posint)::posint:

options autocompile:

local n2 := n^2:

return (n2*n2 - n2)/4 + n*(n2 - 1)/6:

end proc:

sum_v_sum(100);
