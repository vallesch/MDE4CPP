#include "PSSM/Semantics/StateMachines/impl/StateConfigurationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/StateConfiguration.hpp"

#include "PSSM/Semantics/StateMachines/StateMachineConfiguration.hpp"

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
StateConfigurationImpl::StateConfigurationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	//References
		m_children.reset(new Bag<PSSM::Semantics::StateMachines::StateConfiguration>());
	
	

	

	

	//Init references
	
	

	

	
}

StateConfigurationImpl::~StateConfigurationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StateConfiguration "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




StateConfigurationImpl::StateConfigurationImpl(const StateConfigurationImpl & obj):StateConfigurationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StateConfiguration "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_level = obj.getLevel();

	//copy references with no containment (soft copy)
	
	m_completeConfiguration  = obj.getCompleteConfiguration();

	m_vertexActivation  = obj.getVertexActivation();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::StateConfiguration>> _childrenList = obj.getChildren();
	for(std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> _children : *_childrenList)
	{
		this->getChildren()->add(std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateConfiguration>(_children->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_children" << std::endl;
	#endif

	
	
}

std::shared_ptr<ecore::EObject>  StateConfigurationImpl::copy() const
{
	std::shared_ptr<StateConfigurationImpl> element(new StateConfigurationImpl(*this));
	element->setThisStateConfigurationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> StateConfigurationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getStateConfiguration_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void StateConfigurationImpl::setLevel(int _level)
{
	m_level = _level;
} 

int StateConfigurationImpl::getLevel() const 
{
	return m_level;
}

//*********************************
// Operations
//*********************************
void StateConfigurationImpl::add(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation,std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> >  context)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateConfigurationImpl::addChild(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> > StateConfigurationImpl::getContext(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

int StateConfigurationImpl::getLevel()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> StateConfigurationImpl::getParent()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> StateConfigurationImpl::getVertexActivation()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateConfigurationImpl::isActive()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateConfigurationImpl::remove(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation,std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation> >  context)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateConfigurationImpl::removeChild(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>  activation)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateConfigurationImpl::setParent(std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>  stateConfiguration)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<Bag<PSSM::Semantics::StateMachines::StateConfiguration>> StateConfigurationImpl::getChildren() const
{

    return m_children;
}


std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration > StateConfigurationImpl::getCompleteConfiguration() const
{
//assert(m_completeConfiguration);
    return m_completeConfiguration;
}
void StateConfigurationImpl::setCompleteConfiguration(std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration> _completeConfiguration)
{
    m_completeConfiguration = _completeConfiguration;
}

std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation > StateConfigurationImpl::getVertexActivation() const
{
//assert(m_vertexActivation);
    return m_vertexActivation;
}
void StateConfigurationImpl::setVertexActivation(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _vertexActivation)
{
    m_vertexActivation = _vertexActivation;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<StateConfiguration> StateConfigurationImpl::getThisStateConfigurationPtr() const
{
	return m_thisStateConfigurationPtr.lock();
}
void StateConfigurationImpl::setThisStateConfigurationPtr(std::weak_ptr<StateConfiguration> thisStateConfigurationPtr)
{
	m_thisStateConfigurationPtr = thisStateConfigurationPtr;
}
std::shared_ptr<ecore::EObject> StateConfigurationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any StateConfigurationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_CHILDREN:
			return eAny(getChildren()); //352
		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_COMPLETECONFIGURATION:
			return eAny(getCompleteConfiguration()); //353
		case PSSM::PSSMPackage::STATECONFIGURATION_EATTRIBUTE_LEVEL:
			return eAny(getLevel()); //350
		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_VERTEXACTIVATION:
			return eAny(getVertexActivation()); //351
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool StateConfigurationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_CHILDREN:
			return getChildren() != nullptr; //352
		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_COMPLETECONFIGURATION:
			return getCompleteConfiguration() != nullptr; //353
		case PSSM::PSSMPackage::STATECONFIGURATION_EATTRIBUTE_LEVEL:
			return getLevel() != 0; //350
		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_VERTEXACTIVATION:
			return getVertexActivation() != nullptr; //351
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool StateConfigurationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_COMPLETECONFIGURATION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration> _completeConfiguration = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration>>();
			setCompleteConfiguration(_completeConfiguration); //353
			return true;
		}
		case PSSM::PSSMPackage::STATECONFIGURATION_EATTRIBUTE_LEVEL:
		{
			// BOOST CAST
			int _level = newValue->get<int>();
			setLevel(_level); //350
			return true;
		}
		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_VERTEXACTIVATION:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _vertexActivation = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>>();
			setVertexActivation(_vertexActivation); //351
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void StateConfigurationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void StateConfigurationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("level");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'int'
			int value;
			std::istringstream ( iter->second ) >> value;
			this->setLevel(value);
		}
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("completeConfiguration");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("completeConfiguration")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("vertexActivation");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("vertexActivation")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void StateConfigurationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("children") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "StateConfiguration";
			}
			std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> children = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateConfiguration>(modelFactory->create(typeName));
			if (children != nullptr)
			{
				std::shared_ptr<Bag<PSSM::Semantics::StateMachines::StateConfiguration>> list_children = this->getChildren();
				list_children->push_back(children);
				loadHandler->handleChild(children);
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

void StateConfigurationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_COMPLETECONFIGURATION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration> _completeConfiguration = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineConfiguration>( references.front() );
				setCompleteConfiguration(_completeConfiguration);
			}
			
			return;
		}

		case PSSM::PSSMPackage::STATECONFIGURATION_EREFERENCE_VERTEXACTIVATION:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _vertexActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>( references.front() );
				setVertexActivation(_vertexActivation);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void StateConfigurationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void StateConfigurationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	
 
		// Add attributes
		if ( this->eIsSet(package->getStateConfiguration_EAttribute_level()) )
		{
			saveHandler->addAttribute("level", this->getLevel());
		}

		// Add references
		saveHandler->addReference("completeConfiguration", this->getCompleteConfiguration());
		saveHandler->addReference("vertexActivation", this->getVertexActivation());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'children'
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::StateConfiguration>> list_children = this->getChildren();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> children : *list_children) 
		{
			saveHandler->addReference(children, "children", children->eClass() != package->getStateConfiguration_EClass());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

