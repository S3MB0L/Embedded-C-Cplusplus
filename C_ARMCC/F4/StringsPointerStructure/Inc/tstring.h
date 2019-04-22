
#ifndef __TSTRING_H
#define __TSTRING_H
#ifdef perf_analisys 
	#define p_enable
#endif
#ifdef __cplusplus
extern "C" {
#endif

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
	
	
	
	
#ifdef __cplusplus
}
#endif

#endif 

