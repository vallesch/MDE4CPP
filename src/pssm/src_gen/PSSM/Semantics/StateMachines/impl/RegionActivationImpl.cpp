#include "PSSM/Semantics/StateMachines/impl/RegionActivationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/InitialPseudostateActivation.hpp"

#include "uml/NamedElement.hpp"

#include "fUML/SemanticVisitor.hpp"

#include "PSSM/Semantics/StateMachines/StateActivation.hpp"

#include "PSSM/Semantics/StateMachines/StateMachineSemanticVisitor.hpp"

#include "uml/Transition.hpp"

#include "PSSM/Semantics/StateMachines/TransitionActivation.hpp"

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
RegionActivationImpl::RegionActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	//*********************************
	// Reference Members
	//*********************************
	//References
	

		m_transitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>());
	
	

		m_vertexActivations.reset(new Bag<PSSM::Semantics::StateMachines::VertexActivation>());
	
	

	//Init references
	

	
	

	
	
}

RegionActivationImpl::~RegionActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete RegionActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




RegionActivationImpl::RegionActivationImpl(const RegionActivationImpl & obj):RegionActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy RegionActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isCompleted = obj.getIsCompleted();

	//copy references with no containment (soft copy)
	
	m_history  = obj.getHistory();

	m_node  = obj.getNode();

	m_parent  = obj.getParent();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _transitionActivationsList = obj.getTransitionActivations();
	for(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation> _transitionActivations : *_transitionActivationsList)
	{
		this->getTransitionActivations()->add(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::TransitionActivation>(_transitionActivations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_transitionActivations" << std::endl;
	#endif
	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation>> _vertexActivationsList = obj.getVertexActivations();
	for(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> _vertexActivations : *_vertexActivationsList)
	{
		this->getVertexActivations()->add(std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation>(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>(_vertexActivations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_vertexActivations" << std::endl;
	#endif

	
	

	
	
}

std::shared_ptr<ecore::EObject>  RegionActivationImpl::copy() const
{
	std::shared_ptr<RegionActivationImpl> element(new RegionActivationImpl(*this));
	element->setThisRegionActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> RegionActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getRegionActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void RegionActivationImpl::setIsCompleted(bool _isCompleted)
{
	m_isCompleted = _isCompleted;
} 

bool RegionActivationImpl::getIsCompleted() const 
{
	return m_isCompleted;
}

//*********************************
// Operations
//*********************************
bool RegionActivationImpl::canPropagateExecution(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void RegionActivationImpl::enter(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void RegionActivationImpl::exit(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  exitingTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::InitialPseudostateActivation> RegionActivationImpl::getOrigin()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > RegionActivationImpl::getTransitionActivations()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> RegionActivationImpl::getVertexActivation(std::shared_ptr<uml::Vertex>  vertex)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}



bool RegionActivationImpl::isRedefined(std::shared_ptr<Bag<uml::Vertex> >  vertices,std::shared_ptr<uml::Vertex>  vertex)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool RegionActivationImpl::isRedefined(std::shared_ptr<Bag<uml::Transition> >  transitions,std::shared_ptr<uml::Transition>  transition)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void RegionActivationImpl::terminate()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation > RegionActivationImpl::getHistory() const
{

    return m_history;
}
void RegionActivationImpl::setHistory(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _history)
{
    m_history = _history;
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> RegionActivationImpl::getTransitionActivations() const
{

    return m_transitionActivations;
}


std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation>> RegionActivationImpl::getVertexActivations() const
{

    return m_vertexActivations;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<RegionActivation> RegionActivationImpl::getThisRegionActivationPtr() const
{
	return m_thisRegionActivationPtr.lock();
}
void RegionActivationImpl::setThisRegionActivationPtr(std::weak_ptr<RegionActivation> thisRegionActivationPtr)
{
	m_thisRegionActivationPtr = thisRegionActivationPtr;
	setThisStateMachineSemanticVisitorPtr(thisRegionActivationPtr);
}
std::shared_ptr<ecore::EObject> RegionActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any RegionActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::REGIONACTIVATION_EREFERENCE_HISTORY:
			return eAny(getHistory()); //255
		case PSSM::PSSMPackage::REGIONACTIVATION_EATTRIBUTE_ISCOMPLETED:
			return eAny(getIsCompleted()); //253
		case PSSM::PSSMPackage::REGIONACTIVATION_EREFERENCE_TRANSITIONACTIVATIONS:
			return eAny(getTransitionActivations()); //252
		case PSSM::PSSMPackage::REGIONACTIVATION_EREFERENCE_VERTEXACTIVATIONS:
			return eAny(getVertexActivations()); //254
	}
	return StateMachineSemanticVisitorImpl::eGet(featureID, resolve, coreType);
}
bool RegionActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::REGIONACTIVATION_EREFERENCE_HISTORY:
			return getHistory() != nullptr; //255
		case PSSM::PSSMPackage::REGIONACTIVATION_EATTRIBUTE_ISCOMPLETED:
			return getIsCompleted() != false; //253
		case PSSM::PSSMPackage::REGIONACTIVATION_EREFERENCE_TRANSITIONACTIVATIONS:
			return getTransitionActivations() != nullptr; //252
		case PSSM::PSSMPackage::REGIONACTIVATION_EREFERENCE_VERTEXACTIVATIONS:
			return getVertexActivations() != nullptr; //254
	}
	return StateMachineSemanticVisitorImpl::internalEIsSet(featureID);
}
bool RegionActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::REGIONACTIVATION_EREFERENCE_HISTORY:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _history = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>>();
			setHistory(_history); //255
			return true;
		}
		case PSSM::PSSMPackage::REGIONACTIVATION_EATTRIBUTE_ISCOMPLETED:
		{
			// BOOST CAST
			bool _isCompleted = newValue->get<bool>();
			setIsCompleted(_isCompleted); //253
			return true;
		}
	}

	return StateMachineSemanticVisitorImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void RegionActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void RegionActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("isCompleted");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setIsCompleted(value);
		}
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("history");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("history")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	StateMachineSemanticVisitorImpl::loadAttributes(loadHandler, attr_list);
}

void RegionActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("transitionActivations") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation> transitionActivations = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::TransitionActivation>(modelFactory->create(typeName));
			if (transitionActivations != nullptr)
			{
				std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> list_transitionActivations = this->getTransitionActivations();
				list_transitionActivations->push_back(transitionActivations);
				loadHandler->handleChild(transitionActivations);
			}
			return;
		}

		if ( nodeName.compare("vertexActivations") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> vertexActivations = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::VertexActivation>(modelFactory->create(typeName));
			if (vertexActivations != nullptr)
			{
				std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation>> list_vertexActivations = this->getVertexActivations();
				list_vertexActivations->push_back(vertexActivations);
				loadHandler->handleChild(vertexActivations);
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

	StateMachineSemanticVisitorImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void RegionActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::REGIONACTIVATION_EREFERENCE_HISTORY:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> _history = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateActivation>( references.front() );
				setHistory(_history);
			}
			
			return;
		}
	}
	StateMachineSemanticVisitorImpl::resolveReferences(featureID, references);
}

void RegionActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void RegionActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	
 
		// Add attributes
		if ( this->eIsSet(package->getRegionActivation_EAttribute_isCompleted()) )
		{
			saveHandler->addAttribute("isCompleted", this->getIsCompleted());
		}

		// Add references
		saveHandler->addReference("history", this->getHistory());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'transitionActivations'
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> list_transitionActivations = this->getTransitionActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation> transitionActivations : *list_transitionActivations) 
		{
			saveHandler->addReference(transitionActivations, "transitionActivations", transitionActivations->eClass() != package->getTransitionActivation_EClass());
		}

		// Save 'vertexActivations'
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::VertexActivation>> list_vertexActivations = this->getVertexActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::VertexActivation> vertexActivations : *list_vertexActivations) 
		{
			saveHandler->addReference(vertexActivations, "vertexActivations", vertexActivations->eClass() != package->getVertexActivation_EClass());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

