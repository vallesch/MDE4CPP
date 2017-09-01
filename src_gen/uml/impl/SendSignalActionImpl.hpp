//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_SENDSIGNALACTIONSENDSIGNALACTIONIMPL_HPP
#define UML_SENDSIGNALACTIONSENDSIGNALACTIONIMPL_HPP

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
#include "../SendSignalAction.hpp"

#include "impl/InvocationActionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class SendSignalActionImpl :virtual public InvocationActionImpl, virtual public SendSignalAction 
	{
		public: 
			SendSignalActionImpl(const SendSignalActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			SendSignalActionImpl& operator=(SendSignalActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			SendSignalActionImpl();

			//Additional constructors for the containments back reference
			SendSignalActionImpl(std::shared_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			SendSignalActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);




		public:
			//destructor
			virtual ~SendSignalActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The type, ordering, and multiplicity of an argument InputPin must be the same as the corresponding attribute of the signal.
			let attribute: OrderedSet(Property) = signal.allAttributes() in
			Sequence{1..argument->size()}->forAll(i | 
				argument->at(i).type.conformsTo(attribute->at(i).type) and 
				argument->at(i).isOrdered = attribute->at(i).isOrdered and
				argument->at(i).compatibleWith(attribute->at(i))) */ 
			virtual bool type_ordering_multiplicity(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 The number and order of argument InputPins must be the same as the number and order of attributes of the signal.
			argument->size()=signal.allAttributes()->size() */ 
			virtual bool number_order(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 If onPort is not empty, the Port given by onPort must be an owned or inherited feature of the type of the target InputPin.
			not onPort->isEmpty() implies target.type.oclAsType(Classifier).allFeatures()->includes(onPort) */ 
			virtual bool type_target_pin(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Signal whose instance is transmitted to the target.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Signal > getSignal() const ;
			
			/*!
			 The Signal whose instance is transmitted to the target.
			<p>From package UML::Actions.</p> */
			virtual void setSignal(std::shared_ptr<uml::Signal> _signal_signal) ;
			/*!
			 The InputPin that provides the target object to which the Signal instance is sent.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::InputPin > getTarget() const ;
			
			/*!
			 The InputPin that provides the target object to which the Signal instance is sent.
			<p>From package UML::Actions.</p> */
			virtual void setTarget(std::shared_ptr<uml::InputPin> _target_target) ;
							
			
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
#endif /* end of include guard: UML_SENDSIGNALACTIONSENDSIGNALACTIONIMPL_HPP */

