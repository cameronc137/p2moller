#ifndef qsimGlobalField_h 
#define qsimGlobalField_h 1

/*!
   \class qsimGlobalField
   \brief Global field interface
*/

#include "G4MagneticField.hh"
#include "G4UImanager.hh"

class qsimMagneticField;

class qsimGlobalField : public G4MagneticField {
    public: 
	 qsimGlobalField();
	~qsimGlobalField();

	void AddNewField( G4String file );
	void SetFieldScale( G4String file, G4double scale  );
	void SetMagnetCurrent( G4String file, G4double scale  );

	void GetFieldValue( const G4double[], G4double *) const;

    private:
	std::vector<qsimMagneticField *> fFields;

	qsimMagneticField *GetFieldByName( G4String file );

};


#endif//qsimGlobablField_h
