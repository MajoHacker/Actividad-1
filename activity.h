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
// @Complexity	O(1) debido a que en cada iteración se realizan
//		operaciones constantes.
// =================================================================
unsigned int sumaIterativa(unsigned int n) {
	int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma = suma + i;
    }
    return suma;
}

// =================================================================
// sumaRecursiva. Calculate the sum from 1 to n with an recursive
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(n) ya que se tiene una sola llamada recursiva en 
//  		ejecución, y su parámetro de control se disminuye
//		en un valor constante.
// =================================================================
unsigned int sumaRecursiva(unsigned int n) {
	if (n == 1) {
        return 1;
    } 
	else {
        return n + sumaRecursiva(n - 1);
    }
}

// =================================================================
// sumaDirecta. Calculate the sum from 1 to n with a mathematical
// method.
//
// @param n	The maximum limit of the sum.
// @return	The result of the addition from 1 to n.
// @Complexity	O(1) lo que significa que el tiempo de ejecución
//		es constante, y no importa el valor asignado a "n",
//		ya que las operaciones realizadas son las mismas en
//		todos los casos.
// =================================================================
unsigned int sumaDirecta(unsigned int n) {
	return (n * n) / 2 + n / 2;
}

#endif /* ACTIVITY_H */
