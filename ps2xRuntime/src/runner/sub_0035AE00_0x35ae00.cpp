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

// Function: sub_0035AE00
// Address: 0x35ae00 - 0x35ae78
void sub_0035AE00_0x35ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035AE00_0x35ae00");
#endif

    switch (ctx->pc) {
        case 0x35ae28u: goto label_35ae28;
        case 0x35ae30u: goto label_35ae30;
        case 0x35ae44u: goto label_35ae44;
        case 0x35ae4cu: goto label_35ae4c;
        case 0x35ae5cu: goto label_35ae5c;
        default: break;
    }

    ctx->pc = 0x35ae00u;

    // 0x35ae00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ae04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ae04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ae08: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35ae08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35ae0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35ae10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35ae10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35ae14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae18: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35ae18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35ae1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ae1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ae20: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AE20u;
    SET_GPR_U32(ctx, 31, 0x35AE28u);
    ctx->pc = 0x35AE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE20u;
    // 0x35ae24: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AE20u, 0x35AE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE28u;
label_35ae28:
    // 0x35ae28: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35AE28u;
    SET_GPR_U32(ctx, 31, 0x35AE30u);
    ctx->pc = 0x35AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE28u;
    // 0x35ae2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35AE28u, 0x35AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE30u;
label_35ae30:
    // 0x35ae30: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x35ae30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae34: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35ae34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35ae38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae3c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35AE3Cu;
    SET_GPR_U32(ctx, 31, 0x35AE44u);
    ctx->pc = 0x35AE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE3Cu;
    // 0x35ae40: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35AE3Cu, 0x35AE44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE44u;
label_35ae44:
    // 0x35ae44: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35AE44u;
    SET_GPR_U32(ctx, 31, 0x35AE4Cu);
    ctx->pc = 0x35AE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE44u;
    // 0x35ae48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35AE44u, 0x35AE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE4Cu;
label_35ae4c:
    // 0x35ae4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35ae50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35ae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae54: 0xc0a651c  jal         func_299470
    ctx->pc = 0x35AE54u;
    SET_GPR_U32(ctx, 31, 0x35AE5Cu);
    ctx->pc = 0x35AE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35AE54u;
    // 0x35ae58: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299470u, 0x35AE54u, 0x35AE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35AE5Cu;
label_35ae5c:
    // 0x35ae5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35ae5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ae60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ae60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ae64: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35ae64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ae68: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35ae68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ae6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ae6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ae70: 0x3e00008  jr          $ra
    ctx->pc = 0x35AE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35AE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35AE70u;
        // 0x35ae74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35AE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35AE78u;
}
