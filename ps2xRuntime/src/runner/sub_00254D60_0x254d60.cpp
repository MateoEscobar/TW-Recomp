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

// Function: sub_00254D60
// Address: 0x254d60 - 0x254e20
void sub_00254D60_0x254d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254D60_0x254d60");
#endif

    switch (ctx->pc) {
        case 0x254da0u: goto label_254da0;
        case 0x254da8u: goto label_254da8;
        case 0x254de8u: goto label_254de8;
        default: break;
    }

    ctx->pc = 0x254d60u;

    // 0x254d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254d64: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x254d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x254d68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x254d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x254d6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x254d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x254d70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x254d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x254d74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x254d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d78: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x254d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x254d7c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x254d7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x254d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x254d84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x254d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x254d88: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x254D88u;
    {
        const bool branch_taken_0x254d88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x254D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254D88u;
        // 0x254d8c: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254d88) {
            ctx->pc = 0x254DACu;
            goto label_254dac;
        }
    }
    ctx->pc = 0x254D90u;
    // 0x254d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x254d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254d94: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x254d94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x254d98: 0xc0899b6  jal         func_2266D8
    ctx->pc = 0x254D98u;
    SET_GPR_U32(ctx, 31, 0x254DA0u);
    ctx->pc = 0x254D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254D98u;
    // 0x254d9c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266D8u, 0x254D98u, 0x254DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DA0u;
label_254da0:
    // 0x254da0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x254DA0u;
    SET_GPR_U32(ctx, 31, 0x254DA8u);
    ctx->pc = 0x254DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254DA0u;
    // 0x254da4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x254DA0u, 0x254DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DA8u;
label_254da8:
    // 0x254da8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_254dac:
    // 0x254dac: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x254DACu;
    {
        const bool branch_taken_0x254dac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DACu;
        // 0x254db0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dac) {
            ctx->pc = 0x254E08u;
            goto label_254e08;
        }
    }
    ctx->pc = 0x254DB4u;
    // 0x254db4: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x254db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x254db8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x254DB8u;
    {
        const bool branch_taken_0x254db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DB8u;
        // 0x254dbc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254db8) {
            ctx->pc = 0x254DC8u;
            goto label_254dc8;
        }
    }
    ctx->pc = 0x254DC0u;
    // 0x254dc0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x254DC0u;
    {
        const bool branch_taken_0x254dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DC0u;
        // 0x254dc4: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254dc0) {
            ctx->pc = 0x254E08u;
            goto label_254e08;
        }
    }
    ctx->pc = 0x254DC8u;
label_254dc8:
    // 0x254dc8: 0x8c640160  lw          $a0, 0x160($v1)
    ctx->pc = 0x254dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x254dcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x254dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x254dd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x254dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x254dd4: 0x9443000c  lhu         $v1, 0xC($v0)
    ctx->pc = 0x254dd4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x254dd8: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x254DD8u;
    {
        const bool branch_taken_0x254dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x254dd8) {
            ctx->pc = 0x254DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254DD8u;
            // 0x254ddc: 0x8e0200d4  lw          $v0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x254DF4u;
            goto label_254df4;
        }
    }
    ctx->pc = 0x254DE0u;
    // 0x254de0: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x254DE0u;
    SET_GPR_U32(ctx, 31, 0x254DE8u);
    ctx->pc = 0x254DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254DE0u;
    // 0x254de4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x254DE0u, 0x254DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x254DE8u;
label_254de8:
    // 0x254de8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254DE8u;
    {
        const bool branch_taken_0x254de8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254DE8u;
        // 0x254dec: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254de8) {
            ctx->pc = 0x254E08u;
            goto label_254e08;
        }
    }
    ctx->pc = 0x254DF0u;
    // 0x254df0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x254df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_254df4:
    // 0x254df4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x254df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x254df8: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x254df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x254dfc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x254dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x254e00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x254e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x254e04: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x254e04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
label_254e08:
    // 0x254e08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x254e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254e0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x254e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254e10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x254e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254e14: 0x3e00008  jr          $ra
    ctx->pc = 0x254E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254E14u;
        // 0x254e18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254E1Cu;
    // 0x254e1c: 0x0  nop
    ctx->pc = 0x254e1cu;
    // NOP
    ctx->pc = 0x254e20u;
}
