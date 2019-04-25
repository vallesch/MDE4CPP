//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_PARAMETERVALUEPARAMETERVALUEIMPL_HPP
#define FUML_PARAMETERVALUEPARAMETERVALUEIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../ParameterValue.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace fUML 
{
	class ParameterValueImpl :virtual public ecore::EObjectImpl,
virtual public ParameterValue 
	{
		public: 
			ParameterValueImpl(const ParameterValueImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ParameterValueImpl& operator=(ParameterValueImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ParameterValueImpl();
			virtual std::shared_ptr<ParameterValue> getThisParameterValuePtr() const;
			virtual void setThisParameterValuePtr(std::weak_ptr<ParameterValue> thisParameterValuePtr);



		public:
			//destructor
			virtual ~ParameterValueImpl();
			
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
			virtual std::shared_ptr<uml::Parameter > getParameter() const ;
			
			/*!
			 */
			virtual void setParameter(std::shared_ptr<uml::Parameter> _parameter_parameter) ;
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
			std::weak_ptr<ParameterValue> m_thisParameterValuePtr;
	};
}
#endif /* end of include guard: FUML_PARAMETERVALUEPARAMETERVALUEIMPL_HPP */
