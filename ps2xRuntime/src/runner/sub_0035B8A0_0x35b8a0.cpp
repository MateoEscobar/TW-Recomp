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

// Function: sub_0035B8A0
// Address: 0x35b8a0 - 0x35b980
void sub_0035B8A0_0x35b8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B8A0_0x35b8a0");
#endif

    switch (ctx->pc) {
        case 0x35b8d0u: goto label_35b8d0;
        case 0x35b8d8u: goto label_35b8d8;
        case 0x35b8ecu: goto label_35b8ec;
        case 0x35b8f4u: goto label_35b8f4;
        case 0x35b908u: goto label_35b908;
        case 0x35b910u: goto label_35b910;
        case 0x35b924u: goto label_35b924;
        case 0x35b92cu: goto label_35b92c;
        case 0x35b940u: goto label_35b940;
        case 0x35b958u: goto label_35b958;
        default: break;
    }

    ctx->pc = 0x35b8a0u;

    // 0x35b8a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x35b8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x35b8a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35b8a8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x35b8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x35b8ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x35b8acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x35b8b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35b8b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b8b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35b8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b8b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x35b8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x35b8bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x35b8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x35b8c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x35b8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x35b8c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35b8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35b8c8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B8C8u;
    SET_GPR_U32(ctx, 31, 0x35B8D0u);
    ctx->pc = 0x35B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B8C8u;
    // 0x35b8cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B8C8u, 0x35B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B8D0u;
label_35b8d0:
    // 0x35b8d0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B8D0u;
    SET_GPR_U32(ctx, 31, 0x35B8D8u);
    ctx->pc = 0x35B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B8D0u;
    // 0x35b8d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B8D0u, 0x35B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B8D8u;
label_35b8d8:
    // 0x35b8d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35b8d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b8dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35b8dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b8e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35b8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35b8e4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B8E4u;
    SET_GPR_U32(ctx, 31, 0x35B8ECu);
    ctx->pc = 0x35B8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B8E4u;
    // 0x35b8e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B8E4u, 0x35B8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B8ECu;
label_35b8ec:
    // 0x35b8ec: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35B8ECu;
    SET_GPR_U32(ctx, 31, 0x35B8F4u);
    ctx->pc = 0x35B8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B8ECu;
    // 0x35b8f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35B8ECu, 0x35B8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B8F4u;
label_35b8f4:
    // 0x35b8f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35b8f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b8f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35b8f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b8fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35b8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35b900: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B900u;
    SET_GPR_U32(ctx, 31, 0x35B908u);
    ctx->pc = 0x35B904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B900u;
    // 0x35b904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B900u, 0x35B908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B908u;
label_35b908:
    // 0x35b908: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B908u;
    SET_GPR_U32(ctx, 31, 0x35B910u);
    ctx->pc = 0x35B90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B908u;
    // 0x35b90c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B908u, 0x35B910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B910u;
label_35b910:
    // 0x35b910: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35b910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b914: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35b914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b918: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35b918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35b91c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35B91Cu;
    SET_GPR_U32(ctx, 31, 0x35B924u);
    ctx->pc = 0x35B920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B91Cu;
    // 0x35b920: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35B91Cu, 0x35B924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B924u;
label_35b924:
    // 0x35b924: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35B924u;
    SET_GPR_U32(ctx, 31, 0x35B92Cu);
    ctx->pc = 0x35B928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B924u;
    // 0x35b928: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35B924u, 0x35B92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B92Cu;
label_35b92c:
    // 0x35b92c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35b92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b930: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35b930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b934: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35b934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35b938: 0xc1024c6  jal         func_409318
    ctx->pc = 0x35B938u;
    SET_GPR_U32(ctx, 31, 0x35B940u);
    ctx->pc = 0x35B93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B938u;
    // 0x35b93c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x35B938u, 0x35B940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B940u;
label_35b940:
    // 0x35b940: 0x2402b  sltu        $t0, $zero, $v0
    ctx->pc = 0x35b940u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35b944: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x35b944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b948: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35b948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b94c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35b94cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b950: 0xc08d632  jal         func_2358C8
    ctx->pc = 0x35B950u;
    SET_GPR_U32(ctx, 31, 0x35B958u);
    ctx->pc = 0x35B954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B950u;
    // 0x35b954: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2358C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2358C8u, 0x35B950u, 0x35B958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B958u;
label_35b958:
    // 0x35b958: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x35b958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35b95c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b95cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b960: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x35b960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35b964: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x35b964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35b968: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x35b968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35b96c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x35b96cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b974: 0x3e00008  jr          $ra
    ctx->pc = 0x35B974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B974u;
        // 0x35b978: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B97Cu;
    // 0x35b97c: 0x0  nop
    ctx->pc = 0x35b97cu;
    // NOP
    ctx->pc = 0x35b980u;
}
