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

// Function: sub_00442808
// Address: 0x442808 - 0x442898
void sub_00442808_0x442808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442808_0x442808");
#endif

    switch (ctx->pc) {
        case 0x442844u: goto label_442844;
        case 0x44285cu: goto label_44285c;
        case 0x442870u: goto label_442870;
        default: break;
    }

    ctx->pc = 0x442808u;

    // 0x442808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x442808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x44280c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x44280cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x442810: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x442810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x442814: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x442814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x442818: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x442818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x44281c: 0x24538e4c  addiu       $s3, $v0, -0x71B4
    ctx->pc = 0x44281cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938188));
    // 0x442820: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x442820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x442824: 0x24713ae8  addiu       $s1, $v1, 0x3AE8
    ctx->pc = 0x442824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15080));
    // 0x442828: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x442828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x44282c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44282cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442830: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x442830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x442834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x442834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442838: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x442838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44283c: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x44283Cu;
    SET_GPR_U32(ctx, 31, 0x442844u);
    ctx->pc = 0x442840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44283Cu;
    // 0x442840: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x44283Cu, 0x442844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442844u;
label_442844:
    // 0x442844: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x442844u;
    {
        const bool branch_taken_0x442844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442844u;
        // 0x442848: 0x3c100052  lui         $s0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442844) {
            ctx->pc = 0x442874u;
            goto label_442874;
        }
    }
    ctx->pc = 0x44284Cu;
    // 0x44284c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442850: 0x8e058f0c  lw          $a1, -0x70F4($s0)
    ctx->pc = 0x442850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938380)));
    // 0x442854: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x442854u;
    SET_GPR_U32(ctx, 31, 0x44285Cu);
    ctx->pc = 0x442858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442854u;
    // 0x442858: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x442854u, 0x44285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44285Cu;
label_44285c:
    // 0x44285c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x44285Cu;
    {
        const bool branch_taken_0x44285c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x442860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44285Cu;
        // 0x442860: 0x8e058f0c  lw          $a1, -0x70F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294938380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44285c) {
            ctx->pc = 0x442874u;
            goto label_442874;
        }
    }
    ctx->pc = 0x442864u;
    // 0x442864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x442864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442868: 0xc10c16b  jal         func_4305AC
    ctx->pc = 0x442868u;
    SET_GPR_U32(ctx, 31, 0x442870u);
    ctx->pc = 0x44286Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442868u;
    // 0x44286c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4305ACu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4305ACu, 0x442868u, 0x442870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442870u;
label_442870:
    // 0x442870: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x442870u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_442874:
    // 0x442874: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x442874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x442878: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x442878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44287c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x44287cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x442880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x442880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x442884: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x442884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x442888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x442888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44288c: 0x3e00008  jr          $ra
    ctx->pc = 0x44288Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x442890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44288Cu;
        // 0x442890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44288Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x442894u;
    // 0x442894: 0x0  nop
    ctx->pc = 0x442894u;
    // NOP
    ctx->pc = 0x442898u;
}
