#include "spaceshipfactory.h"

// If spaceships.h would be not included, the SpaceShip's destructor would be unknown.
// This usually leads to a warning
#include "spaceships.h"

void SpaceShipFactory::registerSpaceShipType(const std::string& spaceShipTypeName, const CreateSpaceShipFunc& createSpaceShipFunc)
{
	std::unordered_map<std::string, CreateSpaceShipFunc>::const_iterator got = m_createSpaceShipFuncRegister.find(spaceShipTypeName);
	if (got == m_createSpaceShipFuncRegister.end())
		std::cout << "Spaceship is already registered" << std::endl;
	else
		m_createSpaceShipFuncRegister.insert(std::pair<std::string, CreateSpaceShipFunc>(spaceShipTypeName,createSpaceShipFunc));

}

std::shared_ptr<SpaceShip> SpaceShipFactory::buildSpaceShip(const std::string& spaceShipTypeName, const std::string& parameter)
{
	std::unordered_map<std::string, CreateSpaceShipFunc>::const_iterator got = m_createSpaceShipFuncRegister.find(spaceShipTypeName);
	
	std::shared_ptr<SpaceShip> pointer;

	if (got == m_createSpaceShipFuncRegister.end()) {
		std::cout << "Not Registered Spaceshiptype" << std::endl;
	return nullptr;
	}
	//got->first();
	return got->second(parameter);
}
