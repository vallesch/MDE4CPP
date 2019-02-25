//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DESTROYOBJECTACTIONACTIVATIONDESTROYOBJECTACTIONACTIVATIONIMPL_HPP
#define FUML_DESTROYOBJECTACTIONACTIVATIONDESTROYOBJECTACTIONACTIVATIONIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../DestroyObjectActionActivation.hpp"

#include "fUML/impl/ActionActivationImpl.hpp"

//*********************************
namespace fUML 
{
	class DestroyObjectActionActivationImpl :virtual public ActionActivationImpl, virtual public DestroyObjectActionActivation 
	{
		public: 
			DestroyObjectActionActivationImpl(const DestroyObjectActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DestroyObjectActionActivationImpl& operator=(DestroyObjectActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			DestroyObjectActionActivationImpl();
			virtual std::shared_ptr<DestroyObjectActionActivation> getThisDestroyObjectActionActivationPtr() const;
			virtual void setThisDestroyObjectActionActivationPtr(std::weak_ptr<DestroyObjectActionActivation> thisDestroyObjectActionActivationPtr);

			//Additional constructors for the containments back reference
			DestroyObjectActionActivationImpl(std::weak_ptr<fUML::ActivityNodeActivationGroup > par_group);




		public:
			//destructor
			virtual ~DestroyObjectActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void destroyObject(std::shared_ptr<fUML::Value>  value,bool isDestroyLinks,bool isDestroyOwnedObjects) ;
			
			/*!
			 */ 
			virtual bool objectIsComposite(std::shared_ptr<fUML::Reference>  reference,std::shared_ptr<fUML::Link>  link) ;
			
			
			
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
			std::weak_ptr<DestroyObjectActionActivation> m_thisDestroyObjectActionActivationPtr;
	};
}
#endif /* end of include guard: FUML_DESTROYOBJECTACTIONACTIVATIONDESTROYOBJECTACTIONACTIVATIONIMPL_HPP */
