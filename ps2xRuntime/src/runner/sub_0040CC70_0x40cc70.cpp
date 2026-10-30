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

// Function: sub_0040CC70
// Address: 0x40cc70 - 0x40cce8
void sub_0040CC70_0x40cc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CC70_0x40cc70");
#endif

    switch (ctx->pc) {
        case 0x40cc8cu: goto label_40cc8c;
        default: break;
    }

    ctx->pc = 0x40cc70u;

    // 0x40cc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x40cc74: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x40cc78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x40cc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x40cc7c: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x40cc7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x40cc80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x40cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x40cc84: 0xc107444  jal         func_41D110
    ctx->pc = 0x40CC84u;
    SET_GPR_U32(ctx, 31, 0x40CC8Cu);
    ctx->pc = 0x40CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CC84u;
    // 0x40cc88: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x40CC84u, 0x40CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CC8Cu;
label_40cc8c:
    // 0x40cc8c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x40CC8Cu;
    {
        const bool branch_taken_0x40cc8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40cc8c) {
            ctx->pc = 0x40CC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40CC8Cu;
            // 0x40cc90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40CCD4u;
            goto label_40ccd4;
        }
    }
    ctx->pc = 0x40CC94u;
    // 0x40cc94: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x40cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x40cc98: 0xa3b00003  sb          $s0, 0x3($sp)
    ctx->pc = 0x40cc98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 16));
    // 0x40cc9c: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x40cc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x40cca0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x40cca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x40cca4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x40cca4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40cca8: 0x2485deb8  addiu       $a1, $a0, -0x2148
    ctx->pc = 0x40cca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958776));
    // 0x40ccac: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x40ccacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x40ccb0: 0x8c83deb8  lw          $v1, -0x2148($a0)
    ctx->pc = 0x40ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x40ccb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x40ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40ccb8: 0xac6201a8  sw          $v0, 0x1A8($v1)
    ctx->pc = 0x40ccb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 424), GPR_U32(ctx, 2));
    // 0x40ccbc: 0xac6201a4  sw          $v0, 0x1A4($v1)
    ctx->pc = 0x40ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 420), GPR_U32(ctx, 2));
    // 0x40ccc0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x40ccc0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5FDEBCu));
    // 0x40ccc4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x40ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40ccc8: 0xac8201a8  sw          $v0, 0x1A8($a0)
    ctx->pc = 0x40ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 424), GPR_U32(ctx, 2));
    // 0x40cccc: 0xac8201a4  sw          $v0, 0x1A4($a0)
    ctx->pc = 0x40ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 2));
    // 0x40ccd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x40ccd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40ccd4:
    // 0x40ccd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40ccd8: 0x3e00008  jr          $ra
    ctx->pc = 0x40CCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CCD8u;
        // 0x40ccdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40CCE0u;
    // 0x40cce0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x40cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x40cce4: 0x0  nop
    ctx->pc = 0x40cce4u;
    // NOP
    ctx->pc = 0x40cce8u;
}
