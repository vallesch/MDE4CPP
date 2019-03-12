#include "types/impl/TypesPackageImpl.hpp"

// metametamodel factory
#include "ecore/EcoreFactory.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
//metametamodel classes
#include "ecore/EAnnotation.hpp"
#include "ecore/EDataType.hpp"
#include "ecore/EStringToStringMapEntry.hpp"

//depending model packages

using namespace types;

void TypesPackageImpl::createPackageContents(std::shared_ptr<ecore::EPackage> package)
{
	if (isCreated) 
	{
		return;
	}
	isCreated = true;

	std::shared_ptr<ecore::EcoreFactory> factory = ecore::EcoreFactory::eInstance();


	createPackageEDataTypes(package, factory);
}


void TypesPackageImpl::createPackageEDataTypes(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_boolean_EDataType = factory->createEDataType_in_EPackage(package, BOOLEAN_EDATATYPE);
	m_integer_EDataType = factory->createEDataType_in_EPackage(package, INTEGER_EDATATYPE);
	m_real_EDataType = factory->createEDataType_in_EPackage(package, REAL_EDATATYPE);
	m_string_EDataType = factory->createEDataType_in_EPackage(package, STRING_EDATATYPE);
	m_unlimitedNatural_EDataType = factory->createEDataType_in_EPackage(package, UNLIMITEDNATURAL_EDATATYPE);
	
}
