[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~offset: int=?,
    ~order: int=?,
    ~pull: int=?,
    ~push: int=?,
    ~span: int=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~children: React.element
  ) =>
  React.element =
  "Col";
