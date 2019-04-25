#include "PSSM/Semantics/StateMachines/impl/StateMachineEventAccepterImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/StateConfiguration.hpp"

#include "PSSM/Semantics/StateMachines/StateMachineExecution.hpp"

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
StateMachineEventAccepterImpl::StateMachineEventAccepterImpl()
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

StateMachineEventAccepterImpl::~StateMachineEventAccepterImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StateMachineEventAccepter "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




StateMachineEventAccepterImpl::StateMachineEventAccepterImpl(const StateMachineEventAccepterImpl & obj):StateMachineEventAccepterImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StateMachineEventAccepter "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_registrationContext  = obj.getRegistrationContext();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  StateMachineEventAccepterImpl::copy() const
{
	std::shared_ptr<StateMachineEventAccepterImpl> element(new StateMachineEventAccepterImpl(*this));
	element->setThisStateMachineEventAccepterPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> StateMachineEventAccepterImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getStateMachineEventAccepter_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool StateMachineEventAccepterImpl::_defer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>  stateConfiguration)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineEventAccepterImpl::_isDeferred(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>  stateConfiguration)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > StateMachineEventAccepterImpl::_select(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>  stateConfiguration)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateMachineEventAccepterImpl::accept(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineEventAccepterImpl::defer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineEventAccepterImpl::isDeferred(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineEventAccepterImpl::isTriggering(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineEventAccepterImpl::match(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > StateMachineEventAccepterImpl::select(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution > StateMachineEventAccepterImpl::getRegistrationContext() const
{
//assert(m_registrationContext);
    return m_registrationContext;
}
void StateMachineEventAccepterImpl::setRegistrationContext(std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> _registrationContext)
{
    m_registrationContext = _registrationContext;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<StateMachineEventAccepter> StateMachineEventAccepterImpl::getThisStateMachineEventAccepterPtr() const
{
	return m_thisStateMachineEventAccepterPtr.lock();
}
void StateMachineEventAccepterImpl::setThisStateMachineEventAccepterPtr(std::weak_ptr<StateMachineEventAccepter> thisStateMachineEventAccepterPtr)
{
	m_thisStateMachineEventAccepterPtr = thisStateMachineEventAccepterPtr;
}
std::shared_ptr<ecore::EObject> StateMachineEventAccepterImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any StateMachineEventAccepterImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINEEVENTACCEPTER_EREFERENCE_REGISTRATIONCONTEXT:
			return eAny(getRegistrationContext()); //370
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool StateMachineEventAccepterImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINEEVENTACCEPTER_EREFERENCE_REGISTRATIONCONTEXT:
			return getRegistrationContext() != nullptr; //370
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool StateMachineEventAccepterImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINEEVENTACCEPTER_EREFERENCE_REGISTRATIONCONTEXT:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> _registrationContext = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution>>();
			setRegistrationContext(_registrationContext); //370
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void StateMachineEventAccepterImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void StateMachineEventAccepterImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("registrationContext");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("registrationContext")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void StateMachineEventAccepterImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void StateMachineEventAccepterImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINEEVENTACCEPTER_EREFERENCE_REGISTRATIONCONTEXT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> _registrationContext = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineExecution>( references.front() );
				setRegistrationContext(_registrationContext);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void StateMachineEventAccepterImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void StateMachineEventAccepterImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("registrationContext", this->getRegistrationContext());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

