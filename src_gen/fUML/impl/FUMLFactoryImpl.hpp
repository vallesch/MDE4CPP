//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUMLFACTORYIMPL_HPP
#define FUMLFACTORYIMPL_HPP

#include "ecore/impl/EFactoryImpl.hpp"

#include "fUML/FUMLFactory.hpp"

namespace fUML 
{	class AcceptEventActionActivation;
	class AcceptEventActionEventAccepter;
	class ActionActivation;
	class ActivityEdgeInstance;
	class ActivityExecution;
	class ActivityFinalNodeActivation;
	class ActivityNodeActivation;
	class ActivityNodeActivationGroup;
	class ActivityParameterNodeActivation;
	class AddStructuralFeatureValueActionActivation;
	class BooleanValue;
	class CallActionActivation;
	class CallBehaviorActionActivation;
	class CallOperationActionActivation;
	class CentralBufferNodeActivation;
	class ChoiceStrategy;
	class ClassifierBehaviorExecution;
	class ClassifierBehaviorExecutionActivity;
	class ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1;
	class ClauseActivation;
	class ClearAssociationActionActivation;
	class ClearStructuralFeatureActionActivation;
	class CompoundValue;
	class ConditionalNodeActivation;
	class ControlNodeActivation;
	class ControlToken;
	class CreateLinkActionActivation;
	class CreateObjectActionActivation;
	class DataStoreNodeActivation;
	class DataValue;
	class DecisionNodeActivation;
	class DestroyLinkActionActivation;
	class DestroyObjectActionActivation;
	class DispatchStrategy;
	class EnumerationValue;
	class Evaluation;
	class EventAccepter;
	class EventDispatchLoop;
	class Execution;
	class ExecutionFactory;
	class ExecutionFactoryL1;
	class ExecutionFactoryL2;
	class ExecutionFactoryL3;
	class Executor;
	class ExpansionActivationGroup;
	class ExpansionNodeActivation;
	class ExpansionRegionActivation;
	class ExtensionalValue;
	class ExtensionalValueList;
	class FIFOGetNextEventStrategy;
	class FeatureValue;
	class FirstChoiceStrategy;
	class FlowFinalNodeActivation;
	class ForkNodeActivation;
	class ForkedToken;
	class GetNextEventStrategy;
	class InitialNodeActivation;
	class InputPinActivation;
	class InstanceValueEvaluation;
	class IntegerValue;
	class InvocationActionActivation;
	class JoinNodeActivation;
	class Link;
	class LinkActionActivation;
	class LiteralBooleanEvaluation;
	class LiteralEvaluation;
	class LiteralIntegerEvaluation;
	class LiteralNullEvaluation;
	class LiteralRealEvaluation;
	class LiteralStringEvaluation;
	class LiteralUnlimitedNaturalEvaluation;
	class Locus;
	class LoopNodeActivation;
	class MergeNodeActivation;
	class Object;
	class ObjectActivation;
	class ObjectNodeActivation;
	class ObjectToken;
	class Offer;
	class OpaqueBehaviorExecution;
	class OutputPinActivation;
	class ParameterValue;
	class PinActivation;
	class PrimitiveValue;
	class ReadExtentActionActivation;
	class ReadIsClassifiedObjectActionActivation;
	class ReadLinkActionActivation;
	class ReadSelfActionActivation;
	class ReadStructuralFeatureActionActivation;
	class RealValue;
	class ReclassifyObjectActionActivation;
	class RedefinitionBasedDispatchStrategy;
	class ReduceActionActivation;
	class Reference;
	class RemoveStructuralFeatureValueActivation;
	class SemanticStrategy;
	class SemanticVisitor;
	class SendSignalActionActivation;
	class SignalInstance;
	class StartClassifierBehaviorActionActivation;
	class StartObjectBehaviorActionActivation;
	class StringValue;
	class StructuralFeatureActionActivation;
	class StructuredActivityNodeActivation;
	class StructuredValue;
	class TestIdentityActionActivation;
	class Token;
	class TokenSet;
	class UnlimitedNaturalValue;
	class Value;
	class ValueSpecificActionActivation;
	class Values;
	class WriteLinkActionActivation;
	class WriteStructuralFeatureActionActivation;
}

namespace fUML 
{
	class FUMLFactoryImpl : virtual public ecore::EFactoryImpl , virtual public FUMLFactory 
	{
		private:    
			FUMLFactoryImpl(FUMLFactoryImpl const&) = delete;
			FUMLFactoryImpl& operator=(FUMLFactoryImpl const&) = delete;

		protected:
			friend class FUMLFactory;
			// Constructor
			FUMLFactoryImpl();

		public:
			virtual ~FUMLFactoryImpl();
			virtual std::shared_ptr<ecore::EObject> create(std::string _className,  std::shared_ptr<ecore::EObject> container, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(const unsigned int classID,  std::shared_ptr<ecore::EObject> container = nullptr, const unsigned int referenceID = -1) const;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class) const;
			virtual std::shared_ptr<ecore::EObject> create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container) const;
			virtual std::shared_ptr<ecore::EObject> create(std::string _className) const;

			//Creator functions
			virtual std::shared_ptr<AcceptEventActionActivation> createAcceptEventActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<AcceptEventActionActivation> createAcceptEventActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<AcceptEventActionEventAccepter> createAcceptEventActionEventAccepter() const ;
			
			virtual std::shared_ptr<ActivityEdgeInstance> createActivityEdgeInstance() const ;
			//Add containing object
			virtual std::shared_ptr<ActivityEdgeInstance> createActivityEdgeInstance_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ActivityExecution> createActivityExecution() const ;
			
			virtual std::shared_ptr<ActivityFinalNodeActivation> createActivityFinalNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ActivityFinalNodeActivation> createActivityFinalNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ActivityNodeActivationGroup> createActivityNodeActivationGroup() const ;
			//Add containing object
			virtual std::shared_ptr<ActivityNodeActivationGroup> createActivityNodeActivationGroup_in_ActivityExecution(std::weak_ptr<fUML::ActivityExecution > par_activityExecution) const ;
			
			//Add containing object
			virtual std::shared_ptr<ActivityNodeActivationGroup> createActivityNodeActivationGroup_in_ContainingNodeActivation(std::weak_ptr<fUML::StructuredActivityNodeActivation > par_containingNodeActivation) const ;
			
			
			virtual std::shared_ptr<ActivityParameterNodeActivation> createActivityParameterNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ActivityParameterNodeActivation> createActivityParameterNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<AddStructuralFeatureValueActionActivation> createAddStructuralFeatureValueActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<AddStructuralFeatureValueActionActivation> createAddStructuralFeatureValueActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<BooleanValue> createBooleanValue() const ;
			
			virtual std::shared_ptr<CallBehaviorActionActivation> createCallBehaviorActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<CallBehaviorActionActivation> createCallBehaviorActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<CallOperationActionActivation> createCallOperationActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<CallOperationActionActivation> createCallOperationActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<CentralBufferNodeActivation> createCentralBufferNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<CentralBufferNodeActivation> createCentralBufferNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ClassifierBehaviorExecution> createClassifierBehaviorExecution() const ;
			
			virtual std::shared_ptr<ClassifierBehaviorExecutionActivity> createClassifierBehaviorExecutionActivity() const ;
			
			virtual std::shared_ptr<ClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1> createClassifierBehaviorExecutionActivity_OwnedBehaviorActivity1() const ;
			
			virtual std::shared_ptr<ClauseActivation> createClauseActivation() const ;
			
			virtual std::shared_ptr<ClearAssociationActionActivation> createClearAssociationActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ClearAssociationActionActivation> createClearAssociationActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ClearStructuralFeatureActionActivation> createClearStructuralFeatureActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ClearStructuralFeatureActionActivation> createClearStructuralFeatureActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ConditionalNodeActivation> createConditionalNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ConditionalNodeActivation> createConditionalNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ControlToken> createControlToken() const ;
			
			virtual std::shared_ptr<CreateLinkActionActivation> createCreateLinkActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<CreateLinkActionActivation> createCreateLinkActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<CreateObjectActionActivation> createCreateObjectActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<CreateObjectActionActivation> createCreateObjectActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<DataStoreNodeActivation> createDataStoreNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<DataStoreNodeActivation> createDataStoreNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<DataValue> createDataValue() const ;
			
			virtual std::shared_ptr<DecisionNodeActivation> createDecisionNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<DecisionNodeActivation> createDecisionNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<DestroyLinkActionActivation> createDestroyLinkActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<DestroyLinkActionActivation> createDestroyLinkActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<DestroyObjectActionActivation> createDestroyObjectActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<DestroyObjectActionActivation> createDestroyObjectActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<DispatchStrategy> createDispatchStrategy() const ;
			
			virtual std::shared_ptr<EnumerationValue> createEnumerationValue() const ;
			
			virtual std::shared_ptr<EventDispatchLoop> createEventDispatchLoop() const ;
			
			virtual std::shared_ptr<ExecutionFactoryL1> createExecutionFactoryL1() const ;
			//Add containing object
			virtual std::shared_ptr<ExecutionFactoryL1> createExecutionFactoryL1_in_Locus(std::weak_ptr<fUML::Locus > par_locus) const ;
			
			
			virtual std::shared_ptr<ExecutionFactoryL2> createExecutionFactoryL2() const ;
			//Add containing object
			virtual std::shared_ptr<ExecutionFactoryL2> createExecutionFactoryL2_in_Locus(std::weak_ptr<fUML::Locus > par_locus) const ;
			
			
			virtual std::shared_ptr<ExecutionFactoryL3> createExecutionFactoryL3() const ;
			//Add containing object
			virtual std::shared_ptr<ExecutionFactoryL3> createExecutionFactoryL3_in_Locus(std::weak_ptr<fUML::Locus > par_locus) const ;
			
			
			virtual std::shared_ptr<Executor> createExecutor() const ;
			//Add containing object
			virtual std::shared_ptr<Executor> createExecutor_in_Locus(std::weak_ptr<fUML::Locus > par_locus) const ;
			
			
			virtual std::shared_ptr<ExpansionActivationGroup> createExpansionActivationGroup() const ;
			//Add containing object
			virtual std::shared_ptr<ExpansionActivationGroup> createExpansionActivationGroup_in_ActivityExecution(std::weak_ptr<fUML::ActivityExecution > par_activityExecution) const ;
			
			//Add containing object
			virtual std::shared_ptr<ExpansionActivationGroup> createExpansionActivationGroup_in_ContainingNodeActivation(std::weak_ptr<fUML::StructuredActivityNodeActivation > par_containingNodeActivation) const ;
			
			
			virtual std::shared_ptr<ExpansionNodeActivation> createExpansionNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ExpansionNodeActivation> createExpansionNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ExpansionRegionActivation> createExpansionRegionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ExpansionRegionActivation> createExpansionRegionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ExtensionalValueList> createExtensionalValueList() const ;
			
			virtual std::shared_ptr<FIFOGetNextEventStrategy> createFIFOGetNextEventStrategy() const ;
			
			virtual std::shared_ptr<FeatureValue> createFeatureValue() const ;
			
			virtual std::shared_ptr<FirstChoiceStrategy> createFirstChoiceStrategy() const ;
			
			virtual std::shared_ptr<FlowFinalNodeActivation> createFlowFinalNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<FlowFinalNodeActivation> createFlowFinalNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ForkNodeActivation> createForkNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ForkNodeActivation> createForkNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ForkedToken> createForkedToken() const ;
			
			virtual std::shared_ptr<InitialNodeActivation> createInitialNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<InitialNodeActivation> createInitialNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<InputPinActivation> createInputPinActivation() const ;
			//Add containing object
			virtual std::shared_ptr<InputPinActivation> createInputPinActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<InstanceValueEvaluation> createInstanceValueEvaluation() const ;
			
			virtual std::shared_ptr<IntegerValue> createIntegerValue() const ;
			
			virtual std::shared_ptr<JoinNodeActivation> createJoinNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<JoinNodeActivation> createJoinNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<Link> createLink() const ;
			
			virtual std::shared_ptr<LiteralBooleanEvaluation> createLiteralBooleanEvaluation() const ;
			
			virtual std::shared_ptr<LiteralIntegerEvaluation> createLiteralIntegerEvaluation() const ;
			
			virtual std::shared_ptr<LiteralNullEvaluation> createLiteralNullEvaluation() const ;
			
			virtual std::shared_ptr<LiteralRealEvaluation> createLiteralRealEvaluation() const ;
			
			virtual std::shared_ptr<LiteralStringEvaluation> createLiteralStringEvaluation() const ;
			
			virtual std::shared_ptr<LiteralUnlimitedNaturalEvaluation> createLiteralUnlimitedNaturalEvaluation() const ;
			
			virtual std::shared_ptr<Locus> createLocus() const ;
			
			virtual std::shared_ptr<LoopNodeActivation> createLoopNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<LoopNodeActivation> createLoopNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<MergeNodeActivation> createMergeNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<MergeNodeActivation> createMergeNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<Object> createObject() const ;
			
			virtual std::shared_ptr<ObjectActivation> createObjectActivation() const ;
			
			virtual std::shared_ptr<ObjectToken> createObjectToken() const ;
			
			virtual std::shared_ptr<Offer> createOffer() const ;
			
			virtual std::shared_ptr<OutputPinActivation> createOutputPinActivation() const ;
			//Add containing object
			virtual std::shared_ptr<OutputPinActivation> createOutputPinActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ParameterValue> createParameterValue() const ;
			
			virtual std::shared_ptr<ReadExtentActionActivation> createReadExtentActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ReadExtentActionActivation> createReadExtentActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ReadIsClassifiedObjectActionActivation> createReadIsClassifiedObjectActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ReadIsClassifiedObjectActionActivation> createReadIsClassifiedObjectActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ReadLinkActionActivation> createReadLinkActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ReadLinkActionActivation> createReadLinkActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ReadSelfActionActivation> createReadSelfActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ReadSelfActionActivation> createReadSelfActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<ReadStructuralFeatureActionActivation> createReadStructuralFeatureActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ReadStructuralFeatureActionActivation> createReadStructuralFeatureActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<RealValue> createRealValue() const ;
			
			virtual std::shared_ptr<ReclassifyObjectActionActivation> createReclassifyObjectActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ReclassifyObjectActionActivation> createReclassifyObjectActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<RedefinitionBasedDispatchStrategy> createRedefinitionBasedDispatchStrategy() const ;
			
			virtual std::shared_ptr<ReduceActionActivation> createReduceActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ReduceActionActivation> createReduceActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<Reference> createReference() const ;
			
			virtual std::shared_ptr<RemoveStructuralFeatureValueActivation> createRemoveStructuralFeatureValueActivation() const ;
			//Add containing object
			virtual std::shared_ptr<RemoveStructuralFeatureValueActivation> createRemoveStructuralFeatureValueActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<SendSignalActionActivation> createSendSignalActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<SendSignalActionActivation> createSendSignalActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<SignalInstance> createSignalInstance() const ;
			
			virtual std::shared_ptr<StartClassifierBehaviorActionActivation> createStartClassifierBehaviorActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<StartClassifierBehaviorActionActivation> createStartClassifierBehaviorActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<StartObjectBehaviorActionActivation> createStartObjectBehaviorActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<StartObjectBehaviorActionActivation> createStartObjectBehaviorActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<StringValue> createStringValue() const ;
			
			virtual std::shared_ptr<StructuredActivityNodeActivation> createStructuredActivityNodeActivation() const ;
			//Add containing object
			virtual std::shared_ptr<StructuredActivityNodeActivation> createStructuredActivityNodeActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<TestIdentityActionActivation> createTestIdentityActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<TestIdentityActionActivation> createTestIdentityActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<TokenSet> createTokenSet() const ;
			
			virtual std::shared_ptr<UnlimitedNaturalValue> createUnlimitedNaturalValue() const ;
			
			virtual std::shared_ptr<ValueSpecificActionActivation> createValueSpecificActionActivation() const ;
			//Add containing object
			virtual std::shared_ptr<ValueSpecificActionActivation> createValueSpecificActionActivation_in_Group(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group) const ;
			
			
			virtual std::shared_ptr<Values> createValues() const ;
			
			

			//Package
			virtual std::shared_ptr<FUMLPackage> getFUMLPackage() const;

		private:
			static FUMLFactory* create();
            std::map<std::string,unsigned int> m_idMap;
	};
}
#endif /* end of include guard: FUMLFACTORYIMPL_HPP */
