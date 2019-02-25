//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_COMMONBEHAVIOR_SM_OBJECTACTIVATIONSM_OBJECTACTIVATIONIMPL_HPP
#define PSSM_SEMANTICS_COMMONBEHAVIOR_SM_OBJECTACTIVATIONSM_OBJECTACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../SM_ObjectActivation.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"

#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace PSSM::Semantics::CommonBehavior 
{
	class SM_ObjectActivationImpl :virtual public ecore::EObjectImpl,
virtual public SM_ObjectActivation 
	{
		public: 
			SM_ObjectActivationImpl(const SM_ObjectActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			SM_ObjectActivationImpl& operator=(SM_ObjectActivationImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			SM_ObjectActivationImpl();
			virtual std::shared_ptr<SM_ObjectActivation> getThisSM_ObjectActivationPtr() const;
			virtual void setThisSM_ObjectActivationPtr(std::weak_ptr<SM_ObjectActivation> thisSM_ObjectActivationPtr);



		public:
			//destructor
			virtual ~SM_ObjectActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual int getDeferredEventInsertionIndex() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<PSSM::Semantics::StateMachines::CompletionEventOccurrence> getNextCompletionEvent() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::EventOccurrence> getNextEvent() ;
			
			/*!
			 */ 
			virtual void registerCompletionEvent(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation) ;
			
			/*!
			 */ 
			virtual void registerDeferredEvent(std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  stateActivation) ;
			
			/*!
			 */ 
			virtual void releaseDeferredEvents(std::shared_ptr<PSSM::Semantics::StateMachines::StateActivation>  deferringState) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<PSSM::Semantics::StateMachines::DeferredEventOccurrence>> getDeferredEventPool() const ;
			
							
			
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
			std::weak_ptr<SM_ObjectActivation> m_thisSM_ObjectActivationPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_COMMONBEHAVIOR_SM_OBJECTACTIVATIONSM_OBJECTACTIVATIONIMPL_HPP */
