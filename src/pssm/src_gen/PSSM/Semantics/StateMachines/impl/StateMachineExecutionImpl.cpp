#include "PSSM/Semantics/StateMachines/impl/StateMachineExecutionImpl.hpp"

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

#include "fUML/ParameterValue.hpp"

#include "PSSM/Semantics/StateMachines/RegionActivation.hpp"

#include "PSSM/Semantics/StateMachines/StateMachineConfiguration.hpp"

#include "fUML/Value.hpp"

#include "uml/Vertex.hpp"

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
StateMachineExecutionImpl::StateMachineExecutionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

		m_regionActivations.reset(new Bag<PSSM::Semantics::StateMachines::RegionActivation>());
	
	

	//Init references
	

	
	
}

StateMachineExecutionImpl::~StateMachineExecutionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StateMachineExecution "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




StateMachineExecutionImpl::StateMachineExecutionImpl(const StateMachineExecutionImpl & obj):StateMachineExecutionImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StateMachineExecution "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	

	//Clone references with containment (deep copy)

	if(obj.getConfiguration()!=nullptr)
	{
		m_configuration = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineConfiguration>(obj.getConfiguration()->copy());
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_configuration" << std::endl;
	#endif
	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> _regionActivationsList = obj.getRegionActivations();
	for(std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> _regionActivations : *_regionActivationsList)
	{
		this->getRegionActivations()->add(std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>(_regionActivations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_regionActivations" << std::endl;
	#endif

	

	
	
}

std::shared_ptr<ecore::EObject>  StateMachineExecutionImpl::copy() const
{
	std::shared_ptr<StateMachineExecutionImpl> element(new StateMachineExecutionImpl(*this));
	element->setThisStateMachineExecutionPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> StateMachineExecutionImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getStateMachineExecution_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
void StateMachineExecutionImpl::execute()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation> > StateMachineExecutionImpl::getRegionActivation()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> StateMachineExecutionImpl::getVertexActivation(std::shared_ptr<uml::Vertex>  vertex)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateMachineExecutionImpl::initRegions()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<fUML::Value> StateMachineExecutionImpl::new_()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateMachineExecutionImpl::startBehavior(std::shared_ptr<uml::Class>  classifier,std::shared_ptr<Bag<fUML::ParameterValue> >  inputs)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateMachineExecutionImpl::terminate()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration > StateMachineExecutionImpl::getConfiguration() const
{
//assert(m_configuration);
    return m_configuration;
}
void StateMachineExecutionImpl::setConfiguration(std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration> _configuration)
{
    m_configuration = _configuration;
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> StateMachineExecutionImpl::getRegionActivations() const
{
//assert(m_regionActivations);
    return m_regionActivations;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<StateMachineExecution> StateMachineExecutionImpl::getThisStateMachineExecutionPtr() const
{
	return m_thisStateMachineExecutionPtr.lock();
}
void StateMachineExecutionImpl::setThisStateMachineExecutionPtr(std::weak_ptr<StateMachineExecution> thisStateMachineExecutionPtr)
{
	m_thisStateMachineExecutionPtr = thisStateMachineExecutionPtr;
}
std::shared_ptr<ecore::EObject> StateMachineExecutionImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any StateMachineExecutionImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINEEXECUTION_EREFERENCE_CONFIGURATION:
			return eAny(getConfiguration()); //381
		case PSSM::PSSMPackage::STATEMACHINEEXECUTION_EREFERENCE_REGIONACTIVATIONS:
			return eAny(getRegionActivations()); //380
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool StateMachineExecutionImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINEEXECUTION_EREFERENCE_CONFIGURATION:
			return getConfiguration() != nullptr; //381
		case PSSM::PSSMPackage::STATEMACHINEEXECUTION_EREFERENCE_REGIONACTIVATIONS:
			return getRegionActivations() != nullptr; //380
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool StateMachineExecutionImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINEEXECUTION_EREFERENCE_CONFIGURATION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration> _configuration = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration>>();
			setConfiguration(_configuration); //381
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void StateMachineExecutionImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void StateMachineExecutionImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

	ecore::EObjectImpl::loadAttributes(loadHandler, attr_list);
}

void StateMachineExecutionImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("configuration") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "StateMachineConfiguration";
			}
			std::shared_ptr<ecore::EObject> configuration = modelFactory->create(typeName, loadHandler->getCurrentObject(), PSSM::PSSMPackage::STATEMACHINECONFIGURATION_EREFERENCE_EXECUTION);
			if (configuration != nullptr)
			{
				loadHandler->handleChild(configuration);
			}
			return;
		}

		if ( nodeName.compare("regionActivations") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "RegionActivation";
			}
			std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> regionActivations = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::RegionActivation>(modelFactory->create(typeName));
			if (regionActivations != nullptr)
			{
				std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> list_regionActivations = this->getRegionActivations();
				list_regionActivations->push_back(regionActivations);
				loadHandler->handleChild(regionActivations);
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

void StateMachineExecutionImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void StateMachineExecutionImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void StateMachineExecutionImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'configuration'
		std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration > configuration = this->getConfiguration();
		if (configuration != nullptr)
		{
			saveHandler->addReference(configuration, "configuration", configuration->eClass() != package->getStateMachineConfiguration_EClass());
		}

		// Save 'regionActivations'
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> list_regionActivations = this->getRegionActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> regionActivations : *list_regionActivations) 
		{
			saveHandler->addReference(regionActivations, "regionActivations", regionActivations->eClass() != package->getRegionActivation_EClass());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

