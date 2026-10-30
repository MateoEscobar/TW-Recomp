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

// Function: sub_0020BBE0
// Address: 0x20bbe0 - 0x20bc80
void sub_0020BBE0_0x20bbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BBE0_0x20bbe0");
#endif

    switch (ctx->pc) {
        case 0x20bbe0u: goto label_20bbe0;
        case 0x20bbe4u: goto label_20bbe4;
        case 0x20bbe8u: goto label_20bbe8;
        case 0x20bbecu: goto label_20bbec;
        case 0x20bbf0u: goto label_20bbf0;
        case 0x20bbf4u: goto label_20bbf4;
        case 0x20bbf8u: goto label_20bbf8;
        case 0x20bbfcu: goto label_20bbfc;
        case 0x20bc00u: goto label_20bc00;
        case 0x20bc04u: goto label_20bc04;
        case 0x20bc08u: goto label_20bc08;
        case 0x20bc0cu: goto label_20bc0c;
        case 0x20bc10u: goto label_20bc10;
        case 0x20bc14u: goto label_20bc14;
        case 0x20bc18u: goto label_20bc18;
        case 0x20bc1cu: goto label_20bc1c;
        case 0x20bc20u: goto label_20bc20;
        case 0x20bc24u: goto label_20bc24;
        case 0x20bc28u: goto label_20bc28;
        case 0x20bc2cu: goto label_20bc2c;
        case 0x20bc30u: goto label_20bc30;
        case 0x20bc34u: goto label_20bc34;
        case 0x20bc38u: goto label_20bc38;
        case 0x20bc3cu: goto label_20bc3c;
        case 0x20bc40u: goto label_20bc40;
        case 0x20bc44u: goto label_20bc44;
        case 0x20bc48u: goto label_20bc48;
        case 0x20bc4cu: goto label_20bc4c;
        case 0x20bc50u: goto label_20bc50;
        case 0x20bc54u: goto label_20bc54;
        case 0x20bc58u: goto label_20bc58;
        case 0x20bc5cu: goto label_20bc5c;
        case 0x20bc60u: goto label_20bc60;
        case 0x20bc64u: goto label_20bc64;
        case 0x20bc68u: goto label_20bc68;
        case 0x20bc6cu: goto label_20bc6c;
        case 0x20bc70u: goto label_20bc70;
        case 0x20bc74u: goto label_20bc74;
        case 0x20bc78u: goto label_20bc78;
        case 0x20bc7cu: goto label_20bc7c;
        default: break;
    }

    ctx->pc = 0x20bbe0u;

label_20bbe0:
    // 0x20bbe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20bbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20bbe4:
    // 0x20bbe4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20bbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20bbe8:
    // 0x20bbe8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20bbec:
    // 0x20bbec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20bbecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20bbf0:
    // 0x20bbf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20bbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20bbf4:
    // 0x20bbf4: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x20bbf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_20bbf8:
    // 0x20bbf8: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x20bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_20bbfc:
    // 0x20bbfc: 0x40f809  jalr        $v0
label_20bc00:
    if (ctx->pc == 0x20BC00u) {
        ctx->pc = 0x20BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBFCu;
        // 0x20bc00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC04u;
        goto label_20bc04;
    }
    ctx->pc = 0x20BBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BC04u);
        ctx->pc = 0x20BC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BBFCu;
        // 0x20bc00: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BBFCu, 0x20BC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BC04u;
label_20bc04:
    // 0x20bc04: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_20bc08:
    if (ctx->pc == 0x20BC08u) {
        ctx->pc = 0x20BC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC04u;
        // 0x20bc08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC0Cu;
        goto label_20bc0c;
    }
    ctx->pc = 0x20BC04u;
    {
        const bool branch_taken_0x20bc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc04) {
            ctx->pc = 0x20BC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BC04u;
            // 0x20bc08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BC74u;
            goto label_20bc74;
        }
    }
    ctx->pc = 0x20BC0Cu;
label_20bc0c:
    // 0x20bc0c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20bc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20bc10:
    // 0x20bc10: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x20bc10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_20bc14:
    // 0x20bc14: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x20bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_20bc18:
    // 0x20bc18: 0x40f809  jalr        $v0
label_20bc1c:
    if (ctx->pc == 0x20BC1Cu) {
        ctx->pc = 0x20BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC18u;
        // 0x20bc1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC20u;
        goto label_20bc20;
    }
    ctx->pc = 0x20BC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20BC20u);
        ctx->pc = 0x20BC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC18u;
        // 0x20bc1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC18u, 0x20BC20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BC20u;
label_20bc20:
    // 0x20bc20: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_20bc24:
    if (ctx->pc == 0x20BC24u) {
        ctx->pc = 0x20BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC20u;
        // 0x20bc24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC28u;
        goto label_20bc28;
    }
    ctx->pc = 0x20BC20u;
    {
        const bool branch_taken_0x20bc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bc20) {
            ctx->pc = 0x20BC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20BC20u;
            // 0x20bc24: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20BC74u;
            goto label_20bc74;
        }
    }
    ctx->pc = 0x20BC28u;
label_20bc28:
    // 0x20bc28: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x20bc28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_20bc2c:
    // 0x20bc2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20bc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20bc30:
    // 0x20bc30: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20bc30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20bc34:
    // 0x20bc34: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20bc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20bc38:
    // 0x20bc38: 0x60f809  jalr        $v1
label_20bc3c:
    if (ctx->pc == 0x20BC3Cu) {
        ctx->pc = 0x20BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC38u;
        // 0x20bc3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC40u;
        goto label_20bc40;
    }
    ctx->pc = 0x20BC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20BC40u);
        ctx->pc = 0x20BC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC38u;
        // 0x20bc3c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC38u, 0x20BC40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BC40u;
label_20bc40:
    // 0x20bc40: 0x8e0500a8  lw          $a1, 0xA8($s0)
    ctx->pc = 0x20bc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_20bc44:
    // 0x20bc44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20bc48:
    // 0x20bc48: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20bc48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20bc4c:
    // 0x20bc4c: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20bc50:
    // 0x20bc50: 0x60f809  jalr        $v1
label_20bc54:
    if (ctx->pc == 0x20BC54u) {
        ctx->pc = 0x20BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC50u;
        // 0x20bc54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC58u;
        goto label_20bc58;
    }
    ctx->pc = 0x20BC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20BC58u);
        ctx->pc = 0x20BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC50u;
        // 0x20bc54: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC50u, 0x20BC58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BC58u;
label_20bc58:
    // 0x20bc58: 0x8e0500a4  lw          $a1, 0xA4($s0)
    ctx->pc = 0x20bc58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_20bc5c:
    // 0x20bc5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x20bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20bc60:
    // 0x20bc60: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20bc60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20bc64:
    // 0x20bc64: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x20bc64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_20bc68:
    // 0x20bc68: 0x60f809  jalr        $v1
label_20bc6c:
    if (ctx->pc == 0x20BC6Cu) {
        ctx->pc = 0x20BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC68u;
        // 0x20bc6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC70u;
        goto label_20bc70;
    }
    ctx->pc = 0x20BC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20BC70u);
        ctx->pc = 0x20BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC68u;
        // 0x20bc6c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC68u, 0x20BC70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20BC70u;
label_20bc70:
    // 0x20bc70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20bc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20bc74:
    // 0x20bc74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20bc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20bc78:
    // 0x20bc78: 0x3e00008  jr          $ra
label_20bc7c:
    if (ctx->pc == 0x20BC7Cu) {
        ctx->pc = 0x20BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC78u;
        // 0x20bc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20BC80u;
        goto label_fallthrough_0x20bc78;
    }
    ctx->pc = 0x20BC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BC78u;
        // 0x20bc7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20bc78:
    ctx->pc = 0x20BC80u;
}
