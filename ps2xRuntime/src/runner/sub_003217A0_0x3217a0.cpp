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

// Function: sub_003217A0
// Address: 0x3217a0 - 0x321808
void sub_003217A0_0x3217a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003217A0_0x3217a0");
#endif

    switch (ctx->pc) {
        case 0x3217c8u: goto label_3217c8;
        case 0x3217d8u: goto label_3217d8;
        default: break;
    }

    ctx->pc = 0x3217a0u;

    // 0x3217a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3217a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3217a4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3217A4u;
    {
        const bool branch_taken_0x3217a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x3217a4) {
            ctx->pc = 0x3217FCu;
            goto label_3217fc;
        }
    }
    ctx->pc = 0x3217ACu;
    // 0x3217ac: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3217ACu;
    {
        const bool branch_taken_0x3217ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3217B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217ACu;
        // 0x3217b0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217ac) {
            ctx->pc = 0x3217FCu;
            goto label_3217fc;
        }
    }
    ctx->pc = 0x3217B4u;
    // 0x3217b4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x3217b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x3217b8: 0x2442b318  addiu       $v0, $v0, -0x4CE8
    ctx->pc = 0x3217b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947608));
    // 0x3217bc: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3217bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x3217c0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x3217c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x3217c4: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3217c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3217c8:
    // 0x3217c8: 0x24450030  addiu       $a1, $v0, 0x30
    ctx->pc = 0x3217c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x3217cc: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x3217ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3217d0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3217d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3217d4: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3217d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3217d8:
    // 0x3217d8: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x3217d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x3217dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3217dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3217e0: 0x0  nop
    ctx->pc = 0x3217e0u;
    // NOP
    // 0x3217e4: 0x0  nop
    ctx->pc = 0x3217e4u;
    // NOP
    // 0x3217e8: 0x1467fffb  bne         $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3217E8u;
    {
        const bool branch_taken_0x3217e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x3217ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217E8u;
        // 0x3217ec: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217e8) {
            ctx->pc = 0x3217D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3217d8;
        }
    }
    ctx->pc = 0x3217F0u;
    // 0x3217f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3217f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3217f4: 0x1467fff4  bne         $v1, $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x3217F4u;
    {
        const bool branch_taken_0x3217f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x3217F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217F4u;
        // 0x3217f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3217f4) {
            ctx->pc = 0x3217C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3217c8;
        }
    }
    ctx->pc = 0x3217FCu;
label_3217fc:
    // 0x3217fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3217FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3217FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321804u;
    // 0x321804: 0x0  nop
    ctx->pc = 0x321804u;
    // NOP
    ctx->pc = 0x321808u;
}
