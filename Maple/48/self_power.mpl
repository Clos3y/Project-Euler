self_powers := proc(n::posint)::posint:

    uses Threads:

    return Add(k^k,k=1..n):
    
end proc:

self_powers(1000);