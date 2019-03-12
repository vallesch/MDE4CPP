//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EOBJECT_HPP
#define ECORE_EOBJECT_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;
template<class T> class Union;

class AnyObject;
typedef std::shared_ptr<AnyObject> Any;

//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interfaces
	{
		class XLoadHandler; // used for Persistence
		class XSaveHandler; // used for Persistence
	}
}

namespace ecore
{
	class EcoreFactory;
}

//Forward Declaration for used types
namespace ecore 
{
	class EClass;
}

namespace ecore 
{
	class EObject;
}

namespace ecore 
{
	class EOperation;
}

namespace ecore 
{
	class EReference;
}

namespace ecore 
{
	class EStructuralFeature;
}

// base class includes

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EObject
	{
		public:
 			EObject(const EObject &) {}
			EObject& operator=(EObject const&) = delete;

		protected:
			EObject(){}


			//Additional constructors for the containments back reference

			EObject(std::weak_ptr<ecore::EObject > par_eContainer);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EObject() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<Bag <   ecore::EObject > > eAllContents() const = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EClass> eClass() const = 0;
			
			
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EStructuralFeature> eContainingFeature() const = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EReference> eContainmentFeature() const = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag <   ecore::EObject > > eContents() const = 0;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag <   ecore::EObject > > eCrossReferences() const = 0;
			
			/*!
			 */ 
			virtual Any eGet(std::shared_ptr<ecore::EStructuralFeature>  feature) const = 0;
			
			/*!
			 */ 
			virtual Any eGet(std::shared_ptr<ecore::EStructuralFeature>  feature,bool resolve) const = 0;
			
			/*!
			 */ 
			virtual Any eInvoke(std::shared_ptr<ecore::EOperation>  operation,Bag <   Any >  arguments) const = 0;
			
			/*!
			 */ 
			virtual bool eIsProxy() const = 0;
			
			/*!
			 */ 
			virtual bool eIsSet(std::shared_ptr<ecore::EStructuralFeature>  feature) const = 0;
			
			/*!
			 */ 
			virtual int eResource() const = 0;
			
			/*!
			 */ 
			virtual void eSet(std::shared_ptr<ecore::EStructuralFeature>  feature,Any newValue) = 0;
			
			/*!
			 */ 
			virtual void eUnset(std::shared_ptr<ecore::EStructuralFeature>  feature) const = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::weak_ptr<ecore::EObject > getEContainer() const = 0;
			
			/*!
			 */
			virtual void setEContainer(std::shared_ptr<ecore::EObject> _eContainer_eContainer) = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::weak_ptr<ecore::EObject > m_eContainer;
			/*!
			 */
			std::shared_ptr<Union<ecore::EObject>> m_eContens;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Union<ecore::EObject>> getEContens() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: ECORE_EOBJECT_HPP */
