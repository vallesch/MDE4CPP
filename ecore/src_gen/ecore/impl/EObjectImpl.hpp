//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EOBJECTEOBJECTIMPL_HPP
#define ECORE_EOBJECTEOBJECTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../EObject.hpp"



//*********************************
namespace ecore 
{
	class EObjectImpl :
virtual public EObject 
	{
		public: 
			EObjectImpl(const EObjectImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EObjectImpl& operator=(EObjectImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EObjectImpl();
			virtual std::shared_ptr<EObject> getThisEObjectPtr();
			virtual void setThisEObjectPtr(std::weak_ptr<EObject> thisEObjectPtr);



		public:
			//destructor
			virtual ~EObjectImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual Bag <   ecore::EObject > eAllContents()  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EClass> eClass()  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EStructuralFeature> eContainingFeature()  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EReference> eContainmentFeature()  const  ;
			
			/*!
			 */ 
			virtual Bag <   ecore::EObject > eContents()  const  ;
			
			/*!
			 */ 
			virtual Bag <   ecore::EObject > eCrossReferences()  const  ;
			
			/*!
			 */ 
			virtual boost::any eGet(std::shared_ptr<ecore::EStructuralFeature>  feature)  const  ;
			
			/*!
			 */ 
			virtual boost::any eGet(std::shared_ptr<ecore::EStructuralFeature>  feature,bool resolve)  const  ;
			
			/*!
			 */ 
			virtual boost::any eInvoke(std::shared_ptr<ecore::EOperation>  operation,Bag <   boost::any >  arguments)  const  ;
			
			/*!
			 */ 
			virtual bool eIsProxy()  const  ;
			
			/*!
			 */ 
			virtual bool eIsSet(std::shared_ptr<ecore::EStructuralFeature>  feature)  const  ;
			
			/*!
			 */ 
			virtual int eResource()  const  ;
			
			/*!
			 */ 
			virtual void eSet(std::shared_ptr<ecore::EStructuralFeature>  feature,boost::any newValue)  ;
			
			/*!
			 */ 
			virtual void eUnset(std::shared_ptr<ecore::EStructuralFeature>  feature)  const  ;
			
			
			
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
			virtual void load(std::shared_ptr<persistence::interface::XLoadHandler> loadHandler) ;
			virtual void loadAttributes(std::shared_ptr<persistence::interface::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list);
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interface::XLoadHandler> loadHandler, std::shared_ptr<ecore::EcoreFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interface::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interface::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, boost::any newValue) ;

		private:
			std::weak_ptr<EObject> m_thisEObjectPtr;
	};
}
#endif /* end of include guard: ECORE_EOBJECTEOBJECTIMPL_HPP */
