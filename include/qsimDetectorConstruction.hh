#ifndef qsimDetectorConstruction_h
#define qsimDetectorConstruction_h 1

#include "G4FieldManager.hh"
#include "globals.hh"
#include "G4VUserDetectorConstruction.hh"
#include "qsimGlobalField.hh"
#include <vector>

class G4Tubs;
class G4LogicalVolume;
class G4VPhysicalVolume;
class G4VSensitiveDetector;

class qsimIO;

class qsimDetectorConstruction : public G4VUserDetectorConstruction
{
	public:
		qsimDetectorConstruction();
		~qsimDetectorConstruction();

	public:
		G4VPhysicalVolume* Construct();

		void CreateGlobalMagneticField();

		qsimGlobalField* GetGlobalField(){ return fGlobalField; }
		
		void SetIO( qsimIO *io ){ fIO = io; }

	private:
		G4double meas_loc_x,meas_loc_y,meas_loc_z;
		
		G4FieldManager*		fGlobalFieldManager;
		qsimGlobalField* 	fGlobalField;

		qsimIO *fIO;
};


#endif /*qsimDetectorConstruction_h*/
