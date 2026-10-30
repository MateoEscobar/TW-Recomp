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

// Function: sub_004E7CE8
// Address: 0x4e7ce8 - 0x4e7d88
void sub_004E7CE8_0x4e7ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7CE8_0x4e7ce8");
#endif

    switch (ctx->pc) {
        case 0x4e7ce8u: goto label_4e7ce8;
        case 0x4e7cecu: goto label_4e7cec;
        case 0x4e7cf0u: goto label_4e7cf0;
        case 0x4e7cf4u: goto label_4e7cf4;
        case 0x4e7cf8u: goto label_4e7cf8;
        case 0x4e7cfcu: goto label_4e7cfc;
        case 0x4e7d00u: goto label_4e7d00;
        case 0x4e7d04u: goto label_4e7d04;
        case 0x4e7d08u: goto label_4e7d08;
        case 0x4e7d0cu: goto label_4e7d0c;
        case 0x4e7d10u: goto label_4e7d10;
        case 0x4e7d14u: goto label_4e7d14;
        case 0x4e7d18u: goto label_4e7d18;
        case 0x4e7d1cu: goto label_4e7d1c;
        case 0x4e7d20u: goto label_4e7d20;
        case 0x4e7d24u: goto label_4e7d24;
        case 0x4e7d28u: goto label_4e7d28;
        case 0x4e7d2cu: goto label_4e7d2c;
        case 0x4e7d30u: goto label_4e7d30;
        case 0x4e7d34u: goto label_4e7d34;
        case 0x4e7d38u: goto label_4e7d38;
        case 0x4e7d3cu: goto label_4e7d3c;
        case 0x4e7d40u: goto label_4e7d40;
        case 0x4e7d44u: goto label_4e7d44;
        case 0x4e7d48u: goto label_4e7d48;
        case 0x4e7d4cu: goto label_4e7d4c;
        case 0x4e7d50u: goto label_4e7d50;
        case 0x4e7d54u: goto label_4e7d54;
        case 0x4e7d58u: goto label_4e7d58;
        case 0x4e7d5cu: goto label_4e7d5c;
        case 0x4e7d60u: goto label_4e7d60;
        case 0x4e7d64u: goto label_4e7d64;
        case 0x4e7d68u: goto label_4e7d68;
        case 0x4e7d6cu: goto label_4e7d6c;
        case 0x4e7d70u: goto label_4e7d70;
        case 0x4e7d74u: goto label_4e7d74;
        case 0x4e7d78u: goto label_4e7d78;
        case 0x4e7d7cu: goto label_4e7d7c;
        case 0x4e7d80u: goto label_4e7d80;
        case 0x4e7d84u: goto label_4e7d84;
        default: break;
    }

    ctx->pc = 0x4e7ce8u;

label_4e7ce8:
    // 0x4e7ce8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e7ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e7cec:
    // 0x4e7cec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e7cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e7cf0:
    // 0x4e7cf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e7cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e7cf4:
    // 0x4e7cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e7cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7cf8:
    // 0x4e7cf8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e7cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e7cfc:
    // 0x4e7cfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e7cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e7d00:
    // 0x4e7d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e7d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e7d04:
    // 0x4e7d04: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_4e7d08:
    if (ctx->pc == 0x4E7D08u) {
        ctx->pc = 0x4E7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D04u;
        // 0x4e7d08: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7D0Cu;
        goto label_4e7d0c;
    }
    ctx->pc = 0x4E7D04u;
    {
        const bool branch_taken_0x4e7d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D04u;
        // 0x4e7d08: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7d04) {
            ctx->pc = 0x4E7D6Cu;
            goto label_4e7d6c;
        }
    }
    ctx->pc = 0x4E7D0Cu;
label_4e7d0c:
    // 0x4e7d0c: 0xc139f14  jal         func_4E7C50
label_4e7d10:
    if (ctx->pc == 0x4E7D10u) {
        ctx->pc = 0x4E7D14u;
        goto label_4e7d14;
    }
    ctx->pc = 0x4E7D0Cu;
    SET_GPR_U32(ctx, 31, 0x4E7D14u);
    ctx->pc = 0x4E7C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E7C50u, 0x4E7D0Cu, 0x4E7D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E7D14u;
label_4e7d14:
    // 0x4e7d14: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4e7d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4e7d18:
    // 0x4e7d18: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4e7d1c:
    if (ctx->pc == 0x4E7D1Cu) {
        ctx->pc = 0x4E7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D18u;
        // 0x4e7d1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7D20u;
        goto label_4e7d20;
    }
    ctx->pc = 0x4E7D18u;
    {
        const bool branch_taken_0x4e7d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D18u;
        // 0x4e7d1c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7d18) {
            ctx->pc = 0x4E7D44u;
            goto label_4e7d44;
        }
    }
    ctx->pc = 0x4E7D20u;
label_4e7d20:
    // 0x4e7d20: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e7d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e7d24:
    // 0x4e7d24: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4e7d24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4e7d28:
    // 0x4e7d28: 0x24c654f8  addiu       $a2, $a2, 0x54F8
    ctx->pc = 0x4e7d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21752));
label_4e7d2c:
    // 0x4e7d2c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e7d2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e7d30:
    // 0x4e7d30: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7d34:
    // 0x4e7d34: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7d34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7d38:
    // 0x4e7d38: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7d3c:
    // 0x4e7d3c: 0x60f809  jalr        $v1
label_4e7d40:
    if (ctx->pc == 0x4E7D40u) {
        ctx->pc = 0x4E7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D3Cu;
        // 0x4e7d40: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7D44u;
        goto label_4e7d44;
    }
    ctx->pc = 0x4E7D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7D44u);
        ctx->pc = 0x4E7D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D3Cu;
        // 0x4e7d40: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7D3Cu, 0x4E7D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7D44u;
label_4e7d44:
    // 0x4e7d44: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e7d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e7d48:
    // 0x4e7d48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e7d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7d4c:
    // 0x4e7d4c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e7d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e7d50:
    // 0x4e7d50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e7d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e7d54:
    // 0x4e7d54: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e7d54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e7d58:
    // 0x4e7d58: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7d5c:
    // 0x4e7d5c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7d5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7d60:
    // 0x4e7d60: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7d64:
    // 0x4e7d64: 0x60f809  jalr        $v1
label_4e7d68:
    if (ctx->pc == 0x4E7D68u) {
        ctx->pc = 0x4E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D64u;
        // 0x4e7d68: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7D6Cu;
        goto label_4e7d6c;
    }
    ctx->pc = 0x4E7D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7D6Cu);
        ctx->pc = 0x4E7D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D64u;
        // 0x4e7d68: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7D64u, 0x4E7D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7D6Cu;
label_4e7d6c:
    // 0x4e7d6c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e7d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e7d70:
    // 0x4e7d70: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e7d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7d74:
    // 0x4e7d74: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e7d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7d78:
    // 0x4e7d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e7d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7d7c:
    // 0x4e7d7c: 0x3e00008  jr          $ra
label_4e7d80:
    if (ctx->pc == 0x4E7D80u) {
        ctx->pc = 0x4E7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D7Cu;
        // 0x4e7d80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7D84u;
        goto label_4e7d84;
    }
    ctx->pc = 0x4E7D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7D7Cu;
        // 0x4e7d80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7D84u;
label_4e7d84:
    // 0x4e7d84: 0x0  nop
    ctx->pc = 0x4e7d84u;
    // NOP
    ctx->pc = 0x4e7d88u;
}
