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

// Function: sub_0035F7F8
// Address: 0x35f7f8 - 0x35f890
void sub_0035F7F8_0x35f7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F7F8_0x35f7f8");
#endif

    switch (ctx->pc) {
        case 0x35f824u: goto label_35f824;
        case 0x35f82cu: goto label_35f82c;
        case 0x35f844u: goto label_35f844;
        case 0x35f858u: goto label_35f858;
        case 0x35f860u: goto label_35f860;
        case 0x35f870u: goto label_35f870;
        default: break;
    }

    ctx->pc = 0x35f7f8u;

    // 0x35f7f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35f7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35f7fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f800: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x35f800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x35f804: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x35f804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x35f808: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35f808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f80c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x35f80cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f810: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x35f810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x35f814: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x35f814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x35f818: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f81c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F81Cu;
    SET_GPR_U32(ctx, 31, 0x35F824u);
    ctx->pc = 0x35F820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F81Cu;
    // 0x35f820: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F81Cu, 0x35F824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F824u;
label_35f824:
    // 0x35f824: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F824u;
    SET_GPR_U32(ctx, 31, 0x35F82Cu);
    ctx->pc = 0x35F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F824u;
    // 0x35f828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F824u, 0x35F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F82Cu;
label_35f82c:
    // 0x35f82c: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f82cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f834: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f834u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f838: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35f838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f83c: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35F83Cu;
    SET_GPR_U32(ctx, 31, 0x35F844u);
    ctx->pc = 0x35F840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F83Cu;
    // 0x35f840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35F83Cu, 0x35F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F844u;
label_35f844:
    // 0x35f844: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x35f844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f848: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x35f848u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35f84c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35f84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f850: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F850u;
    SET_GPR_U32(ctx, 31, 0x35F858u);
    ctx->pc = 0x35F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F850u;
    // 0x35f854: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F850u, 0x35F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F858u;
label_35f858:
    // 0x35f858: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x35F858u;
    SET_GPR_U32(ctx, 31, 0x35F860u);
    ctx->pc = 0x35F85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F858u;
    // 0x35f85c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x35F858u, 0x35F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F860u;
label_35f860:
    // 0x35f860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f864: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35f864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f868: 0xc05aefc  jal         func_16BBF0
    ctx->pc = 0x35F868u;
    SET_GPR_U32(ctx, 31, 0x35F870u);
    ctx->pc = 0x35F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F868u;
    // 0x35f86c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BBF0u, 0x35F868u, 0x35F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F870u;
label_35f870:
    // 0x35f870: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x35f870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35f874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f878: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x35f878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f87c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35f87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f880: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x35f880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f888: 0x3e00008  jr          $ra
    ctx->pc = 0x35F888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F888u;
        // 0x35f88c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F890u;
}
