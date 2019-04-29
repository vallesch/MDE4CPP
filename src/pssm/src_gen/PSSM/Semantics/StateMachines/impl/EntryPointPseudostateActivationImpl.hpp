//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_ENTRYPOINTPSEUDOSTATEACTIVATIONENTRYPOINTPSEUDOSTATEACTIVATIONIMPL_HPP
#define PSSM_SEMANTICS_STATEMACHINES_ENTRYPOINTPSEUDOSTATEACTIVATIONENTRYPOINTPSEUDOSTATEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EntryPointPseudostateActivation.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/ConnectionPointActivationImpl.hpp"

//*********************************
namespace PSSM::Semantics::StateMachines 
{
	class EntryPointPseudostateActivationImpl :virtual public ConnectionPointActivationImpl, virtual public EntryPointPseudostateActivation 
	{
		public: 
			EntryPointPseudostateActivationImpl(const EntryPointPseudostateActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EntryPointPseudostateActivationImpl& operator=(EntryPointPseudostateActivationImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			EntryPointPseudostateActivationImpl();
			virtual std::shared_ptr<EntryPointPseudostateActivation> getThisEntryPointPseudostateActivationPtr() const;
			virtual void setThisEntryPointPseudostateActivationPtr(std::weak_ptr<EntryPointPseudostateActivation> thisEntryPointPseudostateActivationPtr);



		public:
			//destructor
			virtual ~EntryPointPseudostateActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void _enter(std::shared_ptr<PSSM::Semantics::StateMachines::TransitionActivation>  enteringTransition,std::shared_ptr<fUML::EventOccurrence>  eventOccurrence,std::shared_ptr<PSSM::Semantics::StateMachines::RegionActivation>  leastCommonAncestor) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
			std::weak_ptr<EntryPointPseudostateActivation> m_thisEntryPointPseudostateActivationPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_ENTRYPOINTPSEUDOSTATEACTIVATIONENTRYPOINTPSEUDOSTATEACTIVATIONIMPL_HPP */