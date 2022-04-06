#include <iostream>
#include <fstream>
#include "../library/proses.h"

int main() {
  Proses proses;
  proses.getData();
  proses.toFile();
  proses.cetak();
  return 0;
}