/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Reporte de calificaciones
 *
 *        Created:  2019-08-12
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include "LibroCalificaciones.h"
#include <iomanip>
#include <iostream>


    int calificaciones(int, int);
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    double obtenerPromedio(const int, const int, int);

    LibroCalificaciones::LibroCalificaciones(){
        
    }
    LibroCalificaciones::LibroCalificaciones(const std::string &NombreCurso , int[][EXAMENES]){
        
    }
    std::string LibroCalificaciones::obtenerReporteNotas(){
        
    }
    std::string LibroCalificaciones::obtenerReporteNotasMaxMin(){
        
    }
    std::string LibroCalificaciones::getNombreCurso(){
        return nombreCurso();
    }
    void LibroCalificaciones::setNombreCurso(std::string nC){
        nC = nombreCurso;
    }



