def merge(left, right):
    result = []
    i=0
    j=0

    while i<len(left) and j<len(right):
        if left[i][2] <= right [j][2]:
            result.append(left[i][:])
            i+=1
        else:
            result.append(right[j][:])
            j+=1
    result += left[i:][:]
    result += right[j:][:]
    return result

def mergesort(lst):
    if len(lst) <= 1:
        return lst
    middle = int(len(lst) / 2)
    left = mergesort(lst[:middle][:])
    right = mergesort(lst[middle:][:])
    return merge(left, right)
print (mergesort([[1,2,3],[1,2,5],[3,2,1],[2,3,2],[23,3,5],[2,2,4],[2,3,5]]))
