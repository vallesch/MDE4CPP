//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_STEREOTYPE_HPP
#define UML_STEREOTYPE_HPP

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
	class Behavior;
}

namespace uml 
{
	class Class;
}

namespace uml 
{
	class Classifier;
}

namespace uml 
{
	class CollaborationUse;
}

namespace uml 
{
	class Comment;
}

namespace uml 
{
	class ConnectableElement;
}

namespace uml 
{
	class Connector;
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

namespace ecore 
{
	class EClass;
}

namespace uml 
{
	class Element;
}

namespace uml 
{
	class ElementImport;
}

namespace uml 
{
	class Extension;
}

namespace uml 
{
	class Feature;
}

namespace uml 
{
	class Generalization;
}

namespace uml 
{
	class GeneralizationSet;
}

namespace uml 
{
	class Image;
}

namespace uml 
{
	class InterfaceRealization;
}

namespace uml 
{
	class NamedElement;
}

namespace uml 
{
	class Namespace;
}

namespace uml 
{
	class Operation;
}

namespace uml 
{
	class Package;
}

namespace uml 
{
	class PackageImport;
}

namespace uml 
{
	class PackageableElement;
}

namespace uml 
{
	class Port;
}

namespace uml 
{
	class Profile;
}

namespace uml 
{
	class Property;
}

namespace uml 
{
	class Reception;
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
	class Substitution;
}

namespace uml 
{
	class TemplateBinding;
}

namespace uml 
{
	class TemplateParameter;
}

namespace uml 
{
	class TemplateSignature;
}

namespace uml 
{
	class UseCase;
}

// base class includes
#include "Class.hpp"

// enum includes
#include "VisibilityKind.hpp"


//*********************************
namespace uml 
{
	/*!
	 A stereotype defines how an existing metaclass may be extended, and enables the use of platform or domain specific terminology or notation in place of, or in addition to, the ones used for the extended metaclass.
	<p>From package UML::Packages.</p> */
	class Stereotype:virtual public Class	{
		public:
 			Stereotype(const Stereotype &) {}
			Stereotype& operator=(Stereotype const&) = delete;

		protected:
			Stereotype(){}


		public:
			virtual ecore::EObject* copy() const = 0;

			//destructor
			virtual ~Stereotype() {}

			//*********************************
			// Operations
			//*********************************
			/*!
			 Stereotypes may only participate in binary associations.
			ownedAttribute.association->forAll(memberEnd->size()=2) */ 
			virtual bool binaryAssociationsOnly(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 A Stereotype may only generalize or specialize another Stereotype.
			allParents()->forAll(oclIsKindOf(Stereotype)) 
			and Classifier.allInstances()->forAll(c | c.allParents()->exists(oclIsKindOf(Stereotype)) implies c.oclIsKindOf(Stereotype)) */ 
			virtual bool generalize(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Stereotype names should not clash with keyword names for the extended model element. */ 
			virtual bool name_not_clash(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Where a stereotype’s property is an association end for an association other than a kind of extension, and the other end is not a stereotype, the other end must be owned by the association itself.
			ownedAttribute
			->select(association->notEmpty() and not association.oclIsKindOf(Extension) and not type.oclIsKindOf(Stereotype))
			->forAll(opposite.owner = association) */ 
			virtual bool associationEndOwnership(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 The upper bound of base-properties is exactly 1. */ 
			virtual bool base_property_upper_bound(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 If a Stereotype extends only one metaclass, the multiplicity of the corresponding base-property shall be 1..1. */ 
			virtual bool base_property_multiplicity_single_extension(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 If a Stereotype extends more than one metaclass, the multiplicity of the corresponding base-properties shall be [0..1]. At any point in time, only one of these base-properties can contain a metaclass instance during runtime. */ 
			virtual bool base_property_multiplicity_multiple_extension(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  = 0;
			
			/*!
			 Creates a(n) (required) extension of the specified metaclass with this stereotype. */ 
			virtual std::shared_ptr<uml::Extension> createExtension(std::shared_ptr<uml::Class>  metaclass,bool isRequired)  = 0;
			
			/*!
			 Creates an icon with the specified location for this stereotype. */ 
			virtual std::shared_ptr<uml::Image> createIcon(std::string location)  = 0;
			
			/*!
			 Creates an icon with the specified format and content for this stereotype. */ 
			virtual std::shared_ptr<uml::Image> createIcon(std::string format,std::string content)  = 0;
			
			/*!
			 Retrieves all the metaclasses extended by this stereotype, including the metaclasses extended by its superstereotypes. */ 
			virtual std::shared_ptr<Bag<uml::Class> > getAllExtendedMetaclasses()  = 0;
			
			/*!
			 Retrieves the current definition (Ecore representation) of this stereotype. */ 
			virtual std::shared_ptr<ecore::EClass> getDefinition()  = 0;
			
			/*!
			 Retrieves the metaclasses extended by this stereotype. */ 
			virtual std::shared_ptr<Bag<uml::Class> > getExtendedMetaclasses()  = 0;
			
			/*!
			 Retrieves the localized keyword for this stereotype. */ 
			virtual std::string getKeyword()  = 0;
			
			/*!
			 Retrieves the keyword for this stereotype, localized if indicated. */ 
			virtual std::string getKeyword(bool localize)  = 0;
			
			/*!
			 The query containingProfile returns the closest profile directly or indirectly containing this stereotype.
			result = (self.namespace.oclAsType(Package).containingProfile())
			<p>From package UML::Packages.</p> */ 
			virtual std::shared_ptr<uml::Profile> containingProfile()  = 0;
			
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 Stereotype can change the graphical appearance of the extended model element by using attached icons. When this association is not null, it references the location of the icon content to be displayed within diagrams presenting the extended model elements.
			<p>From package UML::Packages.</p> */
			virtual std::shared_ptr<Subset<uml::Image, uml::Element > > getIcon() const = 0;
			
			/*!
			 The profile that directly or indirectly contains this stereotype.
			<p>From package UML::Packages.</p> */
			virtual std::shared_ptr<uml::Profile > getProfile() const = 0;
			
			

		protected:
			//*********************************
			// Attribute Members
			//*********************************
			
			
			//*********************************
			// Reference Members
			//*********************************
			/*!
			 Stereotype can change the graphical appearance of the extended model element by using attached icons. When this association is not null, it references the location of the icon content to be displayed within diagrams presenting the extended model elements.
			<p>From package UML::Packages.</p> */
			std::shared_ptr<Subset<uml::Image, uml::Element > > m_icon;
			/*!
			 The profile that directly or indirectly contains this stereotype.
			<p>From package UML::Packages.</p> */
			std::shared_ptr<uml::Profile > m_profile;
			

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
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const = 0;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const = 0;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const = 0;/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature > > getAttribute() const = 0;/*!
			 The roles that instances may play in this StructuredClassifier.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::ConnectableElement, uml::NamedElement > > getRole() const = 0;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const = 0;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const = 0; 
	};

}
#endif /* end of include guard: UML_STEREOTYPE_HPP */

