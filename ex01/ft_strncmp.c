/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 00:17:37 by sohan             #+#    #+#             */
/*   Updated: 2021/04/02 02:24:51 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	difference;
	unsigned int	index;

	index = 0;
	difference = 0;
	while (s1[index] == s2[index] && s1[index] != '\0' && \
					n != 0 && index < n - 1)
	{
		index++;
	}
	difference = s1[index] - s2[index];
	return (difference);
}

int main()
{
	char s1[] = "as";
	char s2[] = "asdf";
	char *ptr_s1 = s1;
	char *ptr_s2 = s2;
	int n = -1;

	printf("return value of my strncmp is %d\n", ft_strncmp(ptr_s1,ptr_s2,n));
	printf("return value of strncmp is %d\n", strncmp(ptr_s1,ptr_s2,n));

	return 0;
}
