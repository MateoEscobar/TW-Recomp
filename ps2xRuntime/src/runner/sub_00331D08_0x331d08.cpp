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

// Function: sub_00331D08
// Address: 0x331d08 - 0x331df8
void sub_00331D08_0x331d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331D08_0x331d08");
#endif

    switch (ctx->pc) {
        case 0x331d38u: goto label_331d38;
        case 0x331d4cu: goto label_331d4c;
        case 0x331d70u: goto label_331d70;
        case 0x331dc0u: goto label_331dc0;
        default: break;
    }

    ctx->pc = 0x331d08u;

    // 0x331d08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x331d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x331d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x331d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331d10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x331d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x331d14: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x331d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x331d18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x331d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d1c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x331d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x331d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x331d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x331d24: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x331d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x331d28: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x331D28u;
    {
        const bool branch_taken_0x331d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x331D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D28u;
        // 0x331d2c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d28) {
            ctx->pc = 0x331D40u;
            goto label_331d40;
        }
    }
    ctx->pc = 0x331D30u;
    // 0x331d30: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x331D30u;
    {
        const bool branch_taken_0x331d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D30u;
        // 0x331d34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d30) {
            ctx->pc = 0x331D94u;
            goto label_331d94;
        }
    }
    ctx->pc = 0x331D38u;
label_331d38:
    // 0x331d38: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x331D38u;
    {
        const bool branch_taken_0x331d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D38u;
        // 0x331d3c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d38) {
            ctx->pc = 0x331DE0u;
            goto label_331de0;
        }
    }
    ctx->pc = 0x331D40u;
label_331d40:
    // 0x331d40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x331d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d44: 0xc0cc728  jal         func_331CA0
    ctx->pc = 0x331D44u;
    SET_GPR_U32(ctx, 31, 0x331D4Cu);
    ctx->pc = 0x331D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331D44u;
    // 0x331d48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331CA0u, 0x331D44u, 0x331D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331D4Cu;
label_331d4c:
    // 0x331d4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x331d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d50: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x331d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x331d54: 0x24425af0  addiu       $v0, $v0, 0x5AF0
    ctx->pc = 0x331d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23280));
    // 0x331d58: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331D58u;
    {
        const bool branch_taken_0x331d58 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x331d58) {
            ctx->pc = 0x331D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331D58u;
            // 0x331d5c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331D74u;
            goto label_331d74;
        }
    }
    ctx->pc = 0x331D60u;
    // 0x331d60: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x331d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x331d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x331d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d68: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x331D68u;
    SET_GPR_U32(ctx, 31, 0x331D70u);
    ctx->pc = 0x331D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331D68u;
    // 0x331d6c: 0x24a56380  addiu       $a1, $a1, 0x6380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x331D68u, 0x331D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331D70u;
label_331d70:
    // 0x331d70: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x331d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_331d74:
    // 0x331d74: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x331d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x331d78: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x331d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x331d7c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x331d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x331d80: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x331D80u;
    {
        const bool branch_taken_0x331d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331d80) {
            ctx->pc = 0x331D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331D80u;
            // 0x331d84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x331D88u;
            goto label_331d88;
        }
    }
    ctx->pc = 0x331D88u;
label_331d88:
    // 0x331d88: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x331d88u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x331d8c: 0x1012  mflo        $v0
    ctx->pc = 0x331d8cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x331d90: 0x24470001  addiu       $a3, $v0, 0x1
    ctx->pc = 0x331d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_331d94:
    // 0x331d94: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x331d94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x331d98: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x331d98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x331d9c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x331D9Cu;
    {
        const bool branch_taken_0x331d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D9Cu;
        // 0x331da0: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d9c) {
            ctx->pc = 0x331DDCu;
            goto label_331ddc;
        }
    }
    ctx->pc = 0x331DA4u;
    // 0x331da4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x331da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331da8: 0xe21018  mult        $v0, $a3, $v0
    ctx->pc = 0x331da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x331dac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x331dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331db0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x331db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331db4: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x331db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x331db8: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x331db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x331dbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x331dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_331dc0:
    // 0x331dc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x331dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x331dc4: 0x1448ffdc  bne         $v0, $t0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x331DC4u;
    {
        const bool branch_taken_0x331dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x331DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331DC4u;
        // 0x331dc8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331dc4) {
            ctx->pc = 0x331D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331d38;
        }
    }
    ctx->pc = 0x331DCCu;
    // 0x331dcc: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x331dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
    // 0x331dd0: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x331dd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x331dd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x331DD4u;
    {
        const bool branch_taken_0x331dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331DD4u;
        // 0x331dd8: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331dd4) {
            ctx->pc = 0x331DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331dc0;
        }
    }
    ctx->pc = 0x331DDCu;
label_331ddc:
    // 0x331ddc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x331ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_331de0:
    // 0x331de0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x331de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331de4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x331de4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331de8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x331de8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x331decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331df0: 0x3e00008  jr          $ra
    ctx->pc = 0x331DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331DF0u;
        // 0x331df4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331DF8u;
}
