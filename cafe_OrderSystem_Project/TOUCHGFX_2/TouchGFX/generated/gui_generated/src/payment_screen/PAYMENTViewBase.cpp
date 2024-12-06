/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/payment_screen/PAYMENTViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

PAYMENTViewBase::PAYMENTViewBase() :
    buttonCallback(this, &PAYMENTViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 272, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    container1.setPosition(0, 0, 272, 480);
    box1.setPosition(0, 0, 272, 480);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    container1.add(box1);

    Tail.setPosition(0, 379, 272, 101);
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

    paymentButton.setXY(26, 47);
    paymentButton.setBitmaps(touchgfx::Bitmap(BITMAP_CROP22038_ID), touchgfx::Bitmap(BITMAP_CROP22038_ID));
    paymentButton.setLabelText(touchgfx::TypedText(T___SINGLEUSE_VE5H));
    paymentButton.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    paymentButton.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    paymentButton.setAction(buttonCallback);
    Tail.add(paymentButton);

    container1.add(Tail);

    text_WON_1.setXY(245, 262);
    text_WON_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    text_WON_1.setLinespacing(0);
    text_WON_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_ZZOP));
    container1.add(text_WON_1);

    textArea1.setXY(21, 70);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_CD45));
    container1.add(textArea1);

    menuname.setPosition(140, 191, 115, 22);
    menuname.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    menuname.setLinespacing(0);
    menuname.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GE53));
    container1.add(menuname);

    count.setPosition(16, 262, 30, 14);
    count.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    count.setLinespacing(0);
    Unicode::snprintf(countBuffer, COUNT_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_W0QF).getText());
    count.setWildcard(countBuffer);
    count.setTypedText(touchgfx::TypedText(T___SINGLEUSE_O4JP));
    container1.add(count);

    totalPrice.setPosition(174, 262, 70, 14);
    totalPrice.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    totalPrice.setLinespacing(0);
    Unicode::snprintf(totalPriceBuffer, TOTALPRICE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_PVNP).getText());
    totalPrice.setWildcard(totalPriceBuffer);
    totalPrice.setTypedText(touchgfx::TypedText(T___SINGLEUSE_X5H3));
    container1.add(totalPrice);

    textArea3.setXY(46, 262);
    textArea3.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea3.setLinespacing(0);
    textArea3.setTypedText(touchgfx::TypedText(T___SINGLEUSE_AQL8));
    container1.add(textArea3);

    boundary1.setPosition(0, 55, 272, 1);
    boundary1.setColor(touchgfx::Color::getColorFromRGB(227, 225, 225));
    container1.add(boundary1);

    boundary1_1.setPosition(0, 373, 272, 1);
    boundary1_1.setColor(touchgfx::Color::getColorFromRGB(227, 225, 225));
    container1.add(boundary1_1);

    boundary1_2.setPosition(0, 223, 272, 1);
    boundary1_2.setColor(touchgfx::Color::getColorFromRGB(227, 225, 225));
    container1.add(boundary1_2);

    menuImage.setXY(21, 94);
    container1.add(menuImage);

    PayArea.setPosition(42, 205, 188, 69);
    PayArea.setVisible(false);
    box2_1.setPosition(0, 0, 188, 69);
    box2_1.setColor(touchgfx::Color::getColorFromRGB(250, 222, 222));
    PayArea.add(box2_1);

    textArea6.setXY(47, 18);
    textArea6.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea6.setLinespacing(0);
    textArea6.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RVZV));
    PayArea.add(textArea6);

    YES.setXY(27, 44);
    YES.setBitmaps(touchgfx::Bitmap(BITMAP_YES_NO_ID), touchgfx::Bitmap(BITMAP_YES_NO_ID));
    YES.setLabelText(touchgfx::TypedText(T___SINGLEUSE_P228));
    YES.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    YES.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    YES.setAction(buttonCallback);
    PayArea.add(YES);

    NO.setXY(111, 44);
    NO.setBitmaps(touchgfx::Bitmap(BITMAP_YES_NO_ID), touchgfx::Bitmap(BITMAP_YES_NO_ID));
    NO.setLabelText(touchgfx::TypedText(T___SINGLEUSE_X970));
    NO.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    NO.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    NO.setAction(buttonCallback);
    PayArea.add(NO);

    container1.add(PayArea);

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

    container1.add(Header);

    add(container1);

    box2.setPosition(0, 0, 272, 480);
    box2.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    box2.setVisible(false);
    add(box2);

    billEX.setXY(22, 40);
    billEX.setBitmaps(touchgfx::Bitmap(BITMAP_CROP10045_2_ID), touchgfx::Bitmap(BITMAP_CROP10045_2_ID));
    billEX.setLabelText(touchgfx::TypedText(T___SINGLEUSE_1976));
    billEX.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    billEX.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    billEX.setVisible(false);
    add(billEX);

    creditCardEX.setXY(22, 105);
    creditCardEX.setBitmaps(touchgfx::Bitmap(BITMAP_CROP10045_2_ID), touchgfx::Bitmap(BITMAP_CROP10045_2_ID));
    creditCardEX.setLabelText(touchgfx::TypedText(T___SINGLEUSE_CGNE));
    creditCardEX.setLabelColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    creditCardEX.setLabelColorPressed(touchgfx::Color::getColorFromRGB(255, 255, 255));
    creditCardEX.setVisible(false);
    add(creditCardEX);

    textArea4.setXY(22, 174);
    textArea4.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea4.setLinespacing(0);
    textArea4.setTypedText(touchgfx::TypedText(T___SINGLEUSE_IOLX));
    textArea4.setVisible(false);
    add(textArea4);
}

PAYMENTViewBase::~PAYMENTViewBase()
{

}

void PAYMENTViewBase::setupScreen()
{

}

void PAYMENTViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &backButton)
    {
        //Interaction1
        //When backButton clicked change screen to ORDER
        //Go to ORDER with screen transition towards East
        application().gotoORDERScreenWipeTransitionEast();
    }
    if (&src == &paymentButton)
    {
        //Interaction2
        //When paymentButton clicked show PayArea
        //Show PayArea
        PayArea.setVisible(true);
        PayArea.invalidate();
    }
    if (&src == &NO)
    {
        //Interaction3
        //When NO clicked hide PayArea
        //Hide PayArea
        PayArea.setVisible(false);
        PayArea.invalidate();
    }
    if (&src == &YES)
    {
        //Interaction4
        //When YES clicked call virtual function
        //Call transmittinfo
        transmittinfo();
    
        //Interaction5
        //When Interaction4 completed hide PayArea
        //Hide PayArea
        PayArea.setVisible(false);
        PayArea.invalidate();
    }
}