def countdown_v2(i):
    print(i)
    if i <= 0:
        return
    else:
        countdown_v2(i - 1)


def countdown_v1(i):
    print(i)
    countdown_v1(i - 1)


def fact(x):
    if x == 1:
        return 1
    else:
        return x * fact(x - 1)


def quicksort(array):
    if len(array) < 2:
        return array
    else:
        pivot = array[0]
        less = [i for i in array[1:] if i <= pivot]
        greater = [i for i in array[1:] if i > pivot]
        return quicksort(less) + [pivot] + quicksort(greater)


# countdown_v2(5)
# print(fact(5))
print(quicksort([10, 5, 2, 3, 1, 9, 7, 6, 12]))
