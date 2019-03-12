#include "PSSM/Semantics/CommonBehavior/impl/SM_ObjectActivationImpl.hpp"

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

#include "fUML/ClassifierBehaviorExecution.hpp"

#include "PSSM/Semantics/StateMachines/CompletionEventOccurrence.hpp"

#include "PSSM/Semantics/StateMachines/DeferredEventOccurrence.hpp"

#include "fUML/EventAccepter.hpp"

#include "fUML/EventOccurrence.hpp"

#include "fUML/Object.hpp"

#include "fUML/ObjectActivation.hpp"

#include "fUML/SignalInstance.hpp"

#include "PSSM/Semantics/StateMachines/StateActivation.hpp"

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
SM_ObjectActivationImpl::SM_ObjectActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
		m_deferredEventPool.reset(new Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>());
	
	

	//Init references
	
	
}

SM_ObjectActivationImpl::~SM_ObjectActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete SM_ObjectActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




SM_ObjectActivationImpl::SM_ObjectActivationImpl(const SM_ObjectActivationImpl & obj):SM_ObjectActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy SM_ObjectActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> _deferredEventPool = obj.getDeferredEventPool();
	m_deferredEventPool.reset(new Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>(*(obj.getDeferredEventPool().get())));

	m_object  = obj.getObject();

	std::shared_ptr<Bag<fUML::EventAccepter>> _waitingEventAccepters = obj.getWaitingEventAccepters();
	m_waitingEventAccepters.reset(new Bag<fUML::EventAccepter>(*(obj.getWaitingEventAccepters().get())));


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<fUML::ClassifierBehaviorExecution>> _classifierBehaviorExecutionsList = obj.getClassifierBehaviorExecutions();
	for(std::shared_ptr<fUML::ClassifierBehaviorExecution> _classifierBehaviorExecutions : *_classifierBehaviorExecutionsList)
	{
		this->getClassifierBehaviorExecutions()->add(std::shared_ptr<fUML::ClassifierBehaviorExecution>(std::dynamic_pointer_cast<fUML::ClassifierBehaviorExecution>(_classifierBehaviorExecutions->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_classifierBehaviorExecutions" << std::endl;
	#endif
	std::shared_ptr<Bag<fUML::SignalInstance>> _eventPoolList = obj.getEventPool();
	for(std::shared_ptr<fUML::SignalInstance> _eventPool : *_eventPoolList)
	{
		this->getEventPool()->add(std::shared_ptr<fUML::SignalInstance>(std::dynamic_pointer_cast<fUML::SignalInstance>(_eventPool->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eventPool" << std::endl;
	#endif

}

std::shared_ptr<ecore::EObject>  SM_ObjectActivationImpl::copy() const
{
	std::shared_ptr<SM_ObjectActivationImpl> element(new SM_ObjectActivationImpl(*this));
	element->setThisSM_ObjectActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> SM_ObjectActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getSM_ObjectActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
int SM_ObjectActivationImpl::getDeferredEventInsertionIndex()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrence> SM_ObjectActivationImpl::getNextCompletionEvent()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
		// Return the next completion event available at the pool.
	unsigned int i = 0;
	std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrence> completionEvent = nullptr;

	while(completionEvent == nullptr && i < this->m_eventPool->size()){
		//if(std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrence> _completionEvent = std::dynamic_cast<std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrence>>(this->m_eventPool->at(i))){

		std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrence> _tmp = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::CompletionEventOccurrence>(this->m_eventPool->at(i));

		if( _tmp != nullptr) {
			completionEvent = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::CompletionEventOccurrence>(this->m_eventPool->at(i));
			this->m_eventPool->erase(this->m_eventPool->at(i));
		}
		i++;
	}
	return completionEvent;

	//end of body
}

std::shared_ptr<fUML::EventOccurrence> SM_ObjectActivationImpl::getNextEvent()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Completion events are always dispatched first. They are dispatched according
// to their order of arrival in the pool. While completion event are available at
// the pool no other event is dispatched. If not there is no more completion event
// to dispatch then regular events are dispatched according to the currently used
// dispatching policy. Note that if the currently dispatched event occurrence was
// previously deferred the it is unwrapped and it encapsulated 'deferredEventOccurrence'
// is actually dispatched.
//EventOccurrence nextEvent = this.getNextCompletionEvent(); 
//if(nextEvent==null){
//	nextEvent = super.getNextEvent();
//	if(nextEvent instanceof DeferredEventOccurrence){
//		nextEvent = ((DeferredEventOccurrence)nextEvent).deferredEventOccurrence;
//	}
//}
//return nextEvent;

	std::shared_ptr<fUML::EventOccurrence> nextEvent = std::dynamic_pointer_cast<fUML::EventOccurrence>(this->getNextCompletionEvent());
	if(nextEvent == nullptr)
	{
		nextEvent = getNextEvent();

		std::shared_ptr<PSSM::Semantics::StateMachines::DeferredEventOccurrence> _tmp = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::DeferredEventOccurrence>(nextEvent);

		if( _tmp != nullptr)
		{
			nextEvent =  std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::DeferredEventOccurrence>(nextEvent)->getDeferredEventOccurrence();
		}
	}

	return nextEvent;

	//end of body
}

void SM_ObjectActivationImpl::registerCompletionEvent(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	
	//end of body
}

void SM_ObjectActivationImpl::registerDeferredEvent(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// An event occurrence registered as being deferred is registered within the deferred event pool.
//DeferredEventOccurrence deferredEventOccurrence = new DeferredEventOccurrence();
//deferredEventOccurrence.constrainingStateActivation = deferringState;
//deferredEventOccurrence.deferredEventOccurrence = eventOccurrence;
//this.deferredEventPool.add(deferredEventOccurrence);

//std::shared_ptr<PSSM::Semantics::StateMachines::DeferredEventOccurrence> deferredEventOccurrence = new PSSM::Semantics::StateMachines::DeferredEventOccurrence();
//deferredEventOccurrence->setDeferredEventOccurrence(eventOccurrence);
//this->m_deferredEventPool->add(deferredEventOccurrence);
	//end of body
}

void SM_ObjectActivationImpl::releaseDeferredEvents(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  deferringState)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// The release of event occurrence(s) deferred by the deferring state includes the following step:
// 1. Deferred events are removed from the deferred event pool 
// 2. Deferred events return to the regular event pool. They are inserted in the pool
//    after any existing completion event occurrence but before any other events that
//    arrived later.
//List<DeferredEventOccurrence> releasedEvents = new ArrayList<DeferredEventOccurrence>();
//for(int i=0; i < this.deferredEventPool.size(); i++){
//	DeferredEventOccurrence eventOccurrence = this.deferredEventPool.get(i);
//	if(eventOccurrence.constrainingStateActivation == deferringState){
//		releasedEvents.add(eventOccurrence);
//	}
//}
//int insertionPoint = this.getDeferredEventInsertionIndex();
//int i = 0;
//while(i < releasedEvents.size()){
//	this.eventPool.add(insertionPoint, releasedEvents.get(i));
//	this._send(new ArrivalSignal());
//	insertionPoint++;
//	i++;
//}
//releasedEvents.clear();

	//end of body
}

//*********************************
// References
//*********************************
std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> SM_ObjectActivationImpl::getDeferredEventPool() const
{

    return m_deferredEventPool;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<SM_ObjectActivation> SM_ObjectActivationImpl::getThisSM_ObjectActivationPtr() const
{
	return m_thisSM_ObjectActivationPtr.lock();
}
void SM_ObjectActivationImpl::setThisSM_ObjectActivationPtr(std::weak_ptr<SM_ObjectActivation> thisSM_ObjectActivationPtr)
{
	m_thisSM_ObjectActivationPtr = thisSM_ObjectActivationPtr;
	setThisObjectActivationPtr(thisSM_ObjectActivationPtr);
}
std::shared_ptr<ecore::EObject> SM_ObjectActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any SM_ObjectActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OBJECTACTIVATION_EREFERENCE_DEFERREDEVENTPOOL:
			return eAny(getDeferredEventPool()); //294
	}
	return fUML::ObjectActivationImpl::eGet(featureID, resolve, coreType);
}
bool SM_ObjectActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OBJECTACTIVATION_EREFERENCE_DEFERREDEVENTPOOL:
			return getDeferredEventPool() != nullptr; //294
	}
	return fUML::ObjectActivationImpl::internalEIsSet(featureID);
}
bool SM_ObjectActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
	}

	return fUML::ObjectActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void SM_ObjectActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void SM_ObjectActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("deferredEventPool");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("deferredEventPool")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	fUML::ObjectActivationImpl::loadAttributes(loadHandler, attr_list);
}

void SM_ObjectActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{


	fUML::ObjectActivationImpl::loadNode(nodeName, loadHandler, fUML::FUMLFactory::eInstance());
}

void SM_ObjectActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::SM_OBJECTACTIVATION_EREFERENCE_DEFERREDEVENTPOOL:
		{
			std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> _deferredEventPool = getDeferredEventPool();
			for(std::shared_ptr<ecore::EObject> ref : references)
			{
				std::shared_ptr<PSSM::Semantics::StateMachines::DeferredEventOccurrence> _r = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::DeferredEventOccurrence>(ref);
				if (_r != nullptr)
				{
					_deferredEventPool->push_back(_r);
				}				
			}
			return;
		}
	}
	fUML::ObjectActivationImpl::resolveReferences(featureID, references);
}

void SM_ObjectActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	fUML::ObjectActivationImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void SM_ObjectActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	

		// Add references
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> deferredEventPool_list = this->getDeferredEventPool();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::DeferredEventOccurrence > object : *deferredEventPool_list)
		{ 
			saveHandler->addReferences("deferredEventPool", object);
		}

	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

