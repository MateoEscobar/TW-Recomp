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

// Function: sub_002F9B90
// Address: 0x2f9b90 - 0x2f9c18
void sub_002F9B90_0x2f9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9B90_0x2f9b90");
#endif

    switch (ctx->pc) {
        case 0x2f9bc0u: goto label_2f9bc0;
        case 0x2f9c04u: goto label_2f9c04;
        default: break;
    }

    ctx->pc = 0x2f9b90u;

    // 0x2f9b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f9b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f9b94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f9b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f9b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f9b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f9ba0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f9ba0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ba4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f9ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f9ba8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f9bac: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x2f9bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x2f9bb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f9bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9bb4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2f9bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9bb8: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2F9BB8u;
    SET_GPR_U32(ctx, 31, 0x2F9BC0u);
    ctx->pc = 0x2F9BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BB8u;
    // 0x2f9bbc: 0xa223003c  sb          $v1, 0x3C($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2F9BB8u, 0x2F9BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9BC0u;
label_2f9bc0:
    // 0x2f9bc0: 0x920300e1  lbu         $v1, 0xE1($s0)
    ctx->pc = 0x2f9bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 225)));
    // 0x2f9bc4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x2f9bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f9bc8: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x2f9bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2f9bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f9bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9bd0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2f9bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f9bd4: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2f9bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2f9bd8: 0xa223003e  sb          $v1, 0x3E($s1)
    ctx->pc = 0x2f9bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 62), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f9bdc: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2f9bdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2f9be0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2f9be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2f9be4: 0x30430800  andi        $v1, $v0, 0x800
    ctx->pc = 0x2f9be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2f9be8: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2f9be8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x2f9bec: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x2f9becu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2f9bf0: 0xa223003f  sb          $v1, 0x3F($s1)
    ctx->pc = 0x2f9bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 63), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f9bf4: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2f9bf4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2f9bf8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2f9bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2f9bfc: 0xc0be6a0  jal         func_2F9A80
    ctx->pc = 0x2F9BFCu;
    SET_GPR_U32(ctx, 31, 0x2F9C04u);
    ctx->pc = 0x2F9C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9BFCu;
    // 0x2f9c00: 0xfe0200e0  sd          $v0, 0xE0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9A80u, 0x2F9BFCu, 0x2F9C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9C04u;
label_2f9c04:
    // 0x2f9c04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f9c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f9c08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f9c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9c10: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9C10u;
        // 0x2f9c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9C18u;
}
