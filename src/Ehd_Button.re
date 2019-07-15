module LoadingProp = {
  type delay = {. "delay": int};
  type t('a) =
    | Bool(bool): t(bool)
    | Delay(int): t(delay);

  let toJs: type a. t(a) => a =
    fun
    | Bool(value) => value
    | Delay(value) => {"delay": value};
};

module External = {
  [@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
  external make:
    (
      ~disabled: bool=?,
      ~ghost: bool=?,
      ~href: string=?,
      ~htmlType: string=?,
      ~icon: string=?,
      ~outlinedIcon: bool=?,
      ~loading: bool=?,
      ~shape: [@bs.string] [ | `circle | `round]=?,
      ~size: [@bs.string] [ | `small | `large | `xlarge]=?,
      ~target: string=?,
      ~_type: [@bs.string] [
                | `primary
                | `ghost
                | `dashed
                | `danger
                | `link
                | `default
              ]
                =?,
      ~onClick: ReactEvent.Mouse.t => unit=?,
      ~block: bool=?,
      ~children: React.element
    ) =>
    React.element =
    "Button";
};

[@react.component]
let make =
    (
      ~disabled=?,
      ~ghost=?,
      ~href=?,
      ~htmlType=?,
      ~icon=?,
      ~outlinedIcon=?,
      ~loading=?,
      ~shape=?,
      ~size=?,
      ~target=?,
      ~_type=?,
      ~onClick=?,
      ~block=?,
      ~children,
    ) =>
  <External
    ?disabled
    ?ghost
    ?href
    ?htmlType
    icon=?{Belt.Option.map(icon, Ehd_IconName.tToJs)}
    ?outlinedIcon
    loading=?{Belt.Option.map(loading, LoadingProp.toJs)}
    ?shape
    ?size
    ?target
    ?_type
    ?onClick
    ?block>
    children
  </External>;
