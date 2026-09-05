/******************************************************************************

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstddef>

template <typename T>
class Arreglo {
public:
    explicit Arreglo(std::size_t n)
        : n_(n), datos_(new T[n]()) {}

    Arreglo(const Arreglo& o)
        : n_(o.n_), datos_(new T[o.n_]) {
        for (std::size_t i = 0; i < n_; ++i)
            datos_[i] = o.datos_[i];
    }

    ~Arreglo() {
        delete[] datos_;
    }

    T& operator[](std::size_t i) {
        return datos_[i];
    }

    std::size_t tam() const {
        return n_;
    }

private:
    std::size_t n_;
    T* datos_;
};

int main() {
    Arreglo<double> numeros(3);

    numeros[0] = 1.5;
    numeros[1] = 2.5;
    numeros[2] = 3.5;

    std::cout << "Arreglo<double>:" << std::endl;

    for (std::size_t i = 0; i < numeros.tam(); ++i) {
        std::cout << numeros[i] << std::endl;
    }

    Arreglo<double> copia(numeros);
    copia[0] = 99.9;

    std::cout << "\nOriginal: " << numeros[0] << std::endl;
    std::cout << "Copia: " << copia[0] << std::endl;

    Arreglo<std::string> palabras(2);

    palabras[0] = "Hola";
    palabras[1] = "Mundo";

    std::cout << "\nArreglo<string>:" << std::endl;

    for (std::size_t i = 0; i < palabras.tam(); ++i) {
        std::cout << palabras[i] << std::endl;
    }

    return 0;
}



