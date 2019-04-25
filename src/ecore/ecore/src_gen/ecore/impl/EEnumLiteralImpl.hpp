//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EENUMLITERALEENUMLITERALIMPL_HPP
#define ECORE_EENUMLITERALEENUMLITERALIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EEnumLiteral.hpp"

#include "ecore/impl/ENamedElementImpl.hpp"

//*********************************
namespace ecore 
{
	class EEnumLiteralImpl :virtual public ENamedElementImpl, virtual public EEnumLiteral 
	{
		public: 
			EEnumLiteralImpl(const EEnumLiteralImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EEnumLiteralImpl& operator=(EEnumLiteralImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EEnumLiteralImpl();
			virtual std::shared_ptr<EEnumLiteral> getThisEEnumLiteralPtr() const;
			virtual void setThisEEnumLiteralPtr(std::weak_ptr<EEnumLiteral> thisEEnumLiteralPtr);

			//Additional constructors for the containments back reference
			EEnumLiteralImpl(std::weak_ptr<ecore::EObject > par_eContainer);


			//Additional constructors for the containments back reference
			EEnumLiteralImpl(std::weak_ptr<ecore::EEnum > par_eEnum);




		public:
			//destructor
			virtual ~EEnumLiteralImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual Any getInstance() const ;
			
			/*!
			 */ 
			virtual void setInstance (Any _instance); 
			
			/*!
			 */ 
			virtual std::string getLiteral() const ;
			
			/*!
			 */ 
			virtual void setLiteral (std::string _literal); 
			
			/*!
			 */ 
			virtual int getValue() const ;
			
			/*!
			 */ 
			virtual void setValue (int _value); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<ecore::EEnum > getEEnum() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<ecore::EObject>> getEContens() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<ecore::EcoreFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<EEnumLiteral> m_thisEEnumLiteralPtr;
	};
}
#endif /* end of include guard: ECORE_EENUMLITERALEENUMLITERALIMPL_HPP */
