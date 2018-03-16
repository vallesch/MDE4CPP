//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EREFERENCE_HPP
#define ECORE_EREFERENCE_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;



//*********************************
// generated Includes

#include <map>

namespace persistence
{
	namespace interface
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
	class EAnnotation;
}

namespace ecore 
{
	class EAttribute;
}

namespace ecore 
{
	class EClass;
}

namespace ecore 
{
	class EClassifier;
}

namespace ecore 
{
	class EGenericType;
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
#include "ecore/EStructuralFeature.hpp"

// enum includes


//*********************************
namespace ecore 
{
	/*!
	 */
	class EReference:virtual public EStructuralFeature
	{
		public:
 			EReference(const EReference &) {}
			EReference& operator=(EReference const&) = delete;

		protected:
			EReference(){}


		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~EReference() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual bool isContainer() const = 0;
			
			/*!
			 */ 
			virtual bool isContainment() const = 0;
			
			/*!
			 */ 
			virtual void setContainment (bool _containment)= 0; 
			
			/*!
			 */ 
			virtual bool isResolveProxies() const = 0;
			
			/*!
			 */ 
			virtual void setResolveProxies (bool _resolveProxies)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<Bag<ecore::EAttribute>> getEKeys() const = 0;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EReference > getEOpposite() const = 0;
			
			/*!
			 */
			virtual void setEOpposite(std::shared_ptr<ecore::EReference> _eOpposite_eOpposite) = 0;
			/*!
			 */
			virtual std::shared_ptr<ecore::EClass > getEReferenceType() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 */ 
			bool m_container = false;
			/*!
			 */ 
			bool m_containment = false;
			/*!
			 */ 
			bool m_resolveProxies = true;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 */
			std::shared_ptr<Bag<ecore::EAttribute>> m_eKeys;
			/*!
			 */
			std::shared_ptr<ecore::EReference > m_eOpposite;
			/*!
			 */
			std::shared_ptr<ecore::EClass > m_eReferenceType;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interface::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interface::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: ECORE_EREFERENCE_HPP */
