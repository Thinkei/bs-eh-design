module External = {
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
      ~_type: [@bs.string] [ | `info | `warning | `success | `error | `default]
                =?,
      ~style: ReactDOMRe.Style.t=?,
      ~className: string=?,
      ~onClose: ReactEvent.Mouse.t => unit=?
    ) =>
    React.element =
    "Alert";
};

[@react.component]
let make =
    (
      ~afterClose=?,
      ~banner=?,
      ~closable=?,
      ~closeText=?,
      ~description=?,
      ~icon=?,
      ~message=?,
      ~showIcon=?,
      ~_type=?,
      ~style=?,
      ~className=?,
      ~onClose=?,
    ) =>
  <External
    ?afterClose
    ?banner
    ?closable
    ?closeText
    ?description
    icon=?{Belt.Option.map(icon, Ehd_IconName.tToJs)}
    ?message
    ?showIcon
    ?_type
    ?style
    ?className
    ?onClose
  />;
