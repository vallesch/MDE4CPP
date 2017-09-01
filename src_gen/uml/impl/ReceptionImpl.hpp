//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_RECEPTIONRECEPTIONIMPL_HPP
#define UML_RECEPTIONRECEPTIONIMPL_HPP

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
#include "../Reception.hpp"

#include "impl/BehavioralFeatureImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class ReceptionImpl :virtual public BehavioralFeatureImpl, virtual public Reception 
	{
		public: 
			ReceptionImpl(const ReceptionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			ReceptionImpl& operator=(ReceptionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			ReceptionImpl();

			//Additional constructors for the containments back reference
			ReceptionImpl(std::shared_ptr<uml::Namespace > par_namespace);




		public:
			//destructor
			virtual ~ReceptionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 A Reception has the same name as its signal
			name = signal.name */ 
			virtual bool same_name_as_signal(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			/*!
			 A Reception's parameters match the ownedAttributes of its signal by name, type, and multiplicity
			signal.ownedAttribute->size() = ownedParameter->size() and
			Sequence{1..signal.ownedAttribute->size()}->forAll( i | 
			    ownedParameter->at(i).direction = ParameterDirectionKind::_'in' and 
			    ownedParameter->at(i).name = signal.ownedAttribute->at(i).name and
			    ownedParameter->at(i).type = signal.ownedAttribute->at(i).type and
			    ownedParameter->at(i).lowerBound() = signal.ownedAttribute->at(i).lowerBound() and
			    ownedParameter->at(i).upperBound() = signal.ownedAttribute->at(i).upperBound()
			) */ 
			virtual bool same_structure_as_signal(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Signal that this Reception handles.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual std::shared_ptr<uml::Signal > getSignal() const ;
			
			/*!
			 The Signal that this Reception handles.
			<p>From package UML::SimpleClassifiers.</p> */
			virtual void setSignal(std::shared_ptr<uml::Signal> _signal_signal) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
			 A collection of NamedElements owned by the Namespace.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<SubsetUnion<uml::NamedElement, uml::Element,uml::NamedElement > > getOwnedMember() const ;/*!
			 A collection of NamedElements identifiable within the Namespace, either by being owned or by being introduced by importing or inheritance.
			<p>From package UML::CommonStructure.</p> */
			virtual std::shared_ptr<Union<uml::NamedElement> > getMember() const ;/*!
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
#endif /* end of include guard: UML_RECEPTIONRECEPTIONIMPL_HPP */

