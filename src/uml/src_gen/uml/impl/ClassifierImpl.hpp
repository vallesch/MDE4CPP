//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CLASSIFIERCLASSIFIERIMPL_HPP
#define UML_CLASSIFIERCLASSIFIERIMPL_HPP

//*********************************
// generated Includes

//Model includes
#include "../Classifier.hpp"

#include "uml/impl/NamespaceImpl.hpp"
#include "uml/impl/RedefinableElementImpl.hpp"
#include "uml/impl/TemplateableElementImpl.hpp"
#include "uml/impl/TypeImpl.hpp"

//*********************************
namespace uml 
{
	class ClassifierImpl :virtual public NamespaceImpl, virtual public RedefinableElementImpl, virtual public TemplateableElementImpl, virtual public TypeImpl, virtual public Classifier 
	{
		public: 
			ClassifierImpl(const ClassifierImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ClassifierImpl& operator=(ClassifierImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ClassifierImpl();
			virtual std::shared_ptr<Classifier> getThisClassifierPtr() const;
			virtual void setThisClassifierPtr(std::weak_ptr<Classifier> thisClassifierPtr);

			//Additional constructors for the containments back reference
			ClassifierImpl(std::weak_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			ClassifierImpl(std::weak_ptr<uml::Element > par_owner);


			//Additional constructors for the containments back reference
			ClassifierImpl(std::weak_ptr<uml::Package > par_Package, const int reference_id);


			//Additional constructors for the containments back reference
			ClassifierImpl(std::weak_ptr<uml::TemplateParameter > par_owningTemplateParameter);


			//Additional constructors for the containments back reference




		public:
			//destructor
			virtual ~ClassifierImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The query allAttributes gives an ordered set of all owned and inherited attributes of the Classifier. All owned attributes appear before any inherited attributes, and the attributes inherited from any more specific parent Classifier appear before those of any more general parent Classifier. However, if the Classifier has multiple immediate parents, then the relative ordering of the sets of attributes from those parents is not defined.
			result = (attribute->asSequence()->union(parents()->asSequence().allAttributes())->select(p | member->includes(p))->asOrderedSet())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::Property> > allAttributes() ;
			
			/*!
			 The query allFeatures() gives all of the Features in the namespace of the Classifier. In general, through mechanisms such as inheritance, this will be a larger set than feature.
			result = (member->select(oclIsKindOf(Feature))->collect(oclAsType(Feature))->asSet())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::Feature> > allFeatures() ;
			
			/*!
			 The query allParents() gives all of the direct and indirect ancestors of a generalized Classifier.
			result = (parents()->union(parents()->collect(allParents())->asSet()))
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::Classifier> > allParents() ;
			
			/*!
			 The Interfaces realized by this Classifier and all of its generalizations
			result = (directlyRealizedInterfaces()->union(self.allParents()->collect(directlyRealizedInterfaces()))->asSet())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > allRealizedInterfaces() ;
			
			/*!
			 All StructuralFeatures related to the Classifier that may have Slots, including direct attributes, inherited attributes, private attributes in generalizations, and memberEnds of Associations, but excluding redefined StructuralFeatures.
			result = (member->select(oclIsKindOf(StructuralFeature))->
			  collect(oclAsType(StructuralFeature))->
			   union(self.inherit(self.allParents()->collect(p | p.attribute)->asSet())->
			     collect(oclAsType(StructuralFeature)))->asSet())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::StructuralFeature> > allSlottableFeatures() ;
			
			/*!
			 The Interfaces used by this Classifier and all of its generalizations
			result = (directlyUsedInterfaces()->union(self.allParents()->collect(directlyUsedInterfaces()))->asSet())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > allUsedInterfaces() ;
			
			/*!
			 The Interfaces directly realized by this Classifier
			result = ((clientDependency->
			  select(oclIsKindOf(Realization) and supplier->forAll(oclIsKindOf(Interface))))->
			      collect(supplier.oclAsType(Interface))->asSet())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > directlyRealizedInterfaces() ;
			
			/*!
			 The Interfaces directly used by this Classifier
			result = ((supplierDependency->
			  select(oclIsKindOf(Usage) and client->forAll(oclIsKindOf(Interface))))->
			    collect(client.oclAsType(Interface))->asSet())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::Interface> > directlyUsedInterfaces() ;
			
			/*!
			 Retrieves all the attributes of this classifier, including those inherited from its parents. */ 
			virtual std::shared_ptr<Bag<uml::Property> > getAllAttributes() ;
			
			/*!
			 Retrieves all the operations of this classifier, including those inherited from its parents. */ 
			virtual std::shared_ptr<Bag<uml::Operation> > getAllOperations() ;
			
			/*!
			 Retrieves all the interfaces on which this classifier or any of its parents has a usage dependency. */ 
			virtual std::shared_ptr<Bag<uml::Interface> > getAllUsedInterfaces() ;
			
			/*!
			 The general Classifiers are the ones referenced by the Generalization relationships.
			result = (parents())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::Classifier> > getGenerals() ;
			
			/*!
			 The inheritedMember association is derived by inheriting the inheritable members of the parents.
			result = (inherit(parents()->collect(inheritableMembers(self))->asSet()))
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::NamedElement> > getInheritedMembers() ;
			
			/*!
			 Retrieves the first operation with the specified name, parameter names, and parameter types from this classifier. */ 
			virtual std::shared_ptr<uml::Operation> getOperation(std::string name,std::shared_ptr<Bag<std::string> >  parameterNames,std::shared_ptr<Bag<uml::Type> >  parameterTypes) ;
			
			/*!
			 Retrieves the first operation with the specified name, parameter names, and parameter types from this classifier, ignoring case if indicated. */ 
			virtual std::shared_ptr<uml::Operation> getOperation(std::string name,std::shared_ptr<Bag<std::string> >  parameterNames,std::shared_ptr<Bag<uml::Type> >  parameterTypes,bool ignoreCase) ;
			
			/*!
			 Retrieves the operations of this classifier. */ 
			virtual std::shared_ptr<Bag<uml::Operation> > getOperations() ;
			
			/*!
			 Retrieves the interfaces on which this classifier has a usage dependency. */ 
			virtual std::shared_ptr<Bag<uml::Interface> > getUsedInterfaces() ;
			
			/*!
			 The query hasVisibilityOf() determines whether a NamedElement is visible in the classifier. Non-private members are visible. It is only called when the argument is something owned by a parent.
			allParents()->including(self)->collect(member)->includes(n)
			result = (n.visibility <> VisibilityKind::private)
			<p>From package UML::Classification.</p> */ 
			virtual bool hasVisibilityOf(std::shared_ptr<uml::NamedElement>  n) ;
			
			/*!
			 The query inherit() defines how to inherit a set of elements passed as its argument.  It excludes redefined elements from the result.
			result = (inhs->reject(inh |
			  inh.oclIsKindOf(RedefinableElement) and
			  ownedMember->select(oclIsKindOf(RedefinableElement))->
			    select(redefinedElement->includes(inh.oclAsType(RedefinableElement)))
			       ->notEmpty()))
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::NamedElement> > inherit(std::shared_ptr<Bag<uml::NamedElement> >  inhs) ;
			
			/*!
			 The query inheritableMembers() gives all of the members of a Classifier that may be inherited in one of its descendants, subject to whatever visibility restrictions apply.
			c.allParents()->includes(self)
			result = (member->select(m | c.hasVisibilityOf(m)))
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::NamedElement> > inheritableMembers(std::shared_ptr<uml::Classifier>  c) ;
			
			/*!
			 result = (substitution.contract->includes(contract))
			<p>From package UML::Classification.</p> */ 
			virtual bool isSubstitutableFor(std::shared_ptr<uml::Classifier>  contract) ;
			
			/*!
			 The Classifier that maps to a GeneralizationSet may neither be a specific nor a general Classifier in any of the Generalization relationships defined for that GeneralizationSet. In other words, a power type may not be an instance of itself nor may its instances also be its subclasses.
			powertypeExtent->forAll( gs | 
			  gs.generalization->forAll( gen | 
			    not (gen.general = self) and not gen.general.allParents()->includes(self) and not (gen.specific = self) and not self.allParents()->includes(gen.specific) 
			  )) */ 
			virtual bool maps_to_generalization_set(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The query maySpecializeType() determines whether this classifier may have a generalization relationship to classifiers of the specified type. By default a classifier may specialize classifiers of the same or a more general type. It is intended to be redefined by classifiers that have different specialization constraints.
			result = (self.oclIsKindOf(c.oclType()))
			<p>From package UML::Classification.</p> */ 
			virtual bool maySpecializeType(std::shared_ptr<uml::Classifier>  c) ;
			
			/*!
			 Generalization hierarchies must be directed and acyclical. A Classifier can not be both a transitively general and transitively specific Classifier of the same Classifier.
			not allParents()->includes(self) */ 
			virtual bool no_cycles_in_generalization(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The parents of a Classifier must be non-final.
			parents()->forAll(not isFinalSpecialization) */ 
			virtual bool non_final_parents(Any diagnostics,std::map <   Any, Any >  context) ;
			
			/*!
			 The query parents() gives all of the immediate ancestors of a generalized Classifier.
			result = (generalization.general->asSet())
			<p>From package UML::Classification.</p> */ 
			virtual std::shared_ptr<Bag<uml::Classifier> > parents() ;
			
			/*!
			 A Classifier may only specialize Classifiers of a valid type.
			parents()->forAll(c | self.maySpecializeType(c)) */ 
			virtual bool specialize_type(Any diagnostics,std::map <   Any, Any >  context) ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 If true, the Classifier can only be instantiated by instantiating one of its specializations. An abstract Classifier is intended to be used by other Classifiers e.g., as the target of Associations or Generalizations.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsAbstract() const ;
			
			/*!
			 If true, the Classifier can only be instantiated by instantiating one of its specializations. An abstract Classifier is intended to be used by other Classifiers e.g., as the target of Associations or Generalizations.
			<p>From package UML::Classification.</p> */ 
			virtual void setIsAbstract (bool _isAbstract); 
			
			/*!
			 If true, the Classifier cannot be specialized.
			<p>From package UML::Classification.</p> */ 
			virtual bool getIsFinalSpecialization() const ;
			
			/*!
			 If true, the Classifier cannot be specialized.
			<p>From package UML::Classification.</p> */ 
			virtual void setIsFinalSpecialization (bool _isFinalSpecialization); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			
			/*!
			 The CollaborationUses owned by the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::CollaborationUse, uml::Element>> getCollaborationUse() const ;
			
			
			/*!
			 The generalizing Classifiers for this Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Bag<uml::Classifier>> getGeneral() const ;
			
			/*!
			 The Generalization relationships for this Classifier. These Generalizations navigate to more general Classifiers in the generalization hierarchy.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Subset<uml::Generalization, uml::Element>> getGeneralization() const ;
			
			/*!
			 All elements inherited by this Classifier from its general Classifiers.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Subset<uml::NamedElement, uml::NamedElement>> getInheritedMember() const ;
			
			/*!
			 The UseCases owned by this classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Subset<uml::UseCase, uml::NamedElement>> getOwnedUseCase() const ;
			
			/*!
			 The GeneralizationSet of which this Classifier is a power type.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Bag<uml::GeneralizationSet>> getPowertypeExtent() const ;
			
			/*!
			 The Classifiers redefined by this Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Classifier, uml::RedefinableElement>> getRedefinedClassifier() const ;
			
			/*!
			 A CollaborationUse which indicates the Collaboration that represents this Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<uml::CollaborationUse > getRepresentation() const ;
			
			/*!
			 A CollaborationUse which indicates the Collaboration that represents this Classifier.
			<p>From package UML::Classification.</p> */
			virtual void setRepresentation(std::shared_ptr<uml::CollaborationUse> _representation_representation) ;
			/*!
			 The Substitutions owned by this Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Subset<uml::Substitution, uml::Element>> getSubstitution() const ;
			
			/*!
			 The set of UseCases for which this Classifier is the subject.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Bag<uml::UseCase>> getUseCase() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 All of the Properties that are direct (i.e., not inherited or imported) attributes of the Classifier.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Feature>> getAttribute() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement>> getFeature() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement>> getMember() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Namespace > getNamespace() const ;/*!
			 The Elements owned by this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element>> getOwnedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement>> getOwnedMember() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement>> getRedefinedElement() const ; 
			 
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
			std::weak_ptr<Classifier> m_thisClassifierPtr;
	};
}
#endif /* end of include guard: UML_CLASSIFIERCLASSIFIERIMPL_HPP */
