#pragma once

#define	MAXLEN	2000	/* maximum snake length */
#define	CHEAD	'o'
#define	CBODY	'o'
#define	CFRUIT	'#'

typedef struct fruit {
	int x, y, color;
} FRUIT;

typedef struct cell {
	int x, y;
} CELL;

typedef enum dir { 
	up, down, left, right
} DIR;