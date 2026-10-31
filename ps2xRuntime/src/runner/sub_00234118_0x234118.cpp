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

// Function: sub_00234118
// Address: 0x234118 - 0x234188
void sub_00234118_0x234118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234118_0x234118");
#endif

    switch (ctx->pc) {
        case 0x234134u: goto label_234134;
        case 0x23413cu: goto label_23413c;
        default: break;
    }

    ctx->pc = 0x234118u;

    // 0x234118: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23411c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23411cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x234120: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234124: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x234124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234128: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23412c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x23412Cu;
    SET_GPR_U32(ctx, 31, 0x234134u);
    ctx->pc = 0x234130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23412Cu;
    // 0x234130: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x23412Cu, 0x234134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234134u;
label_234134:
    // 0x234134: 0xc08a61a  jal         func_229868
    ctx->pc = 0x234134u;
    SET_GPR_U32(ctx, 31, 0x23413Cu);
    ctx->pc = 0x234138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234134u;
    // 0x234138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x234134u, 0x23413Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23413Cu;
label_23413c:
    // 0x23413c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23413cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234140: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x234140u;
    {
        const bool branch_taken_0x234140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234140) {
            ctx->pc = 0x234144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234140u;
            // 0x234144: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23417Cu;
            goto label_23417c;
        }
    }
    ctx->pc = 0x234148u;
    // 0x234148: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x234148u;
    {
        const bool branch_taken_0x234148 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234148u;
        // 0x23414c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234148) {
            ctx->pc = 0x234160u;
            goto label_234160;
        }
    }
    ctx->pc = 0x234150u;
    // 0x234150: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x234150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x234154: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x234154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x234158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x234158u;
    {
        const bool branch_taken_0x234158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234158u;
        // 0x23415c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234158) {
            ctx->pc = 0x234174u;
            goto label_234174;
        }
    }
    ctx->pc = 0x234160u;
label_234160:
    // 0x234160: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x234160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x234164: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x234164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x234168: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x234168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x23416c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x23416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x234170: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234174:
    // 0x234174: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x234174u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x234178: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x234178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23417c:
    // 0x23417c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23417cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234180: 0x3e00008  jr          $ra
    ctx->pc = 0x234180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234180u;
        // 0x234184: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234188u;
}
