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

// Function: sub_0035D498
// Address: 0x35d498 - 0x35d5b0
void sub_0035D498_0x35d498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D498_0x35d498");
#endif

    switch (ctx->pc) {
        case 0x35d4ccu: goto label_35d4cc;
        case 0x35d4d4u: goto label_35d4d4;
        case 0x35d4e8u: goto label_35d4e8;
        case 0x35d4fcu: goto label_35d4fc;
        case 0x35d510u: goto label_35d510;
        case 0x35d524u: goto label_35d524;
        case 0x35d538u: goto label_35d538;
        case 0x35d550u: goto label_35d550;
        case 0x35d558u: goto label_35d558;
        case 0x35d578u: goto label_35d578;
        case 0x35d584u: goto label_35d584;
        default: break;
    }

    ctx->pc = 0x35d498u;

    // 0x35d498: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35d498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35d49c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x35d49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d4a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x35d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x35d4a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35d4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4a8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x35d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x35d4ac: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x35d4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x35d4b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x35d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x35d4b4: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x35d4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x35d4b8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x35d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x35d4bc: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x35d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x35d4c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35d4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35d4c4: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D4C4u;
    SET_GPR_U32(ctx, 31, 0x35D4CCu);
    ctx->pc = 0x35D4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D4C4u;
    // 0x35d4c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D4C4u, 0x35D4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D4CCu;
label_35d4cc:
    // 0x35d4cc: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D4CCu;
    SET_GPR_U32(ctx, 31, 0x35D4D4u);
    ctx->pc = 0x35D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D4CCu;
    // 0x35d4d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D4CCu, 0x35D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D4D4u;
label_35d4d4:
    // 0x35d4d4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x35d4d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35d4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d4e0: 0xc102488  jal         func_409220
    ctx->pc = 0x35D4E0u;
    SET_GPR_U32(ctx, 31, 0x35D4E8u);
    ctx->pc = 0x35D4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D4E0u;
    // 0x35d4e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D4E0u, 0x35D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D4E8u;
label_35d4e8:
    // 0x35d4e8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x35d4e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4f0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x35d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x35d4f4: 0xc102488  jal         func_409220
    ctx->pc = 0x35D4F4u;
    SET_GPR_U32(ctx, 31, 0x35D4FCu);
    ctx->pc = 0x35D4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D4F4u;
    // 0x35d4f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D4F4u, 0x35D4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D4FCu;
label_35d4fc:
    // 0x35d4fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x35d4fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d504: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35d508: 0xc102488  jal         func_409220
    ctx->pc = 0x35D508u;
    SET_GPR_U32(ctx, 31, 0x35D510u);
    ctx->pc = 0x35D50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D508u;
    // 0x35d50c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D508u, 0x35D510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D510u;
label_35d510:
    // 0x35d510: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35d510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d518: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35d518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x35d51c: 0xc102488  jal         func_409220
    ctx->pc = 0x35D51Cu;
    SET_GPR_U32(ctx, 31, 0x35D524u);
    ctx->pc = 0x35D520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D51Cu;
    // 0x35d520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D51Cu, 0x35D524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D524u;
label_35d524:
    // 0x35d524: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35d524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35d528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d52c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35d52cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x35d530: 0xc102488  jal         func_409220
    ctx->pc = 0x35D530u;
    SET_GPR_U32(ctx, 31, 0x35D538u);
    ctx->pc = 0x35D534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D530u;
    // 0x35d534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x35D530u, 0x35D538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D538u;
label_35d538:
    // 0x35d538: 0x3406ffc0  ori         $a2, $zero, 0xFFC0
    ctx->pc = 0x35d538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x35d53c: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x35d53cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x35d540: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35d540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d544: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35d544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x35d548: 0xc102472  jal         func_4091C8
    ctx->pc = 0x35D548u;
    SET_GPR_U32(ctx, 31, 0x35D550u);
    ctx->pc = 0x35D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D548u;
    // 0x35d54c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x35D548u, 0x35D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D550u;
label_35d550:
    // 0x35d550: 0xc10b108  jal         func_42C420
    ctx->pc = 0x35D550u;
    SET_GPR_U32(ctx, 31, 0x35D558u);
    ctx->pc = 0x35D554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D550u;
    // 0x35d554: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x35D550u, 0x35D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D558u;
label_35d558:
    // 0x35d558: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x35d558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d55c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x35d55cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d560: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x35d560u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d564: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x35d564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d568: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x35d568u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d56c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35d56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d570: 0xc08e7c8  jal         func_239F20
    ctx->pc = 0x35D570u;
    SET_GPR_U32(ctx, 31, 0x35D578u);
    ctx->pc = 0x35D574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D570u;
    // 0x35d574: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239F20u, 0x35D570u, 0x35D578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D578u;
label_35d578:
    // 0x35d578: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35d578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d57c: 0xc102562  jal         func_409588
    ctx->pc = 0x35D57Cu;
    SET_GPR_U32(ctx, 31, 0x35D584u);
    ctx->pc = 0x35D580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D57Cu;
    // 0x35d580: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x35D57Cu, 0x35D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D584u;
label_35d584:
    // 0x35d584: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x35d584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35d588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35d588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d58c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x35d58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35d590: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x35d590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35d594: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x35d594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35d598: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x35d598u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d59c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x35d59cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d5a0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x35d5a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d5a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35d5a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x35D5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5A8u;
        // 0x35d5ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D5A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D5B0u;
}
