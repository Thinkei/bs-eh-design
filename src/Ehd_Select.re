[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~mode: [@bs.string] [ | `default | `multiple | `tags]=?,
    ~value: string=?,
    ~defaultValue: string=?,
    ~onChange: string => unit=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element
  ) =>
  React.element =
  "Select";

module Option = {
  [@bs.scope "Select"]
  [@bs.module "@ehrocks/eh-ant-design/lib"]
  [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~key: string=?,
      ~title: string=?,
      ~value: string=?,
      ~className: string=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Option";
};
