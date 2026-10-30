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

// Function: sub_001F8D18
// Address: 0x1f8d18 - 0x1f8d80
void sub_001F8D18_0x1f8d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8D18_0x1f8d18");
#endif

    switch (ctx->pc) {
        case 0x1f8d18u: goto label_1f8d18;
        case 0x1f8d1cu: goto label_1f8d1c;
        case 0x1f8d20u: goto label_1f8d20;
        case 0x1f8d24u: goto label_1f8d24;
        case 0x1f8d28u: goto label_1f8d28;
        case 0x1f8d2cu: goto label_1f8d2c;
        case 0x1f8d30u: goto label_1f8d30;
        case 0x1f8d34u: goto label_1f8d34;
        case 0x1f8d38u: goto label_1f8d38;
        case 0x1f8d3cu: goto label_1f8d3c;
        case 0x1f8d40u: goto label_1f8d40;
        case 0x1f8d44u: goto label_1f8d44;
        case 0x1f8d48u: goto label_1f8d48;
        case 0x1f8d4cu: goto label_1f8d4c;
        case 0x1f8d50u: goto label_1f8d50;
        case 0x1f8d54u: goto label_1f8d54;
        case 0x1f8d58u: goto label_1f8d58;
        case 0x1f8d5cu: goto label_1f8d5c;
        case 0x1f8d60u: goto label_1f8d60;
        case 0x1f8d64u: goto label_1f8d64;
        case 0x1f8d68u: goto label_1f8d68;
        case 0x1f8d6cu: goto label_1f8d6c;
        case 0x1f8d70u: goto label_1f8d70;
        case 0x1f8d74u: goto label_1f8d74;
        case 0x1f8d78u: goto label_1f8d78;
        case 0x1f8d7cu: goto label_1f8d7c;
        default: break;
    }

    ctx->pc = 0x1f8d18u;

label_1f8d18:
    // 0x1f8d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1f8d1c:
    // 0x1f8d1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f8d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f8d20:
    // 0x1f8d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f8d24:
    // 0x1f8d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f8d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f8d28:
    // 0x1f8d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f8d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8d2c:
    // 0x1f8d2c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1f8d30:
    // 0x1f8d30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1f8d34:
    if (ctx->pc == 0x1F8D34u) {
        ctx->pc = 0x1F8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D30u;
        // 0x1f8d34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D38u;
        goto label_1f8d38;
    }
    ctx->pc = 0x1F8D30u;
    {
        const bool branch_taken_0x1f8d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D30u;
        // 0x1f8d34: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d30) {
            ctx->pc = 0x1F8D64u;
            goto label_1f8d64;
        }
    }
    ctx->pc = 0x1F8D38u;
label_1f8d38:
    // 0x1f8d38: 0xc06a3aa  jal         func_1A8EA8
label_1f8d3c:
    if (ctx->pc == 0x1F8D3Cu) {
        ctx->pc = 0x1F8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D38u;
        // 0x1f8d3c: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D40u;
        goto label_1f8d40;
    }
    ctx->pc = 0x1F8D38u;
    SET_GPR_U32(ctx, 31, 0x1F8D40u);
    ctx->pc = 0x1F8D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D38u;
    // 0x1f8d3c: 0x8e050098  lw          $a1, 0x98($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EA8u, 0x1F8D38u, 0x1F8D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8D40u;
label_1f8d40:
    // 0x1f8d40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1f8d44:
    if (ctx->pc == 0x1F8D44u) {
        ctx->pc = 0x1F8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D40u;
        // 0x1f8d44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D48u;
        goto label_1f8d48;
    }
    ctx->pc = 0x1F8D40u;
    {
        const bool branch_taken_0x1f8d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D40u;
        // 0x1f8d44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d40) {
            ctx->pc = 0x1F8D68u;
            goto label_1f8d68;
        }
    }
    ctx->pc = 0x1F8D48u;
label_1f8d48:
    // 0x1f8d48: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x1f8d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_1f8d4c:
    // 0x1f8d4c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1f8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f8d50:
    // 0x1f8d50: 0x84640088  lh          $a0, 0x88($v1)
    ctx->pc = 0x1f8d50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 136)));
label_1f8d54:
    // 0x1f8d54: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x1f8d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_1f8d58:
    // 0x1f8d58: 0x40f809  jalr        $v0
label_1f8d5c:
    if (ctx->pc == 0x1F8D5Cu) {
        ctx->pc = 0x1F8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D58u;
        // 0x1f8d5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D60u;
        goto label_1f8d60;
    }
    ctx->pc = 0x1F8D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8D60u);
        ctx->pc = 0x1F8D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D58u;
        // 0x1f8d5c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8D58u, 0x1F8D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8D60u;
label_1f8d60:
    // 0x1f8d60: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x1f8d60u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f8d64:
    // 0x1f8d64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f8d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f8d68:
    // 0x1f8d68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f8d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f8d6c:
    // 0x1f8d6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f8d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f8d70:
    // 0x1f8d70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f8d74:
    // 0x1f8d74: 0x3e00008  jr          $ra
label_1f8d78:
    if (ctx->pc == 0x1F8D78u) {
        ctx->pc = 0x1F8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D74u;
        // 0x1f8d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8D7Cu;
        goto label_1f8d7c;
    }
    ctx->pc = 0x1F8D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D74u;
        // 0x1f8d78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8D7Cu;
label_1f8d7c:
    // 0x1f8d7c: 0x0  nop
    ctx->pc = 0x1f8d7cu;
    // NOP
    ctx->pc = 0x1f8d80u;
}
