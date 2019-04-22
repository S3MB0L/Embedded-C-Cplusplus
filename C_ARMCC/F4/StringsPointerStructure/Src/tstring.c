#include "tstring.h"
#include "stdio.h"

//passed the test
int t_strlenw(char *str)
{
	int n=0;
	while(*str != '\0')
	{
		++n;
		++str;
	}
	return n;
}
//passed the test
int t_strlenf(char *str)
{
	int n;
	for(n = 0; str[n] != '\0';++n);
	
	return n;
}
//Passed test
char *t_strchrw(char *str, int ch)
{
	while(*str != '\0')
	{
		if(*str == ch)
			return str;
		++str;
	}
	if(ch == '\0')
		return str;
	return 0;
}
//not working
char *t_strcpyf(char *dest, char *source)
{
	int k;
	for(k=0; dest[k] != '\0'; ++k)
	{
		dest[k] = source[k];
	}
	
	return dest;
}
//passed
char *t_strcpyw(char *dest, char *source)
{
	char *temp = dest;
	while((*dest++ = *source++) != '\0');
	
	return temp;
	
}
//passed
char *t_strupr(char *str)
{
	int k;
	for(k = 0; str[k] != '\0';++k)
	{
		if(str[k] >= 'a' && str[k] <='z')
			str[k] = str[k] - 'a' +'A';
	}
	return str;	
}
//passed
char *t_strlwr(char *str)
{
	int k;
	for(k = 0; str[k] != '\0'; ++k)
	{
		if(str[k] >= 'A' && str[k] <= 'Z')
			str[k] = str[k] -'A' + 'a';
	}
	return str;
}
//passed
int t_strcmpw(char *s1, char *s2)
{
	while(*s1 == *s2)
	{
		if(*s1 == '\0')
			return 0;
		++s1;
		++s2;
		
	}
	return *s1-*s2;
}
//passed
int t_strcmpf(char *s1, char *s2)
{
	int k;
	for(k = 0; s1[k] == s2[k]; ++k)
	{
		if(s1[k] == '\0')
			return 0;
	}
	return s1[k]-s2[k];
}
//Passed
char *t_strcatw(char *s1, char *s2)
{
	char *temp = s1;
	while(*s1 != '\0')
		++s1;
	while((*s1++ = *s2++) != '\0');
	
	return temp;
}

char *t_strrevw(char *str)
{
	int n,k,temp;
	n = t_strlenw(str);
	for(k = 0; k < n / 2; k++)
	{
		temp = str[k];
		str[k] = str[n-k-1];
		str[n-k-1] = temp;
	}
	return str;
}
char *t_strsetf(char *str, int ch)
{
	int k;
	
	for(k = 0; str[k] != '\0'; ++k)
		str[k] = ch;
	
	return str;
}
char *t_strncpyf(char *dest, char *source, int n)
{
	
	int k;
	for(k = 0; k < n && source[k] != '\0'; ++k)
	{
		dest[k] = source[k];
	}
	if(n > k)
		dest[k] = '\0';
	
	return dest;
}
int t_strncmpf(char *s1, char *s2, int n)
{
	
	int k;
	for(k = 0; k < n - 1 &&  s1[k] == s2[k]; ++k)
	{
		if(s1[k] == '\0')
			return 0;
	}
	return s1[k] - s2[k];
}
char *t_strncat(char *s1, char *s2, int n)
{
	int k;
	char *temp=s1;
	
	while(*s1 != '\0')
		++s1;
	for(k = 0; k < n && s2[k] != '\0'; ++k)
	{
		*s1++ = *s2++;
	}
	*s1 = '\0';
	
	return temp;
}
