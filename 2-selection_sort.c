#include "sort.h"
/**
 * swap_elements - swap elements in an array
 * @a: first element
 * @b: second element to swap
 */
void swap_elements(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
/**
 * selection_sort - sorts an array of elements
 * @array: the array to sort
 * @size: The size of the array
*/

bool isSorted(int *arr, size_t size) {
    bool isSorted = true;
    size_t i;

    for (i=0;i<size-1;i++) {
        if (arr[i] > arr[i + 1]) {
            isSorted = false;
            break;
        }
    }

    return isSorted;
}

void selection_sort(int *array, size_t size)
{
    size_t i;
    if (!array || size < 2) return;

    for  (i = 0; i < size - 1; i++){
        if (array[i + 1] < array[i])
        {
            swap_elements(&array[i], &array[i + 1]);
            print_array(array, size);
            i = -1;
        }
    }
}
