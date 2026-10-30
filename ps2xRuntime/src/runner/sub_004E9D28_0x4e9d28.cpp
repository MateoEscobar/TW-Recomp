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

// Function: sub_004E9D28
// Address: 0x4e9d28 - 0x4e9d98
void sub_004E9D28_0x4e9d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9D28_0x4e9d28");
#endif

    switch (ctx->pc) {
        case 0x4e9d28u: goto label_4e9d28;
        case 0x4e9d2cu: goto label_4e9d2c;
        case 0x4e9d30u: goto label_4e9d30;
        case 0x4e9d34u: goto label_4e9d34;
        case 0x4e9d38u: goto label_4e9d38;
        case 0x4e9d3cu: goto label_4e9d3c;
        case 0x4e9d40u: goto label_4e9d40;
        case 0x4e9d44u: goto label_4e9d44;
        case 0x4e9d48u: goto label_4e9d48;
        case 0x4e9d4cu: goto label_4e9d4c;
        case 0x4e9d50u: goto label_4e9d50;
        case 0x4e9d54u: goto label_4e9d54;
        case 0x4e9d58u: goto label_4e9d58;
        case 0x4e9d5cu: goto label_4e9d5c;
        case 0x4e9d60u: goto label_4e9d60;
        case 0x4e9d64u: goto label_4e9d64;
        case 0x4e9d68u: goto label_4e9d68;
        case 0x4e9d6cu: goto label_4e9d6c;
        case 0x4e9d70u: goto label_4e9d70;
        case 0x4e9d74u: goto label_4e9d74;
        case 0x4e9d78u: goto label_4e9d78;
        case 0x4e9d7cu: goto label_4e9d7c;
        case 0x4e9d80u: goto label_4e9d80;
        case 0x4e9d84u: goto label_4e9d84;
        case 0x4e9d88u: goto label_4e9d88;
        case 0x4e9d8cu: goto label_4e9d8c;
        case 0x4e9d90u: goto label_4e9d90;
        case 0x4e9d94u: goto label_4e9d94;
        default: break;
    }

    ctx->pc = 0x4e9d28u;

label_4e9d28:
    // 0x4e9d28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e9d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e9d2c:
    // 0x4e9d2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e9d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e9d30:
    // 0x4e9d30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e9d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e9d34:
    // 0x4e9d34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9d34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9d38:
    // 0x4e9d38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e9d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e9d3c:
    // 0x4e9d3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e9d3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9d40:
    // 0x4e9d40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9d44:
    // 0x4e9d44: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_4e9d48:
    if (ctx->pc == 0x4E9D48u) {
        ctx->pc = 0x4E9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D44u;
        // 0x4e9d48: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D4Cu;
        goto label_4e9d4c;
    }
    ctx->pc = 0x4E9D44u;
    {
        const bool branch_taken_0x4e9d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D44u;
        // 0x4e9d48: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9d44) {
            ctx->pc = 0x4E9D7Cu;
            goto label_4e9d7c;
        }
    }
    ctx->pc = 0x4E9D4Cu;
label_4e9d4c:
    // 0x4e9d4c: 0xc07afe6  jal         func_1EBF98
label_4e9d50:
    if (ctx->pc == 0x4E9D50u) {
        ctx->pc = 0x4E9D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D4Cu;
        // 0x4e9d50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D54u;
        goto label_4e9d54;
    }
    ctx->pc = 0x4E9D4Cu;
    SET_GPR_U32(ctx, 31, 0x4E9D54u);
    ctx->pc = 0x4E9D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E9D4Cu;
    // 0x4e9d50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EBF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EBF98u, 0x4E9D4Cu, 0x4E9D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E9D54u;
label_4e9d54:
    // 0x4e9d54: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e9d58:
    // 0x4e9d58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e9d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e9d5c:
    // 0x4e9d5c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e9d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e9d60:
    // 0x4e9d60: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e9d60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e9d64:
    // 0x4e9d64: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e9d64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9d68:
    // 0x4e9d68: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9d6c:
    // 0x4e9d6c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9d6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9d70:
    // 0x4e9d70: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9d74:
    // 0x4e9d74: 0x60f809  jalr        $v1
label_4e9d78:
    if (ctx->pc == 0x4E9D78u) {
        ctx->pc = 0x4E9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D74u;
        // 0x4e9d78: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D7Cu;
        goto label_4e9d7c;
    }
    ctx->pc = 0x4E9D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9D7Cu);
        ctx->pc = 0x4E9D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D74u;
        // 0x4e9d78: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9D74u, 0x4E9D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9D7Cu;
label_4e9d7c:
    // 0x4e9d7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e9d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9d80:
    // 0x4e9d80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e9d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9d84:
    // 0x4e9d84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e9d84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9d88:
    // 0x4e9d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9d8c:
    // 0x4e9d8c: 0x3e00008  jr          $ra
label_4e9d90:
    if (ctx->pc == 0x4E9D90u) {
        ctx->pc = 0x4E9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D8Cu;
        // 0x4e9d90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D94u;
        goto label_4e9d94;
    }
    ctx->pc = 0x4E9D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D8Cu;
        // 0x4e9d90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9D94u;
label_4e9d94:
    // 0x4e9d94: 0x0  nop
    ctx->pc = 0x4e9d94u;
    // NOP
    ctx->pc = 0x4e9d98u;
}
