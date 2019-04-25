#include "PSSM/Semantics/CommonBehavior/impl/CallEventExecutionImpl.hpp"

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

#include "PSSM/Semantics/CommonBehavior/CallEventOccurrence.hpp"

#include "uml/Classifier.hpp"

#include "fUML/Execution.hpp"

#include "fUML/FeatureValue.hpp"

#include "fUML/Locus.hpp"

#include "fUML/Object.hpp"

#include "fUML/ObjectActivation.hpp"

#include "uml/Operation.hpp"

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
CallEventExecutionImpl::CallEventExecutionImpl()
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

CallEventExecutionImpl::~CallEventExecutionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete CallEventExecution "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




CallEventExecutionImpl::CallEventExecutionImpl(const CallEventExecutionImpl & obj):CallEventExecutionImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy CallEventExecution "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_callerSuspended = obj.getCallerSuspended();

	//copy references with no containment (soft copy)
	
	m_behavior  = obj.getBehavior();

	m_callerContext  = obj.getCallerContext();

	m_context  = obj.getContext();

	m_locus  = obj.getLocus();

	m_operation  = obj.getOperation();

	std::shared_ptr<Bag<uml::Classifier>> _types = obj.getTypes();
	m_types.reset(new Bag<uml::Classifier>(*(obj.getTypes().get())));


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

std::shared_ptr<ecore::EObject>  CallEventExecutionImpl::copy() const
{
	std::shared_ptr<CallEventExecutionImpl> element(new CallEventExecutionImpl(*this));
	element->setThisCallEventExecutionPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> CallEventExecutionImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getCallEventExecution_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void CallEventExecutionImpl::setCallerSuspended(bool _callerSuspended)
{
	m_callerSuspended = _callerSuspended;
} 

bool CallEventExecutionImpl::getCallerSuspended() const 
{
	return m_callerSuspended;
}

//*********************************
// Operations
//*********************************
void CallEventExecutionImpl::_send(std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void CallEventExecutionImpl::_suspend()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void CallEventExecutionImpl::execute()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



std::shared_ptr<Bag<fUML::ParameterValue> > CallEventExecutionImpl::getInputParameterValues()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<fUML::Value> CallEventExecutionImpl::new_()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void CallEventExecutionImpl::releaseCaller()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::Behavior > CallEventExecutionImpl::getBehavior() const
{
//assert(m_behavior);
    return m_behavior;
}
void CallEventExecutionImpl::setBehavior(std::shared_ptr<uml::Behavior> _behavior)
{
    m_behavior = _behavior;
}

std::shared_ptr<fUML::Object > CallEventExecutionImpl::getCallerContext() const
{
//assert(m_callerContext);
    return m_callerContext;
}
void CallEventExecutionImpl::setCallerContext(std::shared_ptr<fUML::Object> _callerContext)
{
    m_callerContext = _callerContext;
}

std::shared_ptr<uml::Operation > CallEventExecutionImpl::getOperation() const
{
//assert(m_operation);
    return m_operation;
}
void CallEventExecutionImpl::setOperation(std::shared_ptr<uml::Operation> _operation)
{
    m_operation = _operation;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<CallEventExecution> CallEventExecutionImpl::getThisCallEventExecutionPtr() const
{
	return m_thisCallEventExecutionPtr.lock();
}
void CallEventExecutionImpl::setThisCallEventExecutionPtr(std::weak_ptr<CallEventExecution> thisCallEventExecutionPtr)
{
	m_thisCallEventExecutionPtr = thisCallEventExecutionPtr;
	setThisExecutionPtr(thisCallEventExecutionPtr);
}
std::shared_ptr<ecore::EObject> CallEventExecutionImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any CallEventExecutionImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_BEHAVIOR:
			return eAny(getBehavior()); //19
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_CALLERCONTEXT:
			return eAny(getCallerContext()); //17
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EATTRIBUTE_CALLERSUSPENDED:
			return eAny(getCallerSuspended()); //16
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_OPERATION:
			return eAny(getOperation()); //18
	}
	return fUML::ExecutionImpl::eGet(featureID, resolve, coreType);
}
bool CallEventExecutionImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_BEHAVIOR:
			return getBehavior() != nullptr; //19
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_CALLERCONTEXT:
			return getCallerContext() != nullptr; //17
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EATTRIBUTE_CALLERSUSPENDED:
			return getCallerSuspended() != false; //16
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_OPERATION:
			return getOperation() != nullptr; //18
	}
	return fUML::ExecutionImpl::internalEIsSet(featureID);
}
bool CallEventExecutionImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_BEHAVIOR:
		{
			// BOOST CAST
			std::shared_ptr<uml::Behavior> _behavior = newValue->get<std::shared_ptr<uml::Behavior>>();
			setBehavior(_behavior); //19
			return true;
		}
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_CALLERCONTEXT:
		{
			// BOOST CAST
			std::shared_ptr<fUML::Object> _callerContext = newValue->get<std::shared_ptr<fUML::Object>>();
			setCallerContext(_callerContext); //17
			return true;
		}
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EATTRIBUTE_CALLERSUSPENDED:
		{
			// BOOST CAST
			bool _callerSuspended = newValue->get<bool>();
			setCallerSuspended(_callerSuspended); //16
			return true;
		}
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_OPERATION:
		{
			// BOOST CAST
			std::shared_ptr<uml::Operation> _operation = newValue->get<std::shared_ptr<uml::Operation>>();
			setOperation(_operation); //18
			return true;
		}
	}

	return fUML::ExecutionImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void CallEventExecutionImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void CallEventExecutionImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("callerSuspended");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setCallerSuspended(value);
		}
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("behavior");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("behavior")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("callerContext");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("callerContext")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("operation");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("operation")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void CallEventExecutionImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	fUML::ExecutionImpl::loadNode(nodeName, loadHandler, fUML::FUMLFactory::eInstance());
}

void CallEventExecutionImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_BEHAVIOR:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::Behavior> _behavior = std::dynamic_pointer_cast<uml::Behavior>( references.front() );
				setBehavior(_behavior);
			}
			
			return;
		}

		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_CALLERCONTEXT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::Object> _callerContext = std::dynamic_pointer_cast<fUML::Object>( references.front() );
				setCallerContext(_callerContext);
			}
			
			return;
		}

		case PSSM::PSSMPackage::CALLEVENTEXECUTION_EREFERENCE_OPERATION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::Operation> _operation = std::dynamic_pointer_cast<uml::Operation>( references.front() );
				setOperation(_operation);
			}
			
			return;
		}
	}
	fUML::ExecutionImpl::resolveReferences(featureID, references);
}

void CallEventExecutionImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
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

void CallEventExecutionImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	
 
		// Add attributes
		if ( this->eIsSet(package->getCallEventExecution_EAttribute_callerSuspended()) )
		{
			saveHandler->addAttribute("callerSuspended", this->getCallerSuspended());
		}

		// Add references
		saveHandler->addReference("behavior", this->getBehavior());
		saveHandler->addReference("callerContext", this->getCallerContext());
		saveHandler->addReference("operation", this->getOperation());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

