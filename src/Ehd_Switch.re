[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~autofocus: bool=?,
    ~checked: bool=?,
    ~checkedChildren: React.element=?,
    ~unCheckedChildren: React.element=?,
    ~defaultChecked: bool=?,
    ~disabled: bool=?,
    ~loading: bool=?,
    ~size: [@bs.string] [ | `defalt | `small]=?,
    ~onChange: (bool, ReactEvent.Form.t) => unit=?,
    ~onClick: ReactEvent.Mouse.t => unit=?,
    ~className: string=?
  ) =>
  React.element =
  "Switch";
