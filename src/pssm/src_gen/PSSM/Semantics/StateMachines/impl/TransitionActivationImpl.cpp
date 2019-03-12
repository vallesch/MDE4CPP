#include "PSSM/Semantics/StateMachines/impl/TransitionActivationImpl.hpp"

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
TransitionActivationImpl::TransitionActivationImpl()
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

TransitionActivationImpl::~TransitionActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete TransitionActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




TransitionActivationImpl::TransitionActivationImpl(const TransitionActivationImpl & obj):TransitionActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy TransitionActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

std::shared_ptr<ecore::EObject>  TransitionActivationImpl::copy() const
{
	std::shared_ptr<TransitionActivationImpl> element(new TransitionActivationImpl(*this));
	element->setThisTransitionActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> TransitionActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getTransitionActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void TransitionActivationImpl::setAnalyticalStatus(TransitionMetadata _analyticalStatus)
{
	m_analyticalStatus = _analyticalStatus;
} 

TransitionMetadata TransitionActivationImpl::getAnalyticalStatus() const 
{
	return m_analyticalStatus;
}

void TransitionActivationImpl::setLastPropagation(bool _lastPropagation)
{
	m_lastPropagation = _lastPropagation;
} 

bool TransitionActivationImpl::getLastPropagation() const 
{
	return m_lastPropagation;
}

void TransitionActivationImpl::setStatus(TransitionMetadata _status)
{
	m_status = _status;
} 

TransitionMetadata TransitionActivationImpl::getStatus() const 
{
	return m_status;
}

//*********************************
// Operations
//*********************************
bool TransitionActivationImpl::canFireOn(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool TransitionActivationImpl::canPropagateExecution(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void TransitionActivationImpl::enterTarget(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool TransitionActivationImpl::evaluateGuard(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void TransitionActivationImpl::exitSource(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void TransitionActivationImpl::fire(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> TransitionActivationImpl::getLeastCommonAncestor()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> TransitionActivationImpl::getSourceActivation()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> TransitionActivationImpl::getTargetActivation()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool TransitionActivationImpl::hasTrigger(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool TransitionActivationImpl::isGuarded()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool TransitionActivationImpl::isReached()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool TransitionActivationImpl::isTraversed(bool staticCheck)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool TransitionActivationImpl::isTriggered(bool staticCheck)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void TransitionActivationImpl::setSourceActivation(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  _)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



void TransitionActivationImpl::setTargetActivation(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  _)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void TransitionActivationImpl::tryExecuteEffect(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<fUML::EventOccurrence > TransitionActivationImpl::getLastTriggeringEventOccurrence() const
{

    return m_lastTriggeringEventOccurrence;
}
void TransitionActivationImpl::setLastTriggeringEventOccurrence(std::shared_ptr<fUML::EventOccurrence> _lastTriggeringEventOccurrence)
{
    m_lastTriggeringEventOccurrence = _lastTriggeringEventOccurrence;
}

std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation > TransitionActivationImpl::getLeastCommonAncestor() const
{
//assert(m_leastCommonAncestor);
    return m_leastCommonAncestor;
}
void TransitionActivationImpl::setLeastCommonAncestor(std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> _leastCommonAncestor)
{
    m_leastCommonAncestor = _leastCommonAncestor;
}

std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation > TransitionActivationImpl::getSourceVertexActivation() const
{
//assert(m_sourceVertexActivation);
    return m_sourceVertexActivation;
}
void TransitionActivationImpl::setSourceVertexActivation(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _sourceVertexActivation)
{
    m_sourceVertexActivation = _sourceVertexActivation;
}

std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation > TransitionActivationImpl::getTargetVertexActivation() const
{
//assert(m_targetVertexActivation);
    return m_targetVertexActivation;
}
void TransitionActivationImpl::setTargetVertexActivation(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _targetVertexActivation)
{
    m_targetVertexActivation = _targetVertexActivation;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<TransitionActivation> TransitionActivationImpl::getThisTransitionActivationPtr() const
{
	return m_thisTransitionActivationPtr.lock();
}
void TransitionActivationImpl::setThisTransitionActivationPtr(std::weak_ptr<TransitionActivation> thisTransitionActivationPtr)
{
	m_thisTransitionActivationPtr = thisTransitionActivationPtr;
	setThisStateMachineSemanticVisitorPtr(thisTransitionActivationPtr);
}
std::shared_ptr<ecore::EObject> TransitionActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any TransitionActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EATTRIBUTE_ANALYTICALSTATUS:
			return eAny(getAnalyticalStatus()); //425
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EATTRIBUTE_LASTPROPAGATION:
			return eAny(getLastPropagation()); //426
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_LASTTRIGGERINGEVENTOCCURRENCE:
			return eAny(getLastTriggeringEventOccurrence()); //428
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_LEASTCOMMONANCESTOR:
			return eAny(getLeastCommonAncestor()); //427
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_SOURCEVERTEXACTIVATION:
			return eAny(getSourceVertexActivation()); //423
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EATTRIBUTE_STATUS:
			return eAny(getStatus()); //422
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_TARGETVERTEXACTIVATION:
			return eAny(getTargetVertexActivation()); //424
	}
	return StateMachineSemanticVisitorImpl::eGet(featureID, resolve, coreType);
}
bool TransitionActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EATTRIBUTE_ANALYTICALSTATUS:
			return m_analyticalStatus != TransitionMetadata::NONE;; //425
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EATTRIBUTE_LASTPROPAGATION:
			return getLastPropagation() != false; //426
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_LASTTRIGGERINGEVENTOCCURRENCE:
			return getLastTriggeringEventOccurrence() != nullptr; //428
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_LEASTCOMMONANCESTOR:
			return getLeastCommonAncestor() != nullptr; //427
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_SOURCEVERTEXACTIVATION:
			return getSourceVertexActivation() != nullptr; //423
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EATTRIBUTE_STATUS:
			return m_status != TransitionMetadata::NONE;; //422
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_TARGETVERTEXACTIVATION:
			return getTargetVertexActivation() != nullptr; //424
	}
	return StateMachineSemanticVisitorImpl::internalEIsSet(featureID);
}
bool TransitionActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EATTRIBUTE_ANALYTICALSTATUS:
		{
			// BOOST CAST
			TransitionMetadata _analyticalStatus = newValue->get<TransitionMetadata>();
			setAnalyticalStatus(_analyticalStatus); //425
			return true;
		}
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EATTRIBUTE_LASTPROPAGATION:
		{
			// BOOST CAST
			bool _lastPropagation = newValue->get<bool>();
			setLastPropagation(_lastPropagation); //426
			return true;
		}
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_LASTTRIGGERINGEVENTOCCURRENCE:
		{
			// BOOST CAST
			std::shared_ptr<fUML::EventOccurrence> _lastTriggeringEventOccurrence = newValue->get<std::shared_ptr<fUML::EventOccurrence>>();
			setLastTriggeringEventOccurrence(_lastTriggeringEventOccurrence); //428
			return true;
		}
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_LEASTCOMMONANCESTOR:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> _leastCommonAncestor = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>>();
			setLeastCommonAncestor(_leastCommonAncestor); //427
			return true;
		}
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_SOURCEVERTEXACTIVATION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _sourceVertexActivation = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>>();
			setSourceVertexActivation(_sourceVertexActivation); //423
			return true;
		}
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EATTRIBUTE_STATUS:
		{
			// BOOST CAST
			TransitionMetadata _status = newValue->get<TransitionMetadata>();
			setStatus(_status); //422
			return true;
		}
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_TARGETVERTEXACTIVATION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _targetVertexActivation = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>>();
			setTargetVertexActivation(_targetVertexActivation); //424
			return true;
		}
	}

	return StateMachineSemanticVisitorImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void TransitionActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void TransitionActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("analyticalStatus");
		if ( iter != attr_list.end() )
		{
			TransitionMetadata value = TransitionMetadata::NONE;
			std::string literal = iter->second;
			if (literal == "none")
			{
				value = TransitionMetadata::NONE;
			}
			else if (literal == "reached")
			{
				value = TransitionMetadata::REACHED;
			}
			else if (literal == "traversed")
			{
				value = TransitionMetadata::TRAVERSED;
			}
			else if (literal == "completed")
			{
				value = TransitionMetadata::COMPLETED;
			}
			this->setAnalyticalStatus(value);
		}

		iter = attr_list.find("lastPropagation");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setLastPropagation(value);
		}

		iter = attr_list.find("status");
		if ( iter != attr_list.end() )
		{
			TransitionMetadata value = TransitionMetadata::NONE;
			std::string literal = iter->second;
			if (literal == "none")
			{
				value = TransitionMetadata::NONE;
			}
			else if (literal == "reached")
			{
				value = TransitionMetadata::REACHED;
			}
			else if (literal == "traversed")
			{
				value = TransitionMetadata::TRAVERSED;
			}
			else if (literal == "completed")
			{
				value = TransitionMetadata::COMPLETED;
			}
			this->setStatus(value);
		}
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("lastTriggeringEventOccurrence");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("lastTriggeringEventOccurrence")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("leastCommonAncestor");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("leastCommonAncestor")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("sourceVertexActivation");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("sourceVertexActivation")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("targetVertexActivation");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("targetVertexActivation")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void TransitionActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	StateMachineSemanticVisitorImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void TransitionActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_LASTTRIGGERINGEVENTOCCURRENCE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::EventOccurrence> _lastTriggeringEventOccurrence = std::dynamic_pointer_cast<fUML::EventOccurrence>( references.front() );
				setLastTriggeringEventOccurrence(_lastTriggeringEventOccurrence);
			}
			
			return;
		}

		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_LEASTCOMMONANCESTOR:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> _leastCommonAncestor = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>( references.front() );
				setLeastCommonAncestor(_leastCommonAncestor);
			}
			
			return;
		}

		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_SOURCEVERTEXACTIVATION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _sourceVertexActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>( references.front() );
				setSourceVertexActivation(_sourceVertexActivation);
			}
			
			return;
		}

		case PSSM::PSSMPackage::TRANSITIONACTIVATION_EREFERENCE_TARGETVERTEXACTIVATION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _targetVertexActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>( references.front() );
				setTargetVertexActivation(_targetVertexActivation);
			}
			
			return;
		}
	}
	StateMachineSemanticVisitorImpl::resolveReferences(featureID, references);
}

void TransitionActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
}

void TransitionActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	
 
		// Add attributes
		if ( this->eIsSet(package->getTransitionActivation_EAttribute_analyticalStatus()) )
		{
			TransitionMetadata value = this->getAnalyticalStatus();
			std::string literal = "";
			if (value == TransitionMetadata::NONE)
			{
				literal = "none";
			}
			else if (value == TransitionMetadata::REACHED)
			{
				literal = "reached";
			}
			else if (value == TransitionMetadata::TRAVERSED)
			{
				literal = "traversed";
			}
			else if (value == TransitionMetadata::COMPLETED)
			{
				literal = "completed";
			}
			saveHandler->addAttribute("analyticalStatus", literal);
		}

		if ( this->eIsSet(package->getTransitionActivation_EAttribute_lastPropagation()) )
		{
			saveHandler->addAttribute("lastPropagation", this->getLastPropagation());
		}

		if ( this->eIsSet(package->getTransitionActivation_EAttribute_status()) )
		{
			TransitionMetadata value = this->getStatus();
			std::string literal = "";
			if (value == TransitionMetadata::NONE)
			{
				literal = "none";
			}
			else if (value == TransitionMetadata::REACHED)
			{
				literal = "reached";
			}
			else if (value == TransitionMetadata::TRAVERSED)
			{
				literal = "traversed";
			}
			else if (value == TransitionMetadata::COMPLETED)
			{
				literal = "completed";
			}
			saveHandler->addAttribute("status", literal);
		}

		// Add references
		saveHandler->addReference("lastTriggeringEventOccurrence", this->getLastTriggeringEventOccurrence());
		saveHandler->addReference("leastCommonAncestor", this->getLeastCommonAncestor());
		saveHandler->addReference("sourceVertexActivation", this->getSourceVertexActivation());
		saveHandler->addReference("targetVertexActivation", this->getTargetVertexActivation());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

