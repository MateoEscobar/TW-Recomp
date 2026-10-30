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

// Function: sub_00237388
// Address: 0x237388 - 0x2373f8
void sub_00237388_0x237388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237388_0x237388");
#endif

    switch (ctx->pc) {
        case 0x2373a4u: goto label_2373a4;
        case 0x2373acu: goto label_2373ac;
        default: break;
    }

    ctx->pc = 0x237388u;

    // 0x237388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x237388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23738c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x237390: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x237390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x237394: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x237394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237398: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x237398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23739c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23739Cu;
    SET_GPR_U32(ctx, 31, 0x2373A4u);
    ctx->pc = 0x2373A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23739Cu;
    // 0x2373a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23739Cu, 0x2373A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373A4u;
label_2373a4:
    // 0x2373a4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2373A4u;
    SET_GPR_U32(ctx, 31, 0x2373ACu);
    ctx->pc = 0x2373A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2373A4u;
    // 0x2373a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2373A4u, 0x2373ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2373ACu;
label_2373ac:
    // 0x2373ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2373acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2373b0: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2373B0u;
    {
        const bool branch_taken_0x2373b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373B0u;
        // 0x2373b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373b0) {
            ctx->pc = 0x2373E8u;
            goto label_2373e8;
        }
    }
    ctx->pc = 0x2373B8u;
    // 0x2373b8: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2373B8u;
    {
        const bool branch_taken_0x2373b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2373BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373B8u;
        // 0x2373bc: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373b8) {
            ctx->pc = 0x2373D0u;
            goto label_2373d0;
        }
    }
    ctx->pc = 0x2373C0u;
    // 0x2373c0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2373c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2373c4: 0x31e78  dsll        $v1, $v1, 25
    ctx->pc = 0x2373c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x2373c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2373C8u;
    {
        const bool branch_taken_0x2373c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2373CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373C8u;
        // 0x2373cc: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2373c8) {
            ctx->pc = 0x2373E4u;
            goto label_2373e4;
        }
    }
    ctx->pc = 0x2373D0u;
label_2373d0:
    // 0x2373d0: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2373d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2373d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2373d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2373d8: 0x31ab8  dsll        $v1, $v1, 10
    ctx->pc = 0x2373d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 10);
    // 0x2373dc: 0x346303ff  ori         $v1, $v1, 0x3FF
    ctx->pc = 0x2373dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1023);
    // 0x2373e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2373e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2373e4:
    // 0x2373e4: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x2373e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
label_2373e8:
    // 0x2373e8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2373e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2373ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2373ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2373f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2373F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2373F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2373F0u;
        // 0x2373f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2373F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2373F8u;
}
