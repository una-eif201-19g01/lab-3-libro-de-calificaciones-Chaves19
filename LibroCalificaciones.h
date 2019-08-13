/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
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


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>

class LibroCalificaciones {

private:
    int ESTUDIANTES = 10;
    int EXAMENES = 3;
    std::string nombreCurso;
    int calificaciones(int, int);
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    double obtenerPromedio(const int, const int, int);
public:
    LibroCalificaciones();
    LibroCalificaciones(const std::string, int);
    std::string obtenerReporteNotas();
    std::string obtenerReporteNotasMaxMin();
    std::string getNombreCurso();
    void setNombreCurso();
    

};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
