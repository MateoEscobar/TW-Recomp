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

// Function: sub_001D7E28
// Address: 0x1d7e28 - 0x1d7e98
void sub_001D7E28_0x1d7e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7E28_0x1d7e28");
#endif

    switch (ctx->pc) {
        case 0x1d7e40u: goto label_1d7e40;
        case 0x1d7e68u: goto label_1d7e68;
        case 0x1d7e70u: goto label_1d7e70;
        case 0x1d7e78u: goto label_1d7e78;
        case 0x1d7e80u: goto label_1d7e80;
        default: break;
    }

    ctx->pc = 0x1d7e28u;

    // 0x1d7e28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d7e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d7e2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d7e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1d7e30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d7e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1d7e34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d7e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d7e38: 0xc075cec  jal         func_1D73B0
    ctx->pc = 0x1D7E38u;
    SET_GPR_U32(ctx, 31, 0x1D7E40u);
    ctx->pc = 0x1D7E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E38u;
    // 0x1d7e3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D73B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D73B0u, 0x1D7E38u, 0x1D7E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E40u;
label_1d7e40:
    // 0x1d7e40: 0x26110650  addiu       $s1, $s0, 0x650
    ctx->pc = 0x1d7e40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1616));
    // 0x1d7e44: 0x8e030640  lw          $v1, 0x640($s0)
    ctx->pc = 0x1d7e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1600)));
    // 0x1d7e48: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1d7e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d7e4c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1d7e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d7e50: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d7e50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e54: 0xa3a30002  sb          $v1, 0x2($sp)
    ctx->pc = 0x1d7e54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d7e58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d7e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e5c: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1d7e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d7e60: 0xc068992  jal         func_1A2648
    ctx->pc = 0x1D7E60u;
    SET_GPR_U32(ctx, 31, 0x1D7E68u);
    ctx->pc = 0x1D7E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E60u;
    // 0x1d7e64: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2648u, 0x1D7E60u, 0x1D7E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E68u;
label_1d7e68:
    // 0x1d7e68: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1D7E68u;
    SET_GPR_U32(ctx, 31, 0x1D7E70u);
    ctx->pc = 0x1D7E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E68u;
    // 0x1d7e6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1D7E68u, 0x1D7E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E70u;
label_1d7e70:
    // 0x1d7e70: 0xc068998  jal         func_1A2660
    ctx->pc = 0x1D7E70u;
    SET_GPR_U32(ctx, 31, 0x1D7E78u);
    ctx->pc = 0x1D7E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E70u;
    // 0x1d7e74: 0x26040750  addiu       $a0, $s0, 0x750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1D7E70u, 0x1D7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E78u;
label_1d7e78:
    // 0x1d7e78: 0xc06ec70  jal         func_1BB1C0
    ctx->pc = 0x1D7E78u;
    SET_GPR_U32(ctx, 31, 0x1D7E80u);
    ctx->pc = 0x1D7E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E78u;
    // 0x1d7e7c: 0x26040850  addiu       $a0, $s0, 0x850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1D7E78u, 0x1D7E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E80u;
label_1d7e80:
    // 0x1d7e80: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d7e80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d7e84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d7e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d7e88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d7e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d7e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E8Cu;
        // 0x1d7e90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E94u;
    // 0x1d7e94: 0x0  nop
    ctx->pc = 0x1d7e94u;
    // NOP
    ctx->pc = 0x1d7e98u;
}
