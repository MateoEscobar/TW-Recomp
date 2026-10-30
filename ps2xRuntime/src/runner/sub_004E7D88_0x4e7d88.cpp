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

// Function: sub_004E7D88
// Address: 0x4e7d88 - 0x4e7e28
void sub_004E7D88_0x4e7d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7D88_0x4e7d88");
#endif

    switch (ctx->pc) {
        case 0x4e7d88u: goto label_4e7d88;
        case 0x4e7d8cu: goto label_4e7d8c;
        case 0x4e7d90u: goto label_4e7d90;
        case 0x4e7d94u: goto label_4e7d94;
        case 0x4e7d98u: goto label_4e7d98;
        case 0x4e7d9cu: goto label_4e7d9c;
        case 0x4e7da0u: goto label_4e7da0;
        case 0x4e7da4u: goto label_4e7da4;
        case 0x4e7da8u: goto label_4e7da8;
        case 0x4e7dacu: goto label_4e7dac;
        case 0x4e7db0u: goto label_4e7db0;
        case 0x4e7db4u: goto label_4e7db4;
        case 0x4e7db8u: goto label_4e7db8;
        case 0x4e7dbcu: goto label_4e7dbc;
        case 0x4e7dc0u: goto label_4e7dc0;
        case 0x4e7dc4u: goto label_4e7dc4;
        case 0x4e7dc8u: goto label_4e7dc8;
        case 0x4e7dccu: goto label_4e7dcc;
        case 0x4e7dd0u: goto label_4e7dd0;
        case 0x4e7dd4u: goto label_4e7dd4;
        case 0x4e7dd8u: goto label_4e7dd8;
        case 0x4e7ddcu: goto label_4e7ddc;
        case 0x4e7de0u: goto label_4e7de0;
        case 0x4e7de4u: goto label_4e7de4;
        case 0x4e7de8u: goto label_4e7de8;
        case 0x4e7decu: goto label_4e7dec;
        case 0x4e7df0u: goto label_4e7df0;
        case 0x4e7df4u: goto label_4e7df4;
        case 0x4e7df8u: goto label_4e7df8;
        case 0x4e7dfcu: goto label_4e7dfc;
        case 0x4e7e00u: goto label_4e7e00;
        case 0x4e7e04u: goto label_4e7e04;
        case 0x4e7e08u: goto label_4e7e08;
        case 0x4e7e0cu: goto label_4e7e0c;
        case 0x4e7e10u: goto label_4e7e10;
        case 0x4e7e14u: goto label_4e7e14;
        case 0x4e7e18u: goto label_4e7e18;
        case 0x4e7e1cu: goto label_4e7e1c;
        case 0x4e7e20u: goto label_4e7e20;
        case 0x4e7e24u: goto label_4e7e24;
        default: break;
    }

    ctx->pc = 0x4e7d88u;

label_4e7d88:
    // 0x4e7d88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e7d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e7d8c:
    // 0x4e7d8c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e7d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e7d90:
    // 0x4e7d90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e7d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e7d94:
    // 0x4e7d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e7d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7d98:
    // 0x4e7d98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e7d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e7d9c:
    // 0x4e7d9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4e7d9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e7da0:
    // 0x4e7da0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e7da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e7da4:
    // 0x4e7da4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x4e7da4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4e7da8:
    // 0x4e7da8: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_4e7dac:
    if (ctx->pc == 0x4E7DACu) {
        ctx->pc = 0x4E7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7DA8u;
        // 0x4e7dac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7DB0u;
        goto label_4e7db0;
    }
    ctx->pc = 0x4E7DA8u;
    {
        const bool branch_taken_0x4e7da8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7DA8u;
        // 0x4e7dac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7da8) {
            ctx->pc = 0x4E7E08u;
            goto label_4e7e08;
        }
    }
    ctx->pc = 0x4E7DB0u;
label_4e7db0:
    // 0x4e7db0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x4e7db0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_4e7db4:
    // 0x4e7db4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x4e7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_4e7db8:
    // 0x4e7db8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x4e7db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_4e7dbc:
    // 0x4e7dbc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4e7dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4e7dc0:
    // 0x4e7dc0: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x4e7dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_4e7dc4:
    // 0x4e7dc4: 0x24c65580  addiu       $a2, $a2, 0x5580
    ctx->pc = 0x4e7dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21888));
label_4e7dc8:
    // 0x4e7dc8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4e7dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4e7dcc:
    // 0x4e7dcc: 0x24070043  addiu       $a3, $zero, 0x43
    ctx->pc = 0x4e7dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_4e7dd0:
    // 0x4e7dd0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7dd4:
    // 0x4e7dd4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7dd8:
    // 0x4e7dd8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7ddc:
    // 0x4e7ddc: 0x60f809  jalr        $v1
label_4e7de0:
    if (ctx->pc == 0x4E7DE0u) {
        ctx->pc = 0x4E7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7DDCu;
        // 0x4e7de0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7DE4u;
        goto label_4e7de4;
    }
    ctx->pc = 0x4E7DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7DE4u);
        ctx->pc = 0x4E7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7DDCu;
        // 0x4e7de0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7DDCu, 0x4E7DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7DE4u;
label_4e7de4:
    // 0x4e7de4: 0x8e0827e4  lw          $t0, 0x27E4($s0)
    ctx->pc = 0x4e7de4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_4e7de8:
    // 0x4e7de8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4e7de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e7dec:
    // 0x4e7dec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4e7decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e7df0:
    // 0x4e7df0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x4e7df0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e7df4:
    // 0x4e7df4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7df8:
    // 0x4e7df8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7df8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7dfc:
    // 0x4e7dfc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7e00:
    // 0x4e7e00: 0x60f809  jalr        $v1
label_4e7e04:
    if (ctx->pc == 0x4E7E04u) {
        ctx->pc = 0x4E7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E00u;
        // 0x4e7e04: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7E08u;
        goto label_4e7e08;
    }
    ctx->pc = 0x4E7E00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7E08u);
        ctx->pc = 0x4E7E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E00u;
        // 0x4e7e04: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7E00u, 0x4E7E08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7E08u;
label_4e7e08:
    // 0x4e7e08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e7e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e7e0c:
    // 0x4e7e0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e7e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e7e10:
    // 0x4e7e10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e7e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7e14:
    // 0x4e7e14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e7e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7e18:
    // 0x4e7e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e7e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7e1c:
    // 0x4e7e1c: 0x3e00008  jr          $ra
label_4e7e20:
    if (ctx->pc == 0x4E7E20u) {
        ctx->pc = 0x4E7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E1Cu;
        // 0x4e7e20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7E24u;
        goto label_4e7e24;
    }
    ctx->pc = 0x4E7E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7E1Cu;
        // 0x4e7e20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7E24u;
label_4e7e24:
    // 0x4e7e24: 0x0  nop
    ctx->pc = 0x4e7e24u;
    // NOP
    ctx->pc = 0x4e7e28u;
}
