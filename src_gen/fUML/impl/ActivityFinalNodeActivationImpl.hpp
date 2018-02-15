//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_ACTIVITYFINALNODEACTIVATIONACTIVITYFINALNODEACTIVATIONIMPL_HPP
#define FUML_ACTIVITYFINALNODEACTIVATIONACTIVITYFINALNODEACTIVATIONIMPL_HPP

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
#include "../ActivityFinalNodeActivation.hpp"

#include "fUML/impl/ControlNodeActivationImpl.hpp"

#include "fUML/ActivityExecution.hpp"
#include "fUML/ExpansionActivationGroup.hpp"
#include "fUML/ExpansionRegionActivation.hpp"
#include "fUML/FUMLFactory.hpp"
#include "fUML/StructuredActivityNodeActivation.hpp"
#include "uml/ActivityNode.hpp"


//*********************************
namespace fUML 
{
	class ActivityFinalNodeActivationImpl :virtual public ControlNodeActivationImpl, virtual public ActivityFinalNodeActivation 
	{
		public: 
			ActivityFinalNodeActivationImpl(const ActivityFinalNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ActivityFinalNodeActivationImpl& operator=(ActivityFinalNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ActivityFinalNodeActivationImpl();



		public:
			//destructor
			virtual ~ActivityFinalNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void fire(std::shared_ptr<Bag<fUML::Token> >  incomingTokens)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
							
			
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
#endif /* end of include guard: FUML_ACTIVITYFINALNODEACTIVATIONACTIVITYFINALNODEACTIVATIONIMPL_HPP */

