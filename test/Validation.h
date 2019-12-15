#pragma once
#ifndef VALIDATION_H
#define VALIDATION_H

//--------------------------------------------------- Interfaces utilis�es
#include <vector>
#include <string>

using namespace std;
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <DataReader>
//
//
//------------------------------------------------------------------------

class Validation
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste de param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//

	Validation();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Validation();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

	void checkImplicants(vector<string> ddt, vector<string> implicants, char unknownBitValue);
	// Mode d'emploi :
	//
	// Contrat :
	//

private:

	//----------------------------------------------------- M�thodes priv�es
	bool checkTupleToImplicant(string tuple, string implicant, char unknownBit);
	// Mode d'emploi :
	//
	// Contrat :
	//
};

#endif