## Bubble sort

Simplest way to sort given elements.

It has only main action to swap neighbors by comparing.
By step by step:

1. Swapping neighbors by given sorting order. At the end of full iteration end of array will have minimum or maximum value.
2. Ignore the last element reiterate values to swap.


### Pseudo code 

```
procedure bubbleSort( A : list of sortable items )
    n = length(A)
    repeat
        swapped = false
        for i = 1 to n-1 inclusive do
            if A[i-1] > A[i] then
                swap(A[i-1], A[i])
                swapped = true
            end if
        end for
        n = n - 1
    until not swapped
end procedure
```
