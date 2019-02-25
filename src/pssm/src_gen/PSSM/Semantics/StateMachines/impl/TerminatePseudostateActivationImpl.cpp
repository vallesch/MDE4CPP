#include "PSSM/Semantics/StateMachines/impl/TerminatePseudostateActivationImpl.hpp"

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

#include "uml/NamedElement.hpp"

#include "PSSM/Semantics/StateMachines/PseudostateActivation.hpp"

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
TerminatePseudostateActivationImpl::TerminatePseudostateActivationImpl()
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

TerminatePseudostateActivationImpl::~TerminatePseudostateActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete TerminatePseudostateActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




TerminatePseudostateActivationImpl::TerminatePseudostateActivationImpl(const TerminatePseudostateActivationImpl & obj):TerminatePseudostateActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy TerminatePseudostateActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

std::shared_ptr<ecore::EObject>  TerminatePseudostateActivationImpl::copy() const
{
	std::shared_ptr<TerminatePseudostateActivationImpl> element(new TerminatePseudostateActivationImpl(*this));
	element->setThisTerminatePseudostateActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> TerminatePseudostateActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getTerminatePseudostateActivation_EClass();
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


std::shared_ptr<TerminatePseudostateActivation> TerminatePseudostateActivationImpl::getThisTerminatePseudostateActivationPtr() const
{
	return m_thisTerminatePseudostateActivationPtr.lock();
}
void TerminatePseudostateActivationImpl::setThisTerminatePseudostateActivationPtr(std::weak_ptr<TerminatePseudostateActivation> thisTerminatePseudostateActivationPtr)
{
	m_thisTerminatePseudostateActivationPtr = thisTerminatePseudostateActivationPtr;
	setThisPseudostateActivationPtr(thisTerminatePseudostateActivationPtr);
}
std::shared_ptr<ecore::EObject> TerminatePseudostateActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any TerminatePseudostateActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return PseudostateActivationImpl::eGet(featureID, resolve, coreType);
}
bool TerminatePseudostateActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return PseudostateActivationImpl::internalEIsSet(featureID);
}
bool TerminatePseudostateActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return PseudostateActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void TerminatePseudostateActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void TerminatePseudostateActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	PseudostateActivationImpl::loadAttributes(loadHandler, attr_list);
}

void TerminatePseudostateActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	PseudostateActivationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void TerminatePseudostateActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	PseudostateActivationImpl::resolveReferences(featureID, references);
}

void TerminatePseudostateActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	PseudostateActivationImpl::saveContent(saveHandler);
	
	VertexActivationImpl::saveContent(saveHandler);
	
	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
}

void TerminatePseudostateActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

