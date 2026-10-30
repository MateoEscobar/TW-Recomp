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

// Function: sub_0035F3E8
// Address: 0x35f3e8 - 0x35f468
void sub_0035F3E8_0x35f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035F3E8_0x35f3e8");
#endif

    switch (ctx->pc) {
        case 0x35f410u: goto label_35f410;
        case 0x35f418u: goto label_35f418;
        case 0x35f430u: goto label_35f430;
        case 0x35f438u: goto label_35f438;
        case 0x35f448u: goto label_35f448;
        default: break;
    }

    ctx->pc = 0x35f3e8u;

    // 0x35f3e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35f3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35f3ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f3f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35f3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35f3f4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35f3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35f3f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35f3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f3fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x35f3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f400: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35f400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35f404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35f404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35f408: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F408u;
    SET_GPR_U32(ctx, 31, 0x35F410u);
    ctx->pc = 0x35F40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F408u;
    // 0x35f40c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F408u, 0x35F410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F410u;
label_35f410:
    // 0x35f410: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F410u;
    SET_GPR_U32(ctx, 31, 0x35F418u);
    ctx->pc = 0x35F414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F410u;
    // 0x35f414: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F410u, 0x35F418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F418u;
label_35f418:
    // 0x35f418: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x35f418u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f41c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35f41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f420: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x35f420u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x35f424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x35f424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f428: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35F428u;
    SET_GPR_U32(ctx, 31, 0x35F430u);
    ctx->pc = 0x35F42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F428u;
    // 0x35f42c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35F428u, 0x35F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F430u;
label_35f430:
    // 0x35f430: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x35F430u;
    SET_GPR_U32(ctx, 31, 0x35F438u);
    ctx->pc = 0x35F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F430u;
    // 0x35f434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x35F430u, 0x35F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F438u;
label_35f438:
    // 0x35f438: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x35f438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x35f43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35f43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f440: 0xc05ad3c  jal         func_16B4F0
    ctx->pc = 0x35F440u;
    SET_GPR_U32(ctx, 31, 0x35F448u);
    ctx->pc = 0x35F444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F440u;
    // 0x35f444: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B4F0u, 0x35F440u, 0x35F448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F448u;
label_35f448:
    // 0x35f448: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35f448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35f44c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35f44cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f450: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35f450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f454: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35f454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35f458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f45c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F45Cu;
        // 0x35f460: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F464u;
    // 0x35f464: 0x0  nop
    ctx->pc = 0x35f464u;
    // NOP
    ctx->pc = 0x35f468u;
}
