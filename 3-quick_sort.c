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
 * quick_sort - sorts the algorithm by partitioning
 * @array: array to sort
 * @size: size of the array
 * 
 * Description: choose a pivot and make the smaller numbers move to 
 * the left and the greater number to the right side
*/
void quick_sort(int *array, size_t size)
{
    quick_sort_recursion(array, 0, size - 1);
    
}

/**
 * quick_sort_recursion - calls the itself to keep repeating if low < high
*/
void quick_sort_recursion(int *array, int low, int high)
{
    if (low < high)
    {
        int pivot_index;
        
        pivot_index = partition(array, low, high);
        quick_sort_recursion(array, low, pivot_index - 1);
        quick_sort_recursion(array, pivot_index + 1, high);
    }
}
/**
 * partition - divides the array into two halve and return the current index
 * 
*/
int partition(int *array, int low, int high)
{
    int i = low;
    int j;
    int pivot_number = array[high];

    for (j = low; j < high; j++)
    {
        if (array[j] <= pivot_number)
        {
            swap_elements(&array[j], &array[i]);
            i++;
        }
    }
    swap_elements(&array[i], &array[high]);
    print_array(array, high + 1);
    return (i);
}
