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

// Function: sub_004E4BB8
// Address: 0x4e4bb8 - 0x4e4c20
void sub_004E4BB8_0x4e4bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4BB8_0x4e4bb8");
#endif

    switch (ctx->pc) {
        case 0x4e4be8u: goto label_4e4be8;
        case 0x4e4bf4u: goto label_4e4bf4;
        case 0x4e4c00u: goto label_4e4c00;
        case 0x4e4c0cu: goto label_4e4c0c;
        default: break;
    }

    ctx->pc = 0x4e4bb8u;

    // 0x4e4bb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e4bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4e4bbc: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4e4bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x4e4bc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4e4bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4e4bc4: 0x24429fd0  addiu       $v0, $v0, -0x6030
    ctx->pc = 0x4e4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942672));
    // 0x4e4bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e4bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4e4bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e4bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e4bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4e4bd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e4bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4bd8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e4bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4e4bdc: 0x26040300  addiu       $a0, $s0, 0x300
    ctx->pc = 0x4e4bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x4e4be0: 0xc06870c  jal         func_1A1C30
    ctx->pc = 0x4E4BE0u;
    SET_GPR_U32(ctx, 31, 0x4E4BE8u);
    ctx->pc = 0x4E4BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4BE0u;
    // 0x4e4be4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4E4BE0u, 0x4E4BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4BE8u;
label_4e4be8:
    // 0x4e4be8: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x4e4be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x4e4bec: 0xc06e410  jal         func_1B9040
    ctx->pc = 0x4E4BECu;
    SET_GPR_U32(ctx, 31, 0x4E4BF4u);
    ctx->pc = 0x4E4BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4BECu;
    // 0x4e4bf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4E4BECu, 0x4E4BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4BF4u;
label_4e4bf4:
    // 0x4e4bf4: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4e4bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x4e4bf8: 0xc0733f0  jal         func_1CCFC0
    ctx->pc = 0x4E4BF8u;
    SET_GPR_U32(ctx, 31, 0x4E4C00u);
    ctx->pc = 0x4E4BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4BF8u;
    // 0x4e4bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4E4BF8u, 0x4E4C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4C00u;
label_4e4c00:
    // 0x4e4c00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e4c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4c04: 0xc06a39e  jal         func_1A8E78
    ctx->pc = 0x4E4C04u;
    SET_GPR_U32(ctx, 31, 0x4E4C0Cu);
    ctx->pc = 0x4E4C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4C04u;
    // 0x4e4c08: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E4C04u, 0x4E4C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4C0Cu;
label_4e4c0c:
    // 0x4e4c0c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4e4c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4e4c10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e4c10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4c18: 0x3e00008  jr          $ra
    ctx->pc = 0x4E4C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4C18u;
        // 0x4e4c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E4C20u;
}
