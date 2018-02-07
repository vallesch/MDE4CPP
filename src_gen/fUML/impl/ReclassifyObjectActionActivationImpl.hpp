//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_RECLASSIFYOBJECTACTIONACTIVATIONRECLASSIFYOBJECTACTIONACTIVATIONIMPL_HPP
#define FUML_RECLASSIFYOBJECTACTIONACTIVATIONRECLASSIFYOBJECTACTIONACTIVATIONIMPL_HPP

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
#include "../ReclassifyObjectActionActivation.hpp"

#include "fUML/impl/ActionActivationImpl.hpp"



//*********************************
namespace fUML 
{
	class ReclassifyObjectActionActivationImpl :virtual public ActionActivationImpl, virtual public ReclassifyObjectActionActivation 
	{
		public: 
			ReclassifyObjectActionActivationImpl(const ReclassifyObjectActionActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			ReclassifyObjectActionActivationImpl& operator=(ReclassifyObjectActionActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			ReclassifyObjectActionActivationImpl();



		public:
			//destructor
			virtual ~ReclassifyObjectActionActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			
			
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
#endif /* end of include guard: FUML_RECLASSIFYOBJECTACTIONACTIVATIONRECLASSIFYOBJECTACTIONACTIVATIONIMPL_HPP */

