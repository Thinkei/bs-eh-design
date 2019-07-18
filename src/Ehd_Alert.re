[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~afterClose: unit => unit=?,
    ~banner: bool=?,
    ~closable: bool=?,
    ~closeText: React.element=?,
    ~description: React.element=?,
    ~icon: string=?,
    ~message: React.element=?,
    ~showIcon: bool=?,
    ~_type: [@bs.string] [ | `info | `warning | `success | `error | `default]=?,
    ~style: ReactDOMRe.Style.t=?,
    ~className: string=?,
    ~onClose: ReactEvent.Mouse.t => unit=?
  ) =>
  React.element =
  "Alert";
