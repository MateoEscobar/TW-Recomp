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

// Function: sub_0040A460
// Address: 0x40a460 - 0x40a510
void sub_0040A460_0x40a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A460_0x40a460");
#endif

    switch (ctx->pc) {
        case 0x40a48cu: goto label_40a48c;
        case 0x40a494u: goto label_40a494;
        case 0x40a4a0u: goto label_40a4a0;
        case 0x40a4acu: goto label_40a4ac;
        case 0x40a4b8u: goto label_40a4b8;
        case 0x40a4c8u: goto label_40a4c8;
        case 0x40a4d4u: goto label_40a4d4;
        case 0x40a4dcu: goto label_40a4dc;
        case 0x40a4ecu: goto label_40a4ec;
        case 0x40a4f8u: goto label_40a4f8;
        default: break;
    }

    ctx->pc = 0x40a460u;

    // 0x40a460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40a460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40a464: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40a464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40a468: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40a468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40a46c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40a46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a470: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40a470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40a474: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40a474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a478: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40a47c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40a480: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40a480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a484: 0xc102866  jal         func_40A198
    ctx->pc = 0x40A484u;
    SET_GPR_U32(ctx, 31, 0x40A48Cu);
    ctx->pc = 0x40A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A484u;
    // 0x40a488: 0x24a58188  addiu       $a1, $a1, -0x7E78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A484u, 0x40A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A48Cu;
label_40a48c:
    // 0x40a48c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40A48Cu;
    SET_GPR_U32(ctx, 31, 0x40A494u);
    ctx->pc = 0x40A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A48Cu;
    // 0x40a490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A48Cu, 0x40A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A494u;
label_40a494:
    // 0x40a494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40a494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a498: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40A498u;
    SET_GPR_U32(ctx, 31, 0x40A4A0u);
    ctx->pc = 0x40A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A498u;
    // 0x40a49c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A498u, 0x40A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A4A0u;
label_40a4a0:
    // 0x40a4a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40a4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a4a4: 0xc0c8d16  jal         func_323458
    ctx->pc = 0x40A4A4u;
    SET_GPR_U32(ctx, 31, 0x40A4ACu);
    ctx->pc = 0x40A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A4A4u;
    // 0x40a4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323458u, 0x40A4A4u, 0x40A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A4ACu;
label_40a4ac:
    // 0x40a4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a4b0: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40A4B0u;
    SET_GPR_U32(ctx, 31, 0x40A4B8u);
    ctx->pc = 0x40A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A4B0u;
    // 0x40a4b4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40A4B0u, 0x40A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A4B8u;
label_40a4b8:
    // 0x40a4b8: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40a4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x40a4bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a4bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a4c0: 0xc102866  jal         func_40A198
    ctx->pc = 0x40A4C0u;
    SET_GPR_U32(ctx, 31, 0x40A4C8u);
    ctx->pc = 0x40A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A4C0u;
    // 0x40a4c4: 0x24a581b0  addiu       $a1, $a1, -0x7E50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40A4C0u, 0x40A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A4C8u;
label_40a4c8:
    // 0x40a4c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40a4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40a4cc: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x40A4CCu;
    SET_GPR_U32(ctx, 31, 0x40A4D4u);
    ctx->pc = 0x40A4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A4CCu;
    // 0x40a4d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40A4CCu, 0x40A4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A4D4u;
label_40a4d4:
    // 0x40a4d4: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40A4D4u;
    SET_GPR_U32(ctx, 31, 0x40A4DCu);
    ctx->pc = 0x40A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A4D4u;
    // 0x40a4d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40A4D4u, 0x40A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A4DCu;
label_40a4dc:
    // 0x40a4dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x40a4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a4e4: 0xc0cc9b8  jal         func_3326E0
    ctx->pc = 0x40A4E4u;
    SET_GPR_U32(ctx, 31, 0x40A4ECu);
    ctx->pc = 0x40A4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A4E4u;
    // 0x40a4e8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3326E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3326E0u, 0x40A4E4u, 0x40A4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A4ECu;
label_40a4ec:
    // 0x40a4ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40a4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a4f0: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A4F0u;
    SET_GPR_U32(ctx, 31, 0x40A4F8u);
    ctx->pc = 0x40A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A4F0u;
    // 0x40a4f4: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A4F0u, 0x40A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A4F8u;
label_40a4f8:
    // 0x40a4f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40a4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40a4fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40a4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a500: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40a500u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a508: 0x3e00008  jr          $ra
    ctx->pc = 0x40A508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A508u;
        // 0x40a50c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A510u;
}
