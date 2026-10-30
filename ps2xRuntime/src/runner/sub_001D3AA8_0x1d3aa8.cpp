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

// Function: sub_001D3AA8
// Address: 0x1d3aa8 - 0x1d3b30
void sub_001D3AA8_0x1d3aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D3AA8_0x1d3aa8");
#endif

    switch (ctx->pc) {
        case 0x1d3aa8u: goto label_1d3aa8;
        case 0x1d3aacu: goto label_1d3aac;
        case 0x1d3ab0u: goto label_1d3ab0;
        case 0x1d3ab4u: goto label_1d3ab4;
        case 0x1d3ab8u: goto label_1d3ab8;
        case 0x1d3abcu: goto label_1d3abc;
        case 0x1d3ac0u: goto label_1d3ac0;
        case 0x1d3ac4u: goto label_1d3ac4;
        case 0x1d3ac8u: goto label_1d3ac8;
        case 0x1d3accu: goto label_1d3acc;
        case 0x1d3ad0u: goto label_1d3ad0;
        case 0x1d3ad4u: goto label_1d3ad4;
        case 0x1d3ad8u: goto label_1d3ad8;
        case 0x1d3adcu: goto label_1d3adc;
        case 0x1d3ae0u: goto label_1d3ae0;
        case 0x1d3ae4u: goto label_1d3ae4;
        case 0x1d3ae8u: goto label_1d3ae8;
        case 0x1d3aecu: goto label_1d3aec;
        case 0x1d3af0u: goto label_1d3af0;
        case 0x1d3af4u: goto label_1d3af4;
        case 0x1d3af8u: goto label_1d3af8;
        case 0x1d3afcu: goto label_1d3afc;
        case 0x1d3b00u: goto label_1d3b00;
        case 0x1d3b04u: goto label_1d3b04;
        case 0x1d3b08u: goto label_1d3b08;
        case 0x1d3b0cu: goto label_1d3b0c;
        case 0x1d3b10u: goto label_1d3b10;
        case 0x1d3b14u: goto label_1d3b14;
        case 0x1d3b18u: goto label_1d3b18;
        case 0x1d3b1cu: goto label_1d3b1c;
        case 0x1d3b20u: goto label_1d3b20;
        case 0x1d3b24u: goto label_1d3b24;
        case 0x1d3b28u: goto label_1d3b28;
        case 0x1d3b2cu: goto label_1d3b2c;
        default: break;
    }

    ctx->pc = 0x1d3aa8u;

label_1d3aa8:
    // 0x1d3aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d3aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d3aac:
    // 0x1d3aac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d3aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d3ab0:
    // 0x1d3ab0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d3ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d3ab4:
    // 0x1d3ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d3ab8:
    // 0x1d3ab8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1d3ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d3abc:
    // 0x1d3abc: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1d3abcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1d3ac0:
    // 0x1d3ac0: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1d3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1d3ac4:
    // 0x1d3ac4: 0x40f809  jalr        $v0
label_1d3ac8:
    if (ctx->pc == 0x1D3AC8u) {
        ctx->pc = 0x1D3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AC4u;
        // 0x1d3ac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3ACCu;
        goto label_1d3acc;
    }
    ctx->pc = 0x1D3AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D3ACCu);
        ctx->pc = 0x1D3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AC4u;
        // 0x1d3ac8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3AC4u, 0x1D3ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D3ACCu;
label_1d3acc:
    // 0x1d3acc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1d3ad0:
    if (ctx->pc == 0x1D3AD0u) {
        ctx->pc = 0x1D3AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3ACCu;
        // 0x1d3ad0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AD4u;
        goto label_1d3ad4;
    }
    ctx->pc = 0x1D3ACCu;
    {
        const bool branch_taken_0x1d3acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3acc) {
            ctx->pc = 0x1D3AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3ACCu;
            // 0x1d3ad0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B20u;
            goto label_1d3b20;
        }
    }
    ctx->pc = 0x1D3AD4u;
label_1d3ad4:
    // 0x1d3ad4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d3ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d3ad8:
    // 0x1d3ad8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1d3adc:
    if (ctx->pc == 0x1D3ADCu) {
        ctx->pc = 0x1D3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AD8u;
        // 0x1d3adc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AE0u;
        goto label_1d3ae0;
    }
    ctx->pc = 0x1D3AD8u;
    {
        const bool branch_taken_0x1d3ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ad8) {
            ctx->pc = 0x1D3ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3AD8u;
            // 0x1d3adc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B20u;
            goto label_1d3b20;
        }
    }
    ctx->pc = 0x1D3AE0u;
label_1d3ae0:
    // 0x1d3ae0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d3ae4:
    // 0x1d3ae4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1d3ae8:
    if (ctx->pc == 0x1D3AE8u) {
        ctx->pc = 0x1D3AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AE4u;
        // 0x1d3ae8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AECu;
        goto label_1d3aec;
    }
    ctx->pc = 0x1D3AE4u;
    {
        const bool branch_taken_0x1d3ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3ae4) {
            ctx->pc = 0x1D3AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3AE4u;
            // 0x1d3ae8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3B20u;
            goto label_1d3b20;
        }
    }
    ctx->pc = 0x1D3AECu;
label_1d3aec:
    // 0x1d3aec: 0xc068998  jal         func_1A2660
label_1d3af0:
    if (ctx->pc == 0x1D3AF0u) {
        ctx->pc = 0x1D3AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AECu;
        // 0x1d3af0: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AF4u;
        goto label_1d3af4;
    }
    ctx->pc = 0x1D3AECu;
    SET_GPR_U32(ctx, 31, 0x1D3AF4u);
    ctx->pc = 0x1D3AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AECu;
    // 0x1d3af0: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1D3AECu, 0x1D3AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AF4u;
label_1d3af4:
    // 0x1d3af4: 0xc068998  jal         func_1A2660
label_1d3af8:
    if (ctx->pc == 0x1D3AF8u) {
        ctx->pc = 0x1D3AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AF4u;
        // 0x1d3af8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3AFCu;
        goto label_1d3afc;
    }
    ctx->pc = 0x1D3AF4u;
    SET_GPR_U32(ctx, 31, 0x1D3AFCu);
    ctx->pc = 0x1D3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AF4u;
    // 0x1d3af8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1D3AF4u, 0x1D3AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3AFCu;
label_1d3afc:
    // 0x1d3afc: 0xc068998  jal         func_1A2660
label_1d3b00:
    if (ctx->pc == 0x1D3B00u) {
        ctx->pc = 0x1D3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3AFCu;
        // 0x1d3b00: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B04u;
        goto label_1d3b04;
    }
    ctx->pc = 0x1D3AFCu;
    SET_GPR_U32(ctx, 31, 0x1D3B04u);
    ctx->pc = 0x1D3B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3AFCu;
    // 0x1d3b00: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2660u, 0x1D3AFCu, 0x1D3B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B04u;
label_1d3b04:
    // 0x1d3b04: 0xc0734a2  jal         func_1CD288
label_1d3b08:
    if (ctx->pc == 0x1D3B08u) {
        ctx->pc = 0x1D3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B04u;
        // 0x1d3b08: 0x26040380  addiu       $a0, $s0, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B0Cu;
        goto label_1d3b0c;
    }
    ctx->pc = 0x1D3B04u;
    SET_GPR_U32(ctx, 31, 0x1D3B0Cu);
    ctx->pc = 0x1D3B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B04u;
    // 0x1d3b08: 0x26040380  addiu       $a0, $s0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD288u, 0x1D3B04u, 0x1D3B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B0Cu;
label_1d3b0c:
    // 0x1d3b0c: 0xc06ec70  jal         func_1BB1C0
label_1d3b10:
    if (ctx->pc == 0x1D3B10u) {
        ctx->pc = 0x1D3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B0Cu;
        // 0x1d3b10: 0x26040450  addiu       $a0, $s0, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B14u;
        goto label_1d3b14;
    }
    ctx->pc = 0x1D3B0Cu;
    SET_GPR_U32(ctx, 31, 0x1D3B14u);
    ctx->pc = 0x1D3B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B0Cu;
    // 0x1d3b10: 0x26040450  addiu       $a0, $s0, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1D3B0Cu, 0x1D3B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B14u;
label_1d3b14:
    // 0x1d3b14: 0xc06ec70  jal         func_1BB1C0
label_1d3b18:
    if (ctx->pc == 0x1D3B18u) {
        ctx->pc = 0x1D3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B14u;
        // 0x1d3b18: 0x26040640  addiu       $a0, $s0, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B1Cu;
        goto label_1d3b1c;
    }
    ctx->pc = 0x1D3B14u;
    SET_GPR_U32(ctx, 31, 0x1D3B1Cu);
    ctx->pc = 0x1D3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3B14u;
    // 0x1d3b18: 0x26040640  addiu       $a0, $s0, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB1C0u, 0x1D3B14u, 0x1D3B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3B1Cu;
label_1d3b1c:
    // 0x1d3b1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d3b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d3b20:
    // 0x1d3b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d3b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d3b24:
    // 0x1d3b24: 0x3e00008  jr          $ra
label_1d3b28:
    if (ctx->pc == 0x1D3B28u) {
        ctx->pc = 0x1D3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B24u;
        // 0x1d3b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D3B2Cu;
        goto label_1d3b2c;
    }
    ctx->pc = 0x1D3B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3B24u;
        // 0x1d3b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3B2Cu;
label_1d3b2c:
    // 0x1d3b2c: 0x0  nop
    ctx->pc = 0x1d3b2cu;
    // NOP
    ctx->pc = 0x1d3b30u;
}
