#include "PSSM/Semantics/StateMachines/impl/VertexActivationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/StateMachineSemanticVisitor.hpp"

#include "PSSM/Semantics/StateMachines/TransitionActivation.hpp"

#include "uml/Vertex.hpp"

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
VertexActivationImpl::VertexActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	//References
		m_incomingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>());
	
	

		m_outgoingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>());
	
	

	//Init references
	
	

	
	
}

VertexActivationImpl::~VertexActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete VertexActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




VertexActivationImpl::VertexActivationImpl(const VertexActivationImpl & obj):VertexActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy VertexActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_status = obj.getStatus();

	//copy references with no containment (soft copy)
	
	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _incomingTransitionActivations = obj.getIncomingTransitionActivations();
	m_incomingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getIncomingTransitionActivations().get())));

	m_node  = obj.getNode();

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _outgoingTransitionActivations = obj.getOutgoingTransitionActivations();
	m_outgoingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getOutgoingTransitionActivations().get())));

	m_parent  = obj.getParent();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  VertexActivationImpl::copy() const
{
	std::shared_ptr<VertexActivationImpl> element(new VertexActivationImpl(*this));
	element->setThisVertexActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> VertexActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getVertexActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void VertexActivationImpl::setStatus(StateMetadata _status)
{
	m_status = _status;
} 

StateMetadata VertexActivationImpl::getStatus() const 
{
	return m_status;
}

//*********************************
// Operations
//*********************************
void VertexActivationImpl::addIncomingTransition(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  transitionActivation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void VertexActivationImpl::addOutgoingTransition(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  transitionActivation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool VertexActivationImpl::canPropagateExecution(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>  leastCommonAncestor)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void VertexActivationImpl::enter(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>  leastCommonAncestor)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void VertexActivationImpl::exit(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  exitingTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>  leastCommonAncestor)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> > VertexActivationImpl::getAscendingHierarchy()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > VertexActivationImpl::getIncomingTransitions()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> VertexActivationImpl::getLeastCommonAncestor(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  vertexActivation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > VertexActivationImpl::getOutgoingTransitions()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> VertexActivationImpl::getOwningRegionActivation()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> VertexActivationImpl::getParentVertexActivation()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> VertexActivationImpl::getRegionActivation(std::shared_ptr<fUML::SemanticVisitor>  semanticVisitor)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> VertexActivationImpl::getVertexActivation(std::shared_ptr<uml::Vertex>  vertex)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool VertexActivationImpl::isActive()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool VertexActivationImpl::isEnterable(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,bool staticCheck)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool VertexActivationImpl::isExitable(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  exitingTransition,bool staticCheck)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



void VertexActivationImpl::tagIncomingTransition(TransitionMetadata status,bool staticCheck)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void VertexActivationImpl::tagOutgoingTransition(TransitionMetadata status,bool staticCheck)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void VertexActivationImpl::terminate()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> VertexActivationImpl::getIncomingTransitionActivations() const
{

    return m_incomingTransitionActivations;
}


std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> VertexActivationImpl::getOutgoingTransitionActivations() const
{

    return m_outgoingTransitionActivations;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<VertexActivation> VertexActivationImpl::getThisVertexActivationPtr() const
{
	return m_thisVertexActivationPtr.lock();
}
void VertexActivationImpl::setThisVertexActivationPtr(std::weak_ptr<VertexActivation> thisVertexActivationPtr)
{
	m_thisVertexActivationPtr = thisVertexActivationPtr;
	setThisStateMachineSemanticVisitorPtr(thisVertexActivationPtr);
}
std::shared_ptr<ecore::EObject> VertexActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any VertexActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_INCOMINGTRANSITIONACTIVATIONS:
			return eAny(getIncomingTransitionActivations()); //443
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_OUTGOINGTRANSITIONACTIVATIONS:
			return eAny(getOutgoingTransitionActivations()); //444
		case PSSM::PSSMPackage::VERTEXACTIVATION_EATTRIBUTE_STATUS:
			return eAny(getStatus()); //442
	}
	return StateMachineSemanticVisitorImpl::eGet(featureID, resolve, coreType);
}
bool VertexActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_INCOMINGTRANSITIONACTIVATIONS:
			return getIncomingTransitionActivations() != nullptr; //443
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_OUTGOINGTRANSITIONACTIVATIONS:
			return getOutgoingTransitionActivations() != nullptr; //444
		case PSSM::PSSMPackage::VERTEXACTIVATION_EATTRIBUTE_STATUS:
			return m_status != StateMetadata::IDLE;; //442
	}
	return StateMachineSemanticVisitorImpl::internalEIsSet(featureID);
}
bool VertexActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::VERTEXACTIVATION_EATTRIBUTE_STATUS:
		{
			// BOOST CAST
			StateMetadata _status = newValue->get<StateMetadata>();
			setStatus(_status); //442
			return true;
		}
	}

	return StateMachineSemanticVisitorImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void VertexActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void VertexActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("status");
		if ( iter != attr_list.end() )
		{
			StateMetadata value = StateMetadata::IDLE;
			std::string literal = iter->second;
			if (literal == "idle")
			{
				value = StateMetadata::IDLE;
			}
			else if (literal == "active")
			{
				value = StateMetadata::ACTIVE;
			}
			this->setStatus(value);
		}
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("incomingTransitionActivations");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("incomingTransitionActivations")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("outgoingTransitionActivations");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("outgoingTransitionActivations")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	StateMachineSemanticVisitorImpl::loadAttributes(loadHandler, attr_list);
}

void VertexActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	StateMachineSemanticVisitorImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void VertexActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_INCOMINGTRANSITIONACTIVATIONS:
		{
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _incomingTransitionActivations = getIncomingTransitionActivations();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation> _r = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::TransitionActivation>(ref);
				if (_r != nullptr)
				{
					_incomingTransitionActivations->push_back(_r);
				}				
			}
			return;
		}

		case PSSM::PSSMPackage::VERTEXACTIVATION_EREFERENCE_OUTGOINGTRANSITIONACTIVATIONS:
		{
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _outgoingTransitionActivations = getOutgoingTransitionActivations();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation> _r = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::TransitionActivation>(ref);
				if (_r != nullptr)
				{
					_outgoingTransitionActivations->push_back(_r);
				}				
			}
			return;
		}
	}
	StateMachineSemanticVisitorImpl::resolveReferences(featureID, references);
}

void VertexActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
}

void VertexActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	
 
		// Add attributes
		if ( this->eIsSet(package->getVertexActivation_EAttribute_status()) )
		{
			StateMetadata value = this->getStatus();
			std::string literal = "";
			if (value == StateMetadata::IDLE)
			{
				literal = "idle";
			}
			else if (value == StateMetadata::ACTIVE)
			{
				literal = "active";
			}
			saveHandler->addAttribute("status", literal);
		}

		// Add references
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> incomingTransitionActivations_list = this->getIncomingTransitionActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation > object : *incomingTransitionActivations_list)
		{ 
			saveHandler->addReferences("incomingTransitionActivations", object);
		}
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> outgoingTransitionActivations_list = this->getOutgoingTransitionActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation > object : *outgoingTransitionActivations_list)
		{ 
			saveHandler->addReferences("outgoingTransitionActivations", object);
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

