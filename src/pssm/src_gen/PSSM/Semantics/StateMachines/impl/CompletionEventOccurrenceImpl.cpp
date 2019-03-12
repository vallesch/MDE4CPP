#include "PSSM/Semantics/StateMachines/impl/CompletionEventOccurrenceImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/StateActivation.hpp"

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
CompletionEventOccurrenceImpl::CompletionEventOccurrenceImpl()
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

CompletionEventOccurrenceImpl::~CompletionEventOccurrenceImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CompletionEventOccurrence "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




CompletionEventOccurrenceImpl::CompletionEventOccurrenceImpl(const CompletionEventOccurrenceImpl & obj):CompletionEventOccurrenceImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CompletionEventOccurrence "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_stateActivation  = obj.getStateActivation();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  CompletionEventOccurrenceImpl::copy() const
{
	std::shared_ptr<CompletionEventOccurrenceImpl> element(new CompletionEventOccurrenceImpl(*this));
	element->setThisCompletionEventOccurrencePtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> CompletionEventOccurrenceImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getCompletionEventOccurrence_EClass();
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
std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation > CompletionEventOccurrenceImpl::getStateActivation() const
{
//assert(m_stateActivation);
    return m_stateActivation;
}
void CompletionEventOccurrenceImpl::setStateActivation(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _stateActivation)
{
    m_stateActivation = _stateActivation;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<CompletionEventOccurrence> CompletionEventOccurrenceImpl::getThisCompletionEventOccurrencePtr() const
{
	return m_thisCompletionEventOccurrencePtr.lock();
}
void CompletionEventOccurrenceImpl::setThisCompletionEventOccurrencePtr(std::weak_ptr<CompletionEventOccurrence> thisCompletionEventOccurrencePtr)
{
	m_thisCompletionEventOccurrencePtr = thisCompletionEventOccurrencePtr;
}
std::shared_ptr<ecore::EObject> CompletionEventOccurrenceImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any CompletionEventOccurrenceImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::COMPLETIONEVENTOCCURRENCE_EREFERENCE_STATEACTIVATION:
			return eAny(getStateActivation()); //40
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool CompletionEventOccurrenceImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::COMPLETIONEVENTOCCURRENCE_EREFERENCE_STATEACTIVATION:
			return getStateActivation() != nullptr; //40
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool CompletionEventOccurrenceImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::COMPLETIONEVENTOCCURRENCE_EREFERENCE_STATEACTIVATION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _stateActivation = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>>();
			setStateActivation(_stateActivation); //40
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void CompletionEventOccurrenceImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void CompletionEventOccurrenceImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("stateActivation");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("stateActivation")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void CompletionEventOccurrenceImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void CompletionEventOccurrenceImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::COMPLETIONEVENTOCCURRENCE_EREFERENCE_STATEACTIVATION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _stateActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateActivation>( references.front() );
				setStateActivation(_stateActivation);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void CompletionEventOccurrenceImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void CompletionEventOccurrenceImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("stateActivation", this->getStateActivation());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

