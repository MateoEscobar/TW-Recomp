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

// Function: sub_00373438
// Address: 0x373438 - 0x3734b0
void sub_00373438_0x373438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373438_0x373438");
#endif

    switch (ctx->pc) {
        case 0x373460u: goto label_373460;
        case 0x373468u: goto label_373468;
        case 0x373480u: goto label_373480;
        case 0x373488u: goto label_373488;
        case 0x373494u: goto label_373494;
        default: break;
    }

    ctx->pc = 0x373438u;

    // 0x373438: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x373438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37343c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373440: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x373440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x373444: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x373444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x373448: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x373448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37344c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37344cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373450: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x373450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x373454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373458: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373458u;
    SET_GPR_U32(ctx, 31, 0x373460u);
    ctx->pc = 0x37345Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373458u;
    // 0x37345c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373458u, 0x373460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373460u;
label_373460:
    // 0x373460: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x373460u;
    SET_GPR_U32(ctx, 31, 0x373468u);
    ctx->pc = 0x373464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373460u;
    // 0x373464: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x373460u, 0x373468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373468u;
label_373468:
    // 0x373468: 0x28400  sll         $s0, $v0, 16
    ctx->pc = 0x373468u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37346c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37346cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373470: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x373470u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x373474: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373478: 0xc102472  jal         func_4091C8
    ctx->pc = 0x373478u;
    SET_GPR_U32(ctx, 31, 0x373480u);
    ctx->pc = 0x37347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373478u;
    // 0x37347c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x373478u, 0x373480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373480u;
label_373480:
    // 0x373480: 0xc10b108  jal         func_42C420
    ctx->pc = 0x373480u;
    SET_GPR_U32(ctx, 31, 0x373488u);
    ctx->pc = 0x373484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373480u;
    // 0x373484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x373480u, 0x373488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373488u;
label_373488:
    // 0x373488: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x373488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37348c: 0xc05a8ca  jal         func_16A328
    ctx->pc = 0x37348Cu;
    SET_GPR_U32(ctx, 31, 0x373494u);
    ctx->pc = 0x373490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37348Cu;
    // 0x373490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16A328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A328u, 0x37348Cu, 0x373494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373494u;
label_373494:
    // 0x373494: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x373494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x373498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37349c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37349cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3734a0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3734a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3734a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3734a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3734a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3734A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3734ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734A8u;
        // 0x3734ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3734A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3734B0u;
}
