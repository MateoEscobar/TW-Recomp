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

// Function: sub_004F5D80
// Address: 0x4f5d80 - 0x4f5e00
void sub_004F5D80_0x4f5d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5D80_0x4f5d80");
#endif

    switch (ctx->pc) {
        case 0x4f5d80u: goto label_4f5d80;
        case 0x4f5d84u: goto label_4f5d84;
        case 0x4f5d88u: goto label_4f5d88;
        case 0x4f5d8cu: goto label_4f5d8c;
        case 0x4f5d90u: goto label_4f5d90;
        case 0x4f5d94u: goto label_4f5d94;
        case 0x4f5d98u: goto label_4f5d98;
        case 0x4f5d9cu: goto label_4f5d9c;
        case 0x4f5da0u: goto label_4f5da0;
        case 0x4f5da4u: goto label_4f5da4;
        case 0x4f5da8u: goto label_4f5da8;
        case 0x4f5dacu: goto label_4f5dac;
        case 0x4f5db0u: goto label_4f5db0;
        case 0x4f5db4u: goto label_4f5db4;
        case 0x4f5db8u: goto label_4f5db8;
        case 0x4f5dbcu: goto label_4f5dbc;
        case 0x4f5dc0u: goto label_4f5dc0;
        case 0x4f5dc4u: goto label_4f5dc4;
        case 0x4f5dc8u: goto label_4f5dc8;
        case 0x4f5dccu: goto label_4f5dcc;
        case 0x4f5dd0u: goto label_4f5dd0;
        case 0x4f5dd4u: goto label_4f5dd4;
        case 0x4f5dd8u: goto label_4f5dd8;
        case 0x4f5ddcu: goto label_4f5ddc;
        case 0x4f5de0u: goto label_4f5de0;
        case 0x4f5de4u: goto label_4f5de4;
        case 0x4f5de8u: goto label_4f5de8;
        case 0x4f5decu: goto label_4f5dec;
        case 0x4f5df0u: goto label_4f5df0;
        case 0x4f5df4u: goto label_4f5df4;
        case 0x4f5df8u: goto label_4f5df8;
        case 0x4f5dfcu: goto label_4f5dfc;
        default: break;
    }

    ctx->pc = 0x4f5d80u;

label_4f5d80:
    // 0x4f5d80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4f5d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4f5d84:
    // 0x4f5d84: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4f5d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4f5d88:
    // 0x4f5d88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4f5d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4f5d8c:
    // 0x4f5d8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5d90:
    // 0x4f5d90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4f5d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4f5d94:
    // 0x4f5d94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f5d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f5d98:
    // 0x4f5d98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f5d9c:
    // 0x4f5d9c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4f5da0:
    if (ctx->pc == 0x4F5DA0u) {
        ctx->pc = 0x4F5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5D9Cu;
        // 0x4f5da0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5DA4u;
        goto label_4f5da4;
    }
    ctx->pc = 0x4F5D9Cu;
    {
        const bool branch_taken_0x4f5d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5D9Cu;
        // 0x4f5da0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5d9c) {
            ctx->pc = 0x4F5DE4u;
            goto label_4f5de4;
        }
    }
    ctx->pc = 0x4F5DA4u;
label_4f5da4:
    // 0x4f5da4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4f5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f5da8:
    // 0x4f5da8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4f5da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4f5dac:
    // 0x4f5dac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4f5dacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4f5db0:
    // 0x4f5db0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4f5db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4f5db4:
    // 0x4f5db4: 0x60f809  jalr        $v1
label_4f5db8:
    if (ctx->pc == 0x4F5DB8u) {
        ctx->pc = 0x4F5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5DB4u;
        // 0x4f5db8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5DBCu;
        goto label_4f5dbc;
    }
    ctx->pc = 0x4F5DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F5DBCu);
        ctx->pc = 0x4F5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5DB4u;
        // 0x4f5db8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5DB4u, 0x4F5DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5DBCu;
label_4f5dbc:
    // 0x4f5dbc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4f5dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4f5dc0:
    // 0x4f5dc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4f5dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f5dc4:
    // 0x4f5dc4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4f5dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4f5dc8:
    // 0x4f5dc8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4f5dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4f5dcc:
    // 0x4f5dcc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4f5dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4f5dd0:
    // 0x4f5dd0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f5dd4:
    // 0x4f5dd4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f5dd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f5dd8:
    // 0x4f5dd8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f5dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f5ddc:
    // 0x4f5ddc: 0x60f809  jalr        $v1
label_4f5de0:
    if (ctx->pc == 0x4F5DE0u) {
        ctx->pc = 0x4F5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5DDCu;
        // 0x4f5de0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5DE4u;
        goto label_4f5de4;
    }
    ctx->pc = 0x4F5DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F5DE4u);
        ctx->pc = 0x4F5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5DDCu;
        // 0x4f5de0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5DDCu, 0x4F5DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5DE4u;
label_4f5de4:
    // 0x4f5de4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4f5de4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5de8:
    // 0x4f5de8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4f5de8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f5dec:
    // 0x4f5dec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4f5decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5df0:
    // 0x4f5df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5df4:
    // 0x4f5df4: 0x3e00008  jr          $ra
label_4f5df8:
    if (ctx->pc == 0x4F5DF8u) {
        ctx->pc = 0x4F5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5DF4u;
        // 0x4f5df8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5DFCu;
        goto label_4f5dfc;
    }
    ctx->pc = 0x4F5DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5DF4u;
        // 0x4f5df8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5DFCu;
label_4f5dfc:
    // 0x4f5dfc: 0x0  nop
    ctx->pc = 0x4f5dfcu;
    // NOP
    ctx->pc = 0x4f5e00u;
}
