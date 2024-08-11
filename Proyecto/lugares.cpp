#include "lugares.h"
#include <sstream>
#include <algorithm>
#include <iostream> // Asegúrate de incluir este encabezado

std::string Lugar::obtenerInformacion() const {
    std::ostringstream ss;
    ss << "Codigo: " << codigo << ", Nombre Especie: " << nombreEspecie
       << ", Reserva Natural: " << reservaNatural << ", Region: " << region
       << ", Tipo: " << tipo << ", En Peligro: " << (enPeligro ? "Sí" : "No")
       << ", Descripcion: " << descripcionEspecie;
    return ss.str();
}

void inicializarLugares(std::vector<Lugar>& listaLugares) {
    Lugar lugar1 = {"001", "Copaifera langsdorffii", "Parque Nacional Yasuni", "Amazonia", "Flora", true, "conocido por su resina, que tiene propiedades antiinflamatorias y antimicrobianas."};
    Lugar lugar2 = {"002", "Scalesia", "Islas Galapagos", "Insular", "Flora", true, "Es un género de plantas endémicas de las Islas Galápagos, conocido por su diversidad de especies de árboles y arbustos."};
    Lugar lugar3 = {"003", "Polylepis", "Reserva Ecologica Cotacachi-Cayapas", "Sierra", "Flora", true, "es un género de árboles y arbustos nativos de los Andes en América del Sur. Estos árboles son conocidos por su capacidad para crecer en altitudes elevadas."};
    Lugar lugar4 = {"004", "Rhizophora mangle", "Manglares Churute", "Costa", "Flora", true, "es una especie de árbol tropical que crece en los ecosistemas de manglares a lo largo de las costas de América del Sur, Central y el Caribe. Se destaca por sus raíces aéreas en forma de zancos que le permiten adaptarse a las condiciones salinas y a la marea."};

    listaLugares.push_back(lugar1);
    listaLugares.push_back(lugar2);
    listaLugares.push_back(lugar3);
    listaLugares.push_back(lugar4);
}

bool buscarLugarPorCodigo(const Lugar& lugar, const std::string& codigo) {
    return lugar.codigo == codigo;
}

void crear(std::vector<Lugar>& listaLugares, const Lugar& nuevoLugar) {
    // Verifica si el lugar ya existe
    auto it = std::find_if(listaLugares.begin(), listaLugares.end(), [&nuevoLugar](const Lugar& lugar) {
        return buscarLugarPorCodigo(lugar, nuevoLugar.codigo);
    });

    if (it != listaLugares.end()) {
        std::cerr << "El lugar con el código " << nuevoLugar.codigo << " ya existe." << std::endl;
        return;
    }

    listaLugares.push_back(nuevoLugar);
}

void eliminar(std::vector<Lugar>& listaLugares, const std::string& codigo) {
    auto it = std::remove_if(listaLugares.begin(), listaLugares.end(), [&codigo](const Lugar& lugar) {
        return buscarLugarPorCodigo(lugar, codigo);
    });
    listaLugares.erase(it, listaLugares.end());
}

void actualizar(std::vector<Lugar>& listaLugares, const Lugar& lugarActualizado) {
    for (auto& lugar : listaLugares) {
        if (buscarLugarPorCodigo(lugar, lugarActualizado.codigo)) {
            lugar.nombreEspecie = lugarActualizado.nombreEspecie;
            lugar.reservaNatural = lugarActualizado.reservaNatural;
            lugar.region = lugarActualizado.region;
            lugar.tipo = lugarActualizado.tipo;
            lugar.enPeligro = lugarActualizado.enPeligro;
            lugar.descripcionEspecie = lugarActualizado.descripcionEspecie;
            break;
        }
    }
}
