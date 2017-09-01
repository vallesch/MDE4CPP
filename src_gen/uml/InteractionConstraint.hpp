//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_INTERACTIONCONSTRAINT_HPP
#define UML_INTERACTIONCONSTRAINT_HPP

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

#include <string>
#include <map>
#include <vector>
#include "SubsetUnion.hpp"
#include "boost/shared_ptr.hpp"
#include "boost/any.hpp"

//*********************************
// generated Includes

//Forward Declaration for used types
namespace uml 
{
	class Comment;
}

namespace uml 
{
	class Constraint;
}

namespace uml 
{
	class Dependency;
}

namespace ecore 
{
	class EAnnotation;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class ValueSpecification;
}

// base class includes
#include "Constraint.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 An InteractionConstraint is a Boolean expression that guards an operand in a CombinedFragment.
	<p>From package UML::Interactions.</p> */
	class InteractionConstraint:virtual public Constraint	{
		public:
 			InteractionConstraint(const InteractionConstraint &) {}
			InteractionConstraint& operator=(InteractionConstraint const&) = delete;

		protected:
			InteractionConstraint(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~InteractionConstraint() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Minint/maxint can only be present if the InteractionConstraint is associated with the operand of a loop CombinedFragment.
			maxint->notEmpty() or minint->notEmpty() implies
			interactionOperand.combinedFragment.interactionOperator =
			InteractionOperatorKind::loop */ 
			virtual bool minint_maxint(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 If minint is specified, then the expression must evaluate to a non-negative integer.
			minint->notEmpty() implies 
			minint->asSequence()->first().integerValue() >= 0 */ 
			virtual bool minint_non_negative(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 If maxint is specified, then the expression must evaluate to a positive integer.
			maxint->notEmpty() implies 
			maxint->asSequence()->first().integerValue() > 0 */ 
			virtual bool maxint_positive(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The dynamic variables that take part in the constraint must be owned by the ConnectableElement corresponding to the covered Lifeline. */ 
			virtual bool dynamic_variables(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The constraint may contain references to global data or write-once data. */ 
			virtual bool global_data(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 If maxint is specified, then minint must be specified and the evaluation of maxint must be >= the evaluation of minint.
			maxint->notEmpty() implies (minint->notEmpty() and 
			maxint->asSequence()->first().integerValue() >=
			minint->asSequence()->first().integerValue() ) */ 
			virtual bool maxint_greater_equal_minint(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The maximum number of iterations of a loop
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getMaxint() const = 0;
			
			/*!
			 The maximum number of iterations of a loop
			<p>From package UML::Interactions.</p> */
			virtual void setMaxint(std::shared_ptr<uml::ValueSpecification> _maxint_maxint) = 0;
			/*!
			 The minimum number of iterations of a loop
			<p>From package UML::Interactions.</p> */
			virtual std::shared_ptr<uml::ValueSpecification > getMinint() const = 0;
			
			/*!
			 The minimum number of iterations of a loop
			<p>From package UML::Interactions.</p> */
			virtual void setMinint(std::shared_ptr<uml::ValueSpecification> _minint_minint) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The maximum number of iterations of a loop
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<uml::ValueSpecification > m_maxint;
			/*!
			 The minimum number of iterations of a loop
			<p>From package UML::Interactions.</p> */
			std::shared_ptr<uml::ValueSpecification > m_minint;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const = 0; 
	};

}
#endif /* end of include guard: UML_INTERACTIONCONSTRAINT_HPP */

