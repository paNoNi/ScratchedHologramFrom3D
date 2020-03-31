#pragma once

#include <vector>
#include "../../Geometry2D/include/CLineSegment2D.hpp"

namespace File2DProcessingTools {


    /**
     * Vector graphics storage
     * @author Nikita Novgorodtsev (github <https://github.com/paNoNi>)
     */
    class CVectorGraphicsData {

    private:
        std::vector<Geometry2D::CLineSegment2D> _data;

    public:


        CVectorGraphicsData() = default;
        CVectorGraphicsData(const CVectorGraphicsData &data) = default;
        CVectorGraphicsData(CVectorGraphicsData &&data) = default;

        CVectorGraphicsData &operator=(const CVectorGraphicsData &data) = default;
        CVectorGraphicsData &operator=(CVectorGraphicsData &&data) = default;

        /**
         * Store line segment
         * @param line_segment Segment to store
         */
        void addLineSegments(Geometry2D::CLineSegment2D line_segment) noexcept;

        /**
         * Add several CLineSegment2D objects
         * @tparam InputIterator Should be InputIterator at least
         * @param begin Begin iterator
         * @param end End iterator
         */
        template<typename InputIterator>
        void addLineSegments(InputIterator begin, InputIterator end) noexcept {
            _data.insert(_data.end(), begin, end);
        }

        /**
         * Get all stored line segments
         * @return list of CLineSegment2D
         */
        const std::vector<Geometry2D::CLineSegment2D> &getLineSegments() const noexcept;
    };

}