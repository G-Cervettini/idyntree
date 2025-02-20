// SPDX-FileCopyrightText: Fondazione Istituto Italiano di Tecnologia (IIT)
// SPDX-License-Identifier: BSD-3-Clause

#ifndef IDYNTREE_ROTATIONAL_INERTIA_RAW_H
#define IDYNTREE_ROTATIONAL_INERTIA_RAW_H

#include <iDynTree/MatrixFixSize.h>

namespace iDynTree
{
    class PositionRaw;

    /**
     * Class providing the raw coordinates for a 3d inertia matrix.
     *
     * \ingroup iDynTreeCore
     *
     * \note in iDynTree, the spatial vector follows this serialization: the first three elements are
     *       the linear part and the second three elements are the angular part.
     *
     *  We use a parent Matrix3x3 for storage of the rotational inertia matrix:
     *  given that the inertia matrix is a 3x3 symmetric matrix,
     *                             the ordering (row order or column order) is not influencing
     *                             the storage of the matrix.
     */
    class RotationalInertiaRaw: public Matrix3x3
    {

    public:
        /**
         * Default constructor.
         * The data is not reset to zero for perfomance reason.
         * Please initialize the data in the vector before any use.
         */
        RotationalInertiaRaw();
        RotationalInertiaRaw(const double * in_data, const unsigned int in_rows, const unsigned int in_cols);
        RotationalInertiaRaw(const RotationalInertiaRaw & other);

        /**
         * Initializer helper: return a zero matrix.
         */
        static RotationalInertiaRaw Zero();

    };
}

#endif /* IDYNTREE_ROTATIONAL_INERTIA_RAW_H */
