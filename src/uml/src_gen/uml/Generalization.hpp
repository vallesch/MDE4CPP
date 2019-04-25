//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_GENERALIZATION_HPP
#define UML_GENERALIZATION_HPP

#include <list>
#include <memory>
#include <string>


// forward declarations
template<class T> class Bag;
template<class T, class ... U> class Subset;



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

namespace uml
{
	class UmlFactory;
}

//Forward Declaration for used types
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
	class DirectedRelationship;
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
	class GeneralizationSet;
}

// base class includes
#include "uml/DirectedRelationship.hpp"

// enum includes


//*********************************
namespace uml 
{
	/*!
	 A Generalization is a taxonomic relationship between a more general Classifier and a more specific Classifier. Each instance of the specific Classifier is also an instance of the general Classifier. The specific Classifier inherits the features of the more general Classifier. A Generalization is owned by the specific Classifier.
	<p>From package UML::Classification.</p> */
	class Generalization:virtual public DirectedRelationship
	{
		public:
 			Generalization(const Generalization &) {}
			Generalization& operator=(Generalization const&) = delete;

		protected:
			Generalization(){}


			//Additional constructors for the containments back reference

			Generalization(std::weak_ptr<uml::Element > par_owner);

			//Additional constructors for the containments back reference

			Generalization(std::weak_ptr<uml::Classifier > par_specific);

		public:
			virtual std::shared_ptr<ecore::EObject> copy() const = 0;

			//destructor
			virtual ~Generalization() {}

			//*********************************
			// Operations
			//*********************************
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Indicates whether the specific Classifier can be used wherever the general Classifier can be used. If true, the execution traces of the specific Classifier shall be a superset of the execution traces of the general Classifier. If false, there is no such constraint on execution traces. If unset, the modeler has not stated whether there is such a constraint or not.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsSubstitutable() const = 0;
			
			/*!
			 Indicates whether the specific Classifier can be used wherever the general Classifier can be used. If true, the execution traces of the specific Classifier shall be a superset of the execution traces of the general Classifier. If false, there is no such constraint on execution traces. If unset, the modeler has not stated whether there is such a constraint or not.
			<p>From package UML::Classification.</p> */ 
			virtual void setIsSubstitutable (bool _isSubstitutable)= 0; 
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The general classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::Classifier > getGeneral() const = 0;
			
			/*!
			 The general classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			virtual void setGeneral(std::shared_ptr<uml::Classifier> _general_general) = 0;
			/*!
			 Represents a set of instances of Generalization.  A Generalization may appear in many GeneralizationSets.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Bag<uml::GeneralizationSet>> getGeneralizationSet() const = 0;
			
			/*!
			 The specializing Classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			virtual std::weak_ptr<uml::Classifier > getSpecific() const = 0;
			
			/*!
			 The specializing Classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			virtual void setSpecific(std::shared_ptr<uml::Classifier> _specific_specific) = 0;
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			/*!
			 Indicates whether the specific Classifier can be used wherever the general Classifier can be used. If true, the execution traces of the specific Classifier shall be a superset of the execution traces of the general Classifier. If false, there is no such constraint on execution traces. If unset, the modeler has not stated whether there is such a constraint or not.
			<p>From package UML::Classification.</p> */ 
			bool m_isSubstitutable = true;
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 The general classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<uml::Classifier > m_general;
			/*!
			 Represents a set of instances of Generalization.  A Generalization may appear in many GeneralizationSets.
			<p>From package UML::Classification.</p> */
			std::shared_ptr<Bag<uml::GeneralizationSet>> m_generalizationSet;
			/*!
			 The specializing Classifier in the Generalization relationship.
			<p>From package UML::Classification.</p> */
			std::weak_ptr<uml::Classifier > m_specific;
			

		public:
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const = 0;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const = 0;/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getRelatedElement() const = 0;/*!
			 Specifies the source Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getSource() const = 0;/*!
			 Specifies the target Element(s) of the DirectedRelationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Element, uml::Element>> getTarget() const = 0;

			virtual std::shared_ptr<ecore::EObject> eContainer() const = 0; 
			
			//*********************************
			// Persistence Functions
			//*********************************
			virtual void load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler) = 0;
			
			virtual void resolveReferences(const int featureID, std::list<std::shared_ptr<ecore::EObject> > references) = 0;
			virtual void save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const = 0;
			
	};

}
#endif /* end of include guard: UML_GENERALIZATION_HPP */
