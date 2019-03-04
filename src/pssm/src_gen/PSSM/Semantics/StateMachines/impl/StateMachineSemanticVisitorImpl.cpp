#include "PSSM/Semantics/StateMachines/impl/StateMachineSemanticVisitorImpl.hpp"

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

#include "abstractDataTypes/Any.hpp"
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

#include "fUML/EventOccurrence.hpp"

#include "fUML/Execution.hpp"

#include "fUML/Locus.hpp"

#include "uml/NamedElement.hpp"

#include "fUML/Object.hpp"

#include "fUML/SemanticVisitor.hpp"

#include "uml/Trigger.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "PSSM/PSSMPackage.hpp"
#include "PSSM/PSSMFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"
#include "PSSM/Semantics/StateMachines/StateMachineExecution.hpp"
#include "PSSM/Semantics/StateMachines/ExitPointPseudostateActivation.hpp"
#include "PSSM/Semantics/StateMachines/EntryPointPseudostateActivation.hpp"

using namespace PSSM::Semantics::StateMachines;

//*********************************
// Constructor / Destructor
//*********************************
StateMachineSemanticVisitorImpl::StateMachineSemanticVisitorImpl()
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

StateMachineSemanticVisitorImpl::~StateMachineSemanticVisitorImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StateMachineSemanticVisitor "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




StateMachineSemanticVisitorImpl::StateMachineSemanticVisitorImpl(const StateMachineSemanticVisitorImpl & obj):StateMachineSemanticVisitorImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StateMachineSemanticVisitor "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_node  = obj.getNode();

	m_parent  = obj.getParent();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  StateMachineSemanticVisitorImpl::copy() const
{
	std::shared_ptr<StateMachineSemanticVisitorImpl> element(new StateMachineSemanticVisitorImpl(*this));
	element->setThisStateMachineSemanticVisitorPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> StateMachineSemanticVisitorImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getStateMachineSemanticVisitor_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
void StateMachineSemanticVisitorImpl::activate()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void StateMachineSemanticVisitorImpl::activateTransitions()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<fUML::SemanticVisitor> > StateMachineSemanticVisitorImpl::getContextChain()
{
	// Return the hierarchy of visitors that need to be traversed to access
	// the visitor that called context chain. The caller is part of the returned
	// context chain.
//	List<SemanticVisitor> contextChain = new ArrayList<SemanticVisitor>();
//	if(!(this instanceof ExitPointPseudostateActivation) && !(this instanceof EntryPointPseudostateActivation)){
//		contextChain.add(this);
//	}
//	if(this.parent!=null){
//		if(this.parent instanceof StateMachineExecution){
//			contextChain.add(this.parent);
//		}else{
//			contextChain.addAll(((StateMachineSemanticVisitor)this.parent).getContextChain());
//		}
//	}
//	return contextChain;
	std::shared_ptr<Bag<fUML::SemanticVisitor>> contextChain = std::shared_ptr<Bag<fUML::SemanticVisitor>>();

//	std::shared_ptr<PSSM::Semantics::StateMachines::ExitPointPseudostateActivation> exitPseudoState = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::ExitPointPseudostateActivation>(this);
//	std::shared_ptr<PSSM::Semantics::StateMachines::EntryPointPseudostateActivation> entryPseudoState = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::EntryPointPseudostateActivation>(this);
//	if(exitPseudoState == nullptr && entryPseudoState == nullptr)
//	{
//		contextChain->add(std::dynamic_pointer_cast<fUML::SemanticVisitor>(this));
//	}
//	else
//	{
//		contextChain->insert((std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineSemanticVisitor>(this->m_parent))->getContextChain());
//	}

	return contextChain;
}

std::shared_ptr<fUML::Object> StateMachineSemanticVisitorImpl::getExecutionContext()
{
	return this->getStateMachineExecution()->getContext();
}

Any StateMachineSemanticVisitorImpl::getExecutionFor(std::shared_ptr<uml::Behavior>  behavior,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<fUML::Locus> StateMachineSemanticVisitorImpl::getExecutionLocus()
{
	return this->getStateMachineExecution()->getLocus();
}





std::shared_ptr<fUML::Execution> StateMachineSemanticVisitorImpl::getStateMachineExecution()
{
	std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> exec = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineExecution>(this->m_parent);

	if(this->m_parent != nullptr && exec != nullptr)
	{
		return std::dynamic_pointer_cast<fUML::Execution>(this->m_parent);
	} else
	{
		return (std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineSemanticVisitor>(this->m_parent))->getStateMachineExecution();
	}
}

bool StateMachineSemanticVisitorImpl::isVisitorFor(std::shared_ptr<uml::NamedElement>  node)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StateMachineSemanticVisitorImpl::match(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<Bag<uml::Trigger> >  triggers)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}





//*********************************
// References
//*********************************
std::shared_ptr<uml::NamedElement > StateMachineSemanticVisitorImpl::getNode() const
{
//assert(m_node);
    return m_node;
}
void StateMachineSemanticVisitorImpl::setNode(std::shared_ptr<uml::NamedElement> _node)
{
    m_node = _node;
}

std::shared_ptr<fUML::SemanticVisitor > StateMachineSemanticVisitorImpl::getParent() const
{

    return m_parent;
}
void StateMachineSemanticVisitorImpl::setParent(std::shared_ptr<fUML::SemanticVisitor> _parent)
{
    m_parent = _parent;
}

//*********************************
// Union Getter
//*********************************


std::shared_ptr<StateMachineSemanticVisitor> StateMachineSemanticVisitorImpl::getThisStateMachineSemanticVisitorPtr() const
{
	return m_thisStateMachineSemanticVisitorPtr.lock();
}
void StateMachineSemanticVisitorImpl::setThisStateMachineSemanticVisitorPtr(std::weak_ptr<StateMachineSemanticVisitor> thisStateMachineSemanticVisitorPtr)
{
	m_thisStateMachineSemanticVisitorPtr = thisStateMachineSemanticVisitorPtr;
}
std::shared_ptr<ecore::EObject> StateMachineSemanticVisitorImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any StateMachineSemanticVisitorImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINESEMANTICVISITOR_EREFERENCE_NODE:
			return eAny(getNode()); //390
		case PSSM::PSSMPackage::STATEMACHINESEMANTICVISITOR_EREFERENCE_PARENT:
			return eAny(getParent()); //391
	}
	return ecore::EObjectImpl::eGet(featureID, resolve, coreType);
}
bool StateMachineSemanticVisitorImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINESEMANTICVISITOR_EREFERENCE_NODE:
			return getNode() != nullptr; //390
		case PSSM::PSSMPackage::STATEMACHINESEMANTICVISITOR_EREFERENCE_PARENT:
			return getParent() != nullptr; //391
	}
	return ecore::EObjectImpl::internalEIsSet(featureID);
}
bool StateMachineSemanticVisitorImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINESEMANTICVISITOR_EREFERENCE_NODE:
		{
			// BOOST CAST
			std::shared_ptr<uml::NamedElement> _node = newValue->get<std::shared_ptr<uml::NamedElement>>();
			setNode(_node); //390
			return true;
		}
		case PSSM::PSSMPackage::STATEMACHINESEMANTICVISITOR_EREFERENCE_PARENT:
		{
			// BOOST CAST
			std::shared_ptr<fUML::SemanticVisitor> _parent = newValue->get<std::shared_ptr<fUML::SemanticVisitor>>();
			setParent(_parent); //391
			return true;
		}
	}

	return ecore::EObjectImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void StateMachineSemanticVisitorImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void StateMachineSemanticVisitorImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("node");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("node")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
		}

		iter = attr_list.find("parent");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("parent")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

void StateMachineSemanticVisitorImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	ecore::EObjectImpl::loadNode(nodeName, loadHandler, ecore::EcoreFactory::eInstance());
}

void StateMachineSemanticVisitorImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEMACHINESEMANTICVISITOR_EREFERENCE_NODE:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<uml::NamedElement> _node = std::dynamic_pointer_cast<uml::NamedElement>( references.front() );
				setNode(_node);
			}
			
			return;
		}

		case PSSM::PSSMPackage::STATEMACHINESEMANTICVISITOR_EREFERENCE_PARENT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<fUML::SemanticVisitor> _parent = std::dynamic_pointer_cast<fUML::SemanticVisitor>( references.front() );
				setParent(_parent);
			}
			
			return;
		}
	}
	ecore::EObjectImpl::resolveReferences(featureID, references);
}

void StateMachineSemanticVisitorImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void StateMachineSemanticVisitorImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		saveHandler->addReference("node", this->getNode());
		saveHandler->addReference("parent", this->getParent());

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

