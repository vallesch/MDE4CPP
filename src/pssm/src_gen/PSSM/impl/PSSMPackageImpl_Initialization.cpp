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

// metametamodel factory
#include "ecore/EcoreFactory.hpp"

//depending model packages
#include "ecore/EcorePackage.hpp"
#include "fUML/FUMLPackage.hpp"
#include "types/TypesPackage.hpp"
#include "uml/UmlPackage.hpp"

using namespace PSSM;

void PSSMPackageImpl::initializePackageContents()
{
	if (isInitialized)
	{
		return;
	}
	isInitialized = true;

	// Initialize package
	setName(eNAME);
	setNsPrefix(eNS_PREFIX);
	setNsURI(eNS_URI);
	
	// Add supertypes to classes
	m_choicePseudostateActivation_EClass->getESuperTypes()->push_back(getConditionalPseudostateActivation_EClass());
	m_conditionalPseudostateActivation_EClass->getESuperTypes()->push_back(getPseudostateActivation_EClass());
	m_connectionPointActivation_EClass->getESuperTypes()->push_back(getPseudostateActivation_EClass());
	m_deepHistoryPseudostateActivation_EClass->getESuperTypes()->push_back(getHistoryPseudostateActivation_EClass());
	m_deferredEventOccurrence_EClass->getESuperTypes()->push_back(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
	m_entryPointPseudostateActivation_EClass->getESuperTypes()->push_back(getConnectionPointActivation_EClass());
	m_exitPointPseudostateActivation_EClass->getESuperTypes()->push_back(getConnectionPointActivation_EClass());
	m_externalTransitionActivation_EClass->getESuperTypes()->push_back(getTransitionActivation_EClass());
	m_finalStateActivation_EClass->getESuperTypes()->push_back(getStateActivation_EClass());
	m_forkPseudostateActivation_EClass->getESuperTypes()->push_back(getPseudostateActivation_EClass());
	m_historyPseudostateActivation_EClass->getESuperTypes()->push_back(getPseudostateActivation_EClass());
	m_initialPseudostateActivation_EClass->getESuperTypes()->push_back(getPseudostateActivation_EClass());
	m_internalTransitionActivation_EClass->getESuperTypes()->push_back(getTransitionActivation_EClass());
	m_joinPseudostateActivation_EClass->getESuperTypes()->push_back(getPseudostateActivation_EClass());
	m_junctionPseudostateActivation_EClass->getESuperTypes()->push_back(getConditionalPseudostateActivation_EClass());
	m_localTransitionActivation_EClass->getESuperTypes()->push_back(getTransitionActivation_EClass());
	m_pseudostateActivation_EClass->getESuperTypes()->push_back(getVertexActivation_EClass());
	m_regionActivation_EClass->getESuperTypes()->push_back(getStateMachineSemanticVisitor_EClass());
	m_sM_ExecutionFactory_EClass->getESuperTypes()->push_back(fUML::FUMLPackage::eInstance()->getExecutionFactoryL3_EClass());
	m_sM_Locus_EClass->getESuperTypes()->push_back(fUML::FUMLPackage::eInstance()->getLocus_EClass());
	m_sM_Object_EClass->getESuperTypes()->push_back(fUML::FUMLPackage::eInstance()->getObject_EClass());
	m_sM_ObjectActivation_EClass->getESuperTypes()->push_back(fUML::FUMLPackage::eInstance()->getObjectActivation_EClass());
	m_shallowHistoryPseudostateActivation_EClass->getESuperTypes()->push_back(getHistoryPseudostateActivation_EClass());
	m_stateActivation_EClass->getESuperTypes()->push_back(getVertexActivation_EClass());
	m_terminatePseudostateActivation_EClass->getESuperTypes()->push_back(getPseudostateActivation_EClass());
	m_transitionActivation_EClass->getESuperTypes()->push_back(getStateMachineSemanticVisitor_EClass());
	m_vertexActivation_EClass->getESuperTypes()->push_back(getStateMachineSemanticVisitor_EClass());
	

 	// Initialize classes and features; add operations and parameters
	initializeCallEventExecutionContent();
	initializeCallEventOccurrenceContent();
	initializeChoicePseudostateActivationContent();
	initializeCompletionEventOccurrenceContent();
	initializeConditionalPseudostateActivationContent();
	initializeConnectionPointActivationContent();
	initializeDeepHistoryPseudostateActivationContent();
	initializeDeferredEventOccurrenceContent();
	initializeDoActivityContextObjectContent();
	initializeDoActivityContextObjectActivationContent();
	initializeDoActivityExecutionEventAccepterContent();
	initializeEntryPointPseudostateActivationContent();
	initializeEventTriggeredExecutionContent();
	initializeExitPointPseudostateActivationContent();
	initializeExternalTransitionActivationContent();
	initializeFinalStateActivationContent();
	initializeForkPseudostateActivationContent();
	initializeHistoryPseudostateActivationContent();
	initializeInitialPseudostateActivationContent();
	initializeInternalTransitionActivationContent();
	initializeJoinPseudostateActivationContent();
	initializeJunctionPseudostateActivationContent();
	initializeLocalTransitionActivationContent();
	initializePseudostateActivationContent();
	initializeRegionActivationContent();
	initializeSM_ExecutionFactoryContent();
	initializeSM_LocusContent();
	initializeSM_ObjectContent();
	initializeSM_ObjectActivationContent();
	initializeSM_OpaqueExpressionEvaluationContent();
	initializeSM_ReadSelfActionActivationContent();
	initializeSM_RedefinitionBasedDispatchStrategyContent();
	initializeShallowHistoryPseudostateActivationContent();
	initializeStateActivationContent();
	initializeStateConfigurationContent();
	initializeStateMachineConfigurationContent();
	initializeStateMachineEventAccepterContent();
	initializeStateMachineExecutionContent();
	initializeStateMachineSemanticVisitorContent();
	initializeTerminatePseudostateActivationContent();
	initializeTransitionActivationContent();
	initializeVertexActivationContent();

	initializePackageEDataTypes();
}

void PSSMPackageImpl::initializeCallEventExecutionContent()
{
	m_callEventExecution_EClass->setName("CallEventExecution");
	m_callEventExecution_EClass->setAbstract(false);
	m_callEventExecution_EClass->setInterface(false);
	
	m_callEventExecution_EAttribute_callerSuspended = getCallEventExecution_EAttribute_callerSuspended();
	m_callEventExecution_EAttribute_callerSuspended->setName("callerSuspended");
	m_callEventExecution_EAttribute_callerSuspended->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_callEventExecution_EAttribute_callerSuspended->setLowerBound(1);
	m_callEventExecution_EAttribute_callerSuspended->setUpperBound(1);
	m_callEventExecution_EAttribute_callerSuspended->setTransient(false);
	m_callEventExecution_EAttribute_callerSuspended->setVolatile(false);
	m_callEventExecution_EAttribute_callerSuspended->setChangeable(true);
	m_callEventExecution_EAttribute_callerSuspended->setUnsettable(false);
	m_callEventExecution_EAttribute_callerSuspended->setUnique(true);
	m_callEventExecution_EAttribute_callerSuspended->setDerived(false);
	m_callEventExecution_EAttribute_callerSuspended->setOrdered(false);
	m_callEventExecution_EAttribute_callerSuspended->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_callEventExecution_EAttribute_callerSuspended->setDefaultValueLiteral(defaultValue);
		}
	}
	
	m_callEventExecution_EReference_behavior->setName("behavior");
	m_callEventExecution_EReference_behavior->setEType(uml::UmlPackage::eInstance()->getBehavior_EClass());
	m_callEventExecution_EReference_behavior->setLowerBound(1);
	m_callEventExecution_EReference_behavior->setUpperBound(1);
	m_callEventExecution_EReference_behavior->setTransient(false);
	m_callEventExecution_EReference_behavior->setVolatile(false);
	m_callEventExecution_EReference_behavior->setChangeable(true);
	m_callEventExecution_EReference_behavior->setUnsettable(false);
	m_callEventExecution_EReference_behavior->setUnique(true);
	m_callEventExecution_EReference_behavior->setDerived(false);
	m_callEventExecution_EReference_behavior->setOrdered(false);
	m_callEventExecution_EReference_behavior->setContainment(false);
	m_callEventExecution_EReference_behavior->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_callEventExecution_EReference_behavior->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_callEventExecution_EReference_behavior->setEOpposite(otherEnd);
	    }
	}
	m_callEventExecution_EReference_callerContext->setName("callerContext");
	m_callEventExecution_EReference_callerContext->setEType(fUML::FUMLPackage::eInstance()->getObject_EClass());
	m_callEventExecution_EReference_callerContext->setLowerBound(1);
	m_callEventExecution_EReference_callerContext->setUpperBound(1);
	m_callEventExecution_EReference_callerContext->setTransient(false);
	m_callEventExecution_EReference_callerContext->setVolatile(false);
	m_callEventExecution_EReference_callerContext->setChangeable(true);
	m_callEventExecution_EReference_callerContext->setUnsettable(false);
	m_callEventExecution_EReference_callerContext->setUnique(true);
	m_callEventExecution_EReference_callerContext->setDerived(false);
	m_callEventExecution_EReference_callerContext->setOrdered(false);
	m_callEventExecution_EReference_callerContext->setContainment(false);
	m_callEventExecution_EReference_callerContext->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_callEventExecution_EReference_callerContext->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_callEventExecution_EReference_callerContext->setEOpposite(otherEnd);
	    }
	}
	m_callEventExecution_EReference_operation->setName("operation");
	m_callEventExecution_EReference_operation->setEType(uml::UmlPackage::eInstance()->getOperation_EClass());
	m_callEventExecution_EReference_operation->setLowerBound(1);
	m_callEventExecution_EReference_operation->setUpperBound(1);
	m_callEventExecution_EReference_operation->setTransient(false);
	m_callEventExecution_EReference_operation->setVolatile(false);
	m_callEventExecution_EReference_operation->setChangeable(true);
	m_callEventExecution_EReference_operation->setUnsettable(false);
	m_callEventExecution_EReference_operation->setUnique(true);
	m_callEventExecution_EReference_operation->setDerived(false);
	m_callEventExecution_EReference_operation->setOrdered(false);
	m_callEventExecution_EReference_operation->setContainment(false);
	m_callEventExecution_EReference_operation->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_callEventExecution_EReference_operation->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_callEventExecution_EReference_operation->setEOpposite(otherEnd);
	    }
	}
	
	m_callEventExecution_EOperation__send_CallEventOccurrence->setEType(nullptr);
	m_callEventExecution_EOperation__send_CallEventOccurrence->setName("_send");
	m_callEventExecution_EOperation__send_CallEventOccurrence->setLowerBound(1);
	m_callEventExecution_EOperation__send_CallEventOccurrence->setUpperBound(1);
	m_callEventExecution_EOperation__send_CallEventOccurrence->setUnique(true);
	m_callEventExecution_EOperation__send_CallEventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_callEventExecution_EOperation__send_CallEventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_callEventExecution_EOperation__suspend->setEType(nullptr);
	m_callEventExecution_EOperation__suspend->setName("_suspend");
	m_callEventExecution_EOperation__suspend->setLowerBound(1);
	m_callEventExecution_EOperation__suspend->setUpperBound(1);
	m_callEventExecution_EOperation__suspend->setUnique(true);
	m_callEventExecution_EOperation__suspend->setOrdered(false);
	
	
	m_callEventExecution_EOperation_execute->setEType(nullptr);
	m_callEventExecution_EOperation_execute->setName("execute");
	m_callEventExecution_EOperation_execute->setLowerBound(1);
	m_callEventExecution_EOperation_execute->setUpperBound(1);
	m_callEventExecution_EOperation_execute->setUnique(true);
	m_callEventExecution_EOperation_execute->setOrdered(false);
	
	
	m_callEventExecution_EOperation_getBehavior->setEType(uml::UmlPackage::eInstance()->getBehavior_EClass());
	m_callEventExecution_EOperation_getBehavior->setName("getBehavior");
	m_callEventExecution_EOperation_getBehavior->setLowerBound(1);
	m_callEventExecution_EOperation_getBehavior->setUpperBound(1);
	m_callEventExecution_EOperation_getBehavior->setUnique(true);
	m_callEventExecution_EOperation_getBehavior->setOrdered(false);
	
	
	m_callEventExecution_EOperation_getInputParameterValues->setEType(fUML::FUMLPackage::eInstance()->getParameterValue_EClass());
	m_callEventExecution_EOperation_getInputParameterValues->setName("getInputParameterValues");
	m_callEventExecution_EOperation_getInputParameterValues->setLowerBound(0);
	m_callEventExecution_EOperation_getInputParameterValues->setUpperBound(-1);
	m_callEventExecution_EOperation_getInputParameterValues->setUnique(true);
	m_callEventExecution_EOperation_getInputParameterValues->setOrdered(false);
	
	
	m_callEventExecution_EOperation_new_->setEType(fUML::FUMLPackage::eInstance()->getValue_EClass());
	m_callEventExecution_EOperation_new_->setName("new_");
	m_callEventExecution_EOperation_new_->setLowerBound(1);
	m_callEventExecution_EOperation_new_->setUpperBound(1);
	m_callEventExecution_EOperation_new_->setUnique(true);
	m_callEventExecution_EOperation_new_->setOrdered(false);
	
	
	m_callEventExecution_EOperation_releaseCaller->setEType(nullptr);
	m_callEventExecution_EOperation_releaseCaller->setName("releaseCaller");
	m_callEventExecution_EOperation_releaseCaller->setLowerBound(1);
	m_callEventExecution_EOperation_releaseCaller->setUpperBound(1);
	m_callEventExecution_EOperation_releaseCaller->setUnique(true);
	m_callEventExecution_EOperation_releaseCaller->setOrdered(false);
	
	
	
}

void PSSMPackageImpl::initializeCallEventOccurrenceContent()
{
	m_callEventOccurrence_EClass->setName("CallEventOccurrence");
	m_callEventOccurrence_EClass->setAbstract(false);
	m_callEventOccurrence_EClass->setInterface(false);
	
	
	m_callEventOccurrence_EReference_execution->setName("execution");
	m_callEventOccurrence_EReference_execution->setEType(getCallEventExecution_EClass());
	m_callEventOccurrence_EReference_execution->setLowerBound(1);
	m_callEventOccurrence_EReference_execution->setUpperBound(1);
	m_callEventOccurrence_EReference_execution->setTransient(false);
	m_callEventOccurrence_EReference_execution->setVolatile(false);
	m_callEventOccurrence_EReference_execution->setChangeable(true);
	m_callEventOccurrence_EReference_execution->setUnsettable(false);
	m_callEventOccurrence_EReference_execution->setUnique(true);
	m_callEventOccurrence_EReference_execution->setDerived(false);
	m_callEventOccurrence_EReference_execution->setOrdered(false);
	m_callEventOccurrence_EReference_execution->setContainment(false);
	m_callEventOccurrence_EReference_execution->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_callEventOccurrence_EReference_execution->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_callEventOccurrence_EReference_execution->setEOpposite(otherEnd);
	    }
	}
	
	
}

void PSSMPackageImpl::initializeChoicePseudostateActivationContent()
{
	m_choicePseudostateActivation_EClass->setName("ChoicePseudostateActivation");
	m_choicePseudostateActivation_EClass->setAbstract(false);
	m_choicePseudostateActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeCompletionEventOccurrenceContent()
{
	m_completionEventOccurrence_EClass->setName("CompletionEventOccurrence");
	m_completionEventOccurrence_EClass->setAbstract(false);
	m_completionEventOccurrence_EClass->setInterface(false);
	
	
	m_completionEventOccurrence_EReference_stateActivation->setName("stateActivation");
	m_completionEventOccurrence_EReference_stateActivation->setEType(getStateActivation_EClass());
	m_completionEventOccurrence_EReference_stateActivation->setLowerBound(1);
	m_completionEventOccurrence_EReference_stateActivation->setUpperBound(1);
	m_completionEventOccurrence_EReference_stateActivation->setTransient(false);
	m_completionEventOccurrence_EReference_stateActivation->setVolatile(false);
	m_completionEventOccurrence_EReference_stateActivation->setChangeable(true);
	m_completionEventOccurrence_EReference_stateActivation->setUnsettable(false);
	m_completionEventOccurrence_EReference_stateActivation->setUnique(true);
	m_completionEventOccurrence_EReference_stateActivation->setDerived(false);
	m_completionEventOccurrence_EReference_stateActivation->setOrdered(false);
	m_completionEventOccurrence_EReference_stateActivation->setContainment(false);
	m_completionEventOccurrence_EReference_stateActivation->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_completionEventOccurrence_EReference_stateActivation->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_completionEventOccurrence_EReference_stateActivation->setEOpposite(otherEnd);
	    }
	}
	
	
}

void PSSMPackageImpl::initializeConditionalPseudostateActivationContent()
{
	m_conditionalPseudostateActivation_EClass->setName("ConditionalPseudostateActivation");
	m_conditionalPseudostateActivation_EClass->setAbstract(true);
	m_conditionalPseudostateActivation_EClass->setInterface(false);
	
	
	
	m_conditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_conditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation->setName("isElseTransition");
	m_conditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation->setLowerBound(1);
	m_conditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation->setUpperBound(1);
	m_conditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation->setUnique(true);
	m_conditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_conditionalPseudostateActivation_EOperation_isElseTransition_TransitionActivation);
		parameter->setName("transitionActivation");
		parameter->setEType(getTransitionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeConnectionPointActivationContent()
{
	m_connectionPointActivation_EClass->setName("ConnectionPointActivation");
	m_connectionPointActivation_EClass->setAbstract(true);
	m_connectionPointActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeDeepHistoryPseudostateActivationContent()
{
	m_deepHistoryPseudostateActivation_EClass->setName("DeepHistoryPseudostateActivation");
	m_deepHistoryPseudostateActivation_EClass->setAbstract(false);
	m_deepHistoryPseudostateActivation_EClass->setInterface(false);
	
	
	
	m_deepHistoryPseudostateActivation_EOperation_canRestore_StateActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_deepHistoryPseudostateActivation_EOperation_canRestore_StateActivation->setName("canRestore");
	m_deepHistoryPseudostateActivation_EOperation_canRestore_StateActivation->setLowerBound(1);
	m_deepHistoryPseudostateActivation_EOperation_canRestore_StateActivation->setUpperBound(1);
	m_deepHistoryPseudostateActivation_EOperation_canRestore_StateActivation->setUnique(true);
	m_deepHistoryPseudostateActivation_EOperation_canRestore_StateActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_deepHistoryPseudostateActivation_EOperation_canRestore_StateActivation);
		parameter->setName("stateActivation");
		parameter->setEType(getStateActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeDeferredEventOccurrenceContent()
{
	m_deferredEventOccurrence_EClass->setName("DeferredEventOccurrence");
	m_deferredEventOccurrence_EClass->setAbstract(false);
	m_deferredEventOccurrence_EClass->setInterface(false);
	
	
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setName("constrainingStateActivation");
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setEType(getStateActivation_EClass());
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setLowerBound(1);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setUpperBound(1);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setTransient(false);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setVolatile(false);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setChangeable(true);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setUnsettable(false);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setUnique(true);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setDerived(false);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setOrdered(false);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setContainment(false);
	m_deferredEventOccurrence_EReference_constrainingStateActivation->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_deferredEventOccurrence_EReference_constrainingStateActivation->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_deferredEventOccurrence_EReference_constrainingStateActivation->setEOpposite(otherEnd);
	    }
	}
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setName("deferredEventOccurrence");
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setLowerBound(1);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setUpperBound(1);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setTransient(false);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setVolatile(false);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setChangeable(true);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setUnsettable(false);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setUnique(true);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setDerived(false);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setOrdered(false);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setContainment(false);
	m_deferredEventOccurrence_EReference_deferredEventOccurrence->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_deferredEventOccurrence_EReference_deferredEventOccurrence->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_deferredEventOccurrence_EReference_deferredEventOccurrence->setEOpposite(otherEnd);
	    }
	}
	
	
}

void PSSMPackageImpl::initializeDoActivityContextObjectContent()
{
	m_doActivityContextObject_EClass->setName("DoActivityContextObject");
	m_doActivityContextObject_EClass->setAbstract(false);
	m_doActivityContextObject_EClass->setInterface(false);
	
	
	m_doActivityContextObject_EReference_context->setName("context");
	m_doActivityContextObject_EReference_context->setEType(fUML::FUMLPackage::eInstance()->getObject_EClass());
	m_doActivityContextObject_EReference_context->setLowerBound(1);
	m_doActivityContextObject_EReference_context->setUpperBound(1);
	m_doActivityContextObject_EReference_context->setTransient(false);
	m_doActivityContextObject_EReference_context->setVolatile(false);
	m_doActivityContextObject_EReference_context->setChangeable(true);
	m_doActivityContextObject_EReference_context->setUnsettable(false);
	m_doActivityContextObject_EReference_context->setUnique(true);
	m_doActivityContextObject_EReference_context->setDerived(false);
	m_doActivityContextObject_EReference_context->setOrdered(false);
	m_doActivityContextObject_EReference_context->setContainment(false);
	m_doActivityContextObject_EReference_context->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_doActivityContextObject_EReference_context->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_doActivityContextObject_EReference_context->setEOpposite(otherEnd);
	    }
	}
	m_doActivityContextObject_EReference_owner->setName("owner");
	m_doActivityContextObject_EReference_owner->setEType(getStateActivation_EClass());
	m_doActivityContextObject_EReference_owner->setLowerBound(1);
	m_doActivityContextObject_EReference_owner->setUpperBound(1);
	m_doActivityContextObject_EReference_owner->setTransient(false);
	m_doActivityContextObject_EReference_owner->setVolatile(false);
	m_doActivityContextObject_EReference_owner->setChangeable(true);
	m_doActivityContextObject_EReference_owner->setUnsettable(false);
	m_doActivityContextObject_EReference_owner->setUnique(true);
	m_doActivityContextObject_EReference_owner->setDerived(false);
	m_doActivityContextObject_EReference_owner->setOrdered(false);
	m_doActivityContextObject_EReference_owner->setContainment(false);
	m_doActivityContextObject_EReference_owner->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_doActivityContextObject_EReference_owner->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getStateActivation_EReference_doActivityContextObject();
		if (otherEnd != nullptr)
	    {
	   		m_doActivityContextObject_EReference_owner->setEOpposite(otherEnd);
	    }
	}
	
	m_doActivityContextObject_EOperation__register_EventAccepter->setEType(nullptr);
	m_doActivityContextObject_EOperation__register_EventAccepter->setName("_register");
	m_doActivityContextObject_EOperation__register_EventAccepter->setLowerBound(1);
	m_doActivityContextObject_EOperation__register_EventAccepter->setUpperBound(1);
	m_doActivityContextObject_EOperation__register_EventAccepter->setUnique(true);
	m_doActivityContextObject_EOperation__register_EventAccepter->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation__register_EventAccepter);
		parameter->setName("accepter");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_doActivityContextObject_EOperation_destroy->setEType(nullptr);
	m_doActivityContextObject_EOperation_destroy->setName("destroy");
	m_doActivityContextObject_EOperation_destroy->setLowerBound(1);
	m_doActivityContextObject_EOperation_destroy->setUpperBound(1);
	m_doActivityContextObject_EOperation_destroy->setUnique(true);
	m_doActivityContextObject_EOperation_destroy->setOrdered(false);
	
	
	m_doActivityContextObject_EOperation_dispatch_Operation->setEType(fUML::FUMLPackage::eInstance()->getExecution_EClass());
	m_doActivityContextObject_EOperation_dispatch_Operation->setName("dispatch");
	m_doActivityContextObject_EOperation_dispatch_Operation->setLowerBound(1);
	m_doActivityContextObject_EOperation_dispatch_Operation->setUpperBound(1);
	m_doActivityContextObject_EOperation_dispatch_Operation->setUnique(true);
	m_doActivityContextObject_EOperation_dispatch_Operation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_dispatch_Operation);
		parameter->setName("operation");
		parameter->setEType(uml::UmlPackage::eInstance()->getOperation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_doActivityContextObject_EOperation_getFeatureValue_StructuralFeature->setEType(fUML::FUMLPackage::eInstance()->getFeatureValue_EClass());
	m_doActivityContextObject_EOperation_getFeatureValue_StructuralFeature->setName("getFeatureValue");
	m_doActivityContextObject_EOperation_getFeatureValue_StructuralFeature->setLowerBound(1);
	m_doActivityContextObject_EOperation_getFeatureValue_StructuralFeature->setUpperBound(1);
	m_doActivityContextObject_EOperation_getFeatureValue_StructuralFeature->setUnique(true);
	m_doActivityContextObject_EOperation_getFeatureValue_StructuralFeature->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_getFeatureValue_StructuralFeature);
		parameter->setName("feature");
		parameter->setEType(uml::UmlPackage::eInstance()->getStructuralFeature_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_doActivityContextObject_EOperation_initialize_Object->setEType(nullptr);
	m_doActivityContextObject_EOperation_initialize_Object->setName("initialize");
	m_doActivityContextObject_EOperation_initialize_Object->setLowerBound(1);
	m_doActivityContextObject_EOperation_initialize_Object->setUpperBound(1);
	m_doActivityContextObject_EOperation_initialize_Object->setUnique(true);
	m_doActivityContextObject_EOperation_initialize_Object->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_initialize_Object);
		parameter->setName("context");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_doActivityContextObject_EOperation_send_EventOccurrence->setEType(nullptr);
	m_doActivityContextObject_EOperation_send_EventOccurrence->setName("send");
	m_doActivityContextObject_EOperation_send_EventOccurrence->setLowerBound(1);
	m_doActivityContextObject_EOperation_send_EventOccurrence->setUpperBound(1);
	m_doActivityContextObject_EOperation_send_EventOccurrence->setUnique(true);
	m_doActivityContextObject_EOperation_send_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_send_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer->setEType(nullptr);
	m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer->setName("setFeatureValue");
	m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer->setLowerBound(1);
	m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer->setUpperBound(1);
	m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer->setUnique(true);
	m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer);
		parameter->setName("feature");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer);
		parameter->setName("values");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_setFeatureValue_StructuralFeature_Integer);
		parameter->setName("position");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue->setEType(nullptr);
	m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue->setName("startBehavior");
	m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue->setLowerBound(1);
	m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue->setUpperBound(1);
	m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue->setUnique(true);
	m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue);
		parameter->setName("classifier");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_startBehavior_Class_ParameterValue);
		parameter->setName("inputs");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_doActivityContextObject_EOperation_unregister_EventAccepter->setEType(nullptr);
	m_doActivityContextObject_EOperation_unregister_EventAccepter->setName("unregister");
	m_doActivityContextObject_EOperation_unregister_EventAccepter->setLowerBound(1);
	m_doActivityContextObject_EOperation_unregister_EventAccepter->setUpperBound(1);
	m_doActivityContextObject_EOperation_unregister_EventAccepter->setUnique(true);
	m_doActivityContextObject_EOperation_unregister_EventAccepter->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_unregister_EventAccepter);
		parameter->setName("accepter");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_doActivityContextObject_EOperation_unregisterFromContext_EventAccepter->setEType(nullptr);
	m_doActivityContextObject_EOperation_unregisterFromContext_EventAccepter->setName("unregisterFromContext");
	m_doActivityContextObject_EOperation_unregisterFromContext_EventAccepter->setLowerBound(1);
	m_doActivityContextObject_EOperation_unregisterFromContext_EventAccepter->setUpperBound(1);
	m_doActivityContextObject_EOperation_unregisterFromContext_EventAccepter->setUnique(true);
	m_doActivityContextObject_EOperation_unregisterFromContext_EventAccepter->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObject_EOperation_unregisterFromContext_EventAccepter);
		parameter->setName("encapsulatedAccepter");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeDoActivityContextObjectActivationContent()
{
	m_doActivityContextObjectActivation_EClass->setName("DoActivityContextObjectActivation");
	m_doActivityContextObjectActivation_EClass->setAbstract(false);
	m_doActivityContextObjectActivation_EClass->setInterface(false);
	
	
	
	m_doActivityContextObjectActivation_EOperation_dispatchNextEvent->setEType(nullptr);
	m_doActivityContextObjectActivation_EOperation_dispatchNextEvent->setName("dispatchNextEvent");
	m_doActivityContextObjectActivation_EOperation_dispatchNextEvent->setLowerBound(1);
	m_doActivityContextObjectActivation_EOperation_dispatchNextEvent->setUpperBound(1);
	m_doActivityContextObjectActivation_EOperation_dispatchNextEvent->setUnique(true);
	m_doActivityContextObjectActivation_EOperation_dispatchNextEvent->setOrdered(false);
	
	
	m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue->setEType(nullptr);
	m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue->setName("startBehavior");
	m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue->setLowerBound(1);
	m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue->setUpperBound(1);
	m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue->setUnique(true);
	m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue);
		parameter->setName("classifier");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityContextObjectActivation_EOperation_startBehavior_Class_ParameterValue);
		parameter->setName("inputs");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeDoActivityExecutionEventAccepterContent()
{
	m_doActivityExecutionEventAccepter_EClass->setName("DoActivityExecutionEventAccepter");
	m_doActivityExecutionEventAccepter_EClass->setAbstract(false);
	m_doActivityExecutionEventAccepter_EClass->setInterface(false);
	
	
	m_doActivityExecutionEventAccepter_EReference_context->setName("context");
	m_doActivityExecutionEventAccepter_EReference_context->setEType(getDoActivityContextObject_EClass());
	m_doActivityExecutionEventAccepter_EReference_context->setLowerBound(1);
	m_doActivityExecutionEventAccepter_EReference_context->setUpperBound(1);
	m_doActivityExecutionEventAccepter_EReference_context->setTransient(false);
	m_doActivityExecutionEventAccepter_EReference_context->setVolatile(false);
	m_doActivityExecutionEventAccepter_EReference_context->setChangeable(true);
	m_doActivityExecutionEventAccepter_EReference_context->setUnsettable(false);
	m_doActivityExecutionEventAccepter_EReference_context->setUnique(true);
	m_doActivityExecutionEventAccepter_EReference_context->setDerived(false);
	m_doActivityExecutionEventAccepter_EReference_context->setOrdered(false);
	m_doActivityExecutionEventAccepter_EReference_context->setContainment(false);
	m_doActivityExecutionEventAccepter_EReference_context->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_doActivityExecutionEventAccepter_EReference_context->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_doActivityExecutionEventAccepter_EReference_context->setEOpposite(otherEnd);
	    }
	}
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setName("encapsulatedAccepter");
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setEType(fUML::FUMLPackage::eInstance()->getEventAccepter_EClass());
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setLowerBound(1);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setUpperBound(1);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setTransient(false);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setVolatile(false);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setChangeable(true);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setUnsettable(false);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setUnique(true);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setDerived(false);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setOrdered(false);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setContainment(true);
	m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_doActivityExecutionEventAccepter_EReference_encapsulatedAccepter->setEOpposite(otherEnd);
	    }
	}
	
	m_doActivityExecutionEventAccepter_EOperation_accept_EventOccurrence->setEType(nullptr);
	m_doActivityExecutionEventAccepter_EOperation_accept_EventOccurrence->setName("accept");
	m_doActivityExecutionEventAccepter_EOperation_accept_EventOccurrence->setLowerBound(1);
	m_doActivityExecutionEventAccepter_EOperation_accept_EventOccurrence->setUpperBound(1);
	m_doActivityExecutionEventAccepter_EOperation_accept_EventOccurrence->setUnique(true);
	m_doActivityExecutionEventAccepter_EOperation_accept_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityExecutionEventAccepter_EOperation_accept_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_doActivityExecutionEventAccepter_EOperation_match_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_doActivityExecutionEventAccepter_EOperation_match_EventOccurrence->setName("match");
	m_doActivityExecutionEventAccepter_EOperation_match_EventOccurrence->setLowerBound(1);
	m_doActivityExecutionEventAccepter_EOperation_match_EventOccurrence->setUpperBound(1);
	m_doActivityExecutionEventAccepter_EOperation_match_EventOccurrence->setUnique(true);
	m_doActivityExecutionEventAccepter_EOperation_match_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_doActivityExecutionEventAccepter_EOperation_match_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeEntryPointPseudostateActivationContent()
{
	m_entryPointPseudostateActivation_EClass->setName("EntryPointPseudostateActivation");
	m_entryPointPseudostateActivation_EClass->setAbstract(false);
	m_entryPointPseudostateActivation_EClass->setInterface(false);
	
	
	
	m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation->setEType(nullptr);
	m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation->setName("_enter");
	m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation->setLowerBound(1);
	m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation->setUpperBound(1);
	m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation->setUnique(true);
	m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation);
		parameter->setName("enteringTransition");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_entryPointPseudostateActivation_EOperation__enter_TransitionActivation_RegionActivation);
		parameter->setName("leastCommonAncestor");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeEventTriggeredExecutionContent()
{
	m_eventTriggeredExecution_EClass->setName("EventTriggeredExecution");
	m_eventTriggeredExecution_EClass->setAbstract(false);
	m_eventTriggeredExecution_EClass->setInterface(false);
	
	
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setName("triggeringEventOccurrence");
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setLowerBound(1);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setUpperBound(1);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setTransient(false);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setVolatile(false);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setChangeable(true);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setUnsettable(false);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setUnique(true);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setDerived(false);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setOrdered(false);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setContainment(false);
	m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_eventTriggeredExecution_EReference_triggeringEventOccurrence->setEOpposite(otherEnd);
	    }
	}
	m_eventTriggeredExecution_EReference_wrappedExecution->setName("wrappedExecution");
	m_eventTriggeredExecution_EReference_wrappedExecution->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
	m_eventTriggeredExecution_EReference_wrappedExecution->setLowerBound(1);
	m_eventTriggeredExecution_EReference_wrappedExecution->setUpperBound(1);
	m_eventTriggeredExecution_EReference_wrappedExecution->setTransient(false);
	m_eventTriggeredExecution_EReference_wrappedExecution->setVolatile(false);
	m_eventTriggeredExecution_EReference_wrappedExecution->setChangeable(true);
	m_eventTriggeredExecution_EReference_wrappedExecution->setUnsettable(false);
	m_eventTriggeredExecution_EReference_wrappedExecution->setUnique(true);
	m_eventTriggeredExecution_EReference_wrappedExecution->setDerived(false);
	m_eventTriggeredExecution_EReference_wrappedExecution->setOrdered(false);
	m_eventTriggeredExecution_EReference_wrappedExecution->setContainment(false);
	m_eventTriggeredExecution_EReference_wrappedExecution->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_eventTriggeredExecution_EReference_wrappedExecution->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_eventTriggeredExecution_EReference_wrappedExecution->setEOpposite(otherEnd);
	    }
	}
	
	m_eventTriggeredExecution_EOperation_copy->setEType(fUML::FUMLPackage::eInstance()->getValue_EClass());
	m_eventTriggeredExecution_EOperation_copy->setName("copy");
	m_eventTriggeredExecution_EOperation_copy->setLowerBound(1);
	m_eventTriggeredExecution_EOperation_copy->setUpperBound(1);
	m_eventTriggeredExecution_EOperation_copy->setUnique(true);
	m_eventTriggeredExecution_EOperation_copy->setOrdered(false);
	
	
	m_eventTriggeredExecution_EOperation_execute->setEType(nullptr);
	m_eventTriggeredExecution_EOperation_execute->setName("execute");
	m_eventTriggeredExecution_EOperation_execute->setLowerBound(1);
	m_eventTriggeredExecution_EOperation_execute->setUpperBound(1);
	m_eventTriggeredExecution_EOperation_execute->setUnique(true);
	m_eventTriggeredExecution_EOperation_execute->setOrdered(false);
	
	
	m_eventTriggeredExecution_EOperation_finalize->setEType(nullptr);
	m_eventTriggeredExecution_EOperation_finalize->setName("finalize");
	m_eventTriggeredExecution_EOperation_finalize->setLowerBound(1);
	m_eventTriggeredExecution_EOperation_finalize->setUpperBound(1);
	m_eventTriggeredExecution_EOperation_finalize->setUnique(true);
	m_eventTriggeredExecution_EOperation_finalize->setOrdered(false);
	
	
	m_eventTriggeredExecution_EOperation_initialize->setEType(nullptr);
	m_eventTriggeredExecution_EOperation_initialize->setName("initialize");
	m_eventTriggeredExecution_EOperation_initialize->setLowerBound(1);
	m_eventTriggeredExecution_EOperation_initialize->setUpperBound(1);
	m_eventTriggeredExecution_EOperation_initialize->setUnique(true);
	m_eventTriggeredExecution_EOperation_initialize->setOrdered(false);
	
	
	m_eventTriggeredExecution_EOperation_new_->setEType(fUML::FUMLPackage::eInstance()->getValue_EClass());
	m_eventTriggeredExecution_EOperation_new_->setName("new_");
	m_eventTriggeredExecution_EOperation_new_->setLowerBound(1);
	m_eventTriggeredExecution_EOperation_new_->setUpperBound(1);
	m_eventTriggeredExecution_EOperation_new_->setUnique(true);
	m_eventTriggeredExecution_EOperation_new_->setOrdered(false);
	
	
	
}

void PSSMPackageImpl::initializeExitPointPseudostateActivationContent()
{
	m_exitPointPseudostateActivation_EClass->setName("ExitPointPseudostateActivation");
	m_exitPointPseudostateActivation_EClass->setAbstract(false);
	m_exitPointPseudostateActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeExternalTransitionActivationContent()
{
	m_externalTransitionActivation_EClass->setName("ExternalTransitionActivation");
	m_externalTransitionActivation_EClass->setAbstract(false);
	m_externalTransitionActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeFinalStateActivationContent()
{
	m_finalStateActivation_EClass->setName("FinalStateActivation");
	m_finalStateActivation_EClass->setAbstract(false);
	m_finalStateActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeForkPseudostateActivationContent()
{
	m_forkPseudostateActivation_EClass->setName("ForkPseudostateActivation");
	m_forkPseudostateActivation_EClass->setAbstract(false);
	m_forkPseudostateActivation_EClass->setInterface(false);
	
	
	
	m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setName("_canPropagateExecution");
	m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setLowerBound(1);
	m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setUpperBound(1);
	m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setUnique(true);
	m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation);
		parameter->setName("enteringTransition");
		parameter->setEType(getTransitionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_forkPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation);
		parameter->setName("leastCommonAncestor");
		parameter->setEType(getRegionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeHistoryPseudostateActivationContent()
{
	m_historyPseudostateActivation_EClass->setName("HistoryPseudostateActivation");
	m_historyPseudostateActivation_EClass->setAbstract(true);
	m_historyPseudostateActivation_EClass->setInterface(false);
	
	
	
	m_historyPseudostateActivation_EOperation_hasDefaultTransition->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_historyPseudostateActivation_EOperation_hasDefaultTransition->setName("hasDefaultTransition");
	m_historyPseudostateActivation_EOperation_hasDefaultTransition->setLowerBound(1);
	m_historyPseudostateActivation_EOperation_hasDefaultTransition->setUpperBound(1);
	m_historyPseudostateActivation_EOperation_hasDefaultTransition->setUnique(true);
	m_historyPseudostateActivation_EOperation_hasDefaultTransition->setOrdered(false);
	
	
	m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence->setEType(nullptr);
	m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence->setName("restore");
	m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence->setLowerBound(1);
	m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence->setUpperBound(1);
	m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence->setUnique(true);
	m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence);
		parameter->setName("stateActivation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence);
		parameter->setName("enteringTransition");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_historyPseudostateActivation_EOperation_restore_StateActivation_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence->setEType(nullptr);
	m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence->setName("restore");
	m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence->setLowerBound(1);
	m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence->setUpperBound(1);
	m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence->setUnique(true);
	m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence);
		parameter->setName("regionActivation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence);
		parameter->setName("enteringTransition");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_historyPseudostateActivation_EOperation_restore_RegionActivation_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeInitialPseudostateActivationContent()
{
	m_initialPseudostateActivation_EClass->setName("InitialPseudostateActivation");
	m_initialPseudostateActivation_EClass->setAbstract(false);
	m_initialPseudostateActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeInternalTransitionActivationContent()
{
	m_internalTransitionActivation_EClass->setName("InternalTransitionActivation");
	m_internalTransitionActivation_EClass->setAbstract(false);
	m_internalTransitionActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeJoinPseudostateActivationContent()
{
	m_joinPseudostateActivation_EClass->setName("JoinPseudostateActivation");
	m_joinPseudostateActivation_EClass->setAbstract(false);
	m_joinPseudostateActivation_EClass->setInterface(false);
	
	
	
	m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setName("_canPropagateExecution");
	m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setLowerBound(1);
	m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setUpperBound(1);
	m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setUnique(true);
	m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation);
		parameter->setName("enteringTransition");
		parameter->setEType(getTransitionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_joinPseudostateActivation_EOperation__canPropagateExecution_TransitionActivation_RegionActivation);
		parameter->setName("leastCommonAncestor");
		parameter->setEType(getRegionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeJunctionPseudostateActivationContent()
{
	m_junctionPseudostateActivation_EClass->setName("JunctionPseudostateActivation");
	m_junctionPseudostateActivation_EClass->setAbstract(false);
	m_junctionPseudostateActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeLocalTransitionActivationContent()
{
	m_localTransitionActivation_EClass->setName("LocalTransitionActivation");
	m_localTransitionActivation_EClass->setAbstract(false);
	m_localTransitionActivation_EClass->setInterface(false);
	
	
	
	m_localTransitionActivation_EOperation_getContainingState->setEType(getStateActivation_EClass());
	m_localTransitionActivation_EOperation_getContainingState->setName("getContainingState");
	m_localTransitionActivation_EOperation_getContainingState->setLowerBound(1);
	m_localTransitionActivation_EOperation_getContainingState->setUpperBound(1);
	m_localTransitionActivation_EOperation_getContainingState->setUnique(true);
	m_localTransitionActivation_EOperation_getContainingState->setOrdered(false);
	
	
	
}

void PSSMPackageImpl::initializePseudostateActivationContent()
{
	m_pseudostateActivation_EClass->setName("PseudostateActivation");
	m_pseudostateActivation_EClass->setAbstract(true);
	m_pseudostateActivation_EClass->setInterface(false);
	
	
	m_pseudostateActivation_EReference_fireableTransitions->setName("fireableTransitions");
	m_pseudostateActivation_EReference_fireableTransitions->setEType(getTransitionActivation_EClass());
	m_pseudostateActivation_EReference_fireableTransitions->setLowerBound(0);
	m_pseudostateActivation_EReference_fireableTransitions->setUpperBound(-1);
	m_pseudostateActivation_EReference_fireableTransitions->setTransient(false);
	m_pseudostateActivation_EReference_fireableTransitions->setVolatile(false);
	m_pseudostateActivation_EReference_fireableTransitions->setChangeable(true);
	m_pseudostateActivation_EReference_fireableTransitions->setUnsettable(false);
	m_pseudostateActivation_EReference_fireableTransitions->setUnique(true);
	m_pseudostateActivation_EReference_fireableTransitions->setDerived(false);
	m_pseudostateActivation_EReference_fireableTransitions->setOrdered(false);
	m_pseudostateActivation_EReference_fireableTransitions->setContainment(false);
	m_pseudostateActivation_EReference_fireableTransitions->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_pseudostateActivation_EReference_fireableTransitions->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_pseudostateActivation_EReference_fireableTransitions->setEOpposite(otherEnd);
	    }
	}
	
	m_pseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence->setEType(nullptr);
	m_pseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence->setName("evaluateAllGuards");
	m_pseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence->setLowerBound(1);
	m_pseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence->setUpperBound(1);
	m_pseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence->setUnique(true);
	m_pseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_pseudostateActivation_EOperation_evaluateAllGuards_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeRegionActivationContent()
{
	m_regionActivation_EClass->setName("RegionActivation");
	m_regionActivation_EClass->setAbstract(false);
	m_regionActivation_EClass->setInterface(false);
	
	m_regionActivation_EAttribute_isCompleted = getRegionActivation_EAttribute_isCompleted();
	m_regionActivation_EAttribute_isCompleted->setName("isCompleted");
	m_regionActivation_EAttribute_isCompleted->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_regionActivation_EAttribute_isCompleted->setLowerBound(1);
	m_regionActivation_EAttribute_isCompleted->setUpperBound(1);
	m_regionActivation_EAttribute_isCompleted->setTransient(false);
	m_regionActivation_EAttribute_isCompleted->setVolatile(false);
	m_regionActivation_EAttribute_isCompleted->setChangeable(true);
	m_regionActivation_EAttribute_isCompleted->setUnsettable(false);
	m_regionActivation_EAttribute_isCompleted->setUnique(true);
	m_regionActivation_EAttribute_isCompleted->setDerived(false);
	m_regionActivation_EAttribute_isCompleted->setOrdered(false);
	m_regionActivation_EAttribute_isCompleted->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_regionActivation_EAttribute_isCompleted->setDefaultValueLiteral(defaultValue);
		}
	}
	
	m_regionActivation_EReference_history->setName("history");
	m_regionActivation_EReference_history->setEType(getStateActivation_EClass());
	m_regionActivation_EReference_history->setLowerBound(0);
	m_regionActivation_EReference_history->setUpperBound(1);
	m_regionActivation_EReference_history->setTransient(false);
	m_regionActivation_EReference_history->setVolatile(false);
	m_regionActivation_EReference_history->setChangeable(true);
	m_regionActivation_EReference_history->setUnsettable(false);
	m_regionActivation_EReference_history->setUnique(true);
	m_regionActivation_EReference_history->setDerived(false);
	m_regionActivation_EReference_history->setOrdered(false);
	m_regionActivation_EReference_history->setContainment(false);
	m_regionActivation_EReference_history->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_regionActivation_EReference_history->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_regionActivation_EReference_history->setEOpposite(otherEnd);
	    }
	}
	m_regionActivation_EReference_transitionActivations->setName("transitionActivations");
	m_regionActivation_EReference_transitionActivations->setEType(getTransitionActivation_EClass());
	m_regionActivation_EReference_transitionActivations->setLowerBound(0);
	m_regionActivation_EReference_transitionActivations->setUpperBound(-1);
	m_regionActivation_EReference_transitionActivations->setTransient(false);
	m_regionActivation_EReference_transitionActivations->setVolatile(false);
	m_regionActivation_EReference_transitionActivations->setChangeable(true);
	m_regionActivation_EReference_transitionActivations->setUnsettable(false);
	m_regionActivation_EReference_transitionActivations->setUnique(true);
	m_regionActivation_EReference_transitionActivations->setDerived(false);
	m_regionActivation_EReference_transitionActivations->setOrdered(false);
	m_regionActivation_EReference_transitionActivations->setContainment(true);
	m_regionActivation_EReference_transitionActivations->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_regionActivation_EReference_transitionActivations->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_regionActivation_EReference_transitionActivations->setEOpposite(otherEnd);
	    }
	}
	m_regionActivation_EReference_vertexActivations->setName("vertexActivations");
	m_regionActivation_EReference_vertexActivations->setEType(getVertexActivation_EClass());
	m_regionActivation_EReference_vertexActivations->setLowerBound(0);
	m_regionActivation_EReference_vertexActivations->setUpperBound(-1);
	m_regionActivation_EReference_vertexActivations->setTransient(false);
	m_regionActivation_EReference_vertexActivations->setVolatile(false);
	m_regionActivation_EReference_vertexActivations->setChangeable(true);
	m_regionActivation_EReference_vertexActivations->setUnsettable(false);
	m_regionActivation_EReference_vertexActivations->setUnique(true);
	m_regionActivation_EReference_vertexActivations->setDerived(false);
	m_regionActivation_EReference_vertexActivations->setOrdered(false);
	m_regionActivation_EReference_vertexActivations->setContainment(true);
	m_regionActivation_EReference_vertexActivations->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_regionActivation_EReference_vertexActivations->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_regionActivation_EReference_vertexActivations->setEOpposite(otherEnd);
	    }
	}
	
	m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence->setName("canPropagateExecution");
	m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence->setLowerBound(1);
	m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence->setUpperBound(1);
	m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence->setUnique(true);
	m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence);
		parameter->setName("enteringTransition");
		parameter->setEType(getTransitionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_canPropagateExecution_TransitionActivation_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence->setEType(nullptr);
	m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence->setName("enter");
	m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence->setLowerBound(1);
	m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence->setUpperBound(1);
	m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence->setUnique(true);
	m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence);
		parameter->setName("enteringTransition");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_enter_TransitionActivation_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence->setEType(nullptr);
	m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence->setName("exit");
	m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence->setLowerBound(1);
	m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence->setUpperBound(1);
	m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence->setUnique(true);
	m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence);
		parameter->setName("exitingTransition");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_exit_TransitionActivation_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_regionActivation_EOperation_getOrigin->setEType(getInitialPseudostateActivation_EClass());
	m_regionActivation_EOperation_getOrigin->setName("getOrigin");
	m_regionActivation_EOperation_getOrigin->setLowerBound(1);
	m_regionActivation_EOperation_getOrigin->setUpperBound(1);
	m_regionActivation_EOperation_getOrigin->setUnique(true);
	m_regionActivation_EOperation_getOrigin->setOrdered(false);
	
	
	m_regionActivation_EOperation_getTransitionActivations->setEType(getTransitionActivation_EClass());
	m_regionActivation_EOperation_getTransitionActivations->setName("getTransitionActivations");
	m_regionActivation_EOperation_getTransitionActivations->setLowerBound(0);
	m_regionActivation_EOperation_getTransitionActivations->setUpperBound(-1);
	m_regionActivation_EOperation_getTransitionActivations->setUnique(true);
	m_regionActivation_EOperation_getTransitionActivations->setOrdered(false);
	
	
	m_regionActivation_EOperation_getVertexActivation_Vertex->setEType(getVertexActivation_EClass());
	m_regionActivation_EOperation_getVertexActivation_Vertex->setName("getVertexActivation");
	m_regionActivation_EOperation_getVertexActivation_Vertex->setLowerBound(1);
	m_regionActivation_EOperation_getVertexActivation_Vertex->setUpperBound(1);
	m_regionActivation_EOperation_getVertexActivation_Vertex->setUnique(true);
	m_regionActivation_EOperation_getVertexActivation_Vertex->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_getVertexActivation_Vertex);
		parameter->setName("vertex");
		parameter->setEType(uml::UmlPackage::eInstance()->getVertex_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_regionActivation_EOperation_getVertexActivations->setEType(getVertexActivation_EClass());
	m_regionActivation_EOperation_getVertexActivations->setName("getVertexActivations");
	m_regionActivation_EOperation_getVertexActivations->setLowerBound(0);
	m_regionActivation_EOperation_getVertexActivations->setUpperBound(-1);
	m_regionActivation_EOperation_getVertexActivations->setUnique(true);
	m_regionActivation_EOperation_getVertexActivations->setOrdered(false);
	
	
	m_regionActivation_EOperation_isRedefined_Vertex_Vertex->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_regionActivation_EOperation_isRedefined_Vertex_Vertex->setName("isRedefined");
	m_regionActivation_EOperation_isRedefined_Vertex_Vertex->setLowerBound(1);
	m_regionActivation_EOperation_isRedefined_Vertex_Vertex->setUpperBound(1);
	m_regionActivation_EOperation_isRedefined_Vertex_Vertex->setUnique(true);
	m_regionActivation_EOperation_isRedefined_Vertex_Vertex->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_isRedefined_Vertex_Vertex);
		parameter->setName("vertices");
		parameter->setEType(uml::UmlPackage::eInstance()->getVertex_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_isRedefined_Vertex_Vertex);
		parameter->setName("vertex");
		parameter->setEType(uml::UmlPackage::eInstance()->getVertex_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_regionActivation_EOperation_isRedefined_Transition_Transition->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_regionActivation_EOperation_isRedefined_Transition_Transition->setName("isRedefined");
	m_regionActivation_EOperation_isRedefined_Transition_Transition->setLowerBound(1);
	m_regionActivation_EOperation_isRedefined_Transition_Transition->setUpperBound(1);
	m_regionActivation_EOperation_isRedefined_Transition_Transition->setUnique(true);
	m_regionActivation_EOperation_isRedefined_Transition_Transition->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_isRedefined_Transition_Transition);
		parameter->setName("transitions");
		parameter->setEType(uml::UmlPackage::eInstance()->getTransition_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_regionActivation_EOperation_isRedefined_Transition_Transition);
		parameter->setName("transition");
		parameter->setEType(uml::UmlPackage::eInstance()->getTransition_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_regionActivation_EOperation_terminate->setEType(nullptr);
	m_regionActivation_EOperation_terminate->setName("terminate");
	m_regionActivation_EOperation_terminate->setLowerBound(1);
	m_regionActivation_EOperation_terminate->setUpperBound(1);
	m_regionActivation_EOperation_terminate->setUnique(true);
	m_regionActivation_EOperation_terminate->setOrdered(false);
	
	
	
}

void PSSMPackageImpl::initializeSM_ExecutionFactoryContent()
{
	m_sM_ExecutionFactory_EClass->setName("SM_ExecutionFactory");
	m_sM_ExecutionFactory_EClass->setAbstract(false);
	m_sM_ExecutionFactory_EClass->setInterface(false);
	
	
	
	m_sM_ExecutionFactory_EOperation_instantiateVisitor_Element->setEType(fUML::FUMLPackage::eInstance()->getSemanticVisitor_EClass());
	m_sM_ExecutionFactory_EOperation_instantiateVisitor_Element->setName("instantiateVisitor");
	m_sM_ExecutionFactory_EOperation_instantiateVisitor_Element->setLowerBound(1);
	m_sM_ExecutionFactory_EOperation_instantiateVisitor_Element->setUpperBound(1);
	m_sM_ExecutionFactory_EOperation_instantiateVisitor_Element->setUnique(true);
	m_sM_ExecutionFactory_EOperation_instantiateVisitor_Element->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_ExecutionFactory_EOperation_instantiateVisitor_Element);
		parameter->setName("element");
		parameter->setEType(uml::UmlPackage::eInstance()->getElement_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeSM_LocusContent()
{
	m_sM_Locus_EClass->setName("SM_Locus");
	m_sM_Locus_EClass->setAbstract(false);
	m_sM_Locus_EClass->setInterface(false);
	
	
	
	m_sM_Locus_EOperation_instantiate_Class->setEType(fUML::FUMLPackage::eInstance()->getObject_EClass());
	m_sM_Locus_EOperation_instantiate_Class->setName("instantiate");
	m_sM_Locus_EOperation_instantiate_Class->setLowerBound(1);
	m_sM_Locus_EOperation_instantiate_Class->setUpperBound(1);
	m_sM_Locus_EOperation_instantiate_Class->setUnique(true);
	m_sM_Locus_EOperation_instantiate_Class->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_Locus_EOperation_instantiate_Class);
		parameter->setName("type");
		parameter->setEType(uml::UmlPackage::eInstance()->getClass_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeSM_ObjectContent()
{
	m_sM_Object_EClass->setName("SM_Object");
	m_sM_Object_EClass->setAbstract(false);
	m_sM_Object_EClass->setInterface(false);
	
	
	
	m_sM_Object_EOperation_destroy->setEType(nullptr);
	m_sM_Object_EOperation_destroy->setName("destroy");
	m_sM_Object_EOperation_destroy->setLowerBound(1);
	m_sM_Object_EOperation_destroy->setUpperBound(1);
	m_sM_Object_EOperation_destroy->setUnique(true);
	m_sM_Object_EOperation_destroy->setOrdered(false);
	
	
	m_sM_Object_EOperation_startBehavior_Class_ParameterValue->setEType(nullptr);
	m_sM_Object_EOperation_startBehavior_Class_ParameterValue->setName("startBehavior");
	m_sM_Object_EOperation_startBehavior_Class_ParameterValue->setLowerBound(1);
	m_sM_Object_EOperation_startBehavior_Class_ParameterValue->setUpperBound(1);
	m_sM_Object_EOperation_startBehavior_Class_ParameterValue->setUnique(true);
	m_sM_Object_EOperation_startBehavior_Class_ParameterValue->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_Object_EOperation_startBehavior_Class_ParameterValue);
		parameter->setName("classifier");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_Object_EOperation_startBehavior_Class_ParameterValue);
		parameter->setName("inputs");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeSM_ObjectActivationContent()
{
	m_sM_ObjectActivation_EClass->setName("SM_ObjectActivation");
	m_sM_ObjectActivation_EClass->setAbstract(false);
	m_sM_ObjectActivation_EClass->setInterface(false);
	
	
	m_sM_ObjectActivation_EReference_deferredEventPool->setName("deferredEventPool");
	m_sM_ObjectActivation_EReference_deferredEventPool->setEType(PSSM::PSSMPackage::eInstance()->getDeferredEventOccurrence_EClass());
	m_sM_ObjectActivation_EReference_deferredEventPool->setLowerBound(0);
	m_sM_ObjectActivation_EReference_deferredEventPool->setUpperBound(-1);
	m_sM_ObjectActivation_EReference_deferredEventPool->setTransient(false);
	m_sM_ObjectActivation_EReference_deferredEventPool->setVolatile(false);
	m_sM_ObjectActivation_EReference_deferredEventPool->setChangeable(true);
	m_sM_ObjectActivation_EReference_deferredEventPool->setUnsettable(false);
	m_sM_ObjectActivation_EReference_deferredEventPool->setUnique(true);
	m_sM_ObjectActivation_EReference_deferredEventPool->setDerived(false);
	m_sM_ObjectActivation_EReference_deferredEventPool->setOrdered(false);
	m_sM_ObjectActivation_EReference_deferredEventPool->setContainment(false);
	m_sM_ObjectActivation_EReference_deferredEventPool->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_sM_ObjectActivation_EReference_deferredEventPool->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_sM_ObjectActivation_EReference_deferredEventPool->setEOpposite(otherEnd);
	    }
	}
	
	m_sM_ObjectActivation_EOperation_getDeferredEventInsertionIndex->setEType(types::TypesPackage::eInstance()->getInteger_EDataType());
	m_sM_ObjectActivation_EOperation_getDeferredEventInsertionIndex->setName("getDeferredEventInsertionIndex");
	m_sM_ObjectActivation_EOperation_getDeferredEventInsertionIndex->setLowerBound(1);
	m_sM_ObjectActivation_EOperation_getDeferredEventInsertionIndex->setUpperBound(1);
	m_sM_ObjectActivation_EOperation_getDeferredEventInsertionIndex->setUnique(true);
	m_sM_ObjectActivation_EOperation_getDeferredEventInsertionIndex->setOrdered(false);
	
	
	m_sM_ObjectActivation_EOperation_getNextCompletionEvent->setEType(PSSM::PSSMPackage::eInstance()->getCompletionEventOccurrence_EClass());
	m_sM_ObjectActivation_EOperation_getNextCompletionEvent->setName("getNextCompletionEvent");
	m_sM_ObjectActivation_EOperation_getNextCompletionEvent->setLowerBound(1);
	m_sM_ObjectActivation_EOperation_getNextCompletionEvent->setUpperBound(1);
	m_sM_ObjectActivation_EOperation_getNextCompletionEvent->setUnique(true);
	m_sM_ObjectActivation_EOperation_getNextCompletionEvent->setOrdered(false);
	
	
	m_sM_ObjectActivation_EOperation_getNextEvent->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
	m_sM_ObjectActivation_EOperation_getNextEvent->setName("getNextEvent");
	m_sM_ObjectActivation_EOperation_getNextEvent->setLowerBound(1);
	m_sM_ObjectActivation_EOperation_getNextEvent->setUpperBound(1);
	m_sM_ObjectActivation_EOperation_getNextEvent->setUnique(true);
	m_sM_ObjectActivation_EOperation_getNextEvent->setOrdered(false);
	
	
	m_sM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation->setEType(nullptr);
	m_sM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation->setName("registerCompletionEvent");
	m_sM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation->setLowerBound(1);
	m_sM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation->setUpperBound(1);
	m_sM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation->setUnique(true);
	m_sM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_ObjectActivation_EOperation_registerCompletionEvent_StateActivation);
		parameter->setName("stateActivation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation->setEType(nullptr);
	m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation->setName("registerDeferredEvent");
	m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation->setLowerBound(1);
	m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation->setUpperBound(1);
	m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation->setUnique(true);
	m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_ObjectActivation_EOperation_registerDeferredEvent_EventOccurrence_StateActivation);
		parameter->setName("stateActivation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_sM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation->setEType(nullptr);
	m_sM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation->setName("releaseDeferredEvents");
	m_sM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation->setLowerBound(1);
	m_sM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation->setUpperBound(1);
	m_sM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation->setUnique(true);
	m_sM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_ObjectActivation_EOperation_releaseDeferredEvents_StateActivation);
		parameter->setName("deferringState");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeSM_OpaqueExpressionEvaluationContent()
{
	m_sM_OpaqueExpressionEvaluation_EClass->setName("SM_OpaqueExpressionEvaluation");
	m_sM_OpaqueExpressionEvaluation_EClass->setAbstract(false);
	m_sM_OpaqueExpressionEvaluation_EClass->setInterface(false);
	
	
	m_sM_OpaqueExpressionEvaluation_EReference_context->setName("context");
	m_sM_OpaqueExpressionEvaluation_EReference_context->setEType(fUML::FUMLPackage::eInstance()->getObject_EClass());
	m_sM_OpaqueExpressionEvaluation_EReference_context->setLowerBound(0);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setUpperBound(1);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setTransient(false);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setVolatile(false);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setChangeable(true);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setUnsettable(false);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setUnique(true);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setDerived(false);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setOrdered(false);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setContainment(false);
	m_sM_OpaqueExpressionEvaluation_EReference_context->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_sM_OpaqueExpressionEvaluation_EReference_context->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_sM_OpaqueExpressionEvaluation_EReference_context->setEOpposite(otherEnd);
	    }
	}
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setName("parameterValues");
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setEType(fUML::FUMLPackage::eInstance()->getParameterValue_EClass());
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setLowerBound(0);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setUpperBound(-1);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setTransient(false);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setVolatile(false);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setChangeable(true);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setUnsettable(false);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setUnique(true);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setDerived(false);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setOrdered(false);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setContainment(false);
	m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_sM_OpaqueExpressionEvaluation_EReference_parameterValues->setEOpposite(otherEnd);
	    }
	}
	
	m_sM_OpaqueExpressionEvaluation_EOperation_executeExpressionBehavior->setEType(fUML::FUMLPackage::eInstance()->getValue_EClass());
	m_sM_OpaqueExpressionEvaluation_EOperation_executeExpressionBehavior->setName("executeExpressionBehavior");
	m_sM_OpaqueExpressionEvaluation_EOperation_executeExpressionBehavior->setLowerBound(0);
	m_sM_OpaqueExpressionEvaluation_EOperation_executeExpressionBehavior->setUpperBound(-1);
	m_sM_OpaqueExpressionEvaluation_EOperation_executeExpressionBehavior->setUnique(true);
	m_sM_OpaqueExpressionEvaluation_EOperation_executeExpressionBehavior->setOrdered(false);
	
	
	m_sM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter->setEType(fUML::FUMLPackage::eInstance()->getParameterValue_EClass());
	m_sM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter->setName("getParameterValue");
	m_sM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter->setLowerBound(1);
	m_sM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter->setUpperBound(1);
	m_sM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter->setUnique(true);
	m_sM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_OpaqueExpressionEvaluation_EOperation_getParameterValue_Parameter);
		parameter->setName("parameter");
		parameter->setEType(uml::UmlPackage::eInstance()->getParameter_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_sM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence->setEType(nullptr);
	m_sM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence->setName("initialize");
	m_sM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence->setLowerBound(1);
	m_sM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence->setUpperBound(1);
	m_sM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence->setUnique(true);
	m_sM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_OpaqueExpressionEvaluation_EOperation_initialize_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_sM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue->setEType(nullptr);
	m_sM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue->setName("setParameterValue");
	m_sM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue->setLowerBound(1);
	m_sM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue->setUpperBound(1);
	m_sM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue->setUnique(true);
	m_sM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_OpaqueExpressionEvaluation_EOperation_setParameterValue_ParameterValue);
		parameter->setName("parameterValue");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeSM_ReadSelfActionActivationContent()
{
	m_sM_ReadSelfActionActivation_EClass->setName("SM_ReadSelfActionActivation");
	m_sM_ReadSelfActionActivation_EClass->setAbstract(false);
	m_sM_ReadSelfActionActivation_EClass->setInterface(false);
	
	
	
	m_sM_ReadSelfActionActivation_EOperation_getExecutionContext->setEType(fUML::FUMLPackage::eInstance()->getObject_EClass());
	m_sM_ReadSelfActionActivation_EOperation_getExecutionContext->setName("getExecutionContext");
	m_sM_ReadSelfActionActivation_EOperation_getExecutionContext->setLowerBound(1);
	m_sM_ReadSelfActionActivation_EOperation_getExecutionContext->setUpperBound(1);
	m_sM_ReadSelfActionActivation_EOperation_getExecutionContext->setUnique(true);
	m_sM_ReadSelfActionActivation_EOperation_getExecutionContext->setOrdered(false);
	
	
	
}

void PSSMPackageImpl::initializeSM_RedefinitionBasedDispatchStrategyContent()
{
	m_sM_RedefinitionBasedDispatchStrategy_EClass->setName("SM_RedefinitionBasedDispatchStrategy");
	m_sM_RedefinitionBasedDispatchStrategy_EClass->setAbstract(false);
	m_sM_RedefinitionBasedDispatchStrategy_EClass->setInterface(false);
	
	
	
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation->setEType(fUML::FUMLPackage::eInstance()->getExecution_EClass());
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation->setName("dispatch");
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation->setLowerBound(1);
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation->setUpperBound(1);
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation->setUnique(true);
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation);
		parameter->setName("object");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getObject_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_RedefinitionBasedDispatchStrategy_EOperation_dispatch_Object_Operation);
		parameter->setName("operation");
		parameter->setEType(uml::UmlPackage::eInstance()->getOperation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation->setEType(uml::UmlPackage::eInstance()->getBehavior_EClass());
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation->setName("getMethod");
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation->setLowerBound(1);
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation->setUpperBound(1);
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation->setUnique(true);
	m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation);
		parameter->setName("object");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getObject_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_sM_RedefinitionBasedDispatchStrategy_EOperation_getMethod_Object_Operation);
		parameter->setName("operation");
		parameter->setEType(uml::UmlPackage::eInstance()->getOperation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeShallowHistoryPseudostateActivationContent()
{
	m_shallowHistoryPseudostateActivation_EClass->setName("ShallowHistoryPseudostateActivation");
	m_shallowHistoryPseudostateActivation_EClass->setAbstract(false);
	m_shallowHistoryPseudostateActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeStateActivationContent()
{
	m_stateActivation_EClass->setName("StateActivation");
	m_stateActivation_EClass->setAbstract(false);
	m_stateActivation_EClass->setInterface(false);
	
	m_stateActivation_EAttribute_isDoActivityCompleted = getStateActivation_EAttribute_isDoActivityCompleted();
	m_stateActivation_EAttribute_isDoActivityCompleted->setName("isDoActivityCompleted");
	m_stateActivation_EAttribute_isDoActivityCompleted->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateActivation_EAttribute_isDoActivityCompleted->setLowerBound(1);
	m_stateActivation_EAttribute_isDoActivityCompleted->setUpperBound(1);
	m_stateActivation_EAttribute_isDoActivityCompleted->setTransient(false);
	m_stateActivation_EAttribute_isDoActivityCompleted->setVolatile(false);
	m_stateActivation_EAttribute_isDoActivityCompleted->setChangeable(true);
	m_stateActivation_EAttribute_isDoActivityCompleted->setUnsettable(false);
	m_stateActivation_EAttribute_isDoActivityCompleted->setUnique(true);
	m_stateActivation_EAttribute_isDoActivityCompleted->setDerived(false);
	m_stateActivation_EAttribute_isDoActivityCompleted->setOrdered(false);
	m_stateActivation_EAttribute_isDoActivityCompleted->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_stateActivation_EAttribute_isDoActivityCompleted->setDefaultValueLiteral(defaultValue);
		}
	}
	m_stateActivation_EAttribute_isEntryCompleted = getStateActivation_EAttribute_isEntryCompleted();
	m_stateActivation_EAttribute_isEntryCompleted->setName("isEntryCompleted");
	m_stateActivation_EAttribute_isEntryCompleted->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateActivation_EAttribute_isEntryCompleted->setLowerBound(1);
	m_stateActivation_EAttribute_isEntryCompleted->setUpperBound(1);
	m_stateActivation_EAttribute_isEntryCompleted->setTransient(false);
	m_stateActivation_EAttribute_isEntryCompleted->setVolatile(false);
	m_stateActivation_EAttribute_isEntryCompleted->setChangeable(true);
	m_stateActivation_EAttribute_isEntryCompleted->setUnsettable(false);
	m_stateActivation_EAttribute_isEntryCompleted->setUnique(true);
	m_stateActivation_EAttribute_isEntryCompleted->setDerived(false);
	m_stateActivation_EAttribute_isEntryCompleted->setOrdered(false);
	m_stateActivation_EAttribute_isEntryCompleted->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_stateActivation_EAttribute_isEntryCompleted->setDefaultValueLiteral(defaultValue);
		}
	}
	m_stateActivation_EAttribute_isExitCompleted = getStateActivation_EAttribute_isExitCompleted();
	m_stateActivation_EAttribute_isExitCompleted->setName("isExitCompleted");
	m_stateActivation_EAttribute_isExitCompleted->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateActivation_EAttribute_isExitCompleted->setLowerBound(1);
	m_stateActivation_EAttribute_isExitCompleted->setUpperBound(1);
	m_stateActivation_EAttribute_isExitCompleted->setTransient(false);
	m_stateActivation_EAttribute_isExitCompleted->setVolatile(false);
	m_stateActivation_EAttribute_isExitCompleted->setChangeable(true);
	m_stateActivation_EAttribute_isExitCompleted->setUnsettable(false);
	m_stateActivation_EAttribute_isExitCompleted->setUnique(true);
	m_stateActivation_EAttribute_isExitCompleted->setDerived(false);
	m_stateActivation_EAttribute_isExitCompleted->setOrdered(false);
	m_stateActivation_EAttribute_isExitCompleted->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_stateActivation_EAttribute_isExitCompleted->setDefaultValueLiteral(defaultValue);
		}
	}
	
	m_stateActivation_EReference_connectionPointActivations->setName("connectionPointActivations");
	m_stateActivation_EReference_connectionPointActivations->setEType(getConnectionPointActivation_EClass());
	m_stateActivation_EReference_connectionPointActivations->setLowerBound(0);
	m_stateActivation_EReference_connectionPointActivations->setUpperBound(-1);
	m_stateActivation_EReference_connectionPointActivations->setTransient(false);
	m_stateActivation_EReference_connectionPointActivations->setVolatile(false);
	m_stateActivation_EReference_connectionPointActivations->setChangeable(true);
	m_stateActivation_EReference_connectionPointActivations->setUnsettable(false);
	m_stateActivation_EReference_connectionPointActivations->setUnique(true);
	m_stateActivation_EReference_connectionPointActivations->setDerived(false);
	m_stateActivation_EReference_connectionPointActivations->setOrdered(false);
	m_stateActivation_EReference_connectionPointActivations->setContainment(true);
	m_stateActivation_EReference_connectionPointActivations->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateActivation_EReference_connectionPointActivations->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_stateActivation_EReference_connectionPointActivations->setEOpposite(otherEnd);
	    }
	}
	m_stateActivation_EReference_doActivityContextObject->setName("doActivityContextObject");
	m_stateActivation_EReference_doActivityContextObject->setEType(getDoActivityContextObject_EClass());
	m_stateActivation_EReference_doActivityContextObject->setLowerBound(0);
	m_stateActivation_EReference_doActivityContextObject->setUpperBound(1);
	m_stateActivation_EReference_doActivityContextObject->setTransient(false);
	m_stateActivation_EReference_doActivityContextObject->setVolatile(false);
	m_stateActivation_EReference_doActivityContextObject->setChangeable(true);
	m_stateActivation_EReference_doActivityContextObject->setUnsettable(false);
	m_stateActivation_EReference_doActivityContextObject->setUnique(true);
	m_stateActivation_EReference_doActivityContextObject->setDerived(false);
	m_stateActivation_EReference_doActivityContextObject->setOrdered(false);
	m_stateActivation_EReference_doActivityContextObject->setContainment(false);
	m_stateActivation_EReference_doActivityContextObject->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateActivation_EReference_doActivityContextObject->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getDoActivityContextObject_EReference_owner();
		if (otherEnd != nullptr)
	    {
	   		m_stateActivation_EReference_doActivityContextObject->setEOpposite(otherEnd);
	    }
	}
	m_stateActivation_EReference_regionActivations->setName("regionActivations");
	m_stateActivation_EReference_regionActivations->setEType(getRegionActivation_EClass());
	m_stateActivation_EReference_regionActivations->setLowerBound(0);
	m_stateActivation_EReference_regionActivations->setUpperBound(-1);
	m_stateActivation_EReference_regionActivations->setTransient(false);
	m_stateActivation_EReference_regionActivations->setVolatile(false);
	m_stateActivation_EReference_regionActivations->setChangeable(true);
	m_stateActivation_EReference_regionActivations->setUnsettable(false);
	m_stateActivation_EReference_regionActivations->setUnique(true);
	m_stateActivation_EReference_regionActivations->setDerived(false);
	m_stateActivation_EReference_regionActivations->setOrdered(false);
	m_stateActivation_EReference_regionActivations->setContainment(true);
	m_stateActivation_EReference_regionActivations->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateActivation_EReference_regionActivations->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_stateActivation_EReference_regionActivations->setEOpposite(otherEnd);
	    }
	}
	
	m_stateActivation_EOperation_canDefer_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateActivation_EOperation_canDefer_EventOccurrence->setName("canDefer");
	m_stateActivation_EOperation_canDefer_EventOccurrence->setLowerBound(1);
	m_stateActivation_EOperation_canDefer_EventOccurrence->setUpperBound(1);
	m_stateActivation_EOperation_canDefer_EventOccurrence->setUnique(true);
	m_stateActivation_EOperation_canDefer_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateActivation_EOperation_canDefer_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateActivation_EOperation_defer_EventOccurrence->setEType(nullptr);
	m_stateActivation_EOperation_defer_EventOccurrence->setName("defer");
	m_stateActivation_EOperation_defer_EventOccurrence->setLowerBound(1);
	m_stateActivation_EOperation_defer_EventOccurrence->setUpperBound(1);
	m_stateActivation_EOperation_defer_EventOccurrence->setUnique(true);
	m_stateActivation_EOperation_defer_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateActivation_EOperation_defer_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence->setEType(nullptr);
	m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence->setName("enterRegions");
	m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence->setLowerBound(1);
	m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence->setUpperBound(1);
	m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence->setUnique(true);
	m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence);
		parameter->setName("enteringTransition");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateActivation_EOperation_enterRegions_TransitionActivation_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateActivation_EOperation_getConnectionPointActivation->setEType(getConnectionPointActivation_EClass());
	m_stateActivation_EOperation_getConnectionPointActivation->setName("getConnectionPointActivation");
	m_stateActivation_EOperation_getConnectionPointActivation->setLowerBound(0);
	m_stateActivation_EOperation_getConnectionPointActivation->setUpperBound(-1);
	m_stateActivation_EOperation_getConnectionPointActivation->setUnique(true);
	m_stateActivation_EOperation_getConnectionPointActivation->setOrdered(false);
	
	
	m_stateActivation_EOperation_getConnectionPointActivation_Vertex->setEType(getConnectionPointActivation_EClass());
	m_stateActivation_EOperation_getConnectionPointActivation_Vertex->setName("getConnectionPointActivation");
	m_stateActivation_EOperation_getConnectionPointActivation_Vertex->setLowerBound(0);
	m_stateActivation_EOperation_getConnectionPointActivation_Vertex->setUpperBound(1);
	m_stateActivation_EOperation_getConnectionPointActivation_Vertex->setUnique(true);
	m_stateActivation_EOperation_getConnectionPointActivation_Vertex->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateActivation_EOperation_getConnectionPointActivation_Vertex);
		parameter->setName("vertex");
		parameter->setEType(uml::UmlPackage::eInstance()->getVertex_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateActivation_EOperation_getDoActivity->setEType(uml::UmlPackage::eInstance()->getBehavior_EClass());
	m_stateActivation_EOperation_getDoActivity->setName("getDoActivity");
	m_stateActivation_EOperation_getDoActivity->setLowerBound(1);
	m_stateActivation_EOperation_getDoActivity->setUpperBound(1);
	m_stateActivation_EOperation_getDoActivity->setUnique(true);
	m_stateActivation_EOperation_getDoActivity->setOrdered(false);
	
	
	m_stateActivation_EOperation_getEntry->setEType(uml::UmlPackage::eInstance()->getBehavior_EClass());
	m_stateActivation_EOperation_getEntry->setName("getEntry");
	m_stateActivation_EOperation_getEntry->setLowerBound(1);
	m_stateActivation_EOperation_getEntry->setUpperBound(1);
	m_stateActivation_EOperation_getEntry->setUnique(true);
	m_stateActivation_EOperation_getEntry->setOrdered(false);
	
	
	m_stateActivation_EOperation_getExit->setEType(uml::UmlPackage::eInstance()->getBehavior_EClass());
	m_stateActivation_EOperation_getExit->setName("getExit");
	m_stateActivation_EOperation_getExit->setLowerBound(1);
	m_stateActivation_EOperation_getExit->setUpperBound(1);
	m_stateActivation_EOperation_getExit->setUnique(true);
	m_stateActivation_EOperation_getExit->setOrdered(false);
	
	
	m_stateActivation_EOperation_getFireableTransitions_EventOccurrence->setEType(getTransitionActivation_EClass());
	m_stateActivation_EOperation_getFireableTransitions_EventOccurrence->setName("getFireableTransitions");
	m_stateActivation_EOperation_getFireableTransitions_EventOccurrence->setLowerBound(0);
	m_stateActivation_EOperation_getFireableTransitions_EventOccurrence->setUpperBound(-1);
	m_stateActivation_EOperation_getFireableTransitions_EventOccurrence->setUnique(true);
	m_stateActivation_EOperation_getFireableTransitions_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateActivation_EOperation_getFireableTransitions_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateActivation_EOperation_getRegionActivation->setEType(getRegionActivation_EClass());
	m_stateActivation_EOperation_getRegionActivation->setName("getRegionActivation");
	m_stateActivation_EOperation_getRegionActivation->setLowerBound(0);
	m_stateActivation_EOperation_getRegionActivation->setUpperBound(-1);
	m_stateActivation_EOperation_getRegionActivation->setUnique(true);
	m_stateActivation_EOperation_getRegionActivation->setOrdered(false);
	
	
	m_stateActivation_EOperation_hasCompleted->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateActivation_EOperation_hasCompleted->setName("hasCompleted");
	m_stateActivation_EOperation_hasCompleted->setLowerBound(1);
	m_stateActivation_EOperation_hasCompleted->setUpperBound(1);
	m_stateActivation_EOperation_hasCompleted->setUnique(true);
	m_stateActivation_EOperation_hasCompleted->setOrdered(false);
	
	
	m_stateActivation_EOperation_notifyCompletion->setEType(nullptr);
	m_stateActivation_EOperation_notifyCompletion->setName("notifyCompletion");
	m_stateActivation_EOperation_notifyCompletion->setLowerBound(1);
	m_stateActivation_EOperation_notifyCompletion->setUpperBound(1);
	m_stateActivation_EOperation_notifyCompletion->setUnique(true);
	m_stateActivation_EOperation_notifyCompletion->setOrdered(false);
	
	
	m_stateActivation_EOperation_releaseDeferredEvents->setEType(nullptr);
	m_stateActivation_EOperation_releaseDeferredEvents->setName("releaseDeferredEvents");
	m_stateActivation_EOperation_releaseDeferredEvents->setLowerBound(1);
	m_stateActivation_EOperation_releaseDeferredEvents->setUpperBound(1);
	m_stateActivation_EOperation_releaseDeferredEvents->setUnique(true);
	m_stateActivation_EOperation_releaseDeferredEvents->setOrdered(false);
	
	
	m_stateActivation_EOperation_tryExecuteEntry_EventOccurrence->setEType(nullptr);
	m_stateActivation_EOperation_tryExecuteEntry_EventOccurrence->setName("tryExecuteEntry");
	m_stateActivation_EOperation_tryExecuteEntry_EventOccurrence->setLowerBound(1);
	m_stateActivation_EOperation_tryExecuteEntry_EventOccurrence->setUpperBound(1);
	m_stateActivation_EOperation_tryExecuteEntry_EventOccurrence->setUnique(true);
	m_stateActivation_EOperation_tryExecuteEntry_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateActivation_EOperation_tryExecuteEntry_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateActivation_EOperation_tryExecuteExit_EventOccurrence->setEType(nullptr);
	m_stateActivation_EOperation_tryExecuteExit_EventOccurrence->setName("tryExecuteExit");
	m_stateActivation_EOperation_tryExecuteExit_EventOccurrence->setLowerBound(1);
	m_stateActivation_EOperation_tryExecuteExit_EventOccurrence->setUpperBound(1);
	m_stateActivation_EOperation_tryExecuteExit_EventOccurrence->setUnique(true);
	m_stateActivation_EOperation_tryExecuteExit_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateActivation_EOperation_tryExecuteExit_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateActivation_EOperation_tryInvokeDoActivity_EventOccurrence->setEType(nullptr);
	m_stateActivation_EOperation_tryInvokeDoActivity_EventOccurrence->setName("tryInvokeDoActivity");
	m_stateActivation_EOperation_tryInvokeDoActivity_EventOccurrence->setLowerBound(1);
	m_stateActivation_EOperation_tryInvokeDoActivity_EventOccurrence->setUpperBound(1);
	m_stateActivation_EOperation_tryInvokeDoActivity_EventOccurrence->setUnique(true);
	m_stateActivation_EOperation_tryInvokeDoActivity_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateActivation_EOperation_tryInvokeDoActivity_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeStateConfigurationContent()
{
	m_stateConfiguration_EClass->setName("StateConfiguration");
	m_stateConfiguration_EClass->setAbstract(false);
	m_stateConfiguration_EClass->setInterface(false);
	
	m_stateConfiguration_EAttribute_level = getStateConfiguration_EAttribute_level();
	m_stateConfiguration_EAttribute_level->setName("level");
	m_stateConfiguration_EAttribute_level->setEType(types::TypesPackage::eInstance()->getInteger_EDataType());
	m_stateConfiguration_EAttribute_level->setLowerBound(1);
	m_stateConfiguration_EAttribute_level->setUpperBound(1);
	m_stateConfiguration_EAttribute_level->setTransient(false);
	m_stateConfiguration_EAttribute_level->setVolatile(false);
	m_stateConfiguration_EAttribute_level->setChangeable(true);
	m_stateConfiguration_EAttribute_level->setUnsettable(false);
	m_stateConfiguration_EAttribute_level->setUnique(true);
	m_stateConfiguration_EAttribute_level->setDerived(false);
	m_stateConfiguration_EAttribute_level->setOrdered(false);
	m_stateConfiguration_EAttribute_level->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_stateConfiguration_EAttribute_level->setDefaultValueLiteral(defaultValue);
		}
	}
	
	m_stateConfiguration_EReference_children->setName("children");
	m_stateConfiguration_EReference_children->setEType(getStateConfiguration_EClass());
	m_stateConfiguration_EReference_children->setLowerBound(0);
	m_stateConfiguration_EReference_children->setUpperBound(-1);
	m_stateConfiguration_EReference_children->setTransient(false);
	m_stateConfiguration_EReference_children->setVolatile(false);
	m_stateConfiguration_EReference_children->setChangeable(true);
	m_stateConfiguration_EReference_children->setUnsettable(false);
	m_stateConfiguration_EReference_children->setUnique(true);
	m_stateConfiguration_EReference_children->setDerived(false);
	m_stateConfiguration_EReference_children->setOrdered(false);
	m_stateConfiguration_EReference_children->setContainment(true);
	m_stateConfiguration_EReference_children->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateConfiguration_EReference_children->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_stateConfiguration_EReference_children->setEOpposite(otherEnd);
	    }
	}
	m_stateConfiguration_EReference_completeConfiguration->setName("completeConfiguration");
	m_stateConfiguration_EReference_completeConfiguration->setEType(getStateMachineConfiguration_EClass());
	m_stateConfiguration_EReference_completeConfiguration->setLowerBound(1);
	m_stateConfiguration_EReference_completeConfiguration->setUpperBound(1);
	m_stateConfiguration_EReference_completeConfiguration->setTransient(false);
	m_stateConfiguration_EReference_completeConfiguration->setVolatile(false);
	m_stateConfiguration_EReference_completeConfiguration->setChangeable(true);
	m_stateConfiguration_EReference_completeConfiguration->setUnsettable(false);
	m_stateConfiguration_EReference_completeConfiguration->setUnique(true);
	m_stateConfiguration_EReference_completeConfiguration->setDerived(false);
	m_stateConfiguration_EReference_completeConfiguration->setOrdered(false);
	m_stateConfiguration_EReference_completeConfiguration->setContainment(false);
	m_stateConfiguration_EReference_completeConfiguration->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateConfiguration_EReference_completeConfiguration->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getStateMachineConfiguration_EReference_rootConfiguration();
		if (otherEnd != nullptr)
	    {
	   		m_stateConfiguration_EReference_completeConfiguration->setEOpposite(otherEnd);
	    }
	}
	m_stateConfiguration_EReference_vertexActivation->setName("vertexActivation");
	m_stateConfiguration_EReference_vertexActivation->setEType(getVertexActivation_EClass());
	m_stateConfiguration_EReference_vertexActivation->setLowerBound(1);
	m_stateConfiguration_EReference_vertexActivation->setUpperBound(1);
	m_stateConfiguration_EReference_vertexActivation->setTransient(false);
	m_stateConfiguration_EReference_vertexActivation->setVolatile(false);
	m_stateConfiguration_EReference_vertexActivation->setChangeable(true);
	m_stateConfiguration_EReference_vertexActivation->setUnsettable(false);
	m_stateConfiguration_EReference_vertexActivation->setUnique(true);
	m_stateConfiguration_EReference_vertexActivation->setDerived(false);
	m_stateConfiguration_EReference_vertexActivation->setOrdered(false);
	m_stateConfiguration_EReference_vertexActivation->setContainment(false);
	m_stateConfiguration_EReference_vertexActivation->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateConfiguration_EReference_vertexActivation->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_stateConfiguration_EReference_vertexActivation->setEOpposite(otherEnd);
	    }
	}
	
	m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation->setEType(nullptr);
	m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation->setName("add");
	m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation->setLowerBound(1);
	m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation->setUpperBound(1);
	m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation->setUnique(true);
	m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation);
		parameter->setName("activation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateConfiguration_EOperation_add_VertexActivation_VertexActivation);
		parameter->setName("context");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateConfiguration_EOperation_addChild_VertexActivation->setEType(nullptr);
	m_stateConfiguration_EOperation_addChild_VertexActivation->setName("addChild");
	m_stateConfiguration_EOperation_addChild_VertexActivation->setLowerBound(1);
	m_stateConfiguration_EOperation_addChild_VertexActivation->setUpperBound(1);
	m_stateConfiguration_EOperation_addChild_VertexActivation->setUnique(true);
	m_stateConfiguration_EOperation_addChild_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateConfiguration_EOperation_addChild_VertexActivation);
		parameter->setName("activation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateConfiguration_EOperation_getChildren->setEType(getStateConfiguration_EClass());
	m_stateConfiguration_EOperation_getChildren->setName("getChildren");
	m_stateConfiguration_EOperation_getChildren->setLowerBound(0);
	m_stateConfiguration_EOperation_getChildren->setUpperBound(-1);
	m_stateConfiguration_EOperation_getChildren->setUnique(true);
	m_stateConfiguration_EOperation_getChildren->setOrdered(false);
	
	
	m_stateConfiguration_EOperation_getContext_VertexActivation->setEType(getVertexActivation_EClass());
	m_stateConfiguration_EOperation_getContext_VertexActivation->setName("getContext");
	m_stateConfiguration_EOperation_getContext_VertexActivation->setLowerBound(0);
	m_stateConfiguration_EOperation_getContext_VertexActivation->setUpperBound(-1);
	m_stateConfiguration_EOperation_getContext_VertexActivation->setUnique(true);
	m_stateConfiguration_EOperation_getContext_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateConfiguration_EOperation_getContext_VertexActivation);
		parameter->setName("activation");
		parameter->setEType(getVertexActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateConfiguration_EOperation_getLevel->setEType(types::TypesPackage::eInstance()->getInteger_EDataType());
	m_stateConfiguration_EOperation_getLevel->setName("getLevel");
	m_stateConfiguration_EOperation_getLevel->setLowerBound(1);
	m_stateConfiguration_EOperation_getLevel->setUpperBound(1);
	m_stateConfiguration_EOperation_getLevel->setUnique(true);
	m_stateConfiguration_EOperation_getLevel->setOrdered(false);
	
	
	m_stateConfiguration_EOperation_getParent->setEType(getStateConfiguration_EClass());
	m_stateConfiguration_EOperation_getParent->setName("getParent");
	m_stateConfiguration_EOperation_getParent->setLowerBound(1);
	m_stateConfiguration_EOperation_getParent->setUpperBound(1);
	m_stateConfiguration_EOperation_getParent->setUnique(true);
	m_stateConfiguration_EOperation_getParent->setOrdered(false);
	
	
	m_stateConfiguration_EOperation_getVertexActivation->setEType(getVertexActivation_EClass());
	m_stateConfiguration_EOperation_getVertexActivation->setName("getVertexActivation");
	m_stateConfiguration_EOperation_getVertexActivation->setLowerBound(1);
	m_stateConfiguration_EOperation_getVertexActivation->setUpperBound(1);
	m_stateConfiguration_EOperation_getVertexActivation->setUnique(true);
	m_stateConfiguration_EOperation_getVertexActivation->setOrdered(false);
	
	
	m_stateConfiguration_EOperation_isActive->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateConfiguration_EOperation_isActive->setName("isActive");
	m_stateConfiguration_EOperation_isActive->setLowerBound(1);
	m_stateConfiguration_EOperation_isActive->setUpperBound(1);
	m_stateConfiguration_EOperation_isActive->setUnique(true);
	m_stateConfiguration_EOperation_isActive->setOrdered(false);
	
	
	m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation->setEType(nullptr);
	m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation->setName("remove");
	m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation->setLowerBound(1);
	m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation->setUpperBound(1);
	m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation->setUnique(true);
	m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation);
		parameter->setName("activation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateConfiguration_EOperation_remove_VertexActivation_VertexActivation);
		parameter->setName("context");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateConfiguration_EOperation_removeChild_VertexActivation->setEType(nullptr);
	m_stateConfiguration_EOperation_removeChild_VertexActivation->setName("removeChild");
	m_stateConfiguration_EOperation_removeChild_VertexActivation->setLowerBound(1);
	m_stateConfiguration_EOperation_removeChild_VertexActivation->setUpperBound(1);
	m_stateConfiguration_EOperation_removeChild_VertexActivation->setUnique(true);
	m_stateConfiguration_EOperation_removeChild_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateConfiguration_EOperation_removeChild_VertexActivation);
		parameter->setName("activation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateConfiguration_EOperation_setParent_StateConfiguration->setEType(nullptr);
	m_stateConfiguration_EOperation_setParent_StateConfiguration->setName("setParent");
	m_stateConfiguration_EOperation_setParent_StateConfiguration->setLowerBound(1);
	m_stateConfiguration_EOperation_setParent_StateConfiguration->setUpperBound(1);
	m_stateConfiguration_EOperation_setParent_StateConfiguration->setUnique(true);
	m_stateConfiguration_EOperation_setParent_StateConfiguration->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateConfiguration_EOperation_setParent_StateConfiguration);
		parameter->setName("stateConfiguration");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeStateMachineConfigurationContent()
{
	m_stateMachineConfiguration_EClass->setName("StateMachineConfiguration");
	m_stateMachineConfiguration_EClass->setAbstract(false);
	m_stateMachineConfiguration_EClass->setInterface(false);
	
	
	m_stateMachineConfiguration_EReference_execution->setName("execution");
	m_stateMachineConfiguration_EReference_execution->setEType(getStateMachineExecution_EClass());
	m_stateMachineConfiguration_EReference_execution->setLowerBound(1);
	m_stateMachineConfiguration_EReference_execution->setUpperBound(1);
	m_stateMachineConfiguration_EReference_execution->setTransient(false);
	m_stateMachineConfiguration_EReference_execution->setVolatile(false);
	m_stateMachineConfiguration_EReference_execution->setChangeable(true);
	m_stateMachineConfiguration_EReference_execution->setUnsettable(false);
	m_stateMachineConfiguration_EReference_execution->setUnique(true);
	m_stateMachineConfiguration_EReference_execution->setDerived(false);
	m_stateMachineConfiguration_EReference_execution->setOrdered(false);
	m_stateMachineConfiguration_EReference_execution->setContainment(false);
	m_stateMachineConfiguration_EReference_execution->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateMachineConfiguration_EReference_execution->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getStateMachineExecution_EReference_configuration();
		if (otherEnd != nullptr)
	    {
	   		m_stateMachineConfiguration_EReference_execution->setEOpposite(otherEnd);
	    }
	}
	m_stateMachineConfiguration_EReference_rootConfiguration->setName("rootConfiguration");
	m_stateMachineConfiguration_EReference_rootConfiguration->setEType(getStateConfiguration_EClass());
	m_stateMachineConfiguration_EReference_rootConfiguration->setLowerBound(1);
	m_stateMachineConfiguration_EReference_rootConfiguration->setUpperBound(1);
	m_stateMachineConfiguration_EReference_rootConfiguration->setTransient(false);
	m_stateMachineConfiguration_EReference_rootConfiguration->setVolatile(false);
	m_stateMachineConfiguration_EReference_rootConfiguration->setChangeable(true);
	m_stateMachineConfiguration_EReference_rootConfiguration->setUnsettable(false);
	m_stateMachineConfiguration_EReference_rootConfiguration->setUnique(true);
	m_stateMachineConfiguration_EReference_rootConfiguration->setDerived(false);
	m_stateMachineConfiguration_EReference_rootConfiguration->setOrdered(false);
	m_stateMachineConfiguration_EReference_rootConfiguration->setContainment(false);
	m_stateMachineConfiguration_EReference_rootConfiguration->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateMachineConfiguration_EReference_rootConfiguration->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getStateConfiguration_EReference_completeConfiguration();
		if (otherEnd != nullptr)
	    {
	   		m_stateMachineConfiguration_EReference_rootConfiguration->setEOpposite(otherEnd);
	    }
	}
	
	m_stateMachineConfiguration_EOperation__register_StateActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineConfiguration_EOperation__register_StateActivation->setName("_register");
	m_stateMachineConfiguration_EOperation__register_StateActivation->setLowerBound(1);
	m_stateMachineConfiguration_EOperation__register_StateActivation->setUpperBound(1);
	m_stateMachineConfiguration_EOperation__register_StateActivation->setUnique(true);
	m_stateMachineConfiguration_EOperation__register_StateActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineConfiguration_EOperation__register_StateActivation);
		parameter->setName("stateActivation");
		parameter->setEType(getStateActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineConfiguration_EOperation_add_VertexActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineConfiguration_EOperation_add_VertexActivation->setName("add");
	m_stateMachineConfiguration_EOperation_add_VertexActivation->setLowerBound(1);
	m_stateMachineConfiguration_EOperation_add_VertexActivation->setUpperBound(1);
	m_stateMachineConfiguration_EOperation_add_VertexActivation->setUnique(true);
	m_stateMachineConfiguration_EOperation_add_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineConfiguration_EOperation_add_VertexActivation);
		parameter->setName("activation");
		parameter->setEType(getVertexActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineConfiguration_EOperation_getExecution->setEType(getStateMachineExecution_EClass());
	m_stateMachineConfiguration_EOperation_getExecution->setName("getExecution");
	m_stateMachineConfiguration_EOperation_getExecution->setLowerBound(1);
	m_stateMachineConfiguration_EOperation_getExecution->setUpperBound(1);
	m_stateMachineConfiguration_EOperation_getExecution->setUnique(true);
	m_stateMachineConfiguration_EOperation_getExecution->setOrdered(false);
	
	
	m_stateMachineConfiguration_EOperation_getRoot->setEType(getStateConfiguration_EClass());
	m_stateMachineConfiguration_EOperation_getRoot->setName("getRoot");
	m_stateMachineConfiguration_EOperation_getRoot->setLowerBound(1);
	m_stateMachineConfiguration_EOperation_getRoot->setUpperBound(1);
	m_stateMachineConfiguration_EOperation_getRoot->setUnique(true);
	m_stateMachineConfiguration_EOperation_getRoot->setOrdered(false);
	
	
	m_stateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer->setEType(getVertexActivation_EClass());
	m_stateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer->setName("getVertexActivationsAtLevel");
	m_stateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer->setLowerBound(0);
	m_stateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer->setUpperBound(-1);
	m_stateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer->setUnique(true);
	m_stateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineConfiguration_EOperation_getVertexActivationsAtLevel_Integer);
		parameter->setName("level");
		parameter->setEType(types::TypesPackage::eInstance()->getInteger_EDataType());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineConfiguration_EOperation_isActive_VertexActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineConfiguration_EOperation_isActive_VertexActivation->setName("isActive");
	m_stateMachineConfiguration_EOperation_isActive_VertexActivation->setLowerBound(1);
	m_stateMachineConfiguration_EOperation_isActive_VertexActivation->setUpperBound(1);
	m_stateMachineConfiguration_EOperation_isActive_VertexActivation->setUnique(true);
	m_stateMachineConfiguration_EOperation_isActive_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineConfiguration_EOperation_isActive_VertexActivation);
		parameter->setName("activation");
		parameter->setEType(getVertexActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineConfiguration_EOperation_isStable->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineConfiguration_EOperation_isStable->setName("isStable");
	m_stateMachineConfiguration_EOperation_isStable->setLowerBound(1);
	m_stateMachineConfiguration_EOperation_isStable->setUpperBound(1);
	m_stateMachineConfiguration_EOperation_isStable->setUnique(true);
	m_stateMachineConfiguration_EOperation_isStable->setOrdered(false);
	
	
	m_stateMachineConfiguration_EOperation_remove_VertexActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineConfiguration_EOperation_remove_VertexActivation->setName("remove");
	m_stateMachineConfiguration_EOperation_remove_VertexActivation->setLowerBound(1);
	m_stateMachineConfiguration_EOperation_remove_VertexActivation->setUpperBound(1);
	m_stateMachineConfiguration_EOperation_remove_VertexActivation->setUnique(true);
	m_stateMachineConfiguration_EOperation_remove_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineConfiguration_EOperation_remove_VertexActivation);
		parameter->setName("vertexActivation");
		parameter->setEType(getVertexActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineConfiguration_EOperation_unregister_StateActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineConfiguration_EOperation_unregister_StateActivation->setName("unregister");
	m_stateMachineConfiguration_EOperation_unregister_StateActivation->setLowerBound(1);
	m_stateMachineConfiguration_EOperation_unregister_StateActivation->setUpperBound(1);
	m_stateMachineConfiguration_EOperation_unregister_StateActivation->setUnique(true);
	m_stateMachineConfiguration_EOperation_unregister_StateActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineConfiguration_EOperation_unregister_StateActivation);
		parameter->setName("stateActivation");
		parameter->setEType(getStateActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeStateMachineEventAccepterContent()
{
	m_stateMachineEventAccepter_EClass->setName("StateMachineEventAccepter");
	m_stateMachineEventAccepter_EClass->setAbstract(false);
	m_stateMachineEventAccepter_EClass->setInterface(false);
	
	
	m_stateMachineEventAccepter_EReference_registrationContext->setName("registrationContext");
	m_stateMachineEventAccepter_EReference_registrationContext->setEType(getStateMachineExecution_EClass());
	m_stateMachineEventAccepter_EReference_registrationContext->setLowerBound(1);
	m_stateMachineEventAccepter_EReference_registrationContext->setUpperBound(1);
	m_stateMachineEventAccepter_EReference_registrationContext->setTransient(false);
	m_stateMachineEventAccepter_EReference_registrationContext->setVolatile(false);
	m_stateMachineEventAccepter_EReference_registrationContext->setChangeable(true);
	m_stateMachineEventAccepter_EReference_registrationContext->setUnsettable(false);
	m_stateMachineEventAccepter_EReference_registrationContext->setUnique(true);
	m_stateMachineEventAccepter_EReference_registrationContext->setDerived(false);
	m_stateMachineEventAccepter_EReference_registrationContext->setOrdered(false);
	m_stateMachineEventAccepter_EReference_registrationContext->setContainment(false);
	m_stateMachineEventAccepter_EReference_registrationContext->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateMachineEventAccepter_EReference_registrationContext->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_stateMachineEventAccepter_EReference_registrationContext->setEOpposite(otherEnd);
	    }
	}
	
	m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration->setName("_defer");
	m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration->setLowerBound(1);
	m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration->setUpperBound(1);
	m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration->setUnique(true);
	m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation__defer_EventOccurrence_StateConfiguration);
		parameter->setName("stateConfiguration");
		parameter->setEType(getStateConfiguration_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration->setName("_isDeferred");
	m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration->setLowerBound(1);
	m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration->setUpperBound(1);
	m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration->setUnique(true);
	m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation__isDeferred_EventOccurrence_StateConfiguration);
		parameter->setName("stateConfiguration");
		parameter->setEType(getStateConfiguration_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration->setEType(getTransitionActivation_EClass());
	m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration->setName("_select");
	m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration->setLowerBound(0);
	m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration->setUpperBound(-1);
	m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration->setUnique(true);
	m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation__select_EventOccurrence_StateConfiguration);
		parameter->setName("stateConfiguration");
		parameter->setEType(getStateConfiguration_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineEventAccepter_EOperation_accept_EventOccurrence->setEType(nullptr);
	m_stateMachineEventAccepter_EOperation_accept_EventOccurrence->setName("accept");
	m_stateMachineEventAccepter_EOperation_accept_EventOccurrence->setLowerBound(1);
	m_stateMachineEventAccepter_EOperation_accept_EventOccurrence->setUpperBound(1);
	m_stateMachineEventAccepter_EOperation_accept_EventOccurrence->setUnique(true);
	m_stateMachineEventAccepter_EOperation_accept_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation_accept_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineEventAccepter_EOperation_defer_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineEventAccepter_EOperation_defer_EventOccurrence->setName("defer");
	m_stateMachineEventAccepter_EOperation_defer_EventOccurrence->setLowerBound(1);
	m_stateMachineEventAccepter_EOperation_defer_EventOccurrence->setUpperBound(1);
	m_stateMachineEventAccepter_EOperation_defer_EventOccurrence->setUnique(true);
	m_stateMachineEventAccepter_EOperation_defer_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation_defer_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineEventAccepter_EOperation_isDeferred_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineEventAccepter_EOperation_isDeferred_EventOccurrence->setName("isDeferred");
	m_stateMachineEventAccepter_EOperation_isDeferred_EventOccurrence->setLowerBound(1);
	m_stateMachineEventAccepter_EOperation_isDeferred_EventOccurrence->setUpperBound(1);
	m_stateMachineEventAccepter_EOperation_isDeferred_EventOccurrence->setUnique(true);
	m_stateMachineEventAccepter_EOperation_isDeferred_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation_isDeferred_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineEventAccepter_EOperation_isTriggering_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineEventAccepter_EOperation_isTriggering_EventOccurrence->setName("isTriggering");
	m_stateMachineEventAccepter_EOperation_isTriggering_EventOccurrence->setLowerBound(1);
	m_stateMachineEventAccepter_EOperation_isTriggering_EventOccurrence->setUpperBound(1);
	m_stateMachineEventAccepter_EOperation_isTriggering_EventOccurrence->setUnique(true);
	m_stateMachineEventAccepter_EOperation_isTriggering_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation_isTriggering_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineEventAccepter_EOperation_match_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineEventAccepter_EOperation_match_EventOccurrence->setName("match");
	m_stateMachineEventAccepter_EOperation_match_EventOccurrence->setLowerBound(1);
	m_stateMachineEventAccepter_EOperation_match_EventOccurrence->setUpperBound(1);
	m_stateMachineEventAccepter_EOperation_match_EventOccurrence->setUnique(true);
	m_stateMachineEventAccepter_EOperation_match_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation_match_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineEventAccepter_EOperation_select_EventOccurrence->setEType(getTransitionActivation_EClass());
	m_stateMachineEventAccepter_EOperation_select_EventOccurrence->setName("select");
	m_stateMachineEventAccepter_EOperation_select_EventOccurrence->setLowerBound(0);
	m_stateMachineEventAccepter_EOperation_select_EventOccurrence->setUpperBound(-1);
	m_stateMachineEventAccepter_EOperation_select_EventOccurrence->setUnique(true);
	m_stateMachineEventAccepter_EOperation_select_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineEventAccepter_EOperation_select_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeStateMachineExecutionContent()
{
	m_stateMachineExecution_EClass->setName("StateMachineExecution");
	m_stateMachineExecution_EClass->setAbstract(false);
	m_stateMachineExecution_EClass->setInterface(false);
	
	
	m_stateMachineExecution_EReference_configuration->setName("configuration");
	m_stateMachineExecution_EReference_configuration->setEType(getStateMachineConfiguration_EClass());
	m_stateMachineExecution_EReference_configuration->setLowerBound(1);
	m_stateMachineExecution_EReference_configuration->setUpperBound(1);
	m_stateMachineExecution_EReference_configuration->setTransient(false);
	m_stateMachineExecution_EReference_configuration->setVolatile(false);
	m_stateMachineExecution_EReference_configuration->setChangeable(true);
	m_stateMachineExecution_EReference_configuration->setUnsettable(false);
	m_stateMachineExecution_EReference_configuration->setUnique(true);
	m_stateMachineExecution_EReference_configuration->setDerived(false);
	m_stateMachineExecution_EReference_configuration->setOrdered(false);
	m_stateMachineExecution_EReference_configuration->setContainment(true);
	m_stateMachineExecution_EReference_configuration->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateMachineExecution_EReference_configuration->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getStateMachineConfiguration_EReference_execution();
		if (otherEnd != nullptr)
	    {
	   		m_stateMachineExecution_EReference_configuration->setEOpposite(otherEnd);
	    }
	}
	m_stateMachineExecution_EReference_regionActivations->setName("regionActivations");
	m_stateMachineExecution_EReference_regionActivations->setEType(getRegionActivation_EClass());
	m_stateMachineExecution_EReference_regionActivations->setLowerBound(1);
	m_stateMachineExecution_EReference_regionActivations->setUpperBound(-1);
	m_stateMachineExecution_EReference_regionActivations->setTransient(false);
	m_stateMachineExecution_EReference_regionActivations->setVolatile(false);
	m_stateMachineExecution_EReference_regionActivations->setChangeable(true);
	m_stateMachineExecution_EReference_regionActivations->setUnsettable(false);
	m_stateMachineExecution_EReference_regionActivations->setUnique(true);
	m_stateMachineExecution_EReference_regionActivations->setDerived(false);
	m_stateMachineExecution_EReference_regionActivations->setOrdered(false);
	m_stateMachineExecution_EReference_regionActivations->setContainment(true);
	m_stateMachineExecution_EReference_regionActivations->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateMachineExecution_EReference_regionActivations->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_stateMachineExecution_EReference_regionActivations->setEOpposite(otherEnd);
	    }
	}
	
	m_stateMachineExecution_EOperation_execute->setEType(nullptr);
	m_stateMachineExecution_EOperation_execute->setName("execute");
	m_stateMachineExecution_EOperation_execute->setLowerBound(1);
	m_stateMachineExecution_EOperation_execute->setUpperBound(1);
	m_stateMachineExecution_EOperation_execute->setUnique(true);
	m_stateMachineExecution_EOperation_execute->setOrdered(false);
	
	
	m_stateMachineExecution_EOperation_getConfiguration->setEType(nullptr);
	m_stateMachineExecution_EOperation_getConfiguration->setName("getConfiguration");
	m_stateMachineExecution_EOperation_getConfiguration->setLowerBound(1);
	m_stateMachineExecution_EOperation_getConfiguration->setUpperBound(1);
	m_stateMachineExecution_EOperation_getConfiguration->setUnique(true);
	m_stateMachineExecution_EOperation_getConfiguration->setOrdered(false);
	
	
	m_stateMachineExecution_EOperation_getRegionActivation->setEType(getRegionActivation_EClass());
	m_stateMachineExecution_EOperation_getRegionActivation->setName("getRegionActivation");
	m_stateMachineExecution_EOperation_getRegionActivation->setLowerBound(1);
	m_stateMachineExecution_EOperation_getRegionActivation->setUpperBound(-1);
	m_stateMachineExecution_EOperation_getRegionActivation->setUnique(true);
	m_stateMachineExecution_EOperation_getRegionActivation->setOrdered(false);
	
	
	m_stateMachineExecution_EOperation_getVertexActivation_Vertex->setEType(getVertexActivation_EClass());
	m_stateMachineExecution_EOperation_getVertexActivation_Vertex->setName("getVertexActivation");
	m_stateMachineExecution_EOperation_getVertexActivation_Vertex->setLowerBound(1);
	m_stateMachineExecution_EOperation_getVertexActivation_Vertex->setUpperBound(1);
	m_stateMachineExecution_EOperation_getVertexActivation_Vertex->setUnique(true);
	m_stateMachineExecution_EOperation_getVertexActivation_Vertex->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineExecution_EOperation_getVertexActivation_Vertex);
		parameter->setName("vertex");
		parameter->setEType(uml::UmlPackage::eInstance()->getVertex_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineExecution_EOperation_initRegions->setEType(nullptr);
	m_stateMachineExecution_EOperation_initRegions->setName("initRegions");
	m_stateMachineExecution_EOperation_initRegions->setLowerBound(1);
	m_stateMachineExecution_EOperation_initRegions->setUpperBound(1);
	m_stateMachineExecution_EOperation_initRegions->setUnique(true);
	m_stateMachineExecution_EOperation_initRegions->setOrdered(false);
	
	
	m_stateMachineExecution_EOperation_new_->setEType(fUML::FUMLPackage::eInstance()->getValue_EClass());
	m_stateMachineExecution_EOperation_new_->setName("new_");
	m_stateMachineExecution_EOperation_new_->setLowerBound(1);
	m_stateMachineExecution_EOperation_new_->setUpperBound(1);
	m_stateMachineExecution_EOperation_new_->setUnique(true);
	m_stateMachineExecution_EOperation_new_->setOrdered(false);
	
	
	m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue->setEType(nullptr);
	m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue->setName("startBehavior");
	m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue->setLowerBound(1);
	m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue->setUpperBound(1);
	m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue->setUnique(true);
	m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue);
		parameter->setName("classifier");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineExecution_EOperation_startBehavior_Class_ParameterValue);
		parameter->setName("inputs");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineExecution_EOperation_terminate->setEType(nullptr);
	m_stateMachineExecution_EOperation_terminate->setName("terminate");
	m_stateMachineExecution_EOperation_terminate->setLowerBound(1);
	m_stateMachineExecution_EOperation_terminate->setUpperBound(1);
	m_stateMachineExecution_EOperation_terminate->setUnique(true);
	m_stateMachineExecution_EOperation_terminate->setOrdered(false);
	
	
	
}

void PSSMPackageImpl::initializeStateMachineSemanticVisitorContent()
{
	m_stateMachineSemanticVisitor_EClass->setName("StateMachineSemanticVisitor");
	m_stateMachineSemanticVisitor_EClass->setAbstract(true);
	m_stateMachineSemanticVisitor_EClass->setInterface(false);
	
	
	m_stateMachineSemanticVisitor_EReference_node->setName("node");
	m_stateMachineSemanticVisitor_EReference_node->setEType(uml::UmlPackage::eInstance()->getNamedElement_EClass());
	m_stateMachineSemanticVisitor_EReference_node->setLowerBound(1);
	m_stateMachineSemanticVisitor_EReference_node->setUpperBound(1);
	m_stateMachineSemanticVisitor_EReference_node->setTransient(false);
	m_stateMachineSemanticVisitor_EReference_node->setVolatile(false);
	m_stateMachineSemanticVisitor_EReference_node->setChangeable(true);
	m_stateMachineSemanticVisitor_EReference_node->setUnsettable(false);
	m_stateMachineSemanticVisitor_EReference_node->setUnique(true);
	m_stateMachineSemanticVisitor_EReference_node->setDerived(false);
	m_stateMachineSemanticVisitor_EReference_node->setOrdered(false);
	m_stateMachineSemanticVisitor_EReference_node->setContainment(false);
	m_stateMachineSemanticVisitor_EReference_node->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateMachineSemanticVisitor_EReference_node->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_stateMachineSemanticVisitor_EReference_node->setEOpposite(otherEnd);
	    }
	}
	m_stateMachineSemanticVisitor_EReference_parent->setName("parent");
	m_stateMachineSemanticVisitor_EReference_parent->setEType(fUML::FUMLPackage::eInstance()->getSemanticVisitor_EClass());
	m_stateMachineSemanticVisitor_EReference_parent->setLowerBound(0);
	m_stateMachineSemanticVisitor_EReference_parent->setUpperBound(1);
	m_stateMachineSemanticVisitor_EReference_parent->setTransient(false);
	m_stateMachineSemanticVisitor_EReference_parent->setVolatile(false);
	m_stateMachineSemanticVisitor_EReference_parent->setChangeable(true);
	m_stateMachineSemanticVisitor_EReference_parent->setUnsettable(false);
	m_stateMachineSemanticVisitor_EReference_parent->setUnique(true);
	m_stateMachineSemanticVisitor_EReference_parent->setDerived(false);
	m_stateMachineSemanticVisitor_EReference_parent->setOrdered(false);
	m_stateMachineSemanticVisitor_EReference_parent->setContainment(false);
	m_stateMachineSemanticVisitor_EReference_parent->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_stateMachineSemanticVisitor_EReference_parent->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_stateMachineSemanticVisitor_EReference_parent->setEOpposite(otherEnd);
	    }
	}
	
	m_stateMachineSemanticVisitor_EOperation_activate->setEType(nullptr);
	m_stateMachineSemanticVisitor_EOperation_activate->setName("activate");
	m_stateMachineSemanticVisitor_EOperation_activate->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_activate->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_activate->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_activate->setOrdered(false);
	
	
	m_stateMachineSemanticVisitor_EOperation_activateTransitions->setEType(nullptr);
	m_stateMachineSemanticVisitor_EOperation_activateTransitions->setName("activateTransitions");
	m_stateMachineSemanticVisitor_EOperation_activateTransitions->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_activateTransitions->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_activateTransitions->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_activateTransitions->setOrdered(false);
	
	
	m_stateMachineSemanticVisitor_EOperation_getContextChain->setEType(fUML::FUMLPackage::eInstance()->getSemanticVisitor_EClass());
	m_stateMachineSemanticVisitor_EOperation_getContextChain->setName("getContextChain");
	m_stateMachineSemanticVisitor_EOperation_getContextChain->setLowerBound(0);
	m_stateMachineSemanticVisitor_EOperation_getContextChain->setUpperBound(-1);
	m_stateMachineSemanticVisitor_EOperation_getContextChain->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_getContextChain->setOrdered(false);
	
	
	m_stateMachineSemanticVisitor_EOperation_getExecutionContext->setEType(fUML::FUMLPackage::eInstance()->getObject_EClass());
	m_stateMachineSemanticVisitor_EOperation_getExecutionContext->setName("getExecutionContext");
	m_stateMachineSemanticVisitor_EOperation_getExecutionContext->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_getExecutionContext->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_getExecutionContext->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_getExecutionContext->setOrdered(false);
	
	
	m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence->setEType(ecore::EcorePackage::eInstance()->getEJavaObject_EDataType());
	m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence->setName("getExecutionFor");
	m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence);
		parameter->setName("behavior");
		parameter->setEType(uml::UmlPackage::eInstance()->getBehavior_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineSemanticVisitor_EOperation_getExecutionFor_Behavior_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineSemanticVisitor_EOperation_getExecutionLocus->setEType(fUML::FUMLPackage::eInstance()->getLocus_EClass());
	m_stateMachineSemanticVisitor_EOperation_getExecutionLocus->setName("getExecutionLocus");
	m_stateMachineSemanticVisitor_EOperation_getExecutionLocus->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_getExecutionLocus->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_getExecutionLocus->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_getExecutionLocus->setOrdered(false);
	
	
	m_stateMachineSemanticVisitor_EOperation_getNode->setEType(uml::UmlPackage::eInstance()->getNamedElement_EClass());
	m_stateMachineSemanticVisitor_EOperation_getNode->setName("getNode");
	m_stateMachineSemanticVisitor_EOperation_getNode->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_getNode->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_getNode->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_getNode->setOrdered(false);
	
	
	m_stateMachineSemanticVisitor_EOperation_getParent->setEType(fUML::FUMLPackage::eInstance()->getSemanticVisitor_EClass());
	m_stateMachineSemanticVisitor_EOperation_getParent->setName("getParent");
	m_stateMachineSemanticVisitor_EOperation_getParent->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_getParent->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_getParent->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_getParent->setOrdered(false);
	
	
	m_stateMachineSemanticVisitor_EOperation_getStateMachineExecution->setEType(fUML::FUMLPackage::eInstance()->getExecution_EClass());
	m_stateMachineSemanticVisitor_EOperation_getStateMachineExecution->setName("getStateMachineExecution");
	m_stateMachineSemanticVisitor_EOperation_getStateMachineExecution->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_getStateMachineExecution->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_getStateMachineExecution->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_getStateMachineExecution->setOrdered(false);
	
	
	m_stateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement->setName("isVisitorFor");
	m_stateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineSemanticVisitor_EOperation_isVisitorFor_NamedElement);
		parameter->setName("node");
		parameter->setEType(uml::UmlPackage::eInstance()->getNamedElement_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger->setName("match");
	m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineSemanticVisitor_EOperation_match_EventOccurrence_Trigger);
		parameter->setName("triggers");
		parameter->setEType(uml::UmlPackage::eInstance()->getTrigger_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineSemanticVisitor_EOperation_setNode_NamedElement->setEType(nullptr);
	m_stateMachineSemanticVisitor_EOperation_setNode_NamedElement->setName("setNode");
	m_stateMachineSemanticVisitor_EOperation_setNode_NamedElement->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_setNode_NamedElement->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_setNode_NamedElement->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_setNode_NamedElement->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineSemanticVisitor_EOperation_setNode_NamedElement);
		parameter->setName("_");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_stateMachineSemanticVisitor_EOperation_setParent_EJavaObject->setEType(fUML::FUMLPackage::eInstance()->getSemanticVisitor_EClass());
	m_stateMachineSemanticVisitor_EOperation_setParent_EJavaObject->setName("setParent");
	m_stateMachineSemanticVisitor_EOperation_setParent_EJavaObject->setLowerBound(1);
	m_stateMachineSemanticVisitor_EOperation_setParent_EJavaObject->setUpperBound(1);
	m_stateMachineSemanticVisitor_EOperation_setParent_EJavaObject->setUnique(true);
	m_stateMachineSemanticVisitor_EOperation_setParent_EJavaObject->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_stateMachineSemanticVisitor_EOperation_setParent_EJavaObject);
		parameter->setName("parent");
		parameter->setEType(ecore::EcorePackage::eInstance()->getEJavaObject_EDataType());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeTerminatePseudostateActivationContent()
{
	m_terminatePseudostateActivation_EClass->setName("TerminatePseudostateActivation");
	m_terminatePseudostateActivation_EClass->setAbstract(false);
	m_terminatePseudostateActivation_EClass->setInterface(false);
	
	
	
	
}

void PSSMPackageImpl::initializeTransitionActivationContent()
{
	m_transitionActivation_EClass->setName("TransitionActivation");
	m_transitionActivation_EClass->setAbstract(true);
	m_transitionActivation_EClass->setInterface(false);
	
	m_transitionActivation_EAttribute_analyticalStatus = getTransitionActivation_EAttribute_analyticalStatus();
	m_transitionActivation_EAttribute_analyticalStatus->setName("analyticalStatus");
	m_transitionActivation_EAttribute_analyticalStatus->setEType(getTransitionMetadata_EEnum());
	m_transitionActivation_EAttribute_analyticalStatus->setLowerBound(1);
	m_transitionActivation_EAttribute_analyticalStatus->setUpperBound(1);
	m_transitionActivation_EAttribute_analyticalStatus->setTransient(false);
	m_transitionActivation_EAttribute_analyticalStatus->setVolatile(false);
	m_transitionActivation_EAttribute_analyticalStatus->setChangeable(true);
	m_transitionActivation_EAttribute_analyticalStatus->setUnsettable(false);
	m_transitionActivation_EAttribute_analyticalStatus->setUnique(true);
	m_transitionActivation_EAttribute_analyticalStatus->setDerived(false);
	m_transitionActivation_EAttribute_analyticalStatus->setOrdered(false);
	m_transitionActivation_EAttribute_analyticalStatus->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_transitionActivation_EAttribute_analyticalStatus->setDefaultValueLiteral(defaultValue);
		}
	}
	m_transitionActivation_EAttribute_lastPropagation = getTransitionActivation_EAttribute_lastPropagation();
	m_transitionActivation_EAttribute_lastPropagation->setName("lastPropagation");
	m_transitionActivation_EAttribute_lastPropagation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_transitionActivation_EAttribute_lastPropagation->setLowerBound(1);
	m_transitionActivation_EAttribute_lastPropagation->setUpperBound(1);
	m_transitionActivation_EAttribute_lastPropagation->setTransient(false);
	m_transitionActivation_EAttribute_lastPropagation->setVolatile(false);
	m_transitionActivation_EAttribute_lastPropagation->setChangeable(true);
	m_transitionActivation_EAttribute_lastPropagation->setUnsettable(false);
	m_transitionActivation_EAttribute_lastPropagation->setUnique(true);
	m_transitionActivation_EAttribute_lastPropagation->setDerived(false);
	m_transitionActivation_EAttribute_lastPropagation->setOrdered(false);
	m_transitionActivation_EAttribute_lastPropagation->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_transitionActivation_EAttribute_lastPropagation->setDefaultValueLiteral(defaultValue);
		}
	}
	m_transitionActivation_EAttribute_status = getTransitionActivation_EAttribute_status();
	m_transitionActivation_EAttribute_status->setName("status");
	m_transitionActivation_EAttribute_status->setEType(getTransitionMetadata_EEnum());
	m_transitionActivation_EAttribute_status->setLowerBound(1);
	m_transitionActivation_EAttribute_status->setUpperBound(1);
	m_transitionActivation_EAttribute_status->setTransient(false);
	m_transitionActivation_EAttribute_status->setVolatile(false);
	m_transitionActivation_EAttribute_status->setChangeable(true);
	m_transitionActivation_EAttribute_status->setUnsettable(false);
	m_transitionActivation_EAttribute_status->setUnique(true);
	m_transitionActivation_EAttribute_status->setDerived(false);
	m_transitionActivation_EAttribute_status->setOrdered(false);
	m_transitionActivation_EAttribute_status->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_transitionActivation_EAttribute_status->setDefaultValueLiteral(defaultValue);
		}
	}
	
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setName("lastTriggeringEventOccurrence");
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setLowerBound(0);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setUpperBound(1);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setTransient(false);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setVolatile(false);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setChangeable(true);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setUnsettable(false);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setUnique(true);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setDerived(false);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setOrdered(false);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setContainment(false);
	m_transitionActivation_EReference_lastTriggeringEventOccurrence->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_transitionActivation_EReference_lastTriggeringEventOccurrence->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_transitionActivation_EReference_lastTriggeringEventOccurrence->setEOpposite(otherEnd);
	    }
	}
	m_transitionActivation_EReference_leastCommonAncestor->setName("leastCommonAncestor");
	m_transitionActivation_EReference_leastCommonAncestor->setEType(getRegionActivation_EClass());
	m_transitionActivation_EReference_leastCommonAncestor->setLowerBound(1);
	m_transitionActivation_EReference_leastCommonAncestor->setUpperBound(1);
	m_transitionActivation_EReference_leastCommonAncestor->setTransient(false);
	m_transitionActivation_EReference_leastCommonAncestor->setVolatile(false);
	m_transitionActivation_EReference_leastCommonAncestor->setChangeable(true);
	m_transitionActivation_EReference_leastCommonAncestor->setUnsettable(false);
	m_transitionActivation_EReference_leastCommonAncestor->setUnique(true);
	m_transitionActivation_EReference_leastCommonAncestor->setDerived(false);
	m_transitionActivation_EReference_leastCommonAncestor->setOrdered(false);
	m_transitionActivation_EReference_leastCommonAncestor->setContainment(false);
	m_transitionActivation_EReference_leastCommonAncestor->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_transitionActivation_EReference_leastCommonAncestor->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = nullptr;
		if (otherEnd != nullptr)
	    {
	   		m_transitionActivation_EReference_leastCommonAncestor->setEOpposite(otherEnd);
	    }
	}
	m_transitionActivation_EReference_sourceVertexActivation->setName("sourceVertexActivation");
	m_transitionActivation_EReference_sourceVertexActivation->setEType(getVertexActivation_EClass());
	m_transitionActivation_EReference_sourceVertexActivation->setLowerBound(1);
	m_transitionActivation_EReference_sourceVertexActivation->setUpperBound(1);
	m_transitionActivation_EReference_sourceVertexActivation->setTransient(false);
	m_transitionActivation_EReference_sourceVertexActivation->setVolatile(false);
	m_transitionActivation_EReference_sourceVertexActivation->setChangeable(true);
	m_transitionActivation_EReference_sourceVertexActivation->setUnsettable(false);
	m_transitionActivation_EReference_sourceVertexActivation->setUnique(true);
	m_transitionActivation_EReference_sourceVertexActivation->setDerived(false);
	m_transitionActivation_EReference_sourceVertexActivation->setOrdered(false);
	m_transitionActivation_EReference_sourceVertexActivation->setContainment(false);
	m_transitionActivation_EReference_sourceVertexActivation->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_transitionActivation_EReference_sourceVertexActivation->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getVertexActivation_EReference_outgoingTransitionActivations();
		if (otherEnd != nullptr)
	    {
	   		m_transitionActivation_EReference_sourceVertexActivation->setEOpposite(otherEnd);
	    }
	}
	m_transitionActivation_EReference_targetVertexActivation->setName("targetVertexActivation");
	m_transitionActivation_EReference_targetVertexActivation->setEType(getVertexActivation_EClass());
	m_transitionActivation_EReference_targetVertexActivation->setLowerBound(1);
	m_transitionActivation_EReference_targetVertexActivation->setUpperBound(1);
	m_transitionActivation_EReference_targetVertexActivation->setTransient(false);
	m_transitionActivation_EReference_targetVertexActivation->setVolatile(false);
	m_transitionActivation_EReference_targetVertexActivation->setChangeable(true);
	m_transitionActivation_EReference_targetVertexActivation->setUnsettable(false);
	m_transitionActivation_EReference_targetVertexActivation->setUnique(true);
	m_transitionActivation_EReference_targetVertexActivation->setDerived(false);
	m_transitionActivation_EReference_targetVertexActivation->setOrdered(false);
	m_transitionActivation_EReference_targetVertexActivation->setContainment(false);
	m_transitionActivation_EReference_targetVertexActivation->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_transitionActivation_EReference_targetVertexActivation->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getVertexActivation_EReference_incomingTransitionActivations();
		if (otherEnd != nullptr)
	    {
	   		m_transitionActivation_EReference_targetVertexActivation->setEOpposite(otherEnd);
	    }
	}
	
	m_transitionActivation_EOperation_canFireOn_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_transitionActivation_EOperation_canFireOn_EventOccurrence->setName("canFireOn");
	m_transitionActivation_EOperation_canFireOn_EventOccurrence->setLowerBound(1);
	m_transitionActivation_EOperation_canFireOn_EventOccurrence->setUpperBound(1);
	m_transitionActivation_EOperation_canFireOn_EventOccurrence->setUnique(true);
	m_transitionActivation_EOperation_canFireOn_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_canFireOn_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_canPropagateExecution_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_transitionActivation_EOperation_canPropagateExecution_EventOccurrence->setName("canPropagateExecution");
	m_transitionActivation_EOperation_canPropagateExecution_EventOccurrence->setLowerBound(1);
	m_transitionActivation_EOperation_canPropagateExecution_EventOccurrence->setUpperBound(1);
	m_transitionActivation_EOperation_canPropagateExecution_EventOccurrence->setUnique(true);
	m_transitionActivation_EOperation_canPropagateExecution_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_canPropagateExecution_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_enterTarget_EventOccurrence->setEType(nullptr);
	m_transitionActivation_EOperation_enterTarget_EventOccurrence->setName("enterTarget");
	m_transitionActivation_EOperation_enterTarget_EventOccurrence->setLowerBound(1);
	m_transitionActivation_EOperation_enterTarget_EventOccurrence->setUpperBound(1);
	m_transitionActivation_EOperation_enterTarget_EventOccurrence->setUnique(true);
	m_transitionActivation_EOperation_enterTarget_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_enterTarget_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_evaluateGuard_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_transitionActivation_EOperation_evaluateGuard_EventOccurrence->setName("evaluateGuard");
	m_transitionActivation_EOperation_evaluateGuard_EventOccurrence->setLowerBound(1);
	m_transitionActivation_EOperation_evaluateGuard_EventOccurrence->setUpperBound(1);
	m_transitionActivation_EOperation_evaluateGuard_EventOccurrence->setUnique(true);
	m_transitionActivation_EOperation_evaluateGuard_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_evaluateGuard_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_exitSource_EventOccurrence->setEType(nullptr);
	m_transitionActivation_EOperation_exitSource_EventOccurrence->setName("exitSource");
	m_transitionActivation_EOperation_exitSource_EventOccurrence->setLowerBound(1);
	m_transitionActivation_EOperation_exitSource_EventOccurrence->setUpperBound(1);
	m_transitionActivation_EOperation_exitSource_EventOccurrence->setUnique(true);
	m_transitionActivation_EOperation_exitSource_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_exitSource_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_fire_EventOccurrence->setEType(nullptr);
	m_transitionActivation_EOperation_fire_EventOccurrence->setName("fire");
	m_transitionActivation_EOperation_fire_EventOccurrence->setLowerBound(1);
	m_transitionActivation_EOperation_fire_EventOccurrence->setUpperBound(1);
	m_transitionActivation_EOperation_fire_EventOccurrence->setUnique(true);
	m_transitionActivation_EOperation_fire_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_fire_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_getLeastCommonAncestor->setEType(getRegionActivation_EClass());
	m_transitionActivation_EOperation_getLeastCommonAncestor->setName("getLeastCommonAncestor");
	m_transitionActivation_EOperation_getLeastCommonAncestor->setLowerBound(1);
	m_transitionActivation_EOperation_getLeastCommonAncestor->setUpperBound(1);
	m_transitionActivation_EOperation_getLeastCommonAncestor->setUnique(true);
	m_transitionActivation_EOperation_getLeastCommonAncestor->setOrdered(false);
	
	
	m_transitionActivation_EOperation_getSourceActivation->setEType(getVertexActivation_EClass());
	m_transitionActivation_EOperation_getSourceActivation->setName("getSourceActivation");
	m_transitionActivation_EOperation_getSourceActivation->setLowerBound(1);
	m_transitionActivation_EOperation_getSourceActivation->setUpperBound(1);
	m_transitionActivation_EOperation_getSourceActivation->setUnique(true);
	m_transitionActivation_EOperation_getSourceActivation->setOrdered(false);
	
	
	m_transitionActivation_EOperation_getStatus->setEType(getTransitionMetadata_EEnum());
	m_transitionActivation_EOperation_getStatus->setName("getStatus");
	m_transitionActivation_EOperation_getStatus->setLowerBound(1);
	m_transitionActivation_EOperation_getStatus->setUpperBound(1);
	m_transitionActivation_EOperation_getStatus->setUnique(true);
	m_transitionActivation_EOperation_getStatus->setOrdered(false);
	
	
	m_transitionActivation_EOperation_getTargetActivation->setEType(getVertexActivation_EClass());
	m_transitionActivation_EOperation_getTargetActivation->setName("getTargetActivation");
	m_transitionActivation_EOperation_getTargetActivation->setLowerBound(1);
	m_transitionActivation_EOperation_getTargetActivation->setUpperBound(1);
	m_transitionActivation_EOperation_getTargetActivation->setUnique(true);
	m_transitionActivation_EOperation_getTargetActivation->setOrdered(false);
	
	
	m_transitionActivation_EOperation_hasTrigger_EventOccurrence->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_transitionActivation_EOperation_hasTrigger_EventOccurrence->setName("hasTrigger");
	m_transitionActivation_EOperation_hasTrigger_EventOccurrence->setLowerBound(1);
	m_transitionActivation_EOperation_hasTrigger_EventOccurrence->setUpperBound(1);
	m_transitionActivation_EOperation_hasTrigger_EventOccurrence->setUnique(true);
	m_transitionActivation_EOperation_hasTrigger_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_hasTrigger_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_isGuarded->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_transitionActivation_EOperation_isGuarded->setName("isGuarded");
	m_transitionActivation_EOperation_isGuarded->setLowerBound(1);
	m_transitionActivation_EOperation_isGuarded->setUpperBound(1);
	m_transitionActivation_EOperation_isGuarded->setUnique(true);
	m_transitionActivation_EOperation_isGuarded->setOrdered(false);
	
	
	m_transitionActivation_EOperation_isReached->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_transitionActivation_EOperation_isReached->setName("isReached");
	m_transitionActivation_EOperation_isReached->setLowerBound(1);
	m_transitionActivation_EOperation_isReached->setUpperBound(1);
	m_transitionActivation_EOperation_isReached->setUnique(true);
	m_transitionActivation_EOperation_isReached->setOrdered(false);
	
	
	m_transitionActivation_EOperation_isTraversed_Boolean->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_transitionActivation_EOperation_isTraversed_Boolean->setName("isTraversed");
	m_transitionActivation_EOperation_isTraversed_Boolean->setLowerBound(1);
	m_transitionActivation_EOperation_isTraversed_Boolean->setUpperBound(1);
	m_transitionActivation_EOperation_isTraversed_Boolean->setUnique(true);
	m_transitionActivation_EOperation_isTraversed_Boolean->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_isTraversed_Boolean);
		parameter->setName("staticCheck");
		parameter->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_isTriggered_Boolean->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_transitionActivation_EOperation_isTriggered_Boolean->setName("isTriggered");
	m_transitionActivation_EOperation_isTriggered_Boolean->setLowerBound(1);
	m_transitionActivation_EOperation_isTriggered_Boolean->setUpperBound(1);
	m_transitionActivation_EOperation_isTriggered_Boolean->setUnique(true);
	m_transitionActivation_EOperation_isTriggered_Boolean->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_isTriggered_Boolean);
		parameter->setName("staticCheck");
		parameter->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_setSourceActivation_VertexActivation->setEType(nullptr);
	m_transitionActivation_EOperation_setSourceActivation_VertexActivation->setName("setSourceActivation");
	m_transitionActivation_EOperation_setSourceActivation_VertexActivation->setLowerBound(1);
	m_transitionActivation_EOperation_setSourceActivation_VertexActivation->setUpperBound(1);
	m_transitionActivation_EOperation_setSourceActivation_VertexActivation->setUnique(true);
	m_transitionActivation_EOperation_setSourceActivation_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_setSourceActivation_VertexActivation);
		parameter->setName("_");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_setStatus_TransitionMetadata->setEType(nullptr);
	m_transitionActivation_EOperation_setStatus_TransitionMetadata->setName("setStatus");
	m_transitionActivation_EOperation_setStatus_TransitionMetadata->setLowerBound(1);
	m_transitionActivation_EOperation_setStatus_TransitionMetadata->setUpperBound(1);
	m_transitionActivation_EOperation_setStatus_TransitionMetadata->setUnique(true);
	m_transitionActivation_EOperation_setStatus_TransitionMetadata->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_setStatus_TransitionMetadata);
		parameter->setName("status");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_setTargetActivation_VertexActivation->setEType(nullptr);
	m_transitionActivation_EOperation_setTargetActivation_VertexActivation->setName("setTargetActivation");
	m_transitionActivation_EOperation_setTargetActivation_VertexActivation->setLowerBound(1);
	m_transitionActivation_EOperation_setTargetActivation_VertexActivation->setUpperBound(1);
	m_transitionActivation_EOperation_setTargetActivation_VertexActivation->setUnique(true);
	m_transitionActivation_EOperation_setTargetActivation_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_setTargetActivation_VertexActivation);
		parameter->setName("_");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_transitionActivation_EOperation_tryExecuteEffect_EventOccurrence->setEType(nullptr);
	m_transitionActivation_EOperation_tryExecuteEffect_EventOccurrence->setName("tryExecuteEffect");
	m_transitionActivation_EOperation_tryExecuteEffect_EventOccurrence->setLowerBound(1);
	m_transitionActivation_EOperation_tryExecuteEffect_EventOccurrence->setUpperBound(1);
	m_transitionActivation_EOperation_tryExecuteEffect_EventOccurrence->setUnique(true);
	m_transitionActivation_EOperation_tryExecuteEffect_EventOccurrence->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_transitionActivation_EOperation_tryExecuteEffect_EventOccurrence);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	
}

void PSSMPackageImpl::initializeVertexActivationContent()
{
	m_vertexActivation_EClass->setName("VertexActivation");
	m_vertexActivation_EClass->setAbstract(true);
	m_vertexActivation_EClass->setInterface(false);
	
	m_vertexActivation_EAttribute_status = getVertexActivation_EAttribute_status();
	m_vertexActivation_EAttribute_status->setName("status");
	m_vertexActivation_EAttribute_status->setEType(getStateMetadata_EEnum());
	m_vertexActivation_EAttribute_status->setLowerBound(1);
	m_vertexActivation_EAttribute_status->setUpperBound(1);
	m_vertexActivation_EAttribute_status->setTransient(false);
	m_vertexActivation_EAttribute_status->setVolatile(false);
	m_vertexActivation_EAttribute_status->setChangeable(true);
	m_vertexActivation_EAttribute_status->setUnsettable(false);
	m_vertexActivation_EAttribute_status->setUnique(true);
	m_vertexActivation_EAttribute_status->setDerived(false);
	m_vertexActivation_EAttribute_status->setOrdered(false);
	m_vertexActivation_EAttribute_status->setID(false);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
		   m_vertexActivation_EAttribute_status->setDefaultValueLiteral(defaultValue);
		}
	}
	
	m_vertexActivation_EReference_incomingTransitionActivations->setName("incomingTransitionActivations");
	m_vertexActivation_EReference_incomingTransitionActivations->setEType(getTransitionActivation_EClass());
	m_vertexActivation_EReference_incomingTransitionActivations->setLowerBound(0);
	m_vertexActivation_EReference_incomingTransitionActivations->setUpperBound(-1);
	m_vertexActivation_EReference_incomingTransitionActivations->setTransient(false);
	m_vertexActivation_EReference_incomingTransitionActivations->setVolatile(false);
	m_vertexActivation_EReference_incomingTransitionActivations->setChangeable(true);
	m_vertexActivation_EReference_incomingTransitionActivations->setUnsettable(false);
	m_vertexActivation_EReference_incomingTransitionActivations->setUnique(true);
	m_vertexActivation_EReference_incomingTransitionActivations->setDerived(false);
	m_vertexActivation_EReference_incomingTransitionActivations->setOrdered(false);
	m_vertexActivation_EReference_incomingTransitionActivations->setContainment(false);
	m_vertexActivation_EReference_incomingTransitionActivations->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_vertexActivation_EReference_incomingTransitionActivations->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getTransitionActivation_EReference_targetVertexActivation();
		if (otherEnd != nullptr)
	    {
	   		m_vertexActivation_EReference_incomingTransitionActivations->setEOpposite(otherEnd);
	    }
	}
	m_vertexActivation_EReference_outgoingTransitionActivations->setName("outgoingTransitionActivations");
	m_vertexActivation_EReference_outgoingTransitionActivations->setEType(getTransitionActivation_EClass());
	m_vertexActivation_EReference_outgoingTransitionActivations->setLowerBound(0);
	m_vertexActivation_EReference_outgoingTransitionActivations->setUpperBound(-1);
	m_vertexActivation_EReference_outgoingTransitionActivations->setTransient(false);
	m_vertexActivation_EReference_outgoingTransitionActivations->setVolatile(false);
	m_vertexActivation_EReference_outgoingTransitionActivations->setChangeable(true);
	m_vertexActivation_EReference_outgoingTransitionActivations->setUnsettable(false);
	m_vertexActivation_EReference_outgoingTransitionActivations->setUnique(true);
	m_vertexActivation_EReference_outgoingTransitionActivations->setDerived(false);
	m_vertexActivation_EReference_outgoingTransitionActivations->setOrdered(false);
	m_vertexActivation_EReference_outgoingTransitionActivations->setContainment(false);
	m_vertexActivation_EReference_outgoingTransitionActivations->setResolveProxies(true);
	{
		std::string defaultValue = "";
		if (!defaultValue.empty())
		{
			m_vertexActivation_EReference_outgoingTransitionActivations->setDefaultValueLiteral(defaultValue);
		}
		std::shared_ptr<ecore::EReference>  otherEnd = getTransitionActivation_EReference_sourceVertexActivation();
		if (otherEnd != nullptr)
	    {
	   		m_vertexActivation_EReference_outgoingTransitionActivations->setEOpposite(otherEnd);
	    }
	}
	
	m_vertexActivation_EOperation_addIncomingTransition_TransitionActivation->setEType(nullptr);
	m_vertexActivation_EOperation_addIncomingTransition_TransitionActivation->setName("addIncomingTransition");
	m_vertexActivation_EOperation_addIncomingTransition_TransitionActivation->setLowerBound(1);
	m_vertexActivation_EOperation_addIncomingTransition_TransitionActivation->setUpperBound(1);
	m_vertexActivation_EOperation_addIncomingTransition_TransitionActivation->setUnique(true);
	m_vertexActivation_EOperation_addIncomingTransition_TransitionActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_addIncomingTransition_TransitionActivation);
		parameter->setName("transitionActivation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_addOutgoingTransition_TransitionActivation->setEType(nullptr);
	m_vertexActivation_EOperation_addOutgoingTransition_TransitionActivation->setName("addOutgoingTransition");
	m_vertexActivation_EOperation_addOutgoingTransition_TransitionActivation->setLowerBound(1);
	m_vertexActivation_EOperation_addOutgoingTransition_TransitionActivation->setUpperBound(1);
	m_vertexActivation_EOperation_addOutgoingTransition_TransitionActivation->setUnique(true);
	m_vertexActivation_EOperation_addOutgoingTransition_TransitionActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_addOutgoingTransition_TransitionActivation);
		parameter->setName("transitionActivation");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation->setName("canPropagateExecution");
	m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation->setLowerBound(1);
	m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation->setUpperBound(1);
	m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation->setUnique(true);
	m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation);
		parameter->setName("enteringTransition");
		parameter->setEType(getTransitionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation);
		parameter->setName("eventOccurrence");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getEventOccurrence_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_canPropagateExecution_TransitionActivation_RegionActivation);
		parameter->setName("leastCommonAncestor");
		parameter->setEType(getRegionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation->setEType(nullptr);
	m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation->setName("enter");
	m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation->setLowerBound(1);
	m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation->setUpperBound(1);
	m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation->setUnique(true);
	m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation);
		parameter->setName("enteringTransition");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_enter_TransitionActivation_RegionActivation);
		parameter->setName("leastCommonAncestor");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation->setEType(nullptr);
	m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation->setName("exit");
	m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation->setLowerBound(1);
	m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation->setUpperBound(1);
	m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation->setUnique(true);
	m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation);
		parameter->setName("exitingTransition");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation);
		parameter->setName("eventOccurrence");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_exit_TransitionActivation_RegionActivation);
		parameter->setName("leastCommonAncestor");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_getAscendingHierarchy->setEType(getVertexActivation_EClass());
	m_vertexActivation_EOperation_getAscendingHierarchy->setName("getAscendingHierarchy");
	m_vertexActivation_EOperation_getAscendingHierarchy->setLowerBound(0);
	m_vertexActivation_EOperation_getAscendingHierarchy->setUpperBound(-1);
	m_vertexActivation_EOperation_getAscendingHierarchy->setUnique(true);
	m_vertexActivation_EOperation_getAscendingHierarchy->setOrdered(false);
	
	
	m_vertexActivation_EOperation_getIncomingTransitions->setEType(getTransitionActivation_EClass());
	m_vertexActivation_EOperation_getIncomingTransitions->setName("getIncomingTransitions");
	m_vertexActivation_EOperation_getIncomingTransitions->setLowerBound(0);
	m_vertexActivation_EOperation_getIncomingTransitions->setUpperBound(-1);
	m_vertexActivation_EOperation_getIncomingTransitions->setUnique(true);
	m_vertexActivation_EOperation_getIncomingTransitions->setOrdered(false);
	
	
	m_vertexActivation_EOperation_getLeastCommonAncestor_VertexActivation->setEType(getRegionActivation_EClass());
	m_vertexActivation_EOperation_getLeastCommonAncestor_VertexActivation->setName("getLeastCommonAncestor");
	m_vertexActivation_EOperation_getLeastCommonAncestor_VertexActivation->setLowerBound(1);
	m_vertexActivation_EOperation_getLeastCommonAncestor_VertexActivation->setUpperBound(1);
	m_vertexActivation_EOperation_getLeastCommonAncestor_VertexActivation->setUnique(true);
	m_vertexActivation_EOperation_getLeastCommonAncestor_VertexActivation->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_getLeastCommonAncestor_VertexActivation);
		parameter->setName("vertexActivation");
		parameter->setEType(getVertexActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_getOutgoingTransitions->setEType(getTransitionActivation_EClass());
	m_vertexActivation_EOperation_getOutgoingTransitions->setName("getOutgoingTransitions");
	m_vertexActivation_EOperation_getOutgoingTransitions->setLowerBound(0);
	m_vertexActivation_EOperation_getOutgoingTransitions->setUpperBound(-1);
	m_vertexActivation_EOperation_getOutgoingTransitions->setUnique(true);
	m_vertexActivation_EOperation_getOutgoingTransitions->setOrdered(false);
	
	
	m_vertexActivation_EOperation_getOwningRegionActivation->setEType(getRegionActivation_EClass());
	m_vertexActivation_EOperation_getOwningRegionActivation->setName("getOwningRegionActivation");
	m_vertexActivation_EOperation_getOwningRegionActivation->setLowerBound(1);
	m_vertexActivation_EOperation_getOwningRegionActivation->setUpperBound(1);
	m_vertexActivation_EOperation_getOwningRegionActivation->setUnique(true);
	m_vertexActivation_EOperation_getOwningRegionActivation->setOrdered(false);
	
	
	m_vertexActivation_EOperation_getParentVertexActivation->setEType(getVertexActivation_EClass());
	m_vertexActivation_EOperation_getParentVertexActivation->setName("getParentVertexActivation");
	m_vertexActivation_EOperation_getParentVertexActivation->setLowerBound(1);
	m_vertexActivation_EOperation_getParentVertexActivation->setUpperBound(1);
	m_vertexActivation_EOperation_getParentVertexActivation->setUnique(true);
	m_vertexActivation_EOperation_getParentVertexActivation->setOrdered(false);
	
	
	m_vertexActivation_EOperation_getRegionActivation_SemanticVisitor->setEType(getRegionActivation_EClass());
	m_vertexActivation_EOperation_getRegionActivation_SemanticVisitor->setName("getRegionActivation");
	m_vertexActivation_EOperation_getRegionActivation_SemanticVisitor->setLowerBound(1);
	m_vertexActivation_EOperation_getRegionActivation_SemanticVisitor->setUpperBound(1);
	m_vertexActivation_EOperation_getRegionActivation_SemanticVisitor->setUnique(true);
	m_vertexActivation_EOperation_getRegionActivation_SemanticVisitor->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_getRegionActivation_SemanticVisitor);
		parameter->setName("semanticVisitor");
		parameter->setEType(fUML::FUMLPackage::eInstance()->getSemanticVisitor_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_getStatus->setEType(getStateMetadata_EEnum());
	m_vertexActivation_EOperation_getStatus->setName("getStatus");
	m_vertexActivation_EOperation_getStatus->setLowerBound(1);
	m_vertexActivation_EOperation_getStatus->setUpperBound(1);
	m_vertexActivation_EOperation_getStatus->setUnique(true);
	m_vertexActivation_EOperation_getStatus->setOrdered(false);
	
	
	m_vertexActivation_EOperation_getVertexActivation_Vertex->setEType(getVertexActivation_EClass());
	m_vertexActivation_EOperation_getVertexActivation_Vertex->setName("getVertexActivation");
	m_vertexActivation_EOperation_getVertexActivation_Vertex->setLowerBound(1);
	m_vertexActivation_EOperation_getVertexActivation_Vertex->setUpperBound(1);
	m_vertexActivation_EOperation_getVertexActivation_Vertex->setUnique(true);
	m_vertexActivation_EOperation_getVertexActivation_Vertex->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_getVertexActivation_Vertex);
		parameter->setName("vertex");
		parameter->setEType(uml::UmlPackage::eInstance()->getVertex_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_isActive->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_vertexActivation_EOperation_isActive->setName("isActive");
	m_vertexActivation_EOperation_isActive->setLowerBound(1);
	m_vertexActivation_EOperation_isActive->setUpperBound(1);
	m_vertexActivation_EOperation_isActive->setUnique(true);
	m_vertexActivation_EOperation_isActive->setOrdered(false);
	
	
	m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean->setName("isEnterable");
	m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean->setLowerBound(1);
	m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean->setUpperBound(1);
	m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean->setUnique(true);
	m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean);
		parameter->setName("enteringTransition");
		parameter->setEType(getTransitionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_isEnterable_TransitionActivation_Boolean);
		parameter->setName("staticCheck");
		parameter->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
	m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean->setName("isExitable");
	m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean->setLowerBound(1);
	m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean->setUpperBound(1);
	m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean->setUnique(true);
	m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean);
		parameter->setName("exitingTransition");
		parameter->setEType(getTransitionActivation_EClass());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_isExitable_TransitionActivation_Boolean);
		parameter->setName("staticCheck");
		parameter->setEType(types::TypesPackage::eInstance()->getBoolean_EDataType());
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_setStatus_StateMetadata->setEType(nullptr);
	m_vertexActivation_EOperation_setStatus_StateMetadata->setName("setStatus");
	m_vertexActivation_EOperation_setStatus_StateMetadata->setLowerBound(1);
	m_vertexActivation_EOperation_setStatus_StateMetadata->setUpperBound(1);
	m_vertexActivation_EOperation_setStatus_StateMetadata->setUnique(true);
	m_vertexActivation_EOperation_setStatus_StateMetadata->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_setStatus_StateMetadata);
		parameter->setName("status");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean->setEType(nullptr);
	m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean->setName("tagIncomingTransition");
	m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean->setLowerBound(1);
	m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean->setUpperBound(1);
	m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean->setUnique(true);
	m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean);
		parameter->setName("status");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_tagIncomingTransition_TransitionMetadata_Boolean);
		parameter->setName("staticCheck");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean->setEType(nullptr);
	m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean->setName("tagOutgoingTransition");
	m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean->setLowerBound(1);
	m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean->setUpperBound(1);
	m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean->setUnique(true);
	m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean->setOrdered(false);
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean);
		parameter->setName("status");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	{
		std::shared_ptr<ecore::EParameter> parameter = ecore::EcoreFactory::eInstance()->createEParameter_in_EOperation(m_vertexActivation_EOperation_tagOutgoingTransition_TransitionMetadata_Boolean);
		parameter->setName("staticCheck");
		parameter->setEType(nullptr);
		parameter->setLowerBound(0);
		parameter->setUpperBound(1);
		parameter->setUnique(true);
		parameter->setOrdered(true);
	}
	
	m_vertexActivation_EOperation_terminate->setEType(nullptr);
	m_vertexActivation_EOperation_terminate->setName("terminate");
	m_vertexActivation_EOperation_terminate->setLowerBound(1);
	m_vertexActivation_EOperation_terminate->setUpperBound(1);
	m_vertexActivation_EOperation_terminate->setUnique(true);
	m_vertexActivation_EOperation_terminate->setOrdered(false);
	
	
	
}

void PSSMPackageImpl::initializePackageEDataTypes()
{
	m_stateMetadata_EEnum->setName("StateMetadata");
	m_transitionMetadata_EEnum->setName("TransitionMetadata");
	
}
