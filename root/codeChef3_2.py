def merge(left, right):
    result = []
    i=0
    j=0

    while i<len(left) and j<len(right):
        if left[i][2] >= right [j][2]:
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

lst=list(map(int,input().rstrip().split()))
n=lst[0]
m=lst[1]
balloons=list(map(int,input().rstrip().split()))
candies=list(map(int,input().rstrip().split()))
cntLst=[]
for i in range(n):
    cntLst.append([balloons[i],candies[i],balloons[i]*candies[i]])
print(cntLst)
cntLst=mergesort(cntLst)
print("after sorting:-",cntLst)

while(m!=0):
    cntLst[0][2]-=cntLst[0][1]
    cntLst[0][0]-=1
    i=1
    j=0
    while(i<n):
        if cntLst[i][2]>cntLst[j][2]:
            temp=cntLst[i][:]
            cntLst[i][:]=cntLst[j][:]
            cntLst[j][:]=temp[:]
            i+=1
            j+=1
        else:
            break
    m-=1
print(cntLst[0][2])
