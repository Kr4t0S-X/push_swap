/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cghanime <cghanime@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:09:18 by cghanime          #+#    #+#             */
/*   Updated: 2019/09/11 19:22:27 by cghanime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	quicksort(int number[25],int first,int last);

void	quicksort(int number[25],int first,int last)
{
	int i, j, pivot, temp;

	if(first<last)
	{
		pivot=first;
		i=first;
		j=last;

		while(i<j){
			while(number[i]<=number[pivot]&&i<last)
				i++;
			while(number[j]>number[pivot])
				j--;
			if(i<j){
				temp=number[i];
				number[i]=number[j];
				number[j]=temp;
			}
		}

		temp=number[pivot];
		number[pivot]=number[j];
		number[j]=temp;
		quicksort(number,first,j-1);
		quicksort(number,j+1,last);

	}
}

int		main()
{
	int i, count, number[25];

	printf("How many elements are u going to enter?: ");
	scanf("%d",&count);

	printf("Enter %d elements: ", count);
	for(i=0;i<count;i++)
		scanf("%d",&number[i]);

	quicksort(number,0,count-1);

	printf("Order of Sorted elements: ");
	for(i=0;i<count;i++)
		printf(" %d",number[i]);

	return 0;
}
