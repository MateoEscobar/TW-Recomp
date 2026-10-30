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

// Function: sub_00441848
// Address: 0x441848 - 0x4418d8
void sub_00441848_0x441848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00441848_0x441848");
#endif

    switch (ctx->pc) {
        case 0x441884u: goto label_441884;
        case 0x44189cu: goto label_44189c;
        case 0x4418b0u: goto label_4418b0;
        default: break;
    }

    ctx->pc = 0x441848u;

    // 0x441848: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x441848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x44184c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x44184cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x441850: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x441850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x441854: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x441854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x441858: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x441858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44185c: 0x24538e4c  addiu       $s3, $v0, -0x71B4
    ctx->pc = 0x44185cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938188));
    // 0x441860: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x441860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x441864: 0x24713628  addiu       $s1, $v1, 0x3628
    ctx->pc = 0x441864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 13864));
    // 0x441868: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x441868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x44186c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44186cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441870: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x441870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x441874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x441874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441878: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x441878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44187c: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x44187Cu;
    SET_GPR_U32(ctx, 31, 0x441884u);
    ctx->pc = 0x441880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44187Cu;
    // 0x441880: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x44187Cu, 0x441884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x441884u;
label_441884:
    // 0x441884: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x441884u;
    {
        const bool branch_taken_0x441884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x441888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x441884u;
        // 0x441888: 0x3c100052  lui         $s0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x441884) {
            ctx->pc = 0x4418B4u;
            goto label_4418b4;
        }
    }
    ctx->pc = 0x44188Cu;
    // 0x44188c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44188cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x441890: 0x8e058f00  lw          $a1, -0x7100($s0)
    ctx->pc = 0x441890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938368)));
    // 0x441894: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x441894u;
    SET_GPR_U32(ctx, 31, 0x44189Cu);
    ctx->pc = 0x441898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x441894u;
    // 0x441898: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x441894u, 0x44189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44189Cu;
label_44189c:
    // 0x44189c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44189Cu;
    {
        const bool branch_taken_0x44189c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4418A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44189Cu;
        // 0x4418a0: 0x8e058f00  lw          $a1, -0x7100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44189c) {
            ctx->pc = 0x4418B4u;
            goto label_4418b4;
        }
    }
    ctx->pc = 0x4418A4u;
    // 0x4418a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4418a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4418a8: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x4418A8u;
    SET_GPR_U32(ctx, 31, 0x4418B0u);
    ctx->pc = 0x4418ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4418A8u;
    // 0x4418ac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x4418A8u, 0x4418B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4418B0u;
label_4418b0:
    // 0x4418b0: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x4418b0u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4418b4:
    // 0x4418b4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x4418b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4418b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4418b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4418bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4418bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4418c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4418c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4418c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4418c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4418c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4418c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4418cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4418CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4418D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4418CCu;
        // 0x4418d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4418CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4418D4u;
    // 0x4418d4: 0x0  nop
    ctx->pc = 0x4418d4u;
    // NOP
    ctx->pc = 0x4418d8u;
}
