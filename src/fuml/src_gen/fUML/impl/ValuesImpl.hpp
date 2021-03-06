//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_VALUESVALUESIMPL_HPP
#define FUML_VALUESVALUESIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Values.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace fUML 
{
	class ValuesImpl :virtual public ecore::EObjectImpl,
virtual public Values 
	{
		public: 
			ValuesImpl(const ValuesImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ValuesImpl& operator=(ValuesImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ValuesImpl();
			virtual std::shared_ptr<Values> getThisValuesPtr() const;
			virtual void setThisValuesPtr(std::weak_ptr<Values> thisValuesPtr);



		public:
			//destructor
			virtual ~ValuesImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<fUML::Value>> getValues() const ;
			
							
			
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
			std::weak_ptr<Values> m_thisValuesPtr;
	};
}
#endif /* end of include guard: FUML_VALUESVALUESIMPL_HPP */
