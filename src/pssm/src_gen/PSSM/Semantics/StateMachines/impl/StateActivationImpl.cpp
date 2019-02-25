#include "PSSM/Semantics/StateMachines/impl/StateActivationImpl.hpp"

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

#include "uml/Behavior.hpp"

#include "PSSM/Semantics/StateMachines/ConnectionPointActivation.hpp"

#include "PSSM/Semantics/StateMachines/DoActivityContextObject.hpp"

#include "fUML/EventOccurrence.hpp"

#include "uml/NamedElement.hpp"

#include "PSSM/Semantics/StateMachines/RegionActivation.hpp"

#include "fUML/SemanticVisitor.hpp"

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
StateActivationImpl::StateActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	
	
	//*********************************
	// Reference Members
	//*********************************
	//References
		m_connectionPointActivations.reset(new Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>());
	
	

	

		m_regionActivations.reset(new Bag<PSSM::Semantics::StateMachines::RegionActivation>());
	
	

	//Init references
	
	

	

	
	
}

StateActivationImpl::~StateActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StateActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




StateActivationImpl::StateActivationImpl(const StateActivationImpl & obj):StateActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StateActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
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

std::shared_ptr<ecore::EObject>  StateActivationImpl::copy() const
{
	std::shared_ptr<StateActivationImpl> element(new StateActivationImpl(*this));
	element->setThisStateActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> StateActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getStateActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void StateActivationImpl::setIsDoActivityCompleted(bool _isDoActivityCompleted)
{
	m_isDoActivityCompleted = _isDoActivityCompleted;
} 

bool StateActivationImpl::getIsDoActivityCompleted() const 
{
	return m_isDoActivityCompleted;
}

void StateActivationImpl::setIsEntryCompleted(bool _isEntryCompleted)
{
	m_isEntryCompleted = _isEntryCompleted;
} 

bool StateActivationImpl::getIsEntryCompleted() const 
{
	return m_isEntryCompleted;
}

void StateActivationImpl::setIsExitCompleted(bool _isExitCompleted)
{
	m_isExitCompleted = _isExitCompleted;
} 

bool StateActivationImpl::getIsExitCompleted() const 
{
	return m_isExitCompleted;
}

//*********************************
// Operations
//*********************************
bool StateActivationImpl::canDefer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateActivationImpl::defer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateActivationImpl::enterRegions(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation> > StateActivationImpl::getConnectionPointActivation()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation> StateActivationImpl::getConnectionPointActivation(std::shared_ptr<uml::Vertex>  vertex)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<uml::Behavior> StateActivationImpl::getDoActivity()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<uml::Behavior> StateActivationImpl::getEntry()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<uml::Behavior> StateActivationImpl::getExit()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > StateActivationImpl::getFireableTransitions(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation> > StateActivationImpl::getRegionActivation()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateActivationImpl::hasCompleted()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateActivationImpl::notifyCompletion()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateActivationImpl::releaseDeferredEvents()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateActivationImpl::tryExecuteEntry(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateActivationImpl::tryExecuteExit(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateActivationImpl::tryInvokeDoActivity(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> StateActivationImpl::getConnectionPointActivations() const
{

    return m_connectionPointActivations;
}


std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject > StateActivationImpl::getDoActivityContextObject() const
{

    return m_doActivityContextObject;
}
void StateActivationImpl::setDoActivityContextObject(std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _doActivityContextObject)
{
    m_doActivityContextObject = _doActivityContextObject;
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> StateActivationImpl::getRegionActivations() const
{

    return m_regionActivations;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<StateActivation> StateActivationImpl::getThisStateActivationPtr() const
{
	return m_thisStateActivationPtr.lock();
}
void StateActivationImpl::setThisStateActivationPtr(std::weak_ptr<StateActivation> thisStateActivationPtr)
{
	m_thisStateActivationPtr = thisStateActivationPtr;
	setThisVertexActivationPtr(thisStateActivationPtr);
}
std::shared_ptr<ecore::EObject> StateActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any StateActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_CONNECTIONPOINTACTIVATIONS:
			return eAny(getConnectionPointActivations()); //345
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_DOACTIVITYCONTEXTOBJECT:
			return eAny(getDoActivityContextObject()); //3410
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISDOACTIVITYCOMPLETED:
			return eAny(getIsDoActivityCompleted()); //347
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISENTRYCOMPLETED:
			return eAny(getIsEntryCompleted()); //348
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISEXITCOMPLETED:
			return eAny(getIsExitCompleted()); //349
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_REGIONACTIVATIONS:
			return eAny(getRegionActivations()); //346
	}
	return VertexActivationImpl::eGet(featureID, resolve, coreType);
}
bool StateActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_CONNECTIONPOINTACTIVATIONS:
			return getConnectionPointActivations() != nullptr; //345
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_DOACTIVITYCONTEXTOBJECT:
			return getDoActivityContextObject() != nullptr; //3410
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISDOACTIVITYCOMPLETED:
			return getIsDoActivityCompleted() != false; //347
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISENTRYCOMPLETED:
			return getIsEntryCompleted() != false; //348
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISEXITCOMPLETED:
			return getIsExitCompleted() != false; //349
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_REGIONACTIVATIONS:
			return getRegionActivations() != nullptr; //346
	}
	return VertexActivationImpl::internalEIsSet(featureID);
}
bool StateActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_DOACTIVITYCONTEXTOBJECT:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _doActivityContextObject = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject>>();
			setDoActivityContextObject(_doActivityContextObject); //3410
			return true;
		}
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISDOACTIVITYCOMPLETED:
		{
			// BOOST CAST
			bool _isDoActivityCompleted = newValue->get<bool>();
			setIsDoActivityCompleted(_isDoActivityCompleted); //347
			return true;
		}
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISENTRYCOMPLETED:
		{
			// BOOST CAST
			bool _isEntryCompleted = newValue->get<bool>();
			setIsEntryCompleted(_isEntryCompleted); //348
			return true;
		}
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISEXITCOMPLETED:
		{
			// BOOST CAST
			bool _isExitCompleted = newValue->get<bool>();
			setIsExitCompleted(_isExitCompleted); //349
			return true;
		}
	}

	return VertexActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void StateActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void StateActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("isDoActivityCompleted");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setIsDoActivityCompleted(value);
		}

		iter = attr_list.find("isEntryCompleted");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setIsEntryCompleted(value);
		}

		iter = attr_list.find("isExitCompleted");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setIsExitCompleted(value);
		}
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("doActivityContextObject");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("doActivityContextObject")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void StateActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("connectionPointActivations") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation> connectionPointActivations = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::ConnectionPointActivation>(modelFactory->create(typeName));
			if (connectionPointActivations != nullptr)
			{
				std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> list_connectionPointActivations = this->getConnectionPointActivations();
				list_connectionPointActivations->push_back(connectionPointActivations);
				loadHandler->handleChild(connectionPointActivations);
			}
			return;
		}

		if ( nodeName.compare("regionActivations") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "RegionActivation";
			}
			std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> regionActivations = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>(modelFactory->create(typeName));
			if (regionActivations != nullptr)
			{
				std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> list_regionActivations = this->getRegionActivations();
				list_regionActivations->push_back(regionActivations);
				loadHandler->handleChild(regionActivations);
			}
			return;
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

	VertexActivationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void StateActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_DOACTIVITYCONTEXTOBJECT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _doActivityContextObject = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::DoActivityContextObject>( references.front() );
				setDoActivityContextObject(_doActivityContextObject);
			}
			
			return;
		}
	}
	VertexActivationImpl::resolveReferences(featureID, references);
}

void StateActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	VertexActivationImpl::saveContent(saveHandler);
	
	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
}

void StateActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	
 
		// Add attributes
		if ( this->eIsSet(package->getStateActivation_EAttribute_isDoActivityCompleted()) )
		{
			saveHandler->addAttribute("isDoActivityCompleted", this->getIsDoActivityCompleted());
		}

		if ( this->eIsSet(package->getStateActivation_EAttribute_isEntryCompleted()) )
		{
			saveHandler->addAttribute("isEntryCompleted", this->getIsEntryCompleted());
		}

		if ( this->eIsSet(package->getStateActivation_EAttribute_isExitCompleted()) )
		{
			saveHandler->addAttribute("isExitCompleted", this->getIsExitCompleted());
		}

		// Add references
		saveHandler->addReference("doActivityContextObject", this->getDoActivityContextObject());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'connectionPointActivations'
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> list_connectionPointActivations = this->getConnectionPointActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation> connectionPointActivations : *list_connectionPointActivations) 
		{
			saveHandler->addReference(connectionPointActivations, "connectionPointActivations", connectionPointActivations->eClass() != package->getConnectionPointActivation_EClass());
		}

		// Save 'regionActivations'
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> list_regionActivations = this->getRegionActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> regionActivations : *list_regionActivations) 
		{
			saveHandler->addReference(regionActivations, "regionActivations", regionActivations->eClass() != package->getRegionActivation_EClass());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

