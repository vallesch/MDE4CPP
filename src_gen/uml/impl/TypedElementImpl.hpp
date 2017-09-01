//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_TYPEDELEMENTTYPEDELEMENTIMPL_HPP
#define UML_TYPEDELEMENTTYPEDELEMENTIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#define ACTIVITY_DEBUG_ON

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//*********************************
// generated Includes

//Model includes
#include "../TypedElement.hpp"

#include "impl/NamedElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class TypedElementImpl :virtual public NamedElementImpl, virtual public TypedElement 
	{
		public: 
			TypedElementImpl(const TypedElementImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			TypedElementImpl& operator=(TypedElementImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			TypedElementImpl();

			//Additional constructors for the containments back reference
			TypedElementImpl(std::shared_ptr<uml::Namespace > par_namespace);




		public:
			//destructor
			virtual ~TypedElementImpl();
			
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
			 The type of the TypedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Type > getType() const ;
			
			/*!
			 The type of the TypedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual void setType(std::shared_ptr<uml::Type> _type_type) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const ; 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: UML_TYPEDELEMENTTYPEDELEMENTIMPL_HPP */

