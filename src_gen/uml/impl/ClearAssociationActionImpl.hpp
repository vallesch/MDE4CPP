//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_CLEARASSOCIATIONACTIONCLEARASSOCIATIONACTIONIMPL_HPP
#define UML_CLEARASSOCIATIONACTIONCLEARASSOCIATIONACTIONIMPL_HPP

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
#include "../ClearAssociationAction.hpp"

#include "impl/ActionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ClearAssociationActionImpl :virtual public ActionImpl, virtual public ClearAssociationAction 
	{
		public: 
			ClearAssociationActionImpl(const ClearAssociationActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ClearAssociationActionImpl& operator=(ClearAssociationActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ClearAssociationActionImpl();

			//Additional constructors for the containments back reference
			ClearAssociationActionImpl(std::shared_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ClearAssociationActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);




		public:
			//destructor
			virtual ~ClearAssociationActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The multiplicity of the object InputPin is 1..1.
			object.is(1,1) */ 
			virtual bool multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The type of the InputPin must conform to the type of at least one of the memberEnds of the association.
			association.memberEnd->exists(self.object.type.conformsTo(type)) */ 
			virtual bool same_type(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Association to be cleared.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Association > getAssociation() const ;
			
			/*!
			 The Association to be cleared.
			<p>From package UML::Actions.</p> */
			virtual void setAssociation(std::shared_ptr<uml::Association> _association_association) ;
			/*!
			 The InputPin that gives the object whose participation in the Association is to be cleared.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getObject() const ;
			
			/*!
			 The InputPin that gives the object whose participation in the Association is to be cleared.
			<p>From package UML::Actions.</p> */
			virtual void setObject(std::shared_ptr<uml::InputPin> _object_object) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 The ordered set of InputPins representing the inputs to the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > getInput() const ;/*!
			 ActivityGroups containing the ActivityNode.
			<p>From package UML::Activities.</p> */
			virtual std::shared_ptr<Union<uml::ActivityGroup> > getInGroup() const ;/*!
			 The RedefinableElement that is being redefined by this element.
			<p>From package UML::Classification.</p> */
			virtual std::shared_ptr<Union<uml::RedefinableElement> > getRedefinedElement() const ;/*!
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
#endif /* end of include guard: UML_CLEARASSOCIATIONACTIONCLEARASSOCIATIONACTIONIMPL_HPP */

