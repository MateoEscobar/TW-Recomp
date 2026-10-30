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

// Function: sub_0010BF40
// Address: 0x10bf40 - 0x10bf90
void sub_0010BF40_0x10bf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BF40_0x10bf40");
#endif

    switch (ctx->pc) {
        case 0x10bf54u: goto label_10bf54;
        default: break;
    }

    ctx->pc = 0x10bf40u;

    // 0x10bf40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10bf44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10bf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10bf48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bf4c: 0xc0434be  jal         func_10D2F8
    ctx->pc = 0x10BF4Cu;
    SET_GPR_U32(ctx, 31, 0x10BF54u);
    ctx->pc = 0x10BF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BF4Cu;
    // 0x10bf50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D2F8u, 0x10BF4Cu, 0x10BF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF54u;
label_10bf54:
    // 0x10bf54: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10bf58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bf5c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10bf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10bf60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bf60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bf64: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10bf68: 0xac402010  sw          $zero, 0x2010($v0)
    ctx->pc = 0x10bf68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8208), GPR_U32(ctx, 0));
    // 0x10bf6c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10bf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10bf70: 0xac403794  sw          $zero, 0x3794($v0)
    ctx->pc = 0x10bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14228), GPR_U32(ctx, 0));
    // 0x10bf74: 0xac403788  sw          $zero, 0x3788($v0)
    ctx->pc = 0x10bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14216), GPR_U32(ctx, 0));
    // 0x10bf78: 0xac40378c  sw          $zero, 0x378C($v0)
    ctx->pc = 0x10bf78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14220), GPR_U32(ctx, 0));
    // 0x10bf7c: 0xac403790  sw          $zero, 0x3790($v0)
    ctx->pc = 0x10bf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14224), GPR_U32(ctx, 0));
    // 0x10bf80: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x10bf80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x10bf84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10bf84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bf88: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF88u;
        // 0x10bf8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BF88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BF90u;
}
