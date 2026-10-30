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

// Function: sub_001499E8
// Address: 0x1499e8 - 0x149a88
void sub_001499E8_0x1499e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001499E8_0x1499e8");
#endif

    switch (ctx->pc) {
        case 0x149a10u: goto label_149a10;
        case 0x149a2cu: goto label_149a2c;
        case 0x149a74u: goto label_149a74;
        default: break;
    }

    ctx->pc = 0x1499e8u;

    // 0x1499e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1499e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1499ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1499ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1499f0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1499f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1499f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1499f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1499f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1499fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1499fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a04: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x149a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x149a08: 0xc113578  jal         func_44D5E0
    ctx->pc = 0x149A08u;
    SET_GPR_U32(ctx, 31, 0x149A10u);
    ctx->pc = 0x149A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A08u;
    // 0x149a0c: 0x8e250108  lw          $a1, 0x108($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D5E0u, 0x149A08u, 0x149A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A10u;
label_149a10:
    // 0x149a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a14: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x149A14u;
    {
        const bool branch_taken_0x149a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A14u;
        // 0x149a18: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a14) {
            ctx->pc = 0x149A6Cu;
            goto label_149a6c;
        }
    }
    ctx->pc = 0x149A1Cu;
    // 0x149a1c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x149a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x149a20: 0x8e250108  lw          $a1, 0x108($s1)
    ctx->pc = 0x149a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x149a24: 0xc113578  jal         func_44D5E0
    ctx->pc = 0x149A24u;
    SET_GPR_U32(ctx, 31, 0x149A2Cu);
    ctx->pc = 0x149A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A24u;
    // 0x149a28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D5E0u, 0x149A24u, 0x149A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A2Cu;
label_149a2c:
    // 0x149a2c: 0x28430001  slti        $v1, $v0, 0x1
    ctx->pc = 0x149a2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x149a30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x149a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x149a34: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x149a34u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x149a38: 0x12040006  beq         $s0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x149A38u;
    {
        const bool branch_taken_0x149a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x149A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A38u;
        // 0x149a3c: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a38) {
            ctx->pc = 0x149A54u;
            goto label_149a54;
        }
    }
    ctx->pc = 0x149A40u;
    // 0x149a40: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x149a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x149a44: 0x52020005  beql        $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x149A44u;
    {
        const bool branch_taken_0x149a44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x149a44) {
            ctx->pc = 0x149A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149A44u;
            // 0x149a48: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149A5Cu;
            goto label_149a5c;
        }
    }
    ctx->pc = 0x149A4Cu;
    // 0x149a4c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149A4Cu;
    {
        const bool branch_taken_0x149a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A4Cu;
        // 0x149a50: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a4c) {
            ctx->pc = 0x149A64u;
            goto label_149a64;
        }
    }
    ctx->pc = 0x149A54u;
label_149a54:
    // 0x149a54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149A54u;
    {
        const bool branch_taken_0x149a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A54u;
        // 0x149a58: 0x24429ab0  addiu       $v0, $v0, -0x6550 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a54) {
            ctx->pc = 0x149A68u;
            goto label_149a68;
        }
    }
    ctx->pc = 0x149A5Cu;
label_149a5c:
    // 0x149a5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x149A5Cu;
    {
        const bool branch_taken_0x149a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A5Cu;
        // 0x149a60: 0x24429bc0  addiu       $v0, $v0, -0x6440 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a5c) {
            ctx->pc = 0x149A68u;
            goto label_149a68;
        }
    }
    ctx->pc = 0x149A64u;
label_149a64:
    // 0x149a64: 0x24429a88  addiu       $v0, $v0, -0x6578
    ctx->pc = 0x149a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941320));
label_149a68:
    // 0x149a68: 0xae220100  sw          $v0, 0x100($s1)
    ctx->pc = 0x149a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
label_149a6c:
    // 0x149a6c: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149A6Cu;
    SET_GPR_U32(ctx, 31, 0x149A74u);
    ctx->pc = 0x149A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A6Cu;
    // 0x149a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149A6Cu, 0x149A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A74u;
label_149a74:
    // 0x149a74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x149a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x149a78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149a78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149a80: 0x3e00008  jr          $ra
    ctx->pc = 0x149A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A80u;
        // 0x149a84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149A88u;
}
