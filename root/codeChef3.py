def insertionSort(lst):
    for i in range(1,len(lst)):
        temp=lst[i][:]
        j=i-1
        while(j>=0 and lst[j][2]<temp[2]):
            lst[j+1][:]=lst[j][:]
            j-=1
        lst[j+1][:]=temp[:]

lst=list(map(int,input().rstrip().split()))
n=lst[0]
m=lst[1]
balloons=list(map(int,input().rstrip().split()))
candies=list(map(int,input().rstrip().split()))
cntLst=[]
for i in range(n):
    cntLst.append([balloons[i],candies[i],balloons[i]*candies[i]])
#print(cntLst)
insertionSort(cntLst)
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
