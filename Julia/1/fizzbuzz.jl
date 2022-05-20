function fizzbuzz(n::Int)

    sum::Int = 0

    for i in 1:(n-1)

        if i % 3 == 0 || i % 5 == 0

            sum += i

        end

    end

    return sum

end
