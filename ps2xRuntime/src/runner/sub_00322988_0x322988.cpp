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

// Function: sub_00322988
// Address: 0x322988 - 0x3229f8
void sub_00322988_0x322988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322988_0x322988");
#endif

    switch (ctx->pc) {
        case 0x3229b8u: goto label_3229b8;
        case 0x3229d8u: goto label_3229d8;
        default: break;
    }

    ctx->pc = 0x322988u;

    // 0x322988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x322988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32298c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x32298cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x322990: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x322990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x322994: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322998: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x322998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x32299c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x32299cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    // 0x3229a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3229a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3229a4: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3229a4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x3229a8: 0x8e24caa8  lw          $a0, -0x3558($s1)
    ctx->pc = 0x3229a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CAA8u));
    // 0x3229ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3229acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3229b0: 0xc059126  jal         func_164498
    ctx->pc = 0x3229B0u;
    SET_GPR_U32(ctx, 31, 0x3229B8u);
    ctx->pc = 0x3229B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3229B0u;
    // 0x3229b4: 0x8c45002c  lw          $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164498u, 0x3229B0u, 0x3229B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3229B8u;
label_3229b8:
    // 0x3229b8: 0xa202001a  sb          $v0, 0x1A($s0)
    ctx->pc = 0x3229b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x3229bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3229bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3229c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3229c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3229c4: 0x8e420b54  lw          $v0, 0xB54($s2)
    ctx->pc = 0x3229c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2900)));
    // 0x3229c8: 0x8e24caa8  lw          $a0, -0x3558($s1)
    ctx->pc = 0x3229c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294953640)));
    // 0x3229cc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x3229ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x3229d0: 0xc059120  jal         func_164480
    ctx->pc = 0x3229D0u;
    SET_GPR_U32(ctx, 31, 0x3229D8u);
    ctx->pc = 0x3229D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3229D0u;
    // 0x3229d4: 0x8c65002c  lw          $a1, 0x2C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164480u, 0x3229D0u, 0x3229D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3229D8u;
label_3229d8:
    // 0x3229d8: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3229d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x3229dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3229dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3229e0: 0xae420b54  sw          $v0, 0xB54($s2)
    ctx->pc = 0x3229e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2900), GPR_U32(ctx, 2));
    // 0x3229e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3229e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3229e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3229e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3229ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3229ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3229f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3229F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3229F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3229F0u;
        // 0x3229f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3229F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3229F8u;
}
