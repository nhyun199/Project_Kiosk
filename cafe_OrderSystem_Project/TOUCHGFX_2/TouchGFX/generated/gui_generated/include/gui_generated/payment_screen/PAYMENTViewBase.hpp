/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef PAYMENTVIEWBASE_HPP
#define PAYMENTVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/payment_screen/PAYMENTPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>

class PAYMENTViewBase : public touchgfx::View<PAYMENTPresenter>
{
public:
    PAYMENTViewBase();
    virtual ~PAYMENTViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void transmittinfo()
    {
        // Override and implement this function in PAYMENT
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Container container1;
    touchgfx::Box box1;
    touchgfx::Container Tail;
    touchgfx::TextArea textArea2_1;
    touchgfx::TextAreaWithOneWildcard totalPrice2;
    touchgfx::TextArea text_WON;
    touchgfx::ButtonWithLabel paymentButton;
    touchgfx::TextArea text_WON_1;
    touchgfx::TextArea textArea1;
    touchgfx::TextArea menuname;
    touchgfx::TextAreaWithOneWildcard count;
    touchgfx::TextAreaWithOneWildcard totalPrice;
    touchgfx::TextArea textArea3;
    touchgfx::Box boundary1;
    touchgfx::Box boundary1_1;
    touchgfx::Box boundary1_2;
    touchgfx::Image menuImage;
    touchgfx::Container PayArea;
    touchgfx::Box box2_1;
    touchgfx::TextArea textArea6;
    touchgfx::ButtonWithLabel YES;
    touchgfx::ButtonWithLabel NO;
    touchgfx::Container Header;
    touchgfx::TextArea titleText;
    touchgfx::Button backButton;
    touchgfx::Box box2;
    touchgfx::TextArea textArea4;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TOTALPRICE2_SIZE = 20;
    touchgfx::Unicode::UnicodeChar totalPrice2Buffer[TOTALPRICE2_SIZE];
    static const uint16_t COUNT_SIZE = 10;
    touchgfx::Unicode::UnicodeChar countBuffer[COUNT_SIZE];
    static const uint16_t TOTALPRICE_SIZE = 20;
    touchgfx::Unicode::UnicodeChar totalPriceBuffer[TOTALPRICE_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<PAYMENTViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // PAYMENTVIEWBASE_HPP
