def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        d = i-1
        while d >= 0 and key < arr[d]:
            arr[d+1] = arr[d]
            d -= 1
        arr[d+1] = key
        print(arr)
    return arr

array = [2,7,-1,0,12,5,4]
print(array)

insertion_sort(array)