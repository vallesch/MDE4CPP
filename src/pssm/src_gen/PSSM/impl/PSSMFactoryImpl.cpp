#include "PSSM/impl/PSSMFactoryImpl.hpp"

#include <cassert>

#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EClass.hpp"

#include "PSSM/PSSMPackage.hpp"
#include "PSSM/Semantics/Actions/impl/SM_ReadSelfActionActivationImpl.hpp"

#include "PSSM/Semantics/CommonBehavior/impl/CallEventExecutionImpl.hpp"
#include "PSSM/Semantics/CommonBehavior/impl/CallEventOccurrenceImpl.hpp"
#include "PSSM/Semantics/CommonBehavior/impl/EventTriggeredExecutionImpl.hpp"
#include "PSSM/Semantics/CommonBehavior/impl/SM_ObjectActivationImpl.hpp"

#include "PSSM/Semantics/Loci/impl/SM_ExecutionFactoryImpl.hpp"
#include "PSSM/Semantics/Loci/impl/SM_LocusImpl.hpp"

#include "PSSM/Semantics/StateMachines/impl/ChoicePseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/CompletionEventOccurrenceImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/ConditionalPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/ConnectionPointActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/DeepHistoryPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/DeferredEventOccurrenceImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/DoActivityContextObjectImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/DoActivityContextObjectActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/DoActivityExecutionEventAccepterImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/EntryPointPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/ExitPointPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/ExternalTransitionActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/FinalStateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/ForkPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/HistoryPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/InitialPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/InternalTransitionActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/JoinPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/JunctionPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/LocalTransitionActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/PseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/RegionActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/ShallowHistoryPseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/StateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/StateConfigurationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/StateMachineConfigurationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/StateMachineEventAccepterImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/StateMachineExecutionImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/StateMachineSemanticVisitorImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/TerminatePseudostateActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/TransitionActivationImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/VertexActivationImpl.hpp"

#include "PSSM/Semantics/StructuredClassifiers/impl/SM_ObjectImpl.hpp"
#include "PSSM/Semantics/StructuredClassifiers/impl/SM_RedefinitionBasedDispatchStrategyImpl.hpp"

#include "PSSM/Semantics/Values/impl/SM_OpaqueExpressionEvaluationImpl.hpp"




using namespace PSSM;

//*********************************
// Constructor / Destructor
//*********************************

PSSMFactoryImpl::PSSMFactoryImpl()
{
	m_idMap.insert(std::make_pair("PSSM::Semantics::CommonBehavior::CallEventExecution", PSSMPackage::CALLEVENTEXECUTION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::CommonBehavior::CallEventOccurrence", PSSMPackage::CALLEVENTOCCURRENCE_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::ChoicePseudostateActivation", PSSMPackage::CHOICEPSEUDOSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::CompletionEventOccurrence", PSSMPackage::COMPLETIONEVENTOCCURRENCE_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::DeepHistoryPseudostateActivation", PSSMPackage::DEEPHISTORYPSEUDOSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::DeferredEventOccurrence", PSSMPackage::DEFERREDEVENTOCCURRENCE_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::DoActivityContextObject", PSSMPackage::DOACTIVITYCONTEXTOBJECT_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::DoActivityContextObjectActivation", PSSMPackage::DOACTIVITYCONTEXTOBJECTACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::DoActivityExecutionEventAccepter", PSSMPackage::DOACTIVITYEXECUTIONEVENTACCEPTER_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::EntryPointPseudostateActivation", PSSMPackage::ENTRYPOINTPSEUDOSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::CommonBehavior::EventTriggeredExecution", PSSMPackage::EVENTTRIGGEREDEXECUTION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::ExitPointPseudostateActivation", PSSMPackage::EXITPOINTPSEUDOSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::ExternalTransitionActivation", PSSMPackage::EXTERNALTRANSITIONACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::FinalStateActivation", PSSMPackage::FINALSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::ForkPseudostateActivation", PSSMPackage::FORKPSEUDOSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::InitialPseudostateActivation", PSSMPackage::INITIALPSEUDOSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::InternalTransitionActivation", PSSMPackage::INTERNALTRANSITIONACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::JoinPseudostateActivation", PSSMPackage::JOINPSEUDOSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::JunctionPseudostateActivation", PSSMPackage::JUNCTIONPSEUDOSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::LocalTransitionActivation", PSSMPackage::LOCALTRANSITIONACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::RegionActivation", PSSMPackage::REGIONACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::Loci::SM_ExecutionFactory", PSSMPackage::SM_EXECUTIONFACTORY_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::Loci::SM_Locus", PSSMPackage::SM_LOCUS_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StructuredClassifiers::SM_Object", PSSMPackage::SM_OBJECT_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::CommonBehavior::SM_ObjectActivation", PSSMPackage::SM_OBJECTACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::Values::SM_OpaqueExpressionEvaluation", PSSMPackage::SM_OPAQUEEXPRESSIONEVALUATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::Actions::SM_ReadSelfActionActivation", PSSMPackage::SM_READSELFACTIONACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StructuredClassifiers::SM_RedefinitionBasedDispatchStrategy", PSSMPackage::SM_REDEFINITIONBASEDDISPATCHSTRATEGY_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::ShallowHistoryPseudostateActivation", PSSMPackage::SHALLOWHISTORYPSEUDOSTATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::StateActivation", PSSMPackage::STATEACTIVATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::StateConfiguration", PSSMPackage::STATECONFIGURATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::StateMachineConfiguration", PSSMPackage::STATEMACHINECONFIGURATION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::StateMachineEventAccepter", PSSMPackage::STATEMACHINEEVENTACCEPTER_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::StateMachineExecution", PSSMPackage::STATEMACHINEEXECUTION_ECLASS));
	m_idMap.insert(std::make_pair("PSSM::Semantics::StateMachines::TerminatePseudostateActivation", PSSMPackage::TERMINATEPSEUDOSTATEACTIVATION_ECLASS));
}

PSSMFactoryImpl::~PSSMFactoryImpl()
{
}

PSSMFactory* PSSMFactoryImpl::create()
{
	return new PSSMFactoryImpl();
}

//*********************************
// creators
//*********************************

std::shared_ptr<ecore::EObject> PSSMFactoryImpl::create(const unsigned int classID,  std::shared_ptr<ecore::EObject> container /*= nullptr*/, const unsigned int referenceID/* = -1*/) const
{
	switch(classID)
	{
		case PSSMPackage::CALLEVENTEXECUTION_ECLASS:
		{
				return this->createCallEventExecution();
			
		}
		case PSSMPackage::CALLEVENTOCCURRENCE_ECLASS:
		{
				return this->createCallEventOccurrence();
			
		}
		case PSSMPackage::CHOICEPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createChoicePseudostateActivation();
			
		}
		case PSSMPackage::COMPLETIONEVENTOCCURRENCE_ECLASS:
		{
				return this->createCompletionEventOccurrence();
			
		}
		case PSSMPackage::DEEPHISTORYPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createDeepHistoryPseudostateActivation();
			
		}
		case PSSMPackage::DEFERREDEVENTOCCURRENCE_ECLASS:
		{
				return this->createDeferredEventOccurrence();
			
		}
		case PSSMPackage::DOACTIVITYCONTEXTOBJECT_ECLASS:
		{
				return this->createDoActivityContextObject();
			
		}
		case PSSMPackage::DOACTIVITYCONTEXTOBJECTACTIVATION_ECLASS:
		{
				return this->createDoActivityContextObjectActivation();
			
		}
		case PSSMPackage::DOACTIVITYEXECUTIONEVENTACCEPTER_ECLASS:
		{
				return this->createDoActivityExecutionEventAccepter();
			
		}
		case PSSMPackage::ENTRYPOINTPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createEntryPointPseudostateActivation();
			
		}
		case PSSMPackage::EVENTTRIGGEREDEXECUTION_ECLASS:
		{
				return this->createEventTriggeredExecution();
			
		}
		case PSSMPackage::EXITPOINTPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createExitPointPseudostateActivation();
			
		}
		case PSSMPackage::EXTERNALTRANSITIONACTIVATION_ECLASS:
		{
				return this->createExternalTransitionActivation();
			
		}
		case PSSMPackage::FINALSTATEACTIVATION_ECLASS:
		{
				return this->createFinalStateActivation();
			
		}
		case PSSMPackage::FORKPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createForkPseudostateActivation();
			
		}
		case PSSMPackage::INITIALPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createInitialPseudostateActivation();
			
		}
		case PSSMPackage::INTERNALTRANSITIONACTIVATION_ECLASS:
		{
				return this->createInternalTransitionActivation();
			
		}
		case PSSMPackage::JOINPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createJoinPseudostateActivation();
			
		}
		case PSSMPackage::JUNCTIONPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createJunctionPseudostateActivation();
			
		}
		case PSSMPackage::LOCALTRANSITIONACTIVATION_ECLASS:
		{
				return this->createLocalTransitionActivation();
			
		}
		case PSSMPackage::REGIONACTIVATION_ECLASS:
		{
				return this->createRegionActivation();
			
		}
		case PSSMPackage::SM_EXECUTIONFACTORY_ECLASS:
		{
			if (nullptr == container)
			{
				return this->createSM_ExecutionFactory();
			}
			else
			{
				std::weak_ptr<fUML::Locus > castedContainer = std::dynamic_pointer_cast<fUML::Locus>(container);
				assert(castedContainer);
				return std::shared_ptr<PSSM::Semantics::Loci::SM_ExecutionFactory>(this->createSM_ExecutionFactory_in_Locus(castedContainer));
			}
		}
		case PSSMPackage::SM_LOCUS_ECLASS:
		{
				return this->createSM_Locus();
			
		}
		case PSSMPackage::SM_OBJECT_ECLASS:
		{
				return this->createSM_Object();
			
		}
		case PSSMPackage::SM_OBJECTACTIVATION_ECLASS:
		{
				return this->createSM_ObjectActivation();
			
		}
		case PSSMPackage::SM_OPAQUEEXPRESSIONEVALUATION_ECLASS:
		{
				return this->createSM_OpaqueExpressionEvaluation();
			
		}
		case PSSMPackage::SM_READSELFACTIONACTIVATION_ECLASS:
		{
				return this->createSM_ReadSelfActionActivation();
			
		}
		case PSSMPackage::SM_REDEFINITIONBASEDDISPATCHSTRATEGY_ECLASS:
		{
				return this->createSM_RedefinitionBasedDispatchStrategy();
			
		}
		case PSSMPackage::SHALLOWHISTORYPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createShallowHistoryPseudostateActivation();
			
		}
		case PSSMPackage::STATEACTIVATION_ECLASS:
		{
				return this->createStateActivation();
			
		}
		case PSSMPackage::STATECONFIGURATION_ECLASS:
		{
				return this->createStateConfiguration();
			
		}
		case PSSMPackage::STATEMACHINECONFIGURATION_ECLASS:
		{
			if (nullptr == container)
			{
				return this->createStateMachineConfiguration();
			}
			else
			{
				std::weak_ptr<PSSM::Semantics::StateMachines::StateMachineExecution > castedContainer = std::dynamic_pointer_cast<PSSM::Semantics::StateMachines::StateMachineExecution>(container);
				assert(castedContainer);
				return std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration>(this->createStateMachineConfiguration_in_Execution(castedContainer));
			}
		}
		case PSSMPackage::STATEMACHINEEVENTACCEPTER_ECLASS:
		{
				return this->createStateMachineEventAccepter();
			
		}
		case PSSMPackage::STATEMACHINEEXECUTION_ECLASS:
		{
				return this->createStateMachineExecution();
			
		}
		case PSSMPackage::TERMINATEPSEUDOSTATEACTIVATION_ECLASS:
		{
				return this->createTerminatePseudostateActivation();
			
		}
	default:
	   	    std::cerr << __PRETTY_FUNCTION__ << " ID " << classID <<" not found" << std::endl;
	}
	return nullptr;
}

std::shared_ptr<ecore::EObject> PSSMFactoryImpl::create(std::shared_ptr<ecore::EClass> _class) const
{
	return create(_class, nullptr);
}

std::shared_ptr<ecore::EObject> PSSMFactoryImpl::create(std::shared_ptr<ecore::EClass> _class, std::shared_ptr<EObject> _container) const
{
	if(_class->isAbstract())
    {
    	return nullptr;
   	}

	int _classID = _class->eClass()->getClassifierID();
	return create(_classID, _container);
}

std::shared_ptr<ecore::EObject> PSSMFactoryImpl::create(std::string _className) const
{
	auto iter = m_idMap.find(_className);
	if(iter != m_idMap.end())
    {
		//get the ID
        unsigned int id = iter->second;
		return create(id);
    }

    return nullptr;
}

std::shared_ptr<ecore::EObject> PSSMFactoryImpl::create(std::string _className, std::shared_ptr<EObject> _container, const unsigned int referenceID) const
{
	auto iter = m_idMap.find(_className);
	if(iter != m_idMap.end())
    {
		//get the ID
        unsigned int id = iter->second;
		return create(id, _container, referenceID);
    }

    return nullptr;
}


std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecution> PSSMFactoryImpl::createCallEventExecution() const
{
	std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventExecutionImpl> element(new PSSM::Semantics::CommonBehavior::CallEventExecutionImpl());
	element->setThisCallEventExecutionPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventOccurrence> PSSMFactoryImpl::createCallEventOccurrence() const
{
	std::shared_ptr<PSSM::Semantics::CommonBehavior::CallEventOccurrenceImpl> element(new PSSM::Semantics::CommonBehavior::CallEventOccurrenceImpl());
	element->setThisCallEventOccurrencePtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::ChoicePseudostateActivation> PSSMFactoryImpl::createChoicePseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::ChoicePseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::ChoicePseudostateActivationImpl());
	element->setThisChoicePseudostateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrence> PSSMFactoryImpl::createCompletionEventOccurrence() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrenceImpl> element(new PSSM::Semantics::StateMachines::CompletionEventOccurrenceImpl());
	element->setThisCompletionEventOccurrencePtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::DeepHistoryPseudostateActivation> PSSMFactoryImpl::createDeepHistoryPseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::DeepHistoryPseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::DeepHistoryPseudostateActivationImpl());
	element->setThisDeepHistoryPseudostateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::DeferredEventOccurrence> PSSMFactoryImpl::createDeferredEventOccurrence() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::DeferredEventOccurrenceImpl> element(new PSSM::Semantics::StateMachines::DeferredEventOccurrenceImpl());
	element->setThisDeferredEventOccurrencePtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObject> PSSMFactoryImpl::createDoActivityContextObject() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObjectImpl> element(new PSSM::Semantics::StateMachines::DoActivityContextObjectImpl());
	element->setThisDoActivityContextObjectPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObjectActivation> PSSMFactoryImpl::createDoActivityContextObjectActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityContextObjectActivationImpl> element(new PSSM::Semantics::StateMachines::DoActivityContextObjectActivationImpl());
	element->setThisDoActivityContextObjectActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityExecutionEventAccepter> PSSMFactoryImpl::createDoActivityExecutionEventAccepter() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::DoActivityExecutionEventAccepterImpl> element(new PSSM::Semantics::StateMachines::DoActivityExecutionEventAccepterImpl());
	element->setThisDoActivityExecutionEventAccepterPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::EntryPointPseudostateActivation> PSSMFactoryImpl::createEntryPointPseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::EntryPointPseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::EntryPointPseudostateActivationImpl());
	element->setThisEntryPointPseudostateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::CommonBehavior::EventTriggeredExecution> PSSMFactoryImpl::createEventTriggeredExecution() const
{
	std::shared_ptr<PSSM::Semantics::CommonBehavior::EventTriggeredExecutionImpl> element(new PSSM::Semantics::CommonBehavior::EventTriggeredExecutionImpl());
	element->setThisEventTriggeredExecutionPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::ExitPointPseudostateActivation> PSSMFactoryImpl::createExitPointPseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::ExitPointPseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::ExitPointPseudostateActivationImpl());
	element->setThisExitPointPseudostateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::ExternalTransitionActivation> PSSMFactoryImpl::createExternalTransitionActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::ExternalTransitionActivationImpl> element(new PSSM::Semantics::StateMachines::ExternalTransitionActivationImpl());
	element->setThisExternalTransitionActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::FinalStateActivation> PSSMFactoryImpl::createFinalStateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::FinalStateActivationImpl> element(new PSSM::Semantics::StateMachines::FinalStateActivationImpl());
	element->setThisFinalStateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::ForkPseudostateActivation> PSSMFactoryImpl::createForkPseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::ForkPseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::ForkPseudostateActivationImpl());
	element->setThisForkPseudostateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::InitialPseudostateActivation> PSSMFactoryImpl::createInitialPseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::InitialPseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::InitialPseudostateActivationImpl());
	element->setThisInitialPseudostateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::InternalTransitionActivation> PSSMFactoryImpl::createInternalTransitionActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::InternalTransitionActivationImpl> element(new PSSM::Semantics::StateMachines::InternalTransitionActivationImpl());
	element->setThisInternalTransitionActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::JoinPseudostateActivation> PSSMFactoryImpl::createJoinPseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::JoinPseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::JoinPseudostateActivationImpl());
	element->setThisJoinPseudostateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::JunctionPseudostateActivation> PSSMFactoryImpl::createJunctionPseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::JunctionPseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::JunctionPseudostateActivationImpl());
	element->setThisJunctionPseudostateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::LocalTransitionActivation> PSSMFactoryImpl::createLocalTransitionActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::LocalTransitionActivationImpl> element(new PSSM::Semantics::StateMachines::LocalTransitionActivationImpl());
	element->setThisLocalTransitionActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation> PSSMFactoryImpl::createRegionActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivationImpl> element(new PSSM::Semantics::StateMachines::RegionActivationImpl());
	element->setThisRegionActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::Loci::SM_ExecutionFactory> PSSMFactoryImpl::createSM_ExecutionFactory() const
{
	std::shared_ptr<PSSM::Semantics::Loci::SM_ExecutionFactoryImpl> element(new PSSM::Semantics::Loci::SM_ExecutionFactoryImpl());
	element->setThisSM_ExecutionFactoryPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::Loci::SM_ExecutionFactory> PSSMFactoryImpl::createSM_ExecutionFactory_in_Locus(std::weak_ptr<fUML::Locus > par_locus) const
{
	std::shared_ptr<PSSM::Semantics::Loci::SM_ExecutionFactoryImpl> element(new PSSM::Semantics::Loci::SM_ExecutionFactoryImpl(par_locus));
	if(auto wp = par_locus.lock())
	{
			wp->setFactory(element);
	}
	element->setThisSM_ExecutionFactoryPtr(element);
	return element;
	
}

std::shared_ptr<PSSM::Semantics::Loci::SM_Locus> PSSMFactoryImpl::createSM_Locus() const
{
	std::shared_ptr<PSSM::Semantics::Loci::SM_LocusImpl> element(new PSSM::Semantics::Loci::SM_LocusImpl());
	element->setThisSM_LocusPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StructuredClassifiers::SM_Object> PSSMFactoryImpl::createSM_Object() const
{
	std::shared_ptr<PSSM::Semantics::StructuredClassifiers::SM_ObjectImpl> element(new PSSM::Semantics::StructuredClassifiers::SM_ObjectImpl());
	element->setThisSM_ObjectPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::CommonBehavior::SM_ObjectActivation> PSSMFactoryImpl::createSM_ObjectActivation() const
{
	std::shared_ptr<PSSM::Semantics::CommonBehavior::SM_ObjectActivationImpl> element(new PSSM::Semantics::CommonBehavior::SM_ObjectActivationImpl());
	element->setThisSM_ObjectActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::Values::SM_OpaqueExpressionEvaluation> PSSMFactoryImpl::createSM_OpaqueExpressionEvaluation() const
{
	std::shared_ptr<PSSM::Semantics::Values::SM_OpaqueExpressionEvaluationImpl> element(new PSSM::Semantics::Values::SM_OpaqueExpressionEvaluationImpl());
	element->setThisSM_OpaqueExpressionEvaluationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::Actions::SM_ReadSelfActionActivation> PSSMFactoryImpl::createSM_ReadSelfActionActivation() const
{
	std::shared_ptr<PSSM::Semantics::Actions::SM_ReadSelfActionActivationImpl> element(new PSSM::Semantics::Actions::SM_ReadSelfActionActivationImpl());
	element->setThisSM_ReadSelfActionActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StructuredClassifiers::SM_RedefinitionBasedDispatchStrategy> PSSMFactoryImpl::createSM_RedefinitionBasedDispatchStrategy() const
{
	std::shared_ptr<PSSM::Semantics::StructuredClassifiers::SM_RedefinitionBasedDispatchStrategyImpl> element(new PSSM::Semantics::StructuredClassifiers::SM_RedefinitionBasedDispatchStrategyImpl());
	element->setThisSM_RedefinitionBasedDispatchStrategyPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::ShallowHistoryPseudostateActivation> PSSMFactoryImpl::createShallowHistoryPseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::ShallowHistoryPseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::ShallowHistoryPseudostateActivationImpl());
	element->setThisShallowHistoryPseudostateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation> PSSMFactoryImpl::createStateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::StateActivationImpl> element(new PSSM::Semantics::StateMachines::StateActivationImpl());
	element->setThisStateActivationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration> PSSMFactoryImpl::createStateConfiguration() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::StateConfigurationImpl> element(new PSSM::Semantics::StateMachines::StateConfigurationImpl());
	element->setThisStateConfigurationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration> PSSMFactoryImpl::createStateMachineConfiguration() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfigurationImpl> element(new PSSM::Semantics::StateMachines::StateMachineConfigurationImpl());
	element->setThisStateMachineConfigurationPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfiguration> PSSMFactoryImpl::createStateMachineConfiguration_in_Execution(std::weak_ptr<PSSM::Semantics::StateMachines::StateMachineExecution > par_execution) const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineConfigurationImpl> element(new PSSM::Semantics::StateMachines::StateMachineConfigurationImpl(par_execution));
	if(auto wp = par_execution.lock())
	{
			wp->setConfiguration(element);
	}
	element->setThisStateMachineConfigurationPtr(element);
	return element;
	
}

std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineEventAccepter> PSSMFactoryImpl::createStateMachineEventAccepter() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineEventAccepterImpl> element(new PSSM::Semantics::StateMachines::StateMachineEventAccepterImpl());
	element->setThisStateMachineEventAccepterPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> PSSMFactoryImpl::createStateMachineExecution() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecutionImpl> element(new PSSM::Semantics::StateMachines::StateMachineExecutionImpl());
	element->setThisStateMachineExecutionPtr(element);
	return element;
}
std::shared_ptr<PSSM::Semantics::StateMachines::TerminatePseudostateActivation> PSSMFactoryImpl::createTerminatePseudostateActivation() const
{
	std::shared_ptr<PSSM::Semantics::StateMachines::TerminatePseudostateActivationImpl> element(new PSSM::Semantics::StateMachines::TerminatePseudostateActivationImpl());
	element->setThisTerminatePseudostateActivationPtr(element);
	return element;
}

std::shared_ptr<PSSMPackage> PSSMFactoryImpl::getPSSMPackage() const
{
	return PSSMPackage::eInstance();
}
