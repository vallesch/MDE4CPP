#include "PSSM/Semantics/CommonBehavior/impl/EventTriggeredExecutionImpl.hpp"

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
#include "fUML/FUMLFactory.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "PSSM/PSSMFactory.hpp"
#include "PSSM/PSSMPackage.hpp"

#include <exception> // used in Persistence

#include "uml/Classifier.hpp"

#include "fUML/EventOccurrence.hpp"

#include "fUML/Execution.hpp"

#include "fUML/FeatureValue.hpp"

#include "fUML/Locus.hpp"

#include "fUML/Object.hpp"

#include "fUML/ObjectActivation.hpp"

#include "fUML/ParameterValue.hpp"

#include "fUML/Value.hpp"

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
EventTriggeredExecutionImpl::EventTriggeredExecutionImpl()
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

EventTriggeredExecutionImpl::~EventTriggeredExecutionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete EventTriggeredExecution "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




EventTriggeredExecutionImpl::EventTriggeredExecutionImpl(const EventTriggeredExecutionImpl & obj):EventTriggeredExecutionImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy EventTriggeredExecution "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_context  = obj.getContext();

	m_locus  = obj.getLocus();

	m_triggeringEventOccurrence  = obj.getTriggeringEventOccurrence();

	std::shared_ptr<Bag<uml::Classifier>> _types = obj.getTypes();
	m_types.reset(new Bag<uml::Classifier>(*(obj.getTypes().get())));

	m_wrappedExecution  = obj.getWrappedExecution();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<fUML::FeatureValue>> _featureValuesList = obj.getFeatureValues();
	for(std::shared_ptr<fUML::FeatureValue> _featureValues : *_featureValuesList)
	{
		this->getFeatureValues()->add(std::shared_ptr<fUML::FeatureValue>(std::dynamic_pointer_cast<fUML::FeatureValue>(_featureValues->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_featureValues" << std::endl;
	#endif
	if(obj.getObjectActivation()!=nullptr)
	{
		m_objectActivation = std::dynamic_pointer_cast<fUML::ObjectActivation>(obj.getObjectActivation()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_objectActivation" << std::endl;
	#endif
	std::shared_ptr<Bag<fUML::ParameterValue>> _parameterValuesList = obj.getParameterValues();
	for(std::shared_ptr<fUML::ParameterValue> _parameterValues : *_parameterValuesList)
	{
		this->getParameterValues()->add(std::shared_ptr<fUML::ParameterValue>(std::dynamic_pointer_cast<fUML::ParameterValue>(_parameterValues->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_parameterValues" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  EventTriggeredExecutionImpl::copy() const
{
	std::shared_ptr<EventTriggeredExecutionImpl> element(new EventTriggeredExecutionImpl(*this));
	element->setThisEventTriggeredExecutionPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> EventTriggeredExecutionImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getEventTriggeredExecution_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<fUML::Value> EventTriggeredExecutionImpl::copy()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void EventTriggeredExecutionImpl::execute()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void EventTriggeredExecutionImpl::finalize()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void EventTriggeredExecutionImpl::initialize()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<fUML::Value> EventTriggeredExecutionImpl::new_()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<fUML::EventOccurrence > EventTriggeredExecutionImpl::getTriggeringEventOccurrence() const
{
//assert(m_triggeringEventOccurrence);
    return m_triggeringEventOccurrence;
}
void EventTriggeredExecutionImpl::setTriggeringEventOccurrence(std::shared_ptr<fUML::EventOccurrence> _triggeringEventOccurrence)
{
    m_triggeringEventOccurrence = _triggeringEventOccurrence;
}

std::shared_ptr<fUML::EventOccurrence > EventTriggeredExecutionImpl::getWrappedExecution() const
{
//assert(m_wrappedExecution);
    return m_wrappedExecution;
}
void EventTriggeredExecutionImpl::setWrappedExecution(std::shared_ptr<fUML::EventOccurrence> _wrappedExecution)
{
    m_wrappedExecution = _wrappedExecution;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<EventTriggeredExecution> EventTriggeredExecutionImpl::getThisEventTriggeredExecutionPtr() const
{
	return m_thisEventTriggeredExecutionPtr.lock();
}
void EventTriggeredExecutionImpl::setThisEventTriggeredExecutionPtr(std::weak_ptr<EventTriggeredExecution> thisEventTriggeredExecutionPtr)
{
	m_thisEventTriggeredExecutionPtr = thisEventTriggeredExecutionPtr;
	setThisExecutionPtr(thisEventTriggeredExecutionPtr);
}
std::shared_ptr<ecore::EObject> EventTriggeredExecutionImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any EventTriggeredExecutionImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::EVENTTRIGGEREDEXECUTION_EREFERENCE_TRIGGERINGEVENTOCCURRENCE:
			return eAny(getTriggeringEventOccurrence()); //137
		case PSSM::PSSMPackage::EVENTTRIGGEREDEXECUTION_EREFERENCE_WRAPPEDEXECUTION:
			return eAny(getWrappedExecution()); //136
	}
	return fUML::ExecutionImpl::eGet(featureID, resolve, coreType);
}
bool EventTriggeredExecutionImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::EVENTTRIGGEREDEXECUTION_EREFERENCE_TRIGGERINGEVENTOCCURRENCE:
			return getTriggeringEventOccurrence() != nullptr; //137
		case PSSM::PSSMPackage::EVENTTRIGGEREDEXECUTION_EREFERENCE_WRAPPEDEXECUTION:
			return getWrappedExecution() != nullptr; //136
	}
	return fUML::ExecutionImpl::internalEIsSet(featureID);
}
bool EventTriggeredExecutionImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::EVENTTRIGGEREDEXECUTION_EREFERENCE_TRIGGERINGEVENTOCCURRENCE:
		{
			// BOOST CAST
			std::shared_ptr<fUML::EventOccurrence> _triggeringEventOccurrence = newValue->get<std::shared_ptr<fUML::EventOccurrence>>();
			setTriggeringEventOccurrence(_triggeringEventOccurrence); //137
			return true;
		}
		case PSSM::PSSMPackage::EVENTTRIGGEREDEXECUTION_EREFERENCE_WRAPPEDEXECUTION:
		{
			// BOOST CAST
			std::shared_ptr<fUML::EventOccurrence> _wrappedExecution = newValue->get<std::shared_ptr<fUML::EventOccurrence>>();
			setWrappedExecution(_wrappedExecution); //136
			return true;
		}
	}

	return fUML::ExecutionImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void EventTriggeredExecutionImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void EventTriggeredExecutionImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("triggeringEventOccurrence");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("triggeringEventOccurrence")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("wrappedExecution");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("wrappedExecution")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	fUML::ExecutionImpl::loadAttributes(loadHandler, attr_list);
}

void EventTriggeredExecutionImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	fUML::ExecutionImpl::loadNode(nodeName, loadHandler, fUML::FUMLFactory::eInstance());
}

void EventTriggeredExecutionImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::EVENTTRIGGEREDEXECUTION_EREFERENCE_TRIGGERINGEVENTOCCURRENCE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::EventOccurrence> _triggeringEventOccurrence = std::dynamic_pointer_cast<fUML::EventOccurrence>( references.front() );
				setTriggeringEventOccurrence(_triggeringEventOccurrence);
			}
			
			return;
		}

		case PSSM::PSSMPackage::EVENTTRIGGEREDEXECUTION_EREFERENCE_WRAPPEDEXECUTION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::EventOccurrence> _wrappedExecution = std::dynamic_pointer_cast<fUML::EventOccurrence>( references.front() );
				setWrappedExecution(_wrappedExecution);
			}
			
			return;
		}
	}
	fUML::ExecutionImpl::resolveReferences(featureID, references);
}

void EventTriggeredExecutionImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::ExecutionImpl::saveContent(saveHandler);
	
	fUML::ObjectImpl::saveContent(saveHandler);
	
	fUML::ExtensionalValueImpl::saveContent(saveHandler);
	
	fUML::CompoundValueImpl::saveContent(saveHandler);
	
	fUML::StructuredValueImpl::saveContent(saveHandler);
	
	fUML::ValueImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
	
	
	
	
}

void EventTriggeredExecutionImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("triggeringEventOccurrence", this->getTriggeringEventOccurrence());
		saveHandler->addReference("wrappedExecution", this->getWrappedExecution());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

