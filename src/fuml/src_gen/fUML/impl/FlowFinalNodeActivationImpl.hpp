//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_FLOWFINALNODEACTIVATIONFLOWFINALNODEACTIVATIONIMPL_HPP
#define FUML_FLOWFINALNODEACTIVATIONFLOWFINALNODEACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../FlowFinalNodeActivation.hpp"

#include "fUML/impl/ControlNodeActivationImpl.hpp"

//*********************************
namespace fUML 
{
	class FlowFinalNodeActivationImpl :virtual public ControlNodeActivationImpl, virtual public FlowFinalNodeActivation 
	{
		public: 
			FlowFinalNodeActivationImpl(const FlowFinalNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			FlowFinalNodeActivationImpl& operator=(FlowFinalNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			FlowFinalNodeActivationImpl();
			virtual std::shared_ptr<FlowFinalNodeActivation> getThisFlowFinalNodeActivationPtr() const;
			virtual void setThisFlowFinalNodeActivationPtr(std::weak_ptr<FlowFinalNodeActivation> thisFlowFinalNodeActivationPtr);

			//Additional constructors for the containments back reference
			FlowFinalNodeActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~FlowFinalNodeActivationImpl();
			
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
			std::weak_ptr<FlowFinalNodeActivation> m_thisFlowFinalNodeActivationPtr;
	};
}
#endif /* end of include guard: FUML_FLOWFINALNODEACTIVATIONFLOWFINALNODEACTIVATIONIMPL_HPP */
