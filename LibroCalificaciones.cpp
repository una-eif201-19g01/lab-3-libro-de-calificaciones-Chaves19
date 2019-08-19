/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-19
 *
 *         Author:  Alonso Chaves achaqui@yahoo.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iomanip>
#include <iostream>
#include "LibroCalificaciones.h"

int LibroCalificaciones::obtenerNotaMinima() {
    int notaMin = 100;
    for (int columnas = 0; columnas < ESTUDIANTES; columnas++) {
        for (int filas = 0; filas < EXAMENES; filas++) {
            if (notaMin >= calificaciones[columnas][filas]) {
                notaMin = calificaciones[columnas][filas];
            }
        }
    }
    return notaMin;
}

int LibroCalificaciones::obtenerNotaMaxima() {
    int notaMax = 100;
    for (int columnas = 0; columnas < ESTUDIANTES; columnas++) {
		for(int filas = 0; filas < EXAMENES; filas++){ 
            if (notaMax <= calificaciones[columnas][filas]) {
                notaMax = calificaciones[columnas][filas];
            }
        }
    }
    return notaMax;
}

double LibroCalificaciones::obtenerPromedio(int columnas) {
	float prom = 0;
	for(int filas = 0; filas < EXAMENES; filas++){
		prom = prom + calificaciones[columnas][filas];
	}
	return (prom / EXAMENES);
}

LibroCalificaciones::LibroCalificaciones() {
    for (int columnas = 0; columnas < ESTUDIANTES; columnas++) {
        for (int filas = 0; filas < EXAMENES; filas++) {
            calificaciones[columnas][filas] = 0;
        }
    }
}

LibroCalificaciones::LibroCalificaciones(std::string NombreCurso, int arreglo[][EXAMENES]) {
    for (int columnas = 0; columnas < ESTUDIANTES; columnas++) {
        for (int filas = 0; filas < EXAMENES; filas++) {
            calificaciones[columnas][filas] = arreglo[columnas][filas];
        }
    }
}


std::string LibroCalificaciones::obtenerReporteNotas() {
	std::string reporte = "\nLas siguientes son las notas del curso[Curso Progra I]: \n\t\t\t\tExamen 1\tExamen 2\tExamen 3\tPromedio\n";
	for (int columnas = 0; columnas < ESTUDIANTES; columnas++) {
		reporte = reporte + "Estudiante [" + std::to_string(columnas + 1) + "]\t\t\t" + std::to_string(calificaciones[columnas][0]) + " \t\t" + std::to_string(calificaciones[columnas][1]) + "\t\t" + std::to_string(calificaciones[columnas][2]) + "\t\t" + std::to_string(obtenerPromedio(columnas)) + "\n";
	
	}
	return reporte;
}

std::string LibroCalificaciones::obtenerReporteNotasMaxMin() {
	std::string maxMin = "\nLa nota minima es: [ "+std::to_string(obtenerNotaMinima())+" ]\nLa nota maxima es: [ "+std::to_string(obtenerNotaMaxima())+" ]\n";
	return maxMin;
}

std::string LibroCalificaciones::getNombreCurso() {
    return nombreCurso;
}

void LibroCalificaciones::setNombreCurso(std::string nC) {
    nC = nombreCurso;
}



