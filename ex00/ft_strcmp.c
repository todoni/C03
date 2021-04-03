/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 00:17:37 by sohan             #+#    #+#             */
/*   Updated: 2021/04/02 01:20:26 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int difference;
	int index;

	index = 0;
	difference = 0;
	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}
	difference = s1[index] - s2[index];
	return (difference);
}

int main()
{
	char s1[] = "asdf";
	char s2[] = "asdfg";
	char *ptr_s1 = s1;
	char *ptr_s2 = s2;

	printf("return value of my strcmp is %d\n", ft_strcmp(ptr_s1,ptr_s2));
	printf("return value of strcmp is %d\n", strcmp(ptr_s1,ptr_s2));

	return 0;
}
