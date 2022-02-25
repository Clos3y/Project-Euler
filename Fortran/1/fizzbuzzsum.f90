program fizzbuzz
    implicit none
    
    integer :: val_sum
    integer :: i

    val_sum = 0

    do i = 1, 999
        if (mod(i,3) == 0 .or. mod(i,5)==0)  then
            val_sum = i + val_sum
        end if
    end do

    print *,val_sum

end program fizzbuzz