//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STARTCLASSIFIERBEHAVIORACTIONACTIVATIONSTARTCLASSIFIERBEHAVIORACTIONACTIVATIONIMPL_HPP
#define FUML_STARTCLASSIFIERBEHAVIORACTIONACTIVATIONSTARTCLASSIFIERBEHAVIORACTIONACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../StartClassifierBehaviorActionActivation.hpp"

#include "fUML/impl/ActionActivationImpl.hpp"

//*********************************
namespace fUML 
{
	class StartClassifierBehaviorActionActivationImpl :virtual public ActionActivationImpl, virtual public StartClassifierBehaviorActionActivation 
	{
		public: 
			StartClassifierBehaviorActionActivationImpl(const StartClassifierBehaviorActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StartClassifierBehaviorActionActivationImpl& operator=(StartClassifierBehaviorActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			StartClassifierBehaviorActionActivationImpl();
			virtual std::shared_ptr<StartClassifierBehaviorActionActivation> getThisStartClassifierBehaviorActionActivationPtr() const;
			virtual void setThisStartClassifierBehaviorActionActivationPtr(std::weak_ptr<StartClassifierBehaviorActionActivation> thisStartClassifierBehaviorActionActivationPtr);

			//Additional constructors for the containments back reference
			StartClassifierBehaviorActionActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~StartClassifierBehaviorActionActivationImpl();
			
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
			/*!
			 */
			virtual std::shared_ptr<Union<fUML::PinActivation>> getPinActivation() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<fUML::FUMLFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<StartClassifierBehaviorActionActivation> m_thisStartClassifierBehaviorActionActivationPtr;
	};
}
#endif /* end of include guard: FUML_STARTCLASSIFIERBEHAVIORACTIONACTIVATIONSTARTCLASSIFIERBEHAVIORACTIONACTIVATIONIMPL_HPP */
