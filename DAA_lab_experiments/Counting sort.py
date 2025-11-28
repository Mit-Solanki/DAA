

def print_by_repetition(arr):
   
    count_dict = {}
    for num in arr:
        if num in count_dict:
            count_dict[num] += 1
        else:
            count_dict[num] = 1
    
  
    result = []
    for num, count in count_dict.items():
        result.extend([num] * count)
    
    print("Output:")
    print(*result)


array = [1, 2, 2, 3, 1, 4, 2, 3]
print_by_repetition(array)
