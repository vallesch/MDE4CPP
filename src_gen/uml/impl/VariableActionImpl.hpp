//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef UML_VARIABLEACTIONVARIABLEACTIONIMPL_HPP
#define UML_VARIABLEACTIONVARIABLEACTIONIMPL_HPP

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
#include "../VariableAction.hpp"

#include "impl/ActionImpl.hpp"

#include "SubsetUnion.hpp"



//*********************************
namespace uml 
{
	class VariableActionImpl :virtual public ActionImpl, virtual public VariableAction 
	{
		public: 
			VariableActionImpl(const VariableActionImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			VariableActionImpl& operator=(VariableActionImpl const&) = delete;

		protected:
			friend class UmlFactoryImpl;
			VariableActionImpl();

			//Additional constructors for the containments back reference
			VariableActionImpl(std::shared_ptr<uml::Activity > par_activity);


			//Additional constructors for the containments back reference
			VariableActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode);




		public:
			//destructor
			virtual ~VariableActionImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 The VariableAction must be in the scope of the variable.
			variable.isAccessibleBy(self) */ 
			virtual bool scope_of_variable(boost::any diagnostics,std::map <   boost::any, boost::any >  context)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 The Variable to be read or written.
			<p>From package UML::Actions.</p> */
			virtual std::shared_ptr<uml::Variable > getVariable() const ;
			
			/*!
			 The Variable to be read or written.
			<p>From package UML::Actions.</p> */
			virtual void setVariable(std::shared_ptr<uml::Variable> _variable_variable) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			/*!
			 The Element that owns this Element.
			<p>From package UML::CommonStructure.</p> */
			virtual std::weak_ptr<uml::Element > getOwner() const ;/*!
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
#endif /* end of include guard: UML_VARIABLEACTIONVARIABLEACTIONIMPL_HPP */

