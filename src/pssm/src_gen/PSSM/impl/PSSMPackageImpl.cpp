#include "PSSM/impl/PSSMPackageImpl.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
//metametamodel classes
#include "ecore/EAnnotation.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EClass.hpp"
#include "ecore/EDataType.hpp"
#include "ecore/EEnum.hpp"
#include "ecore/EEnumLiteral.hpp"
#include "ecore/EGenericType.hpp"
#include "ecore/EOperation.hpp"
#include "ecore/EPackage.hpp"
#include "ecore/EParameter.hpp"
#include "ecore/EReference.hpp"
#include "ecore/EStringToStringMapEntry.hpp"

//metamodel factory
#include "PSSM/PSSMFactory.hpp"

//depending model packages
#include "ecore/EcorePackage.hpp"
#include "fUML/FUMLPackage.hpp"
#include "types/TypesPackage.hpp"
#include "uml/UmlPackage.hpp"

using namespace PSSM;

bool PSSMPackageImpl::isInited = false;

PSSMPackageImpl::PSSMPackageImpl()
{
	setEFactoryInstance(std::shared_ptr<ecore::EFactory >( PSSMFactory::eInstance()));
}

PSSMPackageImpl::~PSSMPackageImpl()
{
}

PSSMPackage* PSSMPackageImpl::create()
{
	if (isInited)
	{
		return PSSMPackage::eInstance().get();
	}
	isInited = true;
	 
    // Obtain or create package and create package meta-data objects
    PSSMPackageImpl * metaModelPackage = new PSSMPackageImpl();
    return metaModelPackage;
}

void PSSMPackageImpl::init(std::shared_ptr<ecore::EPackage> package)
{
    // Initialize created meta-data
	createPackageContents(package);
	setThisEPackagePtr(package);
    initializePackageContents();   
}

// Begin Class CallEventExecution
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getCallEventExecution_EClass() const
{
	return m_callEventExecution_EClass;
}

std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getCallEventExecution_EAttribute_callerSuspended() const
{
	return m_callEventExecution_EAttribute_callerSuspended;
}

std::shared_ptr<ecore::EReference> PSSMPackageImpl::getCallEventExecution_EReference_behavior() const
{
	return m_callEventExecution_EReference_behavior;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getCallEventExecution_EReference_callerContext() const
{
	return m_callEventExecution_EReference_callerContext;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getCallEventExecution_EReference_operation() const
{
	return m_callEventExecution_EReference_operation;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getCallEventExecution_EOperation__send_CallEventOccurrence() const
{
	return m_callEventExecution_EOperation__send_CallEventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getCallEventExecution_EOperation__suspend() const
{
	return m_callEventExecution_EOperation__suspend;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getCallEventExecution_EOperation_execute() const
{
	return m_callEventExecution_EOperation_execute;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getCallEventExecution_EOperation_getBehavior() const
{
	return m_callEventExecution_EOperation_getBehavior;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getCallEventExecution_EOperation_getInputParameterValues() const
{
	return m_callEventExecution_EOperation_getInputParameterValues;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getCallEventExecution_EOperation_new_() const
{
	return m_callEventExecution_EOperation_new_;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getCallEventExecution_EOperation_releaseCaller() const
{
	return m_callEventExecution_EOperation_releaseCaller;
}

// End Class CallEventExecution

// Begin Class CallEventOccurrence
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getCallEventOccurrence_EClass() const
{
	return m_callEventOccurrence_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getCallEventOccurrence_EReference_execution() const
{
	return m_callEventOccurrence_EReference_execution;
}


// End Class CallEventOccurrence

// Begin Class ChoicePseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getChoicePseudostateActivation_EClass() const
{
	return m_choicePseudostateActivation_EClass;
}




// End Class ChoicePseudostateActivation

// Begin Class CompletionEventOccurrence
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getCompletionEventOccurrence_EClass() const
{
	return m_completionEventOccurrence_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getCompletionEventOccurrence_EReference_stateActivation() const
{
	return m_completionEventOccurrence_EReference_stateActivation;
}


// End Class CompletionEventOccurrence

// Begin Class ConditionalPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getConditionalPseudostateActivation_EClass() const
{
	return m_conditionalPseudostateActivation_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getConditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation() const
{
	return m_conditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation;
}

// End Class ConditionalPseudostateActivation

// Begin Class ConnectionPointActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getConnectionPointActivation_EClass() const
{
	return m_connectionPointActivation_EClass;
}




// End Class ConnectionPointActivation

// Begin Class DeepHistoryPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getDeepHistoryPseudostateActivation_EClass() const
{
	return m_deepHistoryPseudostateActivation_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDeepHistoryPseudostateActivation_EOperation_canRestore_StateActivation() const
{
	return m_deepHistoryPseudostateActivation_EOperation_canRestore_StateActivation;
}

// End Class DeepHistoryPseudostateActivation

// Begin Class DeferredEventOccurrence
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getDeferredEventOccurrence_EClass() const
{
	return m_deferredEventOccurrence_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getDeferredEventOccurrence_EReference_constrainingStateActivation() const
{
	return m_deferredEventOccurrence_EReference_constrainingStateActivation;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getDeferredEventOccurrence_EReference_deferredEventOccurrence() const
{
	return m_deferredEventOccurrence_EReference_deferredEventOccurrence;
}


// End Class DeferredEventOccurrence

// Begin Class DoActivityContextObject
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getDoActivityContextObject_EClass() const
{
	return m_doActivityContextObject_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getDoActivityContextObject_EReference_context() const
{
	return m_doActivityContextObject_EReference_context;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getDoActivityContextObject_EReference_owner() const
{
	return m_doActivityContextObject_EReference_owner;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation__register_EventAccepter() const
{
	return m_doActivityContextObject_EOperation__register_EventAccepter;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation_destroy() const
{
	return m_doActivityContextObject_EOperation_destroy;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation_dispatch_Operation() const
{
	return m_doActivityContextObject_EOperation_dispatch_Operation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation_getFeatureValue_StructuralFeature() const
{
	return m_doActivityContextObject_EOperation_getFeatureValue_StructuralFeature;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation_initialize_Object() const
{
	return m_doActivityContextObject_EOperation_initialize_Object;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation_send_EventOccurrence() const
{
	return m_doActivityContextObject_EOperation_send_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer() const
{
	return m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation_startBehavior_Class_ParameterValue() const
{
	return m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation_unregister_EventAccepter() const
{
	return m_doActivityContextObject_EOperation_unregister_EventAccepter;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObject_EOperation_unregisterFromContext_EventAccepter() const
{
	return m_doActivityContextObject_EOperation_unregisterFromContext_EventAccepter;
}

// End Class DoActivityContextObject

// Begin Class DoActivityContextObjectActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getDoActivityContextObjectActivation_EClass() const
{
	return m_doActivityContextObjectActivation_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObjectActivation_EOperation_dispatchNextEvent() const
{
	return m_doActivityContextObjectActivation_EOperation_dispatchNextEvent;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue() const
{
	return m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue;
}

// End Class DoActivityContextObjectActivation

// Begin Class DoActivityExecutionEventAccepter
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getDoActivityExecutionEventAccepter_EClass() const
{
	return m_doActivityExecutionEventAccepter_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getDoActivityExecutionEventAccepter_EReference_context() const
{
	return m_doActivityExecutionEventAccepter_EReference_context;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getDoActivityExecutionEventAccepter_EReference_encapsulatedAccepter() const
{
	return m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityExecutionEventAccepter_EOperation_accept_EventOccurrence() const
{
	return m_doActivityExecutionEventAccepter_EOperation_accept_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getDoActivityExecutionEventAccepter_EOperation_match_EventOccurrence() const
{
	return m_doActivityExecutionEventAccepter_EOperation_match_EventOccurrence;
}

// End Class DoActivityExecutionEventAccepter

// Begin Class EntryPointPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getEntryPointPseudostateActivation_EClass() const
{
	return m_entryPointPseudostateActivation_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getEntryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation() const
{
	return m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation;
}

// End Class EntryPointPseudostateActivation

// Begin Class EventTriggeredExecution
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getEventTriggeredExecution_EClass() const
{
	return m_eventTriggeredExecution_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getEventTriggeredExecution_EReference_triggeringEventOccurrence() const
{
	return m_eventTriggeredExecution_EReference_triggeringEventOccurrence;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getEventTriggeredExecution_EReference_wrappedExecution() const
{
	return m_eventTriggeredExecution_EReference_wrappedExecution;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getEventTriggeredExecution_EOperation_copy() const
{
	return m_eventTriggeredExecution_EOperation_copy;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getEventTriggeredExecution_EOperation_execute() const
{
	return m_eventTriggeredExecution_EOperation_execute;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getEventTriggeredExecution_EOperation_finalize() const
{
	return m_eventTriggeredExecution_EOperation_finalize;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getEventTriggeredExecution_EOperation_initialize() const
{
	return m_eventTriggeredExecution_EOperation_initialize;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getEventTriggeredExecution_EOperation_new_() const
{
	return m_eventTriggeredExecution_EOperation_new_;
}

// End Class EventTriggeredExecution

// Begin Class ExitPointPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getExitPointPseudostateActivation_EClass() const
{
	return m_exitPointPseudostateActivation_EClass;
}




// End Class ExitPointPseudostateActivation

// Begin Class ExternalTransitionActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getExternalTransitionActivation_EClass() const
{
	return m_externalTransitionActivation_EClass;
}




// End Class ExternalTransitionActivation

// Begin Class FinalStateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getFinalStateActivation_EClass() const
{
	return m_finalStateActivation_EClass;
}




// End Class FinalStateActivation

// Begin Class ForkPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getForkPseudostateActivation_EClass() const
{
	return m_forkPseudostateActivation_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getForkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation() const
{
	return m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation;
}

// End Class ForkPseudostateActivation

// Begin Class HistoryPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getHistoryPseudostateActivation_EClass() const
{
	return m_historyPseudostateActivation_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getHistoryPseudostateActivation_EOperation_hasDefaultTransition() const
{
	return m_historyPseudostateActivation_EOperation_hasDefaultTransition;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getHistoryPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence() const
{
	return m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getHistoryPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence() const
{
	return m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence;
}

// End Class HistoryPseudostateActivation

// Begin Class InitialPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getInitialPseudostateActivation_EClass() const
{
	return m_initialPseudostateActivation_EClass;
}




// End Class InitialPseudostateActivation

// Begin Class InternalTransitionActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getInternalTransitionActivation_EClass() const
{
	return m_internalTransitionActivation_EClass;
}




// End Class InternalTransitionActivation

// Begin Class JoinPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getJoinPseudostateActivation_EClass() const
{
	return m_joinPseudostateActivation_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getJoinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation() const
{
	return m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation;
}

// End Class JoinPseudostateActivation

// Begin Class JunctionPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getJunctionPseudostateActivation_EClass() const
{
	return m_junctionPseudostateActivation_EClass;
}




// End Class JunctionPseudostateActivation

// Begin Class LocalTransitionActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getLocalTransitionActivation_EClass() const
{
	return m_localTransitionActivation_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getLocalTransitionActivation_EOperation_getContainingState() const
{
	return m_localTransitionActivation_EOperation_getContainingState;
}

// End Class LocalTransitionActivation

// Begin Class PseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getPseudostateActivation_EClass() const
{
	return m_pseudostateActivation_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getPseudostateActivation_EReference_fireableTransitions() const
{
	return m_pseudostateActivation_EReference_fireableTransitions;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getPseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence() const
{
	return m_pseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence;
}

// End Class PseudostateActivation

// Begin Class RegionActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getRegionActivation_EClass() const
{
	return m_regionActivation_EClass;
}

std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getRegionActivation_EAttribute_isCompleted() const
{
	return m_regionActivation_EAttribute_isCompleted;
}

std::shared_ptr<ecore::EReference> PSSMPackageImpl::getRegionActivation_EReference_history() const
{
	return m_regionActivation_EReference_history;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getRegionActivation_EReference_transitionActivations() const
{
	return m_regionActivation_EReference_transitionActivations;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getRegionActivation_EReference_vertexActivations() const
{
	return m_regionActivation_EReference_vertexActivations;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence() const
{
	return m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_enter_TransitionActivation_EventOccurrence() const
{
	return m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_exit_TransitionActivation_EventOccurrence() const
{
	return m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_getOrigin() const
{
	return m_regionActivation_EOperation_getOrigin;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_getTransitionActivations() const
{
	return m_regionActivation_EOperation_getTransitionActivations;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_getVertexActivation_Vertex() const
{
	return m_regionActivation_EOperation_getVertexActivation_Vertex;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_getVertexActivations() const
{
	return m_regionActivation_EOperation_getVertexActivations;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_isRedefined_Vertex_Vertex() const
{
	return m_regionActivation_EOperation_isRedefined_Vertex_Vertex;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_isRedefined_Transition_Transition() const
{
	return m_regionActivation_EOperation_isRedefined_Transition_Transition;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getRegionActivation_EOperation_terminate() const
{
	return m_regionActivation_EOperation_terminate;
}

// End Class RegionActivation

// Begin Class SM_ExecutionFactory
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getSM_ExecutionFactory_EClass() const
{
	return m_sM_ExecutionFactory_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_ExecutionFactory_EOperation_instantiateVisitor_Element() const
{
	return m_sM_ExecutionFactory_EOperation_instantiateVisitor_Element;
}

// End Class SM_ExecutionFactory

// Begin Class SM_Locus
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getSM_Locus_EClass() const
{
	return m_sM_Locus_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_Locus_EOperation_instantiate_Class() const
{
	return m_sM_Locus_EOperation_instantiate_Class;
}

// End Class SM_Locus

// Begin Class SM_Object
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getSM_Object_EClass() const
{
	return m_sM_Object_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_Object_EOperation_destroy() const
{
	return m_sM_Object_EOperation_destroy;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_Object_EOperation_startBehavior_Class_ParameterValue() const
{
	return m_sM_Object_EOperation_startBehavior_Class_ParameterValue;
}

// End Class SM_Object

// Begin Class SM_ObjectActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getSM_ObjectActivation_EClass() const
{
	return m_sM_ObjectActivation_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getSM_ObjectActivation_EReference_deferredEventPool() const
{
	return m_sM_ObjectActivation_EReference_deferredEventPool;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_ObjectActivation_EOperation_getDeferredEventInsertionIndex() const
{
	return m_sM_ObjectActivation_EOperation_getDeferredEventInsertionIndex;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_ObjectActivation_EOperation_getNextCompletionEvent() const
{
	return m_sM_ObjectActivation_EOperation_getNextCompletionEvent;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_ObjectActivation_EOperation_getNextEvent() const
{
	return m_sM_ObjectActivation_EOperation_getNextEvent;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation() const
{
	return m_sM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation() const
{
	return m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation() const
{
	return m_sM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation;
}

// End Class SM_ObjectActivation

// Begin Class SM_OpaqueExpressionEvaluation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getSM_OpaqueExpressionEvaluation_EClass() const
{
	return m_sM_OpaqueExpressionEvaluation_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getSM_OpaqueExpressionEvaluation_EReference_context() const
{
	return m_sM_OpaqueExpressionEvaluation_EReference_context;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getSM_OpaqueExpressionEvaluation_EReference_parameterValues() const
{
	return m_sM_OpaqueExpressionEvaluation_EReference_parameterValues;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_OpaqueExpressionEvaluation_EOperation_executeExpressionBehavior() const
{
	return m_sM_OpaqueExpressionEvaluation_EOperation_executeExpressionBehavior;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter() const
{
	return m_sM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence() const
{
	return m_sM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue() const
{
	return m_sM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue;
}

// End Class SM_OpaqueExpressionEvaluation

// Begin Class SM_ReadSelfActionActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getSM_ReadSelfActionActivation_EClass() const
{
	return m_sM_ReadSelfActionActivation_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_ReadSelfActionActivation_EOperation_getExecutionContext() const
{
	return m_sM_ReadSelfActionActivation_EOperation_getExecutionContext;
}

// End Class SM_ReadSelfActionActivation

// Begin Class SM_RedefinitionBasedDispatchStrategy
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getSM_RedefinitionBasedDispatchStrategy_EClass() const
{
	return m_sM_RedefinitionBasedDispatchStrategy_EClass;
}



std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation() const
{
	return m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getSM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation() const
{
	return m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation;
}

// End Class SM_RedefinitionBasedDispatchStrategy

// Begin Class ShallowHistoryPseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getShallowHistoryPseudostateActivation_EClass() const
{
	return m_shallowHistoryPseudostateActivation_EClass;
}




// End Class ShallowHistoryPseudostateActivation

// Begin Class StateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getStateActivation_EClass() const
{
	return m_stateActivation_EClass;
}

std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getStateActivation_EAttribute_isDoActivityCompleted() const
{
	return m_stateActivation_EAttribute_isDoActivityCompleted;
}
std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getStateActivation_EAttribute_isEntryCompleted() const
{
	return m_stateActivation_EAttribute_isEntryCompleted;
}
std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getStateActivation_EAttribute_isExitCompleted() const
{
	return m_stateActivation_EAttribute_isExitCompleted;
}

std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateActivation_EReference_connectionPointActivations() const
{
	return m_stateActivation_EReference_connectionPointActivations;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateActivation_EReference_doActivityContextObject() const
{
	return m_stateActivation_EReference_doActivityContextObject;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateActivation_EReference_regionActivations() const
{
	return m_stateActivation_EReference_regionActivations;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_canDefer_EventOccurrence() const
{
	return m_stateActivation_EOperation_canDefer_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_defer_EventOccurrence() const
{
	return m_stateActivation_EOperation_defer_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence() const
{
	return m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_getConnectionPointActivation() const
{
	return m_stateActivation_EOperation_getConnectionPointActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_getConnectionPointActivation_Vertex() const
{
	return m_stateActivation_EOperation_getConnectionPointActivation_Vertex;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_getDoActivity() const
{
	return m_stateActivation_EOperation_getDoActivity;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_getEntry() const
{
	return m_stateActivation_EOperation_getEntry;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_getExit() const
{
	return m_stateActivation_EOperation_getExit;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_getFireableTransitions_EventOccurrence() const
{
	return m_stateActivation_EOperation_getFireableTransitions_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_getRegionActivation() const
{
	return m_stateActivation_EOperation_getRegionActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_hasCompleted() const
{
	return m_stateActivation_EOperation_hasCompleted;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_notifyCompletion() const
{
	return m_stateActivation_EOperation_notifyCompletion;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_releaseDeferredEvents() const
{
	return m_stateActivation_EOperation_releaseDeferredEvents;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_tryExecuteEntry_EventOccurrence() const
{
	return m_stateActivation_EOperation_tryExecuteEntry_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_tryExecuteExit_EventOccurrence() const
{
	return m_stateActivation_EOperation_tryExecuteExit_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateActivation_EOperation_tryInvokeDoActivity_EventOccurrence() const
{
	return m_stateActivation_EOperation_tryInvokeDoActivity_EventOccurrence;
}

// End Class StateActivation

// Begin Class StateConfiguration
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getStateConfiguration_EClass() const
{
	return m_stateConfiguration_EClass;
}

std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getStateConfiguration_EAttribute_level() const
{
	return m_stateConfiguration_EAttribute_level;
}

std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateConfiguration_EReference_children() const
{
	return m_stateConfiguration_EReference_children;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateConfiguration_EReference_completeConfiguration() const
{
	return m_stateConfiguration_EReference_completeConfiguration;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateConfiguration_EReference_vertexActivation() const
{
	return m_stateConfiguration_EReference_vertexActivation;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_add_VertexActivation_VertexActivation() const
{
	return m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_addChild_VertexActivation() const
{
	return m_stateConfiguration_EOperation_addChild_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_getChildren() const
{
	return m_stateConfiguration_EOperation_getChildren;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_getContext_VertexActivation() const
{
	return m_stateConfiguration_EOperation_getContext_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_getLevel() const
{
	return m_stateConfiguration_EOperation_getLevel;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_getParent() const
{
	return m_stateConfiguration_EOperation_getParent;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_getVertexActivation() const
{
	return m_stateConfiguration_EOperation_getVertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_isActive() const
{
	return m_stateConfiguration_EOperation_isActive;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_remove_VertexActivation_VertexActivation() const
{
	return m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_removeChild_VertexActivation() const
{
	return m_stateConfiguration_EOperation_removeChild_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateConfiguration_EOperation_setParent_StateConfiguration() const
{
	return m_stateConfiguration_EOperation_setParent_StateConfiguration;
}

// End Class StateConfiguration

// Begin Class StateMachineConfiguration
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getStateMachineConfiguration_EClass() const
{
	return m_stateMachineConfiguration_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateMachineConfiguration_EReference_execution() const
{
	return m_stateMachineConfiguration_EReference_execution;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateMachineConfiguration_EReference_rootConfiguration() const
{
	return m_stateMachineConfiguration_EReference_rootConfiguration;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineConfiguration_EOperation__register_StateActivation() const
{
	return m_stateMachineConfiguration_EOperation__register_StateActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineConfiguration_EOperation_add_VertexActivation() const
{
	return m_stateMachineConfiguration_EOperation_add_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineConfiguration_EOperation_getExecution() const
{
	return m_stateMachineConfiguration_EOperation_getExecution;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineConfiguration_EOperation_getRoot() const
{
	return m_stateMachineConfiguration_EOperation_getRoot;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer() const
{
	return m_stateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineConfiguration_EOperation_isActive_VertexActivation() const
{
	return m_stateMachineConfiguration_EOperation_isActive_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineConfiguration_EOperation_isStable() const
{
	return m_stateMachineConfiguration_EOperation_isStable;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineConfiguration_EOperation_remove_VertexActivation() const
{
	return m_stateMachineConfiguration_EOperation_remove_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineConfiguration_EOperation_unregister_StateActivation() const
{
	return m_stateMachineConfiguration_EOperation_unregister_StateActivation;
}

// End Class StateMachineConfiguration

// Begin Class StateMachineEventAccepter
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getStateMachineEventAccepter_EClass() const
{
	return m_stateMachineEventAccepter_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateMachineEventAccepter_EReference_registrationContext() const
{
	return m_stateMachineEventAccepter_EReference_registrationContext;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration() const
{
	return m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration() const
{
	return m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration() const
{
	return m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineEventAccepter_EOperation_accept_EventOccurrence() const
{
	return m_stateMachineEventAccepter_EOperation_accept_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineEventAccepter_EOperation_defer_EventOccurrence() const
{
	return m_stateMachineEventAccepter_EOperation_defer_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineEventAccepter_EOperation_isDeferred_EventOccurrence() const
{
	return m_stateMachineEventAccepter_EOperation_isDeferred_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineEventAccepter_EOperation_isTriggering_EventOccurrence() const
{
	return m_stateMachineEventAccepter_EOperation_isTriggering_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineEventAccepter_EOperation_match_EventOccurrence() const
{
	return m_stateMachineEventAccepter_EOperation_match_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineEventAccepter_EOperation_select_EventOccurrence() const
{
	return m_stateMachineEventAccepter_EOperation_select_EventOccurrence;
}

// End Class StateMachineEventAccepter

// Begin Class StateMachineExecution
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getStateMachineExecution_EClass() const
{
	return m_stateMachineExecution_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateMachineExecution_EReference_configuration() const
{
	return m_stateMachineExecution_EReference_configuration;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateMachineExecution_EReference_regionActivations() const
{
	return m_stateMachineExecution_EReference_regionActivations;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineExecution_EOperation_execute() const
{
	return m_stateMachineExecution_EOperation_execute;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineExecution_EOperation_getConfiguration() const
{
	return m_stateMachineExecution_EOperation_getConfiguration;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineExecution_EOperation_getRegionActivation() const
{
	return m_stateMachineExecution_EOperation_getRegionActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineExecution_EOperation_getVertexActivation_Vertex() const
{
	return m_stateMachineExecution_EOperation_getVertexActivation_Vertex;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineExecution_EOperation_initRegions() const
{
	return m_stateMachineExecution_EOperation_initRegions;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineExecution_EOperation_new_() const
{
	return m_stateMachineExecution_EOperation_new_;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineExecution_EOperation_startBehavior_Class_ParameterValue() const
{
	return m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineExecution_EOperation_terminate() const
{
	return m_stateMachineExecution_EOperation_terminate;
}

// End Class StateMachineExecution

// Begin Class StateMachineSemanticVisitor
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getStateMachineSemanticVisitor_EClass() const
{
	return m_stateMachineSemanticVisitor_EClass;
}


std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateMachineSemanticVisitor_EReference_node() const
{
	return m_stateMachineSemanticVisitor_EReference_node;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getStateMachineSemanticVisitor_EReference_parent() const
{
	return m_stateMachineSemanticVisitor_EReference_parent;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_activate() const
{
	return m_stateMachineSemanticVisitor_EOperation_activate;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_activateTransitions() const
{
	return m_stateMachineSemanticVisitor_EOperation_activateTransitions;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_getContextChain() const
{
	return m_stateMachineSemanticVisitor_EOperation_getContextChain;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_getExecutionContext() const
{
	return m_stateMachineSemanticVisitor_EOperation_getExecutionContext;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence() const
{
	return m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_getExecutionLocus() const
{
	return m_stateMachineSemanticVisitor_EOperation_getExecutionLocus;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_getNode() const
{
	return m_stateMachineSemanticVisitor_EOperation_getNode;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_getParent() const
{
	return m_stateMachineSemanticVisitor_EOperation_getParent;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_getStateMachineExecution() const
{
	return m_stateMachineSemanticVisitor_EOperation_getStateMachineExecution;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement() const
{
	return m_stateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger() const
{
	return m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_setNode_NamedElement() const
{
	return m_stateMachineSemanticVisitor_EOperation_setNode_NamedElement;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getStateMachineSemanticVisitor_EOperation_setParent_EJavaObject() const
{
	return m_stateMachineSemanticVisitor_EOperation_setParent_EJavaObject;
}

// End Class StateMachineSemanticVisitor

// Begin Class TerminatePseudostateActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getTerminatePseudostateActivation_EClass() const
{
	return m_terminatePseudostateActivation_EClass;
}




// End Class TerminatePseudostateActivation

// Begin Class TransitionActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getTransitionActivation_EClass() const
{
	return m_transitionActivation_EClass;
}

std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getTransitionActivation_EAttribute_analyticalStatus() const
{
	return m_transitionActivation_EAttribute_analyticalStatus;
}
std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getTransitionActivation_EAttribute_lastPropagation() const
{
	return m_transitionActivation_EAttribute_lastPropagation;
}
std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getTransitionActivation_EAttribute_status() const
{
	return m_transitionActivation_EAttribute_status;
}

std::shared_ptr<ecore::EReference> PSSMPackageImpl::getTransitionActivation_EReference_lastTriggeringEventOccurrence() const
{
	return m_transitionActivation_EReference_lastTriggeringEventOccurrence;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getTransitionActivation_EReference_leastCommonAncestor() const
{
	return m_transitionActivation_EReference_leastCommonAncestor;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getTransitionActivation_EReference_sourceVertexActivation() const
{
	return m_transitionActivation_EReference_sourceVertexActivation;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getTransitionActivation_EReference_targetVertexActivation() const
{
	return m_transitionActivation_EReference_targetVertexActivation;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_canFireOn_EventOccurrence() const
{
	return m_transitionActivation_EOperation_canFireOn_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_canPropagateExecution_EventOccurrence() const
{
	return m_transitionActivation_EOperation_canPropagateExecution_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_enterTarget_EventOccurrence() const
{
	return m_transitionActivation_EOperation_enterTarget_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_evaluateGuard_EventOccurrence() const
{
	return m_transitionActivation_EOperation_evaluateGuard_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_exitSource_EventOccurrence() const
{
	return m_transitionActivation_EOperation_exitSource_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_fire_EventOccurrence() const
{
	return m_transitionActivation_EOperation_fire_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_getLeastCommonAncestor() const
{
	return m_transitionActivation_EOperation_getLeastCommonAncestor;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_getSourceActivation() const
{
	return m_transitionActivation_EOperation_getSourceActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_getStatus() const
{
	return m_transitionActivation_EOperation_getStatus;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_getTargetActivation() const
{
	return m_transitionActivation_EOperation_getTargetActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_hasTrigger_EventOccurrence() const
{
	return m_transitionActivation_EOperation_hasTrigger_EventOccurrence;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_isGuarded() const
{
	return m_transitionActivation_EOperation_isGuarded;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_isReached() const
{
	return m_transitionActivation_EOperation_isReached;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_isTraversed_Boolean() const
{
	return m_transitionActivation_EOperation_isTraversed_Boolean;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_isTriggered_Boolean() const
{
	return m_transitionActivation_EOperation_isTriggered_Boolean;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_setSourceActivation_VertexActivation() const
{
	return m_transitionActivation_EOperation_setSourceActivation_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_setStatus_TransitionMetadata() const
{
	return m_transitionActivation_EOperation_setStatus_TransitionMetadata;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_setTargetActivation_VertexActivation() const
{
	return m_transitionActivation_EOperation_setTargetActivation_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getTransitionActivation_EOperation_tryExecuteEffect_EventOccurrence() const
{
	return m_transitionActivation_EOperation_tryExecuteEffect_EventOccurrence;
}

// End Class TransitionActivation

// Begin Class VertexActivation
std::shared_ptr<ecore::EClass> PSSMPackageImpl::getVertexActivation_EClass() const
{
	return m_vertexActivation_EClass;
}

std::shared_ptr<ecore::EAttribute> PSSMPackageImpl::getVertexActivation_EAttribute_status() const
{
	return m_vertexActivation_EAttribute_status;
}

std::shared_ptr<ecore::EReference> PSSMPackageImpl::getVertexActivation_EReference_incomingTransitionActivations() const
{
	return m_vertexActivation_EReference_incomingTransitionActivations;
}
std::shared_ptr<ecore::EReference> PSSMPackageImpl::getVertexActivation_EReference_outgoingTransitionActivations() const
{
	return m_vertexActivation_EReference_outgoingTransitionActivations;
}

std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_addIncomingTransition_TransitionActivation() const
{
	return m_vertexActivation_EOperation_addIncomingTransition_TransitionActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_addOutgoingTransition_TransitionActivation() const
{
	return m_vertexActivation_EOperation_addOutgoingTransition_TransitionActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation() const
{
	return m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_enter_TransitionActivation_RegionActivation() const
{
	return m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_exit_TransitionActivation_RegionActivation() const
{
	return m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_getAscendingHierarchy() const
{
	return m_vertexActivation_EOperation_getAscendingHierarchy;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_getIncomingTransitions() const
{
	return m_vertexActivation_EOperation_getIncomingTransitions;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_getLeastCommonAncestor_VertexActivation() const
{
	return m_vertexActivation_EOperation_getLeastCommonAncestor_VertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_getOutgoingTransitions() const
{
	return m_vertexActivation_EOperation_getOutgoingTransitions;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_getOwningRegionActivation() const
{
	return m_vertexActivation_EOperation_getOwningRegionActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_getParentVertexActivation() const
{
	return m_vertexActivation_EOperation_getParentVertexActivation;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_getRegionActivation_SemanticVisitor() const
{
	return m_vertexActivation_EOperation_getRegionActivation_SemanticVisitor;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_getStatus() const
{
	return m_vertexActivation_EOperation_getStatus;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_getVertexActivation_Vertex() const
{
	return m_vertexActivation_EOperation_getVertexActivation_Vertex;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_isActive() const
{
	return m_vertexActivation_EOperation_isActive;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_isEnterable_TransitionActivation_Boolean() const
{
	return m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_isExitable_TransitionActivation_Boolean() const
{
	return m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_setStatus_StateMetadata() const
{
	return m_vertexActivation_EOperation_setStatus_StateMetadata;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean() const
{
	return m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean() const
{
	return m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean;
}
std::shared_ptr<ecore::EOperation> PSSMPackageImpl::getVertexActivation_EOperation_terminate() const
{
	return m_vertexActivation_EOperation_terminate;
}

// End Class VertexActivation
std::shared_ptr<ecore::EEnum> PSSMPackageImpl::getStateMetadata_EEnum() const
{
	return m_stateMetadata_EEnum;
}
std::shared_ptr<ecore::EEnum> PSSMPackageImpl::getTransitionMetadata_EEnum() const
{
	return m_transitionMetadata_EEnum;
}

