//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_OPAQUEACTIONOPAQUEACTIONIMPL_HPP
#define UML_OPAQUEACTIONOPAQUEACTIONIMPL_HPP

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
#include "../OpaqueAction.hpp"

#include "impl/ActionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class OpaqueActionImpl :virtual public ActionImpl, virtual public OpaqueAction 
	{
		public: 
			OpaqueActionImpl(const OpaqueActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			OpaqueActionImpl& operator=(OpaqueActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			OpaqueActionImpl();

			//Additional constructors for the containments back reference
			OpaqueActionImpl(std::shared_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			OpaqueActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);




		public:
			//destructor
			virtual ~OpaqueActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 If the language attribute is not empty, then the size of the body and language lists must be the same.
			language->notEmpty() implies (_'body'->size() = language->size()) */ 
			virtual bool language_body_size(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 Provides a textual specification of the functionality of the Action, in one or more languages other than UML.
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<std::string> > getBody() const ;
			
			/*!
			 If provided, a specification of the language used for each of the body Strings.
			<p>From package UML::Actions.</p> */ 
			virtual std::shared_ptr<Bag<std::string> > getLanguage() const ;
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The InputPins providing inputs to the OpaqueAction.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::InputPin, uml::InputPin > > getInputValue() const ;
			
			/*!
			 The OutputPins on which the OpaqueAction provides outputs.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<Subset<uml::OutputPin, uml::OutputPin > > getOutputValue() const ;
			
							
			
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
			 The ordered set of OutputPins representing outputs from the Action.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > getOutput() const ;/*!
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
#endif /* end of include guard: UML_OPAQUEACTIONOPAQUEACTIONIMPL_HPP */

