#ifndef MAINCOMPONENT_H_INCLUDED
#define MAINCOMPONENT_H_INCLUDED

#include "../JuceLibraryCode/JuceHeader.h"

class MainContentComponent   : public Component,
                               private Label::Listener
{
public:
    //==============================================================================
    MainContentComponent()
    {
        addAndMakeVisible (titleLabel);
        titleLabel.setFont (Font (16.0f, Font::bold));
        titleLabel.setText ("Sean's NYC co-op maths calculator...", dontSendNotification);
        titleLabel.setColour (Label::textColourId, Colours::lightgreen);
        titleLabel.setJustificationType (Justification::centred);

        addAndMakeVisible (monthliesLabel);
        monthliesLabel.setText ("Monthlies:", dontSendNotification);
        monthliesLabel.attachToComponent (&monthliesText, true);
        monthliesLabel.setColour (Label::textColourId, Colours::orange);
        monthliesLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (monthliesText);
        monthliesText.setEditable (true);
        monthliesText.setColour (Label::backgroundColourId, Colours::white);
        monthliesText.setColour (Label::textWhenEditingColourId, Colours::black);
        monthliesText.setColour (Label::textColourId, Colours::black);
        monthliesText.addListener (this);
        
        addAndMakeVisible (interestRateLabel);
        interestRateLabel.setText ("Interest Rate %:", dontSendNotification);
        interestRateLabel.attachToComponent (&interestRateText, true);
        interestRateLabel.setColour (Label::textColourId, Colours::orange);
        interestRateLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (interestRateText);
        interestRateText.setColour (Label::backgroundColourId, Colours::lightgrey);
        interestRateText.setEditable (true);
        interestRateText.setColour (Label::backgroundColourId, Colours::white);
        interestRateText.setColour (Label::textWhenEditingColourId, Colours::black);
        interestRateText.setColour (Label::textColourId, Colours::black);
        interestRateText.addListener (this);
        
        addAndMakeVisible (AnnualIncomeLabel);
        AnnualIncomeLabel.setText ("Annual Income:", dontSendNotification);
        AnnualIncomeLabel.attachToComponent (&AnnualIncomeText, true);
        AnnualIncomeLabel.setColour (Label::textColourId, Colours::orange);
        AnnualIncomeLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (AnnualIncomeText);
        AnnualIncomeText.setEditable (true);
        AnnualIncomeText.setColour (Label::backgroundColourId, Colours::white);
        AnnualIncomeText.setColour (Label::textWhenEditingColourId, Colours::black);
        AnnualIncomeText.setColour (Label::textColourId, Colours::black);
        AnnualIncomeText.addListener (this);
        
        addAndMakeVisible (buildingDTILabel);
        buildingDTILabel.setText ("Coop Max DTI:", dontSendNotification);
        buildingDTILabel.attachToComponent (&buildingDTIText, true);
        buildingDTILabel.setColour (Label::textColourId, Colours::orange);
        buildingDTILabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (buildingDTIText);
        buildingDTIText.setEditable (true);
        buildingDTIText.setColour (Label::backgroundColourId, Colours::white);
        buildingDTIText.setColour (Label::textWhenEditingColourId, Colours::black);
        buildingDTIText.setColour (Label::textColourId, Colours::black);
        buildingDTIText.addListener (this);
        
        addAndMakeVisible (offerAmountLabel);
        offerAmountLabel.setText ("Offer Amount:", dontSendNotification);
        offerAmountLabel.attachToComponent (&offerAmountText, true);
        offerAmountLabel.setColour (Label::textColourId, Colours::orange);
        offerAmountLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (offerAmountText);
        offerAmountText.setEditable (true);
        offerAmountText.setColour (Label::backgroundColourId, Colours::white);
        offerAmountText.setColour (Label::textWhenEditingColourId, Colours::black);
        offerAmountText.setColour (Label::textColourId, Colours::black);
        offerAmountText.addListener (this);
        
        addAndMakeVisible (downPaymentLabel);
        downPaymentLabel.setText ("Down Payment:", dontSendNotification);
        downPaymentLabel.attachToComponent (&downPaymentText, true);
        downPaymentLabel.setColour (Label::textColourId, Colours::orange);
        downPaymentLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (downPaymentText);
        downPaymentText.setEditable (true);
        downPaymentText.setColour (Label::backgroundColourId, Colours::white);
        downPaymentText.setColour (Label::textWhenEditingColourId, Colours::black);
        downPaymentText.setColour (Label::textColourId, Colours::black);
        downPaymentText.addListener (this);
        
        addAndMakeVisible (closingCostsLabel);
        closingCostsLabel.setText ("Closing Costs:", dontSendNotification);
        closingCostsLabel.attachToComponent (&closingCostsText, true);
        closingCostsLabel.setColour (Label::textColourId, Colours::orange);
        closingCostsLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (closingCostsText);
        closingCostsText.setEditable (true);
        closingCostsText.setColour (Label::backgroundColourId, Colours::white);
        closingCostsText.setColour (Label::textWhenEditingColourId, Colours::black);
        closingCostsText.setColour (Label::textColourId, Colours::black);
        closingCostsText.addListener (this);
        
        addAndMakeVisible (liquidAssetsLabel);
        liquidAssetsLabel.setText ("Liquid Assets:", dontSendNotification);
        liquidAssetsLabel.attachToComponent (&liquidAssetsText, true);
        liquidAssetsLabel.setColour (Label::textColourId, Colours::orange);
        liquidAssetsLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (liquidAssetsText);
        liquidAssetsText.setEditable (true);
        liquidAssetsText.setColour (Label::backgroundColourId, Colours::white);
        liquidAssetsText.setColour (Label::textWhenEditingColourId, Colours::black);
        liquidAssetsText.setColour (Label::textColourId, Colours::black);
        liquidAssetsText.addListener (this);
        
        addAndMakeVisible (mortgagePaymentLabel);
        mortgagePaymentLabel.setText ("mortgage Pmt:", dontSendNotification);
        mortgagePaymentLabel.attachToComponent (&mortgagePaymentText, true);
        mortgagePaymentLabel.setColour (Label::textColourId, Colours::red);
        mortgagePaymentLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (mortgagePaymentText);
        mortgagePaymentText.setEditable (true);
        mortgagePaymentText.setColour (Label::backgroundColourId, Colours::white);
        mortgagePaymentText.setColour (Label::textWhenEditingColourId, Colours::black);
        mortgagePaymentText.setColour (Label::textColourId, Colours::black);
        mortgagePaymentText.addListener (this);
        
        addAndMakeVisible (monthlyPaymentLabel);
        monthlyPaymentLabel.setText ("Monthly Pmt:", dontSendNotification);
        monthlyPaymentLabel.attachToComponent (&monthlyPaymentText, true);
        monthlyPaymentLabel.setColour (Label::textColourId, Colours::red);
        monthlyPaymentLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (monthlyPaymentText);
        monthlyPaymentText.setEditable (true);
        monthlyPaymentText.setColour (Label::backgroundColourId, Colours::white);
        monthlyPaymentText.setColour (Label::textWhenEditingColourId, Colours::black);
        monthlyPaymentText.setColour (Label::textColourId, Colours::black);
        monthlyPaymentText.addListener (this);
        
        addAndMakeVisible (DTImaxLabel);
        DTImaxLabel.setText ("DTI Max:", dontSendNotification);
        DTImaxLabel.attachToComponent (&DTImaxText, true);
        DTImaxLabel.setColour (Label::textColourId, Colours::red);
        DTImaxLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (DTImaxText);
        DTImaxText.setEditable (true);
        DTImaxText.setColour (Label::backgroundColourId, Colours::white);
        DTImaxText.setColour (Label::textWhenEditingColourId, Colours::black);
        DTImaxText.setColour (Label::textColourId, Colours::black);
        DTImaxText.addListener (this);
        
        addAndMakeVisible (loanAmountLabel);
        loanAmountLabel.setText ("Loan Amount:", dontSendNotification);
        loanAmountLabel.attachToComponent (&loanAmountText, true);
        loanAmountLabel.setColour (Label::textColourId, Colours::red);
        loanAmountLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (loanAmountText);
        loanAmountText.setEditable (true);
        loanAmountText.setColour (Label::backgroundColourId, Colours::white);
        loanAmountText.setColour (Label::textWhenEditingColourId, Colours::black);
        loanAmountText.setColour (Label::textColourId, Colours::black);
        loanAmountText.addListener (this);
        
        addAndMakeVisible (DTIcalculatedLabel);
        DTIcalculatedLabel.setText ("DTI Calculated:", dontSendNotification);
        DTIcalculatedLabel.attachToComponent (&DTIcalculatedText, true);
        DTIcalculatedLabel.setColour (Label::textColourId, Colours::red);
        DTIcalculatedLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (DTIcalculatedText);
        DTIcalculatedText.setEditable (true);
        DTIcalculatedText.setColour (Label::backgroundColourId, Colours::white);
        DTIcalculatedText.setColour (Label::textWhenEditingColourId, Colours::black);
        DTIcalculatedText.setColour (Label::textColourId, Colours::black);
        DTIcalculatedText.addListener (this);
        
        addAndMakeVisible (maxLoanAllowedLabel);
        maxLoanAllowedLabel.setText ("Max Loan Allowed:", dontSendNotification);
        maxLoanAllowedLabel.attachToComponent (&maxLoanAllowedText, true);
        maxLoanAllowedLabel.setColour (Label::textColourId, Colours::red);
        maxLoanAllowedLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (maxLoanAllowedText);
        maxLoanAllowedText.setEditable (true);
        maxLoanAllowedText.setColour (Label::backgroundColourId, Colours::white);
        maxLoanAllowedText.setColour (Label::textWhenEditingColourId, Colours::black);
        maxLoanAllowedText.setColour (Label::textColourId, Colours::black);
        maxLoanAllowedText.addListener (this);
        
        addAndMakeVisible (downPaymentPercentLabel);
        downPaymentPercentLabel.setText ("Down Payment %:", dontSendNotification);
        downPaymentPercentLabel.attachToComponent (&downPaymentPercentText, true);
        downPaymentPercentLabel.setColour (Label::textColourId, Colours::red);
        downPaymentPercentLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (downPaymentPercentText);
        downPaymentPercentText.setEditable (true);
        downPaymentPercentText.setColour (Label::backgroundColourId, Colours::white);
        downPaymentPercentText.setColour (Label::textWhenEditingColourId, Colours::black);
        downPaymentPercentText.setColour (Label::textColourId, Colours::black);
        downPaymentPercentText.addListener (this);
        
        addAndMakeVisible (twoYearsReserveAmountLabel);
        twoYearsReserveAmountLabel.setText ("2 yrs reserves:", dontSendNotification);
        twoYearsReserveAmountLabel.attachToComponent (&twoYearsReserveAmountText, true);
        twoYearsReserveAmountLabel.setColour (Label::textColourId, Colours::red);
        twoYearsReserveAmountLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (twoYearsReserveAmountText);
        twoYearsReserveAmountText.setEditable (true);
        twoYearsReserveAmountText.setColour (Label::backgroundColourId, Colours::white);
        twoYearsReserveAmountText.setColour (Label::textWhenEditingColourId, Colours::black);
        twoYearsReserveAmountText.setColour (Label::textColourId, Colours::black);
        twoYearsReserveAmountText.addListener (this);
        
        addAndMakeVisible (reservesAfterClosingLabel);
        reservesAfterClosingLabel.setText ("Reserves:", dontSendNotification);
        reservesAfterClosingLabel.attachToComponent (&reservesAfterClosingText, true);
        reservesAfterClosingLabel.setColour (Label::textColourId, Colours::red);
        reservesAfterClosingLabel.setJustificationType (Justification::right);
        
        addAndMakeVisible (reservesAfterClosingText);
        reservesAfterClosingText.setEditable (true);
        reservesAfterClosingText.setColour (Label::backgroundColourId, Colours::white);
        reservesAfterClosingText.setColour (Label::textWhenEditingColourId, Colours::black);
        reservesAfterClosingText.setColour (Label::textColourId, Colours::black);
        reservesAfterClosingText.addListener (this);
        setSize(600,600);
        
        

        
        

 


        

        //setSize (getHeight(), getWidth());
    }

    void paint (Graphics& g) override
    {
        g.fillAll (Colours::black);
    }

    void resized() override
    {
        titleLabel.setBounds (10, 10, getWidth() - 20, 30);
        monthliesText.setBounds (100, getHeight()/20 + 10, getWidth() - 150, getHeight()/21);
        interestRateText.setBounds (100, 2*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        AnnualIncomeText.setBounds(100,3*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        buildingDTIText.setBounds(100,4*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        offerAmountText.setBounds(100,5*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        downPaymentText.setBounds(100,6*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        closingCostsText.setBounds(100,7*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        liquidAssetsText.setBounds(100,8*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        mortgagePaymentText.setBounds(100,9*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        monthlyPaymentText.setBounds(100,10*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        DTImaxText.setBounds(100,11*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        
        loanAmountText.setBounds(100,12*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        DTIcalculatedText.setBounds(100,13*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        //maxLoanAllowedText.setBounds(100,410, getWidth()20 - 110, 20);
        downPaymentPercentText.setBounds(100,14*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        twoYearsReserveAmountText.setBounds(100,15*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
        reservesAfterClosingText.setBounds(100,16*(getHeight()/20) + 10, getWidth() - 150, getHeight()/21);
    }

      void labelTextChanged (Label* label) override
    {
        if (label == &monthliesText)
            monthlies = ( monthliesText.getText());
            monthliesnum = monthlies.getDoubleValue();
        

        if (label == &interestRateText)
            interestRate = ( interestRateText.getText());
            interestRatenum = interestRate.getDoubleValue();
            monthlyInterestRatenum = interestRatenum/100/12;
        
        if (label == &AnnualIncomeText)
            AnnualIncome = ( AnnualIncomeText.getText());
            AnnualIncomenum = AnnualIncome.getDoubleValue();
            monthlyIncomenum = AnnualIncomenum/12;
        
        
        
        if (label == &buildingDTIText)
            buildingDTI = ( buildingDTIText.getText());
            buildingDTInum = buildingDTI.getDoubleValue();
        
        if (label == &offerAmountText)
            offerAmount = ( offerAmountText.getText());
            offerAmountnum = offerAmount.getDoubleValue();
        
        if (label == &downPaymentText)
            downPayment = ( downPaymentText.getText());
            downPaymentnum = downPayment.getDoubleValue();
        
        if (label == &closingCostsText)
            closingCosts = ( closingCostsText.getText());
            closingCostsnum = closingCosts.getDoubleValue();
        
        if (label == &liquidAssetsText)
            liquidAssets = ( liquidAssetsText.getText());
            liquidAssetsnum = liquidAssets.getDoubleValue();

     
        // calculated with mortgage formula
        // loanamount*(monthlyinterest*((1+monthlyint)^360)/((1+monthly)^360-1))
        // P = L[c(1 + c)n]/[(1 + c)n - 1]
        // c is interestrate
        intCalcnum = pow(1+monthlyInterestRatenum, 360.00);
        mortgagePaymentnum = loanAmountnum*monthlyInterestRatenum*(intCalcnum/(intCalcnum-1));

        mortgagePaymentnum = roundf(mortgagePaymentnum * 100) / 100;
        mortgagePaymentout = String(mortgagePaymentnum);
        mortgagePaymentText.setText(mortgagePaymentout, dontSendNotification);
        
        // caclulated monthly payment = mortgage plus monthlies
       // mont
       
        //calculated monthly income*DTIallowed
        DTImaxnum = monthlyIncomenum*buildingDTInum/100;
        DTImaxnum = roundf(DTImaxnum * 100) / 100;
        DTIout = String(DTImaxnum);
        DTImaxText.setText(DTIout, dontSendNotification);
        
        // calculated offer amount  - downpayment
        
        loanAmountnum = offerAmountnum - downPaymentnum;
        loanAmountnum = roundf(loanAmountnum * 100) / 100;
        loanAmountOut = String(loanAmountnum);
        loanAmountText.setText(loanAmountOut, dontSendNotification);
        
        // caclulated monthly payment = mortgage plus monthlies
        
        monthlyPaymentnum = mortgagePaymentnum + monthliesnum;
        monthlyPaymentnum = roundf(monthlyPaymentnum * 100) / 100;
        monthlyPaymentout = String(monthlyPaymentnum);
        monthlyPaymentText.setText(monthlyPaymentout, dontSendNotification);
        
        
        
        // caclulated (mortgagepayment+monthlies)/monthlyincome
        DTIcalculatednum = (mortgagePaymentnum+monthliesnum)/monthlyIncomenum;
        DTIcalculatednum = roundf(DTIcalculatednum * 100);
        DTIcalculatedOut = String(DTIcalculatednum);
        DTIcalculatedText.setText(DTIcalculatedOut, dontSendNotification);
        
        // calculated (DTIallowed*monthlyincome-monthlies)/(monthlyinterest%*((1+minterest%)^360)/((1+minterest$)^360-1))
        maxLoanAllowednum = (DTImaxnum*monthlyIncomenum-monthliesnum)/(monthlyInterestRatenum*(intCalcnum/(intCalcnum-1)));
        maxLoanAllowednum = roundf(maxLoanAllowednum * 100) / 100;
        maxLoanAllowedout = String(maxLoanAllowednum);
        maxLoanAllowedText.setText(maxLoanAllowedout, dontSendNotification);
        // downpayment/offeramount
        downPaymentPercentnum = downPaymentnum/offerAmountnum;
        downPaymentPercentnum = roundf(downPaymentPercentnum * 100) / 100;
        downPaymentPercentout = String(downPaymentPercentnum);
        downPaymentPercentText.setText(downPaymentPercentout, dontSendNotification);
        
        // (mortgagepayment + monthlies)  * 24
        
        //twoYearsReserveAmountnum =
        //twoYearsReserveAmountnum
        // reserves after closing
        
        twoYearsReserveAmountnum = (mortgagePaymentnum + monthliesnum)*24;

        twoYearsReserveAmountnum = roundf(twoYearsReserveAmountnum * 100) / 100;
        twoYearsReserveAmountout = String(twoYearsReserveAmountnum);
        twoYearsReserveAmountText.setText(twoYearsReserveAmountout, dontSendNotification);
        
        //liquid assets - closing costs - downpayment
       
        reservesAfterClosingnum = liquidAssetsnum - closingCostsnum - downPaymentnum;
        reservesAfterClosingnum = roundf(reservesAfterClosingnum * 100) / 100;
        reservesAfterClosingout = String(reservesAfterClosingnum);
        reservesAfterClosingText.setText(reservesAfterClosingout, dontSendNotification);
        
        

        //       num = (num + incomenum)*DTImaxnum;
        //       result = String(num);
        //        interestRateText.setText(result, dontSendNotification);
        
        // uppercaseText.setText();
        //uppercaseText.setText (inputText.getText().toUpperCase(), dontSendNotification);
    }


private:
    //==============================================================================
    
    String monthlies;
    String interestRate;
    String AnnualIncome;
    String buildingDTI;
    String DTIout;
    String offerAmount;
    String downPayment;
    String closingCosts;
    String liquidAssets;
    String mortgagePayment;
    String mortgagePaymentout;
    String DTImax;
    String loanAmount;
    String loanAmountOut;
    String DTIcalculated;
    String DTIcalculatedOut;
    String maxLoanAllowed;
    String maxLoanAllowedout;
    String downPaymentPercent;
    String downPaymentPercentout;
    String twoYearsReserveAmount;
    String twoYearsReserveAmountout;
    String reservesAfterClosing;
    String reservesAfterClosingout;
    String monthlyPayment;
    String monthlyPaymentout;
    
    double monthliesnum;
    double interestRatenum;
    double monthlyInterestRatenum;
    double AnnualIncomenum;
    double monthlyIncomenum;
    double intCalcnum;
                                        
    double buildingDTInum;
    double offerAmountnum;
    double downPaymentnum;
    double closingCostsnum;
    double liquidAssetsnum;
    double mortgagePaymentnum;
    double monthlyPaymentnum;
    
    double DTImaxnum;
    double DTImaxout;
//    double monthlyPaymentnum;
    
    double loanAmountnum;
    double DTIcalculatednum;
    double maxLoanAllowednum;
    double downPaymentPercentnum;
    double twoYearsReserveAmountnum;
    double reservesAfterClosingnum;
    
    Label titleLabel;
    Label monthliesLabel;
    Label monthliesText;
    Label interestRateLabel;
    Label interestRateText;
    Label AnnualIncomeLabel;
    Label AnnualIncomeText;
    Label buildingDTILabel;
    Label buildingDTIText;
    Label offerAmountLabel;
    Label offerAmountText;
    Label downPaymentLabel;
    Label downPaymentText;
    Label closingCostsLabel;
    Label closingCostsText;
    Label liquidAssetsLabel;
    Label liquidAssetsText;
    Label mortgagePaymentLabel;
    Label mortgagePaymentText;
    Label monthlyPaymentLabel;
    Label monthlyPaymentText;
    Label DTImaxLabel;
    Label DTImaxText;
    Label loanAmountLabel;
    Label loanAmountText;
    Label DTIcalculatedLabel;
    Label DTIcalculatedText;
    Label maxLoanAllowedLabel;
    Label maxLoanAllowedText;
    Label downPaymentPercentLabel;
    Label downPaymentPercentText;
    Label twoYearsReserveAmountLabel;
    Label twoYearsReserveAmountText;
    Label reservesAfterClosingLabel;
    Label reservesAfterClosingText;




    
    


    

    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};


#endif  // MAINCOMPONENT_H_INCLUDED
