#include "ecore/impl/EObjectImpl.hpp"

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

#include <cassert>
#include <iostream>
#include <sstream>

#include "abstractDataTypes/Bag.hpp"
#include "abstractDataTypes/Union.hpp"
#include "abstractDataTypes/Any.hpp"
#include "abstractDataTypes/SubsetUnion.hpp"
#include "ecore/EAnnotation.hpp"
#include "ecore/EClass.hpp"
#include "ecore/impl/EcorePackageImpl.hpp"

//Forward declaration includes
#include "persistence/interfaces/XLoadHandler.hpp" // used for Persistence
#include "persistence/interfaces/XSaveHandler.hpp" // used for Persistence
#include "ecore/EcoreFactory.hpp"
#include "ecore/EcorePackage.hpp"

#include <exception> // used in Persistence

#include "ecore/EClass.hpp"

#include "ecore/EObject.hpp"

#include "ecore/EOperation.hpp"

#include "ecore/EReference.hpp"

#include "ecore/EStructuralFeature.hpp"

#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "ecore/EcorePackage.hpp"
#include "ecore/EcoreFactory.hpp"
#include "ecore/EAttribute.hpp"
#include "ecore/EStructuralFeature.hpp"

using namespace ecore;

//*********************************
// Constructor / Destructor
//*********************************
EObjectImpl::EObjectImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

		/*Union*/
		m_eContens.reset(new Union<ecore::EObject>());
			#ifdef SHOW_SUBSET_UNION
			std::cout << "Initialising Union: " << "m_eContens - Union<ecore::EObject>()" << std::endl;
		#endif
	
	

	//Init references
	

	
	
}

EObjectImpl::~EObjectImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete EObject "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
}


//Additional constructor for the containments back reference
			EObjectImpl::EObjectImpl(std::weak_ptr<ecore::EObject > par_eContainer)
			:EObjectImpl()
			{
			    m_eContainer = par_eContainer;
			}






EObjectImpl::EObjectImpl(const EObjectImpl & obj):EObjectImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy EObject "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif

	//copy references with no containment (soft copy)
	
	m_eContainer  = obj.getEContainer();


	//Clone references with containment (deep copy)


}

std::shared_ptr<ecore::EObject>  EObjectImpl::copy() const
{
	std::shared_ptr<EObjectImpl> element(new EObjectImpl(*this));
	element->setThisEObjectPtr(element);
	return element;
}

std::shared_ptr<EClass> EObjectImpl::eStaticClass() const
{
	return EcorePackageImpl::eInstance()->getEObject_EClass();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<Bag <   ecore::EObject > > EObjectImpl::eAllContents() const
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<ecore::EClass> EObjectImpl::eClass() const
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return this->eStaticClass();
	//end of body
}



std::shared_ptr<ecore::EStructuralFeature> EObjectImpl::eContainingFeature() const
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<ecore::EReference> EObjectImpl::eContainmentFeature() const
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

std::shared_ptr<Bag <   ecore::EObject > > EObjectImpl::eContents() const
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return getEContens();
	//end of body
}

std::shared_ptr<Bag <   ecore::EObject > > EObjectImpl::eCrossReferences() const
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

Any EObjectImpl::eGet(std::shared_ptr<ecore::EStructuralFeature>  feature) const
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return this->eGet(feature,false);
	//end of body
}

Any EObjectImpl::eGet(std::shared_ptr<ecore::EStructuralFeature>  feature,bool resolve) const
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return this->eGet(feature->getFeatureID(),resolve,false);
	//end of body
}

Any EObjectImpl::eInvoke(std::shared_ptr<ecore::EOperation>  operation,Bag <   Any >  arguments) const
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool EObjectImpl::eIsProxy() const
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool EObjectImpl::eIsSet(std::shared_ptr<ecore::EStructuralFeature>  feature) const
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	return this->internalEIsSet(feature->getFeatureID());
	//end of body
}

int EObjectImpl::eResource() const
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

void EObjectImpl::eSet(std::shared_ptr<ecore::EStructuralFeature>  feature,Any newValue)
{
	//ADD_COUNT(__PRETTY_FUNCTION__)
	//generated from body annotation
	this->eSet(feature->getFeatureID(), newValue);
	//end of body
}

void EObjectImpl::eUnset(std::shared_ptr<ecore::EStructuralFeature>  feature) const
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::weak_ptr<ecore::EObject > EObjectImpl::getEContainer() const
{

    return m_eContainer;
}
void EObjectImpl::setEContainer(std::shared_ptr<ecore::EObject> _eContainer)
{
    m_eContainer = _eContainer;
}




//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<ecore::EObject>> EObjectImpl::getEContens() const
{
	return m_eContens;
}


std::shared_ptr<EObject> EObjectImpl::getThisEObjectPtr() const
{
	return m_thisEObjectPtr.lock();
}
void EObjectImpl::setThisEObjectPtr(std::weak_ptr<EObject> thisEObjectPtr)
{
	m_thisEObjectPtr = thisEObjectPtr;
}
std::shared_ptr<ecore::EObject> EObjectImpl::eContainer() const
{
	if(auto wp = m_eContainer.lock())
	{
		return wp;
	}
	return nullptr;
}

//*********************************
// Structural Feature Getter/Setter
//*********************************
Any EObjectImpl::eGet(int featureID, bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case EcorePackage::EOBJECT_EREFERENCE_ECONTAINER:
			return eAny(getEContainer()); //391
		case EcorePackage::EOBJECT_EREFERENCE_ECONTENS:
			return eAny(getEContens()); //390
	}
	Any result;
	return result;
}
bool EObjectImpl::internalEIsSet(int featureID) const
{
	switch(featureID)
	{
		case EcorePackage::EOBJECT_EREFERENCE_ECONTAINER:
			return getEContainer().lock() != nullptr; //391
		case EcorePackage::EOBJECT_EREFERENCE_ECONTENS:
			return getEContens() != nullptr; //390
	}
	bool result = false;
	return result;
}
bool EObjectImpl::eSet(int featureID, Any newValue)
{
	switch(featureID)
	{
		case EcorePackage::EOBJECT_EREFERENCE_ECONTAINER:
		{
			// BOOST CAST
			std::shared_ptr<ecore::EObject> _eContainer = newValue->get<std::shared_ptr<ecore::EObject>>();
			setEContainer(_eContainer); //391
			return true;
		}
	}

	bool result = false;
	return result;
}

//*********************************
// Persistence Functions
//*********************************
void EObjectImpl::load(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler)
{
	std::map<std::string, std::string> attr_list = loadHandler->getAttributeList();
	loadAttributes(loadHandler, attr_list);

	//
	// Create new objects (from references (containment == true))
	//
	// get EcoreFactory
	std::shared_ptr<ecore::EcoreFactory> modelFactory = ecore::EcoreFactory::eInstance();
	int numNodes = loadHandler->getNumOfChildNodes();
	for(int ii = 0; ii < numNodes; ii++)
	{
		loadNode(loadHandler->getNextNodeName(), loadHandler, modelFactory);
	}
}		

void EObjectImpl::loadAttributes(std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::map<std::string, std::string> attr_list)
{

}

void EObjectImpl::loadNode(std::string nodeName, std::shared_ptr<persistence::interfaces::XLoadHandler> loadHandler, std::shared_ptr<ecore::EcoreFactory> modelFactory)
{

	try
	{
		if ( nodeName.compare("eContens") == 0 )
		{
  			std::string typeName = loadHandler->getCurrentXSITypeName();
			if (typeName.empty())
			{
				typeName = "EObject";
			}
			std::shared_ptr<ecore::EObject> eContens = modelFactory->create(typeName, loadHandler->getCurrentObject(), EcorePackage::EOBJECT_EREFERENCE_ECONTAINER);
			if (eContens != nullptr)
			{
				loadHandler->handleChild(eContens);
			}
			return;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
	catch (...) 
	{
		std::cout << "| ERROR    | " <<  "Exception occurred" << std::endl;
	}

}

void EObjectImpl::resolveReferences(const int featureID, std::list<std::shared_ptr<EObject> > references)
{
	switch(featureID)
	{
		case EcorePackage::EOBJECT_EREFERENCE_ECONTAINER:
		{
			if (references.size() == 1)
			{
				// Cast object to correct type
				std::shared_ptr<ecore::EObject> _eContainer = std::dynamic_pointer_cast<ecore::EObject>( references.front() );
				setEContainer(_eContainer);
			}
			
			return;
		}
	}
}

void EObjectImpl::save(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	saveContent(saveHandler);

	
	ecore::EObjectImpl::saveContent(saveHandler);
	
}

void EObjectImpl::saveContent(std::shared_ptr<persistence::interfaces::XSaveHandler> saveHandler) const
{
	try
	{
		std::shared_ptr<ecore::EcorePackage> package = ecore::EcorePackage::eInstance();

	


		//
		// Add new tags (from references)
		//
		std::shared_ptr<EClass> metaClass = this->eClass();
		// Save 'eContens'
		std::shared_ptr<Union<ecore::EObject>> list_eContens = this->getEContens();
		for (std::shared_ptr<ecore::EObject> eContens : *list_eContens) 
		{
			saveHandler->addReference(eContens, "eContens", eContens->eClass() != package->getEObject_EClass());
		}
	}
	catch (std::exception& e)
	{
		std::cout << "| ERROR    | " << e.what() << std::endl;
	}
}

