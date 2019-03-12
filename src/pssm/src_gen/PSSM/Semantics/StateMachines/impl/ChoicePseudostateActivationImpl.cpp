#include "PSSM/Semantics/StateMachines/impl/ChoicePseudostateActivationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/ConditionalPseudostateActivation.hpp"

#include "uml/NamedElement.hpp"

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
ChoicePseudostateActivationImpl::ChoicePseudostateActivationImpl()
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

ChoicePseudostateActivationImpl::~ChoicePseudostateActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ChoicePseudostateActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




ChoicePseudostateActivationImpl::ChoicePseudostateActivationImpl(const ChoicePseudostateActivationImpl & obj):ChoicePseudostateActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy ChoicePseudostateActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

std::shared_ptr<ecore::EObject>  ChoicePseudostateActivationImpl::copy() const
{
	std::shared_ptr<ChoicePseudostateActivationImpl> element(new ChoicePseudostateActivationImpl(*this));
	element->setThisChoicePseudostateActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> ChoicePseudostateActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getChoicePseudostateActivation_EClass();
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


std::shared_ptr<ChoicePseudostateActivation> ChoicePseudostateActivationImpl::getThisChoicePseudostateActivationPtr() const
{
	return m_thisChoicePseudostateActivationPtr.lock();
}
void ChoicePseudostateActivationImpl::setThisChoicePseudostateActivationPtr(std::weak_ptr<ChoicePseudostateActivation> thisChoicePseudostateActivationPtr)
{
	m_thisChoicePseudostateActivationPtr = thisChoicePseudostateActivationPtr;
	setThisConditionalPseudostateActivationPtr(thisChoicePseudostateActivationPtr);
}
std::shared_ptr<ecore::EObject> ChoicePseudostateActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any ChoicePseudostateActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return ConditionalPseudostateActivationImpl::eGet(featureID, resolve, coreType);
}
bool ChoicePseudostateActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return ConditionalPseudostateActivationImpl::internalEIsSet(featureID);
}
bool ChoicePseudostateActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return ConditionalPseudostateActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void ChoicePseudostateActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void ChoicePseudostateActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	ConditionalPseudostateActivationImpl::loadAttributes(loadHandler, attr_list);
}

void ChoicePseudostateActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ConditionalPseudostateActivationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void ChoicePseudostateActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ConditionalPseudostateActivationImpl::resolveReferences(featureID, references);
}

void ChoicePseudostateActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	ConditionalPseudostateActivationImpl::saveContent(saveHandler);
	
	PseudostateActivationImpl::saveContent(saveHandler);
	
	VertexActivationImpl::saveContent(saveHandler);
	
	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
}

void ChoicePseudostateActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

