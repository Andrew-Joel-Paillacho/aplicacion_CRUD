#ifndef LUGARES_H
#define LUGARES_H

#include <string>
#include <vector>

struct Lugar {
    std::string codigo;
    std::string nombreEspecie;
    std::string reservaNatural;
    std::string region;
    std::string tipo;
    bool enPeligro;
    std::string descripcionEspecie;

    std::string obtenerInformacion() const;
};

void inicializarLugares(std::vector<Lugar>& listaLugares);
bool buscarLugarPorCodigo(const Lugar& lugar, const std::string& codigo);
void crear(std::vector<Lugar>& listaLugares, const Lugar& nuevoLugar);
void eliminar(std::vector<Lugar>& listaLugares, const std::string& codigo);
void actualizar(std::vector<Lugar>& listaLugares, const Lugar& lugarActualizado);

#endif // LUGARES_H
