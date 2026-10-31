#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00160DF8
// Address: 0x160df8 - 0x161218
void sub_00160DF8_0x160df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160DF8_0x160df8");
#endif

    switch (ctx->pc) {
        case 0x160df8u: goto label_160df8;
        case 0x160dfcu: goto label_160dfc;
        case 0x160e00u: goto label_160e00;
        case 0x160e04u: goto label_160e04;
        case 0x160e08u: goto label_160e08;
        case 0x160e0cu: goto label_160e0c;
        case 0x160e10u: goto label_160e10;
        case 0x160e14u: goto label_160e14;
        case 0x160e18u: goto label_160e18;
        case 0x160e1cu: goto label_160e1c;
        case 0x160e20u: goto label_160e20;
        case 0x160e24u: goto label_160e24;
        case 0x160e28u: goto label_160e28;
        case 0x160e2cu: goto label_160e2c;
        case 0x160e30u: goto label_160e30;
        case 0x160e34u: goto label_160e34;
        case 0x160e38u: goto label_160e38;
        case 0x160e3cu: goto label_160e3c;
        case 0x160e40u: goto label_160e40;
        case 0x160e44u: goto label_160e44;
        case 0x160e48u: goto label_160e48;
        case 0x160e4cu: goto label_160e4c;
        case 0x160e50u: goto label_160e50;
        case 0x160e54u: goto label_160e54;
        case 0x160e58u: goto label_160e58;
        case 0x160e5cu: goto label_160e5c;
        case 0x160e60u: goto label_160e60;
        case 0x160e64u: goto label_160e64;
        case 0x160e68u: goto label_160e68;
        case 0x160e6cu: goto label_160e6c;
        case 0x160e70u: goto label_160e70;
        case 0x160e74u: goto label_160e74;
        case 0x160e78u: goto label_160e78;
        case 0x160e7cu: goto label_160e7c;
        case 0x160e80u: goto label_160e80;
        case 0x160e84u: goto label_160e84;
        case 0x160e88u: goto label_160e88;
        case 0x160e8cu: goto label_160e8c;
        case 0x160e90u: goto label_160e90;
        case 0x160e94u: goto label_160e94;
        case 0x160e98u: goto label_160e98;
        case 0x160e9cu: goto label_160e9c;
        case 0x160ea0u: goto label_160ea0;
        case 0x160ea4u: goto label_160ea4;
        case 0x160ea8u: goto label_160ea8;
        case 0x160eacu: goto label_160eac;
        case 0x160eb0u: goto label_160eb0;
        case 0x160eb4u: goto label_160eb4;
        case 0x160eb8u: goto label_160eb8;
        case 0x160ebcu: goto label_160ebc;
        case 0x160ec0u: goto label_160ec0;
        case 0x160ec4u: goto label_160ec4;
        case 0x160ec8u: goto label_160ec8;
        case 0x160eccu: goto label_160ecc;
        case 0x160ed0u: goto label_160ed0;
        case 0x160ed4u: goto label_160ed4;
        case 0x160ed8u: goto label_160ed8;
        case 0x160edcu: goto label_160edc;
        case 0x160ee0u: goto label_160ee0;
        case 0x160ee4u: goto label_160ee4;
        case 0x160ee8u: goto label_160ee8;
        case 0x160eecu: goto label_160eec;
        case 0x160ef0u: goto label_160ef0;
        case 0x160ef4u: goto label_160ef4;
        case 0x160ef8u: goto label_160ef8;
        case 0x160efcu: goto label_160efc;
        case 0x160f00u: goto label_160f00;
        case 0x160f04u: goto label_160f04;
        case 0x160f08u: goto label_160f08;
        case 0x160f0cu: goto label_160f0c;
        case 0x160f10u: goto label_160f10;
        case 0x160f14u: goto label_160f14;
        case 0x160f18u: goto label_160f18;
        case 0x160f1cu: goto label_160f1c;
        case 0x160f20u: goto label_160f20;
        case 0x160f24u: goto label_160f24;
        case 0x160f28u: goto label_160f28;
        case 0x160f2cu: goto label_160f2c;
        case 0x160f30u: goto label_160f30;
        case 0x160f34u: goto label_160f34;
        case 0x160f38u: goto label_160f38;
        case 0x160f3cu: goto label_160f3c;
        case 0x160f40u: goto label_160f40;
        case 0x160f44u: goto label_160f44;
        case 0x160f48u: goto label_160f48;
        case 0x160f4cu: goto label_160f4c;
        case 0x160f50u: goto label_160f50;
        case 0x160f54u: goto label_160f54;
        case 0x160f58u: goto label_160f58;
        case 0x160f5cu: goto label_160f5c;
        case 0x160f60u: goto label_160f60;
        case 0x160f64u: goto label_160f64;
        case 0x160f68u: goto label_160f68;
        case 0x160f6cu: goto label_160f6c;
        case 0x160f70u: goto label_160f70;
        case 0x160f74u: goto label_160f74;
        case 0x160f78u: goto label_160f78;
        case 0x160f7cu: goto label_160f7c;
        case 0x160f80u: goto label_160f80;
        case 0x160f84u: goto label_160f84;
        case 0x160f88u: goto label_160f88;
        case 0x160f8cu: goto label_160f8c;
        case 0x160f90u: goto label_160f90;
        case 0x160f94u: goto label_160f94;
        case 0x160f98u: goto label_160f98;
        case 0x160f9cu: goto label_160f9c;
        case 0x160fa0u: goto label_160fa0;
        case 0x160fa4u: goto label_160fa4;
        case 0x160fa8u: goto label_160fa8;
        case 0x160facu: goto label_160fac;
        case 0x160fb0u: goto label_160fb0;
        case 0x160fb4u: goto label_160fb4;
        case 0x160fb8u: goto label_160fb8;
        case 0x160fbcu: goto label_160fbc;
        case 0x160fc0u: goto label_160fc0;
        case 0x160fc4u: goto label_160fc4;
        case 0x160fc8u: goto label_160fc8;
        case 0x160fccu: goto label_160fcc;
        case 0x160fd0u: goto label_160fd0;
        case 0x160fd4u: goto label_160fd4;
        case 0x160fd8u: goto label_160fd8;
        case 0x160fdcu: goto label_160fdc;
        case 0x160fe0u: goto label_160fe0;
        case 0x160fe4u: goto label_160fe4;
        case 0x160fe8u: goto label_160fe8;
        case 0x160fecu: goto label_160fec;
        case 0x160ff0u: goto label_160ff0;
        case 0x160ff4u: goto label_160ff4;
        case 0x160ff8u: goto label_160ff8;
        case 0x160ffcu: goto label_160ffc;
        case 0x161000u: goto label_161000;
        case 0x161004u: goto label_161004;
        case 0x161008u: goto label_161008;
        case 0x16100cu: goto label_16100c;
        case 0x161010u: goto label_161010;
        case 0x161014u: goto label_161014;
        case 0x161018u: goto label_161018;
        case 0x16101cu: goto label_16101c;
        case 0x161020u: goto label_161020;
        case 0x161024u: goto label_161024;
        case 0x161028u: goto label_161028;
        case 0x16102cu: goto label_16102c;
        case 0x161030u: goto label_161030;
        case 0x161034u: goto label_161034;
        case 0x161038u: goto label_161038;
        case 0x16103cu: goto label_16103c;
        case 0x161040u: goto label_161040;
        case 0x161044u: goto label_161044;
        case 0x161048u: goto label_161048;
        case 0x16104cu: goto label_16104c;
        case 0x161050u: goto label_161050;
        case 0x161054u: goto label_161054;
        case 0x161058u: goto label_161058;
        case 0x16105cu: goto label_16105c;
        case 0x161060u: goto label_161060;
        case 0x161064u: goto label_161064;
        case 0x161068u: goto label_161068;
        case 0x16106cu: goto label_16106c;
        case 0x161070u: goto label_161070;
        case 0x161074u: goto label_161074;
        case 0x161078u: goto label_161078;
        case 0x16107cu: goto label_16107c;
        case 0x161080u: goto label_161080;
        case 0x161084u: goto label_161084;
        case 0x161088u: goto label_161088;
        case 0x16108cu: goto label_16108c;
        case 0x161090u: goto label_161090;
        case 0x161094u: goto label_161094;
        case 0x161098u: goto label_161098;
        case 0x16109cu: goto label_16109c;
        case 0x1610a0u: goto label_1610a0;
        case 0x1610a4u: goto label_1610a4;
        case 0x1610a8u: goto label_1610a8;
        case 0x1610acu: goto label_1610ac;
        case 0x1610b0u: goto label_1610b0;
        case 0x1610b4u: goto label_1610b4;
        case 0x1610b8u: goto label_1610b8;
        case 0x1610bcu: goto label_1610bc;
        case 0x1610c0u: goto label_1610c0;
        case 0x1610c4u: goto label_1610c4;
        case 0x1610c8u: goto label_1610c8;
        case 0x1610ccu: goto label_1610cc;
        case 0x1610d0u: goto label_1610d0;
        case 0x1610d4u: goto label_1610d4;
        case 0x1610d8u: goto label_1610d8;
        case 0x1610dcu: goto label_1610dc;
        case 0x1610e0u: goto label_1610e0;
        case 0x1610e4u: goto label_1610e4;
        case 0x1610e8u: goto label_1610e8;
        case 0x1610ecu: goto label_1610ec;
        case 0x1610f0u: goto label_1610f0;
        case 0x1610f4u: goto label_1610f4;
        case 0x1610f8u: goto label_1610f8;
        case 0x1610fcu: goto label_1610fc;
        case 0x161100u: goto label_161100;
        case 0x161104u: goto label_161104;
        case 0x161108u: goto label_161108;
        case 0x16110cu: goto label_16110c;
        case 0x161110u: goto label_161110;
        case 0x161114u: goto label_161114;
        case 0x161118u: goto label_161118;
        case 0x16111cu: goto label_16111c;
        case 0x161120u: goto label_161120;
        case 0x161124u: goto label_161124;
        case 0x161128u: goto label_161128;
        case 0x16112cu: goto label_16112c;
        case 0x161130u: goto label_161130;
        case 0x161134u: goto label_161134;
        case 0x161138u: goto label_161138;
        case 0x16113cu: goto label_16113c;
        case 0x161140u: goto label_161140;
        case 0x161144u: goto label_161144;
        case 0x161148u: goto label_161148;
        case 0x16114cu: goto label_16114c;
        case 0x161150u: goto label_161150;
        case 0x161154u: goto label_161154;
        case 0x161158u: goto label_161158;
        case 0x16115cu: goto label_16115c;
        case 0x161160u: goto label_161160;
        case 0x161164u: goto label_161164;
        case 0x161168u: goto label_161168;
        case 0x16116cu: goto label_16116c;
        case 0x161170u: goto label_161170;
        case 0x161174u: goto label_161174;
        case 0x161178u: goto label_161178;
        case 0x16117cu: goto label_16117c;
        case 0x161180u: goto label_161180;
        case 0x161184u: goto label_161184;
        case 0x161188u: goto label_161188;
        case 0x16118cu: goto label_16118c;
        case 0x161190u: goto label_161190;
        case 0x161194u: goto label_161194;
        case 0x161198u: goto label_161198;
        case 0x16119cu: goto label_16119c;
        case 0x1611a0u: goto label_1611a0;
        case 0x1611a4u: goto label_1611a4;
        case 0x1611a8u: goto label_1611a8;
        case 0x1611acu: goto label_1611ac;
        case 0x1611b0u: goto label_1611b0;
        case 0x1611b4u: goto label_1611b4;
        case 0x1611b8u: goto label_1611b8;
        case 0x1611bcu: goto label_1611bc;
        case 0x1611c0u: goto label_1611c0;
        case 0x1611c4u: goto label_1611c4;
        case 0x1611c8u: goto label_1611c8;
        case 0x1611ccu: goto label_1611cc;
        case 0x1611d0u: goto label_1611d0;
        case 0x1611d4u: goto label_1611d4;
        case 0x1611d8u: goto label_1611d8;
        case 0x1611dcu: goto label_1611dc;
        case 0x1611e0u: goto label_1611e0;
        case 0x1611e4u: goto label_1611e4;
        case 0x1611e8u: goto label_1611e8;
        case 0x1611ecu: goto label_1611ec;
        case 0x1611f0u: goto label_1611f0;
        case 0x1611f4u: goto label_1611f4;
        case 0x1611f8u: goto label_1611f8;
        case 0x1611fcu: goto label_1611fc;
        case 0x161200u: goto label_161200;
        case 0x161204u: goto label_161204;
        case 0x161208u: goto label_161208;
        case 0x16120cu: goto label_16120c;
        case 0x161210u: goto label_161210;
        case 0x161214u: goto label_161214;
        default: break;
    }

    ctx->pc = 0x160df8u;

label_160df8:
    // 0x160df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x160df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_160dfc:
    // 0x160dfc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x160dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_160e00:
    // 0x160e00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_160e04:
    // 0x160e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x160e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_160e08:
    // 0x160e08: 0xc0ce1a0  jal         func_338680
label_160e0c:
    if (ctx->pc == 0x160E0Cu) {
        ctx->pc = 0x160E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E08u;
        // 0x160e0c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E10u;
        goto label_160e10;
    }
    ctx->pc = 0x160E08u;
    SET_GPR_U32(ctx, 31, 0x160E10u);
    ctx->pc = 0x160E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160E08u;
    // 0x160e0c: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338680u, 0x160E08u, 0x160E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E10u;
label_160e10:
    // 0x160e10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160e14:
    // 0x160e14: 0x8c45b788  lw          $a1, -0x4878($v0)
    ctx->pc = 0x160e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948744)));
label_160e18:
    // 0x160e18: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x160e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_160e1c:
    // 0x160e1c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x160e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_160e20:
    // 0x160e20: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_160e24:
    // 0x160e24: 0x40f809  jalr        $v0
label_160e28:
    if (ctx->pc == 0x160E28u) {
        ctx->pc = 0x160E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E24u;
        // 0x160e28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E2Cu;
        goto label_160e2c;
    }
    ctx->pc = 0x160E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160E2Cu);
        ctx->pc = 0x160E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E24u;
        // 0x160e28: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160E24u, 0x160E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160E2Cu;
label_160e2c:
    // 0x160e2c: 0xc0cebf8  jal         func_33AFE0
label_160e30:
    if (ctx->pc == 0x160E30u) {
        ctx->pc = 0x160E34u;
        goto label_160e34;
    }
    ctx->pc = 0x160E2Cu;
    SET_GPR_U32(ctx, 31, 0x160E34u);
    ctx->pc = 0x33AFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33AFE0u, 0x160E2Cu, 0x160E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E34u;
label_160e34:
    // 0x160e34: 0xc0551ec  jal         func_1547B0
label_160e38:
    if (ctx->pc == 0x160E38u) {
        ctx->pc = 0x160E3Cu;
        goto label_160e3c;
    }
    ctx->pc = 0x160E34u;
    SET_GPR_U32(ctx, 31, 0x160E3Cu);
    ctx->pc = 0x1547B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1547B0u, 0x160E34u, 0x160E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E3Cu;
label_160e3c:
    // 0x160e3c: 0x8e2a27e4  lw          $t2, 0x27E4($s1)
    ctx->pc = 0x160e3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_160e40:
    // 0x160e40: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x160e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_160e44:
    // 0x160e44: 0x24500260  addiu       $s0, $v0, 0x260
    ctx->pc = 0x160e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_160e48:
    // 0x160e48: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x160e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_160e4c:
    // 0x160e4c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x160e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_160e50:
    // 0x160e50: 0x24a50258  addiu       $a1, $a1, 0x258
    ctx->pc = 0x160e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 600));
label_160e54:
    // 0x160e54: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x160e54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_160e58:
    // 0x160e58: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x160e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_160e5c:
    // 0x160e5c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x160e5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_160e60:
    // 0x160e60: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x160e60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160e64:
    // 0x160e64: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_160e68:
    // 0x160e68: 0x240900f8  addiu       $t1, $zero, 0xF8
    ctx->pc = 0x160e68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_160e6c:
    // 0x160e6c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x160e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_160e70:
    // 0x160e70: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x160e70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160e74:
    // 0x160e74: 0x40f809  jalr        $v0
label_160e78:
    if (ctx->pc == 0x160E78u) {
        ctx->pc = 0x160E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E74u;
        // 0x160e78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E7Cu;
        goto label_160e7c;
    }
    ctx->pc = 0x160E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160E7Cu);
        ctx->pc = 0x160E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E74u;
        // 0x160e78: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160E74u, 0x160E7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160E7Cu;
label_160e7c:
    // 0x160e7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160e80:
    // 0x160e80: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_160e84:
    if (ctx->pc == 0x160E84u) {
        ctx->pc = 0x160E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160E80u;
        // 0x160e84: 0x8e2b27e4  lw          $t3, 0x27E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160E88u;
        goto label_160e88;
    }
    ctx->pc = 0x160E80u;
    {
        const bool branch_taken_0x160e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x160e80) {
            ctx->pc = 0x160E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160E80u;
            // 0x160e84: 0x8e2b27e4  lw          $t3, 0x27E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160E98u;
            goto label_160e98;
        }
    }
    ctx->pc = 0x160E88u;
label_160e88:
    // 0x160e88: 0xc0523d8  jal         func_148F60
label_160e8c:
    if (ctx->pc == 0x160E8Cu) {
        ctx->pc = 0x160E90u;
        goto label_160e90;
    }
    ctx->pc = 0x160E88u;
    SET_GPR_U32(ctx, 31, 0x160E90u);
    ctx->pc = 0x148F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F60u, 0x160E88u, 0x160E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160E90u;
label_160e90:
    // 0x160e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160e94:
    // 0x160e94: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x160e94u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_160e98:
    // 0x160e98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160e9c:
    // 0x160e9c: 0xac44b8b8  sw          $a0, -0x4748($v0)
    ctx->pc = 0x160e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949048), GPR_U32(ctx, 4));
label_160ea0:
    // 0x160ea0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x160ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_160ea4:
    // 0x160ea4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x160ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_160ea8:
    // 0x160ea8: 0x24a50290  addiu       $a1, $a1, 0x290
    ctx->pc = 0x160ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
label_160eac:
    // 0x160eac: 0x24060068  addiu       $a2, $zero, 0x68
    ctx->pc = 0x160eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_160eb0:
    // 0x160eb0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x160eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_160eb4:
    // 0x160eb4: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x160eb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_160eb8:
    // 0x160eb8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x160eb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160ebc:
    // 0x160ebc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_160ec0:
    // 0x160ec0: 0x24090101  addiu       $t1, $zero, 0x101
    ctx->pc = 0x160ec0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_160ec4:
    // 0x160ec4: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x160ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_160ec8:
    // 0x160ec8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x160ec8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160ecc:
    // 0x160ecc: 0x40f809  jalr        $v0
label_160ed0:
    if (ctx->pc == 0x160ED0u) {
        ctx->pc = 0x160ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160ECCu;
        // 0x160ed0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160ED4u;
        goto label_160ed4;
    }
    ctx->pc = 0x160ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160ED4u);
        ctx->pc = 0x160ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160ECCu;
        // 0x160ed0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160ECCu, 0x160ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160ED4u;
label_160ed4:
    // 0x160ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160ed8:
    // 0x160ed8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_160edc:
    if (ctx->pc == 0x160EDCu) {
        ctx->pc = 0x160EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160ED8u;
        // 0x160edc: 0x8e2b27e4  lw          $t3, 0x27E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160EE0u;
        goto label_160ee0;
    }
    ctx->pc = 0x160ED8u;
    {
        const bool branch_taken_0x160ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x160ed8) {
            ctx->pc = 0x160EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160ED8u;
            // 0x160edc: 0x8e2b27e4  lw          $t3, 0x27E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160EF0u;
            goto label_160ef0;
        }
    }
    ctx->pc = 0x160EE0u;
label_160ee0:
    // 0x160ee0: 0xc051650  jal         func_145940
label_160ee4:
    if (ctx->pc == 0x160EE4u) {
        ctx->pc = 0x160EE8u;
        goto label_160ee8;
    }
    ctx->pc = 0x160EE0u;
    SET_GPR_U32(ctx, 31, 0x160EE8u);
    ctx->pc = 0x145940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145940u, 0x160EE0u, 0x160EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160EE8u;
label_160ee8:
    // 0x160ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160eec:
    // 0x160eec: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_160ef0:
    // 0x160ef0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160ef4:
    // 0x160ef4: 0xac44b734  sw          $a0, -0x48CC($v0)
    ctx->pc = 0x160ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948660), GPR_U32(ctx, 4));
label_160ef8:
    // 0x160ef8: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x160ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_160efc:
    // 0x160efc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x160efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_160f00:
    // 0x160f00: 0x24a502a0  addiu       $a1, $a1, 0x2A0
    ctx->pc = 0x160f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 672));
label_160f04:
    // 0x160f04: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x160f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_160f08:
    // 0x160f08: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x160f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_160f0c:
    // 0x160f0c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x160f0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_160f10:
    // 0x160f10: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x160f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160f14:
    // 0x160f14: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_160f18:
    // 0x160f18: 0x2409010a  addiu       $t1, $zero, 0x10A
    ctx->pc = 0x160f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
label_160f1c:
    // 0x160f1c: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x160f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_160f20:
    // 0x160f20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x160f20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160f24:
    // 0x160f24: 0x40f809  jalr        $v0
label_160f28:
    if (ctx->pc == 0x160F28u) {
        ctx->pc = 0x160F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F24u;
        // 0x160f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F2Cu;
        goto label_160f2c;
    }
    ctx->pc = 0x160F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160F2Cu);
        ctx->pc = 0x160F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F24u;
        // 0x160f28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160F24u, 0x160F2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160F2Cu;
label_160f2c:
    // 0x160f2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160f30:
    // 0x160f30: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_160f34:
    if (ctx->pc == 0x160F34u) {
        ctx->pc = 0x160F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F30u;
        // 0x160f34: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F38u;
        goto label_160f38;
    }
    ctx->pc = 0x160F30u;
    {
        const bool branch_taken_0x160f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F30u;
        // 0x160f34: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f30) {
            ctx->pc = 0x160F48u;
            goto label_160f48;
        }
    }
    ctx->pc = 0x160F38u;
label_160f38:
    // 0x160f38: 0xc108cd6  jal         func_423358
label_160f3c:
    if (ctx->pc == 0x160F3Cu) {
        ctx->pc = 0x160F40u;
        goto label_160f40;
    }
    ctx->pc = 0x160F38u;
    SET_GPR_U32(ctx, 31, 0x160F40u);
    ctx->pc = 0x423358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423358u, 0x160F38u, 0x160F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F40u;
label_160f40:
    // 0x160f40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160f44:
    // 0x160f44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x160f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_160f48:
    // 0x160f48: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x160f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_160f4c:
    // 0x160f4c: 0xac44504c  sw          $a0, 0x504C($v0)
    ctx->pc = 0x160f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20556), GPR_U32(ctx, 4));
label_160f50:
    // 0x160f50: 0xc103178  jal         func_40C5E0
label_160f54:
    if (ctx->pc == 0x160F54u) {
        ctx->pc = 0x160F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F50u;
        // 0x160f54: 0x8c6447a4  lw          $a0, 0x47A4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18340)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F58u;
        goto label_160f58;
    }
    ctx->pc = 0x160F50u;
    SET_GPR_U32(ctx, 31, 0x160F58u);
    ctx->pc = 0x160F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160F50u;
    // 0x160f54: 0x8c6447a4  lw          $a0, 0x47A4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C5E0u, 0x160F50u, 0x160F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F58u;
label_160f58:
    // 0x160f58: 0xc1033c6  jal         func_40CF18
label_160f5c:
    if (ctx->pc == 0x160F5Cu) {
        ctx->pc = 0x160F60u;
        goto label_160f60;
    }
    ctx->pc = 0x160F58u;
    SET_GPR_U32(ctx, 31, 0x160F60u);
    ctx->pc = 0x40CF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CF18u, 0x160F58u, 0x160F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160F60u;
label_160f60:
    // 0x160f60: 0x8e2b27e4  lw          $t3, 0x27E4($s1)
    ctx->pc = 0x160f60u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_160f64:
    // 0x160f64: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x160f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_160f68:
    // 0x160f68: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x160f68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_160f6c:
    // 0x160f6c: 0x24a502b0  addiu       $a1, $a1, 0x2B0
    ctx->pc = 0x160f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 688));
label_160f70:
    // 0x160f70: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x160f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_160f74:
    // 0x160f74: 0x34c6f460  ori         $a2, $a2, 0xF460
    ctx->pc = 0x160f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62560);
label_160f78:
    // 0x160f78: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x160f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_160f7c:
    // 0x160f7c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x160f7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160f80:
    // 0x160f80: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x160f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_160f84:
    // 0x160f84: 0x24090135  addiu       $t1, $zero, 0x135
    ctx->pc = 0x160f84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 309));
label_160f88:
    // 0x160f88: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x160f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_160f8c:
    // 0x160f8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x160f8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_160f90:
    // 0x160f90: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x160f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_160f94:
    // 0x160f94: 0x40f809  jalr        $v0
label_160f98:
    if (ctx->pc == 0x160F98u) {
        ctx->pc = 0x160F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F94u;
        // 0x160f98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160F9Cu;
        goto label_160f9c;
    }
    ctx->pc = 0x160F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x160F9Cu);
        ctx->pc = 0x160F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160F94u;
        // 0x160f98: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160F94u, 0x160F9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x160F9Cu;
label_160f9c:
    // 0x160f9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160fa0:
    // 0x160fa0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_160fa4:
    if (ctx->pc == 0x160FA4u) {
        ctx->pc = 0x160FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FA0u;
        // 0x160fa4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FA8u;
        goto label_160fa8;
    }
    ctx->pc = 0x160FA0u;
    {
        const bool branch_taken_0x160fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FA0u;
        // 0x160fa4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160fa0) {
            ctx->pc = 0x160FB8u;
            goto label_160fb8;
        }
    }
    ctx->pc = 0x160FA8u;
label_160fa8:
    // 0x160fa8: 0xc0cf0a2  jal         func_33C288
label_160fac:
    if (ctx->pc == 0x160FACu) {
        ctx->pc = 0x160FB0u;
        goto label_160fb0;
    }
    ctx->pc = 0x160FA8u;
    SET_GPR_U32(ctx, 31, 0x160FB0u);
    ctx->pc = 0x33C288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C288u, 0x160FA8u, 0x160FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FB0u;
label_160fb0:
    // 0x160fb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_160fb4:
    // 0x160fb4: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x160fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
label_160fb8:
    // 0x160fb8: 0xc05bf32  jal         func_16FCC8
label_160fbc:
    if (ctx->pc == 0x160FBCu) {
        ctx->pc = 0x160FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160FB8u;
        // 0x160fbc: 0xac447198  sw          $a0, 0x7198($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29080), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x160FC0u;
        goto label_160fc0;
    }
    ctx->pc = 0x160FB8u;
    SET_GPR_U32(ctx, 31, 0x160FC0u);
    ctx->pc = 0x160FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160FB8u;
    // 0x160fbc: 0xac447198  sw          $a0, 0x7198($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 29080), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FCC8u, 0x160FB8u, 0x160FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FC0u;
label_160fc0:
    // 0x160fc0: 0xc05c550  jal         func_171540
label_160fc4:
    if (ctx->pc == 0x160FC4u) {
        ctx->pc = 0x160FC8u;
        goto label_160fc8;
    }
    ctx->pc = 0x160FC0u;
    SET_GPR_U32(ctx, 31, 0x160FC8u);
    ctx->pc = 0x171540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171540u, 0x160FC0u, 0x160FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FC8u;
label_160fc8:
    // 0x160fc8: 0xc060d44  jal         func_183510
label_160fcc:
    if (ctx->pc == 0x160FCCu) {
        ctx->pc = 0x160FD0u;
        goto label_160fd0;
    }
    ctx->pc = 0x160FC8u;
    SET_GPR_U32(ctx, 31, 0x160FD0u);
    ctx->pc = 0x183510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183510u, 0x160FC8u, 0x160FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FD0u;
label_160fd0:
    // 0x160fd0: 0xc0d58e4  jal         func_356390
label_160fd4:
    if (ctx->pc == 0x160FD4u) {
        ctx->pc = 0x160FD8u;
        goto label_160fd8;
    }
    ctx->pc = 0x160FD0u;
    SET_GPR_U32(ctx, 31, 0x160FD8u);
    ctx->pc = 0x356390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356390u, 0x160FD0u, 0x160FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FD8u;
label_160fd8:
    // 0x160fd8: 0xc0d4d7a  jal         func_3535E8
label_160fdc:
    if (ctx->pc == 0x160FDCu) {
        ctx->pc = 0x160FE0u;
        goto label_160fe0;
    }
    ctx->pc = 0x160FD8u;
    SET_GPR_U32(ctx, 31, 0x160FE0u);
    ctx->pc = 0x3535E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3535E8u, 0x160FD8u, 0x160FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160FE0u;
label_160fe0:
    // 0x160fe0: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x160fe0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_160fe4:
    // 0x160fe4: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x160fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_160fe8:
    // 0x160fe8: 0x24a502c0  addiu       $a1, $a1, 0x2C0
    ctx->pc = 0x160fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
label_160fec:
    // 0x160fec: 0x24060d58  addiu       $a2, $zero, 0xD58
    ctx->pc = 0x160fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3416));
label_160ff0:
    // 0x160ff0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x160ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_160ff4:
    // 0x160ff4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x160ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_160ff8:
    // 0x160ff8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x160ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_160ffc:
    // 0x160ffc: 0x24090145  addiu       $t1, $zero, 0x145
    ctx->pc = 0x160ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_161000:
    // 0x161000: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x161000u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_161004:
    // 0x161004: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x161004u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161008:
    // 0x161008: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x161008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_16100c:
    // 0x16100c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x16100cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161010:
    // 0x161010: 0x40f809  jalr        $v0
label_161014:
    if (ctx->pc == 0x161014u) {
        ctx->pc = 0x161014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161010u;
        // 0x161014: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161018u;
        goto label_161018;
    }
    ctx->pc = 0x161010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161018u);
        ctx->pc = 0x161014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161010u;
        // 0x161014: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161010u, 0x161018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161018u;
label_161018:
    // 0x161018: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16101c:
    // 0x16101c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_161020:
    if (ctx->pc == 0x161020u) {
        ctx->pc = 0x161020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16101Cu;
        // 0x161020: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161024u;
        goto label_161024;
    }
    ctx->pc = 0x16101Cu;
    {
        const bool branch_taken_0x16101c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x161020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16101Cu;
        // 0x161020: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16101c) {
            ctx->pc = 0x161034u;
            goto label_161034;
        }
    }
    ctx->pc = 0x161024u;
label_161024:
    // 0x161024: 0xc0590dc  jal         func_164370
label_161028:
    if (ctx->pc == 0x161028u) {
        ctx->pc = 0x16102Cu;
        goto label_16102c;
    }
    ctx->pc = 0x161024u;
    SET_GPR_U32(ctx, 31, 0x16102Cu);
    ctx->pc = 0x164370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164370u, 0x161024u, 0x16102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16102Cu;
label_16102c:
    // 0x16102c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16102cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161030:
    // 0x161030: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x161030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_161034:
    // 0x161034: 0xc041206  jal         func_104818
label_161038:
    if (ctx->pc == 0x161038u) {
        ctx->pc = 0x161038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161034u;
        // 0x161038: 0xac44caa8  sw          $a0, -0x3558($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16103Cu;
        goto label_16103c;
    }
    ctx->pc = 0x161034u;
    SET_GPR_U32(ctx, 31, 0x16103Cu);
    ctx->pc = 0x161038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161034u;
    // 0x161038: 0xac44caa8  sw          $a0, -0x3558($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953640), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104818u, 0x161034u, 0x16103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16103Cu;
label_16103c:
    // 0x16103c: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x16103cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_161040:
    // 0x161040: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x161040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_161044:
    // 0x161044: 0x24a502d0  addiu       $a1, $a1, 0x2D0
    ctx->pc = 0x161044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 720));
label_161048:
    // 0x161048: 0x24060878  addiu       $a2, $zero, 0x878
    ctx->pc = 0x161048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2168));
label_16104c:
    // 0x16104c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x16104cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_161050:
    // 0x161050: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x161050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_161054:
    // 0x161054: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x161054u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161058:
    // 0x161058: 0x2409014c  addiu       $t1, $zero, 0x14C
    ctx->pc = 0x161058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 332));
label_16105c:
    // 0x16105c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x16105cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_161060:
    // 0x161060: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x161060u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161064:
    // 0x161064: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x161064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_161068:
    // 0x161068: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x161068u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16106c:
    // 0x16106c: 0x40f809  jalr        $v0
label_161070:
    if (ctx->pc == 0x161070u) {
        ctx->pc = 0x161070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16106Cu;
        // 0x161070: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161074u;
        goto label_161074;
    }
    ctx->pc = 0x16106Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161074u);
        ctx->pc = 0x161070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16106Cu;
        // 0x161070: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16106Cu, 0x161074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161074u;
label_161074:
    // 0x161074: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161078:
    // 0x161078: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_16107c:
    if (ctx->pc == 0x16107Cu) {
        ctx->pc = 0x16107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161078u;
        // 0x16107c: 0x8e2a27e4  lw          $t2, 0x27E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161080u;
        goto label_161080;
    }
    ctx->pc = 0x161078u;
    {
        const bool branch_taken_0x161078 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161078u;
        // 0x16107c: 0x8e2a27e4  lw          $t2, 0x27E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161078) {
            ctx->pc = 0x161090u;
            goto label_161090;
        }
    }
    ctx->pc = 0x161080u;
label_161080:
    // 0x161080: 0xc0e89ca  jal         func_3A2728
label_161084:
    if (ctx->pc == 0x161084u) {
        ctx->pc = 0x161088u;
        goto label_161088;
    }
    ctx->pc = 0x161080u;
    SET_GPR_U32(ctx, 31, 0x161088u);
    ctx->pc = 0x3A2728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2728u, 0x161080u, 0x161088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161088u;
label_161088:
    // 0x161088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16108c:
    // 0x16108c: 0x8e2a27e4  lw          $t2, 0x27E4($s1)
    ctx->pc = 0x16108cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_161090:
    // 0x161090: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x161090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_161094:
    // 0x161094: 0xac442c7c  sw          $a0, 0x2C7C($v0)
    ctx->pc = 0x161094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11388), GPR_U32(ctx, 4));
label_161098:
    // 0x161098: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x161098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16109c:
    // 0x16109c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x16109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1610a0:
    // 0x1610a0: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x1610a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_1610a4:
    // 0x1610a4: 0x24a502e0  addiu       $a1, $a1, 0x2E0
    ctx->pc = 0x1610a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 736));
label_1610a8:
    // 0x1610a8: 0x34c64e0c  ori         $a2, $a2, 0x4E0C
    ctx->pc = 0x1610a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)19980);
label_1610ac:
    // 0x1610ac: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1610acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1610b0:
    // 0x1610b0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1610b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1610b4:
    // 0x1610b4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1610b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1610b8:
    // 0x1610b8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1610b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1610bc:
    // 0x1610bc: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1610bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_1610c0:
    // 0x1610c0: 0x24090150  addiu       $t1, $zero, 0x150
    ctx->pc = 0x1610c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1610c4:
    // 0x1610c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1610c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1610c8:
    // 0x1610c8: 0x40f809  jalr        $v0
label_1610cc:
    if (ctx->pc == 0x1610CCu) {
        ctx->pc = 0x1610CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610C8u;
        // 0x1610cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610D0u;
        goto label_1610d0;
    }
    ctx->pc = 0x1610C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1610D0u);
        ctx->pc = 0x1610CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610C8u;
        // 0x1610cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1610C8u, 0x1610D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1610D0u;
label_1610d0:
    // 0x1610d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1610d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1610d4:
    // 0x1610d4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1610d8:
    if (ctx->pc == 0x1610D8u) {
        ctx->pc = 0x1610D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610D4u;
        // 0x1610d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610DCu;
        goto label_1610dc;
    }
    ctx->pc = 0x1610D4u;
    {
        const bool branch_taken_0x1610d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1610D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610D4u;
        // 0x1610d8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1610d4) {
            ctx->pc = 0x1610ECu;
            goto label_1610ec;
        }
    }
    ctx->pc = 0x1610DCu;
label_1610dc:
    // 0x1610dc: 0xc0e444e  jal         func_391138
label_1610e0:
    if (ctx->pc == 0x1610E0u) {
        ctx->pc = 0x1610E4u;
        goto label_1610e4;
    }
    ctx->pc = 0x1610DCu;
    SET_GPR_U32(ctx, 31, 0x1610E4u);
    ctx->pc = 0x391138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391138u, 0x1610DCu, 0x1610E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610E4u;
label_1610e4:
    // 0x1610e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1610e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1610e8:
    // 0x1610e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1610e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1610ec:
    // 0x1610ec: 0xc0c1948  jal         func_306520
label_1610f0:
    if (ctx->pc == 0x1610F0u) {
        ctx->pc = 0x1610F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1610ECu;
        // 0x1610f0: 0xac442c04  sw          $a0, 0x2C04($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11268), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1610F4u;
        goto label_1610f4;
    }
    ctx->pc = 0x1610ECu;
    SET_GPR_U32(ctx, 31, 0x1610F4u);
    ctx->pc = 0x1610F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1610ECu;
    // 0x1610f0: 0xac442c04  sw          $a0, 0x2C04($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 11268), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306520u, 0x1610ECu, 0x1610F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610F4u;
label_1610f4:
    // 0x1610f4: 0xc0c860a  jal         func_321828
label_1610f8:
    if (ctx->pc == 0x1610F8u) {
        ctx->pc = 0x1610FCu;
        goto label_1610fc;
    }
    ctx->pc = 0x1610F4u;
    SET_GPR_U32(ctx, 31, 0x1610FCu);
    ctx->pc = 0x321828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321828u, 0x1610F4u, 0x1610FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1610FCu;
label_1610fc:
    // 0x1610fc: 0xc062e84  jal         func_18BA10
label_161100:
    if (ctx->pc == 0x161100u) {
        ctx->pc = 0x161104u;
        goto label_161104;
    }
    ctx->pc = 0x1610FCu;
    SET_GPR_U32(ctx, 31, 0x161104u);
    ctx->pc = 0x18BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BA10u, 0x1610FCu, 0x161104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161104u;
label_161104:
    // 0x161104: 0xc105ec4  jal         func_417B10
label_161108:
    if (ctx->pc == 0x161108u) {
        ctx->pc = 0x16110Cu;
        goto label_16110c;
    }
    ctx->pc = 0x161104u;
    SET_GPR_U32(ctx, 31, 0x16110Cu);
    ctx->pc = 0x417B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417B10u, 0x161104u, 0x16110Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16110Cu;
label_16110c:
    // 0x16110c: 0xc1035a2  jal         func_40D688
label_161110:
    if (ctx->pc == 0x161110u) {
        ctx->pc = 0x161114u;
        goto label_161114;
    }
    ctx->pc = 0x16110Cu;
    SET_GPR_U32(ctx, 31, 0x161114u);
    ctx->pc = 0x40D688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D688u, 0x16110Cu, 0x161114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161114u;
label_161114:
    // 0x161114: 0xc061246  jal         func_184918
label_161118:
    if (ctx->pc == 0x161118u) {
        ctx->pc = 0x16111Cu;
        goto label_16111c;
    }
    ctx->pc = 0x161114u;
    SET_GPR_U32(ctx, 31, 0x16111Cu);
    ctx->pc = 0x184918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184918u, 0x161114u, 0x16111Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16111Cu;
label_16111c:
    // 0x16111c: 0xc0a4e10  jal         func_293840
label_161120:
    if (ctx->pc == 0x161120u) {
        ctx->pc = 0x161124u;
        goto label_161124;
    }
    ctx->pc = 0x16111Cu;
    SET_GPR_U32(ctx, 31, 0x161124u);
    ctx->pc = 0x293840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293840u, 0x16111Cu, 0x161124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161124u;
label_161124:
    // 0x161124: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x161124u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_161128:
    // 0x161128: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x161128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_16112c:
    // 0x16112c: 0x24a502f0  addiu       $a1, $a1, 0x2F0
    ctx->pc = 0x16112cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 752));
label_161130:
    // 0x161130: 0x240657c0  addiu       $a2, $zero, 0x57C0
    ctx->pc = 0x161130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22464));
label_161134:
    // 0x161134: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x161134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_161138:
    // 0x161138: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x161138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16113c:
    // 0x16113c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x16113cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161140:
    // 0x161140: 0x2409016e  addiu       $t1, $zero, 0x16E
    ctx->pc = 0x161140u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
label_161144:
    // 0x161144: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x161144u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_161148:
    // 0x161148: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x161148u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16114c:
    // 0x16114c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x16114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_161150:
    // 0x161150: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x161150u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161154:
    // 0x161154: 0x40f809  jalr        $v0
label_161158:
    if (ctx->pc == 0x161158u) {
        ctx->pc = 0x161158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161154u;
        // 0x161158: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16115Cu;
        goto label_16115c;
    }
    ctx->pc = 0x161154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16115Cu);
        ctx->pc = 0x161158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161154u;
        // 0x161158: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161154u, 0x16115Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16115Cu;
label_16115c:
    // 0x16115c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16115cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161160:
    // 0x161160: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_161164:
    if (ctx->pc == 0x161164u) {
        ctx->pc = 0x161164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161160u;
        // 0x161164: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161168u;
        goto label_161168;
    }
    ctx->pc = 0x161160u;
    {
        const bool branch_taken_0x161160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x161164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161160u;
        // 0x161164: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161160) {
            ctx->pc = 0x161178u;
            goto label_161178;
        }
    }
    ctx->pc = 0x161168u;
label_161168:
    // 0x161168: 0xc106162  jal         func_418588
label_16116c:
    if (ctx->pc == 0x16116Cu) {
        ctx->pc = 0x161170u;
        goto label_161170;
    }
    ctx->pc = 0x161168u;
    SET_GPR_U32(ctx, 31, 0x161170u);
    ctx->pc = 0x418588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418588u, 0x161168u, 0x161170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161170u;
label_161170:
    // 0x161170: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x161170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_161174:
    // 0x161174: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x161174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_161178:
    // 0x161178: 0xc05f590  jal         func_17D640
label_16117c:
    if (ctx->pc == 0x16117Cu) {
        ctx->pc = 0x16117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161178u;
        // 0x16117c: 0xac44489c  sw          $a0, 0x489C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161180u;
        goto label_161180;
    }
    ctx->pc = 0x161178u;
    SET_GPR_U32(ctx, 31, 0x161180u);
    ctx->pc = 0x16117Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161178u;
    // 0x16117c: 0xac44489c  sw          $a0, 0x489C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 18588), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D640u, 0x161178u, 0x161180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161180u;
label_161180:
    // 0x161180: 0x8e2c27e4  lw          $t4, 0x27E4($s1)
    ctx->pc = 0x161180u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_161184:
    // 0x161184: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x161184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_161188:
    // 0x161188: 0x24a50300  addiu       $a1, $a1, 0x300
    ctx->pc = 0x161188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 768));
label_16118c:
    // 0x16118c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x16118cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_161190:
    // 0x161190: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x161190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_161194:
    // 0x161194: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x161194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_161198:
    // 0x161198: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x161198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16119c:
    // 0x16119c: 0x24090175  addiu       $t1, $zero, 0x175
    ctx->pc = 0x16119cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 373));
label_1611a0:
    // 0x1611a0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1611a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1611a4:
    // 0x1611a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1611a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1611a8:
    // 0x1611a8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1611a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1611ac:
    // 0x1611ac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1611acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1611b0:
    // 0x1611b0: 0x40f809  jalr        $v0
label_1611b4:
    if (ctx->pc == 0x1611B4u) {
        ctx->pc = 0x1611B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611B0u;
        // 0x1611b4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1611B8u;
        goto label_1611b8;
    }
    ctx->pc = 0x1611B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1611B8u);
        ctx->pc = 0x1611B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611B0u;
        // 0x1611b4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1611B0u, 0x1611B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1611B8u;
label_1611b8:
    // 0x1611b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1611b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1611bc:
    // 0x1611bc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1611c0:
    if (ctx->pc == 0x1611C0u) {
        ctx->pc = 0x1611C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611BCu;
        // 0x1611c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1611C4u;
        goto label_1611c4;
    }
    ctx->pc = 0x1611BCu;
    {
        const bool branch_taken_0x1611bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1611C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611BCu;
        // 0x1611c0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1611bc) {
            ctx->pc = 0x1611D4u;
            goto label_1611d4;
        }
    }
    ctx->pc = 0x1611C4u;
label_1611c4:
    // 0x1611c4: 0xc103640  jal         func_40D900
label_1611c8:
    if (ctx->pc == 0x1611C8u) {
        ctx->pc = 0x1611CCu;
        goto label_1611cc;
    }
    ctx->pc = 0x1611C4u;
    SET_GPR_U32(ctx, 31, 0x1611CCu);
    ctx->pc = 0x40D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D900u, 0x1611C4u, 0x1611CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1611CCu;
label_1611cc:
    // 0x1611cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1611ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1611d0:
    // 0x1611d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1611d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1611d4:
    // 0x1611d4: 0xc047a70  jal         func_11E9C0
label_1611d8:
    if (ctx->pc == 0x1611D8u) {
        ctx->pc = 0x1611D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611D4u;
        // 0x1611d8: 0xac4447c4  sw          $a0, 0x47C4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18372), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1611DCu;
        goto label_1611dc;
    }
    ctx->pc = 0x1611D4u;
    SET_GPR_U32(ctx, 31, 0x1611DCu);
    ctx->pc = 0x1611D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1611D4u;
    // 0x1611d8: 0xac4447c4  sw          $a0, 0x47C4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 18372), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E9C0u, 0x1611D4u, 0x1611DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1611DCu;
label_1611dc:
    // 0x1611dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1611dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1611e0:
    // 0x1611e0: 0xc043dda  jal         func_10F768
label_1611e4:
    if (ctx->pc == 0x1611E4u) {
        ctx->pc = 0x1611E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611E0u;
        // 0x1611e4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1611E8u;
        goto label_1611e8;
    }
    ctx->pc = 0x1611E0u;
    SET_GPR_U32(ctx, 31, 0x1611E8u);
    ctx->pc = 0x1611E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1611E0u;
    // 0x1611e4: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F768u, 0x1611E0u, 0x1611E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1611E8u;
label_1611e8:
    // 0x1611e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1611e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1611ec:
    // 0x1611ec: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_1611f0:
    // 0x1611f0: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x1611f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_1611f4:
    // 0x1611f4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x1611f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_1611f8:
    // 0x1611f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1611f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1611fc:
    // 0x1611fc: 0x40f809  jalr        $v0
label_161200:
    if (ctx->pc == 0x161200u) {
        ctx->pc = 0x161200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611FCu;
        // 0x161200: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161204u;
        goto label_161204;
    }
    ctx->pc = 0x1611FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161204u);
        ctx->pc = 0x161200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1611FCu;
        // 0x161200: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1611FCu, 0x161204u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x161204u;
label_161204:
    // 0x161204: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x161204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_161208:
    // 0x161208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16120c:
    // 0x16120c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16120cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161210:
    // 0x161210: 0x3e00008  jr          $ra
label_161214:
    if (ctx->pc == 0x161214u) {
        ctx->pc = 0x161214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161210u;
        // 0x161214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x161218u;
        goto label_fallthrough_0x161210;
    }
    ctx->pc = 0x161210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161210u;
        // 0x161214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x161210:
    ctx->pc = 0x161218u;
}
