#include "PSSM/Semantics/StateMachines/impl/StateMachineConfigurationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/StateConfiguration.hpp"

#include "PSSM/Semantics/StateMachines/StateMachineExecution.hpp"

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
StateMachineConfigurationImpl::StateMachineConfigurationImpl()
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

StateMachineConfigurationImpl::~StateMachineConfigurationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StateMachineConfiguration "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			StateMachineConfigurationImpl::StateMachineConfigurationImpl(std::weak_ptr<PSSM::Semantics::StateMachines::StateMachineExecution > par_execution)
			:StateMachineConfigurationImpl()
			{
			    m_execution = par_execution;
			}






StateMachineConfigurationImpl::StateMachineConfigurationImpl(const StateMachineConfigurationImpl & obj):StateMachineConfigurationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StateMachineConfiguration "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_execution  = obj.getExecution();

	m_rootConfiguration  = obj.getRootConfiguration();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  StateMachineConfigurationImpl::copy() const
{
	std::shared_ptr<StateMachineConfigurationImpl> element(new StateMachineConfigurationImpl(*this));
	element->setThisStateMachineConfigurationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> StateMachineConfigurationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getStateMachineConfiguration_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
bool StateMachineConfigurationImpl::_register(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineConfigurationImpl::add(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> StateMachineConfigurationImpl::getRoot()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> > StateMachineConfigurationImpl::getVertexActivationsAtLevel(int level)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineConfigurationImpl::isActive(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineConfigurationImpl::isStable()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineConfigurationImpl::remove(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  vertexActivation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineConfigurationImpl::unregister(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::weak_ptr<PSSM::Semantics::StateMachines::StateMachineExecution > StateMachineConfigurationImpl::getExecution() const
{
//assert(m_execution);
    return m_execution;
}
void StateMachineConfigurationImpl::setExecution(std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> _execution)
{
    m_execution = _execution;
}

std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration > StateMachineConfigurationImpl::getRootConfiguration() const
{
//assert(m_rootConfiguration);
    return m_rootConfiguration;
}
void StateMachineConfigurationImpl::setRootConfiguration(std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> _rootConfiguration)
{
    m_rootConfiguration = _rootConfiguration;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<StateMachineConfiguration> StateMachineConfigurationImpl::getThisStateMachineConfigurationPtr() const
{
	return m_thisStateMachineConfigurationPtr.lock();
}
void StateMachineConfigurationImpl::setThisStateMachineConfigurationPtr(std::weak_ptr<StateMachineConfiguration> thisStateMachineConfigurationPtr)
{
	m_thisStateMachineConfigurationPtr = thisStateMachineConfigurationPtr;
}
std::shared_ptr<ecore::EObject> StateMachineConfigurationImpl::eContainer() const
{
	if(auto wp = m_execution.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any StateMachineConfigurationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINECONFIGURATION_EREFERENCE_EXECUTION:
			return eAny(getExecution()); //361
		case PSSM::PSSMPackage::STATEMACHINECONFIGURATION_EREFERENCE_ROOTCONFIGURATION:
			return eAny(getRootConfiguration()); //360
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool StateMachineConfigurationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINECONFIGURATION_EREFERENCE_EXECUTION:
			return getExecution().lock() != nullptr; //361
		case PSSM::PSSMPackage::STATEMACHINECONFIGURATION_EREFERENCE_ROOTCONFIGURATION:
			return getRootConfiguration() != nullptr; //360
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool StateMachineConfigurationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINECONFIGURATION_EREFERENCE_EXECUTION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> _execution = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution>>();
			setExecution(_execution); //361
			return true;
		}
		case PSSM::PSSMPackage::STATEMACHINECONFIGURATION_EREFERENCE_ROOTCONFIGURATION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> _rootConfiguration = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>>();
			setRootConfiguration(_rootConfiguration); //360
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void StateMachineConfigurationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void StateMachineConfigurationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("rootConfiguration");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("rootConfiguration")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void StateMachineConfigurationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void StateMachineConfigurationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINECONFIGURATION_EREFERENCE_EXECUTION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> _execution = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineExecution>( references.front() );
				setExecution(_execution);
			}
			
			return;
		}

		case PSSM::PSSMPackage::STATEMACHINECONFIGURATION_EREFERENCE_ROOTCONFIGURATION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> _rootConfiguration = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateConfiguration>( references.front() );
				setRootConfiguration(_rootConfiguration);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void StateMachineConfigurationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void StateMachineConfigurationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("rootConfiguration", this->getRootConfiguration());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

