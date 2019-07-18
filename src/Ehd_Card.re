[@bs.module "@ehrocks/eh-ant-design/lib"] [@react.component]
external make:
  (
    ~actions: array(React.element)=?,
    ~activeTabKey: string=?,
    ~style: ReactDOMRe.Style.t=?,
    ~headStyle: ReactDOMRe.Style.t=?,
    ~bodyStyle: ReactDOMRe.Style.t=?,
    ~bordered: bool=?,
    ~cover: React.element=?,
    ~defaultActiveTabKey: 'a=?,
    ~extra: React.element=?,
    ~hoverable: bool=?,
    ~loading: bool=?,
    ~tabList: array({
                .
                "key": string,
                "tab": React.element,
              })
                =?,
    ~size: [@bs.string] [ | `default | `small]=?,
    ~title: string=?,
    ~_type: [@bs.string] [ | `inner]=?,
    ~onTabChange: string => unit=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Card";
