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

// Function: sub_0031AF98
// Address: 0x31af98 - 0x31aff8
void sub_0031AF98_0x31af98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AF98_0x31af98");
#endif

    switch (ctx->pc) {
        case 0x31afacu: goto label_31afac;
        case 0x31afb4u: goto label_31afb4;
        case 0x31afd0u: goto label_31afd0;
        default: break;
    }

    ctx->pc = 0x31af98u;

    // 0x31af98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31af98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31af9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31af9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x31afa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31afa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31afa4: 0xc0c6998  jal         func_31A660
    ctx->pc = 0x31AFA4u;
    SET_GPR_U32(ctx, 31, 0x31AFACu);
    ctx->pc = 0x31AFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFA4u;
    // 0x31afa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A660u, 0x31AFA4u, 0x31AFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFACu;
label_31afac:
    // 0x31afac: 0xc05a51a  jal         func_169468
    ctx->pc = 0x31AFACu;
    SET_GPR_U32(ctx, 31, 0x31AFB4u);
    ctx->pc = 0x31AFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFACu;
    // 0x31afb0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169468u, 0x31AFACu, 0x31AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFB4u;
label_31afb4:
    // 0x31afb4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x31afb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x31afb8: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x31afb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x31afbc: 0x24c61578  addiu       $a2, $a2, 0x1578
    ctx->pc = 0x31afbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5496));
    // 0x31afc0: 0x2405029c  addiu       $a1, $zero, 0x29C
    ctx->pc = 0x31afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 668));
    // 0x31afc4: 0x248401b0  addiu       $a0, $a0, 0x1B0
    ctx->pc = 0x31afc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x31afc8: 0xc05905e  jal         func_164178
    ctx->pc = 0x31AFC8u;
    SET_GPR_U32(ctx, 31, 0x31AFD0u);
    ctx->pc = 0x31AFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31AFC8u;
    // 0x31afcc: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164178u, 0x31AFC8u, 0x31AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31AFD0u;
label_31afd0:
    // 0x31afd0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x31afd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x31afd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31afd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31afd8: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x31afd8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x31afdc: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x31afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x31afe0: 0x244200c8  addiu       $v0, $v0, 0xC8
    ctx->pc = 0x31afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
    // 0x31afe4: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x31afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x31afe8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x31afe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31afec: 0x3e00008  jr          $ra
    ctx->pc = 0x31AFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFECu;
        // 0x31aff0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AFF4u;
    // 0x31aff4: 0x0  nop
    ctx->pc = 0x31aff4u;
    // NOP
    ctx->pc = 0x31aff8u;
}
