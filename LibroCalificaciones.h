/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
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


#ifndef CALIFICACIONES_LIBROCALIFICACIONES_H
#define CALIFICACIONES_LIBROCALIFICACIONES_H
#include <string>

const int ESTUDIANTES = 10;
const int EXAMENES = 3;

class LibroCalificaciones{

private:
    std::string nombreCurso;
    int calificaciones[ESTUDIANTES][EXAMENES];
    double obtenerPromedio(int);
public:
    int obtenerNotaMinima();
    int obtenerNotaMaxima();
    LibroCalificaciones();
    LibroCalificaciones(std::string, int[][EXAMENES]);
    std::string obtenerReporteNotas();
    std::string obtenerReporteNotasMaxMin();
    std::string getNombreCurso();
    void setNombreCurso(std:: string nC);
    

};


#endif //CALIFICACIONES_LIBROCALIFICACIONES_H
