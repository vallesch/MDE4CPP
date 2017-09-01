//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OCCURRENCESPECIFICATIONOCCURRENCESPECIFICATIONIMPL_HPP
#define UML_OCCURRENCESPECIFICATIONOCCURRENCESPECIFICATIONIMPL_HPP

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
#include "../OccurrenceSpecification.hpp"

#include "impl/InteractionFragmentImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class OccurrenceSpecificationImpl :virtual public InteractionFragmentImpl, virtual public OccurrenceSpecification 
	{
		public: 
			OccurrenceSpecificationImpl(const OccurrenceSpecificationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			OccurrenceSpecificationImpl& operator=(OccurrenceSpecificationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			OccurrenceSpecificationImpl();

			//Additional constructors for the containments back reference
			OccurrenceSpecificationImpl(std::weak_ptr<uml::Interaction > par_enclosingInteraction);


			//Additional constructors for the containments back reference
			OccurrenceSpecificationImpl(std::weak_ptr<uml::InteractionOperand > par_enclosingOperand);




		public:
			//destructor
			virtual ~OccurrenceSpecificationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
			/*!
			 Sets the Lifeline on which the OccurrenceSpecification appears. */ 
			virtual void setCovered(std::shared_ptr<uml::Lifeline>  value)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 References the GeneralOrderings that specify EventOcurrences that must occur after this OccurrenceSpecification.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr< Bag<uml::GeneralOrdering> > getToAfter() const ;
			
			/*!
			 References the GeneralOrderings that specify EventOcurrences that must occur before this OccurrenceSpecification.
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr< Bag<uml::GeneralOrdering> > getToBefore() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
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
#endif /* end of include guard: UML_OCCURRENCESPECIFICATIONOCCURRENCESPECIFICATIONIMPL_HPP */

