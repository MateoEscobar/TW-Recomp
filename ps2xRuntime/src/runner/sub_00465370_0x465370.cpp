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

// Function: sub_00465370
// Address: 0x465370 - 0x4653d8
void sub_00465370_0x465370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00465370_0x465370");
#endif

    switch (ctx->pc) {
        case 0x4653a0u: goto label_4653a0;
        default: break;
    }

    ctx->pc = 0x465370u;

    // 0x465370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x465370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x465374: 0x8f838498  lw          $v1, -0x7B68($gp)
    ctx->pc = 0x465374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935704)));
    // 0x465378: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x465378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x46537c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x465380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x465380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x465384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x465384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x465388: 0x2038821  addu        $s1, $s0, $v1
    ctx->pc = 0x465388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x46538c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x46538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x465390: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x465390u;
    {
        const bool branch_taken_0x465390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x465390u;
        // 0x465394: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465390) {
            ctx->pc = 0x4653B8u;
            goto label_4653b8;
        }
    }
    ctx->pc = 0x465398u;
    // 0x465398: 0xc11983c  jal         func_4660F0
    ctx->pc = 0x465398u;
    SET_GPR_U32(ctx, 31, 0x4653A0u);
    ctx->pc = 0x4660F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4660F0u, 0x465398u, 0x4653A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4653A0u;
label_4653a0:
    // 0x4653a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4653A0u;
    {
        const bool branch_taken_0x4653a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4653A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4653A0u;
        // 0x4653a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4653a0) {
            ctx->pc = 0x4653B0u;
            goto label_4653b0;
        }
    }
    ctx->pc = 0x4653A8u;
    // 0x4653a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4653A8u;
    {
        const bool branch_taken_0x4653a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4653ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4653A8u;
        // 0x4653ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4653a8) {
            ctx->pc = 0x4653B8u;
            goto label_4653b8;
        }
    }
    ctx->pc = 0x4653B0u;
label_4653b0:
    // 0x4653b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4653b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4653b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4653b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4653b8:
    // 0x4653b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4653b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4653bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4653bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4653c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4653c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4653c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4653C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4653C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4653C4u;
        // 0x4653c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4653C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4653CCu;
    // 0x4653cc: 0x0  nop
    ctx->pc = 0x4653ccu;
    // NOP
    // 0x4653d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x4653d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x4653d4: 0x0  nop
    ctx->pc = 0x4653d4u;
    // NOP
    ctx->pc = 0x4653d8u;
}
