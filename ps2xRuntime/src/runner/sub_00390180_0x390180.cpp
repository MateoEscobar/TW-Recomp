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

// Function: sub_00390180
// Address: 0x390180 - 0x390200
void sub_00390180_0x390180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390180_0x390180");
#endif

    switch (ctx->pc) {
        case 0x3901bcu: goto label_3901bc;
        case 0x3901c8u: goto label_3901c8;
        default: break;
    }

    ctx->pc = 0x390180u;

label_390180:
    // 0x390180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x390180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x390184: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x390184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x390188: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x390188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39018c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39018cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390190: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x390190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x390194: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x390194u;
    {
        const bool branch_taken_0x390194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x390198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390194u;
        // 0x390198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390194) {
            ctx->pc = 0x3901F0u;
            goto label_3901f0;
        }
    }
    ctx->pc = 0x39019Cu;
    // 0x39019c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x39019cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3901a0: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3901A0u;
    {
        const bool branch_taken_0x3901a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3901a0) {
            ctx->pc = 0x3901A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3901A0u;
            // 0x3901a4: 0x84820002  lh          $v0, 0x2($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3901D0u;
            goto label_3901d0;
        }
    }
    ctx->pc = 0x3901A8u;
    // 0x3901a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3901a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x3901ac: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x3901acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3901b0: 0x8c622c7c  lw          $v0, 0x2C7C($v1)
    ctx->pc = 0x3901b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x3901b4: 0xc0e63f8  jal         func_398FE0
    ctx->pc = 0x3901B4u;
    SET_GPR_U32(ctx, 31, 0x3901BCu);
    ctx->pc = 0x3901B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3901B4u;
    // 0x3901b8: 0x8c440840  lw          $a0, 0x840($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398FE0u, 0x3901B4u, 0x3901BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3901BCu;
label_3901bc:
    // 0x3901bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3901bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3901c0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x3901C0u;
    SET_GPR_U32(ctx, 31, 0x3901C8u);
    ctx->pc = 0x3901C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3901C0u;
    // 0x3901c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    goto label_390180;
    ctx->pc = 0x3901C8u;
label_3901c8:
    // 0x3901c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3901C8u;
    {
        const bool branch_taken_0x3901c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3901CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901C8u;
        // 0x3901cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3901c8) {
            ctx->pc = 0x3901F4u;
            goto label_3901f4;
        }
    }
    ctx->pc = 0x3901D0u;
label_3901d0:
    // 0x3901d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3901d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3901d4: 0x2463bd38  addiu       $v1, $v1, -0x42C8
    ctx->pc = 0x3901d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950200));
    // 0x3901d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3901d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3901dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3901dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3901e0: 0x94440004  lhu         $a0, 0x4($v0)
    ctx->pc = 0x3901e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3901e4: 0x50a40002  beql        $a1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3901E4u;
    {
        const bool branch_taken_0x3901e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3901e4) {
            ctx->pc = 0x3901E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3901E4u;
            // 0x3901e8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3901F0u;
            goto label_3901f0;
        }
    }
    ctx->pc = 0x3901ECu;
    // 0x3901ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3901ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3901f0:
    // 0x3901f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3901f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3901f4:
    // 0x3901f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3901F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3901F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3901F4u;
        // 0x3901f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3901F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3901FCu;
    // 0x3901fc: 0x0  nop
    ctx->pc = 0x3901fcu;
    // NOP
    ctx->pc = 0x390200u;
}
