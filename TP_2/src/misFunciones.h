#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

int getInt(int*, char [], char [], int , int);

int getFloat(float*, char[], char[], int, int);

int getChar(char*, char condition[], char error[], int rangeMinimum, int rangeMaximum);

int pedirString(char [], char [], char [], int , int );

int getString(char* msg, char* msgError, int min, int max, int* reintentos, char* resultado);

int my_getName(char* msg,char* msgError,int min,int max,int reintentos,char* resultado);
int my_getLastName(char* msg, char* msgError, int min, int max, int reintentos, char* resultado);
int isValidName(char* stringRecibido);

int my_getUnsignedInt(  char* msg,char* msgError,int minSize,int maxSize,int min,int max,int reintentos,int* input);
int isValidNumber(char* stringRecibido);

int my_getSignedInt(char* msg, char* msgError, int minSize, int maxSize, int min, int max, int reintentos, int* input);
int isValidSignedNumber(char* stringRecibido);

int my_getFloat(char* msg, char* msgError, int minSize, int maxSize, int min, int max, int reintentos, float* input);
int isValidFloatNumber(char* stringRecibido);

int my_getTelefono(char* msg, char* msgError, int minSize, int maxSize, int min, int max, int reintentos, char* input);
int isValidTelephone(char* stringRecibido);

int my_getDNI(char* msg, char* msgError, int minSize, int maxSize, int reintentos, char* input);
int isValidDNI(char* stringRecibido);

int my_getCUIT(char* msg, char* msgError, int reintentos, char* input);
int isValidCUIT(char* stringRecibido);

int my_getEmail(char* msg, char* msgError, int minSize, int maxSize, int reintentos, char* input);
int isValidEmail(char* stringRecibido);

int my_getTexto(char* msg, char* msgError, int minSize, int maxSize, int reintentos, char* input);
int isValidTexto(char* stringRecibido);

int my_getAlfanumerico(char* msg, char* msgError, int minSize, int maxSize, int reintentos, char* input);
int isValidAlphanumeric(char* stringRecibido);

int my_getChar(char* msg, char* msgError, int min, int max, int reintentos, char* resultado);
int isValidChar(char charRecibido);

#endif // FUNCTIONS_H_INCLUDED
