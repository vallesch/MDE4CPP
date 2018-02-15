//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef FUML_DATASTORENODEACTIVATIONDATASTORENODEACTIVATIONIMPL_HPP
#define FUML_DATASTORENODEACTIVATIONDATASTORENODEACTIVATIONIMPL_HPP

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
#include "../DataStoreNodeActivation.hpp"

#include "fUML/impl/CentralBufferNodeActivationImpl.hpp"

#include "fuml/Value.hpp"


//*********************************
namespace fUML 
{
	class DataStoreNodeActivationImpl :virtual public CentralBufferNodeActivationImpl, virtual public DataStoreNodeActivation 
	{
		public: 
			DataStoreNodeActivationImpl(const DataStoreNodeActivationImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			DataStoreNodeActivationImpl& operator=(DataStoreNodeActivationImpl const&) = delete;

		protected:
			friend class FUMLFactoryImpl;
			DataStoreNodeActivationImpl();



		public:
			//destructor
			virtual ~DataStoreNodeActivationImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void addToken(std::shared_ptr<fUML::Token>  token)  ;
			
			/*!
			 */ 
			virtual int removeToken(std::shared_ptr<fUML::Token>  token)  ;
			
			
			
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
#endif /* end of include guard: FUML_DATASTORENODEACTIVATIONDATASTORENODEACTIVATIONIMPL_HPP */

