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

// Function: sub_001736A0
// Address: 0x1736a0 - 0x173718
void sub_001736A0_0x1736a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001736A0_0x1736a0");
#endif

    switch (ctx->pc) {
        case 0x1736c8u: goto label_1736c8;
        case 0x1736dcu: goto label_1736dc;
        case 0x1736f4u: goto label_1736f4;
        default: break;
    }

    ctx->pc = 0x1736a0u;

    // 0x1736a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1736a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1736a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1736a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1736a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1736a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1736ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1736acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1736b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1736b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1736b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736b8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1736b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1736bc: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1736bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1736c0: 0xc05ce6c  jal         func_1739B0
    ctx->pc = 0x1736C0u;
    SET_GPR_U32(ctx, 31, 0x1736C8u);
    ctx->pc = 0x1736C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736C0u;
    // 0x1736c4: 0x8e070018  lw          $a3, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1739B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1739B0u, 0x1736C0u, 0x1736C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736C8u;
label_1736c8:
    // 0x1736c8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1736c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1736cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1736ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1736d0: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x1736d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1736d4: 0xc063ac4  jal         func_18EB10
    ctx->pc = 0x1736D4u;
    SET_GPR_U32(ctx, 31, 0x1736DCu);
    ctx->pc = 0x1736D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736D4u;
    // 0x1736d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EB10u, 0x1736D4u, 0x1736DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736DCu;
label_1736dc:
    // 0x1736dc: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1736dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1736e0: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1736E0u;
    {
        const bool branch_taken_0x1736e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1736E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1736E0u;
        // 0x1736e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1736e0) {
            ctx->pc = 0x1736F4u;
            goto label_1736f4;
        }
    }
    ctx->pc = 0x1736E8u;
    // 0x1736e8: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1736e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1736ec: 0xc063ac4  jal         func_18EB10
    ctx->pc = 0x1736ECu;
    SET_GPR_U32(ctx, 31, 0x1736F4u);
    ctx->pc = 0x1736F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1736ECu;
    // 0x1736f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EB10u, 0x1736ECu, 0x1736F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1736F4u;
label_1736f4:
    // 0x1736f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1736f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1736f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1736f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1736fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1736fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173700: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173704: 0x3e00008  jr          $ra
    ctx->pc = 0x173704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173704u;
        // 0x173708: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17370Cu;
    // 0x17370c: 0x0  nop
    ctx->pc = 0x17370cu;
    // NOP
    // 0x173710: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x173710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x173714: 0x0  nop
    ctx->pc = 0x173714u;
    // NOP
    ctx->pc = 0x173718u;
}
