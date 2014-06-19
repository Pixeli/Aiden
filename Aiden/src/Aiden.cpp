#include "Aiden.h"

namespace aiden{

    const std::string Aiden::s_version = "0.1 alpha";

    Aiden::Aiden()
    {
        m_name = "Aiden";

    }

    // GETTERS

    std::string Aiden::getName()
    {
        return m_name;
    }

    std::string Aiden::getVersion()
    {
        return Aiden::s_version;
    }

}
