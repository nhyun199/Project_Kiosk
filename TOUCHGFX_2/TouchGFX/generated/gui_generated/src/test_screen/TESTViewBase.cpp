/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/test_screen/TESTViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

TESTViewBase::TESTViewBase() :
    buttonCallback(this, &TESTViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 272, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 272, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(box1);

    Tail.setPosition(0, 379, 272, 96);
    textArea2_1.setXY(17, 12);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_R6HC));
    Tail.add(textArea2_1);

    totalPrice2.setPosition(164, 12, 80, 15);
    totalPrice2.setColor(touchgfx::Color::getColorFromRGB(255, 51, 83));
    totalPrice2.setLinespacing(0);
    Unicode::snprintf(totalPrice2Buffer, TOTALPRICE2_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_CAY7).getText());
    totalPrice2.setWildcard(totalPrice2Buffer);
    totalPrice2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GKR6));
    Tail.add(totalPrice2);

    text_WON.setXY(244, 12);
    text_WON.setColor(touchgfx::Color::getColorFromRGB(255, 51, 83));
    text_WON.setLinespacing(0);
    text_WON.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1US7));
    Tail.add(text_WON);

    buttonWithLabel1.setXY(26, 47);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_CROP22038_ID), touchgfx::Bitmap(BITMAP_CROP22038_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_VE5H));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Tail.add(buttonWithLabel1);

    add(Tail);

    Header.setPosition(0, 0, 272, 55);
    titleText.setXY(114, 19);
    titleText.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    titleText.setLinespacing(0);
    titleText.setTypedText(touchgfx::TypedText(T___SINGLEUSE_N190));
    Header.add(titleText);

    backButton.setXY(11, 17);
    backButton.setBitmaps(touchgfx::Bitmap(BITMAP_BACK_2020_ID), touchgfx::Bitmap(BITMAP_BACK_2020_ID));
    backButton.setAction(buttonCallback);
    Header.add(backButton);

    add(Header);

    text_WON_1.setXY(245, 262);
    text_WON_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    text_WON_1.setLinespacing(0);
    text_WON_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZZOP));
    add(text_WON_1);

    textArea1.setXY(21, 70);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CD45));
    add(textArea1);

    menuname.setPosition(144, 94, 115, 22);
    menuname.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    menuname.setLinespacing(0);
    menuname.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GE53));
    add(menuname);

    count.setPosition(16, 262, 30, 14);
    count.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    count.setLinespacing(0);
    Unicode::snprintf(countBuffer, COUNT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_W0QF).getText());
    count.setWildcard(countBuffer);
    count.setTypedText(touchgfx::TypedText(T___SINGLEUSE_O4JP));
    add(count);

    totalPrice.setPosition(174, 262, 70, 14);
    totalPrice.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    totalPrice.setLinespacing(0);
    Unicode::snprintf(totalPriceBuffer, TOTALPRICE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_PVNP).getText());
    totalPrice.setWildcard(totalPriceBuffer);
    totalPrice.setTypedText(touchgfx::TypedText(T___SINGLEUSE_X5H3));
    add(totalPrice);

    textArea3.setXY(46, 262);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AQL8));
    add(textArea3);

    boundary1.setPosition(0, 55, 272, 1);
    boundary1.setColor(touchgfx::Color::getColorFromRGB(227, 225, 225));
    add(boundary1);

    boundary1_1.setPosition(0, 373, 272, 1);
    boundary1_1.setColor(touchgfx::Color::getColorFromRGB(227, 225, 225));
    add(boundary1_1);

    boundary1_2.setPosition(0, 223, 272, 1);
    boundary1_2.setColor(touchgfx::Color::getColorFromRGB(227, 225, 225));
    add(boundary1_2);

    menuImage.setXY(21, 94);
    add(menuImage);
}

TESTViewBase::~TESTViewBase()
{

}

void TESTViewBase::setupScreen()
{

}

void TESTViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &backButton)
    {
        //Interaction1
        //When backButton clicked change screen to ORDER
        //Go to ORDER with no screen transition
        application().gotoORDERScreenNoTransition();
    }
}
