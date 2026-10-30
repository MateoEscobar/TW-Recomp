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

// Function: sub_002374D8
// Address: 0x2374d8 - 0x237548
void sub_002374D8_0x2374d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002374D8_0x2374d8");
#endif

    switch (ctx->pc) {
        case 0x2374f4u: goto label_2374f4;
        case 0x2374fcu: goto label_2374fc;
        default: break;
    }

    ctx->pc = 0x2374d8u;

    // 0x2374d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2374d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2374dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2374dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2374e0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2374e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2374e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2374e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2374e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2374e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2374ec: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2374ECu;
    SET_GPR_U32(ctx, 31, 0x2374F4u);
    ctx->pc = 0x2374F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374ECu;
    // 0x2374f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2374ECu, 0x2374F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374F4u;
label_2374f4:
    // 0x2374f4: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2374F4u;
    SET_GPR_U32(ctx, 31, 0x2374FCu);
    ctx->pc = 0x2374F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2374F4u;
    // 0x2374f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2374F4u, 0x2374FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2374FCu;
label_2374fc:
    // 0x2374fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2374fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237500: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x237500u;
    {
        const bool branch_taken_0x237500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237500) {
            ctx->pc = 0x237504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x237500u;
            // 0x237504: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23753Cu;
            goto label_23753c;
        }
    }
    ctx->pc = 0x237508u;
    // 0x237508: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x237508u;
    {
        const bool branch_taken_0x237508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237508u;
        // 0x23750c: 0xdc8200e0  ld          $v0, 0xE0($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237508) {
            ctx->pc = 0x237520u;
            goto label_237520;
        }
    }
    ctx->pc = 0x237510u;
    // 0x237510: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x237510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x237514: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x237514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x237518: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x237518u;
    {
        const bool branch_taken_0x237518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23751Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237518u;
        // 0x23751c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237518) {
            ctx->pc = 0x237534u;
            goto label_237534;
        }
    }
    ctx->pc = 0x237520u;
label_237520:
    // 0x237520: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x237520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x237524: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x237524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x237528: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x237528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x23752c: 0x3463007f  ori         $v1, $v1, 0x7F
    ctx->pc = 0x23752cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)127);
    // 0x237530: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x237530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_237534:
    // 0x237534: 0xfc8200e0  sd          $v0, 0xE0($a0)
    ctx->pc = 0x237534u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 224), GPR_U64(ctx, 2));
    // 0x237538: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x237538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23753c:
    // 0x23753c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23753cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x237540: 0x3e00008  jr          $ra
    ctx->pc = 0x237540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237540u;
        // 0x237544: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237548u;
}
