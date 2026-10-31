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

// Function: sub_00324958
// Address: 0x324958 - 0x324a30
void sub_00324958_0x324958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324958_0x324958");
#endif

    switch (ctx->pc) {
        case 0x32499cu: goto label_32499c;
        case 0x3249a0u: goto label_3249a0;
        case 0x3249b0u: goto label_3249b0;
        case 0x3249fcu: goto label_3249fc;
        default: break;
    }

    ctx->pc = 0x324958u;

    // 0x324958: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x324958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x32495c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x32495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x324960: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x324960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x324964: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x324964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324968: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x324968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x32496c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x32496cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x324970: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x324970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x324974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x324974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x324978: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x324978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x32497c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x32497cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x324980: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x324980u;
    {
        const bool branch_taken_0x324980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x324984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324980u;
        // 0x324984: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324980) {
            ctx->pc = 0x324A10u;
            goto label_324a10;
        }
    }
    ctx->pc = 0x324988u;
    // 0x324988: 0x8e740008  lw          $s4, 0x8($s3)
    ctx->pc = 0x324988u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x32498c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x32498cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x324990: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x324990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324994: 0xc0c8dd2  jal         func_323748
    ctx->pc = 0x324994u;
    SET_GPR_U32(ctx, 31, 0x32499Cu);
    ctx->pc = 0x324998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324994u;
    // 0x324998: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323748u, 0x324994u, 0x32499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32499Cu;
label_32499c:
    // 0x32499c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x32499cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3249a0:
    // 0x3249a0: 0x26500001  addiu       $s0, $s2, 0x1
    ctx->pc = 0x3249a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3249a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3249a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249a8: 0xc0c8dd2  jal         func_323748
    ctx->pc = 0x3249A8u;
    SET_GPR_U32(ctx, 31, 0x3249B0u);
    ctx->pc = 0x3249ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249A8u;
    // 0x3249ac: 0x102823  negu        $a1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323748u, 0x3249A8u, 0x3249B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3249B0u;
label_3249b0:
    // 0x3249b0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3249b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3249b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3249b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249b8: 0x921023  subu        $v0, $a0, $s2
    ctx->pc = 0x3249b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x3249bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3249bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3249c0: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x3249c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3249c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3249C4u;
    {
        const bool branch_taken_0x3249c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3249C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249C4u;
        // 0x3249c8: 0x71102b  sltu        $v0, $v1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3249c4) {
            ctx->pc = 0x3249D4u;
            goto label_3249d4;
        }
    }
    ctx->pc = 0x3249CCu;
    // 0x3249cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3249CCu;
    {
        const bool branch_taken_0x3249cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3249D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249CCu;
        // 0x3249d0: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3249cc) {
            ctx->pc = 0x3249E8u;
            goto label_3249e8;
        }
    }
    ctx->pc = 0x3249D4u;
label_3249d4:
    // 0x3249d4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x3249d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249d8: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x3249d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3249dc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3249DCu;
    {
        const bool branch_taken_0x3249dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3249E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249DCu;
        // 0x3249e0: 0x2238821  addu        $s1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3249dc) {
            ctx->pc = 0x3249A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3249a0;
        }
    }
    ctx->pc = 0x3249E4u;
    // 0x3249e4: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x3249e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_3249e8:
    // 0x3249e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3249E8u;
    {
        const bool branch_taken_0x3249e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3249ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249E8u;
        // 0x3249ec: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3249e8) {
            ctx->pc = 0x324A10u;
            goto label_324a10;
        }
    }
    ctx->pc = 0x3249F0u;
    // 0x3249f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3249f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3249f4: 0xc0c90f6  jal         func_3243D8
    ctx->pc = 0x3249F4u;
    SET_GPR_U32(ctx, 31, 0x3249FCu);
    ctx->pc = 0x3249F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3249F4u;
    // 0x3249f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3243D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3243D8u, 0x3249F4u, 0x3249FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3249FCu;
label_3249fc:
    // 0x3249fc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3249fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x324a00: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x324a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x324a04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x324a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x324a08: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x324a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x324a0c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x324a0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_324a10:
    // 0x324a10: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x324a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x324a14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x324a14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324a18: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x324a18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324a1c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x324a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x324a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324a24: 0x3e00008  jr          $ra
    ctx->pc = 0x324A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324A24u;
        // 0x324a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324A2Cu;
    // 0x324a2c: 0x0  nop
    ctx->pc = 0x324a2cu;
    // NOP
    ctx->pc = 0x324a30u;
}
