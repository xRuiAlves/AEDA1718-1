#include "Inem.h"

Inem::Inem(const std::string &local, unsigned int numSocorristas, unsigned int numVeiculos, const std::string &tipoVeiculo)
	: Posto(local,numSocorristas,numVeiculos) , tipoVeiculo(tipoVeiculo) {}


Inem::~Inem() {
	// TODO Auto-generated destructor stub
}
