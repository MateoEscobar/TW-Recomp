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

// Function: sub_00426D58
// Address: 0x426d58 - 0x426e28
void sub_00426D58_0x426d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00426D58_0x426d58");
#endif

    switch (ctx->pc) {
        case 0x426da4u: goto label_426da4;
        case 0x426dfcu: goto label_426dfc;
        case 0x426e08u: goto label_426e08;
        default: break;
    }

    ctx->pc = 0x426d58u;

    // 0x426d58: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x426d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x426d5c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x426d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x426d60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x426d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x426d64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x426d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426d68: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x426d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x426d6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x426d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x426d70: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x426D70u;
    {
        const bool branch_taken_0x426d70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x426D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D70u;
        // 0x426d74: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426d70) {
            ctx->pc = 0x426D80u;
            goto label_426d80;
        }
    }
    ctx->pc = 0x426D78u;
    // 0x426d78: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x426D78u;
    {
        const bool branch_taken_0x426d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x426D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D78u;
        // 0x426d7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426d78) {
            ctx->pc = 0x426E08u;
            goto label_426e08;
        }
    }
    ctx->pc = 0x426D80u;
label_426d80:
    // 0x426d80: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x426d80u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x426d84: 0x8e62eb6c  lw          $v0, -0x1494($s3)
    ctx->pc = 0x426d84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6FEB6Cu));
    // 0x426d88: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x426D88u;
    {
        const bool branch_taken_0x426d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x426D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426D88u;
        // 0x426d8c: 0x3c110070  lui         $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x426d88) {
            ctx->pc = 0x426DD0u;
            goto label_426dd0;
        }
    }
    ctx->pc = 0x426D90u;
    // 0x426d90: 0x2630eb58  addiu       $s0, $s1, -0x14A8
    ctx->pc = 0x426d90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962008));
    // 0x426d94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x426d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x426d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426d9c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x426D9Cu;
    SET_GPR_U32(ctx, 31, 0x426DA4u);
    ctx->pc = 0x426DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426D9Cu;
    // 0x426da0: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x426D9Cu, 0x426DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426DA4u;
label_426da4:
    // 0x426da4: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x426da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x426da8: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x426da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x426dac: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x426dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x426db0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x426db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x426db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x426db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x426db8: 0xae25eb58  sw          $a1, -0x14A8($s1)
    ctx->pc = 0x426db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962008), GPR_U32(ctx, 5));
    // 0x426dbc: 0xae62eb6c  sw          $v0, -0x1494($s3)
    ctx->pc = 0x426dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962028), GPR_U32(ctx, 2));
    // 0x426dc0: 0x24846e70  addiu       $a0, $a0, 0x6E70
    ctx->pc = 0x426dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28272));
    // 0x426dc4: 0x34630083  ori         $v1, $v1, 0x83
    ctx->pc = 0x426dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)131);
    // 0x426dc8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x426dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x426dcc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x426dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_426dd0:
    // 0x426dd0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x426dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x426dd4: 0x2623eb58  addiu       $v1, $s1, -0x14A8
    ctx->pc = 0x426dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962008));
    // 0x426dd8: 0x34420083  ori         $v0, $v0, 0x83
    ctx->pc = 0x426dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)131);
    // 0x426ddc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x426ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x426de0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x426de0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x426de4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x426de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x426de8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x426de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x426dec: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x426decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x426df0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x426df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x426df4: 0xc118508  jal         func_461420
    ctx->pc = 0x426DF4u;
    SET_GPR_U32(ctx, 31, 0x426DFCu);
    ctx->pc = 0x426DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426DF4u;
    // 0x426df8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x461420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461420u, 0x426DF4u, 0x426DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426DFCu;
label_426dfc:
    // 0x426dfc: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x426dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x426e00: 0xc11851c  jal         func_461470
    ctx->pc = 0x426E00u;
    SET_GPR_U32(ctx, 31, 0x426E08u);
    ctx->pc = 0x426E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x426E00u;
    // 0x426e04: 0x34840083  ori         $a0, $a0, 0x83 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)131);
    ctx->in_delay_slot = false;
    ctx->pc = 0x461470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461470u, 0x426E00u, 0x426E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x426E08u;
label_426e08:
    // 0x426e08: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x426e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x426e0c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x426e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x426e10: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x426e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x426e14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x426e14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x426e18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x426e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x426e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x426E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x426E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x426E1Cu;
        // 0x426e20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x426E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x426E24u;
    // 0x426e24: 0x0  nop
    ctx->pc = 0x426e24u;
    // NOP
    ctx->pc = 0x426e28u;
}
