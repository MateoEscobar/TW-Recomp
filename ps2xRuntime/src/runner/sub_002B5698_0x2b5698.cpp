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

// Function: sub_002B5698
// Address: 0x2b5698 - 0x2b5718
void sub_002B5698_0x2b5698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5698_0x2b5698");
#endif

    switch (ctx->pc) {
        case 0x2b56bcu: goto label_2b56bc;
        case 0x2b56f0u: goto label_2b56f0;
        case 0x2b56fcu: goto label_2b56fc;
        default: break;
    }

    ctx->pc = 0x2b5698u;

    // 0x2b5698: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b569c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b569cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b56a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b56a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b56a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b56a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b56a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b56a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b56ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b56acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b56b0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b56b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b56b4: 0xc088eca  jal         func_223B28
    ctx->pc = 0x2B56B4u;
    SET_GPR_U32(ctx, 31, 0x2B56BCu);
    ctx->pc = 0x2B56B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B56B4u;
    // 0x2b56b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B28u, 0x2B56B4u, 0x2B56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B56BCu;
label_2b56bc:
    // 0x2b56bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b56c0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2B56C0u;
    {
        const bool branch_taken_0x2b56c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B56C0u;
        // 0x2b56c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b56c0) {
            ctx->pc = 0x2B5700u;
            goto label_2b5700;
        }
    }
    ctx->pc = 0x2B56C8u;
    // 0x2b56c8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b56cc: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x2b56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x2b56d0: 0x346300ff  ori         $v1, $v1, 0xFF
    ctx->pc = 0x2b56d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x2b56d4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2b56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x2b56d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b56d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b56dc: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x2b56dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x2b56e0: 0x54440007  bnel        $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B56E0u;
    {
        const bool branch_taken_0x2b56e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b56e0) {
            ctx->pc = 0x2B56E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B56E0u;
            // 0x2b56e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5700u;
            goto label_2b5700;
        }
    }
    ctx->pc = 0x2B56E8u;
    // 0x2b56e8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2B56E8u;
    SET_GPR_U32(ctx, 31, 0x2B56F0u);
    ctx->pc = 0x2B56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B56E8u;
    // 0x2b56ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2B56E8u, 0x2B56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B56F0u;
label_2b56f0:
    // 0x2b56f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b56f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b56f4: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2B56F4u;
    SET_GPR_U32(ctx, 31, 0x2B56FCu);
    ctx->pc = 0x2B56F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B56F4u;
    // 0x2b56f8: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2B56F4u, 0x2B56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B56FCu;
label_2b56fc:
    // 0x2b56fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b5700:
    // 0x2b5700: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b5700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5704: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b5708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b570c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B570Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B570Cu;
        // 0x2b5710: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B570Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5714u;
    // 0x2b5714: 0x0  nop
    ctx->pc = 0x2b5714u;
    // NOP
    ctx->pc = 0x2b5718u;
}
