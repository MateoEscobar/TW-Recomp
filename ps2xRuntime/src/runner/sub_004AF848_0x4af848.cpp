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

// Function: sub_004AF848
// Address: 0x4af848 - 0x4af8d0
void sub_004AF848_0x4af848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF848_0x4af848");
#endif

    switch (ctx->pc) {
        case 0x4af878u: goto label_4af878;
        case 0x4af8a8u: goto label_4af8a8;
        default: break;
    }

    ctx->pc = 0x4af848u;

    // 0x4af848: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4af848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4af84c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4af84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4af850: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4af850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x4af854: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4af854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af858: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4af858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4af85c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x4af85cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4af860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4af860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4af864: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4af864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af868: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4af868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4af86c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x4af86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af870: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4af870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4af874: 0x0  nop
    ctx->pc = 0x4af874u;
    // NOP
label_4af878:
    // 0x4af878: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x4af878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4af87c: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x4af87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4af880: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AF880u;
    {
        const bool branch_taken_0x4af880 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x4AF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF880u;
        // 0x4af884: 0x204102a  slt         $v0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af880) {
            ctx->pc = 0x4AF898u;
            goto label_4af898;
        }
    }
    ctx->pc = 0x4AF888u;
    // 0x4af888: 0x202200b  movn        $a0, $s0, $v0
    ctx->pc = 0x4af888u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 16));
    // 0x4af88c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4af88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4af890: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x4af890u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4af894: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x4af894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_4af898:
    // 0x4af898: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4AF898u;
    {
        const bool branch_taken_0x4af898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF898u;
        // 0x4af89c: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4af898) {
            ctx->pc = 0x4AF8B4u;
            goto label_4af8b4;
        }
    }
    ctx->pc = 0x4AF8A0u;
    // 0x4af8a0: 0xc12c326  jal         func_4B0C98
    ctx->pc = 0x4AF8A0u;
    SET_GPR_U32(ctx, 31, 0x4AF8A8u);
    ctx->pc = 0x4AF8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AF8A0u;
    // 0x4af8a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0C98u, 0x4AF8A0u, 0x4AF8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AF8A8u;
label_4af8a8:
    // 0x4af8a8: 0x5453fff3  bnel        $v0, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x4AF8A8u;
    {
        const bool branch_taken_0x4af8a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x4af8a8) {
            ctx->pc = 0x4AF8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AF8A8u;
            // 0x4af8ac: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AF878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4af878;
        }
    }
    ctx->pc = 0x4AF8B0u;
    // 0x4af8b0: 0x2501023  subu        $v0, $s2, $s0
    ctx->pc = 0x4af8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_4af8b4:
    // 0x4af8b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4af8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4af8b8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4af8b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4af8bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4af8bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4af8c0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4af8c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4af8c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4af8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4af8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AF8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AF8C8u;
        // 0x4af8cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AF8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AF8D0u;
}
