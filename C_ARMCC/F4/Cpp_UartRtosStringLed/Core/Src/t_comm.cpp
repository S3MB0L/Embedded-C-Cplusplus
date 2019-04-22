#include "t_comm.h"

t_uart::t_uart(uint8_t *ptrTxBuff)
{
	counter = 0;
	ptrByteBuff = ptrTxBuff;
}

t_uart::~t_uart()
{
	
}
int uartListener()
{
	buffString[counter] = *ptrByteBuff;
	
	if(counter < 20)
	{
		counter++;
	}
	else
	{
		cleanBuffer();
		counter = 0;
	}
	
	return 0;
	
}

int cleanBuffer()
{
	for(int i = 0;i < STRING_SIZE; i++)
	{
		buffString[i] = 0;
	}
	
	buffString[STRING_SIZE] = '\0';
	
}

int 	 t_uart::strlen(char *str)
{
	
}
char * t_uart::strchr(char *str, int ch)
{
	
}
char * t_uart::strcpy(char *dest, char *source)
{
	
}
char * t_uart::strupr(char *str)
{
	
}
char * t_uart::strlwr(char *str)
{
	
}
int 	 t_uart::strcmp(char *s1, char *s2)
{
	
}
char * t_uart::strcat(char *s1, char *s2)
{
	
}
char * t_uart::strrev(char *str)
{
	
}
char * t_uart::strset(char *str, int ch)
{
	
}
char * t_uart::strncpy(char *dest, char *source, int n)
{
	
}
int 	 t_uart::strncmp(char *s1, char *s2, int n)
{
	
}
char * t_uart::strncat(char *s1, char *s2, int n)
{
	
}
int 	 t_uart::tprint(char *pbuff)
{
	
}
