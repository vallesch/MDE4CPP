#include "PSSM/Semantics/StateMachines/impl/EntryPointPseudostateActivationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/ConnectionPointActivation.hpp"

#include "fUML/EventOccurrence.hpp"

#include "uml/NamedElement.hpp"

#include "PSSM/Semantics/StateMachines/RegionActivation.hpp"

#include "fUML/SemanticVisitor.hpp"

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
EntryPointPseudostateActivationImpl::EntryPointPseudostateActivationImpl()
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

EntryPointPseudostateActivationImpl::~EntryPointPseudostateActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete EntryPointPseudostateActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




EntryPointPseudostateActivationImpl::EntryPointPseudostateActivationImpl(const EntryPointPseudostateActivationImpl & obj):EntryPointPseudostateActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy EntryPointPseudostateActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

std::shared_ptr<ecore::EObject>  EntryPointPseudostateActivationImpl::copy() const
{
	std::shared_ptr<EntryPointPseudostateActivationImpl> element(new EntryPointPseudostateActivationImpl(*this));
	element->setThisEntryPointPseudostateActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> EntryPointPseudostateActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getEntryPointPseudostateActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
void EntryPointPseudostateActivationImpl::_enter(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>  leastCommonAncestor)
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


std::shared_ptr<EntryPointPseudostateActivation> EntryPointPseudostateActivationImpl::getThisEntryPointPseudostateActivationPtr() const
{
	return m_thisEntryPointPseudostateActivationPtr.lock();
}
void EntryPointPseudostateActivationImpl::setThisEntryPointPseudostateActivationPtr(std::weak_ptr<EntryPointPseudostateActivation> thisEntryPointPseudostateActivationPtr)
{
	m_thisEntryPointPseudostateActivationPtr = thisEntryPointPseudostateActivationPtr;
	setThisConnectionPointActivationPtr(thisEntryPointPseudostateActivationPtr);
}
std::shared_ptr<ecore::EObject> EntryPointPseudostateActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any EntryPointPseudostateActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return ConnectionPointActivationImpl::eGet(featureID, resolve, coreType);
}
bool EntryPointPseudostateActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return ConnectionPointActivationImpl::internalEIsSet(featureID);
}
bool EntryPointPseudostateActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return ConnectionPointActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void EntryPointPseudostateActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void EntryPointPseudostateActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	ConnectionPointActivationImpl::loadAttributes(loadHandler, attr_list);
}

void EntryPointPseudostateActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ConnectionPointActivationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void EntryPointPseudostateActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ConnectionPointActivationImpl::resolveReferences(featureID, references);
}

void EntryPointPseudostateActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ConnectionPointActivationImpl::saveContent(saveHandler);
	
	PseudostateActivationImpl::saveContent(saveHandler);
	
	VertexActivationImpl::saveContent(saveHandler);
	
	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void EntryPointPseudostateActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

