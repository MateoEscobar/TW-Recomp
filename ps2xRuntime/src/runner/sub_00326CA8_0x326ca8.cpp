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

// Function: sub_00326CA8
// Address: 0x326ca8 - 0x326dc8
void sub_00326CA8_0x326ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326CA8_0x326ca8");
#endif

    switch (ctx->pc) {
        case 0x326d08u: goto label_326d08;
        case 0x326d10u: goto label_326d10;
        case 0x326d3cu: goto label_326d3c;
        case 0x326d50u: goto label_326d50;
        default: break;
    }

    ctx->pc = 0x326ca8u;

    // 0x326ca8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x326ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x326cac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x326cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326cb0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x326cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x326cb4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x326cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x326cb8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x326cb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326cbc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x326cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x326cc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x326cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326cc4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x326cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x326cc8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x326cc8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326ccc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x326cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x326cd0: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x326cd0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326cd4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x326cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x326cd8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x326cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x326cdc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x326cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x326ce0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x326ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x326ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326ce8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x326ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x326cec: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x326cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x326cf0: 0x12420028  beq         $s2, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x326CF0u;
    {
        const bool branch_taken_0x326cf0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x326CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CF0u;
        // 0x326cf4: 0x8c760018  lw          $s6, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326cf0) {
            ctx->pc = 0x326D94u;
            goto label_326d94;
        }
    }
    ctx->pc = 0x326CF8u;
    // 0x326cf8: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x326cf8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x326cfc: 0x3694ffc0  ori         $s4, $s4, 0xFFC0
    ctx->pc = 0x326cfcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65472);
    // 0x326d00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d04: 0x0  nop
    ctx->pc = 0x326d04u;
    // NOP
label_326d08:
    // 0x326d08: 0xc0c99be  jal         func_3266F8
    ctx->pc = 0x326D08u;
    SET_GPR_U32(ctx, 31, 0x326D10u);
    ctx->pc = 0x326D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D08u;
    // 0x326d0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3266F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3266F8u, 0x326D08u, 0x326D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D10u;
label_326d10:
    // 0x326d10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x326d10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d14: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x326d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x326d18: 0x2c28821  addu        $s1, $s6, $v0
    ctx->pc = 0x326d18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x326d1c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x326d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326d20: 0x3070003f  andi        $s0, $v1, 0x3F
    ctx->pc = 0x326d20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x326d24: 0x161e0007  bne         $s0, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x326D24u;
    {
        const bool branch_taken_0x326d24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 30));
        ctx->pc = 0x326D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D24u;
        // 0x326d28: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d24) {
            ctx->pc = 0x326D44u;
            goto label_326d44;
        }
    }
    ctx->pc = 0x326D2Cu;
    // 0x326d2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x326d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x326d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d34: 0xc0c9992  jal         func_326648
    ctx->pc = 0x326D34u;
    SET_GPR_U32(ctx, 31, 0x326D3Cu);
    ctx->pc = 0x326D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D34u;
    // 0x326d38: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326648u, 0x326D34u, 0x326D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D3Cu;
label_326d3c:
    // 0x326d3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x326D3Cu;
    {
        const bool branch_taken_0x326d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D3Cu;
        // 0x326d40: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d3c) {
            ctx->pc = 0x326D88u;
            goto label_326d88;
        }
    }
    ctx->pc = 0x326D44u;
label_326d44:
    // 0x326d44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x326d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326d48: 0xc0c9992  jal         func_326648
    ctx->pc = 0x326D48u;
    SET_GPR_U32(ctx, 31, 0x326D50u);
    ctx->pc = 0x326D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326D48u;
    // 0x326d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326648u, 0x326D48u, 0x326D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326D50u;
label_326d50:
    // 0x326d50: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x326d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x326d54: 0x56020005  bnel        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x326D54u;
    {
        const bool branch_taken_0x326d54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x326d54) {
            ctx->pc = 0x326D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326D54u;
            // 0x326d58: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326D6Cu;
            goto label_326d6c;
        }
    }
    ctx->pc = 0x326D5Cu;
    // 0x326d5c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x326d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326d60: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x326d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x326d64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x326D64u;
    {
        const bool branch_taken_0x326d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D64u;
        // 0x326d68: 0x34420026  ori         $v0, $v0, 0x26 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38);
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d64) {
            ctx->pc = 0x326D80u;
            goto label_326d80;
        }
    }
    ctx->pc = 0x326D6Cu;
label_326d6c:
    // 0x326d6c: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x326D6Cu;
    {
        const bool branch_taken_0x326d6c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x326D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D6Cu;
        // 0x326d70: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d6c) {
            ctx->pc = 0x326D88u;
            goto label_326d88;
        }
    }
    ctx->pc = 0x326D74u;
    // 0x326d74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x326d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x326d78: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x326d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x326d7c: 0x34420027  ori         $v0, $v0, 0x27
    ctx->pc = 0x326d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39);
label_326d80:
    // 0x326d80: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x326d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x326d84: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x326d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_326d88:
    // 0x326d88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x326d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x326d8c: 0x1642ffde  bne         $s2, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x326D8Cu;
    {
        const bool branch_taken_0x326d8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x326D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326D8Cu;
        // 0x326d90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326d8c) {
            ctx->pc = 0x326D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_326d08;
        }
    }
    ctx->pc = 0x326D94u;
label_326d94:
    // 0x326d94: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x326d94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x326d98: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x326d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x326d9c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x326d9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x326da0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x326da0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x326da4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x326da4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x326da8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x326da8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x326dac: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x326dacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x326db0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x326db0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x326db4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x326db4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x326DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326DBCu;
        // 0x326dc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326DC4u;
    // 0x326dc4: 0x0  nop
    ctx->pc = 0x326dc4u;
    // NOP
    ctx->pc = 0x326dc8u;
}
