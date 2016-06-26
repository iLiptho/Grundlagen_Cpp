#include "spaceshipfactory.h"
#include "spaceships.h"
#include "fleet.h"
#include "spaceshipfactory.cpp"



int main()
{
	// Register SpaceShips by using the SpaceShipFactory::getInstance().registerSpaceShipType with lambda functions.
	// TODO: Register TieFighter with SpaceShipFactory::getInstance().registerSpaceShipType
	// The string parameter contains the pilot
	SpaceShipFactory::registerSpaceShipType("TieFighter", [](std::string pilot) { return std::shared_ptr});


	// The string parameter has to be interpreted as a float, determining its buildProgress
	// TODO: Register DeathStar
	SpaceShipFactory::registerSpaceShipType("Deathstar", [](float progress) { return std::shared_ptr});

	
	// TODO: Register Destroyer
	// The string parameter has to be interpreted as an int, determining the number of lasers
	// Note that the appropriate parameterized instance of the "Destroyer"-class should be created.
	SpaceShipFactory::registerSpaceShipType("Destroyer", [](int laser) { return std::shared_ptr});
	
		
	// TODO: Register LargeDestroyer
	// The string parameter has to be interpreted as an int, determining the number of lasers.
	// Note that the appropriate parameterized instance of the "Destroyer"-class should be created.
	SpaceShipFactory::registerSpaceShipType("LargeDestroyer", [](int laser) { return std::shared_ptr});

	// Loads fleet from file
	Fleet imperialFleet("imperialships.txt");
}