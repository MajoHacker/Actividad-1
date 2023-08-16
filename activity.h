// =================================================================
//
// File: activity.h
// Author: María José Gaytán Gil A01706616
// Date: 16/08/2023
//
// =================================================================
#ifndef ACTIVITY_H
#define ACTIVITY_H

// =================================================================
// sumaIterativa. Calculate the sum from 1 to n with an iterative
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }
    return suma;
	return 0;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if (n == 1) {
        return 1;
    } 
	else {
        return n + sumaRecursiva(n - 1);
    }
	return 0;
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	??
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	return (n * (n + 1)) / 2;
	return 0;
}

#endif /* ACTIVITY_H */
