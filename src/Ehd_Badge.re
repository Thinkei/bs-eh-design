module StatusProp = {
  [@bs.deriving jsConverter]
  type t = [ | `success | `processing | `default | `error | `warning];
};

module External = {
  [@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
  external make:
    (
      ~count: int=?,
      ~showZero: bool=?,
      ~overflowCount: int=?,
      ~dot: bool=?,
      ~style: ReactDOMRe.Style.t=?,
      ~prefixCls: string=?,
      ~className: string=?,
      ~status: string=?,
      ~text: string=?,
      ~title: string=?,
      ~scrollNumberPrefixCls: string=?,
      ~offset: array(int)=?,
      ~children: React.element=?
    ) =>
    React.element =
    "Badge";
};

[@react.component]
let make =
    (
      ~count=?,
      ~showZero=?,
      ~overflowCount=?,
      ~dot=?,
      ~style=?,
      ~prefixCls=?,
      ~className=?,
      ~status=?,
      ~text=?,
      ~title=?,
      ~scrollNumberPrefixCls=?,
      ~offset=?,
      ~children=?,
    ) =>
  <External
    ?count
    ?showZero
    ?overflowCount
    ?dot
    ?style
    ?prefixCls
    ?className
    status=?{Belt.Option.map(status, StatusProp.tToJs)}
    ?text
    ?title
    ?scrollNumberPrefixCls
    ?offset
    ?children
  />;
