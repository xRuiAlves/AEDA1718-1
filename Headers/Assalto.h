#ifndef ASSALTO_H_
#define ASSALTO_H_
#include <string>
#include "Acidente.h"

class Assalto : public Acidente {
private:
	const std::string tipoCasa;
	const bool haFeridos;
public:
	Assalto(const std::string &data, const std::string &local, unsigned int numOcorrencia, const std::string &tipoCasa, bool haFeridos);
	~Assalto();
	const std::string getTipoCasa() const;
	bool existeFeridos() const;
};

#endif /* ASSALTO_H_ */