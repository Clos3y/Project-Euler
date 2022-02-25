fibonacci_digits := proc(digits::posint)::posint:
    
    uses combinat:

    n::posint := 0:

    fn::posint := 1:

    while evalf(log10(fn)) < digits - 1 do:

        ++n:

        fn := fibonacci(n):

    od:

    return n:

end proc:

fibonacci_digits(1000);