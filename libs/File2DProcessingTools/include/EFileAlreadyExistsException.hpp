#pragma once

#include <exception>
#include <string>

namespace File2DProcessingTools {
    namespace Exceptions {
        class EFileAlreadyExistsException : public std::exception {

        private:
            std::string m_error;

        public:

            /**
             * default constructor, which do not accept error message
             */
            EFileAlreadyExistsException() noexcept;

            /**
             * the constructor serves to create an exception and get the cause of the error
             * @param error - message of error
             */
            explicit EFileAlreadyExistsException(std::string error) noexcept;

            /**
            * Method for getting error description
            * @return text of error
            */
            const char *what() const noexcept override;
        };
    }
}