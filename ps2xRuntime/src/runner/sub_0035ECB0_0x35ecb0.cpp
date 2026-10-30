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

// Function: sub_0035ECB0
// Address: 0x35ecb0 - 0x35ed28
void sub_0035ECB0_0x35ecb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ECB0_0x35ecb0");
#endif

    switch (ctx->pc) {
        case 0x35ecd8u: goto label_35ecd8;
        case 0x35ece0u: goto label_35ece0;
        case 0x35ecf4u: goto label_35ecf4;
        case 0x35ecfcu: goto label_35ecfc;
        case 0x35ed08u: goto label_35ed08;
        default: break;
    }

    ctx->pc = 0x35ecb0u;

    // 0x35ecb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35ecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35ecb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ecb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35ecb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x35ecbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x35ecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x35ecc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ecc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ecc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35ecc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ecc8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x35ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x35eccc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35ecccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35ecd0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35ECD0u;
    SET_GPR_U32(ctx, 31, 0x35ECD8u);
    ctx->pc = 0x35ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ECD0u;
    // 0x35ecd4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35ECD0u, 0x35ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ECD8u;
label_35ecd8:
    // 0x35ecd8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35ECD8u;
    SET_GPR_U32(ctx, 31, 0x35ECE0u);
    ctx->pc = 0x35ECDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ECD8u;
    // 0x35ecdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35ECD8u, 0x35ECE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ECE0u;
label_35ece0:
    // 0x35ece0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35ece0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ece4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35ece4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ece8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ece8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ecec: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35ECECu;
    SET_GPR_U32(ctx, 31, 0x35ECF4u);
    ctx->pc = 0x35ECF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ECECu;
    // 0x35ecf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35ECECu, 0x35ECF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ECF4u;
label_35ecf4:
    // 0x35ecf4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35ECF4u;
    SET_GPR_U32(ctx, 31, 0x35ECFCu);
    ctx->pc = 0x35ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ECF4u;
    // 0x35ecf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35ECF4u, 0x35ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ECFCu;
label_35ecfc:
    // 0x35ecfc: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x35ecfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x35ed00: 0xc0a4918  jal         func_292460
    ctx->pc = 0x35ED00u;
    SET_GPR_U32(ctx, 31, 0x35ED08u);
    ctx->pc = 0x35ED04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED00u;
    // 0x35ed04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292460u, 0x35ED00u, 0x35ED08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED08u;
label_35ed08:
    // 0x35ed08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35ed08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35ed0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ed0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ed10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x35ed10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ed14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x35ed14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ed18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ed1c: 0x3e00008  jr          $ra
    ctx->pc = 0x35ED1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35ED20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED1Cu;
        // 0x35ed20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ED1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35ED24u;
    // 0x35ed24: 0x0  nop
    ctx->pc = 0x35ed24u;
    // NOP
    ctx->pc = 0x35ed28u;
}
