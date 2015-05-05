
/* File : iDynTree.i */
%module iDynTree
%include "std_string.i"

%{
#include "iDynTree/Core/PositionRaw.h"
#include "iDynTree/Core/PositionSemantics.h"
#include "iDynTree/Core/Position.h"
#include "iDynTree/Core/RotationRaw.h"
#include "iDynTree/Core/RotationSemantics.h"
#include "iDynTree/Core/Rotation.h"
#include "iDynTree/Core/TransformRaw.h"
#include "iDynTree/Core/TransformSemantics.h"
#include "iDynTree/Core/Transform.h"
%}

/* Let's just grab the original header file here */
%include "iDynTree/Core/PositionRaw.h"
%include "iDynTree/Core/PositionSemantics.h"
%include "iDynTree/Core/Position.h"
%include "iDynTree/Core/RotationRaw.h"
%include "iDynTree/Core/RotationSemantics.h"
%include "iDynTree/Core/Rotation.h"
%include "iDynTree/Core/TransformRaw.h"
%include "iDynTree/Core/TransformSemantics.h"
%include "iDynTree/Core/Transform.h"