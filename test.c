#include <stdio.h>
#include <string.h>
unsigned int    ft_strlen(char *string)
{
	    unsigned int i;
	        i = 0;
		    while (string[i] != '\0')
			        {
					        i++;
						    }
		        return (i);
}
unsigned int    ft_strlcat(char *dest, char *src, unsigned int size)
{
	    unsigned int    i;
	        unsigned int    j;
		    unsigned int    dest_len;
		        unsigned int    src_len;
			    dest_len = ft_strlen(dest);
			        src_len = ft_strlen(src);
				    if (size < dest_len)
					        {
							        return (src_len + size);
								    }
				        i = dest_len;
					    j = 0;
					        while (src[j] != '\0' && i < size - 1)
							    {
								            dest[i] = src[j];
									            i++;
										            j++;
											        }
						    dest[i] = '\0';
						        return (dest_len + src_len);
}

int main()
{
	printf("my result:%d\n", ft_strlcat("aa","bbbbbbbb",2));
	printf("desired result:%d\n", strlcat("aa","bbbbbbbb",2));
return 0;	
}
