module IconName = Ehd_IconName;

module External = {
  [@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
  external make:
    (
      ~name: string,
      ~color: [@bs.string] [ | `main | `light]=?,
      ~style: ReactDOMRe.Style.t=?,
      ~theme: [@bs.string] [ | `filled | `outlined | `twoTone]=?,
      ~spin: bool=?,
      ~rotate: int=?,
      ~twoToneColor: string=?
    ) =>
    React.element =
    "Icon";
};

[@react.component]
let make =
    (~name, ~color=?, ~style=?, ~theme=?, ~spin=?, ~rotate=?, ~twoToneColor=?) =>
  <External
    name={Ehd_IconName.tToJs(name)}
    ?color
    ?style
    ?theme
    ?spin
    ?rotate
    ?twoToneColor
  />;
