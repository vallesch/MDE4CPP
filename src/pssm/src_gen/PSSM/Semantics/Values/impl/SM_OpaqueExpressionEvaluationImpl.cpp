#include "PSSM/Semantics/Values/impl/SM_OpaqueExpressionEvaluationImpl.hpp"

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

#include "fUML/Object.hpp"

#include "uml/Parameter.hpp"

#include "fUML/ParameterValue.hpp"

#include "fUML/Value.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace PSSM::Semantics::Values;

//*********************************
// Constructor / Destructor
//*********************************
SM_OpaqueExpressionEvaluationImpl::SM_OpaqueExpressionEvaluationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

		m_parameterValues.reset(new Bag<fUML::ParameterValue>());
	
	

	//Init references
	

	
	
}

SM_OpaqueExpressionEvaluationImpl::~SM_OpaqueExpressionEvaluationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SM_OpaqueExpressionEvaluation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




SM_OpaqueExpressionEvaluationImpl::SM_OpaqueExpressionEvaluationImpl(const SM_OpaqueExpressionEvaluationImpl & obj):SM_OpaqueExpressionEvaluationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SM_OpaqueExpressionEvaluation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_context  = obj.getContext();

	std::shared_ptr<Bag<fUML::ParameterValue>> _parameterValues = obj.getParameterValues();
	m_parameterValues.reset(new Bag<fUML::ParameterValue>(*(obj.getParameterValues().get())));


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  SM_OpaqueExpressionEvaluationImpl::copy() const
{
	std::shared_ptr<SM_OpaqueExpressionEvaluationImpl> element(new SM_OpaqueExpressionEvaluationImpl(*this));
	element->setThisSM_OpaqueExpressionEvaluationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> SM_OpaqueExpressionEvaluationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getSM_OpaqueExpressionEvaluation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<Bag<fUML::Value> > SM_OpaqueExpressionEvaluationImpl::executeExpressionBehavior()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<fUML::ParameterValue> SM_OpaqueExpressionEvaluationImpl::getParameterValue(std::shared_ptr<uml::Parameter>  parameter)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void SM_OpaqueExpressionEvaluationImpl::initialize(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void SM_OpaqueExpressionEvaluationImpl::setParameterValue(std::shared_ptr<fUML::ParameterValue>  parameterValue)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<fUML::Object > SM_OpaqueExpressionEvaluationImpl::getContext() const
{

    return m_context;
}
void SM_OpaqueExpressionEvaluationImpl::setContext(std::shared_ptr<fUML::Object> _context)
{
    m_context = _context;
}

std::shared_ptr<Bag<fUML::ParameterValue>> SM_OpaqueExpressionEvaluationImpl::getParameterValues() const
{

    return m_parameterValues;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<SM_OpaqueExpressionEvaluation> SM_OpaqueExpressionEvaluationImpl::getThisSM_OpaqueExpressionEvaluationPtr() const
{
	return m_thisSM_OpaqueExpressionEvaluationPtr.lock();
}
void SM_OpaqueExpressionEvaluationImpl::setThisSM_OpaqueExpressionEvaluationPtr(std::weak_ptr<SM_OpaqueExpressionEvaluation> thisSM_OpaqueExpressionEvaluationPtr)
{
	m_thisSM_OpaqueExpressionEvaluationPtr = thisSM_OpaqueExpressionEvaluationPtr;
}
std::shared_ptr<ecore::EObject> SM_OpaqueExpressionEvaluationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any SM_OpaqueExpressionEvaluationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OPAQUEEXPRESSIONEVALUATION_EREFERENCE_CONTEXT:
			return eAny(getContext()); //300
		case PSSM::PSSMPackage::SM_OPAQUEEXPRESSIONEVALUATION_EREFERENCE_PARAMETERVALUES:
			return eAny(getParameterValues()); //301
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool SM_OpaqueExpressionEvaluationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OPAQUEEXPRESSIONEVALUATION_EREFERENCE_CONTEXT:
			return getContext() != nullptr; //300
		case PSSM::PSSMPackage::SM_OPAQUEEXPRESSIONEVALUATION_EREFERENCE_PARAMETERVALUES:
			return getParameterValues() != nullptr; //301
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool SM_OpaqueExpressionEvaluationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OPAQUEEXPRESSIONEVALUATION_EREFERENCE_CONTEXT:
		{
			// BOOST CAST
			std::shared_ptr<fUML::Object> _context = newValue->get<std::shared_ptr<fUML::Object>>();
			setContext(_context); //300
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void SM_OpaqueExpressionEvaluationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void SM_OpaqueExpressionEvaluationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
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

		iter = attr_list.find("parameterValues");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("parameterValues")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void SM_OpaqueExpressionEvaluationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void SM_OpaqueExpressionEvaluationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OPAQUEEXPRESSIONEVALUATION_EREFERENCE_CONTEXT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::Object> _context = std::dynamic_pointer_cast<fUML::Object>( references.front() );
				setContext(_context);
			}
			
			return;
		}

		case PSSM::PSSMPackage::SM_OPAQUEEXPRESSIONEVALUATION_EREFERENCE_PARAMETERVALUES:
		{
			std::shared_ptr<Bag<fUML::ParameterValue>> _parameterValues = getParameterValues();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<fUML::ParameterValue> _r = std::dynamic_pointer_cast<fUML::ParameterValue>(ref);
				if (_r != nullptr)
				{
					_parameterValues->push_back(_r);
				}				
			}
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void SM_OpaqueExpressionEvaluationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void SM_OpaqueExpressionEvaluationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("context", this->getContext());
		std::shared_ptr<Bag<fUML::ParameterValue>> parameterValues_list = this->getParameterValues();
		for (std::shared_ptr<fUML::ParameterValue > object : *parameterValues_list)
		{ 
			saveHandler->addReferences("parameterValues", object);
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

