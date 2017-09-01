#include "StartObjectBehaviorActionImpl.hpp"
#include <iostream>
#include <cassert>
#include "EAnnotation.hpp"
#include "EClass.hpp"
#include "UmlPackageImpl.hpp"

//Forward declaration includes
#include "Activity.hpp"

#include "ActivityEdge.hpp"

#include "ActivityGroup.hpp"

#include "ActivityNode.hpp"

#include "ActivityPartition.hpp"

#include "Behavior.hpp"

#include "CallAction.hpp"

#include "Classifier.hpp"

#include "Comment.hpp"

#include "Constraint.hpp"

#include "Dependency.hpp"

#include "EAnnotation.hpp"

#include "Element.hpp"

#include "ExceptionHandler.hpp"

#include "InputPin.hpp"

#include "InterruptibleActivityRegion.hpp"

#include "Namespace.hpp"

#include "OutputPin.hpp"

#include "Port.hpp"

#include "RedefinableElement.hpp"

#include "StringExpression.hpp"

#include "StructuredActivityNode.hpp"


using namespace uml;

//*********************************
// Constructor / Destructor
//*********************************
StartObjectBehaviorActionImpl::StartObjectBehaviorActionImpl()
{
	//*********************************
	// Attribute Members
	//*********************************

	//*********************************
	// Reference Members
	//*********************************
	//References
	

	//Init references
	
}

StartObjectBehaviorActionImpl::~StartObjectBehaviorActionImpl()
{
#ifdef SHOW_DELETION
	std::cout << "-------------------------------------------------------------------------------------------------\r\ndelete StartObjectBehaviorAction "<< this << "\r\n------------------------------------------------------------------------ " << std::endl;
#endif
	
}


//Additional constructor for the containments back reference
			StartObjectBehaviorActionImpl::StartObjectBehaviorActionImpl(std::shared_ptr<uml::Activity > par_activity)
			:StartObjectBehaviorActionImpl()
			{
			    m_activity = par_activity;
			}





//Additional constructor for the containments back reference
			StartObjectBehaviorActionImpl::StartObjectBehaviorActionImpl(std::weak_ptr<uml::StructuredActivityNode > par_inStructuredNode)
			:StartObjectBehaviorActionImpl()
			{
			    m_inStructuredNode = par_inStructuredNode;
			}






StartObjectBehaviorActionImpl::StartObjectBehaviorActionImpl(const StartObjectBehaviorActionImpl & obj):StartObjectBehaviorActionImpl()
{
	//create copy of all Attributes
	#ifdef SHOW_COPIES
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\r\ncopy StartObjectBehaviorAction "<< this << "\r\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ " << std::endl;
	#endif
	m_isLeaf = obj.getIsLeaf();
	m_isLocallyReentrant = obj.getIsLocallyReentrant();
	m_isSynchronous = obj.getIsSynchronous();
	m_name = obj.getName();
	m_qualifiedName = obj.getQualifiedName();
	m_visibility = obj.getVisibility();

	//copy references with no containment (soft copy)
	
	std::shared_ptr< Bag<uml::Dependency> > _clientDependency = obj.getClientDependency();
	m_clientDependency.reset(new Bag<uml::Dependency>(*(obj.getClientDependency().get())));

	m_context  = obj.getContext();

	std::shared_ptr<Union<uml::ActivityGroup> > _inGroup = obj.getInGroup();
	m_inGroup.reset(new Union<uml::ActivityGroup>(*(obj.getInGroup().get())));

	m_inStructuredNode  = obj.getInStructuredNode();

	std::shared_ptr< Bag<uml::ActivityEdge> > _incoming = obj.getIncoming();
	m_incoming.reset(new Bag<uml::ActivityEdge>(*(obj.getIncoming().get())));

	m_onPort  = obj.getOnPort();

	std::shared_ptr< Bag<uml::ActivityEdge> > _outgoing = obj.getOutgoing();
	m_outgoing.reset(new Bag<uml::ActivityEdge>(*(obj.getOutgoing().get())));

	m_owner  = obj.getOwner();

	std::shared_ptr<Union<uml::RedefinableElement> > _redefinedElement = obj.getRedefinedElement();
	m_redefinedElement.reset(new Union<uml::RedefinableElement>(*(obj.getRedefinedElement().get())));

	std::shared_ptr<Union<uml::Classifier> > _redefinitionContext = obj.getRedefinitionContext();
	m_redefinitionContext.reset(new Union<uml::Classifier>(*(obj.getRedefinitionContext().get())));


    
	//Clone references with containment (deep copy)

	if(obj.getActivity()!=nullptr)
	{
		m_activity.reset(dynamic_cast<uml::Activity*>(obj.getActivity()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_activity" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::InputPin>> _argumentList = obj.getArgument();
	for(std::shared_ptr<uml::InputPin> _argument : *_argumentList)
	{
		this->getArgument()->add(std::shared_ptr<uml::InputPin>(dynamic_cast<uml::InputPin*>(_argument->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_argument" << std::endl;
	#endif
	std::shared_ptr<Bag<ecore::EAnnotation>> _eAnnotationsList = obj.getEAnnotations();
	for(std::shared_ptr<ecore::EAnnotation> _eAnnotations : *_eAnnotationsList)
	{
		this->getEAnnotations()->add(std::shared_ptr<ecore::EAnnotation>(dynamic_cast<ecore::EAnnotation*>(_eAnnotations->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_eAnnotations" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ExceptionHandler>> _handlerList = obj.getHandler();
	for(std::shared_ptr<uml::ExceptionHandler> _handler : *_handlerList)
	{
		this->getHandler()->add(std::shared_ptr<uml::ExceptionHandler>(dynamic_cast<uml::ExceptionHandler*>(_handler->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_handler" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::InterruptibleActivityRegion>> _inInterruptibleRegionList = obj.getInInterruptibleRegion();
	for(std::shared_ptr<uml::InterruptibleActivityRegion> _inInterruptibleRegion : *_inInterruptibleRegionList)
	{
		this->getInInterruptibleRegion()->add(std::shared_ptr<uml::InterruptibleActivityRegion>(dynamic_cast<uml::InterruptibleActivityRegion*>(_inInterruptibleRegion->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inInterruptibleRegion" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ActivityPartition>> _inPartitionList = obj.getInPartition();
	for(std::shared_ptr<uml::ActivityPartition> _inPartition : *_inPartitionList)
	{
		this->getInPartition()->add(std::shared_ptr<uml::ActivityPartition>(dynamic_cast<uml::ActivityPartition*>(_inPartition->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_inPartition" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Constraint>> _localPostconditionList = obj.getLocalPostcondition();
	for(std::shared_ptr<uml::Constraint> _localPostcondition : *_localPostconditionList)
	{
		this->getLocalPostcondition()->add(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPostcondition->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_localPostcondition" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Constraint>> _localPreconditionList = obj.getLocalPrecondition();
	for(std::shared_ptr<uml::Constraint> _localPrecondition : *_localPreconditionList)
	{
		this->getLocalPrecondition()->add(std::shared_ptr<uml::Constraint>(dynamic_cast<uml::Constraint*>(_localPrecondition->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_localPrecondition" << std::endl;
	#endif
	if(obj.getNameExpression()!=nullptr)
	{
		m_nameExpression.reset(dynamic_cast<uml::StringExpression*>(obj.getNameExpression()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_nameExpression" << std::endl;
	#endif
	if(obj.getObject()!=nullptr)
	{
		m_object.reset(dynamic_cast<uml::InputPin*>(obj.getObject()->copy()));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_object" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::Comment>> _ownedCommentList = obj.getOwnedComment();
	for(std::shared_ptr<uml::Comment> _ownedComment : *_ownedCommentList)
	{
		this->getOwnedComment()->add(std::shared_ptr<uml::Comment>(dynamic_cast<uml::Comment*>(_ownedComment->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_ownedComment" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::ActivityNode>> _redefinedNodeList = obj.getRedefinedNode();
	for(std::shared_ptr<uml::ActivityNode> _redefinedNode : *_redefinedNodeList)
	{
		this->getRedefinedNode()->add(std::shared_ptr<uml::ActivityNode>(dynamic_cast<uml::ActivityNode*>(_redefinedNode->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_redefinedNode" << std::endl;
	#endif
	std::shared_ptr<Bag<uml::OutputPin>> _resultList = obj.getResult();
	for(std::shared_ptr<uml::OutputPin> _result : *_resultList)
	{
		this->getResult()->add(std::shared_ptr<uml::OutputPin>(dynamic_cast<uml::OutputPin*>(_result->copy())));
	}
	#ifdef SHOW_SUBSET_UNION
		std::cout << "Copying the Subset: " << "m_result" << std::endl;
	#endif

	

}

ecore::EObject *  StartObjectBehaviorActionImpl::copy() const
{
	return new StartObjectBehaviorActionImpl(*this);
}

std::shared_ptr<ecore::EClass> StartObjectBehaviorActionImpl::eStaticClass() const
{
	return UmlPackageImpl::eInstance()->getStartObjectBehaviorAction();
}

//*********************************
// Attribute Setter Getter
//*********************************

//*********************************
// Operations
//*********************************
std::shared_ptr<uml::Behavior> StartObjectBehaviorActionImpl::behavior() 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StartObjectBehaviorActionImpl::multiplicity_of_object(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StartObjectBehaviorActionImpl::no_onport(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

bool StartObjectBehaviorActionImpl::type_of_object(boost::any diagnostics,std::map <   boost::any, boost::any >  context) 
{
	std::cout << __PRETTY_FUNCTION__  << std::endl;
	throw "UnsupportedOperationException";
}

//*********************************
// References
//*********************************
std::shared_ptr<uml::InputPin > StartObjectBehaviorActionImpl::getObject() const
{
//assert(m_object);
    return m_object;
}
void StartObjectBehaviorActionImpl::setObject(std::shared_ptr<uml::InputPin> _object)
{
    m_object = _object;
}

//*********************************
// Union Getter
//*********************************
std::shared_ptr<Union<uml::Element> > StartObjectBehaviorActionImpl::getOwnedElement() const
{
	return m_ownedElement;
}
std::shared_ptr<Union<uml::ActivityGroup> > StartObjectBehaviorActionImpl::getInGroup() const
{
	return m_inGroup;
}
std::shared_ptr<SubsetUnion<uml::OutputPin, uml::Element > > StartObjectBehaviorActionImpl::getOutput() const
{
	return m_output;
}
std::shared_ptr<Union<uml::RedefinableElement> > StartObjectBehaviorActionImpl::getRedefinedElement() const
{
	return m_redefinedElement;
}
std::shared_ptr<SubsetUnion<uml::InputPin, uml::Element > > StartObjectBehaviorActionImpl::getInput() const
{
	return m_input;
}
std::weak_ptr<uml::Element > StartObjectBehaviorActionImpl::getOwner() const
{
	return m_owner;
}


//*********************************
// Structural Feature Getter/Setter
//*********************************
boost::any StartObjectBehaviorActionImpl::eGet(int featureID,  bool resolve, bool coreType) const
{
	switch(featureID)
	{
		case UmlPackage::ACTIVITYNODE_ACTIVITY:
			return getActivity(); //17613
		case UmlPackage::INVOCATIONACTION_ARGUMENT:
			return getArgument(); //17628
		case UmlPackage::NAMEDELEMENT_CLIENTDEPENDENCY:
			return getClientDependency(); //1764
		case UmlPackage::ACTION_CONTEXT:
			return getContext(); //17622
		case ecore::EcorePackage::EMODELELEMENT_EANNOTATIONS:
			return getEAnnotations(); //1760
		case UmlPackage::EXECUTABLENODE_HANDLER:
			return getHandler(); //17621
		case UmlPackage::ACTIVITYNODE_INGROUP:
			return getInGroup(); //17614
		case UmlPackage::ACTIVITYNODE_ININTERRUPTIBLEREGION:
			return getInInterruptibleRegion(); //17615
		case UmlPackage::ACTIVITYNODE_INPARTITION:
			return getInPartition(); //17620
		case UmlPackage::ACTIVITYNODE_INSTRUCTUREDNODE:
			return getInStructuredNode(); //17616
		case UmlPackage::ACTIVITYNODE_INCOMING:
			return getIncoming(); //17617
		case UmlPackage::ACTION_INPUT:
			return getInput(); //17623
		case UmlPackage::REDEFINABLEELEMENT_ISLEAF:
			return getIsLeaf(); //17610
		case UmlPackage::ACTION_ISLOCALLYREENTRANT:
			return getIsLocallyReentrant(); //17624
		case UmlPackage::CALLACTION_ISSYNCHRONOUS:
			return getIsSynchronous(); //17630
		case UmlPackage::ACTION_LOCALPOSTCONDITION:
			return getLocalPostcondition(); //17625
		case UmlPackage::ACTION_LOCALPRECONDITION:
			return getLocalPrecondition(); //17626
		case UmlPackage::NAMEDELEMENT_NAME:
			return getName(); //1765
		case UmlPackage::NAMEDELEMENT_NAMEEXPRESSION:
			return getNameExpression(); //1766
		case UmlPackage::NAMEDELEMENT_NAMESPACE:
			return getNamespace(); //1767
		case UmlPackage::STARTOBJECTBEHAVIORACTION_OBJECT:
			return getObject(); //17632
		case UmlPackage::INVOCATIONACTION_ONPORT:
			return getOnPort(); //17629
		case UmlPackage::ACTIVITYNODE_OUTGOING:
			return getOutgoing(); //17618
		case UmlPackage::ACTION_OUTPUT:
			return getOutput(); //17627
		case UmlPackage::ELEMENT_OWNEDCOMMENT:
			return getOwnedComment(); //1761
		case UmlPackage::ELEMENT_OWNEDELEMENT:
			return getOwnedElement(); //1762
		case UmlPackage::ELEMENT_OWNER:
			return getOwner(); //1763
		case UmlPackage::NAMEDELEMENT_QUALIFIEDNAME:
			return getQualifiedName(); //1768
		case UmlPackage::REDEFINABLEELEMENT_REDEFINEDELEMENT:
			return getRedefinedElement(); //17611
		case UmlPackage::ACTIVITYNODE_REDEFINEDNODE:
			return getRedefinedNode(); //17619
		case UmlPackage::REDEFINABLEELEMENT_REDEFINITIONCONTEXT:
			return getRedefinitionContext(); //17612
		case UmlPackage::CALLACTION_RESULT:
			return getResult(); //17631
		case UmlPackage::NAMEDELEMENT_VISIBILITY:
			return getVisibility(); //1769
	}
	return boost::any();
}
