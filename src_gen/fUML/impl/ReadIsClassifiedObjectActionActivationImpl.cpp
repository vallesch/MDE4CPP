#include "ReadIsClassifiedObjectActionActivationImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "fUMLPackageImpl.hpp"

using namespace fUML;

//*********************************
// Constructor / Destructor
//*********************************
ReadIsClassifiedObjectActionActivationImpl::ReadIsClassifiedObjectActionActivationImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************

}

ReadIsClassifiedObjectActionActivationImpl::~ReadIsClassifiedObjectActionActivationImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete ReadIsClassifiedObjectActionActivation "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}

ReadIsClassifiedObjectActionActivationImpl::ReadIsClassifiedObjectActionActivationImpl(const ReadIsClassifiedObjectActionActivationImpl & obj)
{
	//create copy of all Attributes
	m_firing = obj.isFiring();
	m_running = obj.isRunning();

	//copy references with now containment
	
	m_group  = obj.getGroup();

		std::shared_ptr< Bag<fUML::ActivityEdgeInstance> >
	 _incomingEdges = obj.getIncomingEdges();
	m_incomingEdges.reset(new 	 Bag<fUML::ActivityEdgeInstance> 
	(*(obj.getIncomingEdges().get())));// this->getIncomingEdges()->insert(this->getIncomingEdges()->end(), _incomingEdges->begin(), _incomingEdges->end());

	m_node  = obj.getNode();

		std::shared_ptr< Bag<fUML::ActivityEdgeInstance> >
	 _outgoingEdges = obj.getOutgoingEdges();
	m_outgoingEdges.reset(new 	 Bag<fUML::ActivityEdgeInstance> 
	(*(obj.getOutgoingEdges().get())));// this->getOutgoingEdges()->insert(this->getOutgoingEdges()->end(), _outgoingEdges->begin(), _outgoingEdges->end());

		std::shared_ptr< Bag<fUML::PinActivation> >
	 _pinActivation = obj.getPinActivation();
	m_pinActivation.reset(new 	 Bag<fUML::PinActivation> 
	(*(obj.getPinActivation().get())));// this->getPinActivation()->insert(this->getPinActivation()->end(), _pinActivation->begin(), _pinActivation->end());


	//clone containt lists
	std::shared_ptr<Bag<fUML::Token>> _heldTokensList = obj.getHeldTokens();
	for(std::shared_ptr<fUML::Token> _heldTokens : *_heldTokensList)
	{
		this->getHeldTokens()->add(std::shared_ptr<fUML::Token>(dynamic_cast<fUML::Token*>(_heldTokens->copy())));
	}
}

ecore::EObject *  ReadIsClassifiedObjectActionActivationImpl::copy() const
{
	return new ReadIsClassifiedObjectActionActivationImpl(*this);
}

std::shared_ptr<ecore::EClass> ReadIsClassifiedObjectActionActivationImpl::eStaticClass() const
{
	return FUMLPackageImpl::eInstance()->getReadIsClassifiedObjectActionActivation();
}

//*********************************
// Attribute Setter Gettter
//*********************************

//*********************************
// Operations
//*********************************
bool
 ReadIsClassifiedObjectActionActivationImpl::checkAllParents(std::shared_ptr<uml::Classifier>  type,std::shared_ptr<uml::Classifier>  classifier) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************

//*********************************
// Union Getter
//*********************************


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any ReadIsClassifiedObjectActionActivationImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case FUMLPackage::ACTIONACTIVATION_FIRING:
			return isFiring(); //1067
		case FUMLPackage::ACTIVITYNODEACTIVATION_GROUP:
			return getGroup(); //1063
		case FUMLPackage::ACTIVITYNODEACTIVATION_HELDTOKENS:
			return getHeldTokens(); //1062
		case FUMLPackage::ACTIVITYNODEACTIVATION_INCOMINGEDGES:
			return getIncomingEdges(); //1061
		case FUMLPackage::ACTIVITYNODEACTIVATION_NODE:
			return getNode(); //1064
		case FUMLPackage::ACTIVITYNODEACTIVATION_OUTGOINGEDGES:
			return getOutgoingEdges(); //1060
		case FUMLPackage::ACTIONACTIVATION_PINACTIVATION:
			return getPinActivation(); //1066
		case FUMLPackage::ACTIVITYNODEACTIVATION_RUNNING:
			return isRunning(); //1065
	}
	return boost::any();
}
