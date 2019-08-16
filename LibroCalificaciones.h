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

const int ESTUDIANTES = 10;
const int EXAMENES = 3;
class LibroCalificaciones {

private:
    std::string nombreCurso;
    int calificaciones[ESTUDIANTES][EXAMENES];
    double obtenerPromedio(const int, const int, int);
public:
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    LibroCalificaciones();
    LibroCalificaciones(const std::string, int);
    std::string obtenerReporteNotas();
    std::string obtenerReporteNotasMaxMin();
    std::string getNombreCurso();
    void setNombreCurso();
    

};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
