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

// Function: sub_00206D10
// Address: 0x206d10 - 0x206d88
void sub_00206D10_0x206d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206D10_0x206d10");
#endif

    switch (ctx->pc) {
        case 0x206d10u: goto label_206d10;
        case 0x206d14u: goto label_206d14;
        case 0x206d18u: goto label_206d18;
        case 0x206d1cu: goto label_206d1c;
        case 0x206d20u: goto label_206d20;
        case 0x206d24u: goto label_206d24;
        case 0x206d28u: goto label_206d28;
        case 0x206d2cu: goto label_206d2c;
        case 0x206d30u: goto label_206d30;
        case 0x206d34u: goto label_206d34;
        case 0x206d38u: goto label_206d38;
        case 0x206d3cu: goto label_206d3c;
        case 0x206d40u: goto label_206d40;
        case 0x206d44u: goto label_206d44;
        case 0x206d48u: goto label_206d48;
        case 0x206d4cu: goto label_206d4c;
        case 0x206d50u: goto label_206d50;
        case 0x206d54u: goto label_206d54;
        case 0x206d58u: goto label_206d58;
        case 0x206d5cu: goto label_206d5c;
        case 0x206d60u: goto label_206d60;
        case 0x206d64u: goto label_206d64;
        case 0x206d68u: goto label_206d68;
        case 0x206d6cu: goto label_206d6c;
        case 0x206d70u: goto label_206d70;
        case 0x206d74u: goto label_206d74;
        case 0x206d78u: goto label_206d78;
        case 0x206d7cu: goto label_206d7c;
        case 0x206d80u: goto label_206d80;
        case 0x206d84u: goto label_206d84;
        default: break;
    }

    ctx->pc = 0x206d10u;

label_206d10:
    // 0x206d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_206d14:
    // 0x206d14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x206d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_206d18:
    // 0x206d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_206d1c:
    // 0x206d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206d20:
    // 0x206d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_206d24:
    // 0x206d24: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x206d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_206d28:
    // 0x206d28: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_206d2c:
    if (ctx->pc == 0x206D2Cu) {
        ctx->pc = 0x206D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D28u;
        // 0x206d2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D30u;
        goto label_206d30;
    }
    ctx->pc = 0x206D28u;
    {
        const bool branch_taken_0x206d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D28u;
        // 0x206d2c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d28) {
            ctx->pc = 0x206D6Cu;
            goto label_206d6c;
        }
    }
    ctx->pc = 0x206D30u;
label_206d30:
    // 0x206d30: 0x8e050090  lw          $a1, 0x90($s0)
    ctx->pc = 0x206d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_206d34:
    // 0x206d34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x206d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206d38:
    // 0x206d38: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x206d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_206d3c:
    // 0x206d3c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x206d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_206d40:
    // 0x206d40: 0x40f809  jalr        $v0
label_206d44:
    if (ctx->pc == 0x206D44u) {
        ctx->pc = 0x206D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D40u;
        // 0x206d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D48u;
        goto label_206d48;
    }
    ctx->pc = 0x206D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206D48u);
        ctx->pc = 0x206D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D40u;
        // 0x206d44: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D40u, 0x206D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206D48u;
label_206d48:
    // 0x206d48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_206d4c:
    if (ctx->pc == 0x206D4Cu) {
        ctx->pc = 0x206D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D48u;
        // 0x206d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D50u;
        goto label_206d50;
    }
    ctx->pc = 0x206D48u;
    {
        const bool branch_taken_0x206d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D48u;
        // 0x206d4c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d48) {
            ctx->pc = 0x206D70u;
            goto label_206d70;
        }
    }
    ctx->pc = 0x206D50u;
label_206d50:
    // 0x206d50: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x206d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_206d54:
    // 0x206d54: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x206d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_206d58:
    // 0x206d58: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x206d58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_206d5c:
    // 0x206d5c: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x206d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_206d60:
    // 0x206d60: 0x40f809  jalr        $v0
label_206d64:
    if (ctx->pc == 0x206D64u) {
        ctx->pc = 0x206D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D60u;
        // 0x206d64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D68u;
        goto label_206d68;
    }
    ctx->pc = 0x206D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206D68u);
        ctx->pc = 0x206D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D60u;
        // 0x206d64: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D60u, 0x206D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x206D68u;
label_206d68:
    // 0x206d68: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x206d68u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_206d6c:
    // 0x206d6c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x206d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206d70:
    // 0x206d70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x206d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_206d74:
    // 0x206d74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_206d78:
    // 0x206d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_206d7c:
    // 0x206d7c: 0x3e00008  jr          $ra
label_206d80:
    if (ctx->pc == 0x206D80u) {
        ctx->pc = 0x206D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D7Cu;
        // 0x206d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x206D84u;
        goto label_206d84;
    }
    ctx->pc = 0x206D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206D7Cu;
        // 0x206d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206D84u;
label_206d84:
    // 0x206d84: 0x0  nop
    ctx->pc = 0x206d84u;
    // NOP
    ctx->pc = 0x206d88u;
}
