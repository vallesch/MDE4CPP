//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OBJECTOBJECTIMPL_HPP
#define UML_OBJECTOBJECTIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Object.hpp"


#include "ecore/impl/EObjectImpl.hpp"

//*********************************
namespace uml 
{
	class ObjectImpl :virtual public ecore::EObjectImpl,
virtual public Object 
	{
		public: 
			ObjectImpl(const ObjectImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ObjectImpl& operator=(ObjectImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ObjectImpl();
			virtual std::shared_ptr<Object> getThisObjectPtr() const;
			virtual void setThisObjectPtr(std::weak_ptr<Object> thisObjectPtr);



		public:
			//destructor
			virtual ~ObjectImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 Gets the value of the given property. If the Property has multiplicity upper bound of 1, get() returns the value of the
			Property. If Property has multiplicity upper bound >1, get() returns a ReflectiveCollection containing the values of the
			Property. If there are no values, the ReflectiveCollection returned is empty.  */ 
			virtual Any get(std::shared_ptr<uml::Property>  property) const ;
			
			/*!
			 If the Property has multiplicity upper bound = 1, set() atomically updates the value of the Property to the object
			parameter. If Property has multiplicity upper bound >1, the Object must be a kind of ReflectiveCollection. */ 
			virtual void set(std::shared_ptr<uml::Property>  property,Any value) ;
			
			/*!
			 */ 
			virtual void unset(std::shared_ptr<uml::Property>  property) ;
			
			
			
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
			virtual void loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<uml::UmlFactory> modelFactory);
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) ;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const ;
			virtual void saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const;
			

		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
			virtual Any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual bool internalEIsSet(int featureID) const ;
			virtual bool eSet(int featureID, Any newValue) ;

		private:
			std::weak_ptr<Object> m_thisObjectPtr;
	};
}
#endif /* end of include guard: UML_OBJECTOBJECTIMPL_HPP */
