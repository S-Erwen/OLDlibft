/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Erwen <dev.sanjaro@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 13:14:34 by Erwen             #+#    #+#             */
/*   Updated: 2019/08/30 13:14:34 by Erwen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <ctype.h>

int main()
{
	/* ============ Output ============ */
	/*
	printf("== Output ==\n\n");

	ft_putchar('T');
	ft_putstr("est\n");

    */

	/* ============ Strcpy ============ */
	/*
	printf("\n\n== Strcpy ==\n\n");

	char 	srcpy[40] = "Ea non Lorem aute Lorem aute quis sint.";
	char	destcpy[40];

	printf("Chaine de carractere avant ft_cpy = %s\n", destcpy);
	ft_strcpy(destcpy, srcpy);
	printf("Chaine de carractere apres ft_cpy = %s\n\n", destcpy);

	// ============================================================= 

	char 	cpy_src[40] = "Ea non Lorem aute Lorem aute quis sint.";
	char	cpy_dest[40];

	printf("Chaine de carractere avant cpy = %s\n", cpy_dest);
	strcpy(cpy_dest, cpy_src);
	printf("Chaine de carractere apres cpy = %s\n", cpy_dest);

	*/
	/* ============ Strncpy ============ */
	/*
	printf("\n\n== Strncpy ==\n\n");

	char 	srncpy[] = "Ea non Lorem aute Lorem aute quis sint.";
	char	destncpy[] = "Coucou";
	int		taille_ncpy = 50;

	printf("Chaine de carractere avant ft_ncpy = %s\n", destncpy);
	ft_strncpy(destncpy, srncpy, taille_ncpy);
	printf("Chaine de carractere apres ft_ncpy = %s\n\n", destncpy);

	// ============================================================= 

	char 	ncpy_src[] = "Ea non Lorem aute Lorem aute quis sint.";
	char	ncpy_dest[] = "Coucou";

	printf("Chaine de carractere avant ncpy = %s\n", ncpy_dest);
	strncpy(ncpy_dest, ncpy_src, taille_ncpy);
	printf("Chaine de carractere apres ncpy = %s\n", ncpy_dest);
	*/
	
	/* ============ Strlen ============ */
	/*
	printf("\n\n== Strlen ==\n\n");

	int 	ftlen = 0;
	char 	srclen[40] = "Ea non Lorem aute Lorem aute quis sint.";


	printf("Taille de ftlen avant = %d\n", ftlen);
	ftlen = ft_strlen(srclen);
	printf("Taille de ftlen apres = %d\n", ftlen);
	
	=============================================================

	int		len = 0;

	printf("Taille de len avant = %d\n", len);
	len = ft_strlen(srclen);
	printf("Taille de len apres = %d\n", len);

	*/
	/* ============ Strcat ============ */
	/*
	printf("\n\n== Strcat ==\n\n");

	char 	srcat[] = "lorem";
	char	destcat[] = "a";

	printf("Chaine de carractere avant ft_cat = %s\n", destcat);
	ft_strcat(destcat, srcat);
	printf("Chaine de carractere apres ft_cat = %s\n\n", destcat);

	// ============================================================= 

	char 	cat_src[] = "lorem";
	char	cat_dest[] = "a";

	printf("Chaine de carractere avant cat = %s\n", cat_dest);
	strcat(cat_dest, cat_src);
	printf("Chaine de carractere apres cat = %s\n", cat_dest);

	*/
	/* ============ Strncat ============ */
	/*
	printf("\n\n== Strncat ==\n\n");

	char 	srncat[] = "lorem";
	char	destncat[] = "a";
	int		taille_cat = 2;

	printf("Chaine de carractere avant ft_ncat = %s\n", destncat);
	ft_strncat(destncat, srncat, taille_cat);
	printf("Chaine de carractere apres ft_ncat = %s\n\n", destncat);

	// ============================================================= 

	char 	ncat_src[] = "lorem";
	char	ncat_dest[] = "a";

	printf("Chaine de carractere avant ncat = %s\n", ncat_dest);
	strncat(ncat_dest, ncat_src, taille_cat);
	printf("Chaine de carractere apres ncat = %s\n", ncat_dest);
	*/
	/* ============ Strcmp ============ */
	/*
	printf("\n\n== Strcmp ==\n\n");

	char 	srcmp[] = "test\0";
	char	destcmp[] = "test\200";
	
	printf("Taille de strcmp = %d\n", strcmp(srcmp, destcmp));
	if (ft_strcmp(srcmp, destcmp) == 0)
		printf("Les deux chaines sont pareil\n");
	else if (ft_strcmp(srcmp, destcmp) > 0)
		printf("La premiere chaine est plus grande\n");
	else if (ft_strcmp(srcmp, destcmp) < 0)
		printf("La premiere chaine est plus petite\n");

	// ============================================================= 
	
	printf("Taille de ft_strcmp = %d\n", ft_strcmp(srcmp, destcmp));
	if (strcmp(srcmp, destcmp) == 0)
		printf("V = Les deux chaines sont pareil\n");
	else if (strcmp(srcmp, destcmp) > 0)
		printf("V = La premiere chaine est plus grande\n");
	else if (strcmp(srcmp, destcmp) < 0)
		printf("V = La premiere chaine est plus petite\n");

	*/
	/* ============ Atoi ============ */
	/*
	char 	nb_atoi[] = "	 	 	 	 -25145";
	printf("Mon ft_atoi = %d\n", ft_atoi(nb_atoi));

	=============================================================

	printf("Atoi de la libc = %d\n", atoi(nb_atoi));

	*/

	/* ============ Strdup ============ 

	char	*dupv;
	char 	strdub[] = "Aliqua elit aute laborum dolor amet nostrud.";
	
	dupv = ft_strdup(strdub);
	printf("Voici la chaine apres le ft_dup = %s\n", dupv);

	============================================================= 

	char	*void_dup;
	char 	dup_str[] = "Aliqua elit aute laborum dolor amet nostrud.";
	
	void_dup = strdup(dup_str);
	printf("Voici la chaine apres le dup = %s\n", void_dup);
	*/

	/* ============ Strncmp ============ */
	/* 
	printf("\n\n== Strncmp ==\n\n");

	char 	srncmp[] = "zyxbcdefgh";
	char	destncmp[] = "abcdwxyz";
	int		size_ncmp = 0;
	
	printf("Taille de strncmp = %d\n", ft_strncmp(srncmp, destncmp, size_ncmp));
	if (ft_strncmp(srncmp, destncmp, size_ncmp) == 0)
		printf("Les deux chaines sont pareil\n");
	else if (ft_strncmp(srncmp, destncmp, size_ncmp) > 0)
		printf("La premiere chaine est plus grande\n");
	else if (ft_strncmp(srncmp, destncmp, size_ncmp) < 0)
		printf("La premiere chaine est plus petite\n");

	// ============================================================= 
	
	printf("Taille de ft_strncmp = %d\n", strncmp(srncmp, destncmp, size_ncmp));
	if (strncmp(srncmp, destncmp, size_ncmp) == 0)
		printf("V = Les deux chaines sont pareil\n");
	else if (strncmp(srncmp, destncmp, size_ncmp) > 0)
		printf("V = La premiere chaine est plus grande\n");
	else if (strncmp(srncmp, destncmp, size_ncmp) < 0)
		printf("V = La premiere chaine est plus petite\n");
	*/
	/* ============ Strstr ============ 
	char	s1_str[] = "Test";
	char 	s2_str[] = "e";

	printf("Voici le resulat de ft_strstr = %s\n",ft_strstr(s1_str, s2_str));

	 ============================================================= 

	printf("Voici le resulat de strstr = %s\n",strstr(s1_str, s2_str));
	*/

	/* ============ Strnstr ============ */
	/*
	char	s1_nstr[] = "Testeur";
	char 	s2_nstr[] = "est";
	int		size_nstr = 35;

	printf("Voici le resulat de ft_strnstr = %s\n", ft_strnstr(s1_nstr, s2_nstr, size_nstr));
	*/

	/* ============ Strchr ============ */
	/*
	char	string_chr[] = "Bonjour";
	int		chr_test = '\0';
	
	printf("Voici le resulat de ft_strchr = %s\n", ft_strchr(string_chr, chr_test));

	// ============================================================= 

	printf("Voici le resulat de strchr = %s\n", strchr(string_chr, chr_test));
	*/
	/* ============ Strrchr ============ */
	/*
	char	string_rchr[] = "ATzesteur";
	int		rchr_test = 's';
	
	printf("Voici le resulat de ft_strrchr = %s\n", ft_strrchr(string_rchr, rchr_test));

	// ============================================================= 

	printf("Voici le resulat de strrchr = %s\n", strrchr(string_rchr, rchr_test));
	*/
	/* ============ Memcmp ============ */
	/*
	printf("\n\n== Memcmp ==\n\n");

	char 	srmencmp[] = "t\200";
	char	destmemcmp[] = "t\0";
	int		size_memcmp = 2;

	printf("Taille de ft_memcmp = %d\n", ft_memcmp(srmencmp, destmemcmp, size_memcmp));
	if (ft_memcmp(srmencmp, destmemcmp, size_memcmp) == 0)
		printf("Les deux chaines sont pareil\n");
	else if (ft_memcmp(srmencmp, destmemcmp, size_memcmp) > 0)
		printf("La premiere chaine est plus grande\n");
	else if (ft_memcmp(srmencmp, destmemcmp, size_memcmp) < 0)
		printf("La premiere chaine est plus petite\n");

	// ============================================================= 
	
	printf("Taille de memcmp = %d\n", memcmp(srmencmp, destmemcmp, size_memcmp));
	if (memcmp(srmencmp, destmemcmp, size_memcmp) == 0)
		printf("V = Les deux chaines sont pareil\n");
	else if (memcmp(srmencmp, destmemcmp, size_memcmp) > 0)
		printf("V = La premiere chaine est plus grande\n");
	else if (memcmp(srmencmp, destmemcmp, size_memcmp) < 0)
		printf("V = La premiere chaine est plus petite\n");
	*/
	/* ============ Memchr ============ */
	/*
	char	string_memchr[] = "ATzesteur";
	int		memchr_test = 'A';
	int		mem_nb = 1;
	
	printf("Voici le resulat de ft_memchr = %p\n", ft_memchr(string_memchr, memchr_test, mem_nb));

	// ============================================================= 

	printf("Voici le resulat de memchr = %p\n", memchr(string_memchr, memchr_test, mem_nb));
	*/
	/* ============ Memcpy ============ */
	/*
	printf("\n\n== Memcpy ==\n\n");

	char 	srmemcpy[] = "testss";
	char	destmemcpy[] = "test";
	int		memcpy_nb = 10;


	printf("Chaine de carractere avant ft_memcpy = %s\n", destmemcpy);
	ft_memcpy(destmemcpy, srmemcpy, memcpy_nb);
	printf("Chaine de carractere apres ft_memcpy = %s\n\n", destmemcpy);

	// ============================================================= 

	char 	memcpy_src[] = "testss";
	char	memcpy_dest[] = "test";

	printf("Chaine de carractere avant cpy = %s\n", memcpy_dest);
	memcpy(memcpy_dest, memcpy_src, memcpy_nb);
	printf("Chaine de carractere apres cpy = %s\n", memcpy_dest);
	*/
	/* ============ Memccpy ============ */
	/*
	printf("\n\n== Memccpy ==\n\n");

	char 	srmemccpy[51] = "Je teste actuellement memccpy, TOUSL Es Carractere";
	char	destmemccpy[11];
	int		char_ccpy = 'L';
	int		memccpy_nb = 40;


	printf("Chaine de carractere avant ft_memccpy = %s\n", destmemccpy);
	ft_memccpy(destmemccpy, srmemccpy, char_ccpy, memccpy_nb);
	printf("Chaine de carractere apres ft_memccpy = %s\n\n", destmemccpy);

	// ============================================================= 

	char	memccpy_dest[11];

	printf("Chaine de carractere avant ccpy = %s\n", memccpy_dest);
	memccpy(memccpy_dest, srmemccpy, char_ccpy, memccpy_nb);
	printf("Chaine de carractere apres ccpy = %s\n", memccpy_dest);
	*/

	/* ============ Memmove ============ */
	/*
	printf("\n\n== Memmove ==\n\n");

	char 	srmemmove[] = "Je test";
	char	destmemmove[8] = "";
	int		memmove_nb = 8;


	printf("Chaine de carractere avant ft_memmove = %s\n", destmemmove);
	ft_memmove(destmemmove, srmemmove, memmove_nb);
	printf("Chaine de carractere apres ft_memmove = %s\n\n", destmemmove);

	// ============================================================= 

	char	memmove_dest[8] = "J";

	printf("Chaine de carractere avant memmove = %s\n", memmove_dest);
	memmove(memmove_dest, srmemmove, memmove_nb);
	printf("Chaine de carractere apres memmove = %s\n", memmove_dest);
	*/

	/* ============ Bzero ============ */
	/*
	int	i = 0;
	int	n = 5;
	char	srcbzero[] = "Ma chaine de carractere";

	ft_putstr("Chaine de carractere avant ft_bzero = ");
	while (i < n)
		ft_putchar(srcbzero[i++]);
	ft_bzero(srcbzero, n);
	i = 0;
	ft_putstr("\nChaine de carractere apres ft_bzero = ");
	while (i < n)
		ft_putchar(srcbzero[i++]);

	// ============================================================= 
	char	bzerosrc[] = "Ma chaine de carractere";

	i = 0;
	ft_putstr("\nChaine de carractere avant bzero = ");
	while (i < n)
		ft_putchar(bzerosrc[i++]);
	ft_bzero(bzerosrc, n);
	ft_putstr("\nChaine de carractere apres bzero = ");
	i = 0;
	while (i < n)
		ft_putchar(bzerosrc[i++]);
	*/

	/* ============ Memset ============ */
	/*
	char	srcset[] = "String of memset";
	int		charset = 'S';
	size_t	size = 1;

	printf("Chaine de carractere avant ft_memset = %s\n", srcset);
	ft_memset(srcset, charset, size);
	printf("Chaine de carractere apres ft_memset = %s\n", srcset);
	// ============================================================= 
	char	setsrc[] = "String of memset";
	printf("Chaine de carractere avant memset = %s\n", setsrc);
	ft_memset(setsrc, charset, size);
	printf("Chaine de carractere apres memset = %s\n", setsrc);
	*/

	/* ============ Isascii ============ */ 
	/*
	int		ascii = 128;
	int		test = '0';
	int		test2 = '0';

	test = ft_isascii(ascii);
	printf("%d\n",test);
	// ============================================================= 
	test2 = isascii(ascii);
	printf("%d\n",test2);
	*/

	/* ============ Isprint ============ */
	/*
	int		print = 126;
	int		tprint = '0';
	int		tprint2 = '0';

	tprint = ft_isprint(print);
	printf("%d\n",tprint);
	// ============================================================= 
	tprint2 = isprint(print);
	printf("%d\n",tprint2);
	*/
	/* ============ Isascii ============ */ 
	/*
	int		ascii = 128;
	int		test = '0';
	int		test2 = '0';

	test = ft_isascii(ascii);
	printf("%d\n",test);
	// ============================================================= 
	test2 = isascii(ascii);
	printf("%d\n",test2);
	*/

	/* ============ Isdigit ============ */
	/*
	int		digit = 'a';
	int		tdigit = '0';
	int		tdigit2 = '0';

	tdigit = ft_isdigit(digit);
	printf("%d\n",tdigit);
	// ============================================================= 
	tdigit2 = isdigit(digit);
	printf("%d\n",tdigit2);
	*/

	/* ============ Isalpha ============ */
	/*
	int		alpha = 1;
	int		talpha = '0';
	int		talpha2 = '0';

	talpha = ft_isalpha(alpha);
	printf("%d\n",talpha);
	// ============================================================= 
	talpha2 = isalpha(alpha);
	printf("%d\n",talpha2);
	*/
	/* ============ Isalnum ============ */
	/*
	int		alnum = 'b';
	int		talnum = '0';
	int		talnum2 = '0';

	talnum = ft_isalnum(alnum);
	printf("%d\n",talnum);
	// ============================================================= 
	talnum2 = isalnum(alnum);
	printf("%d\n",talnum2);
	*/
	/* ============ Toupper ============ */
	/*
	int		upper = 'z';
	int		tupper = '0';
	int		tupper2 = '0';

	tupper = ft_toupper(upper);
	printf("Le ft_uppeur = %c\n",tupper);
	// ============================================================= 
	tupper2 = toupper(upper);
	printf("Le uppeur = %c\n",tupper2);
	*/
	/* ============ Tolower ============ */
	/*
	int		lower = 'Z';
	int		tlower = '0';
	int		tlower2 = '0';

	tlower = ft_tolower(lower);
	printf("Le ft_lower = %c\n",tlower);
	// ============================================================= 
	tlower2 = tolower(lower);
	printf("Le lower = %c\n",tlower2);
	*/
	/* ============ Strsub ============ */
	/*
	char test[] = "Salut";
	char *vide;
	int	t = 2;
	vide = ft_strsub(test, t, 8);
	printf("%s", vide);
	*/
	/* ============ Strsplit ============ */
	/*
	char **splided;
	splided = ft_strsplit("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');

	int slp = 0;
	while (splided[slp])
	{
		printf("Voici la chaine de la %der/eme carractere = %s\n", slp + 1, splided[slp]);
		slp++;
	}
	*/
	/* ============ Itoa ============ */
	/*
	char 	*str_of_itoa;
	int		nbr_of_itoa = -2147483648;

	str_of_itoa = 
	ft_itoa(nbr_of_itoa);
	printf("%s", str_of_itoa);
	*/
}