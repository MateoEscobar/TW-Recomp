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

// Function: sub_0036B8A8
// Address: 0x36b8a8 - 0x36b9f0
void sub_0036B8A8_0x36b8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B8A8_0x36b8a8");
#endif

    switch (ctx->pc) {
        case 0x36b8e4u: goto label_36b8e4;
        case 0x36b8ecu: goto label_36b8ec;
        case 0x36b900u: goto label_36b900;
        case 0x36b914u: goto label_36b914;
        case 0x36b928u: goto label_36b928;
        case 0x36b930u: goto label_36b930;
        case 0x36b944u: goto label_36b944;
        case 0x36b94cu: goto label_36b94c;
        case 0x36b960u: goto label_36b960;
        case 0x36b968u: goto label_36b968;
        case 0x36b97cu: goto label_36b97c;
        case 0x36b984u: goto label_36b984;
        case 0x36b998u: goto label_36b998;
        case 0x36b9bcu: goto label_36b9bc;
        default: break;
    }

    ctx->pc = 0x36b8a8u;

    // 0x36b8a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x36b8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x36b8ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36b8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b8b0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x36b8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x36b8b4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x36b8b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x36b8b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36b8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b8bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36b8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b8c0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x36b8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x36b8c4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x36b8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x36b8c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x36b8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36b8cc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x36b8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x36b8d0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x36b8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x36b8d4: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x36b8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x36b8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36b8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36b8dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B8DCu;
    SET_GPR_U32(ctx, 31, 0x36B8E4u);
    ctx->pc = 0x36B8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B8DCu;
    // 0x36b8e0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B8DCu, 0x36B8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B8E4u;
label_36b8e4:
    // 0x36b8e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B8E4u;
    SET_GPR_U32(ctx, 31, 0x36B8ECu);
    ctx->pc = 0x36B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B8E4u;
    // 0x36b8e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B8E4u, 0x36B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B8ECu;
label_36b8ec:
    // 0x36b8ec: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x36b8ecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36b8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b8f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b8f8: 0xc102488  jal         func_409220
    ctx->pc = 0x36B8F8u;
    SET_GPR_U32(ctx, 31, 0x36B900u);
    ctx->pc = 0x36B8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B8F8u;
    // 0x36b8fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B8F8u, 0x36B900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B900u;
label_36b900:
    // 0x36b900: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x36b900u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b908: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36b908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36b90c: 0xc102488  jal         func_409220
    ctx->pc = 0x36B90Cu;
    SET_GPR_U32(ctx, 31, 0x36B914u);
    ctx->pc = 0x36B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B90Cu;
    // 0x36b910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B90Cu, 0x36B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B914u;
label_36b914:
    // 0x36b914: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b918: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x36b918u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b91c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36b91cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36b920: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B920u;
    SET_GPR_U32(ctx, 31, 0x36B928u);
    ctx->pc = 0x36B924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B920u;
    // 0x36b924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B920u, 0x36B928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B928u;
label_36b928:
    // 0x36b928: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B928u;
    SET_GPR_U32(ctx, 31, 0x36B930u);
    ctx->pc = 0x36B92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B928u;
    // 0x36b92c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B928u, 0x36B930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B930u;
label_36b930:
    // 0x36b930: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b934: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x36b934u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b938: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36b938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x36b93c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B93Cu;
    SET_GPR_U32(ctx, 31, 0x36B944u);
    ctx->pc = 0x36B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B93Cu;
    // 0x36b940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B93Cu, 0x36B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B944u;
label_36b944:
    // 0x36b944: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B944u;
    SET_GPR_U32(ctx, 31, 0x36B94Cu);
    ctx->pc = 0x36B948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B944u;
    // 0x36b948: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B944u, 0x36B94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B94Cu;
label_36b94c:
    // 0x36b94c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b94cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b950: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x36b950u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b954: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36b954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x36b958: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B958u;
    SET_GPR_U32(ctx, 31, 0x36B960u);
    ctx->pc = 0x36B95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B958u;
    // 0x36b95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B958u, 0x36B960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B960u;
label_36b960:
    // 0x36b960: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B960u;
    SET_GPR_U32(ctx, 31, 0x36B968u);
    ctx->pc = 0x36B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B960u;
    // 0x36b964: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B960u, 0x36B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B968u;
label_36b968:
    // 0x36b968: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36b968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b96c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x36b96cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36b970: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x36b970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x36b974: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36B974u;
    SET_GPR_U32(ctx, 31, 0x36B97Cu);
    ctx->pc = 0x36B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B974u;
    // 0x36b978: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36B974u, 0x36B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B97Cu;
label_36b97c:
    // 0x36b97c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36B97Cu;
    SET_GPR_U32(ctx, 31, 0x36B984u);
    ctx->pc = 0x36B980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B97Cu;
    // 0x36b980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36B97Cu, 0x36B984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B984u;
label_36b984:
    // 0x36b984: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x36b984u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36b988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b98c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x36b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x36b990: 0xc102488  jal         func_409220
    ctx->pc = 0x36B990u;
    SET_GPR_U32(ctx, 31, 0x36B998u);
    ctx->pc = 0x36B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B990u;
    // 0x36b994: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36B990u, 0x36B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B998u;
label_36b998:
    // 0x36b998: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x36b998u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b99c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x36b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b9a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x36b9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b9a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x36b9a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b9a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x36b9a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b9ac: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x36b9acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b9b0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x36b9b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b9b4: 0xc07c398  jal         func_1F0E60
    ctx->pc = 0x36B9B4u;
    SET_GPR_U32(ctx, 31, 0x36B9BCu);
    ctx->pc = 0x36B9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B9B4u;
    // 0x36b9b8: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0E60u, 0x36B9B4u, 0x36B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B9BCu;
label_36b9bc:
    // 0x36b9bc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x36b9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36b9c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36b9c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b9c4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x36b9c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36b9c8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x36b9c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36b9cc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x36b9ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36b9d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x36b9d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36b9d4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x36b9d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36b9d8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x36b9d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36b9dc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x36b9dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b9e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36b9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x36B9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9E4u;
        // 0x36b9e8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B9ECu;
    // 0x36b9ec: 0x0  nop
    ctx->pc = 0x36b9ecu;
    // NOP
    ctx->pc = 0x36b9f0u;
}
