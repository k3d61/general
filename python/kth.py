def heap_sort(nos):
    global size
    size = len(nos)
   # print "the size of the List is : %d " %size
    Build_heap(size,nos)
    for i in range(size-1,0,-1):
        nums[0],nums[i] = nums[i],nums[0]
        size = size-1
    #    print "\n", nums
        heapify(nos,i,size)
    #print "heap sort array:" ,nums
    return nums

def left_child(i):
    return 2*i+1

def right_child(i):
    return 2*i+2

def heapify(nums,i,size):
    l = left_child(i)
    r = right_child(i)
    if l <= size and r <= size:
        if r != size:
            if nums[l] >= nums[r]:
                max = nums[l]
                max_index = l
            elif nums[l] <= nums[r]:
                max = nums[r]
                max_index = r
            if nums[i] >= max:
                print nums
                return
            elif nums[i] <= max:
                nums[i],nums[max_index] = max,nums[i]
                heapify(nums,max_index,size)
        else:
            nums[i],nums[l] = nums[l],nums[i]
            print nums

# build a heap A from an unsorted array          
def Build_heap(size,elements):
    iterate = size//2-1
    for i in range(iterate,-1,-1):
        #print "In %d iteration" %i
        heapify(elements,i,size)
    print "heapified array is : " ,elements


if __name__ == '__main__':
    #get input from user
    nums = [6,9,3,2,4,1,7,5,10]
    #sort the list
    heap_sort(nums)
    print "heap sort array:" ,nums
