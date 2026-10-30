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

// Function: sub_0014EE30
// Address: 0x14ee30 - 0x14ee88
void sub_0014EE30_0x14ee30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EE30_0x14ee30");
#endif

    switch (ctx->pc) {
        case 0x14ee44u: goto label_14ee44;
        case 0x14ee60u: goto label_14ee60;
        case 0x14ee68u: goto label_14ee68;
        case 0x14ee70u: goto label_14ee70;
        case 0x14ee78u: goto label_14ee78;
        default: break;
    }

    ctx->pc = 0x14ee30u;

    // 0x14ee30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ee30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ee34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14ee38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ee38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ee3c: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14EE3Cu;
    SET_GPR_U32(ctx, 31, 0x14EE44u);
    ctx->pc = 0x14EE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE3Cu;
    // 0x14ee40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14EE3Cu, 0x14EE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE44u;
label_14ee44:
    // 0x14ee44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14ee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14ee48: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14ee4c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14ee50: 0xa082c240  sb          $v0, -0x3DC0($a0)
    ctx->pc = 0x14ee50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C240u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C240u, _value); } while (0);
    // 0x14ee54: 0xac70bd60  sw          $s0, -0x42A0($v1)
    ctx->pc = 0x14ee54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x50BD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD60u, _value); } while (0);
    // 0x14ee58: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14EE58u;
    SET_GPR_U32(ctx, 31, 0x14EE60u);
    ctx->pc = 0x14EE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE58u;
    // 0x14ee5c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14EE58u, 0x14EE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE60u;
label_14ee60:
    // 0x14ee60: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x14EE60u;
    SET_GPR_U32(ctx, 31, 0x14EE68u);
    ctx->pc = 0x14EE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE60u;
    // 0x14ee64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x14EE60u, 0x14EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE68u;
label_14ee68:
    // 0x14ee68: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14EE68u;
    SET_GPR_U32(ctx, 31, 0x14EE70u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14EE68u, 0x14EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE70u;
label_14ee70:
    // 0x14ee70: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14EE70u;
    SET_GPR_U32(ctx, 31, 0x14EE78u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14EE70u, 0x14EE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE78u;
label_14ee78:
    // 0x14ee78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14ee78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ee7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ee7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ee80: 0x3e00008  jr          $ra
    ctx->pc = 0x14EE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EE80u;
        // 0x14ee84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EE88u;
}
