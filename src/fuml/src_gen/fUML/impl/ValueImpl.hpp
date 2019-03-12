//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_VALUEVALUEIMPL_HPP
#define FUML_VALUEVALUEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Value.hpp"

#include "fUML/impl/SemanticVisitorImpl.hpp"

//*********************************
namespace fUML 
{
	class ValueImpl :virtual public SemanticVisitorImpl, virtual public Value 
	{
		public: 
			ValueImpl(const ValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ValueImpl& operator=(ValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ValueImpl();
			virtual std::shared_ptr<Value> getThisValuePtr() const;
			virtual void setThisValuePtr(std::weak_ptr<Value> thisValuePtr);



		public:
			//destructor
			virtual ~ValueImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual bool equals(std::shared_ptr<fUML::Value>  otherValue) ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::Classifier> > getTypes() const ;
			
			/*!
			 */ 
			virtual bool hasTypes(std::shared_ptr<uml::Classifier>  type) ;
			
			/*!
			 */ 
			virtual std::string objectId() ;
			
			/*!
			 */ 
			virtual std::shared_ptr<uml::ValueSpecification> specify() ;
			
			/*!
			 */ 
			virtual std::string toString() ;
			
			
			
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
			std::weak_ptr<Value> m_thisValuePtr;
	};
}
#endif /* end of include guard: FUML_VALUEVALUEIMPL_HPP */
