#ifndef T_COMM_H
#define T_COMM_H

#include "stm32f4xx_hal.h"

/*

	#define UART &huart2
	#define tprint_tout 0xFFFFFF
	
	#define tprint(x) HAL_UART_Transmit(UART,(uint8_t *)x,strlen(x),tprint_tout);
	#define tscan(x)  HAL_UART_Receive(UART,(uint8_t *)x,strlen(x),tprint_tout);
	
	#define tik() int __TEMP; __TEMP = HAL_GetTick();
	#define tok() int __handle_time = HAL_GetTick() - __TEMP;
	
	
	
	int t_strlenw(char *str);
	int t_strlenf(char *str);
	char *t_strchrw(char *str, int ch);
	char *t_strcpyf(char *dest, char *source);
	char *t_strcpyw(char *dest, char *source);
	char *t_strupr(char *str);
	char *t_strlwr(char *str);
	int t_strcmpw(char *s1, char *s2);
	int t_strcmpf(char *s1, char *s2);
	char *t_strcatw(char *s1, char *s2);
	char *t_strrevw(char *str);
	char *t_strsetf(char *str, int ch);
	char *t_strncpyf(char *dest, char *source, int n);
	int t_strncmpf(char *s1, char *s2, int n);
	char *t_strncat(char *s1, char *s2, int n);
*/
#define STRING_SIZE 20
class t_uart
{
	
	public:
		t_uart(uint8_t *ptrTxBuff);
		~t_uart();
		int uartListener();
		int addToBuffer();
		int cleanBuffer();
		int printBuff();
		int sendString();
		int readString();
		int searchString();
	
		int strlen(char *str);
		char *strchr(char *str, int ch);
		char *strcpy(char *dest, char *source);
		char *strupr(char *str);
		char *strlwr(char *str);
		int strcmp(char *s1, char *s2);
		char *strcat(char *s1, char *s2);
		char *strrev(char *str);
		char *strset(char *str, int ch);
		char *strncpy(char *dest, char *source, int n);
		int strncmp(char *s1, char *s2, int n);
		char *strncat(char *s1, char *s2, int n);
	
		int tprint(char *pbuff);
	
		
	private:
		uint8_t buffString[STRING_SIZE];
		uint8_t *ptrByteBuff;
		int counter;
};

#endif
