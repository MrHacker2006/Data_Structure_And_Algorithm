def display(arr):
    for num in arr:
        print(num, end=" ")
    print()

def insertion(arr, index, element, capacity):
    if len(arr) >= capacity:
        return -1
    arr.append(0)  # Temporary space to shift
    for i in range(len(arr) - 2, index - 1, -1):
        arr[i + 1] = arr[i]
    arr[index] = element
    return 1

# Initial array (only 5 elements used)
arr = [31, 5, 42, 12, 25]
size = len(arr)
element = 43
index = 3
capacity = 100
display(arr)
warning = insertion(arr, index, element, capacity)

if warning == 1:
    print("Insertion is Completed Successfully")
    display(arr)
else:
    print("Insertion Failed!")
