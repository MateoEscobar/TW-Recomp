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

// Function: sub_0035D610
// Address: 0x35d610 - 0x35d730
void sub_0035D610_0x35d610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D610_0x35d610");
#endif

    switch (ctx->pc) {
        case 0x35d648u: goto label_35d648;
        case 0x35d650u: goto label_35d650;
        case 0x35d664u: goto label_35d664;
        case 0x35d66cu: goto label_35d66c;
        case 0x35d680u: goto label_35d680;
        case 0x35d688u: goto label_35d688;
        case 0x35d69cu: goto label_35d69c;
        case 0x35d6a4u: goto label_35d6a4;
        case 0x35d6b8u: goto label_35d6b8;
        case 0x35d6ccu: goto label_35d6cc;
        case 0x35d6e0u: goto label_35d6e0;
        case 0x35d700u: goto label_35d700;
        default: break;
    }

    ctx->pc = 0x35d610u;

    // 0x35d610: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35d610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35d614: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d618: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x35d618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x35d61c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x35d61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x35d620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d624: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35d624u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d628: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x35d628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x35d62c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35d62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x35d630: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x35d630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x35d634: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x35d634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x35d638: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x35d638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x35d63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d640: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D640u;
    SET_GPR_U32(ctx, 31, 0x35D648u);
    ctx->pc = 0x35D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D640u;
    // 0x35d644: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D640u, 0x35D648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D648u;
label_35d648:
    // 0x35d648: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D648u;
    SET_GPR_U32(ctx, 31, 0x35D650u);
    ctx->pc = 0x35D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D648u;
    // 0x35d64c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D648u, 0x35D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D650u;
label_35d650:
    // 0x35d650: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35d650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d654: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x35d654u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d658: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35d658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d65c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D65Cu;
    SET_GPR_U32(ctx, 31, 0x35D664u);
    ctx->pc = 0x35D660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D65Cu;
    // 0x35d660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D65Cu, 0x35D664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D664u;
label_35d664:
    // 0x35d664: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D664u;
    SET_GPR_U32(ctx, 31, 0x35D66Cu);
    ctx->pc = 0x35D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D664u;
    // 0x35d668: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D664u, 0x35D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D66Cu;
label_35d66c:
    // 0x35d66c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35d66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d670: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35d670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d674: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35d674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35d678: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D678u;
    SET_GPR_U32(ctx, 31, 0x35D680u);
    ctx->pc = 0x35D67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D678u;
    // 0x35d67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D678u, 0x35D680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D680u;
label_35d680:
    // 0x35d680: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D680u;
    SET_GPR_U32(ctx, 31, 0x35D688u);
    ctx->pc = 0x35D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D680u;
    // 0x35d684: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D680u, 0x35D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D688u;
label_35d688:
    // 0x35d688: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35d688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d68c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35d68cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d690: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35d690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35d694: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D694u;
    SET_GPR_U32(ctx, 31, 0x35D69Cu);
    ctx->pc = 0x35D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D694u;
    // 0x35d698: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D694u, 0x35D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D69Cu;
label_35d69c:
    // 0x35d69c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D69Cu;
    SET_GPR_U32(ctx, 31, 0x35D6A4u);
    ctx->pc = 0x35D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D69Cu;
    // 0x35d6a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D69Cu, 0x35D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D6A4u;
label_35d6a4:
    // 0x35d6a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35d6a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35d6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35d6b0: 0xc102488  jal         func_409220
    ctx->pc = 0x35D6B0u;
    SET_GPR_U32(ctx, 31, 0x35D6B8u);
    ctx->pc = 0x35D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D6B0u;
    // 0x35d6b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D6B0u, 0x35D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D6B8u;
label_35d6b8:
    // 0x35d6b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35d6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6c0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35d6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35d6c4: 0xc102488  jal         func_409220
    ctx->pc = 0x35D6C4u;
    SET_GPR_U32(ctx, 31, 0x35D6CCu);
    ctx->pc = 0x35D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D6C4u;
    // 0x35d6c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D6C4u, 0x35D6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D6CCu;
label_35d6cc:
    // 0x35d6cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35d6ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35d6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35d6d8: 0xc102488  jal         func_409220
    ctx->pc = 0x35D6D8u;
    SET_GPR_U32(ctx, 31, 0x35D6E0u);
    ctx->pc = 0x35D6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D6D8u;
    // 0x35d6dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D6D8u, 0x35D6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D6E0u;
label_35d6e0:
    // 0x35d6e0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x35d6e0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6e4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35d6e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6e8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x35d6e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6ec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35d6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6f0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x35d6f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6f4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x35d6f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d6f8: 0xc08ebb8  jal         func_23AEE0
    ctx->pc = 0x35D6F8u;
    SET_GPR_U32(ctx, 31, 0x35D700u);
    ctx->pc = 0x35D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D6F8u;
    // 0x35d6fc: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23AEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AEE0u, 0x35D6F8u, 0x35D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D700u;
label_35d700:
    // 0x35d700: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x35d700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35d704: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35d704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d708: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x35d708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35d70c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x35d70cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d710: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35d710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d714: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x35d714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d718: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x35d718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d71c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x35d71cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d724: 0x3e00008  jr          $ra
    ctx->pc = 0x35D724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D724u;
        // 0x35d728: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D72Cu;
    // 0x35d72c: 0x0  nop
    ctx->pc = 0x35d72cu;
    // NOP
    ctx->pc = 0x35d730u;
}
