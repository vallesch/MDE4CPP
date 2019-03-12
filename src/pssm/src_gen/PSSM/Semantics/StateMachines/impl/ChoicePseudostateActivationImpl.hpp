//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef PSSM_SEMANTICS_STATEMACHINES_CHOICEPSEUDOSTATEACTIVATIONCHOICEPSEUDOSTATEACTIVATIONIMPL_HPP
#define PSSM_SEMANTICS_STATEMACHINES_CHOICEPSEUDOSTATEACTIVATIONCHOICEPSEUDOSTATEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ChoicePseudostateActivation.hpp"

#include "PSSM/impl/PSSMFactoryImpl.hpp"
#include "PSSM/Semantics/StateMachines/impl/ConditionalPseudostateActivationImpl.hpp"

//*********************************
namespace PSSM::Semantics::StateMachines 
{
	class ChoicePseudostateActivationImpl :virtual public ConditionalPseudostateActivationImpl, virtual public ChoicePseudostateActivation 
	{
		public: 
			ChoicePseudostateActivationImpl(const ChoicePseudostateActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ChoicePseudostateActivationImpl& operator=(ChoicePseudostateActivationImpl const&) = delete;

		protected:
			friend class PSSM::PSSMFactoryImpl;
			ChoicePseudostateActivationImpl();
			virtual std::shared_ptr<ChoicePseudostateActivation> getThisChoicePseudostateActivationPtr() const;
			virtual void setThisChoicePseudostateActivationPtr(std::weak_ptr<ChoicePseudostateActivation> thisChoicePseudostateActivationPtr);



		public:
			//destructor
			virtual ~ChoicePseudostateActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
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
			std::weak_ptr<ChoicePseudostateActivation> m_thisChoicePseudostateActivationPtr;
	};
}
#endif /* end of include guard: PSSM_SEMANTICS_STATEMACHINES_CHOICEPSEUDOSTATEACTIVATIONCHOICEPSEUDOSTATEACTIVATIONIMPL_HPP */
