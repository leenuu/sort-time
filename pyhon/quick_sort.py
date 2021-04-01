def quick( arr, left, right):
    r = right
    l = left
    pivot = arr[int((right + left) / 2)]

    while (l < r):
        
        while arr[l] < pivot: 
            l = l + 1
        while arr[r] > pivot:
            r = r - 1

        if l <= r:
            if l < r:
                temp = arr[l]
                arr[l] = arr[r]
                arr[r] = temp

            l = l + 1
            r = r - 1
        
    if left < r:
        quick(arr, left, r)

    if right > l:
        quick(arr, l, right)

    return arr
