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

// Function: sub_00471AE0
// Address: 0x471ae0 - 0x471b68
void sub_00471AE0_0x471ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471AE0_0x471ae0");
#endif

    switch (ctx->pc) {
        case 0x471ae0u: goto label_471ae0;
        case 0x471ae4u: goto label_471ae4;
        case 0x471ae8u: goto label_471ae8;
        case 0x471aecu: goto label_471aec;
        case 0x471af0u: goto label_471af0;
        case 0x471af4u: goto label_471af4;
        case 0x471af8u: goto label_471af8;
        case 0x471afcu: goto label_471afc;
        case 0x471b00u: goto label_471b00;
        case 0x471b04u: goto label_471b04;
        case 0x471b08u: goto label_471b08;
        case 0x471b0cu: goto label_471b0c;
        case 0x471b10u: goto label_471b10;
        case 0x471b14u: goto label_471b14;
        case 0x471b18u: goto label_471b18;
        case 0x471b1cu: goto label_471b1c;
        case 0x471b20u: goto label_471b20;
        case 0x471b24u: goto label_471b24;
        case 0x471b28u: goto label_471b28;
        case 0x471b2cu: goto label_471b2c;
        case 0x471b30u: goto label_471b30;
        case 0x471b34u: goto label_471b34;
        case 0x471b38u: goto label_471b38;
        case 0x471b3cu: goto label_471b3c;
        case 0x471b40u: goto label_471b40;
        case 0x471b44u: goto label_471b44;
        case 0x471b48u: goto label_471b48;
        case 0x471b4cu: goto label_471b4c;
        case 0x471b50u: goto label_471b50;
        case 0x471b54u: goto label_471b54;
        case 0x471b58u: goto label_471b58;
        case 0x471b5cu: goto label_471b5c;
        case 0x471b60u: goto label_471b60;
        case 0x471b64u: goto label_471b64;
        default: break;
    }

    ctx->pc = 0x471ae0u;

label_471ae0:
    // 0x471ae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x471ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_471ae4:
    // 0x471ae4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x471ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_471ae8:
    // 0x471ae8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x471ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_471aec:
    // 0x471aec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x471aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_471af0:
    // 0x471af0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x471af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_471af4:
    // 0x471af4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x471af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_471af8:
    // 0x471af8: 0x2651002c  addiu       $s1, $s2, 0x2C
    ctx->pc = 0x471af8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_471afc:
    // 0x471afc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x471afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_471b00:
    // 0x471b00: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x471b00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_471b04:
    // 0x471b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x471b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_471b08:
    // 0x471b08: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x471b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_471b0c:
    // 0x471b0c: 0x1091000d  beq         $a0, $s1, . + 4 + (0xD << 2)
label_471b10:
    if (ctx->pc == 0x471B10u) {
        ctx->pc = 0x471B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B0Cu;
        // 0x471b10: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471B14u;
        goto label_471b14;
    }
    ctx->pc = 0x471B0Cu;
    {
        const bool branch_taken_0x471b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x471B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B0Cu;
        // 0x471b10: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471b0c) {
            ctx->pc = 0x471B44u;
            goto label_471b44;
        }
    }
    ctx->pc = 0x471B14u;
label_471b14:
    // 0x471b14: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x471b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_471b18:
    // 0x471b18: 0x5222000b  beql        $s1, $v0, . + 4 + (0xB << 2)
label_471b1c:
    if (ctx->pc == 0x471B1Cu) {
        ctx->pc = 0x471B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B18u;
        // 0x471b1c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471B20u;
        goto label_471b20;
    }
    ctx->pc = 0x471B18u;
    {
        const bool branch_taken_0x471b18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x471b18) {
            ctx->pc = 0x471B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471B18u;
            // 0x471b1c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471B48u;
            goto label_471b48;
        }
    }
    ctx->pc = 0x471B20u;
label_471b20:
    // 0x471b20: 0x2444ffe0  addiu       $a0, $v0, -0x20
    ctx->pc = 0x471b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_471b24:
    // 0x471b24: 0x0  nop
    ctx->pc = 0x471b24u;
    // NOP
label_471b28:
    // 0x471b28: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x471b28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471b2c:
    // 0x471b2c: 0x280f809  jalr        $s4
label_471b30:
    if (ctx->pc == 0x471B30u) {
        ctx->pc = 0x471B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B2Cu;
        // 0x471b30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471B34u;
        goto label_471b34;
    }
    ctx->pc = 0x471B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x471B34u);
        ctx->pc = 0x471B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B2Cu;
        // 0x471b30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471B2Cu, 0x471B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471B34u;
label_471b34:
    // 0x471b34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_471b38:
    if (ctx->pc == 0x471B38u) {
        ctx->pc = 0x471B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B34u;
        // 0x471b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471B3Cu;
        goto label_471b3c;
    }
    ctx->pc = 0x471B34u;
    {
        const bool branch_taken_0x471b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B34u;
        // 0x471b38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471b34) {
            ctx->pc = 0x471B44u;
            goto label_471b44;
        }
    }
    ctx->pc = 0x471B3Cu;
label_471b3c:
    // 0x471b3c: 0x1622fffa  bne         $s1, $v0, . + 4 + (-0x6 << 2)
label_471b40:
    if (ctx->pc == 0x471B40u) {
        ctx->pc = 0x471B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B3Cu;
        // 0x471b40: 0x2444ffe0  addiu       $a0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471B44u;
        goto label_471b44;
    }
    ctx->pc = 0x471B3Cu;
    {
        const bool branch_taken_0x471b3c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x471B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B3Cu;
        // 0x471b40: 0x2444ffe0  addiu       $a0, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471b3c) {
            ctx->pc = 0x471B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471b28;
        }
    }
    ctx->pc = 0x471B44u;
label_471b44:
    // 0x471b44: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x471b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_471b48:
    // 0x471b48: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x471b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_471b4c:
    // 0x471b4c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x471b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_471b50:
    // 0x471b50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x471b50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_471b54:
    // 0x471b54: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x471b54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_471b58:
    // 0x471b58: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x471b58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_471b5c:
    // 0x471b5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x471b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_471b60:
    // 0x471b60: 0x3e00008  jr          $ra
label_471b64:
    if (ctx->pc == 0x471B64u) {
        ctx->pc = 0x471B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B60u;
        // 0x471b64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471B68u;
        goto label_fallthrough_0x471b60;
    }
    ctx->pc = 0x471B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471B60u;
        // 0x471b64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x471b60:
    ctx->pc = 0x471B68u;
}
