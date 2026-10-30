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

// Function: sub_0037C960
// Address: 0x37c960 - 0x37ca20
void sub_0037C960_0x37c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C960_0x37c960");
#endif

    switch (ctx->pc) {
        case 0x37c98cu: goto label_37c98c;
        case 0x37c994u: goto label_37c994;
        case 0x37c9a8u: goto label_37c9a8;
        case 0x37c9b0u: goto label_37c9b0;
        case 0x37c9c4u: goto label_37c9c4;
        case 0x37c9ccu: goto label_37c9cc;
        case 0x37c9e4u: goto label_37c9e4;
        case 0x37c9ecu: goto label_37c9ec;
        case 0x37ca00u: goto label_37ca00;
        default: break;
    }

    ctx->pc = 0x37c960u;

    // 0x37c960: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x37c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37c964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37c964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37c968: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x37c968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x37c96c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x37c96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37c970: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37c970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37c974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c978: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37c978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x37c97c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x37c97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x37c980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37c980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37c984: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C984u;
    SET_GPR_U32(ctx, 31, 0x37C98Cu);
    ctx->pc = 0x37C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C984u;
    // 0x37c988: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C984u, 0x37C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C98Cu;
label_37c98c:
    // 0x37c98c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C98Cu;
    SET_GPR_U32(ctx, 31, 0x37C994u);
    ctx->pc = 0x37C990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C98Cu;
    // 0x37c990: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C98Cu, 0x37C994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C994u;
label_37c994:
    // 0x37c994: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c994u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c998: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37c998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c99c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37c99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37c9a0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C9A0u;
    SET_GPR_U32(ctx, 31, 0x37C9A8u);
    ctx->pc = 0x37C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9A0u;
    // 0x37c9a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C9A0u, 0x37C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9A8u;
label_37c9a8:
    // 0x37c9a8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C9A8u;
    SET_GPR_U32(ctx, 31, 0x37C9B0u);
    ctx->pc = 0x37C9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9A8u;
    // 0x37c9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C9A8u, 0x37C9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9B0u;
label_37c9b0:
    // 0x37c9b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37c9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c9b4: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x37c9b4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c9b8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37c9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37c9bc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C9BCu;
    SET_GPR_U32(ctx, 31, 0x37C9C4u);
    ctx->pc = 0x37C9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9BCu;
    // 0x37c9c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C9BCu, 0x37C9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9C4u;
label_37c9c4:
    // 0x37c9c4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C9C4u;
    SET_GPR_U32(ctx, 31, 0x37C9CCu);
    ctx->pc = 0x37C9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9C4u;
    // 0x37c9c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C9C4u, 0x37C9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9CCu;
label_37c9cc:
    // 0x37c9cc: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x37c9ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x37c9d0: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x37c9d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x37c9d4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x37c9d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c9d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37c9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c9dc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37C9DCu;
    SET_GPR_U32(ctx, 31, 0x37C9E4u);
    ctx->pc = 0x37C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9DCu;
    // 0x37c9e0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37C9DCu, 0x37C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9E4u;
label_37c9e4:
    // 0x37c9e4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37C9E4u;
    SET_GPR_U32(ctx, 31, 0x37C9ECu);
    ctx->pc = 0x37C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9E4u;
    // 0x37c9e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37C9E4u, 0x37C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C9ECu;
label_37c9ec:
    // 0x37c9ec: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x37c9ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x37c9f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37c9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c9f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x37c9f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c9f8: 0xc108936  jal         func_4224D8
    ctx->pc = 0x37C9F8u;
    SET_GPR_U32(ctx, 31, 0x37CA00u);
    ctx->pc = 0x37C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9F8u;
    // 0x37c9fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4224D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4224D8u, 0x37C9F8u, 0x37CA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CA00u;
label_37ca00:
    // 0x37ca00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37ca00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37ca04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37ca04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ca08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x37ca08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ca0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37ca0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ca10: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x37ca10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ca14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ca14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ca18: 0x3e00008  jr          $ra
    ctx->pc = 0x37CA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CA18u;
        // 0x37ca1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CA20u;
}
