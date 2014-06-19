//
//  @author: Mathieu David
//
//  Aiden is the main class of this project. This is the class that will be instanciated in the main() to run the rest of the program.
//

#ifndef AIDEN_H
#define AIDEN_H

#include <string>

namespace aiden{

    class Aiden
    {
        public:
            Aiden();

            std::string getName();

        protected:

        private:
            std::string m_name;
    };

}

#endif // AIDEN_H
