#include "PSSM/Semantics/StateMachines/impl/FinalStateActivationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/DoActivityContextObject.hpp"

#include "uml/NamedElement.hpp"

#include "PSSM/Semantics/StateMachines/RegionActivation.hpp"

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
FinalStateActivationImpl::FinalStateActivationImpl()
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

FinalStateActivationImpl::~FinalStateActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete FinalStateActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




FinalStateActivationImpl::FinalStateActivationImpl(const FinalStateActivationImpl & obj):FinalStateActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy FinalStateActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isDoActivityCompleted = obj.getIsDoActivityCompleted();
	m_isEntryCompleted = obj.getIsEntryCompleted();
	m_isExitCompleted = obj.getIsExitCompleted();
	m_status = obj.getStatus();

	//copy references with no containment (soft copy)
	
	m_doActivityContextObject  = obj.getDoActivityContextObject();

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _incomingTransitionActivations = obj.getIncomingTransitionActivations();
	m_incomingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getIncomingTransitionActivations().get())));

	m_node  = obj.getNode();

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _outgoingTransitionActivations = obj.getOutgoingTransitionActivations();
	m_outgoingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getOutgoingTransitionActivations().get())));

	m_parent  = obj.getParent();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> _connectionPointActivationsList = obj.getConnectionPointActivations();
	for(std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation> _connectionPointActivations : *_connectionPointActivationsList)
	{
		this->getConnectionPointActivations()->add(std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation>(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::ConnectionPointActivation>(_connectionPointActivations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_connectionPointActivations" << std::endl;
	#endif
	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> _regionActivationsList = obj.getRegionActivations();
	for(std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> _regionActivations : *_regionActivationsList)
	{
		this->getRegionActivations()->add(std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>(_regionActivations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_regionActivations" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  FinalStateActivationImpl::copy() const
{
	std::shared_ptr<FinalStateActivationImpl> element(new FinalStateActivationImpl(*this));
	element->setThisFinalStateActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> FinalStateActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getFinalStateActivation_EClass();
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


std::shared_ptr<FinalStateActivation> FinalStateActivationImpl::getThisFinalStateActivationPtr() const
{
	return m_thisFinalStateActivationPtr.lock();
}
void FinalStateActivationImpl::setThisFinalStateActivationPtr(std::weak_ptr<FinalStateActivation> thisFinalStateActivationPtr)
{
	m_thisFinalStateActivationPtr = thisFinalStateActivationPtr;
	setThisStateActivationPtr(thisFinalStateActivationPtr);
}
std::shared_ptr<ecore::EObject> FinalStateActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any FinalStateActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
	}
	return StateActivationImpl::eGet(featureID, resolve, coreType);
}
bool FinalStateActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
	}
	return StateActivationImpl::internalEIsSet(featureID);
}
bool FinalStateActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return StateActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void FinalStateActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void FinalStateActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	StateActivationImpl::loadAttributes(loadHandler, attr_list);
}

void FinalStateActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	StateActivationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void FinalStateActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	StateActivationImpl::resolveReferences(featureID, references);
}

void FinalStateActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	StateActivationImpl::saveContent(saveHandler);
	
	VertexActivationImpl::saveContent(saveHandler);
	
	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
}

void FinalStateActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

