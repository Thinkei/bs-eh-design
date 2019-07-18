module StrokeColorProp = {
  type linearGradient = {
    .
    "from": string,
    "to": string,
    "direction": option(string),
  };

  type t('a) =
    | String(string): t(string)
    | LinearGradient(string, string, option(string)): t(linearGradient);

  let tToJs: type a. t(a) => a =
    fun
    | String(value) => value
    | LinearGradient(from, _to, direction) => {
        "from": from,
        "to": _to,
        "direction": direction,
      };
};

module External = {
  [@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
  external make:
    (
      ~_type: [@bs.string] [ | `line | `circle | `dashboard]=?,
      ~size: [@bs.string] [ | `default | `small]=?,
      ~format: (float, float) => string=?,
      ~percent: float=?,
      ~showInfo: bool=?,
      ~status: [@bs.string] [
                 | `success
                 | [@bs.as "exception"] `error
                 | `normal
                 | `active
               ]
                 =?,
      ~strokeLinecap: [@bs.string] [ | `round | `square]=?,
      ~successPercent: float=?,
      ~width: int=?,
      ~strokeWidth: int=?,
      ~strokeColor: string=?,
      ~gapDegree: int=?,
      ~gapPosition: [@bs.string] [ | `top | `bottom | `left | `right]=?
    ) =>
    React.element =
    "Progress";
};

[@react.component]
let make =
    (
      ~_type=?,
      ~size=?,
      ~format=?,
      ~percent=?,
      ~showInfo=?,
      ~status=?,
      ~strokeLinecap=?,
      ~successPercent=?,
      ~width=?,
      ~strokeWidth=?,
      ~strokeColor=?,
      ~gapDegree=?,
      ~gapPosition=?,
    ) => {
  <External
    ?_type
    ?size
    ?format
    ?percent
    ?showInfo
    ?status
    ?strokeLinecap
    ?successPercent
    ?width
    ?strokeWidth
    strokeColor=?{Belt.Option.map(strokeColor, StrokeColorProp.tToJs)}
    ?gapDegree
    ?gapPosition
  />;
};
