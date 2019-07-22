[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~visible: bool,
    ~confirmLoading: bool=?,
    ~title: string=?,
    ~closable: bool=?,
    ~onOk: ReactEvent.Mouse.t => unit=?,
    ~onCancel: ReactEvent.Mouse.t => unit=?,
    ~afterClose: unit => unit=?,
    ~centered: bool=?,
    ~width: int=?,
    ~footer: React.element=?,
    ~okText: string=?,
    ~okType: [@bs.string] [ | `primary | `ghost | `dashed | `danger]=?,
    ~cancelText: string=?,
    ~zIndex: int=?,
    ~okCancel: bool=?,
    ~destroyOnClose: bool=?,
    ~wrapClassName: string=?,
    ~maskTransitionName: string=?,
    ~transitionName: string=?,
    ~className: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~bodyStyle: ReactDOMRe.Style.t=?,
    ~mask: bool=?,
    ~maskClosable: bool=?,
    ~maskStyle: ReactDOMRe.Style.t=?,
    ~keyboard: bool=?,
    ~children: React.element
  ) =>
  React.element =
  "Modal";
