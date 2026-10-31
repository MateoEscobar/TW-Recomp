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

// Function: sub_002922A8
// Address: 0x2922a8 - 0x292310
void sub_002922A8_0x2922a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002922A8_0x2922a8");
#endif

    switch (ctx->pc) {
        case 0x2922d0u: goto label_2922d0;
        case 0x2922e0u: goto label_2922e0;
        default: break;
    }

    ctx->pc = 0x2922a8u;

    // 0x2922a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2922a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2922ac: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2922ACu;
    {
        const bool branch_taken_0x2922ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2922ac) {
            ctx->pc = 0x292304u;
            goto label_292304;
        }
    }
    ctx->pc = 0x2922B4u;
    // 0x2922b4: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2922B4u;
    {
        const bool branch_taken_0x2922b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2922B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922B4u;
        // 0x2922b8: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922b4) {
            ctx->pc = 0x292304u;
            goto label_292304;
        }
    }
    ctx->pc = 0x2922BCu;
    // 0x2922bc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2922bcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2922c0: 0x2442ddf8  addiu       $v0, $v0, -0x2208
    ctx->pc = 0x2922c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958584));
    // 0x2922c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2922c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2922c8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2922c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2922cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2922ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2922d0:
    // 0x2922d0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x2922d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2922d4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2922d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2922d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2922d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2922dc: 0x0  nop
    ctx->pc = 0x2922dcu;
    // NOP
label_2922e0:
    // 0x2922e0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x2922e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x2922e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2922e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2922e8: 0x0  nop
    ctx->pc = 0x2922e8u;
    // NOP
    // 0x2922ec: 0x0  nop
    ctx->pc = 0x2922ecu;
    // NOP
    // 0x2922f0: 0x1467fffb  bne         $v1, $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2922F0u;
    {
        const bool branch_taken_0x2922f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x2922F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922F0u;
        // 0x2922f4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922f0) {
            ctx->pc = 0x2922E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2922e0;
        }
    }
    ctx->pc = 0x2922F8u;
    // 0x2922f8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2922f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2922fc: 0x1467fff4  bne         $v1, $a3, . + 4 + (-0xC << 2)
    ctx->pc = 0x2922FCu;
    {
        const bool branch_taken_0x2922fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x292300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2922FCu;
        // 0x292300: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2922fc) {
            ctx->pc = 0x2922D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2922d0;
        }
    }
    ctx->pc = 0x292304u;
label_292304:
    // 0x292304: 0x3e00008  jr          $ra
    ctx->pc = 0x292304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29230Cu;
    // 0x29230c: 0x0  nop
    ctx->pc = 0x29230cu;
    // NOP
    ctx->pc = 0x292310u;
}
