//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_STRUCTURALFEATUREACTION_HPP
#define UML_STRUCTURALFEATUREACTION_HPP

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
	class Action;
}

namespace uml 
{
	class Activity;
}

namespace uml 
{
	class ActivityEdge;
}

namespace uml 
{
	class ActivityGroup;
}

namespace uml 
{
	class ActivityNode;
}

namespace uml 
{
	class ActivityPartition;
}

namespace uml 
{
	class Classifier;
}

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
	class ExceptionHandler;
}

namespace uml 
{
	class InputPin;
}

namespace uml 
{
	class InterruptibleActivityRegion;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class OutputPin;
}

namespace uml 
{
	class RedefinableElement;
}

namespace uml 
{
	class StringExpression;
}

namespace uml 
{
	class StructuralFeature;
}

namespace uml 
{
	class StructuredActivityNode;
}

// base class includes
#include "Action.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 StructuralFeatureAction is an abstract class for all Actions that operate on StructuralFeatures.
	<p>From package UML::Actions.</p> */
	class StructuralFeatureAction:virtual public Action	{
		public:
 			StructuralFeatureAction(const StructuralFeatureAction &) {}
			StructuralFeatureAction& operator=(StructuralFeatureAction const&) = delete;

		protected:
			StructuralFeatureAction(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~StructuralFeatureAction() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the object InputPin must be 1..1.
			object.is(1,1) */ 
			virtual bool multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The structuralFeature must either be an owned or inherited feature of the type of the object InputPin, or it must be an owned end of a binary Association whose opposite end had as a type to which the type of the object InputPin conforms.
			object.type.oclAsType(Classifier).allFeatures()->includes(structuralFeature) or
				object.type.conformsTo(structuralFeature.oclAsType(Property).opposite.type) */ 
			virtual bool object_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The visibility of the structuralFeature must allow access from the object performing the ReadStructuralFeatureAction.
			structuralFeature.visibility = VisibilityKind::public or
			_'context'.allFeatures()->includes(structuralFeature) or
			structuralFeature.visibility=VisibilityKind::protected and
			_'context'.conformsTo(structuralFeature.oclAsType(Property).opposite.type.oclAsType(Classifier)) */ 
			virtual bool visibility(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The structuralFeature must not be static.
			not structuralFeature.isStatic */ 
			virtual bool not_static(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The structuralFeature must have exactly one featuringClassifier.
			structuralFeature.featuringClassifier->size() = 1 */ 
			virtual bool one_featuring_classifier(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPin from which the object whose StructuralFeature is to be read or written is obtained.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getObject() const = 0;
			
			/*!
			 The InputPin from which the object whose StructuralFeature is to be read or written is obtained.
			<p>From package UML::Actions.</p> */
			virtual void setObject(std::shared_ptr<uml::InputPin> _object_object) = 0;
			/*!
			 The StructuralFeature to be read or written.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::StructuralFeature > getStructuralFeature() const = 0;
			
			/*!
			 The StructuralFeature to be read or written.
			<p>From package UML::Actions.</p> */
			virtual void setStructuralFeature(std::shared_ptr<uml::StructuralFeature> _structuralFeature_structuralFeature) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The InputPin from which the object whose StructuralFeature is to be read or written is obtained.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::InputPin > m_object;
			/*!
			 The StructuralFeature to be read or written.
			<p>From package UML::Actions.</p> */
			std::shared_ptr<uml::StructuralFeature > m_structuralFeature;
			

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
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > getInput() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const = 0;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const = 0; 
	};

}
#endif /* end of include guard: UML_STRUCTURALFEATUREACTION_HPP */

