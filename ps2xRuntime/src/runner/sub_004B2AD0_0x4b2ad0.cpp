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

// Function: sub_004B2AD0
// Address: 0x4b2ad0 - 0x4b2b70
void sub_004B2AD0_0x4b2ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B2AD0_0x4b2ad0");
#endif

    switch (ctx->pc) {
        case 0x4b2ad0u: goto label_4b2ad0;
        case 0x4b2ad4u: goto label_4b2ad4;
        case 0x4b2ad8u: goto label_4b2ad8;
        case 0x4b2adcu: goto label_4b2adc;
        case 0x4b2ae0u: goto label_4b2ae0;
        case 0x4b2ae4u: goto label_4b2ae4;
        case 0x4b2ae8u: goto label_4b2ae8;
        case 0x4b2aecu: goto label_4b2aec;
        case 0x4b2af0u: goto label_4b2af0;
        case 0x4b2af4u: goto label_4b2af4;
        case 0x4b2af8u: goto label_4b2af8;
        case 0x4b2afcu: goto label_4b2afc;
        case 0x4b2b00u: goto label_4b2b00;
        case 0x4b2b04u: goto label_4b2b04;
        case 0x4b2b08u: goto label_4b2b08;
        case 0x4b2b0cu: goto label_4b2b0c;
        case 0x4b2b10u: goto label_4b2b10;
        case 0x4b2b14u: goto label_4b2b14;
        case 0x4b2b18u: goto label_4b2b18;
        case 0x4b2b1cu: goto label_4b2b1c;
        case 0x4b2b20u: goto label_4b2b20;
        case 0x4b2b24u: goto label_4b2b24;
        case 0x4b2b28u: goto label_4b2b28;
        case 0x4b2b2cu: goto label_4b2b2c;
        case 0x4b2b30u: goto label_4b2b30;
        case 0x4b2b34u: goto label_4b2b34;
        case 0x4b2b38u: goto label_4b2b38;
        case 0x4b2b3cu: goto label_4b2b3c;
        case 0x4b2b40u: goto label_4b2b40;
        case 0x4b2b44u: goto label_4b2b44;
        case 0x4b2b48u: goto label_4b2b48;
        case 0x4b2b4cu: goto label_4b2b4c;
        case 0x4b2b50u: goto label_4b2b50;
        case 0x4b2b54u: goto label_4b2b54;
        case 0x4b2b58u: goto label_4b2b58;
        case 0x4b2b5cu: goto label_4b2b5c;
        case 0x4b2b60u: goto label_4b2b60;
        case 0x4b2b64u: goto label_4b2b64;
        case 0x4b2b68u: goto label_4b2b68;
        case 0x4b2b6cu: goto label_4b2b6c;
        default: break;
    }

    ctx->pc = 0x4b2ad0u;

label_4b2ad0:
    // 0x4b2ad0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4b2ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4b2ad4:
    // 0x4b2ad4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x4b2ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_4b2ad8:
    // 0x4b2ad8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4b2ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_4b2adc:
    // 0x4b2adc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4b2adcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4b2ae0:
    // 0x4b2ae0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b2ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_4b2ae4:
    // 0x4b2ae4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4b2ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4b2ae8:
    // 0x4b2ae8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4b2aec:
    // 0x4b2aec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4b2aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4b2af0:
    // 0x4b2af0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b2af0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b2af4:
    // 0x4b2af4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x4b2af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4b2af8:
    // 0x4b2af8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4b2afc:
    if (ctx->pc == 0x4B2AFCu) {
        ctx->pc = 0x4B2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2AF8u;
        // 0x4b2afc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2B00u;
        goto label_4b2b00;
    }
    ctx->pc = 0x4B2AF8u;
    {
        const bool branch_taken_0x4b2af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2AF8u;
        // 0x4b2afc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b2af8) {
            ctx->pc = 0x4B2B34u;
            goto label_4b2b34;
        }
    }
    ctx->pc = 0x4B2B00u;
label_4b2b00:
    // 0x4b2b00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b2b04:
    // 0x4b2b04: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_4b2b08:
    if (ctx->pc == 0x4B2B08u) {
        ctx->pc = 0x4B2B0Cu;
        goto label_4b2b0c;
    }
    ctx->pc = 0x4B2B04u;
    {
        const bool branch_taken_0x4b2b04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b2b04) {
            ctx->pc = 0x4B2B2Cu;
            goto label_4b2b2c;
        }
    }
    ctx->pc = 0x4B2B0Cu;
label_4b2b0c:
    // 0x4b2b0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b2b10:
    // 0x4b2b10: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4b2b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_4b2b14:
    // 0x4b2b14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4b2b18:
    if (ctx->pc == 0x4B2B18u) {
        ctx->pc = 0x4B2B1Cu;
        goto label_4b2b1c;
    }
    ctx->pc = 0x4B2B14u;
    {
        const bool branch_taken_0x4b2b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b2b14) {
            ctx->pc = 0x4B2B2Cu;
            goto label_4b2b2c;
        }
    }
    ctx->pc = 0x4B2B1Cu;
label_4b2b1c:
    // 0x4b2b1c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4b2b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4b2b20:
    // 0x4b2b20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4b2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4b2b24:
    // 0x4b2b24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4b2b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b2b28:
    // 0x4b2b28: 0x222882f  dsubu       $s1, $s1, $v0
    ctx->pc = 0x4b2b28u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
label_4b2b2c:
    // 0x4b2b2c: 0xc12c2a0  jal         func_4B0A80
label_4b2b30:
    if (ctx->pc == 0x4B2B30u) {
        ctx->pc = 0x4B2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B2Cu;
        // 0x4b2b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2B34u;
        goto label_4b2b34;
    }
    ctx->pc = 0x4B2B2Cu;
    SET_GPR_U32(ctx, 31, 0x4B2B34u);
    ctx->pc = 0x4B2B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B2B2Cu;
    // 0x4b2b30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0A80u, 0x4B2B2Cu, 0x4B2B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B2B34u;
label_4b2b34:
    // 0x4b2b34: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x4b2b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b2b38:
    // 0x4b2b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b2b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b2b3c:
    // 0x4b2b3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b2b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b2b40:
    // 0x4b2b40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4b2b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b2b44:
    // 0x4b2b44: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4b2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4b2b48:
    // 0x4b2b48: 0x40f809  jalr        $v0
label_4b2b4c:
    if (ctx->pc == 0x4B2B4Cu) {
        ctx->pc = 0x4B2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B48u;
        // 0x4b2b4c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2B50u;
        goto label_4b2b50;
    }
    ctx->pc = 0x4B2B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4B2B50u);
        ctx->pc = 0x4B2B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B48u;
        // 0x4b2b4c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2B48u, 0x4B2B50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4B2B50u;
label_4b2b50:
    // 0x4b2b50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4b2b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4b2b54:
    // 0x4b2b54: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x4b2b54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b2b58:
    // 0x4b2b58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4b2b58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b2b5c:
    // 0x4b2b5c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4b2b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b2b60:
    // 0x4b2b60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b2b60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4b2b64:
    // 0x4b2b64: 0x3e00008  jr          $ra
label_4b2b68:
    if (ctx->pc == 0x4B2B68u) {
        ctx->pc = 0x4B2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B64u;
        // 0x4b2b68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4B2B6Cu;
        goto label_4b2b6c;
    }
    ctx->pc = 0x4B2B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B2B64u;
        // 0x4b2b68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B2B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B2B6Cu;
label_4b2b6c:
    // 0x4b2b6c: 0x0  nop
    ctx->pc = 0x4b2b6cu;
    // NOP
    ctx->pc = 0x4b2b70u;
}
