module Header = {
  [@bs.scope "Layout"] [@bs.module "@ehrocks/eh-ant-design"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "Header";
};

module Content = {
  [@bs.scope "Layout"] [@bs.module "@ehrocks/eh-ant-design"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "Content";
};

module Footer = {
  [@bs.scope "Layout"] [@bs.module "@ehrocks/eh-ant-design"] [@react.component]
  external make:
    (
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "Footer";
};

module Sider = {
  [@bs.scope "Layout"] [@bs.module "@ehrocks/eh-ant-design"] [@react.component]
  external make:
    (
      ~breakpoint: [@bs.string] [ | `xs | `sm | `md | `lg | `xl | `xxl]=?,
      ~className: string=?,
      ~collapsed: bool=?,
      ~collapsedWidth: int=?,
      ~collapsible: bool=?,
      ~defaultCollapsed: bool=?,
      ~reverseArrow: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~theme: [@bs.string] [ | `light | `dark]=?,
      ~trigger: React.element,
      ~width: int=?,
      ~onCollapse: bool => unit=?,
      ~onBreakpoint: string => unit=?,
      ~children: React.element
    ) =>
    React.element =
    "Sider";
};

[@bs.module "@ehrocks/eh-ant-design"] [@react.component]
external make:
  (
    ~hasSlider: bool=?,
    ~style: ReactDOMRe.Style.t=?,
    ~className: string=?,
    ~children: React.element
  ) =>
  React.element =
  "Layout";
