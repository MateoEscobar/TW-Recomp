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

// Function: sub_0037C7A8
// Address: 0x37c7a8 - 0x37c8c0
void sub_0037C7A8_0x37c7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C7A8_0x37c7a8");
#endif

    switch (ctx->pc) {
        case 0x37c7e0u: goto label_37c7e0;
        case 0x37c7e8u: goto label_37c7e8;
        case 0x37c7fcu: goto label_37c7fc;
        case 0x37c804u: goto label_37c804;
        case 0x37c818u: goto label_37c818;
        case 0x37c820u: goto label_37c820;
        case 0x37c834u: goto label_37c834;
        case 0x37c83cu: goto label_37c83c;
        case 0x37c850u: goto label_37c850;
        case 0x37c858u: goto label_37c858;
        case 0x37c86cu: goto label_37c86c;
        case 0x37c874u: goto label_37c874;
        case 0x37c890u: goto label_37c890;
        default: break;
    }

    ctx->pc = 0x37c7a8u;

    // 0x37c7a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x37c7a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x37c7ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c7b0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x37c7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x37c7b4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x37c7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x37c7b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c7b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c7bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c7c0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x37c7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x37c7c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x37c7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x37c7c8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x37c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x37c7cc: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x37c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x37c7d0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x37c7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x37c7d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c7d8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C7D8u;
    SET_GPR_U32(ctx, 31, 0x37C7E0u);
    ctx->pc = 0x37C7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C7D8u;
    // 0x37c7dc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C7D8u, 0x37C7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C7E0u;
label_37c7e0:
    // 0x37c7e0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C7E0u;
    SET_GPR_U32(ctx, 31, 0x37C7E8u);
    ctx->pc = 0x37C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C7E0u;
    // 0x37c7e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C7E0u, 0x37C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C7E8u;
label_37c7e8:
    // 0x37c7e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c7e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c7ec: 0x3056ffff  andi        $s6, $v0, 0xFFFF
    ctx->pc = 0x37c7ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c7f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37c7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c7f4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C7F4u;
    SET_GPR_U32(ctx, 31, 0x37C7FCu);
    ctx->pc = 0x37C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C7F4u;
    // 0x37c7f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C7F4u, 0x37C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C7FCu;
label_37c7fc:
    // 0x37c7fc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C7FCu;
    SET_GPR_U32(ctx, 31, 0x37C804u);
    ctx->pc = 0x37C800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C7FCu;
    // 0x37c800: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C7FCu, 0x37C804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C804u;
label_37c804:
    // 0x37c804: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c808: 0x3055ffff  andi        $s5, $v0, 0xFFFF
    ctx->pc = 0x37c808u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c80c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c810: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C810u;
    SET_GPR_U32(ctx, 31, 0x37C818u);
    ctx->pc = 0x37C814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C810u;
    // 0x37c814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C810u, 0x37C818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C818u;
label_37c818:
    // 0x37c818: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C818u;
    SET_GPR_U32(ctx, 31, 0x37C820u);
    ctx->pc = 0x37C81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C818u;
    // 0x37c81c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C818u, 0x37C820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C820u;
label_37c820:
    // 0x37c820: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c824: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x37c824u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c828: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x37c828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37c82c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C82Cu;
    SET_GPR_U32(ctx, 31, 0x37C834u);
    ctx->pc = 0x37C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C82Cu;
    // 0x37c830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C82Cu, 0x37C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C834u;
label_37c834:
    // 0x37c834: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C834u;
    SET_GPR_U32(ctx, 31, 0x37C83Cu);
    ctx->pc = 0x37C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C834u;
    // 0x37c838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C834u, 0x37C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C83Cu;
label_37c83c:
    // 0x37c83c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c840: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x37c840u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c844: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37c844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x37c848: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C848u;
    SET_GPR_U32(ctx, 31, 0x37C850u);
    ctx->pc = 0x37C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C848u;
    // 0x37c84c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C848u, 0x37C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C850u;
label_37c850:
    // 0x37c850: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C850u;
    SET_GPR_U32(ctx, 31, 0x37C858u);
    ctx->pc = 0x37C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C850u;
    // 0x37c854: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C850u, 0x37C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C858u;
label_37c858:
    // 0x37c858: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c85c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x37c85cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37c860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c864: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C864u;
    SET_GPR_U32(ctx, 31, 0x37C86Cu);
    ctx->pc = 0x37C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C864u;
    // 0x37c868: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C864u, 0x37C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C86Cu;
label_37c86c:
    // 0x37c86c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C86Cu;
    SET_GPR_U32(ctx, 31, 0x37C874u);
    ctx->pc = 0x37C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C86Cu;
    // 0x37c870: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C86Cu, 0x37C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C874u;
label_37c874:
    // 0x37c874: 0x3049ffff  andi        $t1, $v0, 0xFFFF
    ctx->pc = 0x37c874u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c878: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x37c878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c87c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x37c87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c880: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x37c880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c884: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x37c884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c888: 0xc1088fa  jal         func_4223E8
    ctx->pc = 0x37C888u;
    SET_GPR_U32(ctx, 31, 0x37C890u);
    ctx->pc = 0x37C88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C888u;
    // 0x37c88c: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4223E8u, 0x37C888u, 0x37C890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C890u;
label_37c890:
    // 0x37c890: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x37c890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37c894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37c894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c898: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x37c898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37c89c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x37c89cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37c8a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x37c8a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37c8a4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x37c8a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37c8a8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x37c8a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c8ac: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x37c8acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37c8b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37c8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37c8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x37C8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C8B4u;
        // 0x37c8b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C8BCu;
    // 0x37c8bc: 0x0  nop
    ctx->pc = 0x37c8bcu;
    // NOP
    ctx->pc = 0x37c8c0u;
}
