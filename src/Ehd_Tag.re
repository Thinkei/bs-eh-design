module CheckableTag = {
  [@bs.scope "Tag"]
  [@bs.module "@ehrocks/eh-ant-design/lib"]
  [@react.component]
  external make: (~checked: bool=?, ~onChange: bool => unit=?) => React.element =
    "CheckableTag";
};

[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~afterClose: unit => unit=?,
    ~closable: bool=?,
    ~color: string=?,
    ~onClose: ReactEvent.Mouse.t => unit=?,
    ~visible: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Tag";
