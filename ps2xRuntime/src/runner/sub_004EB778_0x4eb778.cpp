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

// Function: sub_004EB778
// Address: 0x4eb778 - 0x4eb830
void sub_004EB778_0x4eb778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB778_0x4eb778");
#endif

    switch (ctx->pc) {
        case 0x4eb7b0u: goto label_4eb7b0;
        case 0x4eb7e4u: goto label_4eb7e4;
        case 0x4eb800u: goto label_4eb800;
        default: break;
    }

    ctx->pc = 0x4eb778u;

    // 0x4eb778: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4eb778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4eb77c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4eb77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4eb780: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4eb780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4eb784: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4eb784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb788: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4eb788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4eb78c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4eb78cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb790: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4eb790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4eb794: 0x1253001e  beq         $s2, $s3, . + 4 + (0x1E << 2)
    ctx->pc = 0x4EB794u;
    {
        const bool branch_taken_0x4eb794 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 19));
        ctx->pc = 0x4EB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB794u;
        // 0x4eb798: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb794) {
            ctx->pc = 0x4EB810u;
            goto label_4eb810;
        }
    }
    ctx->pc = 0x4EB79Cu;
    // 0x4eb79c: 0x26500004  addiu       $s0, $s2, 0x4
    ctx->pc = 0x4eb79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4eb7a0: 0x5213001c  beql        $s0, $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x4EB7A0u;
    {
        const bool branch_taken_0x4eb7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x4eb7a0) {
            ctx->pc = 0x4EB7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB7A0u;
            // 0x4eb7a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB814u;
            goto label_4eb814;
        }
    }
    ctx->pc = 0x4EB7A8u;
    // 0x4eb7a8: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x4eb7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4eb7ac: 0x0  nop
    ctx->pc = 0x4eb7acu;
    // NOP
label_4eb7b0:
    // 0x4eb7b0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4eb7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4eb7b4: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x4eb7b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4eb7b8: 0x90440018  lbu         $a0, 0x18($v0)
    ctx->pc = 0x4eb7b8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x4eb7bc: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x4eb7bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4eb7c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x4EB7C0u;
    {
        const bool branch_taken_0x4eb7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB7C0u;
        // 0x4eb7c4: 0x2122023  subu        $a0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb7c0) {
            ctx->pc = 0x4EB7F0u;
            goto label_4eb7f0;
        }
    }
    ctx->pc = 0x4EB7C8u;
    // 0x4eb7c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4eb7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb7cc: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x4eb7ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x4eb7d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4eb7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x4eb7d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4eb7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4eb7d8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4eb7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb7dc: 0xc10c1bb  jal         func_4306EC
    ctx->pc = 0x4EB7DCu;
    SET_GPR_U32(ctx, 31, 0x4EB7E4u);
    ctx->pc = 0x4EB7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB7DCu;
    // 0x4eb7e0: 0x2042023  subu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4EB7DCu, 0x4EB7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB7E4u;
label_4eb7e4:
    // 0x4eb7e4: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x4eb7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x4eb7e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4EB7E8u;
    {
        const bool branch_taken_0x4eb7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB7E8u;
        // 0x4eb7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb7e8) {
            ctx->pc = 0x4EB804u;
            goto label_4eb804;
        }
    }
    ctx->pc = 0x4EB7F0u;
label_4eb7f0:
    // 0x4eb7f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eb7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb7f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4eb7f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb7f8: 0xc13adca  jal         func_4EB728
    ctx->pc = 0x4EB7F8u;
    SET_GPR_U32(ctx, 31, 0x4EB800u);
    ctx->pc = 0x4EB7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB7F8u;
    // 0x4eb7fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB728u, 0x4EB7F8u, 0x4EB800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB800u;
label_4eb800:
    // 0x4eb800: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x4eb800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4eb804:
    // 0x4eb804: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eb804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb808: 0x5613ffe9  bnel        $s0, $s3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4EB808u;
    {
        const bool branch_taken_0x4eb808 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x4eb808) {
            ctx->pc = 0x4EB80Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EB808u;
            // 0x4eb80c: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EB7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb7b0;
        }
    }
    ctx->pc = 0x4EB810u;
label_4eb810:
    // 0x4eb810: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4eb810u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4eb814:
    // 0x4eb814: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4eb814u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4eb818: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4eb818u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4eb81c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4eb81cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eb820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb824: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB824u;
        // 0x4eb828: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB82Cu;
    // 0x4eb82c: 0x0  nop
    ctx->pc = 0x4eb82cu;
    // NOP
    ctx->pc = 0x4eb830u;
}
