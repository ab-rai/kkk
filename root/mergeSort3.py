def mergeSort(alist):
    print("Splitting ",alist)
    if len(alist)>1:
        mid = len(alist)//2
        lefthalf = alist[:mid][:]
        righthalf = alist[mid:][:]
        print('left half= ',lefthalf)
        print('right half= ',righthalf)
        mergeSort(lefthalf)
        mergeSort(righthalf)

        i=0
        j=0
        k=0
        while i < len(lefthalf) and j < len(righthalf):
            if lefthalf[i][2] > righthalf[j][2]:
                print('left half= ',lefthalf[i][:],' i= ',i,' j= ',j)
                alist[k][:]=lefthalf[i][:]
                i=i+1
            else:
                print('right half= ',righthalf[j][:],' i= ',i,' j= ',j)
                alist[k][:]=righthalf[j][:]
                j=j+1
            k=k+1

        while i < len(lefthalf):
            alist[k][:]=lefthalf[i][:]
            i=i+1
            k=k+1

        while j < len(righthalf):
            alist[k][:]=righthalf[j][:]
            j=j+1
            k=k+1
    print("Merging ",alist)
alist =[[1,2,3],[1,2,5],[3,2,1],[2,3,2],[23,3,5],[2,2,4],[2,3,5]]
mergeSort(alist)
print(alist)
