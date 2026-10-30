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

// Function: sub_00362768
// Address: 0x362768 - 0x362868
void sub_00362768_0x362768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362768_0x362768");
#endif

    switch (ctx->pc) {
        case 0x36279cu: goto label_36279c;
        case 0x3627a4u: goto label_3627a4;
        case 0x3627b8u: goto label_3627b8;
        case 0x3627c0u: goto label_3627c0;
        case 0x3627d8u: goto label_3627d8;
        case 0x3627e0u: goto label_3627e0;
        case 0x3627f8u: goto label_3627f8;
        case 0x362800u: goto label_362800;
        case 0x362818u: goto label_362818;
        case 0x362820u: goto label_362820;
        case 0x36283cu: goto label_36283c;
        default: break;
    }

    ctx->pc = 0x362768u;

    // 0x362768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x362768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x36276c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36276cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362770: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x362770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x362774: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x362774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x362778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x362778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36277c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36277cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362780: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x362780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x362784: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x362784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x362788: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x362788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x36278c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x36278cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x362790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362794: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362794u;
    SET_GPR_U32(ctx, 31, 0x36279Cu);
    ctx->pc = 0x362798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362794u;
    // 0x362798: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362794u, 0x36279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36279Cu;
label_36279c:
    // 0x36279c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36279Cu;
    SET_GPR_U32(ctx, 31, 0x3627A4u);
    ctx->pc = 0x3627A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36279Cu;
    // 0x3627a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36279Cu, 0x3627A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627A4u;
label_3627a4:
    // 0x3627a4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3627a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3627a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627ac: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3627acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3627b0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3627B0u;
    SET_GPR_U32(ctx, 31, 0x3627B8u);
    ctx->pc = 0x3627B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627B0u;
    // 0x3627b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3627B0u, 0x3627B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627B8u;
label_3627b8:
    // 0x3627b8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3627B8u;
    SET_GPR_U32(ctx, 31, 0x3627C0u);
    ctx->pc = 0x3627BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627B8u;
    // 0x3627bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3627B8u, 0x3627C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627C0u;
label_3627c0:
    // 0x3627c0: 0x2a400  sll         $s4, $v0, 16
    ctx->pc = 0x3627c0u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3627c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3627c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3627c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3627cc: 0x14a403  sra         $s4, $s4, 16
    ctx->pc = 0x3627ccu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 20), 16));
    // 0x3627d0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3627D0u;
    SET_GPR_U32(ctx, 31, 0x3627D8u);
    ctx->pc = 0x3627D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627D0u;
    // 0x3627d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3627D0u, 0x3627D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627D8u;
label_3627d8:
    // 0x3627d8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3627D8u;
    SET_GPR_U32(ctx, 31, 0x3627E0u);
    ctx->pc = 0x3627DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627D8u;
    // 0x3627dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3627D8u, 0x3627E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627E0u;
label_3627e0:
    // 0x3627e0: 0x28c00  sll         $s1, $v0, 16
    ctx->pc = 0x3627e0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3627e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3627e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3627e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3627e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3627ec: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x3627ecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x3627f0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3627F0u;
    SET_GPR_U32(ctx, 31, 0x3627F8u);
    ctx->pc = 0x3627F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627F0u;
    // 0x3627f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3627F0u, 0x3627F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3627F8u;
label_3627f8:
    // 0x3627f8: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x3627F8u;
    SET_GPR_U32(ctx, 31, 0x362800u);
    ctx->pc = 0x3627FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3627F8u;
    // 0x3627fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x3627F8u, 0x362800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362800u;
label_362800:
    // 0x362800: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x362800u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362804: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x362804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362808: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x362808u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x36280c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36280cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362810: 0xc102472  jal         func_4091C8
    ctx->pc = 0x362810u;
    SET_GPR_U32(ctx, 31, 0x362818u);
    ctx->pc = 0x362814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362810u;
    // 0x362814: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x362810u, 0x362818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362818u;
label_362818:
    // 0x362818: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x362818u;
    SET_GPR_U32(ctx, 31, 0x362820u);
    ctx->pc = 0x36281Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362818u;
    // 0x36281c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x362818u, 0x362820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362820u;
label_362820:
    // 0x362820: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x362820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x362824: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x362824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362828: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x362828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36282c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36282cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362830: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x362830u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362834: 0xc0a7ed8  jal         func_29FB60
    ctx->pc = 0x362834u;
    SET_GPR_U32(ctx, 31, 0x36283Cu);
    ctx->pc = 0x362838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362834u;
    // 0x362838: 0x24403  sra         $t0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FB60u, 0x362834u, 0x36283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36283Cu;
label_36283c:
    // 0x36283c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x36283cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x362840: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362844: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x362844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x362848: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x362848u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36284c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36284cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x362850: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x362850u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362854: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x362854u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36285c: 0x3e00008  jr          $ra
    ctx->pc = 0x36285Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36285Cu;
        // 0x362860: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36285Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362864u;
    // 0x362864: 0x0  nop
    ctx->pc = 0x362864u;
    // NOP
    ctx->pc = 0x362868u;
}
