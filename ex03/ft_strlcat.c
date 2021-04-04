/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohan <sohan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/04 21:29:49 by sohan             #+#    #+#             */
/*   Updated: 2021/04/04 21:30:12 by sohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strlcat(char *dest, char *src, unsigned int nb)
{
	int index;
	unsigned int i;

	index = 0;
	i = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[i] != '\0' && nb != 0 && i < nb)
	{
		dest[index + i] = src[i];
		i++;
	}
	dest[index + i] = '\0';
	return (dest);
}

int main()
{
	char dest[] = "";
	char src[] = "asdff";
	int nb = -1;
	printf("my       result:%s\n",ft_strlcat(dest,src,nb));
	char dest1[20] = "";
	char src1[] = "adsfes";
	printf("desired  result:%s\n",strncat(dest1,src1,nb));
	return 0;
}
