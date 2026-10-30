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

// Function: sub_00327DA0
// Address: 0x327da0 - 0x327e68
void sub_00327DA0_0x327da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327DA0_0x327da0");
#endif

    switch (ctx->pc) {
        case 0x327df4u: goto label_327df4;
        case 0x327e2cu: goto label_327e2c;
        case 0x327e3cu: goto label_327e3c;
        default: break;
    }

    ctx->pc = 0x327da0u;

    // 0x327da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x327da4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x327da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x327da8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x327da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x327dac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x327dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x327db0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x327db0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x327db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x327db8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x327db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x327dbc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x327DBCu;
    {
        const bool branch_taken_0x327dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x327DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DBCu;
        // 0x327dc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327dbc) {
            ctx->pc = 0x327DD8u;
            goto label_327dd8;
        }
    }
    ctx->pc = 0x327DC4u;
    // 0x327dc4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x327dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x327dc8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x327DC8u;
    {
        const bool branch_taken_0x327dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x327DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DC8u;
        // 0x327dcc: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327dc8) {
            ctx->pc = 0x327DE0u;
            goto label_327de0;
        }
    }
    ctx->pc = 0x327DD0u;
    // 0x327dd0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x327DD0u;
    {
        const bool branch_taken_0x327dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x327dd0) {
            ctx->pc = 0x327DECu;
            goto label_327dec;
        }
    }
    ctx->pc = 0x327DD8u;
label_327dd8:
    // 0x327dd8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x327DD8u;
    {
        const bool branch_taken_0x327dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DD8u;
        // 0x327ddc: 0x8cd10008  lw          $s1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327dd8) {
            ctx->pc = 0x327DF4u;
            goto label_327df4;
        }
    }
    ctx->pc = 0x327DE0u;
label_327de0:
    // 0x327de0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x327de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x327de4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x327DE4u;
    {
        const bool branch_taken_0x327de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DE4u;
        // 0x327de8: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327de4) {
            ctx->pc = 0x327DF4u;
            goto label_327df4;
        }
    }
    ctx->pc = 0x327DECu;
label_327dec:
    // 0x327dec: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x327DECu;
    SET_GPR_U32(ctx, 31, 0x327DF4u);
    ctx->pc = 0x327DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327DECu;
    // 0x327df0: 0x24a55108  addiu       $a1, $a1, 0x5108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x327DECu, 0x327DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327DF4u;
label_327df4:
    // 0x327df4: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x327df4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x327df8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x327DF8u;
    {
        const bool branch_taken_0x327df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DF8u;
        // 0x327dfc: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327df8) {
            ctx->pc = 0x327E20u;
            goto label_327e20;
        }
    }
    ctx->pc = 0x327E00u;
    // 0x327e00: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x327e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x327e04: 0x24425138  addiu       $v0, $v0, 0x5138
    ctx->pc = 0x327e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20792));
    // 0x327e08: 0x24635140  addiu       $v1, $v1, 0x5140
    ctx->pc = 0x327e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20800));
    // 0x327e0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x327e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x327e10: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x327e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x327e14: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x327e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
    // 0x327e18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x327E18u;
    {
        const bool branch_taken_0x327e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E18u;
        // 0x327e1c: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e18) {
            ctx->pc = 0x327E2Cu;
            goto label_327e2c;
        }
    }
    ctx->pc = 0x327E20u;
label_327e20:
    // 0x327e20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x327e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x327e24: 0xc0c9f5e  jal         func_327D78
    ctx->pc = 0x327E24u;
    SET_GPR_U32(ctx, 31, 0x327E2Cu);
    ctx->pc = 0x327E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E24u;
    // 0x327e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327D78u, 0x327E24u, 0x327E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E2Cu;
label_327e2c:
    // 0x327e2c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x327e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x327e30: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x327e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x327e34: 0xc0cb2a2  jal         func_32CA88
    ctx->pc = 0x327E34u;
    SET_GPR_U32(ctx, 31, 0x327E3Cu);
    ctx->pc = 0x327E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E34u;
    // 0x327e38: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CA88u, 0x327E34u, 0x327E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E3Cu;
label_327e3c:
    // 0x327e3c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x327e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x327e40: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x327E40u;
    {
        const bool branch_taken_0x327e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327e40) {
            ctx->pc = 0x327E44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327E40u;
            // 0x327e44: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327E58u;
            goto label_327e58;
        }
    }
    ctx->pc = 0x327E48u;
    // 0x327e48: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x327e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x327e4c: 0x24425148  addiu       $v0, $v0, 0x5148
    ctx->pc = 0x327e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20808));
    // 0x327e50: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x327e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x327e54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x327e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_327e58:
    // 0x327e58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x327e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327e5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x327e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327e60: 0x3e00008  jr          $ra
    ctx->pc = 0x327E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E60u;
        // 0x327e64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327E68u;
}
