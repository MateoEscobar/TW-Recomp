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

// Function: sub_00373808
// Address: 0x373808 - 0x373880
void sub_00373808_0x373808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373808_0x373808");
#endif

    switch (ctx->pc) {
        case 0x373830u: goto label_373830;
        case 0x373838u: goto label_373838;
        case 0x373850u: goto label_373850;
        case 0x373858u: goto label_373858;
        case 0x373864u: goto label_373864;
        default: break;
    }

    ctx->pc = 0x373808u;

    // 0x373808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37380c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37380cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373810: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373814: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373818: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37381c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37381cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373820: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373828: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373828u;
    SET_GPR_U32(ctx, 31, 0x373830u);
    ctx->pc = 0x37382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373828u;
    // 0x37382c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373828u, 0x373830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373830u;
label_373830:
    // 0x373830: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373830u;
    SET_GPR_U32(ctx, 31, 0x373838u);
    ctx->pc = 0x373834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373830u;
    // 0x373834: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373830u, 0x373838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373838u;
label_373838:
    // 0x373838: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x373838u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37383c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37383cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373840: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x373840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373844: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373844u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x373848: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373848u;
    SET_GPR_U32(ctx, 31, 0x373850u);
    ctx->pc = 0x37384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373848u;
    // 0x37384c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373848u, 0x373850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373850u;
label_373850:
    // 0x373850: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x373850u;
    SET_GPR_U32(ctx, 31, 0x373858u);
    ctx->pc = 0x373854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373850u;
    // 0x373854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x373850u, 0x373858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373858u;
label_373858:
    // 0x373858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37385c: 0xc05a97a  jal         func_16A5E8
    ctx->pc = 0x37385Cu;
    SET_GPR_U32(ctx, 31, 0x373864u);
    ctx->pc = 0x373860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37385Cu;
    // 0x373860: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A5E8u, 0x37385Cu, 0x373864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373864u;
label_373864:
    // 0x373864: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37386c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37386cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373870: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x373870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373874: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373878: 0x3e00008  jr          $ra
    ctx->pc = 0x373878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373878u;
        // 0x37387c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373880u;
}
