//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EFACTORYEFACTORYIMPL_HPP
#define ECORE_EFACTORYEFACTORYIMPL_HPP

#ifdef NDEBUG
    #define DEBUG_MESSAGE(a) /**/
#else
    #define DEBUG_MESSAGE(a) a
#endif

//*********************************
// generated Includes

//Model includes
#include "../EFactory.hpp"

#include "impl/EModelElementImpl.hpp"



//*********************************
namespace ecore 
{
	class EFactoryImpl :virtual public EModelElementImpl, virtual public EFactory 
	{
		public: 
			EFactoryImpl(const EFactoryImpl & obj);
			virtual ecore::EObject *  copy() const;

		private:    
			EFactoryImpl& operator=(EFactoryImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EFactoryImpl();

		public:
			//destructor
			virtual ~EFactoryImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EObject>  create(std::shared_ptr<ecore::EClass>  eClass)  const  ;
			
			/*!
			 */ 
			virtual boost::any createFromString(std::shared_ptr<ecore::EDataType>  eDataType,std::string literalValue)  const  ;
			
			/*!
			 */ 
			virtual std::string convertToString(std::shared_ptr<ecore::EDataType>  eDataType,boost::any instanceValue)  const  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr<ecore::EPackage> getEPackage() const ;
			
			/*!
			 */
			virtual void setEPackage(std::shared_ptr<ecore::EPackage> _ePackage) ;
							
			
			//*********************************
			// Union Getter
			//*********************************
			 
			 
			//*********************************
			// Structural Feature Getter/Setter
			//*********************************
			
			virtual boost::any eGet(int featureID, bool resolve, bool coreType) const ;
			
		protected:
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_EFACTORYEFACTORYIMPL_HPP */

