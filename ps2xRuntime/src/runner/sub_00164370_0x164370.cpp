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

// Function: sub_00164370
// Address: 0x164370 - 0x164410
void sub_00164370_0x164370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164370_0x164370");
#endif

    switch (ctx->pc) {
        case 0x164388u: goto label_164388;
        case 0x1643a0u: goto label_1643a0;
        case 0x1643d8u: goto label_1643d8;
        default: break;
    }

    ctx->pc = 0x164370u;

    // 0x164370: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x164370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x164374: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x164374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164378: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x164378u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16437c: 0x240c0004  addiu       $t4, $zero, 0x4
    ctx->pc = 0x16437cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x164380: 0x240bffff  addiu       $t3, $zero, -0x1
    ctx->pc = 0x164380u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x164384: 0x0  nop
    ctx->pc = 0x164384u;
    // NOP
label_164388:
    // 0x164388: 0x2449ffff  addiu       $t1, $v0, -0x1
    ctx->pc = 0x164388u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16438c: 0x24c30073  addiu       $v1, $a2, 0x73
    ctx->pc = 0x16438cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 115));
    // 0x164390: 0x24c8007a  addiu       $t0, $a2, 0x7A
    ctx->pc = 0x164390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 122));
    // 0x164394: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x164394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164398: 0x24c7006c  addiu       $a3, $a2, 0x6C
    ctx->pc = 0x164398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 108));
    // 0x16439c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x16439cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_1643a0:
    // 0x1643a0: 0x24a50024  addiu       $a1, $a1, 0x24
    ctx->pc = 0x1643a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 36));
    // 0x1643a4: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x1643a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1643a8: 0x0  nop
    ctx->pc = 0x1643a8u;
    // NOP
    // 0x1643ac: 0x0  nop
    ctx->pc = 0x1643acu;
    // NOP
    // 0x1643b0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1643B0u;
    {
        const bool branch_taken_0x1643b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1643b0) {
            ctx->pc = 0x1643B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1643B0u;
            // 0x1643b4: 0xa0a00000  sb          $zero, 0x0($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1643A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1643a0;
        }
    }
    ctx->pc = 0x1643B8u;
    // 0x1643b8: 0xa0c00072  sb          $zero, 0x72($a2)
    ctx->pc = 0x1643b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x1643bc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1643bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643c0: 0xa0ca006c  sb          $t2, 0x6C($a2)
    ctx->pc = 0x1643c0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 108), (uint8_t)GPR_U32(ctx, 10));
    // 0x1643c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1643c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643c8: 0xa0ca006d  sb          $t2, 0x6D($a2)
    ctx->pc = 0x1643c8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 109), (uint8_t)GPR_U32(ctx, 10));
    // 0x1643cc: 0xa0cc006e  sb          $t4, 0x6E($a2)
    ctx->pc = 0x1643ccu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 110), (uint8_t)GPR_U32(ctx, 12));
    // 0x1643d0: 0xa0c0006f  sb          $zero, 0x6F($a2)
    ctx->pc = 0x1643d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 111), (uint8_t)GPR_U32(ctx, 0));
    // 0x1643d4: 0x0  nop
    ctx->pc = 0x1643d4u;
    // NOP
label_1643d8:
    // 0x1643d8: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x1643d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1643dc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1643dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1643e0: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1643e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1643e4: 0x0  nop
    ctx->pc = 0x1643e4u;
    // NOP
    // 0x1643e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1643E8u;
    {
        const bool branch_taken_0x1643e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1643ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643E8u;
        // 0x1643ec: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643e8) {
            ctx->pc = 0x1643D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1643d8;
        }
    }
    ctx->pc = 0x1643F0u;
    // 0x1643f0: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x1643f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1643f4: 0x144bffe4  bne         $v0, $t3, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1643F4u;
    {
        const bool branch_taken_0x1643f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x1643F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643F4u;
        // 0x1643f8: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643f4) {
            ctx->pc = 0x164388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164388;
        }
    }
    ctx->pc = 0x1643FCu;
    // 0x1643fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1643FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643FCu;
        // 0x164400: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1643FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164404u;
    // 0x164404: 0x0  nop
    ctx->pc = 0x164404u;
    // NOP
    // 0x164408: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x164408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x16440c: 0x0  nop
    ctx->pc = 0x16440cu;
    // NOP
    ctx->pc = 0x164410u;
}
