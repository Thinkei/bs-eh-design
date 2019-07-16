module Group = {
  [@bs.scope "Radio"]
  [@bs.module "@ehrocks/eh-ant-design/lib"]
  [@react.component]
  external make:
    (
      ~defaultValue: string=?,
      ~disabled: bool=?,
      ~name: string=?,
      ~size: [@bs.string] [ | `large | `defalt | `small]=?,
      ~value: 'a,
      ~onChange: ReactEvent.Form.t => unit,
      ~buttonStyle: [@bs.string] [ | `solid | `outline]=?,
      ~children: React.element
    ) =>
    React.element =
    "Group";
};

module Button = {
  [@bs.scope "Radio"]
  [@bs.module "@ehrocks/eh-ant-design/lib"]
  [@react.component]
  external make:
    (
      ~value: 'a,
      ~checked: bool=?,
      ~autofocus: bool=?,
      ~defaultChecked: bool=?,
      ~disabled: bool=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Button";
};

[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~value: 'a,
    ~checked: bool=?,
    ~autofocus: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Radio";
