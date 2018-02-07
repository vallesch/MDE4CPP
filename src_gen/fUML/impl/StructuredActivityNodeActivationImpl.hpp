//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_STRUCTUREDACTIVITYNODEACTIVATIONSTRUCTUREDACTIVITYNODEACTIVATIONIMPL_HPP
#define FUML_STRUCTUREDACTIVITYNODEACTIVATIONSTRUCTUREDACTIVITYNODEACTIVATIONIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

#ifdef ACTIVITY_DEBUG_ON
    #define ACT_DEBUG(a) a
#else
    #define ACT_DEBUG(a) /**/
#endif

//#include "util/ProfileCallCount.hpp"

//*********************************
// generated Includes

//Model includes
#include "../StructuredActivityNodeActivation.hpp"

#include "fUML/impl/ActionActivationImpl.hpp"

#include "fuml/FUMLFactory.hpp"
#include "uml/StructuredActivityNode.hpp"
#include "uml/Action.hpp"
#include "uml/ActivityNode.hpp"
#include "uml/InputPin.hpp"
#include "uml/OutputPin.hpp"


//*********************************
namespace fUML 
{
	class StructuredActivityNodeActivationImpl :virtual public ActionActivationImpl, virtual public StructuredActivityNodeActivation 
	{
		public: 
			StructuredActivityNodeActivationImpl(const StructuredActivityNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			StructuredActivityNodeActivationImpl& operator=(StructuredActivityNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			StructuredActivityNodeActivationImpl();



		public:
			//destructor
			virtual ~StructuredActivityNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Token> > completeAction()  ;
			
			/*!
			 */ 
			virtual void createEdgeInstances()  ;
			
			/*!
			 */ 
			virtual void createNodeActivations()  ;
			
			/*!
			 */ 
			virtual void doAction()  ;
			
			/*!
			 */ 
			virtual void doStructuredActivity()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<fUML::ActivityNodeActivation> getNodeActivation(std::shared_ptr<uml::ActivityNode>  node)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<fUML::Value> > getPinValues(std::shared_ptr<uml::OutputPin>  pin)  ;
			
			/*!
			 */ 
			virtual bool isSourceFor(std::shared_ptr<fUML::ActivityEdgeInstance>  edgeInstance)  ;
			
			/*!
			 */ 
			virtual bool isSuspended()  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<Bag<uml::ActivityNode> > makeActivityNodeList(std::shared_ptr<Bag<uml::ExecutableNode> >  nodes)  ;
			
			/*!
			 */ 
			virtual void putPinValues(std::shared_ptr<uml::OutputPin>  pin,std::shared_ptr<Bag<fUML::Value> >  values)  ;
			
			/*!
			 */ 
			virtual void resume()  ;
			
			/*!
			 */ 
			virtual void terminate()  ;
			
			/*!
			 */ 
			virtual void terminateAll()  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<fUML::ActivityNodeActivationGroup > getActivationGroup() const ;
			
			/*!
			 */
			virtual void setActivationGroup(std::shared_ptr<fUML::ActivityNodeActivationGroup> _activationGroup_activationGroup) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			virtual void eSet(int featureID, boost::any newValue) ;

			virtual std::shared_ptr<ecore::EObject> eContainer() const ; 
			
		protected:
			virtual std::shared_ptr<ecore::EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: FUML_STRUCTUREDACTIVITYNODEACTIVATIONSTRUCTUREDACTIVITYNODEACTIVATIONIMPL_HPP */

