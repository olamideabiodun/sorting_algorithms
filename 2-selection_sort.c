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

void selection_sort(int *array, size_t size)
{
    int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;
		if ((array + i) != min)
		{
			swap_elements(array + i, min);
			print_array(array, size);
		}
	}
}
/** size_t i, j;
    int current_min;
    int *index;


    if (!array || size < 2) return;
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

        if (array[i] != current_min) {
            swap_elements(index, &array[i]);
        }

        current_min = array[i + 1];
        print_array(array, size);
    }
}


 * loop through to get the next minimum and 
 * add to the end of the sorted array
 * array[i + 1] = is the next integer
 * array[1] = the current;
 */
