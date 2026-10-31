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

// Function: sub_00157860
// Address: 0x157860 - 0x157930
void sub_00157860_0x157860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157860_0x157860");
#endif

    switch (ctx->pc) {
        case 0x15787cu: goto label_15787c;
        case 0x1578b0u: goto label_1578b0;
        case 0x1578f0u: goto label_1578f0;
        default: break;
    }

    ctx->pc = 0x157860u;

    // 0x157860: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x157860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x157864: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x157864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x157868: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x157868u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x15786c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x15786Cu;
    {
        const bool branch_taken_0x15786c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15786Cu;
        // 0x157870: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15786c) {
            ctx->pc = 0x157920u;
            goto label_157920;
        }
    }
    ctx->pc = 0x157874u;
    // 0x157874: 0xc0579d2  jal         func_15E748
    ctx->pc = 0x157874u;
    SET_GPR_U32(ctx, 31, 0x15787Cu);
    ctx->pc = 0x15E748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E748u, 0x157874u, 0x15787Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15787Cu;
label_15787c:
    // 0x15787c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x15787cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x157880: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x157880u;
    {
        const bool branch_taken_0x157880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x157884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157880u;
        // 0x157884: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157880) {
            ctx->pc = 0x157920u;
            goto label_157920;
        }
    }
    ctx->pc = 0x157888u;
    // 0x157888: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x157888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15788c: 0x24425560  addiu       $v0, $v0, 0x5560
    ctx->pc = 0x15788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21856));
    // 0x157890: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x157890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x157894: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x157894u;
    {
        const bool branch_taken_0x157894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157894u;
        // 0x157898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157894) {
            ctx->pc = 0x157924u;
            goto label_157924;
        }
    }
    ctx->pc = 0x15789Cu;
    // 0x15789c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1578a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1578a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578a4: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1578a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1578a8: 0x2443004c  addiu       $v1, $v0, 0x4C
    ctx->pc = 0x1578a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x1578ac: 0x0  nop
    ctx->pc = 0x1578acu;
    // NOP
label_1578b0:
    // 0x1578b0: 0x8462fff6  lh          $v0, -0xA($v1)
    ctx->pc = 0x1578b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294967286)));
    // 0x1578b4: 0x4420005  bltzl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1578B4u;
    {
        const bool branch_taken_0x1578b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1578b4) {
            ctx->pc = 0x1578B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1578B4u;
            // 0x1578b8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1578CCu;
            goto label_1578cc;
        }
    }
    ctx->pc = 0x1578BCu;
    // 0x1578bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1578bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1578c0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1578C0u;
    {
        const bool branch_taken_0x1578c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578C0u;
        // 0x1578c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578c0) {
            ctx->pc = 0x157924u;
            goto label_157924;
        }
    }
    ctx->pc = 0x1578C8u;
    // 0x1578c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1578c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1578cc:
    // 0x1578cc: 0x28820008  slti        $v0, $a0, 0x8
    ctx->pc = 0x1578ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1578d0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1578D0u;
    {
        const bool branch_taken_0x1578d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1578D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578D0u;
        // 0x1578d4: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578d0) {
            ctx->pc = 0x1578B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1578b0;
        }
    }
    ctx->pc = 0x1578D8u;
    // 0x1578d8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x1578d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x1578dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1578dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1578e0: 0x2442d810  addiu       $v0, $v0, -0x27F0
    ctx->pc = 0x1578e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957072));
    // 0x1578e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1578e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1578e8: 0x2443004c  addiu       $v1, $v0, 0x4C
    ctx->pc = 0x1578e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x1578ec: 0x0  nop
    ctx->pc = 0x1578ecu;
    // NOP
label_1578f0:
    // 0x1578f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1578f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1578f4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1578F4u;
    {
        const bool branch_taken_0x1578f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1578F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1578F4u;
        // 0x1578f8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1578f4) {
            ctx->pc = 0x157900u;
            goto label_157900;
        }
    }
    ctx->pc = 0x1578FCu;
    // 0x1578fc: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1578fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_157900:
    // 0x157900: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x157900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x157904: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x157904u;
    {
        const bool branch_taken_0x157904 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x157908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157904u;
        // 0x157908: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157904) {
            ctx->pc = 0x1578F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1578f0;
        }
    }
    ctx->pc = 0x15790Cu;
    // 0x15790c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15790Cu;
    {
        const bool branch_taken_0x15790c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x157910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15790Cu;
        // 0x157910: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15790c) {
            ctx->pc = 0x157924u;
            goto label_157924;
        }
    }
    ctx->pc = 0x157914u;
    // 0x157914: 0x24c35560  addiu       $v1, $a2, 0x5560
    ctx->pc = 0x157914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21856));
    // 0x157918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15791c: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x15791cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_157920:
    // 0x157920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_157924:
    // 0x157924: 0x3e00008  jr          $ra
    ctx->pc = 0x157924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157924u;
        // 0x157928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15792Cu;
    // 0x15792c: 0x0  nop
    ctx->pc = 0x15792cu;
    // NOP
    ctx->pc = 0x157930u;
}
