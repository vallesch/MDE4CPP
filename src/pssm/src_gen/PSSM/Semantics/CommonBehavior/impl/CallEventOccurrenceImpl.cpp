#include "PSSM/Semantics/CommonBehavior/impl/CallEventOccurrenceImpl.hpp"

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

#include "PSSM/Semantics/CommonBehavior/CallEventExecution.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace PSSM::Semantics::CommonBehavior;

//*********************************
// Constructor / Destructor
//*********************************
CallEventOccurrenceImpl::CallEventOccurrenceImpl()
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

CallEventOccurrenceImpl::~CallEventOccurrenceImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CallEventOccurrence "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




CallEventOccurrenceImpl::CallEventOccurrenceImpl(const CallEventOccurrenceImpl & obj):CallEventOccurrenceImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CallEventOccurrence "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_execution  = obj.getExecution();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  CallEventOccurrenceImpl::copy() const
{
	std::shared_ptr<CallEventOccurrenceImpl> element(new CallEventOccurrenceImpl(*this));
	element->setThisCallEventOccurrencePtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> CallEventOccurrenceImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getCallEventOccurrence_EClass();
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
std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecution > CallEventOccurrenceImpl::getExecution() const
{
//assert(m_execution);
    return m_execution;
}
void CallEventOccurrenceImpl::setExecution(std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecution> _execution)
{
    m_execution = _execution;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<CallEventOccurrence> CallEventOccurrenceImpl::getThisCallEventOccurrencePtr() const
{
	return m_thisCallEventOccurrencePtr.lock();
}
void CallEventOccurrenceImpl::setThisCallEventOccurrencePtr(std::weak_ptr<CallEventOccurrence> thisCallEventOccurrencePtr)
{
	m_thisCallEventOccurrencePtr = thisCallEventOccurrencePtr;
}
std::shared_ptr<ecore::EObject> CallEventOccurrenceImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any CallEventOccurrenceImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::CALLEVENTOCCURRENCE_EREFERENCE_EXECUTION:
			return eAny(getExecution()); //20
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool CallEventOccurrenceImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::CALLEVENTOCCURRENCE_EREFERENCE_EXECUTION:
			return getExecution() != nullptr; //20
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool CallEventOccurrenceImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::CALLEVENTOCCURRENCE_EREFERENCE_EXECUTION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecution> _execution = newValue->get<std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecution>>();
			setExecution(_execution); //20
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void CallEventOccurrenceImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void CallEventOccurrenceImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("execution");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("execution")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void CallEventOccurrenceImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void CallEventOccurrenceImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::CALLEVENTOCCURRENCE_EREFERENCE_EXECUTION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecution> _execution = std::dynamic_pointer_cast<PSSM::Semantics::CommonBehavior::CallEventExecution>( references.front() );
				setExecution(_execution);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void CallEventOccurrenceImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void CallEventOccurrenceImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("execution", this->getExecution());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

