//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CONSTRAINTCONSTRAINTIMPL_HPP
#define UML_CONSTRAINTCONSTRAINTIMPL_HPP

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
#include "../Constraint.hpp"

#include "impl/PackageableElementImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ConstraintImpl :virtual public PackageableElementImpl, virtual public Constraint 
	{
		public: 
			ConstraintImpl(const ConstraintImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ConstraintImpl& operator=(ConstraintImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ConstraintImpl();

			//Additional constructors for the containments back reference
			ConstraintImpl(std::weak_ptr<uml::Namespace > par_context);




		public:
			//destructor
			virtual ~ConstraintImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The ValueSpecification for a Constraint must evaluate to a Boolean value. */ 
			virtual bool boolean_value(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Evaluating the ValueSpecification for a Constraint must not have side effects. */ 
			virtual bool no_side_effects(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A Constraint cannot be applied to itself.
			not constrainedElement->includes(self) */ 
			virtual bool not_apply_to_self(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The ordered set of Elements referenced by this Constraint.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr< Bag<uml::Element> > getConstrainedElement() const ;
			
			/*!
			 Specifies the Namespace that owns the Constraint.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getContext() const ;
			
			/*!
			 Specifies the Namespace that owns the Constraint.
			<p>From package UML::CommonStructure.</p> */
			virtual void setContext(std::shared_ptr<uml::Namespace> _context_context) ;
			/*!
			 A condition that must be true when evaluated in order for the Constraint to be satisfied.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getSpecification() const ;
			
			/*!
			 A condition that must be true when evaluated in order for the Constraint to be satisfied.
			<p>From package UML::CommonStructure.</p> */
			virtual void setSpecification(std::shared_ptr<uml::ValueSpecification> _specification_specification) ;
							
			
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
#endif /* end of include guard: UML_CONSTRAINTCONSTRAINTIMPL_HPP */

