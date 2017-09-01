//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_RECLASSIFYOBJECTACTIONRECLASSIFYOBJECTACTIONIMPL_HPP
#define UML_RECLASSIFYOBJECTACTIONRECLASSIFYOBJECTACTIONIMPL_HPP

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
#include "../ReclassifyObjectAction.hpp"

#include "impl/ActionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ReclassifyObjectActionImpl :virtual public ActionImpl, virtual public ReclassifyObjectAction 
	{
		public: 
			ReclassifyObjectActionImpl(const ReclassifyObjectActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ReclassifyObjectActionImpl& operator=(ReclassifyObjectActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ReclassifyObjectActionImpl();

			//Additional constructors for the containments back reference
			ReclassifyObjectActionImpl(std::shared_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			ReclassifyObjectActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);




		public:
			//destructor
			virtual ~ReclassifyObjectActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The object InputPin has no type.
			object.type = null */ 
			virtual bool input_pin(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 None of the newClassifiers may be abstract.
			not newClassifier->exists(isAbstract) */ 
			virtual bool classifier_not_abstract(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The multiplicity of the object InputPin is 1..1.
			object.is(1,1) */ 
			virtual bool multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Specifies whether existing Classifiers should be removed before adding the new Classifiers.
			<p>From package UML::Actions.</p> */ 
			virtual bool getIsReplaceAll() const ;
			
			/*!
			 Specifies whether existing Classifiers should be removed before adding the new Classifiers.
			<p>From package UML::Actions.</p> */ 
			virtual void setIsReplaceAll (bool _isReplaceAll); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 A set of Classifiers to be added to the Classifiers of the given object.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr< Bag<uml::Classifier> > getNewClassifier() const ;
			
			/*!
			 The InputPin that holds the object to be reclassified.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getObject() const ;
			
			/*!
			 The InputPin that holds the object to be reclassified.
			<p>From package UML::Actions.</p> */
			virtual void setObject(std::shared_ptr<uml::InputPin> _object_object) ;
			/*!
			 A set of Classifiers to be removed from the Classifiers of the given object.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr< Bag<uml::Classifier> > getOldClassifier() const ;
			
							
			
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
#endif /* end of include guard: UML_RECLASSIFYOBJECTACTIONRECLASSIFYOBJECTACTIONIMPL_HPP */

