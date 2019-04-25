#include "PSSM/Semantics/StateMachines/impl/PseudostateActivationImpl.hpp"

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
PseudostateActivationImpl::PseudostateActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		m_fireableTransitions.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>());
	
	

	//Init references
	
	
}

PseudostateActivationImpl::~PseudostateActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete PseudostateActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




PseudostateActivationImpl::PseudostateActivationImpl(const PseudostateActivationImpl & obj):PseudostateActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy PseudostateActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

std::shared_ptr<ecore::EObject>  PseudostateActivationImpl::copy() const
{
	std::shared_ptr<PseudostateActivationImpl> element(new PseudostateActivationImpl(*this));
	element->setThisPseudostateActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> PseudostateActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getPseudostateActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
void PseudostateActivationImpl::evaluateAllGuards(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> PseudostateActivationImpl::getFireableTransitions() const
{

    return m_fireableTransitions;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<PseudostateActivation> PseudostateActivationImpl::getThisPseudostateActivationPtr() const
{
	return m_thisPseudostateActivationPtr.lock();
}
void PseudostateActivationImpl::setThisPseudostateActivationPtr(std::weak_ptr<PseudostateActivation> thisPseudostateActivationPtr)
{
	m_thisPseudostateActivationPtr = thisPseudostateActivationPtr;
	setThisVertexActivationPtr(thisPseudostateActivationPtr);
}
std::shared_ptr<ecore::EObject> PseudostateActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any PseudostateActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::PSEUDOSTATEACTIVATION_EREFERENCE_FIREABLETRANSITIONS:
			return eAny(getFireableTransitions()); //245
	}
	return VertexActivationImpl::eGet(featureID, resolve, coreType);
}
bool PseudostateActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::PSEUDOSTATEACTIVATION_EREFERENCE_FIREABLETRANSITIONS:
			return getFireableTransitions() != nullptr; //245
	}
	return VertexActivationImpl::internalEIsSet(featureID);
}
bool PseudostateActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return VertexActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void PseudostateActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void PseudostateActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("fireableTransitions");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("fireableTransitions")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

	VertexActivationImpl::loadAttributes(loadHandler, attr_list);
}

void PseudostateActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	VertexActivationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void PseudostateActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::PSEUDOSTATEACTIVATION_EREFERENCE_FIREABLETRANSITIONS:
		{
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _fireableTransitions = getFireableTransitions();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation> _r = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::TransitionActivation>(ref);
				if (_r != nullptr)
				{
					_fireableTransitions->push_back(_r);
				}				
			}
			return;
		}
	}
	VertexActivationImpl::resolveReferences(featureID, references);
}

void PseudostateActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	VertexActivationImpl::saveContent(saveHandler);
	
	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
}

void PseudostateActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> fireableTransitions_list = this->getFireableTransitions();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation > object : *fireableTransitions_list)
		{ 
			saveHandler->addReferences("fireableTransitions", object);
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

