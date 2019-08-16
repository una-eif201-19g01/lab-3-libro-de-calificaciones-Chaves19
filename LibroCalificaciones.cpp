/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-16
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
    int notaMin = 0;
    for (int i = 0; i < ESTUDIANTES; i++) {
        for (int j = 0; j < EXAMENES; j++) {
            if (notaMin <= calificaciones[i][j]) {
                notaMin = calificaciones[i][j];
            }
        }
    }
    return notaMin;
}

int LibroCalificaciones::obtenerNotaMaxima() {
    int notaMax = 100;
    for (int i = 0; i < ESTUDIANTES; i++) {
        for (int j = 0; j < EXAMENES; j++) {
            if (notaMax >= calificaciones[i][j]) {
                notaMax = calificaciones[i][j];
            }
        }
    }
    return notaMax;
}

double LibroCalificaciones::obtenerPromedio(const int, const int, int) {

}

LibroCalificaciones::LibroCalificaciones() {
    for (int i = 0; i < ESTUDIANTES; i++) {
        for (int j = 0; j < EXAMENES; j++) {
            calificaciones[i][j] = 0;
        }
    }
}

LibroCalificaciones::LibroCalificaciones(const std::string &NombreCurso, int[][]) {
    for (int i = 0; i < ESTUDIANTES; i++) {
        for (int j = 0; j < EXAMENES; j++) {
            calificaciones[i][j] = 1;
        }
    }
}
}

std::string LibroCalificaciones::obtenerReporteNotas() {

}

std::string LibroCalificaciones::obtenerReporteNotasMaxMin() {

}

std::string LibroCalificaciones::getNombreCurso() {
    return nombreCurso();
}

void LibroCalificaciones::setNombreCurso(std::string nC) {
    nC = nombreCurso;
}



