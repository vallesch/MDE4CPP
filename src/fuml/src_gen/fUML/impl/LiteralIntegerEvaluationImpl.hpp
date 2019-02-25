//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_LITERALINTEGEREVALUATIONLITERALINTEGEREVALUATIONIMPL_HPP
#define FUML_LITERALINTEGEREVALUATIONLITERALINTEGEREVALUATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../LiteralIntegerEvaluation.hpp"

#include "fUML/impl/LiteralEvaluationImpl.hpp"

//*********************************
namespace fUML 
{
	class LiteralIntegerEvaluationImpl :virtual public LiteralEvaluationImpl, virtual public LiteralIntegerEvaluation 
	{
		public: 
			LiteralIntegerEvaluationImpl(const LiteralIntegerEvaluationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			LiteralIntegerEvaluationImpl& operator=(LiteralIntegerEvaluationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			LiteralIntegerEvaluationImpl();
			virtual std::shared_ptr<LiteralIntegerEvaluation> getThisLiteralIntegerEvaluationPtr() const;
			virtual void setThisLiteralIntegerEvaluationPtr(std::weak_ptr<LiteralIntegerEvaluation> thisLiteralIntegerEvaluationPtr);



		public:
			//destructor
			virtual ~LiteralIntegerEvaluationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<fUML::Value> evaluate() ;
			
			
			
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
			std::weak_ptr<LiteralIntegerEvaluation> m_thisLiteralIntegerEvaluationPtr;
	};
}
#endif /* end of include guard: FUML_LITERALINTEGEREVALUATIONLITERALINTEGEREVALUATIONIMPL_HPP */
