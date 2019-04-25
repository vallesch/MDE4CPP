//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_STATEMACHINEEVENTACCEPTERSTATEMACHINEEVENTACCEPTERIMPL_HPP
#define PSSM_SEMANTICS_STATEMACHINES_STATEMACHINEEVENTACCEPTERSTATEMACHINEEVENTACCEPTERIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StateMachineEventAccepter.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSSM::Semantics::StateMachines 
{
	class StateMachineEventAccepterImpl :virtual public ecore::EObjectImpl,
virtual public StateMachineEventAccepter 
	{
		public: 
			StateMachineEventAccepterImpl(const StateMachineEventAccepterImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StateMachineEventAccepterImpl& operator=(StateMachineEventAccepterImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			StateMachineEventAccepterImpl();
			virtual std::shared_ptr<StateMachineEventAccepter> getThisStateMachineEventAccepterPtr() const;
			virtual void setThisStateMachineEventAccepterPtr(std::weak_ptr<StateMachineEventAccepter> thisStateMachineEventAccepterPtr);



		public:
			//destructor
			virtual ~StateMachineEventAccepterImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool _defer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>  stateConfiguration) ;
			
			/*!
			 */ 
			virtual bool _isDeferred(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>  stateConfiguration) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > _select(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateConfiguration>  stateConfiguration) ;
			
			/*!
			 */ 
			virtual void accept(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) ;
			
			/*!
			 */ 
			virtual bool defer(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) ;
			
			/*!
			 */ 
			virtual bool isDeferred(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) ;
			
			/*!
			 */ 
			virtual bool isTriggering(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) ;
			
			/*!
			 */ 
			virtual bool match(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::TransitionActivation> > select(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution > getRegistrationContext() const ;
			
			/*!
			 */
			virtual void setRegistrationContext(std::shared_ptr<PSSM::Semantics::StateMachines::StateMachineExecution> _registrationContext_registrationContext) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<PSSM::PSSMFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<StateMachineEventAccepter> m_thisStateMachineEventAccepterPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_STATEMACHINEEVENTACCEPTERSTATEMACHINEEVENTACCEPTERIMPL_HPP */
