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

// Function: sub_002A6BE8
// Address: 0x2a6be8 - 0x2a6c88
void sub_002A6BE8_0x2a6be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A6BE8_0x2a6be8");
#endif

    switch (ctx->pc) {
        case 0x2a6be8u: goto label_2a6be8;
        case 0x2a6becu: goto label_2a6bec;
        case 0x2a6bf0u: goto label_2a6bf0;
        case 0x2a6bf4u: goto label_2a6bf4;
        case 0x2a6bf8u: goto label_2a6bf8;
        case 0x2a6bfcu: goto label_2a6bfc;
        case 0x2a6c00u: goto label_2a6c00;
        case 0x2a6c04u: goto label_2a6c04;
        case 0x2a6c08u: goto label_2a6c08;
        case 0x2a6c0cu: goto label_2a6c0c;
        case 0x2a6c10u: goto label_2a6c10;
        case 0x2a6c14u: goto label_2a6c14;
        case 0x2a6c18u: goto label_2a6c18;
        case 0x2a6c1cu: goto label_2a6c1c;
        case 0x2a6c20u: goto label_2a6c20;
        case 0x2a6c24u: goto label_2a6c24;
        case 0x2a6c28u: goto label_2a6c28;
        case 0x2a6c2cu: goto label_2a6c2c;
        case 0x2a6c30u: goto label_2a6c30;
        case 0x2a6c34u: goto label_2a6c34;
        case 0x2a6c38u: goto label_2a6c38;
        case 0x2a6c3cu: goto label_2a6c3c;
        case 0x2a6c40u: goto label_2a6c40;
        case 0x2a6c44u: goto label_2a6c44;
        case 0x2a6c48u: goto label_2a6c48;
        case 0x2a6c4cu: goto label_2a6c4c;
        case 0x2a6c50u: goto label_2a6c50;
        case 0x2a6c54u: goto label_2a6c54;
        case 0x2a6c58u: goto label_2a6c58;
        case 0x2a6c5cu: goto label_2a6c5c;
        case 0x2a6c60u: goto label_2a6c60;
        case 0x2a6c64u: goto label_2a6c64;
        case 0x2a6c68u: goto label_2a6c68;
        case 0x2a6c6cu: goto label_2a6c6c;
        case 0x2a6c70u: goto label_2a6c70;
        case 0x2a6c74u: goto label_2a6c74;
        case 0x2a6c78u: goto label_2a6c78;
        case 0x2a6c7cu: goto label_2a6c7c;
        case 0x2a6c80u: goto label_2a6c80;
        case 0x2a6c84u: goto label_2a6c84;
        default: break;
    }

    ctx->pc = 0x2a6be8u;

label_2a6be8:
    // 0x2a6be8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a6be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a6bec:
    // 0x2a6bec: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a6becu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2a6bf0:
    // 0x2a6bf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a6bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2a6bf4:
    // 0x2a6bf4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2a6bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2a6bf8:
    // 0x2a6bf8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2a6bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_2a6bfc:
    // 0x2a6bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a6bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6c00:
    // 0x2a6c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a6c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2a6c04:
    // 0x2a6c04: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x2a6c04u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
label_2a6c08:
    // 0x2a6c08: 0x2463f8b0  addiu       $v1, $v1, -0x750
    ctx->pc = 0x2a6c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965424));
label_2a6c0c:
    // 0x2a6c0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a6c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2a6c10:
    // 0x2a6c10: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2a6c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2a6c14:
    // 0x2a6c14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a6c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a6c18:
    // 0x2a6c18: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2a6c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2a6c1c:
    // 0x2a6c1c: 0xae080024  sw          $t0, 0x24($s0)
    ctx->pc = 0x2a6c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
label_2a6c20:
    // 0x2a6c20: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x2a6c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
label_2a6c24:
    // 0x2a6c24: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2a6c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_2a6c28:
    // 0x2a6c28: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x2a6c28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
label_2a6c2c:
    // 0x2a6c2c: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x2a6c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
label_2a6c30:
    // 0x2a6c30: 0xa6070022  sh          $a3, 0x22($s0)
    ctx->pc = 0x2a6c30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 7));
label_2a6c34:
    // 0x2a6c34: 0x14e40004  bne         $a3, $a0, . + 4 + (0x4 << 2)
label_2a6c38:
    if (ctx->pc == 0x2A6C38u) {
        ctx->pc = 0x2A6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C34u;
        // 0x2a6c38: 0xa6000028  sh          $zero, 0x28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C3Cu;
        goto label_2a6c3c;
    }
    ctx->pc = 0x2A6C34u;
    {
        const bool branch_taken_0x2a6c34 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A6C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C34u;
        // 0x2a6c38: 0xa6000028  sh          $zero, 0x28($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 40), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c34) {
            ctx->pc = 0x2A6C48u;
            goto label_2a6c48;
        }
    }
    ctx->pc = 0x2A6C3Cu;
label_2a6c3c:
    // 0x2a6c3c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a6c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a6c40:
    // 0x2a6c40: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a6c44:
    if (ctx->pc == 0x2A6C44u) {
        ctx->pc = 0x2A6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C40u;
        // 0x2a6c44: 0xa6020020  sh          $v0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C48u;
        goto label_2a6c48;
    }
    ctx->pc = 0x2A6C40u;
    {
        const bool branch_taken_0x2a6c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C40u;
        // 0x2a6c44: 0xa6020020  sh          $v0, 0x20($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6c40) {
            ctx->pc = 0x2A6C4Cu;
            goto label_2a6c4c;
        }
    }
    ctx->pc = 0x2A6C48u;
label_2a6c48:
    // 0x2a6c48: 0xa6000020  sh          $zero, 0x20($s0)
    ctx->pc = 0x2a6c48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 0));
label_2a6c4c:
    // 0x2a6c4c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2a6c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6c50:
    // 0x2a6c50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2a6c54:
    // 0x2a6c54: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6c54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6c58:
    // 0x2a6c58: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6c5c:
    // 0x2a6c5c: 0x40f809  jalr        $v0
label_2a6c60:
    if (ctx->pc == 0x2A6C60u) {
        ctx->pc = 0x2A6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C5Cu;
        // 0x2a6c60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C64u;
        goto label_2a6c64;
    }
    ctx->pc = 0x2A6C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6C64u);
        ctx->pc = 0x2A6C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C5Cu;
        // 0x2a6c60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C5Cu, 0x2A6C64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6C64u;
label_2a6c64:
    // 0x2a6c64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6c68:
    // 0x2a6c68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a6c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6c6c:
    // 0x2a6c6c: 0xc08e1a4  jal         func_238690
label_2a6c70:
    if (ctx->pc == 0x2A6C70u) {
        ctx->pc = 0x2A6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C6Cu;
        // 0x2a6c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C74u;
        goto label_2a6c74;
    }
    ctx->pc = 0x2A6C6Cu;
    SET_GPR_U32(ctx, 31, 0x2A6C74u);
    ctx->pc = 0x2A6C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6C6Cu;
    // 0x2a6c70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238690u, 0x2A6C6Cu, 0x2A6C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6C74u;
label_2a6c74:
    // 0x2a6c74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a6c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6c78:
    // 0x2a6c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a6c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a6c7c:
    // 0x2a6c7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a6c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a6c80:
    // 0x2a6c80: 0x3e00008  jr          $ra
label_2a6c84:
    if (ctx->pc == 0x2A6C84u) {
        ctx->pc = 0x2A6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C80u;
        // 0x2a6c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6C88u;
        goto label_fallthrough_0x2a6c80;
    }
    ctx->pc = 0x2A6C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6C80u;
        // 0x2a6c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a6c80:
    ctx->pc = 0x2A6C88u;
}
