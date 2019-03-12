#include "PSSM/Semantics/StateMachines/impl/DoActivityExecutionEventAccepterImpl.hpp"

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
#include "fUML/FUMLFactory.hpp"
#include "fUML/FUMLPackage.hpp"

#include <exception> // used in Persistence

#include "PSSM/Semantics/StateMachines/DoActivityContextObject.hpp"

#include "fUML/EventAccepter.hpp"

#include "fUML/EventOccurrence.hpp"

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
DoActivityExecutionEventAccepterImpl::DoActivityExecutionEventAccepterImpl()
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

DoActivityExecutionEventAccepterImpl::~DoActivityExecutionEventAccepterImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete DoActivityExecutionEventAccepter "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




DoActivityExecutionEventAccepterImpl::DoActivityExecutionEventAccepterImpl(const DoActivityExecutionEventAccepterImpl & obj):DoActivityExecutionEventAccepterImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy DoActivityExecutionEventAccepter "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_context  = obj.getContext();


	//Clone references with containment (deep copy)

	if(obj.getEncapsulatedAccepter()!=nullptr)
	{
		m_encapsulatedAccepter = std::dynamic_pointer_cast<fUML::EventAccepter>(obj.getEncapsulatedAccepter()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_encapsulatedAccepter" << std::endl;
	#endif

	
}

std::shared_ptr<ecore::EObject>  DoActivityExecutionEventAccepterImpl::copy() const
{
	std::shared_ptr<DoActivityExecutionEventAccepterImpl> element(new DoActivityExecutionEventAccepterImpl(*this));
	element->setThisDoActivityExecutionEventAccepterPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> DoActivityExecutionEventAccepterImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getDoActivityExecutionEventAccepter_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
void DoActivityExecutionEventAccepterImpl::accept(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool DoActivityExecutionEventAccepterImpl::match(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject > DoActivityExecutionEventAccepterImpl::getContext() const
{
//assert(m_context);
    return m_context;
}
void DoActivityExecutionEventAccepterImpl::setContext(std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _context)
{
    m_context = _context;
}

std::shared_ptr<fUML::EventAccepter > DoActivityExecutionEventAccepterImpl::getEncapsulatedAccepter() const
{
//assert(m_encapsulatedAccepter);
    return m_encapsulatedAccepter;
}
void DoActivityExecutionEventAccepterImpl::setEncapsulatedAccepter(std::shared_ptr<fUML::EventAccepter> _encapsulatedAccepter)
{
    m_encapsulatedAccepter = _encapsulatedAccepter;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<DoActivityExecutionEventAccepter> DoActivityExecutionEventAccepterImpl::getThisDoActivityExecutionEventAccepterPtr() const
{
	return m_thisDoActivityExecutionEventAccepterPtr.lock();
}
void DoActivityExecutionEventAccepterImpl::setThisDoActivityExecutionEventAccepterPtr(std::weak_ptr<DoActivityExecutionEventAccepter> thisDoActivityExecutionEventAccepterPtr)
{
	m_thisDoActivityExecutionEventAccepterPtr = thisDoActivityExecutionEventAccepterPtr;
}
std::shared_ptr<ecore::EObject> DoActivityExecutionEventAccepterImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any DoActivityExecutionEventAccepterImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DOACTIVITYEXECUTIONEVENTACCEPTER_EREFERENCE_CONTEXT:
			return eAny(getContext()); //110
		case PSSM::PSSMPackage::DOACTIVITYEXECUTIONEVENTACCEPTER_EREFERENCE_ENCAPSULATEDACCEPTER:
			return eAny(getEncapsulatedAccepter()); //111
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool DoActivityExecutionEventAccepterImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DOACTIVITYEXECUTIONEVENTACCEPTER_EREFERENCE_CONTEXT:
			return getContext() != nullptr; //110
		case PSSM::PSSMPackage::DOACTIVITYEXECUTIONEVENTACCEPTER_EREFERENCE_ENCAPSULATEDACCEPTER:
			return getEncapsulatedAccepter() != nullptr; //111
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool DoActivityExecutionEventAccepterImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DOACTIVITYEXECUTIONEVENTACCEPTER_EREFERENCE_CONTEXT:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _context = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject>>();
			setContext(_context); //110
			return true;
		}
		case PSSM::PSSMPackage::DOACTIVITYEXECUTIONEVENTACCEPTER_EREFERENCE_ENCAPSULATEDACCEPTER:
		{
			// BOOST CAST
			std::shared_ptr<fUML::EventAccepter> _encapsulatedAccepter = newValue->get<std::shared_ptr<fUML::EventAccepter>>();
			setEncapsulatedAccepter(_encapsulatedAccepter); //111
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void DoActivityExecutionEventAccepterImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void DoActivityExecutionEventAccepterImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
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

void DoActivityExecutionEventAccepterImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("encapsulatedAccepter") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<fUML::EventAccepter> encapsulatedAccepter = std::dynamic_pointer_cast<fUML::EventAccepter>(fUML::FUMLFactory::eInstance()->create(typeName));
			if (encapsulatedAccepter != nullptr)
			{
				this->setEncapsulatedAccepter(encapsulatedAccepter);
				loadHandler->handleChild(encapsulatedAccepter);
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

	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void DoActivityExecutionEventAccepterImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::DOACTIVITYEXECUTIONEVENTACCEPTER_EREFERENCE_CONTEXT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _context = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::DoActivityContextObject>( references.front() );
				setContext(_context);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void DoActivityExecutionEventAccepterImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void DoActivityExecutionEventAccepterImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("context", this->getContext());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'encapsulatedAccepter'
		std::shared_ptr<fUML::EventAccepter > encapsulatedAccepter = this->getEncapsulatedAccepter();
		if (encapsulatedAccepter != nullptr)
		{
			saveHandler->addReference(encapsulatedAccepter, "encapsulatedAccepter", encapsulatedAccepter->eClass() != fUML::FUMLPackage::eInstance()->getEventAccepter_EClass());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

