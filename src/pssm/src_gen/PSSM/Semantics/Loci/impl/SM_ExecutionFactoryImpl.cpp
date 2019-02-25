#include "PSSM/Semantics/Loci/impl/SM_ExecutionFactoryImpl.hpp"

#ifdef NDEBUG
	#define DEBUG_MESSAGE(a) /**/
#else
	#define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

#include <cassert>
#include <iostream>
#include <sstream>


#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "PSSM/impl/PSSMPackageImpl.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "PSSM/PSSMFactory.hpp"
#include "PSSM/PSSMPackage.hpp"

#include <exception> // used in Persistence

#include "uml/Element.hpp"

#include "fUML/SemanticVisitor.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace PSSM::Semantics::Loci;

//*********************************
// Constructor / Destructor
//*********************************
SM_ExecutionFactoryImpl::SM_ExecutionFactoryImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References

	//Init references
}

SM_ExecutionFactoryImpl::~SM_ExecutionFactoryImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SM_ExecutionFactory "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




SM_ExecutionFactoryImpl::SM_ExecutionFactoryImpl(const SM_ExecutionFactoryImpl & obj):SM_ExecutionFactoryImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SM_ExecutionFactory "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  SM_ExecutionFactoryImpl::copy() const
{
	std::shared_ptr<SM_ExecutionFactoryImpl> element(new SM_ExecutionFactoryImpl(*this));
	element->setThisSM_ExecutionFactoryPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> SM_ExecutionFactoryImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getSM_ExecutionFactory_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<fUML::SemanticVisitor> SM_ExecutionFactoryImpl::instantiateVisitor(std::shared_ptr<uml::Element>  element)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


std::shared_ptr<SM_ExecutionFactory> SM_ExecutionFactoryImpl::getThisSM_ExecutionFactoryPtr() const
{
	return m_thisSM_ExecutionFactoryPtr.lock();
}
void SM_ExecutionFactoryImpl::setThisSM_ExecutionFactoryPtr(std::weak_ptr<SM_ExecutionFactory> thisSM_ExecutionFactoryPtr)
{
	m_thisSM_ExecutionFactoryPtr = thisSM_ExecutionFactoryPtr;
}
std::shared_ptr<ecore::EObject> SM_ExecutionFactoryImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any SM_ExecutionFactoryImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool SM_ExecutionFactoryImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool SM_ExecutionFactoryImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void SM_ExecutionFactoryImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get PSSMFactory
	std::shared_ptr<PSSM::PSSMFactory> modelFactory = PSSM::PSSMFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void SM_ExecutionFactoryImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void SM_ExecutionFactoryImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void SM_ExecutionFactoryImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void SM_ExecutionFactoryImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void SM_ExecutionFactoryImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

