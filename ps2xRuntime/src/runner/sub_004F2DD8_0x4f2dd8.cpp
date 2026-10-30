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

// Function: sub_004F2DD8
// Address: 0x4f2dd8 - 0x4f2e50
void sub_004F2DD8_0x4f2dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2DD8_0x4f2dd8");
#endif

    switch (ctx->pc) {
        case 0x4f2dd8u: goto label_4f2dd8;
        case 0x4f2ddcu: goto label_4f2ddc;
        case 0x4f2de0u: goto label_4f2de0;
        case 0x4f2de4u: goto label_4f2de4;
        case 0x4f2de8u: goto label_4f2de8;
        case 0x4f2decu: goto label_4f2dec;
        case 0x4f2df0u: goto label_4f2df0;
        case 0x4f2df4u: goto label_4f2df4;
        case 0x4f2df8u: goto label_4f2df8;
        case 0x4f2dfcu: goto label_4f2dfc;
        case 0x4f2e00u: goto label_4f2e00;
        case 0x4f2e04u: goto label_4f2e04;
        case 0x4f2e08u: goto label_4f2e08;
        case 0x4f2e0cu: goto label_4f2e0c;
        case 0x4f2e10u: goto label_4f2e10;
        case 0x4f2e14u: goto label_4f2e14;
        case 0x4f2e18u: goto label_4f2e18;
        case 0x4f2e1cu: goto label_4f2e1c;
        case 0x4f2e20u: goto label_4f2e20;
        case 0x4f2e24u: goto label_4f2e24;
        case 0x4f2e28u: goto label_4f2e28;
        case 0x4f2e2cu: goto label_4f2e2c;
        case 0x4f2e30u: goto label_4f2e30;
        case 0x4f2e34u: goto label_4f2e34;
        case 0x4f2e38u: goto label_4f2e38;
        case 0x4f2e3cu: goto label_4f2e3c;
        case 0x4f2e40u: goto label_4f2e40;
        case 0x4f2e44u: goto label_4f2e44;
        case 0x4f2e48u: goto label_4f2e48;
        case 0x4f2e4cu: goto label_4f2e4c;
        default: break;
    }

    ctx->pc = 0x4f2dd8u;

label_4f2dd8:
    // 0x4f2dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f2dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f2ddc:
    // 0x4f2ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f2ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f2de0:
    // 0x4f2de0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f2de4:
    // 0x4f2de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f2de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2de8:
    // 0x4f2de8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f2de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f2dec:
    // 0x4f2dec: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f2decu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f2df0:
    // 0x4f2df0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f2df4:
    // 0x4f2df4: 0x40f809  jalr        $v0
label_4f2df8:
    if (ctx->pc == 0x4F2DF8u) {
        ctx->pc = 0x4F2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2DF4u;
        // 0x4f2df8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2DFCu;
        goto label_4f2dfc;
    }
    ctx->pc = 0x4F2DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F2DFCu);
        ctx->pc = 0x4F2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2DF4u;
        // 0x4f2df8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2DF4u, 0x4F2DFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2DFCu;
label_4f2dfc:
    // 0x4f2dfc: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_4f2e00:
    if (ctx->pc == 0x4F2E00u) {
        ctx->pc = 0x4F2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2DFCu;
        // 0x4f2e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2E04u;
        goto label_4f2e04;
    }
    ctx->pc = 0x4F2DFCu;
    {
        const bool branch_taken_0x4f2dfc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x4F2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2DFCu;
        // 0x4f2e00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2dfc) {
            ctx->pc = 0x4F2E40u;
            goto label_4f2e40;
        }
    }
    ctx->pc = 0x4F2E04u;
label_4f2e04:
    // 0x4f2e04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4f2e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4f2e08:
    // 0x4f2e08: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4f2e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f2e0c:
    // 0x4f2e0c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4f2e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f2e10:
    // 0x4f2e10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4f2e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4f2e14:
    // 0x4f2e14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f2e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f2e18:
    // 0x4f2e18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4f2e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f2e1c:
    // 0x4f2e1c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4f2e20:
    if (ctx->pc == 0x4F2E20u) {
        ctx->pc = 0x4F2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E1Cu;
        // 0x4f2e20: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2E24u;
        goto label_4f2e24;
    }
    ctx->pc = 0x4F2E1Cu;
    {
        const bool branch_taken_0x4f2e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E1Cu;
        // 0x4f2e20: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2e1c) {
            ctx->pc = 0x4F2E3Cu;
            goto label_4f2e3c;
        }
    }
    ctx->pc = 0x4F2E24u;
label_4f2e24:
    // 0x4f2e24: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f2e28:
    // 0x4f2e28: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4f2e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4f2e2c:
    // 0x4f2e2c: 0x24424ed0  addiu       $v0, $v0, 0x4ED0
    ctx->pc = 0x4f2e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20176));
label_4f2e30:
    // 0x4f2e30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4f2e34:
    // 0x4f2e34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4f2e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4f2e38:
    // 0x4f2e38: 0xac8300e0  sw          $v1, 0xE0($a0)
    ctx->pc = 0x4f2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
label_4f2e3c:
    // 0x4f2e3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4f2e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2e40:
    // 0x4f2e40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f2e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f2e44:
    // 0x4f2e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f2e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f2e48:
    // 0x4f2e48: 0x3e00008  jr          $ra
label_4f2e4c:
    if (ctx->pc == 0x4F2E4Cu) {
        ctx->pc = 0x4F2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E48u;
        // 0x4f2e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2E50u;
        goto label_fallthrough_0x4f2e48;
    }
    ctx->pc = 0x4F2E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2E48u;
        // 0x4f2e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f2e48:
    ctx->pc = 0x4F2E50u;
}
