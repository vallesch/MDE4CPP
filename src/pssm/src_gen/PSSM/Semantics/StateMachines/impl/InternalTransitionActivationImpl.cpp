#include "PSSM/Semantics/StateMachines/impl/InternalTransitionActivationImpl.hpp"

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

#include "abstractDataTypes/Bag.hpp"

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

#include "fUML/EventOccurrence.hpp"

#include "uml/NamedElement.hpp"

#include "PSSM/Semantics/StateMachines/RegionActivation.hpp"

#include "fUML/SemanticVisitor.hpp"

#include "PSSM/Semantics/StateMachines/TransitionActivation.hpp"

#include "PSSM/Semantics/StateMachines/VertexActivation.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace PSSM::Semantics::StateMachines;

//*********************************
// Constructor / Destructor
//*********************************
InternalTransitionActivationImpl::InternalTransitionActivationImpl()
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

InternalTransitionActivationImpl::~InternalTransitionActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete InternalTransitionActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




InternalTransitionActivationImpl::InternalTransitionActivationImpl(const InternalTransitionActivationImpl & obj):InternalTransitionActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy InternalTransitionActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_analyticalStatus = obj.getAnalyticalStatus();
	m_lastPropagation = obj.getLastPropagation();
	m_status = obj.getStatus();

	//copy references with no containment (soft copy)
	
	m_lastTriggeringEventOccurrence  = obj.getLastTriggeringEventOccurrence();

	m_leastCommonAncestor  = obj.getLeastCommonAncestor();

	m_node  = obj.getNode();

	m_parent  = obj.getParent();

	m_sourceVertexActivation  = obj.getSourceVertexActivation();

	m_targetVertexActivation  = obj.getTargetVertexActivation();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  InternalTransitionActivationImpl::copy() const
{
	std::shared_ptr<InternalTransitionActivationImpl> element(new InternalTransitionActivationImpl(*this));
	element->setThisInternalTransitionActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> InternalTransitionActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getInternalTransitionActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


std::shared_ptr<InternalTransitionActivation> InternalTransitionActivationImpl::getThisInternalTransitionActivationPtr() const
{
	return m_thisInternalTransitionActivationPtr.lock();
}
void InternalTransitionActivationImpl::setThisInternalTransitionActivationPtr(std::weak_ptr<InternalTransitionActivation> thisInternalTransitionActivationPtr)
{
	m_thisInternalTransitionActivationPtr = thisInternalTransitionActivationPtr;
	setThisTransitionActivationPtr(thisInternalTransitionActivationPtr);
}
std::shared_ptr<ecore::EObject> InternalTransitionActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any InternalTransitionActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return TransitionActivationImpl::eGet(featureID, resolve, coreType);
}
bool InternalTransitionActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return TransitionActivationImpl::internalEIsSet(featureID);
}
bool InternalTransitionActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return TransitionActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void InternalTransitionActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void InternalTransitionActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	TransitionActivationImpl::loadAttributes(loadHandler, attr_list);
}

void InternalTransitionActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	TransitionActivationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void InternalTransitionActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	TransitionActivationImpl::resolveReferences(featureID, references);
}

void InternalTransitionActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	TransitionActivationImpl::saveContent(saveHandler);
	
	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
}

void InternalTransitionActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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
