#include "PSSM/Semantics/StructuredClassifiers/impl/SM_RedefinitionBasedDispatchStrategyImpl.hpp"

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

#include "uml/Behavior.hpp"

#include "fUML/Execution.hpp"

#include "fUML/Object.hpp"

#include "uml/Operation.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace PSSM::Semantics::StructuredClassifiers;

//*********************************
// Constructor / Destructor
//*********************************
SM_RedefinitionBasedDispatchStrategyImpl::SM_RedefinitionBasedDispatchStrategyImpl()
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

SM_RedefinitionBasedDispatchStrategyImpl::~SM_RedefinitionBasedDispatchStrategyImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SM_RedefinitionBasedDispatchStrategy "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




SM_RedefinitionBasedDispatchStrategyImpl::SM_RedefinitionBasedDispatchStrategyImpl(const SM_RedefinitionBasedDispatchStrategyImpl & obj):SM_RedefinitionBasedDispatchStrategyImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SM_RedefinitionBasedDispatchStrategy "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  SM_RedefinitionBasedDispatchStrategyImpl::copy() const
{
	std::shared_ptr<SM_RedefinitionBasedDispatchStrategyImpl> element(new SM_RedefinitionBasedDispatchStrategyImpl(*this));
	element->setThisSM_RedefinitionBasedDispatchStrategyPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> SM_RedefinitionBasedDispatchStrategyImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getSM_RedefinitionBasedDispatchStrategy_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<fUML::Execution> SM_RedefinitionBasedDispatchStrategyImpl::dispatch(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<uml::Behavior> SM_RedefinitionBasedDispatchStrategyImpl::getMethod(std::shared_ptr<fUML::Object>  object,std::shared_ptr<uml::Operation>  operation)
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


std::shared_ptr<SM_RedefinitionBasedDispatchStrategy> SM_RedefinitionBasedDispatchStrategyImpl::getThisSM_RedefinitionBasedDispatchStrategyPtr() const
{
	return m_thisSM_RedefinitionBasedDispatchStrategyPtr.lock();
}
void SM_RedefinitionBasedDispatchStrategyImpl::setThisSM_RedefinitionBasedDispatchStrategyPtr(std::weak_ptr<SM_RedefinitionBasedDispatchStrategy> thisSM_RedefinitionBasedDispatchStrategyPtr)
{
	m_thisSM_RedefinitionBasedDispatchStrategyPtr = thisSM_RedefinitionBasedDispatchStrategyPtr;
}
std::shared_ptr<ecore::EObject> SM_RedefinitionBasedDispatchStrategyImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any SM_RedefinitionBasedDispatchStrategyImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool SM_RedefinitionBasedDispatchStrategyImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool SM_RedefinitionBasedDispatchStrategyImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void SM_RedefinitionBasedDispatchStrategyImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void SM_RedefinitionBasedDispatchStrategyImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void SM_RedefinitionBasedDispatchStrategyImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void SM_RedefinitionBasedDispatchStrategyImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void SM_RedefinitionBasedDispatchStrategyImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void SM_RedefinitionBasedDispatchStrategyImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

