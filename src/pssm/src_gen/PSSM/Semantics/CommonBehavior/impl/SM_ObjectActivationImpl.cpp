#include "PSSM/Semantics/CommonBehavior/impl/SM_ObjectActivationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/CompletionEventOccurrence.hpp"

#include "PSSM/Semantics/StateMachines/DeferredEventOccurrence.hpp"

#include "fUML/EventOccurrence.hpp"

#include "PSSM/Semantics/StateMachines/StateActivation.hpp"

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
SM_ObjectActivationImpl::SM_ObjectActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		m_deferredEventPool.reset(new Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>());
	
	

	//Init references
	
	
}

SM_ObjectActivationImpl::~SM_ObjectActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SM_ObjectActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




SM_ObjectActivationImpl::SM_ObjectActivationImpl(const SM_ObjectActivationImpl & obj):SM_ObjectActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SM_ObjectActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> _deferredEventPool = obj.getDeferredEventPool();
	m_deferredEventPool.reset(new Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>(*(obj.getDeferredEventPool().get())));


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  SM_ObjectActivationImpl::copy() const
{
	std::shared_ptr<SM_ObjectActivationImpl> element(new SM_ObjectActivationImpl(*this));
	element->setThisSM_ObjectActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> SM_ObjectActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getSM_ObjectActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
int SM_ObjectActivationImpl::getDeferredEventInsertionIndex()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrence> SM_ObjectActivationImpl::getNextCompletionEvent()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<fUML::EventOccurrence> SM_ObjectActivationImpl::getNextEvent()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void SM_ObjectActivationImpl::registerCompletionEvent(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void SM_ObjectActivationImpl::registerDeferredEvent(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void SM_ObjectActivationImpl::releaseDeferredEvents(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  deferringState)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> SM_ObjectActivationImpl::getDeferredEventPool() const
{

    return m_deferredEventPool;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<SM_ObjectActivation> SM_ObjectActivationImpl::getThisSM_ObjectActivationPtr() const
{
	return m_thisSM_ObjectActivationPtr.lock();
}
void SM_ObjectActivationImpl::setThisSM_ObjectActivationPtr(std::weak_ptr<SM_ObjectActivation> thisSM_ObjectActivationPtr)
{
	m_thisSM_ObjectActivationPtr = thisSM_ObjectActivationPtr;
}
std::shared_ptr<ecore::EObject> SM_ObjectActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any SM_ObjectActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OBJECTACTIVATION_EREFERENCE_DEFERREDEVENTPOOL:
			return eAny(getDeferredEventPool()); //290
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool SM_ObjectActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OBJECTACTIVATION_EREFERENCE_DEFERREDEVENTPOOL:
			return getDeferredEventPool() != nullptr; //290
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool SM_ObjectActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void SM_ObjectActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void SM_ObjectActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("deferredEventPool");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("deferredEventPool")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void SM_ObjectActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void SM_ObjectActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OBJECTACTIVATION_EREFERENCE_DEFERREDEVENTPOOL:
		{
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> _deferredEventPool = getDeferredEventPool();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<PSSM::Semantics::StateMachines::DeferredEventOccurrence> _r = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::DeferredEventOccurrence>(ref);
				if (_r != nullptr)
				{
					_deferredEventPool->push_back(_r);
				}				
			}
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void SM_ObjectActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void SM_ObjectActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> deferredEventPool_list = this->getDeferredEventPool();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::DeferredEventOccurrence > object : *deferredEventPool_list)
		{ 
			saveHandler->addReferences("deferredEventPool", object);
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

