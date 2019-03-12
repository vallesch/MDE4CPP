#include "PSSM/Semantics/StateMachines/impl/DeepHistoryPseudostateActivationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/HistoryPseudostateActivation.hpp"

#include "uml/NamedElement.hpp"

#include "fUML/SemanticVisitor.hpp"

#include "PSSM/Semantics/StateMachines/StateActivation.hpp"

#include "PSSM/Semantics/StateMachines/TransitionActivation.hpp"

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
DeepHistoryPseudostateActivationImpl::DeepHistoryPseudostateActivationImpl()
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

DeepHistoryPseudostateActivationImpl::~DeepHistoryPseudostateActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DeepHistoryPseudostateActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




DeepHistoryPseudostateActivationImpl::DeepHistoryPseudostateActivationImpl(const DeepHistoryPseudostateActivationImpl & obj):DeepHistoryPseudostateActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DeepHistoryPseudostateActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_status = obj.getStatus();

	//copy references with no containment (soft copy)
	
	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _fireableTransitions = obj.getFireableTransitions();
	m_fireableTransitions.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getFireableTransitions().get())));

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _incomingTransitionActivations = obj.getIncomingTransitionActivations();
	m_incomingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getIncomingTransitionActivations().get())));

	m_node  = obj.getNode();

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _outgoingTransitionActivations = obj.getOutgoingTransitionActivations();
	m_outgoingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getOutgoingTransitionActivations().get())));

	m_parent  = obj.getParent();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  DeepHistoryPseudostateActivationImpl::copy() const
{
	std::shared_ptr<DeepHistoryPseudostateActivationImpl> element(new DeepHistoryPseudostateActivationImpl(*this));
	element->setThisDeepHistoryPseudostateActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> DeepHistoryPseudostateActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getDeepHistoryPseudostateActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool DeepHistoryPseudostateActivationImpl::canRestore(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation)
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


std::shared_ptr<DeepHistoryPseudostateActivation> DeepHistoryPseudostateActivationImpl::getThisDeepHistoryPseudostateActivationPtr() const
{
	return m_thisDeepHistoryPseudostateActivationPtr.lock();
}
void DeepHistoryPseudostateActivationImpl::setThisDeepHistoryPseudostateActivationPtr(std::weak_ptr<DeepHistoryPseudostateActivation> thisDeepHistoryPseudostateActivationPtr)
{
	m_thisDeepHistoryPseudostateActivationPtr = thisDeepHistoryPseudostateActivationPtr;
	setThisHistoryPseudostateActivationPtr(thisDeepHistoryPseudostateActivationPtr);
}
std::shared_ptr<ecore::EObject> DeepHistoryPseudostateActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any DeepHistoryPseudostateActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return HistoryPseudostateActivationImpl::eGet(featureID, resolve, coreType);
}
bool DeepHistoryPseudostateActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return HistoryPseudostateActivationImpl::internalEIsSet(featureID);
}
bool DeepHistoryPseudostateActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return HistoryPseudostateActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void DeepHistoryPseudostateActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void DeepHistoryPseudostateActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	HistoryPseudostateActivationImpl::loadAttributes(loadHandler, attr_list);
}

void DeepHistoryPseudostateActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	HistoryPseudostateActivationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void DeepHistoryPseudostateActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	HistoryPseudostateActivationImpl::resolveReferences(featureID, references);
}

void DeepHistoryPseudostateActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	HistoryPseudostateActivationImpl::saveContent(saveHandler);
	
	PseudostateActivationImpl::saveContent(saveHandler);
	
	VertexActivationImpl::saveContent(saveHandler);
	
	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void DeepHistoryPseudostateActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

