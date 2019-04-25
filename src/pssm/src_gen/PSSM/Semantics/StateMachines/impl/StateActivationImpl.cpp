#include "PSSM/Semantics/StateMachines/impl/StateActivationImpl.hpp"

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

#include "PSSM/Semantics/StateMachines/ConnectionPointActivation.hpp"

#include "PSSM/Semantics/StateMachines/DoActivityContextObject.hpp"

#include "fUML/EventOccurrence.hpp"

#include "uml/NamedElement.hpp"

#include "PSSM/Semantics/StateMachines/RegionActivation.hpp"

#include "fUML/SemanticVisitor.hpp"

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
StateActivationImpl::StateActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************
	
	
	
	//*********************************
	// Reference Members
	//*********************************
	//References
		m_connectionPointActivations.reset(new Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>());
	
	

	

		m_regionActivations.reset(new Bag<PSSM::Semantics::StateMachines::RegionActivation>());
	
	

	//Init references
	
	

	

	
	
}

StateActivationImpl::~StateActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StateActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}




StateActivationImpl::StateActivationImpl(const StateActivationImpl & obj):StateActivationImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StateActivation "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isDoActivityCompleted = obj.getIsDoActivityCompleted();
	m_isEntryCompleted = obj.getIsEntryCompleted();
	m_isExitCompleted = obj.getIsExitCompleted();
	m_status = obj.getStatus();

	//copy references with no containment (soft copy)
	
	m_doActivityContextObject  = obj.getDoActivityContextObject();

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _incomingTransitionActivations = obj.getIncomingTransitionActivations();
	m_incomingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getIncomingTransitionActivations().get())));

	m_node  = obj.getNode();

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation>> _outgoingTransitionActivations = obj.getOutgoingTransitionActivations();
	m_outgoingTransitionActivations.reset(new Bag<PSSM::Semantics::StateMachines::TransitionActivation>(*(obj.getOutgoingTransitionActivations().get())));

	m_parent  = obj.getParent();


	//Clone references with containment (deep copy)

	std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> _connectionPointActivationsList = obj.getConnectionPointActivations();
	for(std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation> _connectionPointActivations : *_connectionPointActivationsList)
	{
		this->getConnectionPointActivations()->add(std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation>(std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::ConnectionPointActivation>(_connectionPointActivations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_connectionPointActivations" << std::endl;
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

std::shared_ptr<ecore::EObject>  StateActivationImpl::copy() const
{
	std::shared_ptr<StateActivationImpl> element(new StateActivationImpl(*this));
	element->setThisStateActivationPtr(element);
	return element;
}

std::shared_ptr<ecore::EClass> StateActivationImpl::eStaticClass() const
{
	return PSSMPackageImpl::eInstance()->getStateActivation_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************
void StateActivationImpl::setIsDoActivityCompleted(bool _isDoActivityCompleted)
{
	m_isDoActivityCompleted = _isDoActivityCompleted;
} 

bool StateActivationImpl::getIsDoActivityCompleted() const 
{
	return m_isDoActivityCompleted;
}

void StateActivationImpl::setIsEntryCompleted(bool _isEntryCompleted)
{
	m_isEntryCompleted = _isEntryCompleted;
} 

bool StateActivationImpl::getIsEntryCompleted() const 
{
	return m_isEntryCompleted;
}

void StateActivationImpl::setIsExitCompleted(bool _isExitCompleted)
{
	m_isExitCompleted = _isExitCompleted;
} 

bool StateActivationImpl::getIsExitCompleted() const 
{
	return m_isExitCompleted;
}

//*********************************
// Operations
//*********************************
bool StateActivationImpl::canDefer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Return true if current state activation is capable of deferring the given
// event occurrence; false otherwise. Note that false is returned in case where
// the deferring constraint is overridden by an outgoing transition
// 
// Note: for the moment the evaluation is done with the assumption that the
// received event occurrence is a signal event occurrence. This will change
// as soon as other kind of event (e.g. call event) will be supported in fUML.
State state = (State) this.node;
boolean deferred = this.match(eventOccurrence, state.getDeferrableTriggers());
while(!deferred && state.getRedefinedState() != null){
	state = state.getRedefinedState();
	deferred = this.match(eventOccurrence, state.getDeferrableTriggers());
}
if(deferred){
	int i = 0;
	TransitionActivation overridingTransitionActivation = null;
	while(overridingTransitionActivation == null && i < this.outgoingTransitionActivations.size()){
		TransitionActivation currentTransitionActivation = this.outgoingTransitionActivations.get(i);
		if(currentTransitionActivation.canFireOn(eventOccurrence)){
			overridingTransitionActivation = currentTransitionActivation;
		}
		i++;
	}
	deferred = overridingTransitionActivation == null;
}
return deferred;

	//end of body
}

void StateActivationImpl::defer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Postpone the time at which this event occurrence will be available at the event pool.
// The given event occurrence is placed in the deferred event pool and will be released
// only when the current state activation will leave the state-machine configuration.
Object_ context = this.getExecutionContext();
if(context.objectActivation != null){
	((SM_ObjectActivation)context.objectActivation).registerDeferredEvent(eventOccurrence, this); 
}

	//end of body
}

void StateActivationImpl::enterRegions(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Regions can be entered either implicitly or explicitly. 
// A region is typically entered implicitly when its activation is triggered
// by a transition terminating on the edge of its containing state.
// A region is typically entered explicitly when one of its contained
// state is targeted by a transition coming from the outside.
// *** Regions are entered concurrently ***
List<Vertex> targetedVertices = new ArrayList<Vertex>();
VertexActivation sourceActivation = enteringTransition.getSourceActivation();
if(sourceActivation instanceof ForkPseudostateActivation){
	Pseudostate fork = (Pseudostate)sourceActivation.getNode(); 
	for(int i = 0; i < fork.getOutgoings().size(); i++){
		targetedVertices.add(fork.getOutgoings().get(i).getTarget());
	}
}else{
	VertexActivation targetActivation = enteringTransition.getTargetActivation();
	if(targetActivation instanceof EntryPointPseudostateActivation){
		Pseudostate entryPoint = (Pseudostate)targetActivation.getNode();
		for(int i = 0; i < entryPoint.getOutgoings().size(); i++){
			targetedVertices.add(entryPoint.getOutgoings().get(i).getTarget());
		}
	}else{
		if(!(targetActivation instanceof HistoryPseudostateActivation)){
			targetedVertices.add((Vertex)targetActivation.getNode());
		}
	}
}		
for(int i=0; i < this.regionActivation.size(); i++){
	RegionActivation regionActivation = this.regionActivation.get(i);
	int j = 0;
	boolean found = false;
	while(j < targetedVertices.size() && !found){
		found = regionActivation.getVertexActivation(targetedVertices.get(j)) != null;
		j++;
	}
	if(!found){
		regionActivation.enter(enteringTransition, eventOccurrence);
	}
}

	//end of body
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation> > StateActivationImpl::getConnectionPointActivation()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Return the activation for the exit point or the entry point.
ConnectionPointActivation activation = null;
int i = 0;
while(i < this.connectionPointActivation.size() && activation==null){
	if(this.connectionPointActivation.get(i).getNode()==vertex){
		activation = this.connectionPointActivation.get(i);
	}
	i++;
}
return activation;

	//end of body
}

std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation> StateActivationImpl::getConnectionPointActivation(std::shared_ptr<uml::Vertex>  vertex)
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<uml::Behavior> StateActivationImpl::getDoActivity()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Return the doActivity behavior of the state or one inherited
// from a redefined state. If no doActivity can be found null is
// returned.
State state = (State) this.getNode();
Behavior doActivity = state.getDoActivity();
while(doActivity == null && state.getRedefinedState() != null){
	state = state.getRedefinedState();
	doActivity = state.getDoActivity();
}
return doActivity;

	//end of body
}

std::shared_ptr<uml::Behavior> StateActivationImpl::getEntry()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Return the entry behavior of the state or one inherited
// from a redefined state. If no entry can be found null is
// returned.
State state = (State) this.getNode();
Behavior entry = state.getEntry();
while(entry  == null && state.getRedefinedState() != null){
	state = state.getRedefinedState();
	entry = state.getEntry();
}
return entry;

	//end of body
}

std::shared_ptr<uml::Behavior> StateActivationImpl::getExit()
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > StateActivationImpl::getFireableTransitions(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Return the set of transitions that can fire using the the given event occurrence
List<TransitionActivation> fireableTransitions = new ArrayList<TransitionActivation>();
for(int i=0; i < this.outgoingTransitionActivations.size(); i++){
	TransitionActivation outgoingTransitionActivation = this.outgoingTransitionActivations.get(i);
	if(outgoingTransitionActivation.canFireOn(eventOccurrence)){
		fireableTransitions.add(outgoingTransitionActivation);
	}
}
return fireableTransitions;

	//end of body
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation> > StateActivationImpl::getRegionActivation()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return this.regionActivation;

	//end of body
}

bool StateActivationImpl::hasCompleted()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// A state can only be considered as being completed under the following circumstances
// 1 - If the state is simple, both its entry and doActivity have finished their execution
// 2 - If the state is composite, the same rules than used for the simple state, but additionally
//     all the region of the state must have completed by reaching their final states
// When the operation returns true then the generation of a completion event is allowed
// for that particular state
boolean stateCompleted = this.isEntryCompleted & this.isDoActivityCompleted;
int i = 0;
while(stateCompleted && i < this.regionActivation.size()){
	stateCompleted = stateCompleted && this.regionActivation.get(i).isCompleted; 
	i = i + 1;
}
return stateCompleted;

	//end of body
}

void StateActivationImpl::notifyCompletion()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// The notification of a completion event consists in sending in the execution
// context of the state-machine a completion event occurrence. This event is
// placed in the pool before any other event
Object_ context = this.getExecutionContext();
((SM_ObjectActivation)context.objectActivation).registerCompletionEvent(this);

	//end of body
}

void StateActivationImpl::releaseDeferredEvents()
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// If events have been deferred by that state then these latter return to the
// regular event pool.
Object_ context = this.getExecutionContext();
if(context.objectActivation != null){
	((SM_ObjectActivation)context.objectActivation).releaseDeferredEvents(this); 
}

	//end of body
}

void StateActivationImpl::tryExecuteEntry(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// If an entry behavior is specified for that state then it is executed.
// If no entry behavior is specified but the state redefines another state
// and this latter provides an entry behavior then this behavior is executed
// instead. The rule applies recursively.
if(!this.isEntryCompleted){
	Behavior entry = this.getEntry(); 
	if(entry != null){
		Execution execution = this.getExecutionFor(entry, eventOccurrence);
		if(execution!=null){
			execution.execute();
			this.isEntryCompleted = true;
		}
		// If state has completed then generate a completion event
		if(this.hasCompleted()){
			this.notifyCompletion();
		}
	}
}

	//end of body
}

void StateActivationImpl::tryExecuteExit(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// Execute the exit behavior if any. If no exit behavior is
// specified but the state redefines another state which provides an
// exit behavior then this latter is executed instead. The rule applies
// recursively.
Behavior exit = this.getExit();
if(exit != null){
	Execution execution = this.getExecutionFor(exit, eventOccurrence);
	if(execution!=null){
		execution.execute();
	}
}
super.exit(null, eventOccurrence, null);

	//end of body
}

void StateActivationImpl::tryInvokeDoActivity(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	// If an doActivity behavior is specified for that state then it is executed.
// If no doActivity is specified but the state redefines another state which
// provides a doActivity then this latter is executed instead. The rule applies
// recursively.
if(!this.isDoActivityCompleted){
	Behavior doActivity = this.getDoActivity();
	if(doActivity!=null){
		// Create, initialize and register to the locus the doActivityContextObject. 
		this.doActivityContextObject = new DoActivityContextObject();
		this.getExecutionLocus().add(this.doActivityContextObject);
		this.doActivityContextObject.initialize(this.getExecutionContext());
		this.doActivityContextObject.owner = this;
		// Extract data from triggering event occurrence if possible. Reuse event occurrence
		// embedded data extraction logic provided by EventTriggeredExecution.
		List<ParameterValue> inputs = null;
		Execution doActivityExecution = this.getExecutionFor(doActivity, eventOccurrence);
		if(doActivityExecution instanceof EventTriggeredExecution){
			((EventTriggeredExecution)doActivityExecution).initialize();
			inputs = new ArrayList<ParameterValue>(((EventTriggeredExecution)doActivityExecution).wrappedExecution.parameterValues);
		}
		// Start doActivity execution on its own thread of execution (i.e., this
		// a different thread of execution than the one used for the state machine).
		this.doActivityContextObject.startBehavior(doActivity, inputs);
	}
}

	//end of body
}

//*********************************
// References
//*********************************
std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> StateActivationImpl::getConnectionPointActivations() const
{

    return m_connectionPointActivations;
}


std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject > StateActivationImpl::getDoActivityContextObject() const
{

    return m_doActivityContextObject;
}
void StateActivationImpl::setDoActivityContextObject(std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _doActivityContextObject)
{
    m_doActivityContextObject = _doActivityContextObject;
}

std::shared_ptr<Bag<PSSM::Semantics::StateMachines::RegionActivation>> StateActivationImpl::getRegionActivations() const
{

    return m_regionActivations;
}


//*********************************
// Union Getter
//*********************************


std::shared_ptr<StateActivation> StateActivationImpl::getThisStateActivationPtr() const
{
	return m_thisStateActivationPtr.lock();
}
void StateActivationImpl::setThisStateActivationPtr(std::weak_ptr<StateActivation> thisStateActivationPtr)
{
	m_thisStateActivationPtr = thisStateActivationPtr;
	setThisVertexActivationPtr(thisStateActivationPtr);
}
std::shared_ptr<ecore::EObject> StateActivationImpl::eContainer() const
{
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any StateActivationImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_CONNECTIONPOINTACTIVATIONS:
			return eAny(getConnectionPointActivations()); //345
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_DOACTIVITYCONTEXTOBJECT:
			return eAny(getDoActivityContextObject()); //3410
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISDOACTIVITYCOMPLETED:
			return eAny(getIsDoActivityCompleted()); //347
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISENTRYCOMPLETED:
			return eAny(getIsEntryCompleted()); //348
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISEXITCOMPLETED:
			return eAny(getIsExitCompleted()); //349
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_REGIONACTIVATIONS:
			return eAny(getRegionActivations()); //346
	}
	return VertexActivationImpl::eGet(featureID, resolve, coreType);
}
bool StateActivationImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_CONNECTIONPOINTACTIVATIONS:
			return getConnectionPointActivations() != nullptr; //345
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_DOACTIVITYCONTEXTOBJECT:
			return getDoActivityContextObject() != nullptr; //3410
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISDOACTIVITYCOMPLETED:
			return getIsDoActivityCompleted() != false; //347
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISENTRYCOMPLETED:
			return getIsEntryCompleted() != false; //348
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISEXITCOMPLETED:
			return getIsExitCompleted() != false; //349
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_REGIONACTIVATIONS:
			return getRegionActivations() != nullptr; //346
	}
	return VertexActivationImpl::internalEIsSet(featureID);
}
bool StateActivationImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_DOACTIVITYCONTEXTOBJECT:
		{
			// BOOST CAST
			std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _doActivityContextObject = newValue->get<std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject>>();
			setDoActivityContextObject(_doActivityContextObject); //3410
			return true;
		}
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISDOACTIVITYCOMPLETED:
		{
			// BOOST CAST
			bool _isDoActivityCompleted = newValue->get<bool>();
			setIsDoActivityCompleted(_isDoActivityCompleted); //347
			return true;
		}
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISENTRYCOMPLETED:
		{
			// BOOST CAST
			bool _isEntryCompleted = newValue->get<bool>();
			setIsEntryCompleted(_isEntryCompleted); //348
			return true;
		}
		case PSSM::PSSMPackage::STATEACTIVATION_EATTRIBUTE_ISEXITCOMPLETED:
		{
			// BOOST CAST
			bool _isExitCompleted = newValue->get<bool>();
			setIsExitCompleted(_isExitCompleted); //349
			return true;
		}
	}

	return VertexActivationImpl::eSet(featureID, newValue);
}

//*********************************
// Persistence Functions
//*********************************
void StateActivationImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
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

void StateActivationImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{
	try
	{
		std::map<std::string, std::string>::const_iterator iter;
	
		iter = attr_list.find("isDoActivityCompleted");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setIsDoActivityCompleted(value);
		}

		iter = attr_list.find("isEntryCompleted");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setIsEntryCompleted(value);
		}

		iter = attr_list.find("isExitCompleted");
		if ( iter != attr_list.end() )
		{
			// this attribute is a 'bool'
			bool value;
			std::istringstream(iter->second) >> std::boolalpha >> value;
			this->setIsExitCompleted(value);
		}
		std::shared_ptr<ecore::EClass> metaClass = this->eClass(); // get MetaClass
		iter = attr_list.find("doActivityContextObject");
		if ( iter != attr_list.end() )
		{
			// add unresolvedReference to loadHandler's list
			loadHandler->addUnresolvedReference(iter->second, loadHandler->getCurrentObject(), metaClass->getEStructuralFeature("doActivityContextObject")); // TODO use getEStructuralFeature() with id, for faster access to EStructuralFeature
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

	VertexActivationImpl::loadAttributes(loadHandler, attr_list);
}

void StateActivationImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("connectionPointActivations") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				std::cout << "| WARNING    | type if an eClassifiers node it empty" << std::endl;
				return; // no type name given and reference type is abstract
			}
			std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation> connectionPointActivations = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::ConnectionPointActivation>(modelFactory->create(typeName));
			if (connectionPointActivations != nullptr)
			{
				std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> list_connectionPointActivations = this->getConnectionPointActivations();
				list_connectionPointActivations->push_back(connectionPointActivations);
				loadHandler->handleChild(connectionPointActivations);
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

	VertexActivationImpl::loadNode(nodeName, loadHandler, modelFactory);
}

void StateActivationImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references)
{
	switch(featureID)
	{
		case PSSM::PSSMPackage::STATEACTIVATION_EREFERENCE_DOACTIVITYCONTEXTOBJECT:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> _doActivityContextObject = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::DoActivityContextObject>( references.front() );
				setDoActivityContextObject(_doActivityContextObject);
			}
			
			return;
		}
	}
	VertexActivationImpl::resolveReferences(featureID, references);
}

void StateActivationImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	VertexActivationImpl::saveContent(saveHandler);
	
	StateMachineSemanticVisitorImpl::saveContent(saveHandler);
	
	fUML::SemanticVisitorImpl::saveContent(saveHandler);
	
	ecore::EObjectImpl::saveContent(saveHandler);
	
	
	
}

void StateActivationImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<PSSM::PSSMPackage> package = PSSM::PSSMPackage::eInstance();

	
 
		// Add attributes
		if ( this->eIsSet(package->getStateActivation_EAttribute_isDoActivityCompleted()) )
		{
			saveHandler->addAttribute("isDoActivityCompleted", this->getIsDoActivityCompleted());
		}

		if ( this->eIsSet(package->getStateActivation_EAttribute_isEntryCompleted()) )
		{
			saveHandler->addAttribute("isEntryCompleted", this->getIsEntryCompleted());
		}

		if ( this->eIsSet(package->getStateActivation_EAttribute_isExitCompleted()) )
		{
			saveHandler->addAttribute("isExitCompleted", this->getIsExitCompleted());
		}

		// Add references
		saveHandler->addReference("doActivityContextObject", this->getDoActivityContextObject());


		//
		// Add new tags (from references)
		//
		std::shared_ptr<ecore::EClass> metaClass = this->eClass();
		// Save 'connectionPointActivations'
		std::shared_ptr<Bag<PSSM::Semantics::StateMachines::ConnectionPointActivation>> list_connectionPointActivations = this->getConnectionPointActivations();
		for (std::shared_ptr<PSSM::Semantics::StateMachines::ConnectionPointActivation> connectionPointActivations : *list_connectionPointActivations) 
		{
			saveHandler->addReference(connectionPointActivations, "connectionPointActivations", connectionPointActivations->eClass() != package->getConnectionPointActivation_EClass());
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

