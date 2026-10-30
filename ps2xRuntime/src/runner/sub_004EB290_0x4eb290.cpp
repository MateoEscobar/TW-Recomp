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

// Function: sub_004EB290
// Address: 0x4eb290 - 0x4eb348
void sub_004EB290_0x4eb290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB290_0x4eb290");
#endif

    switch (ctx->pc) {
        case 0x4eb2b8u: goto label_4eb2b8;
        case 0x4eb338u: goto label_4eb338;
        default: break;
    }

    ctx->pc = 0x4eb290u;

    // 0x4eb290: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x4eb290u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb294: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eb294u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eb298: 0xb1840  sll         $v1, $t3, 1
    ctx->pc = 0x4eb298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x4eb29c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x4eb29cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb2a0: 0x24680002  addiu       $t0, $v1, 0x2
    ctx->pc = 0x4eb2a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4eb2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eb2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eb2a8: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x4eb2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x4eb2ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4EB2ACu;
    {
        const bool branch_taken_0x4eb2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB2ACu;
        // 0x4eb2b0: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb2ac) {
            ctx->pc = 0x4EB304u;
            goto label_4eb304;
        }
    }
    ctx->pc = 0x4EB2B4u;
    // 0x4eb2b4: 0x0  nop
    ctx->pc = 0x4eb2b4u;
    // NOP
label_4eb2b8:
    // 0x4eb2b8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4eb2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4eb2bc: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x4eb2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4eb2c0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4eb2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4eb2c4: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x4eb2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x4eb2c8: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x4eb2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4eb2cc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4eb2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4eb2d0: 0x90650018  lbu         $a1, 0x18($v1)
    ctx->pc = 0x4eb2d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4eb2d4: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x4eb2d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4eb2d8: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x4eb2d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4eb2dc: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4eb2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4eb2e0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x4eb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4eb2e4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4eb2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb2e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4eb2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4eb2ec: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x4eb2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4eb2f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4eb2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4eb2f4: 0x24040  sll         $t0, $v0, 1
    ctx->pc = 0x4eb2f4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4eb2f8: 0x10a182a  slt         $v1, $t0, $t2
    ctx->pc = 0x4eb2f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x4eb2fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4EB2FCu;
    {
        const bool branch_taken_0x4eb2fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4EB300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB2FCu;
        // 0x4eb300: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb2fc) {
            ctx->pc = 0x4EB2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4eb2b8;
        }
    }
    ctx->pc = 0x4EB304u;
label_4eb304:
    // 0x4eb304: 0x150a0009  bne         $t0, $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x4EB304u;
    {
        const bool branch_taken_0x4eb304 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x4EB308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB304u;
        // 0x4eb308: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb304) {
            ctx->pc = 0x4EB32Cu;
            goto label_4eb32c;
        }
    }
    ctx->pc = 0x4EB30Cu;
    // 0x4eb30c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4eb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4eb310: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4eb310u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4eb314: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x4eb314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4eb318: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x4eb318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4eb31c: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x4eb31cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x4eb320: 0x2505ffff  addiu       $a1, $t0, -0x1
    ctx->pc = 0x4eb320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x4eb324: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x4eb324u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x4eb328: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x4eb328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4eb32c:
    // 0x4eb32c: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x4eb32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eb330: 0xc13ac84  jal         func_4EB210
    ctx->pc = 0x4EB330u;
    SET_GPR_U32(ctx, 31, 0x4EB338u);
    ctx->pc = 0x4EB334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EB330u;
    // 0x4eb334: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EB210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EB210u, 0x4EB330u, 0x4EB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EB338u;
label_4eb338:
    // 0x4eb338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eb33c: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB33Cu;
        // 0x4eb340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB344u;
    // 0x4eb344: 0x0  nop
    ctx->pc = 0x4eb344u;
    // NOP
    ctx->pc = 0x4eb348u;
}
