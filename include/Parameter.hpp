#pragma once

#include <functional>

namespace metann {

class NNParam
{
public:
    NNParam& set_aberration(double val)
    {
        m_aberration = val;
        return *this;
    }

    NNParam& set_learnrate(double val)
    {
        m_learnrate = val;
        return *this;
    }

    NNParam& set_sigfunc(std::function<double(double)> sigfunc)
    {
        m_sigfunc = sigfunc;
        return *this;
    }

    NNParam& set_dsigfunc(std::function<double(double)> dsigfunc)
    {
        m_dsigfunc = dsigfunc;
        return *this;
    }

protected:
    double m_aberration = 0.001;
    double m_learnrate = 0.1;
    std::function<double(double)> m_sigfunc;
    std::function<double(double)> m_dsigfunc;
};


}