#include "electric_guitar.hpp"

int main() {
  ElectricGuitar electricGuitar(GuitarMake("Epiphone", "Les Paul"), 6, "EADGBE");
  electricGuitar.play_string({6, 0});

  return 0;
}