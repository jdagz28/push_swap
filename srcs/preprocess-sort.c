/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preprocess-sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:27 by jdagoy            #+#    #+#             */
/*   Updated: 2023/02/09 15:17:01 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_preproc_swap(int *array, int index_1, int index_2)
{
	int	temp;

	temp = array[index_1];
	array[index_1] = array[index_2];
	array[index_2] = temp;
}

static int	ft_median_of_three(int *array, int left, int right)
{
	int	index[3];

	index[0] = left;
	index[1] = (left + right) / 2;
	index[2] = right;
	if (array[index[0]] > array[index[1]])
		ft_preproc_swap(index, 0, 1);
	if (array[index[1]] > array[index[2]])
		ft_preproc_swap(index, 1, 2);
	if (array[index[0]] > array[index[1]])
		ft_preproc_swap(index, 0, 1);
	return (index[1]);
}

static int	ft_partition_array(int *array, int left, int right)
{
	int	p_index;
	int	pivot;
	int	low;
	int	high;

	p_index = ft_median_of_three(array, left, right);
	pivot = array[p_index];
	low = left + 1;
	high = right;
	ft_preproc_swap(array, left, p_index);
	while (low <= high)
	{
		while (pivot >= array[low] && low <= right)
			low++;
		while (pivot < array[high] && high >= (left + 1))
			high--;
		if (low <= high)
			ft_preproc_swap(array, low, high);
	}
	ft_preproc_swap(array, left, high);
	return (high);
}

void	ft_quick_sort(int *array, int left, int right)
{
	int	pivot;

	if (left <= right)
	{
		pivot = ft_partition_array(array, left, right);
		ft_quick_sort(array, left, pivot - 1);
		ft_quick_sort(array, pivot + 1, right);
	}
}

int	ft_binary_search(int *array, int len, int target)
{
	int	first;
	int	last;
	int	mid;

	first = 0;
	last = len - 1;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (target == array[mid])
		{
			return (mid);
		}
		else
		{
			if (target < array[mid])
				last = mid - 1;
			else
				first = mid + 1;
		}
	}
	return (-1);
}
