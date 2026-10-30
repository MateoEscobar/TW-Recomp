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

// Function: sub_004F4AF8
// Address: 0x4f4af8 - 0x4f4b78
void sub_004F4AF8_0x4f4af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F4AF8_0x4f4af8");
#endif

    switch (ctx->pc) {
        case 0x4f4af8u: goto label_4f4af8;
        case 0x4f4afcu: goto label_4f4afc;
        case 0x4f4b00u: goto label_4f4b00;
        case 0x4f4b04u: goto label_4f4b04;
        case 0x4f4b08u: goto label_4f4b08;
        case 0x4f4b0cu: goto label_4f4b0c;
        case 0x4f4b10u: goto label_4f4b10;
        case 0x4f4b14u: goto label_4f4b14;
        case 0x4f4b18u: goto label_4f4b18;
        case 0x4f4b1cu: goto label_4f4b1c;
        case 0x4f4b20u: goto label_4f4b20;
        case 0x4f4b24u: goto label_4f4b24;
        case 0x4f4b28u: goto label_4f4b28;
        case 0x4f4b2cu: goto label_4f4b2c;
        case 0x4f4b30u: goto label_4f4b30;
        case 0x4f4b34u: goto label_4f4b34;
        case 0x4f4b38u: goto label_4f4b38;
        case 0x4f4b3cu: goto label_4f4b3c;
        case 0x4f4b40u: goto label_4f4b40;
        case 0x4f4b44u: goto label_4f4b44;
        case 0x4f4b48u: goto label_4f4b48;
        case 0x4f4b4cu: goto label_4f4b4c;
        case 0x4f4b50u: goto label_4f4b50;
        case 0x4f4b54u: goto label_4f4b54;
        case 0x4f4b58u: goto label_4f4b58;
        case 0x4f4b5cu: goto label_4f4b5c;
        case 0x4f4b60u: goto label_4f4b60;
        case 0x4f4b64u: goto label_4f4b64;
        case 0x4f4b68u: goto label_4f4b68;
        case 0x4f4b6cu: goto label_4f4b6c;
        case 0x4f4b70u: goto label_4f4b70;
        case 0x4f4b74u: goto label_4f4b74;
        default: break;
    }

    ctx->pc = 0x4f4af8u;

label_4f4af8:
    // 0x4f4af8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f4af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f4afc:
    // 0x4f4afc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f4afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f4b00:
    // 0x4f4b00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f4b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f4b04:
    // 0x4f4b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f4b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f4b08:
    // 0x4f4b08: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f4b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f4b0c:
    // 0x4f4b0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f4b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f4b10:
    // 0x4f4b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f4b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f4b14:
    // 0x4f4b14: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f4b18:
    if (ctx->pc == 0x4F4B18u) {
        ctx->pc = 0x4F4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B14u;
        // 0x4f4b18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4B1Cu;
        goto label_4f4b1c;
    }
    ctx->pc = 0x4F4B14u;
    {
        const bool branch_taken_0x4f4b14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F4B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B14u;
        // 0x4f4b18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f4b14) {
            ctx->pc = 0x4F4B5Cu;
            goto label_4f4b5c;
        }
    }
    ctx->pc = 0x4F4B1Cu;
label_4f4b1c:
    // 0x4f4b1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f4b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f4b20:
    // 0x4f4b20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f4b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f4b24:
    // 0x4f4b24: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f4b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f4b28:
    // 0x4f4b28: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f4b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f4b2c:
    // 0x4f4b2c: 0x60f809  jalr        $v1
label_4f4b30:
    if (ctx->pc == 0x4F4B30u) {
        ctx->pc = 0x4F4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B2Cu;
        // 0x4f4b30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4B34u;
        goto label_4f4b34;
    }
    ctx->pc = 0x4F4B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4B34u);
        ctx->pc = 0x4F4B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B2Cu;
        // 0x4f4b30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4B2Cu, 0x4F4B34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4B34u;
label_4f4b34:
    // 0x4f4b34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f4b38:
    // 0x4f4b38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f4b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f4b3c:
    // 0x4f4b3c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f4b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f4b40:
    // 0x4f4b40: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f4b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f4b44:
    // 0x4f4b44: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f4b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f4b48:
    // 0x4f4b48: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f4b4c:
    // 0x4f4b4c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f4b4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f4b50:
    // 0x4f4b50: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f4b54:
    // 0x4f4b54: 0x60f809  jalr        $v1
label_4f4b58:
    if (ctx->pc == 0x4F4B58u) {
        ctx->pc = 0x4F4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B54u;
        // 0x4f4b58: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4B5Cu;
        goto label_4f4b5c;
    }
    ctx->pc = 0x4F4B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F4B5Cu);
        ctx->pc = 0x4F4B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B54u;
        // 0x4f4b58: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4B54u, 0x4F4B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F4B5Cu;
label_4f4b5c:
    // 0x4f4b5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f4b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f4b60:
    // 0x4f4b60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f4b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f4b64:
    // 0x4f4b64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f4b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f4b68:
    // 0x4f4b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f4b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f4b6c:
    // 0x4f4b6c: 0x3e00008  jr          $ra
label_4f4b70:
    if (ctx->pc == 0x4F4B70u) {
        ctx->pc = 0x4F4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B6Cu;
        // 0x4f4b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F4B74u;
        goto label_4f4b74;
    }
    ctx->pc = 0x4F4B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F4B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F4B6Cu;
        // 0x4f4b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F4B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F4B74u;
label_4f4b74:
    // 0x4f4b74: 0x0  nop
    ctx->pc = 0x4f4b74u;
    // NOP
    ctx->pc = 0x4f4b78u;
}
