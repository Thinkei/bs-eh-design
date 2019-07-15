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
    ~status: [@bs.string] [
               | `success
               | `processing
               | `default
               | `error
               | `warning
             ]
               =?,
    ~text: string=?,
    ~title: string=?,
    ~scrollNumberPrefixCls: string=?,
    ~offset: array(int)=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Badge";
