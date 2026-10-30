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

// Function: sub_0036CF88
// Address: 0x36cf88 - 0x36d008
void sub_0036CF88_0x36cf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CF88_0x36cf88");
#endif

    switch (ctx->pc) {
        case 0x36cfb0u: goto label_36cfb0;
        case 0x36cfb8u: goto label_36cfb8;
        case 0x36cfccu: goto label_36cfcc;
        case 0x36cfd4u: goto label_36cfd4;
        case 0x36cfe0u: goto label_36cfe0;
        case 0x36cfecu: goto label_36cfec;
        default: break;
    }

    ctx->pc = 0x36cf88u;

    // 0x36cf88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x36cf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x36cf8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x36cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cf90: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x36cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x36cf94: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36cf94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x36cf98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36cf98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cf9c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x36cf9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cfa0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x36cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x36cfa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36cfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36cfa8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CFA8u;
    SET_GPR_U32(ctx, 31, 0x36CFB0u);
    ctx->pc = 0x36CFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CFA8u;
    // 0x36cfac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CFA8u, 0x36CFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CFB0u;
label_36cfb0:
    // 0x36cfb0: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CFB0u;
    SET_GPR_U32(ctx, 31, 0x36CFB8u);
    ctx->pc = 0x36CFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CFB0u;
    // 0x36cfb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CFB0u, 0x36CFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CFB8u;
label_36cfb8:
    // 0x36cfb8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36cfb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cfbc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36cfbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cfc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36cfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36cfc4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x36CFC4u;
    SET_GPR_U32(ctx, 31, 0x36CFCCu);
    ctx->pc = 0x36CFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CFC4u;
    // 0x36cfc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x36CFC4u, 0x36CFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CFCCu;
label_36cfcc:
    // 0x36cfcc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36CFCCu;
    SET_GPR_U32(ctx, 31, 0x36CFD4u);
    ctx->pc = 0x36CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CFCCu;
    // 0x36cfd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36CFCCu, 0x36CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CFD4u;
label_36cfd4:
    // 0x36cfd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36cfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cfd8: 0xc0e1804  jal         func_386010
    ctx->pc = 0x36CFD8u;
    SET_GPR_U32(ctx, 31, 0x36CFE0u);
    ctx->pc = 0x36CFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CFD8u;
    // 0x36cfdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386010u, 0x36CFD8u, 0x36CFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CFE0u;
label_36cfe0:
    // 0x36cfe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36cfe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36cfe4: 0xc102562  jal         func_409588
    ctx->pc = 0x36CFE4u;
    SET_GPR_U32(ctx, 31, 0x36CFECu);
    ctx->pc = 0x36CFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CFE4u;
    // 0x36cfe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x36CFE4u, 0x36CFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CFECu;
label_36cfec:
    // 0x36cfec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x36cfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36cff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36cff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36cff4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36cff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36cff8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x36cff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36cffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36cffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d000: 0x3e00008  jr          $ra
    ctx->pc = 0x36D000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D000u;
        // 0x36d004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D008u;
}
