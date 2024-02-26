import merge_sort as ms
import insertion_sort as ins

arr = [1,3,4,5,6,7,6,5,4,5,645,6,56,345,34,4,3,23,23,2,32,43,43,4,23,34,4,2,12,3,3,4,34,34,3,43,4,234,23,3,546,5,6]

# Test of insertion sort
print(ms.merge_sort(arr))

# Output: Correct
# [1, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 12, 23, 23, 23, 23, 32, 34, 34, 34, 34, 43, 43, 43, 56, 234, 345, 546, 645]

# Test of insertion sort
print(ins.insertion_sort(arr))

# Output: Correct
# [1, 2, 2, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 4, 5, 5, 5, 5, 6, 6, 6, 6, 7, 12, 23, 23, 23, 23, 32, 34, 34, 34, 34, 43, 43, 43, 56, 234, 345, 546, 645]
