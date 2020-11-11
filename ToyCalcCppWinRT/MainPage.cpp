#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::ToyCalcCppWinRT::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::digit0_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::digit1_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::digit2_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::digit3_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::digit4_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::digit5_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::digit6_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::digit7_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::digit8_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::digit9_Click(IInspectable const&, RoutedEventArgs const&) {}

    void MainPage::add_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::sub_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::mul_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::div_Click(IInspectable const&, RoutedEventArgs const&) {}
    void MainPage::eq_Click(IInspectable const&, RoutedEventArgs const&) {}
}
