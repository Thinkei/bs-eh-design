[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~delay: int=?,
    ~indicator: React.element=?,
    ~size: [@bs.string] [ | `default | `small | `large]=?,
    ~spinning: bool=?,
    ~tip: string=?,
    ~wrapperClassName: string=?
  ) =>
  React.element =
  "Spin";
