#include "fUML/impl/FUMLPackageImpl.hpp"

// metametamodel factory
#include "ecore/EcoreFactory.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
//metametamodel classes
#include "ecore/EAnnotation.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EClass.hpp"
#include "ecore/EDataType.hpp"
#include "ecore/EGenericType.hpp"
#include "ecore/EOperation.hpp"
#include "ecore/EParameter.hpp"
#include "ecore/EReference.hpp"
#include "ecore/EStringToStringMapEntry.hpp"

//depending model packages
#include "ecore/EcorePackage.hpp"
#include "uml/UmlPackage.hpp"

using namespace fUML;

void FUMLPackageImpl::createPackageContents(std::shared_ptr<ecore::EPackage> package)
{
	if (isCreated) 
	{
		return;
	}
	isCreated = true;

	std::shared_ptr<ecore::EcoreFactory> factory = ecore::EcoreFactory::eInstance();

	createAcceptEventActionActivationContent(package, factory);
	createAcceptEventActionEventAccepterContent(package, factory);
	createActionActivationContent(package, factory);
	createActivityEdgeInstanceContent(package, factory);
	createActivityExecutionContent(package, factory);
	createActivityFinalNodeActivationContent(package, factory);
	createActivityNodeActivationContent(package, factory);
	createActivityNodeActivationGroupContent(package, factory);
	createActivityParameterNodeActivationContent(package, factory);
	createAddStructuralFeatureValueActionActivationContent(package, factory);
	createBooleanValueContent(package, factory);
	createCallActionActivationContent(package, factory);
	createCallBehaviorActionActivationContent(package, factory);
	createCallOperationActionActivationContent(package, factory);
	createCentralBufferNodeActivationContent(package, factory);
	createChoiceStrategyContent(package, factory);
	createClassifierBehaviorExecutionContent(package, factory);
	createClassifierBehaviorExecutionActivityContent(package, factory);
	createClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Content(package, factory);
	createClauseActivationContent(package, factory);
	createClearAssociationActionActivationContent(package, factory);
	createClearStructuralFeatureActionActivationContent(package, factory);
	createCompoundValueContent(package, factory);
	createConditionalNodeActivationContent(package, factory);
	createControlNodeActivationContent(package, factory);
	createControlTokenContent(package, factory);
	createCreateLinkActionActivationContent(package, factory);
	createCreateObjectActionActivationContent(package, factory);
	createDataStoreNodeActivationContent(package, factory);
	createDataValueContent(package, factory);
	createDecisionNodeActivationContent(package, factory);
	createDestroyLinkActionActivationContent(package, factory);
	createDestroyObjectActionActivationContent(package, factory);
	createDispatchStrategyContent(package, factory);
	createEnumerationValueContent(package, factory);
	createEvaluationContent(package, factory);
	createEventAccepterContent(package, factory);
	createEventDispatchLoopContent(package, factory);
	createEventOccurrenceContent(package, factory);
	createExecutionContent(package, factory);
	createExecutionFactoryContent(package, factory);
	createExecutionFactoryL1Content(package, factory);
	createExecutionFactoryL2Content(package, factory);
	createExecutionFactoryL3Content(package, factory);
	createExecutorContent(package, factory);
	createExpansionActivationGroupContent(package, factory);
	createExpansionNodeActivationContent(package, factory);
	createExpansionRegionActivationContent(package, factory);
	createExtensionalValueContent(package, factory);
	createExtensionalValueListContent(package, factory);
	createFIFOGetNextEventStrategyContent(package, factory);
	createFeatureValueContent(package, factory);
	createFirstChoiceStrategyContent(package, factory);
	createFlowFinalNodeActivationContent(package, factory);
	createForkNodeActivationContent(package, factory);
	createForkedTokenContent(package, factory);
	createGetNextEventStrategyContent(package, factory);
	createInitialNodeActivationContent(package, factory);
	createInputPinActivationContent(package, factory);
	createInstanceValueEvaluationContent(package, factory);
	createIntegerValueContent(package, factory);
	createInvocationActionActivationContent(package, factory);
	createJoinNodeActivationContent(package, factory);
	createLinkContent(package, factory);
	createLinkActionActivationContent(package, factory);
	createLiteralBooleanEvaluationContent(package, factory);
	createLiteralEvaluationContent(package, factory);
	createLiteralIntegerEvaluationContent(package, factory);
	createLiteralNullEvaluationContent(package, factory);
	createLiteralRealEvaluationContent(package, factory);
	createLiteralStringEvaluationContent(package, factory);
	createLiteralUnlimitedNaturalEvaluationContent(package, factory);
	createLocusContent(package, factory);
	createLoopNodeActivationContent(package, factory);
	createMergeNodeActivationContent(package, factory);
	createObjectContent(package, factory);
	createObjectActivationContent(package, factory);
	createObjectNodeActivationContent(package, factory);
	createObjectTokenContent(package, factory);
	createOfferContent(package, factory);
	createOpaqueBehaviorExecutionContent(package, factory);
	createOutputPinActivationContent(package, factory);
	createParameterValueContent(package, factory);
	createPinActivationContent(package, factory);
	createPrimitiveValueContent(package, factory);
	createReadExtentActionActivationContent(package, factory);
	createReadIsClassifiedObjectActionActivationContent(package, factory);
	createReadLinkActionActivationContent(package, factory);
	createReadSelfActionActivationContent(package, factory);
	createReadStructuralFeatureActionActivationContent(package, factory);
	createRealValueContent(package, factory);
	createReclassifyObjectActionActivationContent(package, factory);
	createRedefinitionBasedDispatchStrategyContent(package, factory);
	createReduceActionActivationContent(package, factory);
	createReferenceContent(package, factory);
	createRemoveStructuralFeatureValueActivationContent(package, factory);
	createSemanticStrategyContent(package, factory);
	createSemanticVisitorContent(package, factory);
	createSendSignalActionActivationContent(package, factory);
	createSignalInstanceContent(package, factory);
	createStartClassifierBehaviorActionActivationContent(package, factory);
	createStartObjectBehaviorActionActivationContent(package, factory);
	createStringValueContent(package, factory);
	createStructuralFeatureActionActivationContent(package, factory);
	createStructuredActivityNodeActivationContent(package, factory);
	createStructuredValueContent(package, factory);
	createTestIdentityActionActivationContent(package, factory);
	createTokenContent(package, factory);
	createTokenSetContent(package, factory);
	createUnlimitedNaturalValueContent(package, factory);
	createValueContent(package, factory);
	createValueSpecificActionActivationContent(package, factory);
	createValuesContent(package, factory);
	createWriteLinkActionActivationContent(package, factory);
	createWriteStructuralFeatureActionActivationContent(package, factory);

	createPackageEDataTypes(package, factory);
}

void FUMLPackageImpl::createAcceptEventActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_acceptEventActionActivation_EClass = factory->createEClass_in_EPackage(package, ACCEPTEVENTACTIONACTIVATION_ECLASS);
	m_acceptEventActionActivation_EAttribute_waiting = factory->createEAttribute_in_EContainingClass(m_acceptEventActionActivation_EClass, ACCEPTEVENTACTIONACTIVATION_EATTRIBUTE_WAITING);
	
	m_acceptEventActionActivation_EReference_eventAccepter = factory->createEReference_in_EContainingClass(m_acceptEventActionActivation_EClass, ACCEPTEVENTACTIONACTIVATION_EREFERENCE_EVENTACCEPTER);
	
	m_acceptEventActionActivation_EOperation_accept_SignalInstance = factory->createEOperation_in_EContainingClass(m_acceptEventActionActivation_EClass, ACCEPTEVENTACTIONACTIVATION_EOPERATION_ACCEPT_SIGNALINSTANCE);
	m_acceptEventActionActivation_EOperation_match_SignalInstance = factory->createEOperation_in_EContainingClass(m_acceptEventActionActivation_EClass, ACCEPTEVENTACTIONACTIVATION_EOPERATION_MATCH_SIGNALINSTANCE);
	
}

void FUMLPackageImpl::createAcceptEventActionEventAccepterContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_acceptEventActionEventAccepter_EClass = factory->createEClass_in_EPackage(package, ACCEPTEVENTACTIONEVENTACCEPTER_ECLASS);
	
	m_acceptEventActionEventAccepter_EReference_actionActivation = factory->createEReference_in_EContainingClass(m_acceptEventActionEventAccepter_EClass, ACCEPTEVENTACTIONEVENTACCEPTER_EREFERENCE_ACTIONACTIVATION);
	
	
}

void FUMLPackageImpl::createActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_actionActivation_EClass = factory->createEClass_in_EPackage(package, ACTIONACTIVATION_ECLASS);
	m_actionActivation_EAttribute_firing = factory->createEAttribute_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EATTRIBUTE_FIRING);
	
	m_actionActivation_EReference_inputPinActivation = factory->createEReference_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EREFERENCE_INPUTPINACTIVATION);
	m_actionActivation_EReference_outputPinActivation = factory->createEReference_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EREFERENCE_OUTPUTPINACTIVATION);
	m_actionActivation_EReference_pinActivation = factory->createEReference_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EREFERENCE_PINACTIVATION);
	
	m_actionActivation_EOperation_addOutgoingEdge_ActivityEdgeInstance = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_ADDOUTGOINGEDGE_ACTIVITYEDGEINSTANCE);
	m_actionActivation_EOperation_addPinActivation_PinActivation = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_ADDPINACTIVATION_PINACTIVATION);
	m_actionActivation_EOperation_completeAction = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_COMPLETEACTION);
	m_actionActivation_EOperation_createNodeActivations = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_CREATENODEACTIVATIONS);
	m_actionActivation_EOperation_doAction = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_DOACTION);
	m_actionActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_FIRE_TOKEN);
	m_actionActivation_EOperation_getTokens_InputPin = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_GETTOKENS_INPUTPIN);
	m_actionActivation_EOperation_isFirng = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_ISFIRNG);
	m_actionActivation_EOperation_isReady = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_ISREADY);
	m_actionActivation_EOperation_isSourceFor_ActivityEdgeInstance = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_ISSOURCEFOR_ACTIVITYEDGEINSTANCE);
	m_actionActivation_EOperation_makeBooleanValue_EBoolean = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_MAKEBOOLEANVALUE_EBOOLEAN);
	m_actionActivation_EOperation_putToken_OutputPin_Value = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_PUTTOKEN_OUTPUTPIN_VALUE);
	m_actionActivation_EOperation_putTokens_OutputPin_Value = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_PUTTOKENS_OUTPUTPIN_VALUE);
	m_actionActivation_EOperation_retrievePinActivation_Pin = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_RETRIEVEPINACTIVATION_PIN);
	m_actionActivation_EOperation_run = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_RUN);
	m_actionActivation_EOperation_sendOffers = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_SENDOFFERS);
	m_actionActivation_EOperation_takeOfferedTokens = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_TAKEOFFEREDTOKENS);
	m_actionActivation_EOperation_takeTokens_InputPin = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_TAKETOKENS_INPUTPIN);
	m_actionActivation_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_TERMINATE);
	m_actionActivation_EOperation_valueParticipatesInLink_Value_Link = factory->createEOperation_in_EContainingClass(m_actionActivation_EClass, ACTIONACTIVATION_EOPERATION_VALUEPARTICIPATESINLINK_VALUE_LINK);
	
}

void FUMLPackageImpl::createActivityEdgeInstanceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_activityEdgeInstance_EClass = factory->createEClass_in_EPackage(package, ACTIVITYEDGEINSTANCE_ECLASS);
	
	m_activityEdgeInstance_EReference_edge = factory->createEReference_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EREFERENCE_EDGE);
	m_activityEdgeInstance_EReference_group = factory->createEReference_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EREFERENCE_GROUP);
	m_activityEdgeInstance_EReference_offers = factory->createEReference_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EREFERENCE_OFFERS);
	m_activityEdgeInstance_EReference_source = factory->createEReference_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EREFERENCE_SOURCE);
	m_activityEdgeInstance_EReference_target = factory->createEReference_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EREFERENCE_TARGET);
	
	m_activityEdgeInstance_EOperation_countOfferedValue = factory->createEOperation_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EOPERATION_COUNTOFFEREDVALUE);
	m_activityEdgeInstance_EOperation_getOfferedTokens = factory->createEOperation_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EOPERATION_GETOFFEREDTOKENS);
	m_activityEdgeInstance_EOperation_hasOffer = factory->createEOperation_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EOPERATION_HASOFFER);
	m_activityEdgeInstance_EOperation_sendOffer_Token = factory->createEOperation_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EOPERATION_SENDOFFER_TOKEN);
	m_activityEdgeInstance_EOperation_takeOfferedTokens = factory->createEOperation_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EOPERATION_TAKEOFFEREDTOKENS);
	m_activityEdgeInstance_EOperation_takeOfferedTokens_EInt = factory->createEOperation_in_EContainingClass(m_activityEdgeInstance_EClass, ACTIVITYEDGEINSTANCE_EOPERATION_TAKEOFFEREDTOKENS_EINT);
	
}

void FUMLPackageImpl::createActivityExecutionContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_activityExecution_EClass = factory->createEClass_in_EPackage(package, ACTIVITYEXECUTION_ECLASS);
	
	m_activityExecution_EReference_activationGroup = factory->createEReference_in_EContainingClass(m_activityExecution_EClass, ACTIVITYEXECUTION_EREFERENCE_ACTIVATIONGROUP);
	
	m_activityExecution_EOperation_execute = factory->createEOperation_in_EContainingClass(m_activityExecution_EClass, ACTIVITYEXECUTION_EOPERATION_EXECUTE);
	m_activityExecution_EOperation_new_ = factory->createEOperation_in_EContainingClass(m_activityExecution_EClass, ACTIVITYEXECUTION_EOPERATION_NEW_);
	m_activityExecution_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_activityExecution_EClass, ACTIVITYEXECUTION_EOPERATION_TERMINATE);
	
}

void FUMLPackageImpl::createActivityFinalNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_activityFinalNodeActivation_EClass = factory->createEClass_in_EPackage(package, ACTIVITYFINALNODEACTIVATION_ECLASS);
	
	
	m_activityFinalNodeActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_activityFinalNodeActivation_EClass, ACTIVITYFINALNODEACTIVATION_EOPERATION_FIRE_TOKEN);
	
}

void FUMLPackageImpl::createActivityNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_activityNodeActivation_EClass = factory->createEClass_in_EPackage(package, ACTIVITYNODEACTIVATION_ECLASS);
	m_activityNodeActivation_EAttribute_running = factory->createEAttribute_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EATTRIBUTE_RUNNING);
	
	m_activityNodeActivation_EReference_group = factory->createEReference_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EREFERENCE_GROUP);
	m_activityNodeActivation_EReference_heldTokens = factory->createEReference_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EREFERENCE_HELDTOKENS);
	m_activityNodeActivation_EReference_incomingEdges = factory->createEReference_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EREFERENCE_INCOMINGEDGES);
	m_activityNodeActivation_EReference_node = factory->createEReference_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EREFERENCE_NODE);
	m_activityNodeActivation_EReference_outgoingEdges = factory->createEReference_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EREFERENCE_OUTGOINGEDGES);
	
	m_activityNodeActivation_EOperation_addIncomingEdge_ActivityEdgeInstance = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_ADDINCOMINGEDGE_ACTIVITYEDGEINSTANCE);
	m_activityNodeActivation_EOperation_addOutgoingEdge_ActivityEdgeInstance = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_ADDOUTGOINGEDGE_ACTIVITYEDGEINSTANCE);
	m_activityNodeActivation_EOperation_addToken_Token = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_ADDTOKEN_TOKEN);
	m_activityNodeActivation_EOperation_addTokens_Token = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_ADDTOKENS_TOKEN);
	m_activityNodeActivation_EOperation_clearTokens = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_CLEARTOKENS);
	m_activityNodeActivation_EOperation_createEdgeInstances = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_CREATEEDGEINSTANCES);
	m_activityNodeActivation_EOperation_createNodeActivations = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_CREATENODEACTIVATIONS);
	m_activityNodeActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_FIRE_TOKEN);
	m_activityNodeActivation_EOperation_getActivityExecution = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_GETACTIVITYEXECUTION);
	m_activityNodeActivation_EOperation_getExecutionContext = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_GETEXECUTIONCONTEXT);
	m_activityNodeActivation_EOperation_getExecutionLocus = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_GETEXECUTIONLOCUS);
	m_activityNodeActivation_EOperation_getNodeActivation_ActivityNode = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_GETNODEACTIVATION_ACTIVITYNODE);
	m_activityNodeActivation_EOperation_getRunning = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_GETRUNNING);
	m_activityNodeActivation_EOperation_getTokens = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_GETTOKENS);
	m_activityNodeActivation_EOperation_isReady = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_ISREADY);
	m_activityNodeActivation_EOperation_isSourceFor_ActivityEdgeInstance = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_ISSOURCEFOR_ACTIVITYEDGEINSTANCE);
	m_activityNodeActivation_EOperation_recieveOffer = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_RECIEVEOFFER);
	m_activityNodeActivation_EOperation_removeToken_Token = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_REMOVETOKEN_TOKEN);
	m_activityNodeActivation_EOperation_resume = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_RESUME);
	m_activityNodeActivation_EOperation_run = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_RUN);
	m_activityNodeActivation_EOperation_sendOffers_Token = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_SENDOFFERS_TOKEN);
	m_activityNodeActivation_EOperation_suspend = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_SUSPEND);
	m_activityNodeActivation_EOperation_takeOfferedTokens = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_TAKEOFFEREDTOKENS);
	m_activityNodeActivation_EOperation_takeTokens = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_TAKETOKENS);
	m_activityNodeActivation_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_activityNodeActivation_EClass, ACTIVITYNODEACTIVATION_EOPERATION_TERMINATE);
	
}

void FUMLPackageImpl::createActivityNodeActivationGroupContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_activityNodeActivationGroup_EClass = factory->createEClass_in_EPackage(package, ACTIVITYNODEACTIVATIONGROUP_ECLASS);
	
	m_activityNodeActivationGroup_EReference_activityExecution = factory->createEReference_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EREFERENCE_ACTIVITYEXECUTION);
	m_activityNodeActivationGroup_EReference_containingNodeActivation = factory->createEReference_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EREFERENCE_CONTAININGNODEACTIVATION);
	m_activityNodeActivationGroup_EReference_edgeInstances = factory->createEReference_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EREFERENCE_EDGEINSTANCES);
	m_activityNodeActivationGroup_EReference_nodeActivations = factory->createEReference_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EREFERENCE_NODEACTIVATIONS);
	m_activityNodeActivationGroup_EReference_suspendedActivations = factory->createEReference_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EREFERENCE_SUSPENDEDACTIVATIONS);
	
	m_activityNodeActivationGroup_EOperation_activate_ActivityNode_ActivityEdge = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_ACTIVATE_ACTIVITYNODE_ACTIVITYEDGE);
	m_activityNodeActivationGroup_EOperation_addEdgeInstance_ActivityEdgeInstance = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_ADDEDGEINSTANCE_ACTIVITYEDGEINSTANCE);
	m_activityNodeActivationGroup_EOperation_addNodeActivation_ActivityNodeActivation = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_ADDNODEACTIVATION_ACTIVITYNODEACTIVATION);
	m_activityNodeActivationGroup_EOperation_checkIncomingEdges_ActivityEdgeInstance_ActivityNodeActivation = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_CHECKINCOMINGEDGES_ACTIVITYEDGEINSTANCE_ACTIVITYNODEACTIVATION);
	m_activityNodeActivationGroup_EOperation_createEdgeInstance_ActivityEdge = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_CREATEEDGEINSTANCE_ACTIVITYEDGE);
	m_activityNodeActivationGroup_EOperation_createNodeActivation_ActivityNode = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_CREATENODEACTIVATION_ACTIVITYNODE);
	m_activityNodeActivationGroup_EOperation_createNodeActivations_ActivityNode = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_CREATENODEACTIVATIONS_ACTIVITYNODE);
	m_activityNodeActivationGroup_EOperation_getNodeActivation_ActivityNode = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_GETNODEACTIVATION_ACTIVITYNODE);
	m_activityNodeActivationGroup_EOperation_getOutputParameterNodeActivations = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_GETOUTPUTPARAMETERNODEACTIVATIONS);
	m_activityNodeActivationGroup_EOperation_hasSourceFor_ActivityEdgeInstance = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_HASSOURCEFOR_ACTIVITYEDGEINSTANCE);
	m_activityNodeActivationGroup_EOperation_isSuspended = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_ISSUSPENDED);
	m_activityNodeActivationGroup_EOperation_resume_ActivityNodeActivation = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_RESUME_ACTIVITYNODEACTIVATION);
	m_activityNodeActivationGroup_EOperation_retrieveActivityExecution = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_RETRIEVEACTIVITYEXECUTION);
	m_activityNodeActivationGroup_EOperation_run_ActivityNodeActivation = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_RUN_ACTIVITYNODEACTIVATION);
	m_activityNodeActivationGroup_EOperation_runNodes_ActivityNode = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_RUNNODES_ACTIVITYNODE);
	m_activityNodeActivationGroup_EOperation_suspend_ActivityNodeActivation = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_SUSPEND_ACTIVITYNODEACTIVATION);
	m_activityNodeActivationGroup_EOperation_terminateAll = factory->createEOperation_in_EContainingClass(m_activityNodeActivationGroup_EClass, ACTIVITYNODEACTIVATIONGROUP_EOPERATION_TERMINATEALL);
	
}

void FUMLPackageImpl::createActivityParameterNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_activityParameterNodeActivation_EClass = factory->createEClass_in_EPackage(package, ACTIVITYPARAMETERNODEACTIVATION_ECLASS);
	
	
	m_activityParameterNodeActivation_EOperation_clearTokens = factory->createEOperation_in_EContainingClass(m_activityParameterNodeActivation_EClass, ACTIVITYPARAMETERNODEACTIVATION_EOPERATION_CLEARTOKENS);
	m_activityParameterNodeActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_activityParameterNodeActivation_EClass, ACTIVITYPARAMETERNODEACTIVATION_EOPERATION_FIRE_TOKEN);
	
}

void FUMLPackageImpl::createAddStructuralFeatureValueActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_addStructuralFeatureValueActionActivation_EClass = factory->createEClass_in_EPackage(package, ADDSTRUCTURALFEATUREVALUEACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createBooleanValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_booleanValue_EClass = factory->createEClass_in_EPackage(package, BOOLEANVALUE_ECLASS);
	m_booleanValue_EAttribute_value = factory->createEAttribute_in_EContainingClass(m_booleanValue_EClass, BOOLEANVALUE_EATTRIBUTE_VALUE);
	
	
	m_booleanValue_EOperation_equals_Value = factory->createEOperation_in_EContainingClass(m_booleanValue_EClass, BOOLEANVALUE_EOPERATION_EQUALS_VALUE);
	m_booleanValue_EOperation_specify = factory->createEOperation_in_EContainingClass(m_booleanValue_EClass, BOOLEANVALUE_EOPERATION_SPECIFY);
	m_booleanValue_EOperation_toString = factory->createEOperation_in_EContainingClass(m_booleanValue_EClass, BOOLEANVALUE_EOPERATION_TOSTRING);
	
}

void FUMLPackageImpl::createCallActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_callActionActivation_EClass = factory->createEClass_in_EPackage(package, CALLACTIONACTIVATION_ECLASS);
	
	m_callActionActivation_EReference_callExecutions = factory->createEReference_in_EContainingClass(m_callActionActivation_EClass, CALLACTIONACTIVATION_EREFERENCE_CALLEXECUTIONS);
	
	m_callActionActivation_EOperation_doAction = factory->createEOperation_in_EContainingClass(m_callActionActivation_EClass, CALLACTIONACTIVATION_EOPERATION_DOACTION);
	m_callActionActivation_EOperation_getCallExecution = factory->createEOperation_in_EContainingClass(m_callActionActivation_EClass, CALLACTIONACTIVATION_EOPERATION_GETCALLEXECUTION);
	m_callActionActivation_EOperation_removeCallExecution_Execution = factory->createEOperation_in_EContainingClass(m_callActionActivation_EClass, CALLACTIONACTIVATION_EOPERATION_REMOVECALLEXECUTION_EXECUTION);
	m_callActionActivation_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_callActionActivation_EClass, CALLACTIONACTIVATION_EOPERATION_TERMINATE);
	
}

void FUMLPackageImpl::createCallBehaviorActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_callBehaviorActionActivation_EClass = factory->createEClass_in_EPackage(package, CALLBEHAVIORACTIONACTIVATION_ECLASS);
	
	
	m_callBehaviorActionActivation_EOperation_getCallExecution = factory->createEOperation_in_EContainingClass(m_callBehaviorActionActivation_EClass, CALLBEHAVIORACTIONACTIVATION_EOPERATION_GETCALLEXECUTION);
	
}

void FUMLPackageImpl::createCallOperationActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_callOperationActionActivation_EClass = factory->createEClass_in_EPackage(package, CALLOPERATIONACTIONACTIVATION_ECLASS);
	
	
	m_callOperationActionActivation_EOperation_getCallExecution = factory->createEOperation_in_EContainingClass(m_callOperationActionActivation_EClass, CALLOPERATIONACTIONACTIVATION_EOPERATION_GETCALLEXECUTION);
	
}

void FUMLPackageImpl::createCentralBufferNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_centralBufferNodeActivation_EClass = factory->createEClass_in_EPackage(package, CENTRALBUFFERNODEACTIVATION_ECLASS);
	
	
	m_centralBufferNodeActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_centralBufferNodeActivation_EClass, CENTRALBUFFERNODEACTIVATION_EOPERATION_FIRE_TOKEN);
	
}

void FUMLPackageImpl::createChoiceStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_choiceStrategy_EClass = factory->createEClass_in_EPackage(package, CHOICESTRATEGY_ECLASS);
	
	
	m_choiceStrategy_EOperation_choose_EInt = factory->createEOperation_in_EContainingClass(m_choiceStrategy_EClass, CHOICESTRATEGY_EOPERATION_CHOOSE_EINT);
	m_choiceStrategy_EOperation_retrieveName = factory->createEOperation_in_EContainingClass(m_choiceStrategy_EClass, CHOICESTRATEGY_EOPERATION_RETRIEVENAME);
	
}

void FUMLPackageImpl::createClassifierBehaviorExecutionContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_classifierBehaviorExecution_EClass = factory->createEClass_in_EPackage(package, CLASSIFIERBEHAVIOREXECUTION_ECLASS);
	
	m_classifierBehaviorExecution_EReference_classifier = factory->createEReference_in_EContainingClass(m_classifierBehaviorExecution_EClass, CLASSIFIERBEHAVIOREXECUTION_EREFERENCE_CLASSIFIER);
	m_classifierBehaviorExecution_EReference_execution = factory->createEReference_in_EContainingClass(m_classifierBehaviorExecution_EClass, CLASSIFIERBEHAVIOREXECUTION_EREFERENCE_EXECUTION);
	m_classifierBehaviorExecution_EReference_objectActivation = factory->createEReference_in_EContainingClass(m_classifierBehaviorExecution_EClass, CLASSIFIERBEHAVIOREXECUTION_EREFERENCE_OBJECTACTIVATION);
	
	m_classifierBehaviorExecution_EOperation__startObjectBehavior = factory->createEOperation_in_EContainingClass(m_classifierBehaviorExecution_EClass, CLASSIFIERBEHAVIOREXECUTION_EOPERATION__STARTOBJECTBEHAVIOR);
	m_classifierBehaviorExecution_EOperation_execute_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_classifierBehaviorExecution_EClass, CLASSIFIERBEHAVIOREXECUTION_EOPERATION_EXECUTE_CLASS_PARAMETERVALUE);
	m_classifierBehaviorExecution_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_classifierBehaviorExecution_EClass, CLASSIFIERBEHAVIOREXECUTION_EOPERATION_TERMINATE);
	
}

void FUMLPackageImpl::createClassifierBehaviorExecutionActivityContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_classifierBehaviorExecutionActivity_EClass = factory->createEClass_in_EPackage(package, CLASSIFIERBEHAVIOREXECUTIONACTIVITY_ECLASS);
	
	
	
}

void FUMLPackageImpl::createClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1Content(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_classifierBehaviorExecutionActivity_OwnedBehaviorActivity1_EClass = factory->createEClass_in_EPackage(package, CLASSIFIERBEHAVIOREXECUTIONACTIVITY_OWNEDBEHAVIORACTIVITY1_ECLASS);
	
	
	
}

void FUMLPackageImpl::createClauseActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_clauseActivation_EClass = factory->createEClass_in_EPackage(package, CLAUSEACTIVATION_ECLASS);
	
	m_clauseActivation_EReference_clause = factory->createEReference_in_EContainingClass(m_clauseActivation_EClass, CLAUSEACTIVATION_EREFERENCE_CLAUSE);
	m_clauseActivation_EReference_conditionalNodeActivation = factory->createEReference_in_EContainingClass(m_clauseActivation_EClass, CLAUSEACTIVATION_EREFERENCE_CONDITIONALNODEACTIVATION);
	
	m_clauseActivation_EOperation_getDecision = factory->createEOperation_in_EContainingClass(m_clauseActivation_EClass, CLAUSEACTIVATION_EOPERATION_GETDECISION);
	m_clauseActivation_EOperation_getPredecessors = factory->createEOperation_in_EContainingClass(m_clauseActivation_EClass, CLAUSEACTIVATION_EOPERATION_GETPREDECESSORS);
	m_clauseActivation_EOperation_getSuccessors = factory->createEOperation_in_EContainingClass(m_clauseActivation_EClass, CLAUSEACTIVATION_EOPERATION_GETSUCCESSORS);
	m_clauseActivation_EOperation_isReady = factory->createEOperation_in_EContainingClass(m_clauseActivation_EClass, CLAUSEACTIVATION_EOPERATION_ISREADY);
	m_clauseActivation_EOperation_recieveControl = factory->createEOperation_in_EContainingClass(m_clauseActivation_EClass, CLAUSEACTIVATION_EOPERATION_RECIEVECONTROL);
	m_clauseActivation_EOperation_runTest = factory->createEOperation_in_EContainingClass(m_clauseActivation_EClass, CLAUSEACTIVATION_EOPERATION_RUNTEST);
	m_clauseActivation_EOperation_selectBody = factory->createEOperation_in_EContainingClass(m_clauseActivation_EClass, CLAUSEACTIVATION_EOPERATION_SELECTBODY);
	
}

void FUMLPackageImpl::createClearAssociationActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_clearAssociationActionActivation_EClass = factory->createEClass_in_EPackage(package, CLEARASSOCIATIONACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createClearStructuralFeatureActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_clearStructuralFeatureActionActivation_EClass = factory->createEClass_in_EPackage(package, CLEARSTRUCTURALFEATUREACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createCompoundValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_compoundValue_EClass = factory->createEClass_in_EPackage(package, COMPOUNDVALUE_ECLASS);
	
	m_compoundValue_EReference_featureValues = factory->createEReference_in_EContainingClass(m_compoundValue_EClass, COMPOUNDVALUE_EREFERENCE_FEATUREVALUES);
	
	m_compoundValue_EOperation_assignFeatureValue_StructuralFeature_EInt = factory->createEOperation_in_EContainingClass(m_compoundValue_EClass, COMPOUNDVALUE_EOPERATION_ASSIGNFEATUREVALUE_STRUCTURALFEATURE_EINT);
	m_compoundValue_EOperation_equals_Value = factory->createEOperation_in_EContainingClass(m_compoundValue_EClass, COMPOUNDVALUE_EOPERATION_EQUALS_VALUE);
	m_compoundValue_EOperation_removeFeatureValues_Classifier = factory->createEOperation_in_EContainingClass(m_compoundValue_EClass, COMPOUNDVALUE_EOPERATION_REMOVEFEATUREVALUES_CLASSIFIER);
	m_compoundValue_EOperation_retrieveFeatureValue_StructuralFeature = factory->createEOperation_in_EContainingClass(m_compoundValue_EClass, COMPOUNDVALUE_EOPERATION_RETRIEVEFEATUREVALUE_STRUCTURALFEATURE);
	m_compoundValue_EOperation_retrieveFeatureValues = factory->createEOperation_in_EContainingClass(m_compoundValue_EClass, COMPOUNDVALUE_EOPERATION_RETRIEVEFEATUREVALUES);
	m_compoundValue_EOperation_toString = factory->createEOperation_in_EContainingClass(m_compoundValue_EClass, COMPOUNDVALUE_EOPERATION_TOSTRING);
	
}

void FUMLPackageImpl::createConditionalNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_conditionalNodeActivation_EClass = factory->createEClass_in_EPackage(package, CONDITIONALNODEACTIVATION_ECLASS);
	
	m_conditionalNodeActivation_EReference_clauseActivations = factory->createEReference_in_EContainingClass(m_conditionalNodeActivation_EClass, CONDITIONALNODEACTIVATION_EREFERENCE_CLAUSEACTIVATIONS);
	m_conditionalNodeActivation_EReference_selectedClauses = factory->createEReference_in_EContainingClass(m_conditionalNodeActivation_EClass, CONDITIONALNODEACTIVATION_EREFERENCE_SELECTEDCLAUSES);
	
	m_conditionalNodeActivation_EOperation_getClauseActivation_Clause = factory->createEOperation_in_EContainingClass(m_conditionalNodeActivation_EClass, CONDITIONALNODEACTIVATION_EOPERATION_GETCLAUSEACTIVATION_CLAUSE);
	m_conditionalNodeActivation_EOperation_runTest_Clause = factory->createEOperation_in_EContainingClass(m_conditionalNodeActivation_EClass, CONDITIONALNODEACTIVATION_EOPERATION_RUNTEST_CLAUSE);
	m_conditionalNodeActivation_EOperation_selectBody_Clause = factory->createEOperation_in_EContainingClass(m_conditionalNodeActivation_EClass, CONDITIONALNODEACTIVATION_EOPERATION_SELECTBODY_CLAUSE);
	
}

void FUMLPackageImpl::createControlNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_controlNodeActivation_EClass = factory->createEClass_in_EPackage(package, CONTROLNODEACTIVATION_ECLASS);
	
	
	m_controlNodeActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_controlNodeActivation_EClass, CONTROLNODEACTIVATION_EOPERATION_FIRE_TOKEN);
	
}

void FUMLPackageImpl::createControlTokenContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_controlToken_EClass = factory->createEClass_in_EPackage(package, CONTROLTOKEN_ECLASS);
	
	
	m_controlToken_EOperation_equals_Token = factory->createEOperation_in_EContainingClass(m_controlToken_EClass, CONTROLTOKEN_EOPERATION_EQUALS_TOKEN);
	m_controlToken_EOperation_getValue = factory->createEOperation_in_EContainingClass(m_controlToken_EClass, CONTROLTOKEN_EOPERATION_GETVALUE);
	m_controlToken_EOperation_isControl = factory->createEOperation_in_EContainingClass(m_controlToken_EClass, CONTROLTOKEN_EOPERATION_ISCONTROL);
	
}

void FUMLPackageImpl::createCreateLinkActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_createLinkActionActivation_EClass = factory->createEClass_in_EPackage(package, CREATELINKACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createCreateObjectActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_createObjectActionActivation_EClass = factory->createEClass_in_EPackage(package, CREATEOBJECTACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createDataStoreNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_dataStoreNodeActivation_EClass = factory->createEClass_in_EPackage(package, DATASTORENODEACTIVATION_ECLASS);
	
	
	m_dataStoreNodeActivation_EOperation_addToken_Token = factory->createEOperation_in_EContainingClass(m_dataStoreNodeActivation_EClass, DATASTORENODEACTIVATION_EOPERATION_ADDTOKEN_TOKEN);
	m_dataStoreNodeActivation_EOperation_removeToken_Token = factory->createEOperation_in_EContainingClass(m_dataStoreNodeActivation_EClass, DATASTORENODEACTIVATION_EOPERATION_REMOVETOKEN_TOKEN);
	
}

void FUMLPackageImpl::createDataValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_dataValue_EClass = factory->createEClass_in_EPackage(package, DATAVALUE_ECLASS);
	
	m_dataValue_EReference_type = factory->createEReference_in_EContainingClass(m_dataValue_EClass, DATAVALUE_EREFERENCE_TYPE);
	
	m_dataValue_EOperation_getTypes = factory->createEOperation_in_EContainingClass(m_dataValue_EClass, DATAVALUE_EOPERATION_GETTYPES);
	m_dataValue_EOperation_new_ = factory->createEOperation_in_EContainingClass(m_dataValue_EClass, DATAVALUE_EOPERATION_NEW_);
	
}

void FUMLPackageImpl::createDecisionNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_decisionNodeActivation_EClass = factory->createEClass_in_EPackage(package, DECISIONNODEACTIVATION_ECLASS);
	
	m_decisionNodeActivation_EReference_decisionInputExecution = factory->createEReference_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EREFERENCE_DECISIONINPUTEXECUTION);
	
	m_decisionNodeActivation_EOperation_executeDecisionInputBehavior_Value_Value = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_EXECUTEDECISIONINPUTBEHAVIOR_VALUE_VALUE);
	m_decisionNodeActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_FIRE_TOKEN);
	m_decisionNodeActivation_EOperation_getDecisionInputFlowInstance = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_GETDECISIONINPUTFLOWINSTANCE);
	m_decisionNodeActivation_EOperation_getDecisionInputFlowValue = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_GETDECISIONINPUTFLOWVALUE);
	m_decisionNodeActivation_EOperation_getDecisionValues_Token = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_GETDECISIONVALUES_TOKEN);
	m_decisionNodeActivation_EOperation_hasObjectFlowInput = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_HASOBJECTFLOWINPUT);
	m_decisionNodeActivation_EOperation_isReady = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_ISREADY);
	m_decisionNodeActivation_EOperation_removeJoinedControlTokens_Token = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_REMOVEJOINEDCONTROLTOKENS_TOKEN);
	m_decisionNodeActivation_EOperation_takeOfferedTokens = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_TAKEOFFEREDTOKENS);
	m_decisionNodeActivation_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_TERMINATE);
	m_decisionNodeActivation_EOperation_test_ValueSpecification_Value = factory->createEOperation_in_EContainingClass(m_decisionNodeActivation_EClass, DECISIONNODEACTIVATION_EOPERATION_TEST_VALUESPECIFICATION_VALUE);
	
}

void FUMLPackageImpl::createDestroyLinkActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_destroyLinkActionActivation_EClass = factory->createEClass_in_EPackage(package, DESTROYLINKACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createDestroyObjectActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_destroyObjectActionActivation_EClass = factory->createEClass_in_EPackage(package, DESTROYOBJECTACTIONACTIVATION_ECLASS);
	
	
	m_destroyObjectActionActivation_EOperation_destroyObject_Value_EBoolean = factory->createEOperation_in_EContainingClass(m_destroyObjectActionActivation_EClass, DESTROYOBJECTACTIONACTIVATION_EOPERATION_DESTROYOBJECT_VALUE_EBOOLEAN);
	m_destroyObjectActionActivation_EOperation_objectIsComposite_Reference_Link = factory->createEOperation_in_EContainingClass(m_destroyObjectActionActivation_EClass, DESTROYOBJECTACTIONACTIVATION_EOPERATION_OBJECTISCOMPOSITE_REFERENCE_LINK);
	
}

void FUMLPackageImpl::createDispatchStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_dispatchStrategy_EClass = factory->createEClass_in_EPackage(package, DISPATCHSTRATEGY_ECLASS);
	
	
	m_dispatchStrategy_EOperation_dispatch_Object_Operation = factory->createEOperation_in_EContainingClass(m_dispatchStrategy_EClass, DISPATCHSTRATEGY_EOPERATION_DISPATCH_OBJECT_OPERATION);
	m_dispatchStrategy_EOperation_retrieveMethod_Object_Operation = factory->createEOperation_in_EContainingClass(m_dispatchStrategy_EClass, DISPATCHSTRATEGY_EOPERATION_RETRIEVEMETHOD_OBJECT_OPERATION);
	m_dispatchStrategy_EOperation_retrieveName = factory->createEOperation_in_EContainingClass(m_dispatchStrategy_EClass, DISPATCHSTRATEGY_EOPERATION_RETRIEVENAME);
	
}

void FUMLPackageImpl::createEnumerationValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_enumerationValue_EClass = factory->createEClass_in_EPackage(package, ENUMERATIONVALUE_ECLASS);
	
	m_enumerationValue_EReference_literal = factory->createEReference_in_EContainingClass(m_enumerationValue_EClass, ENUMERATIONVALUE_EREFERENCE_LITERAL);
	m_enumerationValue_EReference_type = factory->createEReference_in_EContainingClass(m_enumerationValue_EClass, ENUMERATIONVALUE_EREFERENCE_TYPE);
	
	m_enumerationValue_EOperation_equals_Value = factory->createEOperation_in_EContainingClass(m_enumerationValue_EClass, ENUMERATIONVALUE_EOPERATION_EQUALS_VALUE);
	m_enumerationValue_EOperation_getTypes = factory->createEOperation_in_EContainingClass(m_enumerationValue_EClass, ENUMERATIONVALUE_EOPERATION_GETTYPES);
	m_enumerationValue_EOperation_new_ = factory->createEOperation_in_EContainingClass(m_enumerationValue_EClass, ENUMERATIONVALUE_EOPERATION_NEW_);
	m_enumerationValue_EOperation_specify = factory->createEOperation_in_EContainingClass(m_enumerationValue_EClass, ENUMERATIONVALUE_EOPERATION_SPECIFY);
	m_enumerationValue_EOperation_toString = factory->createEOperation_in_EContainingClass(m_enumerationValue_EClass, ENUMERATIONVALUE_EOPERATION_TOSTRING);
	
}

void FUMLPackageImpl::createEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_evaluation_EClass = factory->createEClass_in_EPackage(package, EVALUATION_ECLASS);
	
	m_evaluation_EReference_locus = factory->createEReference_in_EContainingClass(m_evaluation_EClass, EVALUATION_EREFERENCE_LOCUS);
	m_evaluation_EReference_specification = factory->createEReference_in_EContainingClass(m_evaluation_EClass, EVALUATION_EREFERENCE_SPECIFICATION);
	
	m_evaluation_EOperation_evaluate = factory->createEOperation_in_EContainingClass(m_evaluation_EClass, EVALUATION_EOPERATION_EVALUATE);
	
}

void FUMLPackageImpl::createEventAccepterContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_eventAccepter_EClass = factory->createEClass_in_EPackage(package, EVENTACCEPTER_ECLASS);
	
	
	m_eventAccepter_EOperation_accept_SignalInstance = factory->createEOperation_in_EContainingClass(m_eventAccepter_EClass, EVENTACCEPTER_EOPERATION_ACCEPT_SIGNALINSTANCE);
	m_eventAccepter_EOperation_match_SignalInstance = factory->createEOperation_in_EContainingClass(m_eventAccepter_EClass, EVENTACCEPTER_EOPERATION_MATCH_SIGNALINSTANCE);
	
}

void FUMLPackageImpl::createEventDispatchLoopContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_eventDispatchLoop_EClass = factory->createEClass_in_EPackage(package, EVENTDISPATCHLOOP_ECLASS);
	
	
	
}

void FUMLPackageImpl::createEventOccurrenceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_eventOccurrence_EClass = factory->createEClass_in_EPackage(package, EVENTOCCURRENCE_ECLASS);
	
	
	
}

void FUMLPackageImpl::createExecutionContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_execution_EClass = factory->createEClass_in_EPackage(package, EXECUTION_ECLASS);
	
	m_execution_EReference_context = factory->createEReference_in_EContainingClass(m_execution_EClass, EXECUTION_EREFERENCE_CONTEXT);
	m_execution_EReference_parameterValues = factory->createEReference_in_EContainingClass(m_execution_EClass, EXECUTION_EREFERENCE_PARAMETERVALUES);
	
	m_execution_EOperation_execute = factory->createEOperation_in_EContainingClass(m_execution_EClass, EXECUTION_EOPERATION_EXECUTE);
	m_execution_EOperation_getBehavior = factory->createEOperation_in_EContainingClass(m_execution_EClass, EXECUTION_EOPERATION_GETBEHAVIOR);
	m_execution_EOperation_getOutputParameterValues = factory->createEOperation_in_EContainingClass(m_execution_EClass, EXECUTION_EOPERATION_GETOUTPUTPARAMETERVALUES);
	m_execution_EOperation_getParameterValue_Parameter = factory->createEOperation_in_EContainingClass(m_execution_EClass, EXECUTION_EOPERATION_GETPARAMETERVALUE_PARAMETER);
	m_execution_EOperation_new_ = factory->createEOperation_in_EContainingClass(m_execution_EClass, EXECUTION_EOPERATION_NEW_);
	m_execution_EOperation_setParameterValue_ParameterValue = factory->createEOperation_in_EContainingClass(m_execution_EClass, EXECUTION_EOPERATION_SETPARAMETERVALUE_PARAMETERVALUE);
	m_execution_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_execution_EClass, EXECUTION_EOPERATION_TERMINATE);
	
}

void FUMLPackageImpl::createExecutionFactoryContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_executionFactory_EClass = factory->createEClass_in_EPackage(package, EXECUTIONFACTORY_ECLASS);
	
	m_executionFactory_EReference_builtInTypes = factory->createEReference_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EREFERENCE_BUILTINTYPES);
	m_executionFactory_EReference_locus = factory->createEReference_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EREFERENCE_LOCUS);
	m_executionFactory_EReference_primitiveBehaviorPrototypes = factory->createEReference_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EREFERENCE_PRIMITIVEBEHAVIORPROTOTYPES);
	m_executionFactory_EReference_strategies = factory->createEReference_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EREFERENCE_STRATEGIES);
	
	m_executionFactory_EOperation_addBuiltInType_PrimitiveType = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_ADDBUILTINTYPE_PRIMITIVETYPE);
	m_executionFactory_EOperation_addPrimitiveBehaviorPrototype_OpaqueBehaviorExecution = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_ADDPRIMITIVEBEHAVIORPROTOTYPE_OPAQUEBEHAVIOREXECUTION);
	m_executionFactory_EOperation_assignStrategy_SemanticStrategy = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_ASSIGNSTRATEGY_SEMANTICSTRATEGY);
	m_executionFactory_EOperation_createEvaluation_ValueSpecification = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_CREATEEVALUATION_VALUESPECIFICATION);
	m_executionFactory_EOperation_createExecution_Behavior_Object = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_CREATEEXECUTION_BEHAVIOR_OBJECT);
	m_executionFactory_EOperation_getBuiltInType_EString = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_GETBUILTINTYPE_ESTRING);
	m_executionFactory_EOperation_getStrategy_EString = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_GETSTRATEGY_ESTRING);
	m_executionFactory_EOperation_getStrategyIndex_EString = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_GETSTRATEGYINDEX_ESTRING);
	m_executionFactory_EOperation_instantiateOpaqueBehaviorExecution_OpaqueBehavior = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_INSTANTIATEOPAQUEBEHAVIOREXECUTION_OPAQUEBEHAVIOR);
	m_executionFactory_EOperation_instantiateVisitor_Element = factory->createEOperation_in_EContainingClass(m_executionFactory_EClass, EXECUTIONFACTORY_EOPERATION_INSTANTIATEVISITOR_ELEMENT);
	
}

void FUMLPackageImpl::createExecutionFactoryL1Content(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_executionFactoryL1_EClass = factory->createEClass_in_EPackage(package, EXECUTIONFACTORYL1_ECLASS);
	
	
	m_executionFactoryL1_EOperation_instantiateVisitor_Element = factory->createEOperation_in_EContainingClass(m_executionFactoryL1_EClass, EXECUTIONFACTORYL1_EOPERATION_INSTANTIATEVISITOR_ELEMENT);
	
}

void FUMLPackageImpl::createExecutionFactoryL2Content(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_executionFactoryL2_EClass = factory->createEClass_in_EPackage(package, EXECUTIONFACTORYL2_ECLASS);
	
	
	m_executionFactoryL2_EOperation_instantiateVisitor_Element = factory->createEOperation_in_EContainingClass(m_executionFactoryL2_EClass, EXECUTIONFACTORYL2_EOPERATION_INSTANTIATEVISITOR_ELEMENT);
	
}

void FUMLPackageImpl::createExecutionFactoryL3Content(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_executionFactoryL3_EClass = factory->createEClass_in_EPackage(package, EXECUTIONFACTORYL3_ECLASS);
	
	
	m_executionFactoryL3_EOperation_instantiateVisitor_Element = factory->createEOperation_in_EContainingClass(m_executionFactoryL3_EClass, EXECUTIONFACTORYL3_EOPERATION_INSTANTIATEVISITOR_ELEMENT);
	
}

void FUMLPackageImpl::createExecutorContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_executor_EClass = factory->createEClass_in_EPackage(package, EXECUTOR_ECLASS);
	
	m_executor_EReference_locus = factory->createEReference_in_EContainingClass(m_executor_EClass, EXECUTOR_EREFERENCE_LOCUS);
	
	m_executor_EOperation_evaluate_ValueSpecification = factory->createEOperation_in_EContainingClass(m_executor_EClass, EXECUTOR_EOPERATION_EVALUATE_VALUESPECIFICATION);
	m_executor_EOperation_execute_Behavior_ParameterValue = factory->createEOperation_in_EContainingClass(m_executor_EClass, EXECUTOR_EOPERATION_EXECUTE_BEHAVIOR_PARAMETERVALUE);
	m_executor_EOperation_start_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_executor_EClass, EXECUTOR_EOPERATION_START_CLASS_PARAMETERVALUE);
	
}

void FUMLPackageImpl::createExpansionActivationGroupContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_expansionActivationGroup_EClass = factory->createEClass_in_EPackage(package, EXPANSIONACTIVATIONGROUP_ECLASS);
	
	m_expansionActivationGroup_EReference_regionActivation = factory->createEReference_in_EContainingClass(m_expansionActivationGroup_EClass, EXPANSIONACTIVATIONGROUP_EREFERENCE_REGIONACTIVATION);
	
	
}

void FUMLPackageImpl::createExpansionNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_expansionNodeActivation_EClass = factory->createEClass_in_EPackage(package, EXPANSIONNODEACTIVATION_ECLASS);
	
	
	m_expansionNodeActivation_EOperation_getExpansionRegionActivation = factory->createEOperation_in_EContainingClass(m_expansionNodeActivation_EClass, EXPANSIONNODEACTIVATION_EOPERATION_GETEXPANSIONREGIONACTIVATION);
	
}

void FUMLPackageImpl::createExpansionRegionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_expansionRegionActivation_EClass = factory->createEClass_in_EPackage(package, EXPANSIONREGIONACTIVATION_ECLASS);
	
	m_expansionRegionActivation_EReference_activationGroups = factory->createEReference_in_EContainingClass(m_expansionRegionActivation_EClass, EXPANSIONREGIONACTIVATION_EREFERENCE_ACTIVATIONGROUPS);
	m_expansionRegionActivation_EReference_inputExpansionTokens = factory->createEReference_in_EContainingClass(m_expansionRegionActivation_EClass, EXPANSIONREGIONACTIVATION_EREFERENCE_INPUTEXPANSIONTOKENS);
	m_expansionRegionActivation_EReference_inputTokens = factory->createEReference_in_EContainingClass(m_expansionRegionActivation_EClass, EXPANSIONREGIONACTIVATION_EREFERENCE_INPUTTOKENS);
	
	m_expansionRegionActivation_EOperation_doStructuredActivity = factory->createEOperation_in_EContainingClass(m_expansionRegionActivation_EClass, EXPANSIONREGIONACTIVATION_EOPERATION_DOSTRUCTUREDACTIVITY);
	m_expansionRegionActivation_EOperation_getExpansionNodeActivation_ExpansionNode = factory->createEOperation_in_EContainingClass(m_expansionRegionActivation_EClass, EXPANSIONREGIONACTIVATION_EOPERATION_GETEXPANSIONNODEACTIVATION_EXPANSIONNODE);
	m_expansionRegionActivation_EOperation_numberOfValues = factory->createEOperation_in_EContainingClass(m_expansionRegionActivation_EClass, EXPANSIONREGIONACTIVATION_EOPERATION_NUMBEROFVALUES);
	m_expansionRegionActivation_EOperation_runGroup_ExpansionActivationGroup = factory->createEOperation_in_EContainingClass(m_expansionRegionActivation_EClass, EXPANSIONREGIONACTIVATION_EOPERATION_RUNGROUP_EXPANSIONACTIVATIONGROUP);
	
}

void FUMLPackageImpl::createExtensionalValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_extensionalValue_EClass = factory->createEClass_in_EPackage(package, EXTENSIONALVALUE_ECLASS);
	
	m_extensionalValue_EReference_locus = factory->createEReference_in_EContainingClass(m_extensionalValue_EClass, EXTENSIONALVALUE_EREFERENCE_LOCUS);
	
	m_extensionalValue_EOperation_destroy = factory->createEOperation_in_EContainingClass(m_extensionalValue_EClass, EXTENSIONALVALUE_EOPERATION_DESTROY);
	
}

void FUMLPackageImpl::createExtensionalValueListContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_extensionalValueList_EClass = factory->createEClass_in_EPackage(package, EXTENSIONALVALUELIST_ECLASS);
	
	
	m_extensionalValueList_EOperation_addValue_ExtensionalValue = factory->createEOperation_in_EContainingClass(m_extensionalValueList_EClass, EXTENSIONALVALUELIST_EOPERATION_ADDVALUE_EXTENSIONALVALUE);
	m_extensionalValueList_EOperation_addValue_ExtensionalValue_EInt = factory->createEOperation_in_EContainingClass(m_extensionalValueList_EClass, EXTENSIONALVALUELIST_EOPERATION_ADDVALUE_EXTENSIONALVALUE_EINT);
	m_extensionalValueList_EOperation_getValue = factory->createEOperation_in_EContainingClass(m_extensionalValueList_EClass, EXTENSIONALVALUELIST_EOPERATION_GETVALUE);
	m_extensionalValueList_EOperation_removeValue_EInt = factory->createEOperation_in_EContainingClass(m_extensionalValueList_EClass, EXTENSIONALVALUELIST_EOPERATION_REMOVEVALUE_EINT);
	m_extensionalValueList_EOperation_setValue_ExtensionalValue_EInt = factory->createEOperation_in_EContainingClass(m_extensionalValueList_EClass, EXTENSIONALVALUELIST_EOPERATION_SETVALUE_EXTENSIONALVALUE_EINT);
	
}

void FUMLPackageImpl::createFIFOGetNextEventStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_fIFOGetNextEventStrategy_EClass = factory->createEClass_in_EPackage(package, FIFOGETNEXTEVENTSTRATEGY_ECLASS);
	
	
	
}

void FUMLPackageImpl::createFeatureValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_featureValue_EClass = factory->createEClass_in_EPackage(package, FEATUREVALUE_ECLASS);
	m_featureValue_EAttribute_position = factory->createEAttribute_in_EContainingClass(m_featureValue_EClass, FEATUREVALUE_EATTRIBUTE_POSITION);
	
	m_featureValue_EReference_feature = factory->createEReference_in_EContainingClass(m_featureValue_EClass, FEATUREVALUE_EREFERENCE_FEATURE);
	m_featureValue_EReference_values = factory->createEReference_in_EContainingClass(m_featureValue_EClass, FEATUREVALUE_EREFERENCE_VALUES);
	
	m_featureValue_EOperation_hasEqualValues_FeatureValue = factory->createEOperation_in_EContainingClass(m_featureValue_EClass, FEATUREVALUE_EOPERATION_HASEQUALVALUES_FEATUREVALUE);
	
}

void FUMLPackageImpl::createFirstChoiceStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_firstChoiceStrategy_EClass = factory->createEClass_in_EPackage(package, FIRSTCHOICESTRATEGY_ECLASS);
	
	
	m_firstChoiceStrategy_EOperation_choose_EInt = factory->createEOperation_in_EContainingClass(m_firstChoiceStrategy_EClass, FIRSTCHOICESTRATEGY_EOPERATION_CHOOSE_EINT);
	
}

void FUMLPackageImpl::createFlowFinalNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_flowFinalNodeActivation_EClass = factory->createEClass_in_EPackage(package, FLOWFINALNODEACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createForkNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_forkNodeActivation_EClass = factory->createEClass_in_EPackage(package, FORKNODEACTIVATION_ECLASS);
	
	
	m_forkNodeActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_forkNodeActivation_EClass, FORKNODEACTIVATION_EOPERATION_FIRE_TOKEN);
	m_forkNodeActivation_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_forkNodeActivation_EClass, FORKNODEACTIVATION_EOPERATION_TERMINATE);
	
}

void FUMLPackageImpl::createForkedTokenContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_forkedToken_EClass = factory->createEClass_in_EPackage(package, FORKEDTOKEN_ECLASS);
	m_forkedToken_EAttribute_baseTokenIsWithdrawn = factory->createEAttribute_in_EContainingClass(m_forkedToken_EClass, FORKEDTOKEN_EATTRIBUTE_BASETOKENISWITHDRAWN);
	m_forkedToken_EAttribute_remainingOffersCount = factory->createEAttribute_in_EContainingClass(m_forkedToken_EClass, FORKEDTOKEN_EATTRIBUTE_REMAININGOFFERSCOUNT);
	
	m_forkedToken_EReference_baseToken = factory->createEReference_in_EContainingClass(m_forkedToken_EClass, FORKEDTOKEN_EREFERENCE_BASETOKEN);
	
	m_forkedToken_EOperation_equals_Token = factory->createEOperation_in_EContainingClass(m_forkedToken_EClass, FORKEDTOKEN_EOPERATION_EQUALS_TOKEN);
	m_forkedToken_EOperation_getValue = factory->createEOperation_in_EContainingClass(m_forkedToken_EClass, FORKEDTOKEN_EOPERATION_GETVALUE);
	m_forkedToken_EOperation_isControl = factory->createEOperation_in_EContainingClass(m_forkedToken_EClass, FORKEDTOKEN_EOPERATION_ISCONTROL);
	m_forkedToken_EOperation_withdraw = factory->createEOperation_in_EContainingClass(m_forkedToken_EClass, FORKEDTOKEN_EOPERATION_WITHDRAW);
	
}

void FUMLPackageImpl::createGetNextEventStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_getNextEventStrategy_EClass = factory->createEClass_in_EPackage(package, GETNEXTEVENTSTRATEGY_ECLASS);
	
	
	m_getNextEventStrategy_EOperation_retrieveNextEvent_ObjectActivation = factory->createEOperation_in_EContainingClass(m_getNextEventStrategy_EClass, GETNEXTEVENTSTRATEGY_EOPERATION_RETRIEVENEXTEVENT_OBJECTACTIVATION);
	
}

void FUMLPackageImpl::createInitialNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_initialNodeActivation_EClass = factory->createEClass_in_EPackage(package, INITIALNODEACTIVATION_ECLASS);
	
	
	m_initialNodeActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_initialNodeActivation_EClass, INITIALNODEACTIVATION_EOPERATION_FIRE_TOKEN);
	
}

void FUMLPackageImpl::createInputPinActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_inputPinActivation_EClass = factory->createEClass_in_EPackage(package, INPUTPINACTIVATION_ECLASS);
	
	
	m_inputPinActivation_EOperation_isReady = factory->createEOperation_in_EContainingClass(m_inputPinActivation_EClass, INPUTPINACTIVATION_EOPERATION_ISREADY);
	m_inputPinActivation_EOperation_recieveOffer = factory->createEOperation_in_EContainingClass(m_inputPinActivation_EClass, INPUTPINACTIVATION_EOPERATION_RECIEVEOFFER);
	
}

void FUMLPackageImpl::createInstanceValueEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_instanceValueEvaluation_EClass = factory->createEClass_in_EPackage(package, INSTANCEVALUEEVALUATION_ECLASS);
	
	
	m_instanceValueEvaluation_EOperation_evaluate = factory->createEOperation_in_EContainingClass(m_instanceValueEvaluation_EClass, INSTANCEVALUEEVALUATION_EOPERATION_EVALUATE);
	
}

void FUMLPackageImpl::createIntegerValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_integerValue_EClass = factory->createEClass_in_EPackage(package, INTEGERVALUE_ECLASS);
	m_integerValue_EAttribute_value = factory->createEAttribute_in_EContainingClass(m_integerValue_EClass, INTEGERVALUE_EATTRIBUTE_VALUE);
	
	
	m_integerValue_EOperation_equals_Value = factory->createEOperation_in_EContainingClass(m_integerValue_EClass, INTEGERVALUE_EOPERATION_EQUALS_VALUE);
	m_integerValue_EOperation_specify = factory->createEOperation_in_EContainingClass(m_integerValue_EClass, INTEGERVALUE_EOPERATION_SPECIFY);
	m_integerValue_EOperation_toString = factory->createEOperation_in_EContainingClass(m_integerValue_EClass, INTEGERVALUE_EOPERATION_TOSTRING);
	
}

void FUMLPackageImpl::createInvocationActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_invocationActionActivation_EClass = factory->createEClass_in_EPackage(package, INVOCATIONACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createJoinNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_joinNodeActivation_EClass = factory->createEClass_in_EPackage(package, JOINNODEACTIVATION_ECLASS);
	
	
	m_joinNodeActivation_EOperation_isReady = factory->createEOperation_in_EContainingClass(m_joinNodeActivation_EClass, JOINNODEACTIVATION_EOPERATION_ISREADY);
	
}

void FUMLPackageImpl::createLinkContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_link_EClass = factory->createEClass_in_EPackage(package, LINK_ECLASS);
	
	m_link_EReference_type = factory->createEReference_in_EContainingClass(m_link_EClass, LINK_EREFERENCE_TYPE);
	
	m_link_EOperation_addTo_Locus = factory->createEOperation_in_EContainingClass(m_link_EClass, LINK_EOPERATION_ADDTO_LOCUS);
	m_link_EOperation_getOtherFeatureValues_ExtensionalValue_Property = factory->createEOperation_in_EContainingClass(m_link_EClass, LINK_EOPERATION_GETOTHERFEATUREVALUES_EXTENSIONALVALUE_PROPERTY);
	m_link_EOperation_getTypes = factory->createEOperation_in_EContainingClass(m_link_EClass, LINK_EOPERATION_GETTYPES);
	m_link_EOperation_isMatchingLink_ExtensionalValue_Property = factory->createEOperation_in_EContainingClass(m_link_EClass, LINK_EOPERATION_ISMATCHINGLINK_EXTENSIONALVALUE_PROPERTY);
	
}

void FUMLPackageImpl::createLinkActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_linkActionActivation_EClass = factory->createEClass_in_EPackage(package, LINKACTIONACTIVATION_ECLASS);
	
	
	m_linkActionActivation_EOperation_endMatchesEndData_Link_LinkEndData = factory->createEOperation_in_EContainingClass(m_linkActionActivation_EClass, LINKACTIONACTIVATION_EOPERATION_ENDMATCHESENDDATA_LINK_LINKENDDATA);
	m_linkActionActivation_EOperation_getAssociation = factory->createEOperation_in_EContainingClass(m_linkActionActivation_EClass, LINKACTIONACTIVATION_EOPERATION_GETASSOCIATION);
	m_linkActionActivation_EOperation_linkMatchesEndData_Link_LinkEndData = factory->createEOperation_in_EContainingClass(m_linkActionActivation_EClass, LINKACTIONACTIVATION_EOPERATION_LINKMATCHESENDDATA_LINK_LINKENDDATA);
	
}

void FUMLPackageImpl::createLiteralBooleanEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_literalBooleanEvaluation_EClass = factory->createEClass_in_EPackage(package, LITERALBOOLEANEVALUATION_ECLASS);
	
	
	m_literalBooleanEvaluation_EOperation_evaluate = factory->createEOperation_in_EContainingClass(m_literalBooleanEvaluation_EClass, LITERALBOOLEANEVALUATION_EOPERATION_EVALUATE);
	
}

void FUMLPackageImpl::createLiteralEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_literalEvaluation_EClass = factory->createEClass_in_EPackage(package, LITERALEVALUATION_ECLASS);
	
	
	m_literalEvaluation_EOperation_getType_EString = factory->createEOperation_in_EContainingClass(m_literalEvaluation_EClass, LITERALEVALUATION_EOPERATION_GETTYPE_ESTRING);
	
}

void FUMLPackageImpl::createLiteralIntegerEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_literalIntegerEvaluation_EClass = factory->createEClass_in_EPackage(package, LITERALINTEGEREVALUATION_ECLASS);
	
	
	m_literalIntegerEvaluation_EOperation_evaluate = factory->createEOperation_in_EContainingClass(m_literalIntegerEvaluation_EClass, LITERALINTEGEREVALUATION_EOPERATION_EVALUATE);
	
}

void FUMLPackageImpl::createLiteralNullEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_literalNullEvaluation_EClass = factory->createEClass_in_EPackage(package, LITERALNULLEVALUATION_ECLASS);
	
	
	m_literalNullEvaluation_EOperation_evaluate = factory->createEOperation_in_EContainingClass(m_literalNullEvaluation_EClass, LITERALNULLEVALUATION_EOPERATION_EVALUATE);
	
}

void FUMLPackageImpl::createLiteralRealEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_literalRealEvaluation_EClass = factory->createEClass_in_EPackage(package, LITERALREALEVALUATION_ECLASS);
	
	
	m_literalRealEvaluation_EOperation_evaluate = factory->createEOperation_in_EContainingClass(m_literalRealEvaluation_EClass, LITERALREALEVALUATION_EOPERATION_EVALUATE);
	
}

void FUMLPackageImpl::createLiteralStringEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_literalStringEvaluation_EClass = factory->createEClass_in_EPackage(package, LITERALSTRINGEVALUATION_ECLASS);
	
	
	m_literalStringEvaluation_EOperation_evaluate = factory->createEOperation_in_EContainingClass(m_literalStringEvaluation_EClass, LITERALSTRINGEVALUATION_EOPERATION_EVALUATE);
	
}

void FUMLPackageImpl::createLiteralUnlimitedNaturalEvaluationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_literalUnlimitedNaturalEvaluation_EClass = factory->createEClass_in_EPackage(package, LITERALUNLIMITEDNATURALEVALUATION_ECLASS);
	
	
	m_literalUnlimitedNaturalEvaluation_EOperation_evaluate = factory->createEOperation_in_EContainingClass(m_literalUnlimitedNaturalEvaluation_EClass, LITERALUNLIMITEDNATURALEVALUATION_EOPERATION_EVALUATE);
	
}

void FUMLPackageImpl::createLocusContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_locus_EClass = factory->createEClass_in_EPackage(package, LOCUS_ECLASS);
	
	m_locus_EReference_executor = factory->createEReference_in_EContainingClass(m_locus_EClass, LOCUS_EREFERENCE_EXECUTOR);
	m_locus_EReference_extensionalValues = factory->createEReference_in_EContainingClass(m_locus_EClass, LOCUS_EREFERENCE_EXTENSIONALVALUES);
	m_locus_EReference_factory = factory->createEReference_in_EContainingClass(m_locus_EClass, LOCUS_EREFERENCE_FACTORY);
	
	m_locus_EOperation_add_ExtensionalValue = factory->createEOperation_in_EContainingClass(m_locus_EClass, LOCUS_EOPERATION_ADD_EXTENSIONALVALUE);
	m_locus_EOperation_assignExecutor_Executor = factory->createEOperation_in_EContainingClass(m_locus_EClass, LOCUS_EOPERATION_ASSIGNEXECUTOR_EXECUTOR);
	m_locus_EOperation_assignFactory_ExecutionFactory = factory->createEOperation_in_EContainingClass(m_locus_EClass, LOCUS_EOPERATION_ASSIGNFACTORY_EXECUTIONFACTORY);
	m_locus_EOperation_conforms_Classifier_Classifier = factory->createEOperation_in_EContainingClass(m_locus_EClass, LOCUS_EOPERATION_CONFORMS_CLASSIFIER_CLASSIFIER);
	m_locus_EOperation_instantiate_Class = factory->createEOperation_in_EContainingClass(m_locus_EClass, LOCUS_EOPERATION_INSTANTIATE_CLASS);
	m_locus_EOperation_remove_ExtensionalValue = factory->createEOperation_in_EContainingClass(m_locus_EClass, LOCUS_EOPERATION_REMOVE_EXTENSIONALVALUE);
	m_locus_EOperation_retrieveExtent_Classifier = factory->createEOperation_in_EContainingClass(m_locus_EClass, LOCUS_EOPERATION_RETRIEVEEXTENT_CLASSIFIER);
	
}

void FUMLPackageImpl::createLoopNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_loopNodeActivation_EClass = factory->createEClass_in_EPackage(package, LOOPNODEACTIVATION_ECLASS);
	
	m_loopNodeActivation_EReference_bodyOutputLists = factory->createEReference_in_EContainingClass(m_loopNodeActivation_EClass, LOOPNODEACTIVATION_EREFERENCE_BODYOUTPUTLISTS);
	
	m_loopNodeActivation_EOperation_makeLoopVariableList = factory->createEOperation_in_EContainingClass(m_loopNodeActivation_EClass, LOOPNODEACTIVATION_EOPERATION_MAKELOOPVARIABLELIST);
	m_loopNodeActivation_EOperation_runBody = factory->createEOperation_in_EContainingClass(m_loopNodeActivation_EClass, LOOPNODEACTIVATION_EOPERATION_RUNBODY);
	m_loopNodeActivation_EOperation_runLoopVariables = factory->createEOperation_in_EContainingClass(m_loopNodeActivation_EClass, LOOPNODEACTIVATION_EOPERATION_RUNLOOPVARIABLES);
	m_loopNodeActivation_EOperation_runTest = factory->createEOperation_in_EContainingClass(m_loopNodeActivation_EClass, LOOPNODEACTIVATION_EOPERATION_RUNTEST);
	
}

void FUMLPackageImpl::createMergeNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_mergeNodeActivation_EClass = factory->createEClass_in_EPackage(package, MERGENODEACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createObjectContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_object_EClass = factory->createEClass_in_EPackage(package, OBJECT_ECLASS);
	
	m_object_EReference_objectActivation = factory->createEReference_in_EContainingClass(m_object_EClass, OBJECT_EREFERENCE_OBJECTACTIVATION);
	m_object_EReference_types = factory->createEReference_in_EContainingClass(m_object_EClass, OBJECT_EREFERENCE_TYPES);
	
	m_object_EOperation__register_EventAccepter = factory->createEOperation_in_EContainingClass(m_object_EClass, OBJECT_EOPERATION__REGISTER_EVENTACCEPTER);
	m_object_EOperation_destroy = factory->createEOperation_in_EContainingClass(m_object_EClass, OBJECT_EOPERATION_DESTROY);
	m_object_EOperation_dispatch_Operation = factory->createEOperation_in_EContainingClass(m_object_EClass, OBJECT_EOPERATION_DISPATCH_OPERATION);
	m_object_EOperation_new_ = factory->createEOperation_in_EContainingClass(m_object_EClass, OBJECT_EOPERATION_NEW_);
	m_object_EOperation_send_SignalInstance = factory->createEOperation_in_EContainingClass(m_object_EClass, OBJECT_EOPERATION_SEND_SIGNALINSTANCE);
	m_object_EOperation_startBehavior_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_object_EClass, OBJECT_EOPERATION_STARTBEHAVIOR_CLASS_PARAMETERVALUE);
	m_object_EOperation_unregister_EventAccepter = factory->createEOperation_in_EContainingClass(m_object_EClass, OBJECT_EOPERATION_UNREGISTER_EVENTACCEPTER);
	
}

void FUMLPackageImpl::createObjectActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_objectActivation_EClass = factory->createEClass_in_EPackage(package, OBJECTACTIVATION_ECLASS);
	
	m_objectActivation_EReference_classifierBehaviorExecutions = factory->createEReference_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EREFERENCE_CLASSIFIERBEHAVIOREXECUTIONS);
	m_objectActivation_EReference_eventPool = factory->createEReference_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EREFERENCE_EVENTPOOL);
	m_objectActivation_EReference_object = factory->createEReference_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EREFERENCE_OBJECT);
	m_objectActivation_EReference_waitingEventAccepters = factory->createEReference_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EREFERENCE_WAITINGEVENTACCEPTERS);
	
	m_objectActivation_EOperation__register_EventAccepter = factory->createEOperation_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EOPERATION__REGISTER_EVENTACCEPTER);
	m_objectActivation_EOperation__send_EJavaObject = factory->createEOperation_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EOPERATION__SEND_EJAVAOBJECT);
	m_objectActivation_EOperation__startObjectBehavior = factory->createEOperation_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EOPERATION__STARTOBJECTBEHAVIOR);
	m_objectActivation_EOperation_dispatchNextEvent = factory->createEOperation_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EOPERATION_DISPATCHNEXTEVENT);
	m_objectActivation_EOperation_retrieveNextEvent = factory->createEOperation_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EOPERATION_RETRIEVENEXTEVENT);
	m_objectActivation_EOperation_send_SignalInstance = factory->createEOperation_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EOPERATION_SEND_SIGNALINSTANCE);
	m_objectActivation_EOperation_startBehavior_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EOPERATION_STARTBEHAVIOR_CLASS_PARAMETERVALUE);
	m_objectActivation_EOperation_stop = factory->createEOperation_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EOPERATION_STOP);
	m_objectActivation_EOperation_unregister_EventAccepter = factory->createEOperation_in_EContainingClass(m_objectActivation_EClass, OBJECTACTIVATION_EOPERATION_UNREGISTER_EVENTACCEPTER);
	
}

void FUMLPackageImpl::createObjectNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_objectNodeActivation_EClass = factory->createEClass_in_EPackage(package, OBJECTNODEACTIVATION_ECLASS);
	m_objectNodeActivation_EAttribute_offeredTokenCount = factory->createEAttribute_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EATTRIBUTE_OFFEREDTOKENCOUNT);
	
	
	m_objectNodeActivation_EOperation_addToken_Token = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_ADDTOKEN_TOKEN);
	m_objectNodeActivation_EOperation_clearTokens = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_CLEARTOKENS);
	m_objectNodeActivation_EOperation_countOfferedValues = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_COUNTOFFEREDVALUES);
	m_objectNodeActivation_EOperation_countUnofferedTokens = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_COUNTUNOFFEREDTOKENS);
	m_objectNodeActivation_EOperation_getUnofferedTokens = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_GETUNOFFEREDTOKENS);
	m_objectNodeActivation_EOperation_removeToken_Token = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_REMOVETOKEN_TOKEN);
	m_objectNodeActivation_EOperation_run = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_RUN);
	m_objectNodeActivation_EOperation_sendOffers_Token = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_SENDOFFERS_TOKEN);
	m_objectNodeActivation_EOperation_sendUnofferedTokens = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_SENDUNOFFEREDTOKENS);
	m_objectNodeActivation_EOperation_takeUnofferedTokens = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_TAKEUNOFFEREDTOKENS);
	m_objectNodeActivation_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_objectNodeActivation_EClass, OBJECTNODEACTIVATION_EOPERATION_TERMINATE);
	
}

void FUMLPackageImpl::createObjectTokenContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_objectToken_EClass = factory->createEClass_in_EPackage(package, OBJECTTOKEN_ECLASS);
	
	m_objectToken_EReference_value = factory->createEReference_in_EContainingClass(m_objectToken_EClass, OBJECTTOKEN_EREFERENCE_VALUE);
	
	m_objectToken_EOperation_equals_Token = factory->createEOperation_in_EContainingClass(m_objectToken_EClass, OBJECTTOKEN_EOPERATION_EQUALS_TOKEN);
	m_objectToken_EOperation_isControl = factory->createEOperation_in_EContainingClass(m_objectToken_EClass, OBJECTTOKEN_EOPERATION_ISCONTROL);
	
}

void FUMLPackageImpl::createOfferContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_offer_EClass = factory->createEClass_in_EPackage(package, OFFER_ECLASS);
	
	m_offer_EReference_offeredTokens = factory->createEReference_in_EContainingClass(m_offer_EClass, OFFER_EREFERENCE_OFFEREDTOKENS);
	
	m_offer_EOperation_countOfferedVales = factory->createEOperation_in_EContainingClass(m_offer_EClass, OFFER_EOPERATION_COUNTOFFEREDVALES);
	m_offer_EOperation_hasTokens = factory->createEOperation_in_EContainingClass(m_offer_EClass, OFFER_EOPERATION_HASTOKENS);
	m_offer_EOperation_removeOfferedValues_EInt = factory->createEOperation_in_EContainingClass(m_offer_EClass, OFFER_EOPERATION_REMOVEOFFEREDVALUES_EINT);
	m_offer_EOperation_removeWithdrawnTokens = factory->createEOperation_in_EContainingClass(m_offer_EClass, OFFER_EOPERATION_REMOVEWITHDRAWNTOKENS);
	m_offer_EOperation_retrieveOfferedTokens = factory->createEOperation_in_EContainingClass(m_offer_EClass, OFFER_EOPERATION_RETRIEVEOFFEREDTOKENS);
	
}

void FUMLPackageImpl::createOpaqueBehaviorExecutionContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_opaqueBehaviorExecution_EClass = factory->createEClass_in_EPackage(package, OPAQUEBEHAVIOREXECUTION_ECLASS);
	
	
	m_opaqueBehaviorExecution_EOperation_doBody_ParameterValue_ParameterValue = factory->createEOperation_in_EContainingClass(m_opaqueBehaviorExecution_EClass, OPAQUEBEHAVIOREXECUTION_EOPERATION_DOBODY_PARAMETERVALUE_PARAMETERVALUE);
	m_opaqueBehaviorExecution_EOperation_execute = factory->createEOperation_in_EContainingClass(m_opaqueBehaviorExecution_EClass, OPAQUEBEHAVIOREXECUTION_EOPERATION_EXECUTE);
	
}

void FUMLPackageImpl::createOutputPinActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_outputPinActivation_EClass = factory->createEClass_in_EPackage(package, OUTPUTPINACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createParameterValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_parameterValue_EClass = factory->createEClass_in_EPackage(package, PARAMETERVALUE_ECLASS);
	
	m_parameterValue_EReference_parameter = factory->createEReference_in_EContainingClass(m_parameterValue_EClass, PARAMETERVALUE_EREFERENCE_PARAMETER);
	m_parameterValue_EReference_values = factory->createEReference_in_EContainingClass(m_parameterValue_EClass, PARAMETERVALUE_EREFERENCE_VALUES);
	
	
}

void FUMLPackageImpl::createPinActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_pinActivation_EClass = factory->createEClass_in_EPackage(package, PINACTIVATION_ECLASS);
	
	m_pinActivation_EReference_actionActivation = factory->createEReference_in_EContainingClass(m_pinActivation_EClass, PINACTIVATION_EREFERENCE_ACTIONACTIVATION);
	
	m_pinActivation_EOperation_fire_Token = factory->createEOperation_in_EContainingClass(m_pinActivation_EClass, PINACTIVATION_EOPERATION_FIRE_TOKEN);
	m_pinActivation_EOperation_takeOfferedTokens = factory->createEOperation_in_EContainingClass(m_pinActivation_EClass, PINACTIVATION_EOPERATION_TAKEOFFEREDTOKENS);
	
}

void FUMLPackageImpl::createPrimitiveValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_primitiveValue_EClass = factory->createEClass_in_EPackage(package, PRIMITIVEVALUE_ECLASS);
	
	m_primitiveValue_EReference_type = factory->createEReference_in_EContainingClass(m_primitiveValue_EClass, PRIMITIVEVALUE_EREFERENCE_TYPE);
	
	m_primitiveValue_EOperation_getTypes = factory->createEOperation_in_EContainingClass(m_primitiveValue_EClass, PRIMITIVEVALUE_EOPERATION_GETTYPES);
	
}

void FUMLPackageImpl::createReadExtentActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_readExtentActionActivation_EClass = factory->createEClass_in_EPackage(package, READEXTENTACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createReadIsClassifiedObjectActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_readIsClassifiedObjectActionActivation_EClass = factory->createEClass_in_EPackage(package, READISCLASSIFIEDOBJECTACTIONACTIVATION_ECLASS);
	
	
	m_readIsClassifiedObjectActionActivation_EOperation_checkAllParents_Classifier_Classifier = factory->createEOperation_in_EContainingClass(m_readIsClassifiedObjectActionActivation_EClass, READISCLASSIFIEDOBJECTACTIONACTIVATION_EOPERATION_CHECKALLPARENTS_CLASSIFIER_CLASSIFIER);
	
}

void FUMLPackageImpl::createReadLinkActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_readLinkActionActivation_EClass = factory->createEClass_in_EPackage(package, READLINKACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createReadSelfActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_readSelfActionActivation_EClass = factory->createEClass_in_EPackage(package, READSELFACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createReadStructuralFeatureActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_readStructuralFeatureActionActivation_EClass = factory->createEClass_in_EPackage(package, READSTRUCTURALFEATUREACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createRealValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_realValue_EClass = factory->createEClass_in_EPackage(package, REALVALUE_ECLASS);
	m_realValue_EAttribute_value = factory->createEAttribute_in_EContainingClass(m_realValue_EClass, REALVALUE_EATTRIBUTE_VALUE);
	
	
	m_realValue_EOperation_equals_Value = factory->createEOperation_in_EContainingClass(m_realValue_EClass, REALVALUE_EOPERATION_EQUALS_VALUE);
	m_realValue_EOperation_specify = factory->createEOperation_in_EContainingClass(m_realValue_EClass, REALVALUE_EOPERATION_SPECIFY);
	m_realValue_EOperation_toString = factory->createEOperation_in_EContainingClass(m_realValue_EClass, REALVALUE_EOPERATION_TOSTRING);
	
}

void FUMLPackageImpl::createReclassifyObjectActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_reclassifyObjectActionActivation_EClass = factory->createEClass_in_EPackage(package, RECLASSIFYOBJECTACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createRedefinitionBasedDispatchStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_redefinitionBasedDispatchStrategy_EClass = factory->createEClass_in_EPackage(package, REDEFINITIONBASEDDISPATCHSTRATEGY_ECLASS);
	
	
	m_redefinitionBasedDispatchStrategy_EOperation_operationsMatch_Operation_Operation = factory->createEOperation_in_EContainingClass(m_redefinitionBasedDispatchStrategy_EClass, REDEFINITIONBASEDDISPATCHSTRATEGY_EOPERATION_OPERATIONSMATCH_OPERATION_OPERATION);
	m_redefinitionBasedDispatchStrategy_EOperation_retrieveMethod_Object_Operation = factory->createEOperation_in_EContainingClass(m_redefinitionBasedDispatchStrategy_EClass, REDEFINITIONBASEDDISPATCHSTRATEGY_EOPERATION_RETRIEVEMETHOD_OBJECT_OPERATION);
	
}

void FUMLPackageImpl::createReduceActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_reduceActionActivation_EClass = factory->createEClass_in_EPackage(package, REDUCEACTIONACTIVATION_ECLASS);
	
	m_reduceActionActivation_EReference_currentExecution = factory->createEReference_in_EContainingClass(m_reduceActionActivation_EClass, REDUCEACTIONACTIVATION_EREFERENCE_CURRENTEXECUTION);
	
	
}

void FUMLPackageImpl::createReferenceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_reference_EClass = factory->createEClass_in_EPackage(package, REFERENCE_ECLASS);
	
	m_reference_EReference_referent = factory->createEReference_in_EContainingClass(m_reference_EClass, REFERENCE_EREFERENCE_REFERENT);
	
	m_reference_EOperation_assignFeatureValue_StructuralFeature_EInt = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_ASSIGNFEATUREVALUE_STRUCTURALFEATURE_EINT);
	m_reference_EOperation_destroy = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_DESTROY);
	m_reference_EOperation_dispatch_Operation = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_DISPATCH_OPERATION);
	m_reference_EOperation_equals_Value = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_EQUALS_VALUE);
	m_reference_EOperation_getTypes = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_GETTYPES);
	m_reference_EOperation_new_ = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_NEW_);
	m_reference_EOperation_retrieveFeatureValue_StructuralFeature = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_RETRIEVEFEATUREVALUE_STRUCTURALFEATURE);
	m_reference_EOperation_retrieveFeatureValues = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_RETRIEVEFEATUREVALUES);
	m_reference_EOperation_send_SignalInstance = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_SEND_SIGNALINSTANCE);
	m_reference_EOperation_startBehavior_Class_ParameterValue = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_STARTBEHAVIOR_CLASS_PARAMETERVALUE);
	m_reference_EOperation_toString = factory->createEOperation_in_EContainingClass(m_reference_EClass, REFERENCE_EOPERATION_TOSTRING);
	
}

void FUMLPackageImpl::createRemoveStructuralFeatureValueActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_removeStructuralFeatureValueActivation_EClass = factory->createEClass_in_EPackage(package, REMOVESTRUCTURALFEATUREVALUEACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createSemanticStrategyContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_semanticStrategy_EClass = factory->createEClass_in_EPackage(package, SEMANTICSTRATEGY_ECLASS);
	
	
	m_semanticStrategy_EOperation_retrieveName = factory->createEOperation_in_EContainingClass(m_semanticStrategy_EClass, SEMANTICSTRATEGY_EOPERATION_RETRIEVENAME);
	
}

void FUMLPackageImpl::createSemanticVisitorContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_semanticVisitor_EClass = factory->createEClass_in_EPackage(package, SEMANTICVISITOR_ECLASS);
	
	
	m_semanticVisitor_EOperation__beginIsolation = factory->createEOperation_in_EContainingClass(m_semanticVisitor_EClass, SEMANTICVISITOR_EOPERATION__BEGINISOLATION);
	m_semanticVisitor_EOperation__endIsolation = factory->createEOperation_in_EContainingClass(m_semanticVisitor_EClass, SEMANTICVISITOR_EOPERATION__ENDISOLATION);
	
}

void FUMLPackageImpl::createSendSignalActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_sendSignalActionActivation_EClass = factory->createEClass_in_EPackage(package, SENDSIGNALACTIONACTIVATION_ECLASS);
	
	
	m_sendSignalActionActivation_EOperation_doAction = factory->createEOperation_in_EContainingClass(m_sendSignalActionActivation_EClass, SENDSIGNALACTIONACTIVATION_EOPERATION_DOACTION);
	
}

void FUMLPackageImpl::createSignalInstanceContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_signalInstance_EClass = factory->createEClass_in_EPackage(package, SIGNALINSTANCE_ECLASS);
	
	m_signalInstance_EReference_type = factory->createEReference_in_EContainingClass(m_signalInstance_EClass, SIGNALINSTANCE_EREFERENCE_TYPE);
	
	
}

void FUMLPackageImpl::createStartClassifierBehaviorActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_startClassifierBehaviorActionActivation_EClass = factory->createEClass_in_EPackage(package, STARTCLASSIFIERBEHAVIORACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createStartObjectBehaviorActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_startObjectBehaviorActionActivation_EClass = factory->createEClass_in_EPackage(package, STARTOBJECTBEHAVIORACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createStringValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_stringValue_EClass = factory->createEClass_in_EPackage(package, STRINGVALUE_ECLASS);
	m_stringValue_EAttribute_value = factory->createEAttribute_in_EContainingClass(m_stringValue_EClass, STRINGVALUE_EATTRIBUTE_VALUE);
	
	
	m_stringValue_EOperation_equals_Value = factory->createEOperation_in_EContainingClass(m_stringValue_EClass, STRINGVALUE_EOPERATION_EQUALS_VALUE);
	m_stringValue_EOperation_specify = factory->createEOperation_in_EContainingClass(m_stringValue_EClass, STRINGVALUE_EOPERATION_SPECIFY);
	m_stringValue_EOperation_toString = factory->createEOperation_in_EContainingClass(m_stringValue_EClass, STRINGVALUE_EOPERATION_TOSTRING);
	
}

void FUMLPackageImpl::createStructuralFeatureActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_structuralFeatureActionActivation_EClass = factory->createEClass_in_EPackage(package, STRUCTURALFEATUREACTIONACTIVATION_ECLASS);
	
	
	m_structuralFeatureActionActivation_EOperation_getAssociation_StructuralFeature = factory->createEOperation_in_EContainingClass(m_structuralFeatureActionActivation_EClass, STRUCTURALFEATUREACTIONACTIVATION_EOPERATION_GETASSOCIATION_STRUCTURALFEATURE);
	m_structuralFeatureActionActivation_EOperation_getMatchingLinks_Association_Value = factory->createEOperation_in_EContainingClass(m_structuralFeatureActionActivation_EClass, STRUCTURALFEATUREACTIONACTIVATION_EOPERATION_GETMATCHINGLINKS_ASSOCIATION_VALUE);
	m_structuralFeatureActionActivation_EOperation_getOppositeEnd_Association_StructuralFeature = factory->createEOperation_in_EContainingClass(m_structuralFeatureActionActivation_EClass, STRUCTURALFEATUREACTIONACTIVATION_EOPERATION_GETOPPOSITEEND_ASSOCIATION_STRUCTURALFEATURE);
	
}

void FUMLPackageImpl::createStructuredActivityNodeActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_structuredActivityNodeActivation_EClass = factory->createEClass_in_EPackage(package, STRUCTUREDACTIVITYNODEACTIVATION_ECLASS);
	
	m_structuredActivityNodeActivation_EReference_activationGroup = factory->createEReference_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EREFERENCE_ACTIVATIONGROUP);
	
	m_structuredActivityNodeActivation_EOperation_completeAction = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_COMPLETEACTION);
	m_structuredActivityNodeActivation_EOperation_createEdgeInstances = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_CREATEEDGEINSTANCES);
	m_structuredActivityNodeActivation_EOperation_createNodeActivations = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_CREATENODEACTIVATIONS);
	m_structuredActivityNodeActivation_EOperation_doAction = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_DOACTION);
	m_structuredActivityNodeActivation_EOperation_doStructuredActivity = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_DOSTRUCTUREDACTIVITY);
	m_structuredActivityNodeActivation_EOperation_getNodeActivation_ActivityNode = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_GETNODEACTIVATION_ACTIVITYNODE);
	m_structuredActivityNodeActivation_EOperation_getPinValues_OutputPin = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_GETPINVALUES_OUTPUTPIN);
	m_structuredActivityNodeActivation_EOperation_isSourceFor_ActivityEdgeInstance = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_ISSOURCEFOR_ACTIVITYEDGEINSTANCE);
	m_structuredActivityNodeActivation_EOperation_isSuspended = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_ISSUSPENDED);
	m_structuredActivityNodeActivation_EOperation_makeActivityNodeList_ExecutableNode = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_MAKEACTIVITYNODELIST_EXECUTABLENODE);
	m_structuredActivityNodeActivation_EOperation_putPinValues_OutputPin_Value = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_PUTPINVALUES_OUTPUTPIN_VALUE);
	m_structuredActivityNodeActivation_EOperation_resume = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_RESUME);
	m_structuredActivityNodeActivation_EOperation_terminate = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_TERMINATE);
	m_structuredActivityNodeActivation_EOperation_terminateAll = factory->createEOperation_in_EContainingClass(m_structuredActivityNodeActivation_EClass, STRUCTUREDACTIVITYNODEACTIVATION_EOPERATION_TERMINATEALL);
	
}

void FUMLPackageImpl::createStructuredValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_structuredValue_EClass = factory->createEClass_in_EPackage(package, STRUCTUREDVALUE_ECLASS);
	
	
	m_structuredValue_EOperation_assignFeatureValue_StructuralFeature_EInt = factory->createEOperation_in_EContainingClass(m_structuredValue_EClass, STRUCTUREDVALUE_EOPERATION_ASSIGNFEATUREVALUE_STRUCTURALFEATURE_EINT);
	m_structuredValue_EOperation_createFeatureValues = factory->createEOperation_in_EContainingClass(m_structuredValue_EClass, STRUCTUREDVALUE_EOPERATION_CREATEFEATUREVALUES);
	m_structuredValue_EOperation_retrieveFeatureValue_StructuralFeature = factory->createEOperation_in_EContainingClass(m_structuredValue_EClass, STRUCTUREDVALUE_EOPERATION_RETRIEVEFEATUREVALUE_STRUCTURALFEATURE);
	m_structuredValue_EOperation_retrieveFeatureValues = factory->createEOperation_in_EContainingClass(m_structuredValue_EClass, STRUCTUREDVALUE_EOPERATION_RETRIEVEFEATUREVALUES);
	m_structuredValue_EOperation_specify = factory->createEOperation_in_EContainingClass(m_structuredValue_EClass, STRUCTUREDVALUE_EOPERATION_SPECIFY);
	
}

void FUMLPackageImpl::createTestIdentityActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_testIdentityActionActivation_EClass = factory->createEClass_in_EPackage(package, TESTIDENTITYACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createTokenContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_token_EClass = factory->createEClass_in_EPackage(package, TOKEN_ECLASS);
	m_token_EAttribute_withdrawn = factory->createEAttribute_in_EContainingClass(m_token_EClass, TOKEN_EATTRIBUTE_WITHDRAWN);
	
	m_token_EReference_holder = factory->createEReference_in_EContainingClass(m_token_EClass, TOKEN_EREFERENCE_HOLDER);
	
	m_token_EOperation_equals_Token = factory->createEOperation_in_EContainingClass(m_token_EClass, TOKEN_EOPERATION_EQUALS_TOKEN);
	m_token_EOperation_getValue = factory->createEOperation_in_EContainingClass(m_token_EClass, TOKEN_EOPERATION_GETVALUE);
	m_token_EOperation_isControl = factory->createEOperation_in_EContainingClass(m_token_EClass, TOKEN_EOPERATION_ISCONTROL);
	m_token_EOperation_transfer_ActivityNodeActivation = factory->createEOperation_in_EContainingClass(m_token_EClass, TOKEN_EOPERATION_TRANSFER_ACTIVITYNODEACTIVATION);
	m_token_EOperation_withdraw = factory->createEOperation_in_EContainingClass(m_token_EClass, TOKEN_EOPERATION_WITHDRAW);
	
}

void FUMLPackageImpl::createTokenSetContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_tokenSet_EClass = factory->createEClass_in_EPackage(package, TOKENSET_ECLASS);
	
	m_tokenSet_EReference_tokens = factory->createEReference_in_EContainingClass(m_tokenSet_EClass, TOKENSET_EREFERENCE_TOKENS);
	
	
}

void FUMLPackageImpl::createUnlimitedNaturalValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_unlimitedNaturalValue_EClass = factory->createEClass_in_EPackage(package, UNLIMITEDNATURALVALUE_ECLASS);
	m_unlimitedNaturalValue_EAttribute_value = factory->createEAttribute_in_EContainingClass(m_unlimitedNaturalValue_EClass, UNLIMITEDNATURALVALUE_EATTRIBUTE_VALUE);
	
	
	m_unlimitedNaturalValue_EOperation_equals_Value = factory->createEOperation_in_EContainingClass(m_unlimitedNaturalValue_EClass, UNLIMITEDNATURALVALUE_EOPERATION_EQUALS_VALUE);
	m_unlimitedNaturalValue_EOperation_specify = factory->createEOperation_in_EContainingClass(m_unlimitedNaturalValue_EClass, UNLIMITEDNATURALVALUE_EOPERATION_SPECIFY);
	m_unlimitedNaturalValue_EOperation_toString = factory->createEOperation_in_EContainingClass(m_unlimitedNaturalValue_EClass, UNLIMITEDNATURALVALUE_EOPERATION_TOSTRING);
	
}

void FUMLPackageImpl::createValueContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_value_EClass = factory->createEClass_in_EPackage(package, VALUE_ECLASS);
	
	
	m_value_EOperation_equals_Value = factory->createEOperation_in_EContainingClass(m_value_EClass, VALUE_EOPERATION_EQUALS_VALUE);
	m_value_EOperation_getTypes = factory->createEOperation_in_EContainingClass(m_value_EClass, VALUE_EOPERATION_GETTYPES);
	m_value_EOperation_hasTypes_Classifier = factory->createEOperation_in_EContainingClass(m_value_EClass, VALUE_EOPERATION_HASTYPES_CLASSIFIER);
	m_value_EOperation_objectId = factory->createEOperation_in_EContainingClass(m_value_EClass, VALUE_EOPERATION_OBJECTID);
	m_value_EOperation_specify = factory->createEOperation_in_EContainingClass(m_value_EClass, VALUE_EOPERATION_SPECIFY);
	m_value_EOperation_toString = factory->createEOperation_in_EContainingClass(m_value_EClass, VALUE_EOPERATION_TOSTRING);
	
}

void FUMLPackageImpl::createValueSpecificActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_valueSpecificActionActivation_EClass = factory->createEClass_in_EPackage(package, VALUESPECIFICACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createValuesContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_values_EClass = factory->createEClass_in_EPackage(package, VALUES_ECLASS);
	
	m_values_EReference_values = factory->createEReference_in_EContainingClass(m_values_EClass, VALUES_EREFERENCE_VALUES);
	
	
}

void FUMLPackageImpl::createWriteLinkActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_writeLinkActionActivation_EClass = factory->createEClass_in_EPackage(package, WRITELINKACTIONACTIVATION_ECLASS);
	
	
	
}

void FUMLPackageImpl::createWriteStructuralFeatureActionActivationContent(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	m_writeStructuralFeatureActionActivation_EClass = factory->createEClass_in_EPackage(package, WRITESTRUCTURALFEATUREACTIONACTIVATION_ECLASS);
	
	
	m_writeStructuralFeatureActionActivation_EOperation_position_Value_EInt = factory->createEOperation_in_EContainingClass(m_writeStructuralFeatureActionActivation_EClass, WRITESTRUCTURALFEATUREACTIONACTIVATION_EOPERATION_POSITION_VALUE_EINT);
	
}

void FUMLPackageImpl::createPackageEDataTypes(std::shared_ptr<ecore::EPackage> package, std::shared_ptr<ecore::EcoreFactory> factory)
{
	
}
