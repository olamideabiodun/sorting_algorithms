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
    size_t i, j;
    int current_min;
    int *index;



    if (!array || size < 2)
        return;

    current_min = array[0];

    for  (i = 0; i < size - 1; i++)
    {
        for  (j = i + 1; j < size; j++)
        {
            if (array[j] < current_min)
            {
                current_min = array[j];
                index = &array[j];
            }
        }


        swap_elements(index, &array[i]);
        current_min = array[i + 1];
        print_array(array, size);
    }
}


/**
 * loop through to get the next minimum and 
 * add to the end of the sorted array
 * array[i + 1] = is the next integer
 * array[1] = the current;
 */
