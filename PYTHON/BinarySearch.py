def binarySearch(arr,left,right,target):
    while left<=right:
        mid = left + (right-left)//2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left= mid+1
        else:
            right = mid-1
    return -1
 
arr=[9,12,32,54,77,435,643]
n=len(arr)
target=643

result = binarySearch(arr,0,n-1,target)
if result!=-1:
    print(f"Element {target} found at {result}")
else:
    print(f"Element {target} not found in the array.")