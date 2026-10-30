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

// Function: sub_004B32E8
// Address: 0x4b32e8 - 0x4b3354
void sub_004B32E8_0x4b32e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B32E8_0x4b32e8");
#endif

    switch (ctx->pc) {
        case 0x4b3308u: goto label_4b3308;
        case 0x4b331cu: goto label_4b331c;
        case 0x4b3328u: goto label_4b3328;
        case 0x4b3330u: goto label_4b3330;
        case 0x4b3338u: goto label_4b3338;
        case 0x4b334cu: goto label_4b334c;
        default: break;
    }

    ctx->pc = 0x4b32e8u;

    // 0x4b32e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b32e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b32ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4b32ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4b32f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b32f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b32f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4b32f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b32f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b32f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b32fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b32fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4b3300: 0xc12bea2  jal         func_4AFA88
    ctx->pc = 0x4B3300u;
    SET_GPR_U32(ctx, 31, 0x4B3308u);
    ctx->pc = 0x4B3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3300u;
    // 0x4b3304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFA88u, 0x4B3300u, 0x4B3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3308u;
label_4b3308:
    // 0x4b3308: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x4b3308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x4b330c: 0x24630548  addiu       $v1, $v1, 0x548
    ctx->pc = 0x4b330cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1352));
    // 0x4b3310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3314: 0xc12db7e  jal         func_4B6DF8
    ctx->pc = 0x4B3314u;
    SET_GPR_U32(ctx, 31, 0x4B331Cu);
    ctx->pc = 0x4B3318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3314u;
    // 0x4b3318: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B6DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B6DF8u, 0x4B3314u, 0x4B331Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B331Cu;
label_4b331c:
    // 0x4b331c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b331cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3320: 0xc12dc1e  jal         func_4B7078
    ctx->pc = 0x4B3320u;
    SET_GPR_U32(ctx, 31, 0x4B3328u);
    ctx->pc = 0x4B3324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3320u;
    // 0x4b3324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B7078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B7078u, 0x4B3320u, 0x4B3328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3328u;
label_4b3328:
    // 0x4b3328: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3328u;
    {
        const bool branch_taken_0x4b3328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3328u;
        // 0x4b332c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3328) {
            ctx->pc = 0x4B3338u;
            goto label_4b3338;
        }
    }
    ctx->pc = 0x4B3330u;
label_4b3330:
    // 0x4b3330: 0xc10b510  jal         func_42D440
    ctx->pc = 0x4B3330u;
    SET_GPR_U32(ctx, 31, 0x4B3338u);
    ctx->pc = 0x42D440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D440u, 0x4B3330u, 0x4B3338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3338u;
label_4b3338:
    // 0x4b3338: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4B3338u;
    {
        const bool branch_taken_0x4b3338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3338u;
        // 0x4b333c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3338) {
            ctx->pc = 0x4B335Cu;
            return;
        }
    }
    ctx->pc = 0x4B3340u;
    // 0x4b3340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b3340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3344: 0xc12beb0  jal         func_4AFAC0
    ctx->pc = 0x4B3344u;
    SET_GPR_U32(ctx, 31, 0x4B334Cu);
    ctx->pc = 0x4B3348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3344u;
    // 0x4b3348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFAC0u, 0x4B3344u, 0x4B334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B334Cu;
label_4b334c:
    // 0x4b334c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x4B334Cu;
    {
        const bool branch_taken_0x4b334c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b334c) {
            ctx->pc = 0x4B3330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b3330;
        }
    }
    ctx->pc = 0x4B3354u;
}
