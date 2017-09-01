//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_ASSOCIATIONASSOCIATIONIMPL_HPP
#define UML_ASSOCIATIONASSOCIATIONIMPL_HPP

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
#include "../Association.hpp"

#include "impl/ClassifierImpl.hpp"
#include "impl/RelationshipImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class AssociationImpl :virtual public ClassifierImpl, virtual public RelationshipImpl, virtual public Association 
	{
		public: 
			AssociationImpl(const AssociationImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			AssociationImpl& operator=(AssociationImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			AssociationImpl();

			//Additional constructors for the containments back reference
			AssociationImpl(std::shared_ptr<uml::Namespace > par_namespace);


			//Additional constructors for the containments back reference
			AssociationImpl(std::shared_ptr<uml::Package > par_package);


			//Additional constructors for the containments back reference
			AssociationImpl(std::weak_ptr<uml::Element > par_owner);




		public:
			//destructor
			virtual ~AssociationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 An Association specializing another Association has the same number of ends as the other Association.
			parents()->select(oclIsKindOf(Association)).oclAsType(Association)->forAll(p | p.memberEnd->size() = self.memberEnd->size()) */ 
			virtual bool specialized_end_number(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 When an Association specializes another Association, every end of the specific Association corresponds to an end of the general Association, and the specific end reaches the same type or a subtype of the corresponding general end.
			Sequence{1..memberEnd->size()}->
				forAll(i | general->select(oclIsKindOf(Association)).oclAsType(Association)->
					forAll(ga | self.memberEnd->at(i).type.conformsTo(ga.memberEnd->at(i).type))) */ 
			virtual bool specialized_end_types(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Only binary Associations can be aggregations.
			memberEnd->exists(aggregation <> AggregationKind::none) implies (memberEnd->size() = 2 and memberEnd->exists(aggregation = AggregationKind::none)) */ 
			virtual bool binary_associations(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Ends of Associations with more than two ends must be owned by the Association itself.
			memberEnd->size() > 2 implies ownedEnd->includesAll(memberEnd) */ 
			virtual bool association_ends(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 memberEnd->forAll(type->notEmpty()) */ 
			virtual bool ends_must_be_typed(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 Determines whether this association is a binary association, i.e. whether it has exactly two member ends. */ 
			virtual bool isBinary()  ;
			
			/*!
			 endType is derived from the types of the member ends.
			result = (memberEnd->collect(type)->asSet())
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual std::shared_ptr<Bag<uml::Type> > getEndTypes()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether the Association is derived from other model elements such as other Associations.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual bool getIsDerived() const ;
			
			/*!
			 Specifies whether the Association is derived from other model elements such as other Associations.
			<p>From package UML::StructuredClassifiers.</p> */ 
			virtual void setIsDerived (bool _isDerived); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Classifiers that are used as types of the ends of the Association.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Type, uml::Element > > getEndType() const ;
			
			/*!
			 Each end represents participation of instances of the Classifier connected to the end in links of the Association.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::NamedElement > > getMemberEnd() const ;
			
			/*!
			 The ends that are owned by the Association itself.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Property, uml::Property /*Subset does not reference a union*/,uml::Feature,uml::NamedElement > > getOwnedEnd() const ;
			
			/*!
			 The navigable ends that are owned by the Association itself.
			<p>From package UML::StructuredClassifiers.</p> */
			virtual std::shared_ptr<Subset<uml::Property, uml::Property /*Subset does not reference a union*/ > > getNavigableOwnedEnd() const ;
			
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 Specifies the elements related by the Relationship.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::Element> > getRelatedElement() const ;/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 Specifies the Namespace that owns the NamedElement.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<uml::Namespace > getNamespace() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
			 Specifies each Feature directly defined in the classifier. Note that there may be members of the Classifier that are of the type Feature but are not included, e.g., inherited features.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::Feature, uml::NamedElement > > getFeature() const ;/*!
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
#endif /* end of include guard: UML_ASSOCIATIONASSOCIATIONIMPL_HPP */

