/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preprocess-sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdagoy <jdagoy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:21:27 by jdagoy            #+#    #+#             */
/*   Updated: 2023/01/27 23:55:13 by jdagoy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int  ft_median_of_three(int *arr, int left, int right)
{
    int index[3];

    index[0] = left;
    index[1] = (left + right) / 2;
    index[2] = right;
    if (arr[index[0]] > arr[index[1]])
        ft_swap(index, 0, 1);
    if (arr[index[1]] > arr[index[2]])
        ft_swap(index, 1, 2);
    if (arr[index[0]] > arr[index[1]])
        ft_swap(index, 0, 1);
    return (index[1]);
}

static int  ft_partition_array(int *arr, int left, int right)
{
    int p_index;
    int pivot;
    int low;
    int high;
    
    p_index = ft_median_of_three(arr, left, right);
    pivot = arr[p_index];
    low = left + 1;
    high = right;
    ft_swap(arr, left, p_index);
    while (low <= high)
    {
        while (pivot >= arr[low] && low <= right)
            low++;
        while (pivot < arr[high] && high >= (left + 1))
            high--;
        if (low <= high)
            ft_swap(arr,low, high);
    }
    ft_swap(arr, left, high);
    return(high);
}

void    ft_quick_sort(int *arr, int left, int right)
{
    int pivot;

    if (left <= right)
    {
        pivot = ft_partition_array(arr, left, right);
        ft_quick_sort(arr, left, pivot - 1);
        ft_quick_sort(arr, pivot + 1, right);
    }
}

int ft_binary_search(int *arr, int len, int target)
{
    int     first;
    int     last;
    int     mid;

    first = 0;
    last = len - 1;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if (target == arr[mid])
        {
            return (mid);
        }
        else
        {
            if (target < arr[mid])
                last = mid - 1;
            else
                first = mid + 1;
        }
    }
    return (-1) //Check this one - Why return value is -1
}