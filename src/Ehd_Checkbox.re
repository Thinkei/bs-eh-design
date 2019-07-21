module Group = {
  [@bs.scope "Checkbox"]
  [@bs.module "@ehrocks/eh-ant-design/lib"]
  [@react.component]
  external make:
    (
      ~defaultValue: string=?,
      ~disabled: bool=?,
      ~name: string=?,
      ~options: array('a)=?,
      ~value: array('a)=?,
      ~onChange: array('a) => unit=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Group";
};

[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~autofocus: bool=?,
    ~checked: bool=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~indeterminate: bool=?,
    ~value: 'a=?,
    ~onChange: ReactEvent.Form.t => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Checkbox";
