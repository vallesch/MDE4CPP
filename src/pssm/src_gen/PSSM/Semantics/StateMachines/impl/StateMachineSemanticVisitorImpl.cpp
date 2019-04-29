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
#include "fUML/Execution.hpp"
#include "PSSM/Semantics/CommonBehavior/EventTriggeredExecution.hpp"
#include "fUML/FUMLFactory.hpp"
#include "PSSM/Semantics/StateMachines/StateMachineExecution.hpp"
#include "uml/CallEvent.hpp"
#include "PSSM/Semantics/StateMachines/ExitPointPseudostateActivation.hpp"
#include "PSSM/Semantics/StateMachines/EntryPointPseudostateActivation.hpp"
#include "PSSM/Semantics/CommonBehavior/CallEventOccurrence.hpp"
#include "fUML/ExecutionFactory.hpp"
#include "PSSM/Semantics/CommonBehavior/CallEventExecution.hpp"

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
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// This operation is intended to be overridden by sub-classes. For required sub-classes
// (e.g., RegionActivation, StateActivation) it will initiate the instantiation phase of
// child semantic visitors. By default activate does nothing.
return;

	//end of body
}

void StateMachineSemanticVisitorImpl::activateTransitions()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// ActivateTransition is intended to be overridden by sub-classes. It will capture the instantiation
// of transitions visitors as well as the linking between these visitors and the required vertices
// activation. By default activate does nothing.
return;

	//end of body
}

std::shared_ptr<Bag<fUML::SemanticVisitor> > StateMachineSemanticVisitorImpl::getContextChain()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
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

	std::shared_ptr<PSSM::Semantics::StateMachines::EntryPointPseudostateActivation> entryPointActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::EntryPointPseudostateActivation>(this->getThisStateMachineSemanticVisitorPtr());
	std::shared_ptr<PSSM::Semantics::StateMachines::ExitPointPseudostateActivation> exitPointActivation = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::ExitPointPseudostateActivation>(this->getThisStateMachineSemanticVisitorPtr());

	std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> parentStateMachineExecution = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineExecution>(this->getParent());

	if(entryPointActivation == nullptr && exitPointActivation == nullptr) {
		std::shared_ptr<fUML::SemanticVisitor> tmp = this->getThisSemanticVisitorPtr();
		contextChain->add(tmp);
	}
	if(this->getParent() != nullptr) {
		if(parentStateMachineExecution != nullptr) {
			contextChain->add(this->getParent());
		} else {
			std::shared_ptr<Bag<fUML::SemanticVisitor>> parentContextChain = std::static_pointer_cast<PSSM::Semantics::StateMachines::StateMachineSemanticVisitor>(this->getParent())->getContextChain();
			contextChain->insert(*parentContextChain);
		}
	}

	return contextChain;
	//end of body
}

std::shared_ptr<fUML::Object> StateMachineSemanticVisitorImpl::getExecutionContext()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return this->getStateMachineExecution()->getContext();
	//end of body
}

Any StateMachineSemanticVisitorImpl::getExecutionFor(std::shared_ptr<uml::Behavior>  behavior,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
		std::shared_ptr<fUML::Execution> execution = nullptr;
	if(behavior != nullptr) {
		std::shared_ptr<fUML::Execution> originalExecution = this->getExecutionLocus()->getFactory()->createExecution(behavior, this->getExecutionContext());
		if(eventOccurrence != nullptr) {
			std::shared_ptr<PSSM::Semantics::CommonBehavior::EventTriggeredExecution> containerExecution = PSSM::PSSMFactory::eInstance()->createEventTriggeredExecution();
			containerExecution->setTriggeringEventOccurrence(eventOccurrence);
			containerExecution->setWrappedExecution(originalExecution);
			containerExecution->setContext(originalExecution->getContext());

		} else {
			execution = originalExecution;
		}
	}
	return execution;
//Execution execution = null;
//if(behavior != null){
//	Execution originalExecution = this.getExecutionLocus().factory.createExecution(behavior, this.getExecutionContext());
//	if(eventOccurrence != null){
//		EventTriggeredExecution containerExecution = new EventTriggeredExecution();
//		containerExecution.triggeringEventOccurrence = eventOccurrence;
//		containerExecution.wrappedExecution = originalExecution;
//		containerExecution.context = originalExecution.context;
//		execution = containerExecution;
//	}else{
//		execution = originalExecution;
//	}
//}
// return execution;
	//end of body
}

std::shared_ptr<fUML::Locus> StateMachineSemanticVisitorImpl::getExecutionLocus()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return this->getStateMachineExecution()->getLocus();
	//end of body
}





std::shared_ptr<fUML::Execution> StateMachineSemanticVisitorImpl::getStateMachineExecution()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Return the state-machine execution from which the caller of this operation belongs
//if(this.parent!=null && this.parent instanceof StateMachineExecution){
//	return (Execution)this.parent;
//}else{
//	return ((StateMachineSemanticVisitor)this.parent).getStateMachineExecution();
//}

	std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> exec = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineExecution>(this->m_parent);

	if(this->m_parent != nullptr && exec != nullptr)
	{
		return std::dynamic_pointer_cast<fUML::Execution>(this->m_parent);
	} else
	{
		return (std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineSemanticVisitor>(this->m_parent))->getStateMachineExecution();
	}

	//end of body
}

bool StateMachineSemanticVisitorImpl::isVisitorFor(std::shared_ptr<uml::NamedElement>  node)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	//return this.node == node;
	return this->m_node == node;
	//end of body
}

bool StateMachineSemanticVisitorImpl::match(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<Bag<uml::Trigger> >  triggers)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
			// Check if the event occurrence matches one of the trigger in the list.
// The matching rule are the following:
// 		1. If the event occurrence is a signal event occurrence then type
//		   of the signal must conforms to the type referenced by the event
//		   In addition, if the trigger defines ports through wich the event occurrence
//         is allowed to arrive then the arrival port of the event occurrence
//		   must be one the referenced port.
// 		2. If the event occurrence is a call event occurrence then the operation
// 		   that is referenced must be the same than the one specified in the call
//		   event.
// NOTE: CallEventOccurrence are not related to an arrival port. This limitation is
// introduced by a limitation in the current PSCS semantic model.
// 
// If a match is found then true is returned, false otherwise.
	bool match = false;
	int i = 0;
	std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventOccurrence> callEventOccurrence = std::dynamic_pointer_cast<PSSM::Semantics::CommonBehavior::CallEventOccurrence>(eventOccurrence);
	while(!match && i < triggers->size()) {
		std::shared_ptr<uml::Trigger> trigger = triggers->at(i);
		//TODO: add SignaEventOCcurrence check as per commented Java code, once fUML is implemented
		//if(eventOccurrence instanceof SignalEventOccurrence
		//			&& trigger.getEvent() instanceof SignalEvent){
		//		SignalEventOccurrence signalEventOccurrence = (SignalEventOccurrence) eventOccurrence;
		//		SignalEvent event = (SignalEvent) trigger.getEvent();
		//		if(event.getSignal() == signalEventOccurrence.signalInstance.type){
		//			match = true;
		//		}
		//		if(match  && trigger.getPorts().size() > 0){
		//			int j = 0;
		//			boolean matchingPort = false;
		//			while(j < trigger.getPorts().size() & !matchingPort){
		//				if(((CS_SignalInstance)signalEventOccurrence.signalInstance).interactionPoint.definingPort == trigger.getPorts().get(j)){
		//					matchingPort = true;
		//				}
		//				j = j + 1;
		//			}
		//			if(!matchingPort){
		//				match = matchingPort;
		//			}
		//		}
		if(callEventOccurrence != nullptr) {
			std::shared_ptr<uml::CallEvent> triggerEvent = std::dynamic_pointer_cast<uml::CallEvent>(trigger->getEvent());
			if(triggerEvent != nullptr) {
				std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventOccurrence> callEventOccurrence = std::static_pointer_cast<PSSM::Semantics::CommonBehavior::CallEventOccurrence>(eventOccurrence);
				if(triggerEvent->getOperation() == callEventOccurrence->getExecution()->getOperation()) {
					match = true;
				}
			}
		}
		i++;
	}
	return match;
//boolean match = false;
//int i = 0;
//while(!match && i < triggers.size()){
//	Trigger trigger = triggers.get(i);
//	if(eventOccurrence instanceof SignalEventOccurrence
//			&& trigger.getEvent() instanceof SignalEvent){
//		SignalEventOccurrence signalEventOccurrence = (SignalEventOccurrence) eventOccurrence;
//		SignalEvent event = (SignalEvent) trigger.getEvent();
//		if(event.getSignal() == signalEventOccurrence.signalInstance.type){
//			match = true;
//		}
//		if(match  && trigger.getPorts().size() > 0){
//			int j = 0;
//			boolean matchingPort = false;
//			while(j < trigger.getPorts().size() & !matchingPort){
//				if(((CS_SignalInstance)signalEventOccurrence.signalInstance).interactionPoint.definingPort == trigger.getPorts().get(j)){
//					matchingPort = true;
//				}
//				j = j + 1;
//			}
//			if(!matchingPort){
//				match = matchingPort;
//			}
//		}
//	}else if(eventOccurrence instanceof CallEventOccurrence
//			&& trigger.getEvent() instanceof CallEvent){
//		CallEvent event = (CallEvent) trigger.getEvent();
//		CallEventOccurrence callEventOccurrence = (CallEventOccurrence) eventOccurrence;
//		if(event.getOperation() == callEventOccurrence.execution.operation){
//			match = true;
//		}
//	}
//	i++;
//}
//return match;
	//end of body
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
	setThisSemanticVisitorPtr(thisStateMachineSemanticVisitorPtr);
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
	return fUML::SemanticVisitorImpl::eGet(featureID, resolve, coreType);
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
	return fUML::SemanticVisitorImpl::internalEIsSet(featureID);
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

	return fUML::SemanticVisitorImpl::eSet(featureID, newValue);
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

	fUML::SemanticVisitorImpl::loadAttributes(loadHandler, attr_list);
}

void StateMachineSemanticVisitorImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	fUML::SemanticVisitorImpl::loadNode(nodeName, loadHandler, fUML::FUMLFactory::eInstance());
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
	fUML::SemanticVisitorImpl::resolveReferences(featureID, references);
}

void StateMachineSemanticVisitorImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
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

