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

// Function: sub_004194B8
// Address: 0x4194b8 - 0x419558
void sub_004194B8_0x4194b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004194B8_0x4194b8");
#endif

    switch (ctx->pc) {
        case 0x4194d8u: goto label_4194d8;
        case 0x4194ecu: goto label_4194ec;
        case 0x419510u: goto label_419510;
        case 0x41951cu: goto label_41951c;
        case 0x41952cu: goto label_41952c;
        case 0x419538u: goto label_419538;
        default: break;
    }

    ctx->pc = 0x4194b8u;

    // 0x4194b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4194b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4194bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4194bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4194c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4194c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4194c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4194c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4194c8: 0x26110264  addiu       $s1, $s0, 0x264
    ctx->pc = 0x4194c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    // 0x4194cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4194ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4194d0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x4194D0u;
    SET_GPR_U32(ctx, 31, 0x4194D8u);
    ctx->pc = 0x4194D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4194D0u;
    // 0x4194d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x4194D0u, 0x4194D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4194D8u;
label_4194d8:
    // 0x4194d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4194D8u;
    {
        const bool branch_taken_0x4194d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4194DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4194D8u;
        // 0x4194dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4194d8) {
            ctx->pc = 0x4194F4u;
            goto label_4194f4;
        }
    }
    ctx->pc = 0x4194E0u;
    // 0x4194e0: 0x8e050264  lw          $a1, 0x264($s0)
    ctx->pc = 0x4194e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x4194e4: 0xc044096  jal         func_110258
    ctx->pc = 0x4194E4u;
    SET_GPR_U32(ctx, 31, 0x4194ECu);
    ctx->pc = 0x4194E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4194E4u;
    // 0x4194e8: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110258u, 0x4194E4u, 0x4194ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4194ECu;
label_4194ec:
    // 0x4194ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4194ECu;
    {
        const bool branch_taken_0x4194ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4194F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4194ECu;
        // 0x4194f0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4194ec) {
            ctx->pc = 0x41953Cu;
            goto label_41953c;
        }
    }
    ctx->pc = 0x4194F4u;
label_4194f4:
    // 0x4194f4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4194f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x4194f8: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x4194f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x4194fc: 0x24a5adf0  addiu       $a1, $a1, -0x5210
    ctx->pc = 0x4194fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946288));
    // 0x419500: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x419500u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419504: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x419504u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419508: 0xc043f1c  jal         func_10FC70
    ctx->pc = 0x419508u;
    SET_GPR_U32(ctx, 31, 0x419510u);
    ctx->pc = 0x41950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419508u;
    // 0x41950c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC70u, 0x419508u, 0x419510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419510u;
label_419510:
    // 0x419510: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x419510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    // 0x419514: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x419514u;
    SET_GPR_U32(ctx, 31, 0x41951Cu);
    ctx->pc = 0x419518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419514u;
    // 0x419518: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x419514u, 0x41951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41951Cu;
label_41951c:
    // 0x41951c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x41951Cu;
    {
        const bool branch_taken_0x41951c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x419520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41951Cu;
        // 0x419520: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41951c) {
            ctx->pc = 0x41953Cu;
            goto label_41953c;
        }
    }
    ctx->pc = 0x419524u;
    // 0x419524: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x419524u;
    SET_GPR_U32(ctx, 31, 0x41952Cu);
    ctx->pc = 0x419528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419524u;
    // 0x419528: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x419524u, 0x41952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41952Cu;
label_41952c:
    // 0x41952c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x41952cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x419530: 0xc046cfe  jal         func_11B3F8
    ctx->pc = 0x419530u;
    SET_GPR_U32(ctx, 31, 0x419538u);
    ctx->pc = 0x419534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x419530u;
    // 0x419534: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B3F8u, 0x419530u, 0x419538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x419538u;
label_419538:
    // 0x419538: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x419538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41953c:
    // 0x41953c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41953cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x419540: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x419540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x419544: 0x3e00008  jr          $ra
    ctx->pc = 0x419544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x419548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x419544u;
        // 0x419548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x419544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41954Cu;
    // 0x41954c: 0x0  nop
    ctx->pc = 0x41954cu;
    // NOP
    // 0x419550: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x419550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x419554: 0x0  nop
    ctx->pc = 0x419554u;
    // NOP
    ctx->pc = 0x419558u;
}
