//********************************************************************
//*    
//* Warning: This file was generated by ecore4CPP Generator
//*
//********************************************************************

#ifndef ECORE_EPACKAGEEPACKAGEIMPL_HPP
#define ECORE_EPACKAGEEPACKAGEIMPL_HPP

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
#include "../EPackage.hpp"

#include "ecore/impl/ENamedElementImpl.hpp"



//*********************************
namespace ecore 
{
	class EPackageImpl :virtual public ENamedElementImpl, virtual public EPackage 
	{
		public: 
			EPackageImpl(const EPackageImpl & obj);
			virtual std::shared_ptr<ecore::EObject> copy() const;

		private:    
			EPackageImpl& operator=(EPackageImpl const&) = delete;

		protected:
			friend class EcoreFactoryImpl;
			EPackageImpl();

			//Additional constructors for the containments back reference
			EPackageImpl(std::weak_ptr<ecore::EPackage > par_eSuperPackage);




		public:
			//destructor
			virtual ~EPackageImpl();
			
			//*********************************
			// Operations
			//*********************************
			/*!
			 */ 
			virtual void addEParameter(std::shared_ptr<ecore::EOperation>  owner,std::shared_ptr<ecore::EClassifier>  type,std::string name)  ;
			
			/*!
			 */ 
			virtual void addEParameter(std::shared_ptr<ecore::EOperation>  owner,std::shared_ptr<ecore::EClassifier>  type,std::string name,int lower,int upper)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EParameter> addEParameter(std::shared_ptr<ecore::EOperation>  owner,std::shared_ptr<ecore::EClassifier>  type,std::string name,int lower,int upper,bool isUnique,bool isOrdered)  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EClassifier> getEClassifier(std::string name)  const  ;
			
			/*!
			 */ 
			virtual std::shared_ptr<ecore::EParameter> internalAddEParameter(std::shared_ptr<ecore::EOperation>  owner,std::shared_ptr<ecore::EClassifier>  type,std::string name)  ;
			
			
			
			//*********************************
			// Attributes Getter Setter
			//*********************************
			/*!
			 */ 
			virtual std::string getNsPrefix() const ;
			
			/*!
			 */ 
			virtual void setNsPrefix (std::string _nsPrefix); 
			
			/*!
			 */ 
			virtual std::string getNsURI() const ;
			
			/*!
			 */ 
			virtual void setNsURI (std::string _nsURI); 
			
			
			
			//*********************************
			// Reference
			//*********************************
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EClassifier> > getEClassifiers() const ;
			
			/*!
			 */
			virtual std::shared_ptr<ecore::EFactory > getEFactoryInstance() const ;
			
			/*!
			 */
			virtual void setEFactoryInstance(std::shared_ptr<ecore::EFactory> _eFactoryInstance_eFactoryInstance) ;
			/*!
			 */
			virtual std::shared_ptr< Bag<ecore::EPackage> > getESubpackages() const ;
			
			/*!
			 */
			virtual std::weak_ptr<ecore::EPackage > getESuperPackage() const ;
			
							
			
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
			virtual std::shared_ptr<EClass> eStaticClass() const;
	};
}
#endif /* end of include guard: ECORE_EPACKAGEEPACKAGEIMPL_HPP */

