// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class TabViewProperties
{
public:
    TabViewProperties();

    void TabWidthMode(winrt::TabViewWidthMode const& value);
    winrt::TabViewWidthMode TabWidthMode();

    static winrt::DependencyProperty TabWidthModeProperty() { return s_TabWidthModeProperty; }

    static GlobalDependencyProperty s_TabWidthModeProperty;

    winrt::event_token TabClosing(winrt::TypedEventHandler<winrt::TabView, winrt::TabViewTabClosingEventArgs> const& value);
    void TabClosing(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::TabView, winrt::TabViewTabClosingEventArgs>> m_tabClosingEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnTabWidthModePropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};