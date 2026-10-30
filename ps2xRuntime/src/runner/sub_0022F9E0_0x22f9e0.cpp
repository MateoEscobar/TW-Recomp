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

// Function: sub_0022F9E0
// Address: 0x22f9e0 - 0x22fa78
void sub_0022F9E0_0x22f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F9E0_0x22f9e0");
#endif

    switch (ctx->pc) {
        case 0x22fa18u: goto label_22fa18;
        case 0x22fa34u: goto label_22fa34;
        case 0x22fa40u: goto label_22fa40;
        default: break;
    }

    ctx->pc = 0x22f9e0u;

    // 0x22f9e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22f9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22f9e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22f9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22f9e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22f9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22f9ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22f9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22f9f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22f9f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f9f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f9f8: 0x924200e1  lbu         $v0, 0xE1($s2)
    ctx->pc = 0x22f9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 225)));
    // 0x22f9fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22f9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22fa00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x22fa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22fa04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x22fa04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x22fa08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22FA08u;
    {
        const bool branch_taken_0x22fa08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA08u;
        // 0x22fa0c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa08) {
            ctx->pc = 0x22FA20u;
            goto label_22fa20;
        }
    }
    ctx->pc = 0x22FA10u;
    // 0x22fa10: 0xc088dc8  jal         func_223720
    ctx->pc = 0x22FA10u;
    SET_GPR_U32(ctx, 31, 0x22FA18u);
    ctx->pc = 0x223720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223720u, 0x22FA10u, 0x22FA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA18u;
label_22fa18:
    // 0x22fa18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22FA18u;
    {
        const bool branch_taken_0x22fa18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA18u;
        // 0x22fa1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa18) {
            ctx->pc = 0x22FA24u;
            goto label_22fa24;
        }
    }
    ctx->pc = 0x22FA20u;
label_22fa20:
    // 0x22fa20: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x22fa20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_22fa24:
    // 0x22fa24: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22FA24u;
    {
        const bool branch_taken_0x22fa24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA24u;
        // 0x22fa28: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fa24) {
            ctx->pc = 0x22FA4Cu;
            goto label_22fa4c;
        }
    }
    ctx->pc = 0x22FA2Cu;
    // 0x22fa2c: 0xc0899ae  jal         func_2266B8
    ctx->pc = 0x22FA2Cu;
    SET_GPR_U32(ctx, 31, 0x22FA34u);
    ctx->pc = 0x22FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA2Cu;
    // 0x22fa30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266B8u, 0x22FA2Cu, 0x22FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA34u;
label_22fa34:
    // 0x22fa34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fa38: 0xc0406fc  jal         func_101BF0
    ctx->pc = 0x22FA38u;
    SET_GPR_U32(ctx, 31, 0x22FA40u);
    ctx->pc = 0x22FA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FA38u;
    // 0x22fa3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BF0u, 0x22FA38u, 0x22FA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FA40u;
label_22fa40:
    // 0x22fa40: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x22fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x22fa44: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x22fa44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x22fa48: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x22fa48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_22fa4c:
    // 0x22fa4c: 0x8e4500d4  lw          $a1, 0xD4($s2)
    ctx->pc = 0x22fa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x22fa50: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x22fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x22fa54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22fa54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22fa58: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x22fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x22fa5c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22fa5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fa60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22fa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22fa64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22fa64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fa68: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22fa68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22fa6c: 0xaca20100  sw          $v0, 0x100($a1)
    ctx->pc = 0x22fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 2));
    // 0x22fa70: 0x3e00008  jr          $ra
    ctx->pc = 0x22FA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FA70u;
        // 0x22fa74: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FA78u;
}
