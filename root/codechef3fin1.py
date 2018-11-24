def merge(left,right):
    ans=[]
    l=0
    r=0
    while l<len(left) and r<len(right):
        if left[l][2]>=right[r][2]:
            ans.append(left[l][:])
            l+=1
        else:
            ans.append(right[r][:])
            r+=1
    ans+=left[l:][:]
    ans+=right[r:][:]
    return ans
def mergeSort(magic):
    if len(magic)<=1:
        return magic
    middle=int(len(magic)/2)
    left = mergeSort(magic[:middle][:])
    right = mergeSort(magic[middle:][:])
    return merge(left,right)
    
lst=list(map(int,input().rstrip().split()))
n=lst[0]
m=lst[1]
balloons=list(map(int,input().rstrip().split()))
candies=list(map(int,input().rstrip().split()))
cntLst=[]
for i in range(n):
    cntLst.append([balloons[i],candies[i],balloons[i]*candies[i]])
#print(cntLst)
cntLst=mergeSort(cntLst)
#print("after sorting:-",cntLst)

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
