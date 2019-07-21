[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~autoFocus: bool=?,
    ~defaultValue: float=?,
    ~disabled: bool=?,
    ~formatter: float => string=?,
    ~max: float=?,
    ~min: float=?,
    ~parser: string => float=?,
    ~precision: float=?,
    ~decimalSeparator: string=?,
    ~size: string=?,
    ~step: float=?,
    ~value: float=?,
    ~onChange: float => unit=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?
  ) =>
  React.element =
  "InputNumber";
