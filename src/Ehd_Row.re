module GutterProp = {
  [@bs.deriving abstract]
  type gutterObj = {
    [@bs.optional]
    xs: int,
    [@bs.optional]
    sm: int,
    [@bs.optional]
    md: int,
  };

  type t('a) =
    | Number(int): t(int)
    | GutterObj(option(int), option(int), option(int)): t(gutterObj);

  let tToJs: type a. t(a) => a =
    fun
    | Number(n) => n
    | GutterObj(xs, sm, md) => gutterObj(~xs?, ~sm?, ~md?, ());
};

module External = {
  [@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
  external make:
    (
      ~align: [@bs.string] [ | `top | `middle | `bottom]=?,
      ~gutter: 'a=?,
      ~justify: [@bs.string] [
                  | `start
                  | [@bs.as "end"] `end_
                  | `center
                  | [@bs.as "space-around"] `spaceAround
                  | [@bs.as "space-between"] `spaceBetween
                ]
                  =?,
      ~_type: [@bs.string] [ | `flex]=?,
      ~className: string=?,
      ~style: ReactDOMRe.Style.t=?,
      ~children: React.element
    ) =>
    React.element =
    "Row";
};

[@react.component]
let make = (~align=?, ~gutter=?, ~justify=?, ~_type=?, ~className=?, ~style=?, ~children) => {
  <External
    ?align
    gutter=?{Belt.Option.map(gutter, GutterProp.tToJs)}
    ?justify
    ?_type
    ?className
    ?style>
    children
  </External>;
};
