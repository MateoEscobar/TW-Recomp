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

// Function: sub_00361808
// Address: 0x361808 - 0x3618d8
void sub_00361808_0x361808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361808_0x361808");
#endif

    switch (ctx->pc) {
        case 0x361838u: goto label_361838;
        case 0x361840u: goto label_361840;
        case 0x361854u: goto label_361854;
        case 0x36185cu: goto label_36185c;
        case 0x361870u: goto label_361870;
        case 0x361878u: goto label_361878;
        case 0x361890u: goto label_361890;
        case 0x361898u: goto label_361898;
        case 0x3618b0u: goto label_3618b0;
        default: break;
    }

    ctx->pc = 0x361808u;

    // 0x361808: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x361808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36180c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36180cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x361810: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x361810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x361814: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x361814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x361818: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x361818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36181c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x36181cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361820: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x361820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x361824: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x361824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x361828: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x361828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x36182c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36182cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x361830: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361830u;
    SET_GPR_U32(ctx, 31, 0x361838u);
    ctx->pc = 0x361834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361830u;
    // 0x361834: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361830u, 0x361838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361838u;
label_361838:
    // 0x361838: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361838u;
    SET_GPR_U32(ctx, 31, 0x361840u);
    ctx->pc = 0x36183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361838u;
    // 0x36183c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361838u, 0x361840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361840u;
label_361840:
    // 0x361840: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x361840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361844: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x361844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361848: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x361848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36184c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36184Cu;
    SET_GPR_U32(ctx, 31, 0x361854u);
    ctx->pc = 0x361850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36184Cu;
    // 0x361850: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36184Cu, 0x361854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361854u;
label_361854:
    // 0x361854: 0xc10b108  jal         func_42C420
    ctx->pc = 0x361854u;
    SET_GPR_U32(ctx, 31, 0x36185Cu);
    ctx->pc = 0x361858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361854u;
    // 0x361858: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x361854u, 0x36185Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36185Cu;
label_36185c:
    // 0x36185c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36185cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361860: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x361860u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361864: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x361864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x361868: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361868u;
    SET_GPR_U32(ctx, 31, 0x361870u);
    ctx->pc = 0x36186Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361868u;
    // 0x36186c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361868u, 0x361870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361870u;
label_361870:
    // 0x361870: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361870u;
    SET_GPR_U32(ctx, 31, 0x361878u);
    ctx->pc = 0x361874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361870u;
    // 0x361874: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361870u, 0x361878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361878u;
label_361878:
    // 0x361878: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x361878u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36187c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36187cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361880: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x361880u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x361884: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x361884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361888: 0xc102472  jal         func_4091C8
    ctx->pc = 0x361888u;
    SET_GPR_U32(ctx, 31, 0x361890u);
    ctx->pc = 0x36188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361888u;
    // 0x36188c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x361888u, 0x361890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361890u;
label_361890:
    // 0x361890: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x361890u;
    SET_GPR_U32(ctx, 31, 0x361898u);
    ctx->pc = 0x361894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x361890u;
    // 0x361894: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x361890u, 0x361898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x361898u;
label_361898:
    // 0x361898: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x361898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36189c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36189cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3618a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3618a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618a8: 0xc0a99b0  jal         func_2A66C0
    ctx->pc = 0x3618A8u;
    SET_GPR_U32(ctx, 31, 0x3618B0u);
    ctx->pc = 0x3618ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3618A8u;
    // 0x3618ac: 0x23c03  sra         $a3, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A66C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A66C0u, 0x3618A8u, 0x3618B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3618B0u;
label_3618b0:
    // 0x3618b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3618b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3618b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3618b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618b8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3618b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3618bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3618bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3618c0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3618c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3618c4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3618c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3618c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3618c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3618cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3618CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3618D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3618CCu;
        // 0x3618d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3618CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3618D4u;
    // 0x3618d4: 0x0  nop
    ctx->pc = 0x3618d4u;
    // NOP
    ctx->pc = 0x3618d8u;
}
