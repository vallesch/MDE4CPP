#include "PSSM/Semantics/StateMachines/impl/DoActivityContextObjectImpl.hpp"

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

#include "uml/Class.hpp"

#include "fUML/EventAccepter.hpp"

#include "fUML/EventOccurrence.hpp"

#include "fUML/Execution.hpp"

#include "fUML/FeatureValue.hpp"

#include "fUML/Object.hpp"

#include "uml/Operation.hpp"

#include "fUML/ParameterValue.hpp"

#include "PSSM/Semantics/StateMachines/StateActivation.hpp"

#include "uml/StructuralFeature.hpp"

#include "fUML/Value.hpp"

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
DoActivityContextObjectImpl::DoActivityContextObjectImpl()
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

DoActivityContextObjectImpl::~DoActivityContextObjectImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DoActivityContextObject "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




DoActivityContextObjectImpl::DoActivityContextObjectImpl(const DoActivityContextObjectImpl & obj):DoActivityContextObjectImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DoActivityContextObject "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_context  = obj.getContext();

	m_owner  = obj.getOwner();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  DoActivityContextObjectImpl::copy() const
{
	std::shared_ptr<DoActivityContextObjectImpl> element(new DoActivityContextObjectImpl(*this));
	element->setThisDoActivityContextObjectPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> DoActivityContextObjectImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getDoActivityContextObject_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
void DoActivityContextObjectImpl::_register(std::shared_ptr<fUML::EventAccepter>  accepter)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void DoActivityContextObjectImpl::destroy()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<fUML::Execution> DoActivityContextObjectImpl::dispatch(std::shared_ptr<uml::Operation>  operation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<fUML::FeatureValue> DoActivityContextObjectImpl::getFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void DoActivityContextObjectImpl::initialize(std::shared_ptr<fUML::Object>  context)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void DoActivityContextObjectImpl::send(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void DoActivityContextObjectImpl::setFeatureValue(std::shared_ptr<uml::StructuralFeature>  feature,std::shared_ptr<Bag<fUML::Value> >  values,int position)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void DoActivityContextObjectImpl::startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::ParameterValue> >  inputs)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void DoActivityContextObjectImpl::unregister(std::shared_ptr<fUML::EventAccepter>  accepter)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void DoActivityContextObjectImpl::unregisterFromContext(std::shared_ptr<fUML::EventAccepter>  encapsulatedAccepter)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<fUML::Object > DoActivityContextObjectImpl::getContext() const
{
//assert(m_context);
    return m_context;
}
void DoActivityContextObjectImpl::setContext(std::shared_ptr<fUML::Object> _context)
{
    m_context = _context;
}

std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation > DoActivityContextObjectImpl::getOwner() const
{
//assert(m_owner);
    return m_owner;
}
void DoActivityContextObjectImpl::setOwner(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _owner)
{
    m_owner = _owner;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<DoActivityContextObject> DoActivityContextObjectImpl::getThisDoActivityContextObjectPtr() const
{
	return m_thisDoActivityContextObjectPtr.lock();
}
void DoActivityContextObjectImpl::setThisDoActivityContextObjectPtr(std::weak_ptr<DoActivityContextObject> thisDoActivityContextObjectPtr)
{
	m_thisDoActivityContextObjectPtr = thisDoActivityContextObjectPtr;
}
std::shared_ptr<ecore::EObject> DoActivityContextObjectImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any DoActivityContextObjectImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DOACTIVITYCONTEXTOBJECT_EREFERENCE_CONTEXT:
			return eAny(getContext()); //90
		case PSSM::PSSMPackage::DOACTIVITYCONTEXTOBJECT_EREFERENCE_OWNER:
			return eAny(getOwner()); //91
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool DoActivityContextObjectImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DOACTIVITYCONTEXTOBJECT_EREFERENCE_CONTEXT:
			return getContext() != nullptr; //90
		case PSSM::PSSMPackage::DOACTIVITYCONTEXTOBJECT_EREFERENCE_OWNER:
			return getOwner() != nullptr; //91
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool DoActivityContextObjectImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DOACTIVITYCONTEXTOBJECT_EREFERENCE_CONTEXT:
		{
			// BOOST CAST
			std::shared_ptr<fUML::Object> _context = newValue->get<std::shared_ptr<fUML::Object>>();
			setContext(_context); //90
			return true;
		}
		case PSSM::PSSMPackage::DOACTIVITYCONTEXTOBJECT_EREFERENCE_OWNER:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _owner = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>>();
			setOwner(_owner); //91
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void DoActivityContextObjectImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void DoActivityContextObjectImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("context");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("context")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("owner");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("owner")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void DoActivityContextObjectImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void DoActivityContextObjectImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DOACTIVITYCONTEXTOBJECT_EREFERENCE_CONTEXT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::Object> _context = std::dynamic_pointer_cast<fUML::Object>( references.front() );
				setContext(_context);
			}
			
			return;
		}

		case PSSM::PSSMPackage::DOACTIVITYCONTEXTOBJECT_EREFERENCE_OWNER:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _owner = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateActivation>( references.front() );
				setOwner(_owner);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void DoActivityContextObjectImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void DoActivityContextObjectImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("context", this->getContext());
		saveHandler->addReference("owner", this->getOwner());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

