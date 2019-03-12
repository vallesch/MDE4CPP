#include "PSSM/impl/PSSMPackageImpl.hpp"

// metametamodel factory
#include "ecore/EcoreFactory.hpp"

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

//depending model packages
#include "ecore/EcorePackage.hpp"
#include "fUML/FUMLPackage.hpp"
#include "types/TypesPackage.hpp"
#include "uml/UmlPackage.hpp"

using namespace PSSM;

void PSSMPackageImpl::createPackageContents(std::shared_ptr<ecore::EPackage> package)
{
	if (isCreated) 
	{
		return;
	}
	isCreated = true;

	std::shared_ptr<ecore::EcoreFactory> factory = ecore::EcoreFactory::eInstance();

	createCallEventExecutionContent(package, factory);
	createCallEventOccurrenceContent(package, factory);
	createChoicePseudostateActivationContent(package, factory);
	createCompletionEventOccurrenceContent(package, factory);
	createConditionalPseudostateActivationContent(package, factory);
	createConnectionPointActivationContent(package, factory);
	createDeepHistoryPseudostateActivationContent(package, factory);
	createDeferredEventOccurrenceContent(package, factory);
	createDoActivityContextObjectContent(package, factory);
	createDoActivityContextObjectActivationContent(package, factory);
	createDoActivityExecutionEventAccepterContent(package, factory);
	createEntryPointPseudostateActivationContent(package, factory);
	createEventTriggeredExecutionContent(package, factory);
	createExitPointPseudostateActivationContent(package, factory);
	createExternalTransitionActivationContent(package, factory);
	createFinalStateActivationContent(package, factory);
	createForkPseudostateActivationContent(package, factory);
	createHistoryPseudostateActivationContent(package, factory);
	createInitialPseudostateActivationContent(package, factory);
	createInternalTransitionActivationContent(package, factory);
	createJoinPseudostateActivationContent(package, factory);
	createJunctionPseudostateActivationContent(package, factory);
	createLocalTransitionActivationContent(package, factory);
	createPseudostateActivationContent(package, factory);
	createRegionActivationContent(package, factory);
	createSM_ExecutionFactoryContent(package, factory);
	createSM_LocusContent(package, factory);
	createSM_ObjectContent(package, factory);
	createSM_ObjectActivationContent(package, factory);
	createSM_OpaqueExpressionEvaluationContent(package, factory);
	createSM_ReadSelfActionActivationContent(package, factory);
	createSM_RedefinitionBasedDispatchStrategyContent(package, factory);
	createShallowHistoryPseudostateActivationContent(package, factory);
	createStateActivationContent(package, factory);
	createStateConfigurationContent(package, factory);
	createStateMachineConfigurationContent(package, factory);
	createStateMachineEventAccepterContent(package, factory);
	createStateMachineExecutionContent(package, factory);
	createStateMachineSemanticVisitorContent(package, factory);
	createTerminatePseudostateActivationContent(package, factory);
	createTransitionActivationContent(package, factory);
	createVertexActivationContent(package, factory);

	createPackageEDataTypes(package, factory);
}

void PSSMPackageImpl::createCallEventExecutionContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_callEventExecution_EClass = factory->createEClass_in_EPackage(package, CALLEVENTEXECUTION_ECLASS);
	m_callEventExecution_EAttribute_callerSuspended = factory->createEAttribute_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EATTRIBUTE_CALLERSUSPENDED);
	
	m_callEventExecution_EReference_behavior = factory->createEReference_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EREFERENCE_BEHAVIOR);
	m_callEventExecution_EReference_callerContext = factory->createEReference_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EREFERENCE_CALLERCONTEXT);
	m_callEventExecution_EReference_operation = factory->createEReference_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EREFERENCE_OPERATION);
	
	m_callEventExecution_EOperation__send_CallEventOccurrence = factory->createEOperation_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EOPERATION__SEND_CALLEVENTOCCURRENCE);
	m_callEventExecution_EOperation__suspend = factory->createEOperation_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EOPERATION__SUSPEND);
	m_callEventExecution_EOperation_execute = factory->createEOperation_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EOPERATION_EXECUTE);
	m_callEventExecution_EOperation_getBehavior = factory->createEOperation_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EOPERATION_GETBEHAVIOR);
	m_callEventExecution_EOperation_getInputParameterValues = factory->createEOperation_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EOPERATION_GETINPUTPARAMETERVALUES);
	m_callEventExecution_EOperation_new_ = factory->createEOperation_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EOPERATION_NEW_);
	m_callEventExecution_EOperation_releaseCaller = factory->createEOperation_in_EContainingClass(m_callEventExecution_EClass, CALLEVENTEXECUTION_EOPERATION_RELEASECALLER);
	
}

void PSSMPackageImpl::createCallEventOccurrenceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_callEventOccurrence_EClass = factory->createEClass_in_EPackage(package, CALLEVENTOCCURRENCE_ECLASS);
	
	m_callEventOccurrence_EReference_execution = factory->createEReference_in_EContainingClass(m_callEventOccurrence_EClass, CALLEVENTOCCURRENCE_EREFERENCE_EXECUTION);
	
	
}

void PSSMPackageImpl::createChoicePseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_choicePseudostateActivation_EClass = factory->createEClass_in_EPackage(package, CHOICEPSEUDOSTATEACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createCompletionEventOccurrenceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_completionEventOccurrence_EClass = factory->createEClass_in_EPackage(package, COMPLETIONEVENTOCCURRENCE_ECLASS);
	
	m_completionEventOccurrence_EReference_stateActivation = factory->createEReference_in_EContainingClass(m_completionEventOccurrence_EClass, COMPLETIONEVENTOCCURRENCE_EREFERENCE_STATEACTIVATION);
	
	
}

void PSSMPackageImpl::createConditionalPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_conditionalPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, CONDITIONALPSEUDOSTATEACTIVATION_ECLASS);
	
	
	m_conditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation = factory->createEOperation_in_EContainingClass(m_conditionalPseudostateActivation_EClass, CONDITIONALPSEUDOSTATEACTIVATION_EOPERATION_ISELSETRANSITION_TRANSITIONACTIVATION);
	
}

void PSSMPackageImpl::createConnectionPointActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_connectionPointActivation_EClass = factory->createEClass_in_EPackage(package, CONNECTIONPOINTACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createDeepHistoryPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_deepHistoryPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, DEEPHISTORYPSEUDOSTATEACTIVATION_ECLASS);
	
	
	m_deepHistoryPseudostateActivation_EOperation_canRestore_StateActivation = factory->createEOperation_in_EContainingClass(m_deepHistoryPseudostateActivation_EClass, DEEPHISTORYPSEUDOSTATEACTIVATION_EOPERATION_CANRESTORE_STATEACTIVATION);
	
}

void PSSMPackageImpl::createDeferredEventOccurrenceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_deferredEventOccurrence_EClass = factory->createEClass_in_EPackage(package, DEFERREDEVENTOCCURRENCE_ECLASS);
	
	m_deferredEventOccurrence_EReference_constrainingStateActivation = factory->createEReference_in_EContainingClass(m_deferredEventOccurrence_EClass, DEFERREDEVENTOCCURRENCE_EREFERENCE_CONSTRAININGSTATEACTIVATION);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence = factory->createEReference_in_EContainingClass(m_deferredEventOccurrence_EClass, DEFERREDEVENTOCCURRENCE_EREFERENCE_DEFERREDEVENTOCCURRENCE);
	
	
}

void PSSMPackageImpl::createDoActivityContextObjectContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_doActivityContextObject_EClass = factory->createEClass_in_EPackage(package, DOACTIVITYCONTEXTOBJECT_ECLASS);
	
	m_doActivityContextObject_EReference_context = factory->createEReference_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EREFERENCE_CONTEXT);
	m_doActivityContextObject_EReference_owner = factory->createEReference_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EREFERENCE_OWNER);
	
	m_doActivityContextObject_EOperation__register_EventAccepter = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION__REGISTER_EVENTACCEPTER);
	m_doActivityContextObject_EOperation_destroy = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION_DESTROY);
	m_doActivityContextObject_EOperation_dispatch_Operation = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION_DISPATCH_OPERATION);
	m_doActivityContextObject_EOperation_getFeatureValue_StructuralFeature = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION_GETFEATUREVALUE_STRUCTURALFEATURE);
	m_doActivityContextObject_EOperation_initialize_Object = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION_INITIALIZE_OBJECT);
	m_doActivityContextObject_EOperation_send_EventOccurrence = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION_SEND_EVENTOCCURRENCE);
	m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION_SETFEATUREVALUE_STRUCTURALFEATURE_INTEGER);
	m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION_STARTBEHAVIOR_CLASS_PARAMETERVALUE);
	m_doActivityContextObject_EOperation_unregister_EventAccepter = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION_UNREGISTER_EVENTACCEPTER);
	m_doActivityContextObject_EOperation_unregisterFromContext_EventAccepter = factory->createEOperation_in_EContainingClass(m_doActivityContextObject_EClass, DOACTIVITYCONTEXTOBJECT_EOPERATION_UNREGISTERFROMCONTEXT_EVENTACCEPTER);
	
}

void PSSMPackageImpl::createDoActivityContextObjectActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_doActivityContextObjectActivation_EClass = factory->createEClass_in_EPackage(package, DOACTIVITYCONTEXTOBJECTACTIVATION_ECLASS);
	
	
	m_doActivityContextObjectActivation_EOperation_dispatchNextEvent = factory->createEOperation_in_EContainingClass(m_doActivityContextObjectActivation_EClass, DOACTIVITYCONTEXTOBJECTACTIVATION_EOPERATION_DISPATCHNEXTEVENT);
	m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_doActivityContextObjectActivation_EClass, DOACTIVITYCONTEXTOBJECTACTIVATION_EOPERATION_STARTBEHAVIOR_CLASS_PARAMETERVALUE);
	
}

void PSSMPackageImpl::createDoActivityExecutionEventAccepterContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_doActivityExecutionEventAccepter_EClass = factory->createEClass_in_EPackage(package, DOACTIVITYEXECUTIONEVENTACCEPTER_ECLASS);
	
	m_doActivityExecutionEventAccepter_EReference_context = factory->createEReference_in_EContainingClass(m_doActivityExecutionEventAccepter_EClass, DOACTIVITYEXECUTIONEVENTACCEPTER_EREFERENCE_CONTEXT);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter = factory->createEReference_in_EContainingClass(m_doActivityExecutionEventAccepter_EClass, DOACTIVITYEXECUTIONEVENTACCEPTER_EREFERENCE_ENCAPSULATEDACCEPTER);
	
	m_doActivityExecutionEventAccepter_EOperation_accept_EventOccurrence = factory->createEOperation_in_EContainingClass(m_doActivityExecutionEventAccepter_EClass, DOACTIVITYEXECUTIONEVENTACCEPTER_EOPERATION_ACCEPT_EVENTOCCURRENCE);
	m_doActivityExecutionEventAccepter_EOperation_match_EventOccurrence = factory->createEOperation_in_EContainingClass(m_doActivityExecutionEventAccepter_EClass, DOACTIVITYEXECUTIONEVENTACCEPTER_EOPERATION_MATCH_EVENTOCCURRENCE);
	
}

void PSSMPackageImpl::createEntryPointPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_entryPointPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, ENTRYPOINTPSEUDOSTATEACTIVATION_ECLASS);
	
	
	m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation = factory->createEOperation_in_EContainingClass(m_entryPointPseudostateActivation_EClass, ENTRYPOINTPSEUDOSTATEACTIVATION_EOPERATION__ENTER_TRANSITIONACTIVATION_REGIONACTIVATION);
	
}

void PSSMPackageImpl::createEventTriggeredExecutionContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_eventTriggeredExecution_EClass = factory->createEClass_in_EPackage(package, EVENTTRIGGEREDEXECUTION_ECLASS);
	
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence = factory->createEReference_in_EContainingClass(m_eventTriggeredExecution_EClass, EVENTTRIGGEREDEXECUTION_EREFERENCE_TRIGGERINGEVENTOCCURRENCE);
	m_eventTriggeredExecution_EReference_wrappedExecution = factory->createEReference_in_EContainingClass(m_eventTriggeredExecution_EClass, EVENTTRIGGEREDEXECUTION_EREFERENCE_WRAPPEDEXECUTION);
	
	m_eventTriggeredExecution_EOperation_copy = factory->createEOperation_in_EContainingClass(m_eventTriggeredExecution_EClass, EVENTTRIGGEREDEXECUTION_EOPERATION_COPY);
	m_eventTriggeredExecution_EOperation_execute = factory->createEOperation_in_EContainingClass(m_eventTriggeredExecution_EClass, EVENTTRIGGEREDEXECUTION_EOPERATION_EXECUTE);
	m_eventTriggeredExecution_EOperation_finalize = factory->createEOperation_in_EContainingClass(m_eventTriggeredExecution_EClass, EVENTTRIGGEREDEXECUTION_EOPERATION_FINALIZE);
	m_eventTriggeredExecution_EOperation_initialize = factory->createEOperation_in_EContainingClass(m_eventTriggeredExecution_EClass, EVENTTRIGGEREDEXECUTION_EOPERATION_INITIALIZE);
	m_eventTriggeredExecution_EOperation_new_ = factory->createEOperation_in_EContainingClass(m_eventTriggeredExecution_EClass, EVENTTRIGGEREDEXECUTION_EOPERATION_NEW_);
	
}

void PSSMPackageImpl::createExitPointPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_exitPointPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, EXITPOINTPSEUDOSTATEACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createExternalTransitionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_externalTransitionActivation_EClass = factory->createEClass_in_EPackage(package, EXTERNALTRANSITIONACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createFinalStateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_finalStateActivation_EClass = factory->createEClass_in_EPackage(package, FINALSTATEACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createForkPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_forkPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, FORKPSEUDOSTATEACTIVATION_ECLASS);
	
	
	m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation = factory->createEOperation_in_EContainingClass(m_forkPseudostateActivation_EClass, FORKPSEUDOSTATEACTIVATION_EOPERATION__CANPROPAGATEEXECUTION_TRANSITIONACTIVATION_REGIONACTIVATION);
	
}

void PSSMPackageImpl::createHistoryPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_historyPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, HISTORYPSEUDOSTATEACTIVATION_ECLASS);
	
	
	m_historyPseudostateActivation_EOperation_hasDefaultTransition = factory->createEOperation_in_EContainingClass(m_historyPseudostateActivation_EClass, HISTORYPSEUDOSTATEACTIVATION_EOPERATION_HASDEFAULTTRANSITION);
	m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence = factory->createEOperation_in_EContainingClass(m_historyPseudostateActivation_EClass, HISTORYPSEUDOSTATEACTIVATION_EOPERATION_RESTORE_STATEACTIVATION_EVENTOCCURRENCE);
	m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence = factory->createEOperation_in_EContainingClass(m_historyPseudostateActivation_EClass, HISTORYPSEUDOSTATEACTIVATION_EOPERATION_RESTORE_REGIONACTIVATION_EVENTOCCURRENCE);
	
}

void PSSMPackageImpl::createInitialPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_initialPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, INITIALPSEUDOSTATEACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createInternalTransitionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_internalTransitionActivation_EClass = factory->createEClass_in_EPackage(package, INTERNALTRANSITIONACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createJoinPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_joinPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, JOINPSEUDOSTATEACTIVATION_ECLASS);
	
	
	m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation = factory->createEOperation_in_EContainingClass(m_joinPseudostateActivation_EClass, JOINPSEUDOSTATEACTIVATION_EOPERATION__CANPROPAGATEEXECUTION_TRANSITIONACTIVATION_REGIONACTIVATION);
	
}

void PSSMPackageImpl::createJunctionPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_junctionPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, JUNCTIONPSEUDOSTATEACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createLocalTransitionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_localTransitionActivation_EClass = factory->createEClass_in_EPackage(package, LOCALTRANSITIONACTIVATION_ECLASS);
	
	
	m_localTransitionActivation_EOperation_getContainingState = factory->createEOperation_in_EContainingClass(m_localTransitionActivation_EClass, LOCALTRANSITIONACTIVATION_EOPERATION_GETCONTAININGSTATE);
	
}

void PSSMPackageImpl::createPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_pseudostateActivation_EClass = factory->createEClass_in_EPackage(package, PSEUDOSTATEACTIVATION_ECLASS);
	
	m_pseudostateActivation_EReference_fireableTransitions = factory->createEReference_in_EContainingClass(m_pseudostateActivation_EClass, PSEUDOSTATEACTIVATION_EREFERENCE_FIREABLETRANSITIONS);
	
	m_pseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence = factory->createEOperation_in_EContainingClass(m_pseudostateActivation_EClass, PSEUDOSTATEACTIVATION_EOPERATION_EVALUATEALLGUARDS_EVENTOCCURRENCE);
	
}

void PSSMPackageImpl::createRegionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_regionActivation_EClass = factory->createEClass_in_EPackage(package, REGIONACTIVATION_ECLASS);
	m_regionActivation_EAttribute_isCompleted = factory->createEAttribute_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EATTRIBUTE_ISCOMPLETED);
	
	m_regionActivation_EReference_history = factory->createEReference_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EREFERENCE_HISTORY);
	m_regionActivation_EReference_transitionActivations = factory->createEReference_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EREFERENCE_TRANSITIONACTIVATIONS);
	m_regionActivation_EReference_vertexActivations = factory->createEReference_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EREFERENCE_VERTEXACTIVATIONS);
	
	m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_CANPROPAGATEEXECUTION_TRANSITIONACTIVATION_EVENTOCCURRENCE);
	m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_ENTER_TRANSITIONACTIVATION_EVENTOCCURRENCE);
	m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_EXIT_TRANSITIONACTIVATION_EVENTOCCURRENCE);
	m_regionActivation_EOperation_getOrigin = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_GETORIGIN);
	m_regionActivation_EOperation_getTransitionActivations = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_GETTRANSITIONACTIVATIONS);
	m_regionActivation_EOperation_getVertexActivation_Vertex = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_GETVERTEXACTIVATION_VERTEX);
	m_regionActivation_EOperation_getVertexActivations = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_GETVERTEXACTIVATIONS);
	m_regionActivation_EOperation_isRedefined_Vertex_Vertex = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_ISREDEFINED_VERTEX_VERTEX);
	m_regionActivation_EOperation_isRedefined_Transition_Transition = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_ISREDEFINED_TRANSITION_TRANSITION);
	m_regionActivation_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_regionActivation_EClass, REGIONACTIVATION_EOPERATION_TERMINATE);
	
}

void PSSMPackageImpl::createSM_ExecutionFactoryContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_sM_ExecutionFactory_EClass = factory->createEClass_in_EPackage(package, SM_EXECUTIONFACTORY_ECLASS);
	
	
	m_sM_ExecutionFactory_EOperation_instantiateVisitor_Element = factory->createEOperation_in_EContainingClass(m_sM_ExecutionFactory_EClass, SM_EXECUTIONFACTORY_EOPERATION_INSTANTIATEVISITOR_ELEMENT);
	
}

void PSSMPackageImpl::createSM_LocusContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_sM_Locus_EClass = factory->createEClass_in_EPackage(package, SM_LOCUS_ECLASS);
	
	
	m_sM_Locus_EOperation_instantiate_Class = factory->createEOperation_in_EContainingClass(m_sM_Locus_EClass, SM_LOCUS_EOPERATION_INSTANTIATE_CLASS);
	
}

void PSSMPackageImpl::createSM_ObjectContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_sM_Object_EClass = factory->createEClass_in_EPackage(package, SM_OBJECT_ECLASS);
	
	
	m_sM_Object_EOperation_destroy = factory->createEOperation_in_EContainingClass(m_sM_Object_EClass, SM_OBJECT_EOPERATION_DESTROY);
	m_sM_Object_EOperation_startBehavior_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_sM_Object_EClass, SM_OBJECT_EOPERATION_STARTBEHAVIOR_CLASS_PARAMETERVALUE);
	
}

void PSSMPackageImpl::createSM_ObjectActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_sM_ObjectActivation_EClass = factory->createEClass_in_EPackage(package, SM_OBJECTACTIVATION_ECLASS);
	
	m_sM_ObjectActivation_EReference_deferredEventPool = factory->createEReference_in_EContainingClass(m_sM_ObjectActivation_EClass, SM_OBJECTACTIVATION_EREFERENCE_DEFERREDEVENTPOOL);
	
	m_sM_ObjectActivation_EOperation_getDeferredEventInsertionIndex = factory->createEOperation_in_EContainingClass(m_sM_ObjectActivation_EClass, SM_OBJECTACTIVATION_EOPERATION_GETDEFERREDEVENTINSERTIONINDEX);
	m_sM_ObjectActivation_EOperation_getNextCompletionEvent = factory->createEOperation_in_EContainingClass(m_sM_ObjectActivation_EClass, SM_OBJECTACTIVATION_EOPERATION_GETNEXTCOMPLETIONEVENT);
	m_sM_ObjectActivation_EOperation_getNextEvent = factory->createEOperation_in_EContainingClass(m_sM_ObjectActivation_EClass, SM_OBJECTACTIVATION_EOPERATION_GETNEXTEVENT);
	m_sM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation = factory->createEOperation_in_EContainingClass(m_sM_ObjectActivation_EClass, SM_OBJECTACTIVATION_EOPERATION_REGISTERCOMPLETIONEVENT_STATEACTIVATION);
	m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation = factory->createEOperation_in_EContainingClass(m_sM_ObjectActivation_EClass, SM_OBJECTACTIVATION_EOPERATION_REGISTERDEFERREDEVENT_EVENTOCCURRENCE_STATEACTIVATION);
	m_sM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation = factory->createEOperation_in_EContainingClass(m_sM_ObjectActivation_EClass, SM_OBJECTACTIVATION_EOPERATION_RELEASEDEFERREDEVENTS_STATEACTIVATION);
	
}

void PSSMPackageImpl::createSM_OpaqueExpressionEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_sM_OpaqueExpressionEvaluation_EClass = factory->createEClass_in_EPackage(package, SM_OPAQUEEXPRESSIONEVALUATION_ECLASS);
	
	m_sM_OpaqueExpressionEvaluation_EReference_context = factory->createEReference_in_EContainingClass(m_sM_OpaqueExpressionEvaluation_EClass, SM_OPAQUEEXPRESSIONEVALUATION_EREFERENCE_CONTEXT);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues = factory->createEReference_in_EContainingClass(m_sM_OpaqueExpressionEvaluation_EClass, SM_OPAQUEEXPRESSIONEVALUATION_EREFERENCE_PARAMETERVALUES);
	
	m_sM_OpaqueExpressionEvaluation_EOperation_executeExpressionBehavior = factory->createEOperation_in_EContainingClass(m_sM_OpaqueExpressionEvaluation_EClass, SM_OPAQUEEXPRESSIONEVALUATION_EOPERATION_EXECUTEEXPRESSIONBEHAVIOR);
	m_sM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter = factory->createEOperation_in_EContainingClass(m_sM_OpaqueExpressionEvaluation_EClass, SM_OPAQUEEXPRESSIONEVALUATION_EOPERATION_GETPARAMETERVALUE_PARAMETER);
	m_sM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence = factory->createEOperation_in_EContainingClass(m_sM_OpaqueExpressionEvaluation_EClass, SM_OPAQUEEXPRESSIONEVALUATION_EOPERATION_INITIALIZE_EVENTOCCURRENCE);
	m_sM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue = factory->createEOperation_in_EContainingClass(m_sM_OpaqueExpressionEvaluation_EClass, SM_OPAQUEEXPRESSIONEVALUATION_EOPERATION_SETPARAMETERVALUE_PARAMETERVALUE);
	
}

void PSSMPackageImpl::createSM_ReadSelfActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_sM_ReadSelfActionActivation_EClass = factory->createEClass_in_EPackage(package, SM_READSELFACTIONACTIVATION_ECLASS);
	
	
	m_sM_ReadSelfActionActivation_EOperation_getExecutionContext = factory->createEOperation_in_EContainingClass(m_sM_ReadSelfActionActivation_EClass, SM_READSELFACTIONACTIVATION_EOPERATION_GETEXECUTIONCONTEXT);
	
}

void PSSMPackageImpl::createSM_RedefinitionBasedDispatchStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_sM_RedefinitionBasedDispatchStrategy_EClass = factory->createEClass_in_EPackage(package, SM_REDEFINITIONBASEDDISPATCHSTRATEGY_ECLASS);
	
	
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation = factory->createEOperation_in_EContainingClass(m_sM_RedefinitionBasedDispatchStrategy_EClass, SM_REDEFINITIONBASEDDISPATCHSTRATEGY_EOPERATION_DISPATCH_OBJECT_OPERATION);
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation = factory->createEOperation_in_EContainingClass(m_sM_RedefinitionBasedDispatchStrategy_EClass, SM_REDEFINITIONBASEDDISPATCHSTRATEGY_EOPERATION_GETMETHOD_OBJECT_OPERATION);
	
}

void PSSMPackageImpl::createShallowHistoryPseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_shallowHistoryPseudostateActivation_EClass = factory->createEClass_in_EPackage(package, SHALLOWHISTORYPSEUDOSTATEACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createStateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_stateActivation_EClass = factory->createEClass_in_EPackage(package, STATEACTIVATION_ECLASS);
	m_stateActivation_EAttribute_isDoActivityCompleted = factory->createEAttribute_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EATTRIBUTE_ISDOACTIVITYCOMPLETED);
	m_stateActivation_EAttribute_isEntryCompleted = factory->createEAttribute_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EATTRIBUTE_ISENTRYCOMPLETED);
	m_stateActivation_EAttribute_isExitCompleted = factory->createEAttribute_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EATTRIBUTE_ISEXITCOMPLETED);
	
	m_stateActivation_EReference_connectionPointActivations = factory->createEReference_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EREFERENCE_CONNECTIONPOINTACTIVATIONS);
	m_stateActivation_EReference_doActivityContextObject = factory->createEReference_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EREFERENCE_DOACTIVITYCONTEXTOBJECT);
	m_stateActivation_EReference_regionActivations = factory->createEReference_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EREFERENCE_REGIONACTIVATIONS);
	
	m_stateActivation_EOperation_canDefer_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_CANDEFER_EVENTOCCURRENCE);
	m_stateActivation_EOperation_defer_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_DEFER_EVENTOCCURRENCE);
	m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_ENTERREGIONS_TRANSITIONACTIVATION_EVENTOCCURRENCE);
	m_stateActivation_EOperation_getConnectionPointActivation = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_GETCONNECTIONPOINTACTIVATION);
	m_stateActivation_EOperation_getConnectionPointActivation_Vertex = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_GETCONNECTIONPOINTACTIVATION_VERTEX);
	m_stateActivation_EOperation_getDoActivity = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_GETDOACTIVITY);
	m_stateActivation_EOperation_getEntry = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_GETENTRY);
	m_stateActivation_EOperation_getExit = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_GETEXIT);
	m_stateActivation_EOperation_getFireableTransitions_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_GETFIREABLETRANSITIONS_EVENTOCCURRENCE);
	m_stateActivation_EOperation_getRegionActivation = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_GETREGIONACTIVATION);
	m_stateActivation_EOperation_hasCompleted = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_HASCOMPLETED);
	m_stateActivation_EOperation_notifyCompletion = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_NOTIFYCOMPLETION);
	m_stateActivation_EOperation_releaseDeferredEvents = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_RELEASEDEFERREDEVENTS);
	m_stateActivation_EOperation_tryExecuteEntry_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_TRYEXECUTEENTRY_EVENTOCCURRENCE);
	m_stateActivation_EOperation_tryExecuteExit_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_TRYEXECUTEEXIT_EVENTOCCURRENCE);
	m_stateActivation_EOperation_tryInvokeDoActivity_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateActivation_EClass, STATEACTIVATION_EOPERATION_TRYINVOKEDOACTIVITY_EVENTOCCURRENCE);
	
}

void PSSMPackageImpl::createStateConfigurationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_stateConfiguration_EClass = factory->createEClass_in_EPackage(package, STATECONFIGURATION_ECLASS);
	m_stateConfiguration_EAttribute_level = factory->createEAttribute_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EATTRIBUTE_LEVEL);
	
	m_stateConfiguration_EReference_children = factory->createEReference_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EREFERENCE_CHILDREN);
	m_stateConfiguration_EReference_completeConfiguration = factory->createEReference_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EREFERENCE_COMPLETECONFIGURATION);
	m_stateConfiguration_EReference_vertexActivation = factory->createEReference_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EREFERENCE_VERTEXACTIVATION);
	
	m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_ADD_VERTEXACTIVATION_VERTEXACTIVATION);
	m_stateConfiguration_EOperation_addChild_VertexActivation = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_ADDCHILD_VERTEXACTIVATION);
	m_stateConfiguration_EOperation_getChildren = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_GETCHILDREN);
	m_stateConfiguration_EOperation_getContext_VertexActivation = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_GETCONTEXT_VERTEXACTIVATION);
	m_stateConfiguration_EOperation_getLevel = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_GETLEVEL);
	m_stateConfiguration_EOperation_getParent = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_GETPARENT);
	m_stateConfiguration_EOperation_getVertexActivation = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_GETVERTEXACTIVATION);
	m_stateConfiguration_EOperation_isActive = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_ISACTIVE);
	m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_REMOVE_VERTEXACTIVATION_VERTEXACTIVATION);
	m_stateConfiguration_EOperation_removeChild_VertexActivation = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_REMOVECHILD_VERTEXACTIVATION);
	m_stateConfiguration_EOperation_setParent_StateConfiguration = factory->createEOperation_in_EContainingClass(m_stateConfiguration_EClass, STATECONFIGURATION_EOPERATION_SETPARENT_STATECONFIGURATION);
	
}

void PSSMPackageImpl::createStateMachineConfigurationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_stateMachineConfiguration_EClass = factory->createEClass_in_EPackage(package, STATEMACHINECONFIGURATION_ECLASS);
	
	m_stateMachineConfiguration_EReference_execution = factory->createEReference_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EREFERENCE_EXECUTION);
	m_stateMachineConfiguration_EReference_rootConfiguration = factory->createEReference_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EREFERENCE_ROOTCONFIGURATION);
	
	m_stateMachineConfiguration_EOperation__register_StateActivation = factory->createEOperation_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EOPERATION__REGISTER_STATEACTIVATION);
	m_stateMachineConfiguration_EOperation_add_VertexActivation = factory->createEOperation_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EOPERATION_ADD_VERTEXACTIVATION);
	m_stateMachineConfiguration_EOperation_getExecution = factory->createEOperation_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EOPERATION_GETEXECUTION);
	m_stateMachineConfiguration_EOperation_getRoot = factory->createEOperation_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EOPERATION_GETROOT);
	m_stateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer = factory->createEOperation_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EOPERATION_GETVERTEXACTIVATIONSATLEVEL_INTEGER);
	m_stateMachineConfiguration_EOperation_isActive_VertexActivation = factory->createEOperation_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EOPERATION_ISACTIVE_VERTEXACTIVATION);
	m_stateMachineConfiguration_EOperation_isStable = factory->createEOperation_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EOPERATION_ISSTABLE);
	m_stateMachineConfiguration_EOperation_remove_VertexActivation = factory->createEOperation_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EOPERATION_REMOVE_VERTEXACTIVATION);
	m_stateMachineConfiguration_EOperation_unregister_StateActivation = factory->createEOperation_in_EContainingClass(m_stateMachineConfiguration_EClass, STATEMACHINECONFIGURATION_EOPERATION_UNREGISTER_STATEACTIVATION);
	
}

void PSSMPackageImpl::createStateMachineEventAccepterContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_stateMachineEventAccepter_EClass = factory->createEClass_in_EPackage(package, STATEMACHINEEVENTACCEPTER_ECLASS);
	
	m_stateMachineEventAccepter_EReference_registrationContext = factory->createEReference_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EREFERENCE_REGISTRATIONCONTEXT);
	
	m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration = factory->createEOperation_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EOPERATION__DEFER_EVENTOCCURRENCE_STATECONFIGURATION);
	m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration = factory->createEOperation_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EOPERATION__ISDEFERRED_EVENTOCCURRENCE_STATECONFIGURATION);
	m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration = factory->createEOperation_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EOPERATION__SELECT_EVENTOCCURRENCE_STATECONFIGURATION);
	m_stateMachineEventAccepter_EOperation_accept_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EOPERATION_ACCEPT_EVENTOCCURRENCE);
	m_stateMachineEventAccepter_EOperation_defer_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EOPERATION_DEFER_EVENTOCCURRENCE);
	m_stateMachineEventAccepter_EOperation_isDeferred_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EOPERATION_ISDEFERRED_EVENTOCCURRENCE);
	m_stateMachineEventAccepter_EOperation_isTriggering_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EOPERATION_ISTRIGGERING_EVENTOCCURRENCE);
	m_stateMachineEventAccepter_EOperation_match_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EOPERATION_MATCH_EVENTOCCURRENCE);
	m_stateMachineEventAccepter_EOperation_select_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateMachineEventAccepter_EClass, STATEMACHINEEVENTACCEPTER_EOPERATION_SELECT_EVENTOCCURRENCE);
	
}

void PSSMPackageImpl::createStateMachineExecutionContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_stateMachineExecution_EClass = factory->createEClass_in_EPackage(package, STATEMACHINEEXECUTION_ECLASS);
	
	m_stateMachineExecution_EReference_configuration = factory->createEReference_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EREFERENCE_CONFIGURATION);
	m_stateMachineExecution_EReference_regionActivations = factory->createEReference_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EREFERENCE_REGIONACTIVATIONS);
	
	m_stateMachineExecution_EOperation_execute = factory->createEOperation_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EOPERATION_EXECUTE);
	m_stateMachineExecution_EOperation_getConfiguration = factory->createEOperation_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EOPERATION_GETCONFIGURATION);
	m_stateMachineExecution_EOperation_getRegionActivation = factory->createEOperation_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EOPERATION_GETREGIONACTIVATION);
	m_stateMachineExecution_EOperation_getVertexActivation_Vertex = factory->createEOperation_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EOPERATION_GETVERTEXACTIVATION_VERTEX);
	m_stateMachineExecution_EOperation_initRegions = factory->createEOperation_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EOPERATION_INITREGIONS);
	m_stateMachineExecution_EOperation_new_ = factory->createEOperation_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EOPERATION_NEW_);
	m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EOPERATION_STARTBEHAVIOR_CLASS_PARAMETERVALUE);
	m_stateMachineExecution_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_stateMachineExecution_EClass, STATEMACHINEEXECUTION_EOPERATION_TERMINATE);
	
}

void PSSMPackageImpl::createStateMachineSemanticVisitorContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_stateMachineSemanticVisitor_EClass = factory->createEClass_in_EPackage(package, STATEMACHINESEMANTICVISITOR_ECLASS);
	
	m_stateMachineSemanticVisitor_EReference_node = factory->createEReference_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EREFERENCE_NODE);
	m_stateMachineSemanticVisitor_EReference_parent = factory->createEReference_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EREFERENCE_PARENT);
	
	m_stateMachineSemanticVisitor_EOperation_activate = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_ACTIVATE);
	m_stateMachineSemanticVisitor_EOperation_activateTransitions = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_ACTIVATETRANSITIONS);
	m_stateMachineSemanticVisitor_EOperation_getContextChain = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_GETCONTEXTCHAIN);
	m_stateMachineSemanticVisitor_EOperation_getExecutionContext = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_GETEXECUTIONCONTEXT);
	m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_GETEXECUTIONFOR_BEHAVIOR_EVENTOCCURRENCE);
	m_stateMachineSemanticVisitor_EOperation_getExecutionLocus = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_GETEXECUTIONLOCUS);
	m_stateMachineSemanticVisitor_EOperation_getNode = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_GETNODE);
	m_stateMachineSemanticVisitor_EOperation_getParent = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_GETPARENT);
	m_stateMachineSemanticVisitor_EOperation_getStateMachineExecution = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_GETSTATEMACHINEEXECUTION);
	m_stateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_ISVISITORFOR_NAMEDELEMENT);
	m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_MATCH_EVENTOCCURRENCE_TRIGGER);
	m_stateMachineSemanticVisitor_EOperation_setNode_NamedElement = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_SETNODE_NAMEDELEMENT);
	m_stateMachineSemanticVisitor_EOperation_setParent_EJavaObject = factory->createEOperation_in_EContainingClass(m_stateMachineSemanticVisitor_EClass, STATEMACHINESEMANTICVISITOR_EOPERATION_SETPARENT_EJAVAOBJECT);
	
}

void PSSMPackageImpl::createTerminatePseudostateActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_terminatePseudostateActivation_EClass = factory->createEClass_in_EPackage(package, TERMINATEPSEUDOSTATEACTIVATION_ECLASS);
	
	
	
}

void PSSMPackageImpl::createTransitionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_transitionActivation_EClass = factory->createEClass_in_EPackage(package, TRANSITIONACTIVATION_ECLASS);
	m_transitionActivation_EAttribute_analyticalStatus = factory->createEAttribute_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EATTRIBUTE_ANALYTICALSTATUS);
	m_transitionActivation_EAttribute_lastPropagation = factory->createEAttribute_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EATTRIBUTE_LASTPROPAGATION);
	m_transitionActivation_EAttribute_status = factory->createEAttribute_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EATTRIBUTE_STATUS);
	
	m_transitionActivation_EReference_lastTriggeringEventOccurrence = factory->createEReference_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EREFERENCE_LASTTRIGGERINGEVENTOCCURRENCE);
	m_transitionActivation_EReference_leastCommonAncestor = factory->createEReference_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EREFERENCE_LEASTCOMMONANCESTOR);
	m_transitionActivation_EReference_sourceVertexActivation = factory->createEReference_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EREFERENCE_SOURCEVERTEXACTIVATION);
	m_transitionActivation_EReference_targetVertexActivation = factory->createEReference_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EREFERENCE_TARGETVERTEXACTIVATION);
	
	m_transitionActivation_EOperation_canFireOn_EventOccurrence = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_CANFIREON_EVENTOCCURRENCE);
	m_transitionActivation_EOperation_canPropagateExecution_EventOccurrence = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_CANPROPAGATEEXECUTION_EVENTOCCURRENCE);
	m_transitionActivation_EOperation_enterTarget_EventOccurrence = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_ENTERTARGET_EVENTOCCURRENCE);
	m_transitionActivation_EOperation_evaluateGuard_EventOccurrence = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_EVALUATEGUARD_EVENTOCCURRENCE);
	m_transitionActivation_EOperation_exitSource_EventOccurrence = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_EXITSOURCE_EVENTOCCURRENCE);
	m_transitionActivation_EOperation_fire_EventOccurrence = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_FIRE_EVENTOCCURRENCE);
	m_transitionActivation_EOperation_getLeastCommonAncestor = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_GETLEASTCOMMONANCESTOR);
	m_transitionActivation_EOperation_getSourceActivation = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_GETSOURCEACTIVATION);
	m_transitionActivation_EOperation_getStatus = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_GETSTATUS);
	m_transitionActivation_EOperation_getTargetActivation = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_GETTARGETACTIVATION);
	m_transitionActivation_EOperation_hasTrigger_EventOccurrence = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_HASTRIGGER_EVENTOCCURRENCE);
	m_transitionActivation_EOperation_isGuarded = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_ISGUARDED);
	m_transitionActivation_EOperation_isReached = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_ISREACHED);
	m_transitionActivation_EOperation_isTraversed_Boolean = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_ISTRAVERSED_BOOLEAN);
	m_transitionActivation_EOperation_isTriggered_Boolean = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_ISTRIGGERED_BOOLEAN);
	m_transitionActivation_EOperation_setSourceActivation_VertexActivation = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_SETSOURCEACTIVATION_VERTEXACTIVATION);
	m_transitionActivation_EOperation_setStatus_TransitionMetadata = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_SETSTATUS_TRANSITIONMETADATA);
	m_transitionActivation_EOperation_setTargetActivation_VertexActivation = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_SETTARGETACTIVATION_VERTEXACTIVATION);
	m_transitionActivation_EOperation_tryExecuteEffect_EventOccurrence = factory->createEOperation_in_EContainingClass(m_transitionActivation_EClass, TRANSITIONACTIVATION_EOPERATION_TRYEXECUTEEFFECT_EVENTOCCURRENCE);
	
}

void PSSMPackageImpl::createVertexActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_vertexActivation_EClass = factory->createEClass_in_EPackage(package, VERTEXACTIVATION_ECLASS);
	m_vertexActivation_EAttribute_status = factory->createEAttribute_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EATTRIBUTE_STATUS);
	
	m_vertexActivation_EReference_incomingTransitionActivations = factory->createEReference_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EREFERENCE_INCOMINGTRANSITIONACTIVATIONS);
	m_vertexActivation_EReference_outgoingTransitionActivations = factory->createEReference_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EREFERENCE_OUTGOINGTRANSITIONACTIVATIONS);
	
	m_vertexActivation_EOperation_addIncomingTransition_TransitionActivation = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_ADDINCOMINGTRANSITION_TRANSITIONACTIVATION);
	m_vertexActivation_EOperation_addOutgoingTransition_TransitionActivation = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_ADDOUTGOINGTRANSITION_TRANSITIONACTIVATION);
	m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_CANPROPAGATEEXECUTION_TRANSITIONACTIVATION_REGIONACTIVATION);
	m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_ENTER_TRANSITIONACTIVATION_REGIONACTIVATION);
	m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_EXIT_TRANSITIONACTIVATION_REGIONACTIVATION);
	m_vertexActivation_EOperation_getAscendingHierarchy = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_GETASCENDINGHIERARCHY);
	m_vertexActivation_EOperation_getIncomingTransitions = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_GETINCOMINGTRANSITIONS);
	m_vertexActivation_EOperation_getLeastCommonAncestor_VertexActivation = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_GETLEASTCOMMONANCESTOR_VERTEXACTIVATION);
	m_vertexActivation_EOperation_getOutgoingTransitions = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_GETOUTGOINGTRANSITIONS);
	m_vertexActivation_EOperation_getOwningRegionActivation = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_GETOWNINGREGIONACTIVATION);
	m_vertexActivation_EOperation_getParentVertexActivation = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_GETPARENTVERTEXACTIVATION);
	m_vertexActivation_EOperation_getRegionActivation_SemanticVisitor = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_GETREGIONACTIVATION_SEMANTICVISITOR);
	m_vertexActivation_EOperation_getStatus = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_GETSTATUS);
	m_vertexActivation_EOperation_getVertexActivation_Vertex = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_GETVERTEXACTIVATION_VERTEX);
	m_vertexActivation_EOperation_isActive = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_ISACTIVE);
	m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_ISENTERABLE_TRANSITIONACTIVATION_BOOLEAN);
	m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_ISEXITABLE_TRANSITIONACTIVATION_BOOLEAN);
	m_vertexActivation_EOperation_setStatus_StateMetadata = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_SETSTATUS_STATEMETADATA);
	m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_TAGINCOMINGTRANSITION_TRANSITIONMETADATA_BOOLEAN);
	m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_TAGOUTGOINGTRANSITION_TRANSITIONMETADATA_BOOLEAN);
	m_vertexActivation_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_vertexActivation_EClass, VERTEXACTIVATION_EOPERATION_TERMINATE);
	
}

void PSSMPackageImpl::createPackageEDataTypes(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_stateMetadata_EEnum = factory->createEEnum_in_EPackage(package, STATEMETADATA_EENUM);
	m_transitionMetadata_EEnum = factory->createEEnum_in_EPackage(package, TRANSITIONMETADATA_EENUM);
	
}
