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

// Function: sub_003C0D98
// Address: 0x3c0d98 - 0x3c0df0
void sub_003C0D98_0x3c0d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0D98_0x3c0d98");
#endif

    switch (ctx->pc) {
        case 0x3c0d98u: goto label_3c0d98;
        case 0x3c0d9cu: goto label_3c0d9c;
        case 0x3c0da0u: goto label_3c0da0;
        case 0x3c0da4u: goto label_3c0da4;
        case 0x3c0da8u: goto label_3c0da8;
        case 0x3c0dacu: goto label_3c0dac;
        case 0x3c0db0u: goto label_3c0db0;
        case 0x3c0db4u: goto label_3c0db4;
        case 0x3c0db8u: goto label_3c0db8;
        case 0x3c0dbcu: goto label_3c0dbc;
        case 0x3c0dc0u: goto label_3c0dc0;
        case 0x3c0dc4u: goto label_3c0dc4;
        case 0x3c0dc8u: goto label_3c0dc8;
        case 0x3c0dccu: goto label_3c0dcc;
        case 0x3c0dd0u: goto label_3c0dd0;
        case 0x3c0dd4u: goto label_3c0dd4;
        case 0x3c0dd8u: goto label_3c0dd8;
        case 0x3c0ddcu: goto label_3c0ddc;
        case 0x3c0de0u: goto label_3c0de0;
        case 0x3c0de4u: goto label_3c0de4;
        case 0x3c0de8u: goto label_3c0de8;
        case 0x3c0decu: goto label_3c0dec;
        default: break;
    }

    ctx->pc = 0x3c0d98u;

label_3c0d98:
    // 0x3c0d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c0d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c0d9c:
    // 0x3c0d9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c0d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c0da0:
    // 0x3c0da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c0da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c0da4:
    // 0x3c0da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c0da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c0da8:
    // 0x3c0da8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3c0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3c0dac:
    // 0x3c0dac: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3c0dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3c0db0:
    // 0x3c0db0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3c0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3c0db4:
    // 0x3c0db4: 0x40f809  jalr        $v0
label_3c0db8:
    if (ctx->pc == 0x3C0DB8u) {
        ctx->pc = 0x3C0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DB4u;
        // 0x3c0db8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0DBCu;
        goto label_3c0dbc;
    }
    ctx->pc = 0x3C0DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0DBCu);
        ctx->pc = 0x3C0DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DB4u;
        // 0x3c0db8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0DB4u, 0x3C0DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0DBCu;
label_3c0dbc:
    // 0x3c0dbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c0dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0dc0:
    // 0x3c0dc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0dc4:
    // 0x3c0dc4: 0x90820011  lbu         $v0, 0x11($a0)
    ctx->pc = 0x3c0dc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
label_3c0dc8:
    // 0x3c0dc8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_3c0dcc:
    if (ctx->pc == 0x3C0DCCu) {
        ctx->pc = 0x3C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DC8u;
        // 0x3c0dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0DD0u;
        goto label_3c0dd0;
    }
    ctx->pc = 0x3C0DC8u;
    {
        const bool branch_taken_0x3c0dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DC8u;
        // 0x3c0dcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0dc8) {
            ctx->pc = 0x3C0DE0u;
            goto label_3c0de0;
        }
    }
    ctx->pc = 0x3C0DD0u;
label_3c0dd0:
    // 0x3c0dd0: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3c0dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3c0dd4:
    // 0x3c0dd4: 0xc0e858c  jal         func_3A1630
label_3c0dd8:
    if (ctx->pc == 0x3C0DD8u) {
        ctx->pc = 0x3C0DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DD4u;
        // 0x3c0dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0DDCu;
        goto label_3c0ddc;
    }
    ctx->pc = 0x3C0DD4u;
    SET_GPR_U32(ctx, 31, 0x3C0DDCu);
    ctx->pc = 0x3C0DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0DD4u;
    // 0x3c0dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3C0DD4u, 0x3C0DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0DDCu;
label_3c0ddc:
    // 0x3c0ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3c0ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0de0:
    // 0x3c0de0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c0de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c0de4:
    // 0x3c0de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c0de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c0de8:
    // 0x3c0de8: 0x3e00008  jr          $ra
label_3c0dec:
    if (ctx->pc == 0x3C0DECu) {
        ctx->pc = 0x3C0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DE8u;
        // 0x3c0dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0DF0u;
        goto label_fallthrough_0x3c0de8;
    }
    ctx->pc = 0x3C0DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DE8u;
        // 0x3c0dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c0de8:
    ctx->pc = 0x3C0DF0u;
}
