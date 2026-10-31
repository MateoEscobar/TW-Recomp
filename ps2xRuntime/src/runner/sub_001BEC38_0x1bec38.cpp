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

// Function: sub_001BEC38
// Address: 0x1bec38 - 0x1becb0
void sub_001BEC38_0x1bec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEC38_0x1bec38");
#endif

    switch (ctx->pc) {
        case 0x1bec50u: goto label_1bec50;
        case 0x1bec74u: goto label_1bec74;
        case 0x1bec90u: goto label_1bec90;
        default: break;
    }

    ctx->pc = 0x1bec38u;

    // 0x1bec38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bec3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bec40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bec44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bec44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bec48: 0xc06fafa  jal         func_1BEBE8
    ctx->pc = 0x1BEC48u;
    SET_GPR_U32(ctx, 31, 0x1BEC50u);
    ctx->pc = 0x1BEC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC48u;
    // 0x1bec4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBE8u, 0x1BEC48u, 0x1BEC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC50u;
label_1bec50:
    // 0x1bec50: 0x3c11005a  lui         $s1, 0x5A
    ctx->pc = 0x1bec50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)90 << 16));
    // 0x1bec54: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x1bec54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x1bec58: 0x26030480  addiu       $v1, $s0, 0x480
    ctx->pc = 0x1bec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
    // 0x1bec5c: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1bec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1bec60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bec60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec64: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1bec64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1bec68: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1bec68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec6c: 0xc079cc0  jal         func_1E7300
    ctx->pc = 0x1BEC6Cu;
    SET_GPR_U32(ctx, 31, 0x1BEC74u);
    ctx->pc = 0x1BEC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC6Cu;
    // 0x1bec70: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7300u, 0x1BEC6Cu, 0x1BEC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC74u;
label_1bec74:
    // 0x1bec74: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x1bec74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1bec78: 0x8e228690  lw          $v0, -0x7970($s1)
    ctx->pc = 0x1bec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936208)));
    // 0x1bec7c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEC7Cu;
    {
        const bool branch_taken_0x1bec7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BEC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEC7Cu;
        // 0x1bec80: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bec7c) {
            ctx->pc = 0x1BEC98u;
            goto label_1bec98;
        }
    }
    ctx->pc = 0x1BEC84u;
    // 0x1bec84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bec84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bec88: 0xc0440c6  jal         func_110318
    ctx->pc = 0x1BEC88u;
    SET_GPR_U32(ctx, 31, 0x1BEC90u);
    ctx->pc = 0x1BEC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEC88u;
    // 0x1bec8c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x1BEC88u, 0x1BEC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEC90u;
label_1bec90:
    // 0x1bec90: 0x8e228690  lw          $v0, -0x7970($s1)
    ctx->pc = 0x1bec90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294936208)));
    // 0x1bec94: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1bec94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1bec98:
    // 0x1bec98: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bec98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bec9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1beca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BECA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BECA4u;
        // 0x1beca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BECA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BECACu;
    // 0x1becac: 0x0  nop
    ctx->pc = 0x1becacu;
    // NOP
    ctx->pc = 0x1becb0u;
}
