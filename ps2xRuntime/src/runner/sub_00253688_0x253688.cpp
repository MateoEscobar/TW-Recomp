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

// Function: sub_00253688
// Address: 0x253688 - 0x253e48
void sub_00253688_0x253688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253688_0x253688");
#endif

    switch (ctx->pc) {
        case 0x2536ccu: goto label_2536cc;
        case 0x253700u: goto label_253700;
        case 0x253710u: goto label_253710;
        case 0x253720u: goto label_253720;
        case 0x253730u: goto label_253730;
        case 0x253740u: goto label_253740;
        case 0x253750u: goto label_253750;
        case 0x253768u: goto label_253768;
        case 0x253778u: goto label_253778;
        case 0x253788u: goto label_253788;
        case 0x253798u: goto label_253798;
        case 0x2537a8u: goto label_2537a8;
        case 0x2537b8u: goto label_2537b8;
        case 0x2537c8u: goto label_2537c8;
        case 0x2537d8u: goto label_2537d8;
        case 0x2537f0u: goto label_2537f0;
        case 0x253800u: goto label_253800;
        case 0x253810u: goto label_253810;
        case 0x253820u: goto label_253820;
        case 0x253830u: goto label_253830;
        case 0x253848u: goto label_253848;
        case 0x253858u: goto label_253858;
        case 0x253868u: goto label_253868;
        case 0x253878u: goto label_253878;
        case 0x253888u: goto label_253888;
        case 0x2538a0u: goto label_2538a0;
        case 0x2538b0u: goto label_2538b0;
        case 0x2538c0u: goto label_2538c0;
        case 0x2538d0u: goto label_2538d0;
        case 0x2538e0u: goto label_2538e0;
        case 0x2538f8u: goto label_2538f8;
        case 0x253908u: goto label_253908;
        case 0x253918u: goto label_253918;
        case 0x253928u: goto label_253928;
        case 0x253938u: goto label_253938;
        case 0x253954u: goto label_253954;
        case 0x253978u: goto label_253978;
        case 0x253988u: goto label_253988;
        case 0x253998u: goto label_253998;
        case 0x2539a8u: goto label_2539a8;
        case 0x2539b8u: goto label_2539b8;
        case 0x2539e4u: goto label_2539e4;
        case 0x2539f4u: goto label_2539f4;
        case 0x253a04u: goto label_253a04;
        case 0x253a14u: goto label_253a14;
        case 0x253a28u: goto label_253a28;
        case 0x253a38u: goto label_253a38;
        case 0x253a48u: goto label_253a48;
        case 0x253a58u: goto label_253a58;
        case 0x253a68u: goto label_253a68;
        case 0x253a80u: goto label_253a80;
        case 0x253a90u: goto label_253a90;
        case 0x253aa0u: goto label_253aa0;
        case 0x253ab0u: goto label_253ab0;
        case 0x253ac0u: goto label_253ac0;
        case 0x253ad0u: goto label_253ad0;
        case 0x253ae0u: goto label_253ae0;
        case 0x253af0u: goto label_253af0;
        case 0x253b00u: goto label_253b00;
        case 0x253b10u: goto label_253b10;
        case 0x253b20u: goto label_253b20;
        case 0x253b30u: goto label_253b30;
        case 0x253b40u: goto label_253b40;
        case 0x253b50u: goto label_253b50;
        case 0x253b60u: goto label_253b60;
        case 0x253b70u: goto label_253b70;
        case 0x253b80u: goto label_253b80;
        case 0x253b98u: goto label_253b98;
        case 0x253ba8u: goto label_253ba8;
        case 0x253bb8u: goto label_253bb8;
        case 0x253bc8u: goto label_253bc8;
        case 0x253bd8u: goto label_253bd8;
        case 0x253be8u: goto label_253be8;
        case 0x253bf8u: goto label_253bf8;
        case 0x253c08u: goto label_253c08;
        case 0x253c18u: goto label_253c18;
        case 0x253c28u: goto label_253c28;
        case 0x253c38u: goto label_253c38;
        case 0x253c48u: goto label_253c48;
        case 0x253c58u: goto label_253c58;
        case 0x253c68u: goto label_253c68;
        case 0x253c78u: goto label_253c78;
        case 0x253c88u: goto label_253c88;
        case 0x253c98u: goto label_253c98;
        case 0x253cb0u: goto label_253cb0;
        case 0x253cc0u: goto label_253cc0;
        case 0x253cd0u: goto label_253cd0;
        case 0x253ce0u: goto label_253ce0;
        case 0x253cf8u: goto label_253cf8;
        case 0x253d08u: goto label_253d08;
        case 0x253d20u: goto label_253d20;
        case 0x253d30u: goto label_253d30;
        case 0x253d48u: goto label_253d48;
        case 0x253d58u: goto label_253d58;
        case 0x253d70u: goto label_253d70;
        case 0x253d80u: goto label_253d80;
        case 0x253d98u: goto label_253d98;
        case 0x253da8u: goto label_253da8;
        case 0x253db8u: goto label_253db8;
        case 0x253dc8u: goto label_253dc8;
        case 0x253de0u: goto label_253de0;
        case 0x253df0u: goto label_253df0;
        case 0x253e08u: goto label_253e08;
        case 0x253e18u: goto label_253e18;
        case 0x253e28u: goto label_253e28;
        case 0x253e38u: goto label_253e38;
        default: break;
    }

    ctx->pc = 0x253688u;

    // 0x253688: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x253688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25368c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25368cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x253690: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x253690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x253694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25369c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x25369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2536a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2536a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2536a4: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2536A4u;
    {
        const bool branch_taken_0x2536a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2536A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536A4u;
        // 0x2536a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536a4) {
            ctx->pc = 0x2536C4u;
            goto label_2536c4;
        }
    }
    ctx->pc = 0x2536ACu;
    // 0x2536ac: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2536acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2536b0: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x2536b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x2536b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2536b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2536b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2536b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2536bc: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2536BCu;
    {
        const bool branch_taken_0x2536bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2536bc) {
            ctx->pc = 0x2536C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2536BCu;
            // 0x2536c0: 0xa0510000  sb          $s1, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2536C4u;
            goto label_2536c4;
        }
    }
    ctx->pc = 0x2536C4u;
label_2536c4:
    // 0x2536c4: 0xc094d82  jal         func_253608
    ctx->pc = 0x2536C4u;
    SET_GPR_U32(ctx, 31, 0x2536CCu);
    ctx->pc = 0x2536C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536C4u;
    // 0x2536c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253608u, 0x2536C4u, 0x2536CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2536CCu;
label_2536cc:
    // 0x2536cc: 0x2e220015  sltiu       $v0, $s1, 0x15
    ctx->pc = 0x2536ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x2536d0: 0x104001dd  beqz        $v0, . + 4 + (0x1DD << 2)
    ctx->pc = 0x2536D0u;
    {
        const bool branch_taken_0x2536d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2536D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2536D0u;
        // 0x2536d4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2536d0) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x2536D8u;
    // 0x2536d8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2536d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2536dc: 0x2442d510  addiu       $v0, $v0, -0x2AF0
    ctx->pc = 0x2536dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956304));
    // 0x2536e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2536e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2536e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2536e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2536e8: 0x800008  jr          $a0
    ctx->pc = 0x2536E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2536F0u: goto label_2536f0;
            case 0x253758u: goto label_253758;
            case 0x2537E0u: goto label_2537e0;
            case 0x253838u: goto label_253838;
            case 0x253890u: goto label_253890;
            case 0x2538E8u: goto label_2538e8;
            case 0x25395Cu: goto label_25395c;
            case 0x2539C8u: goto label_2539c8;
            case 0x253A70u: goto label_253a70;
            case 0x253B88u: goto label_253b88;
            case 0x253CA0u: goto label_253ca0;
            case 0x253CE8u: goto label_253ce8;
            case 0x253D10u: goto label_253d10;
            case 0x253D38u: goto label_253d38;
            case 0x253D60u: goto label_253d60;
            case 0x253D88u: goto label_253d88;
            case 0x253DD0u: goto label_253dd0;
            case 0x253DF8u: goto label_253df8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2536E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2536F0u;
label_2536f0:
    // 0x2536f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2536f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2536f4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2536f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2536f8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2536F8u;
    SET_GPR_U32(ctx, 31, 0x253700u);
    ctx->pc = 0x2536FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2536F8u;
    // 0x2536fc: 0x24060276  addiu       $a2, $zero, 0x276 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2536F8u, 0x253700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253700u;
label_253700:
    // 0x253700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253704: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253708: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253708u;
    SET_GPR_U32(ctx, 31, 0x253710u);
    ctx->pc = 0x25370Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253708u;
    // 0x25370c: 0x24060276  addiu       $a2, $zero, 0x276 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253708u, 0x253710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253710u;
label_253710:
    // 0x253710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253714: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x253714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253718: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253718u;
    SET_GPR_U32(ctx, 31, 0x253720u);
    ctx->pc = 0x25371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253718u;
    // 0x25371c: 0x24060279  addiu       $a2, $zero, 0x279 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253718u, 0x253720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253720u;
label_253720:
    // 0x253720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253724: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x253724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x253728: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253728u;
    SET_GPR_U32(ctx, 31, 0x253730u);
    ctx->pc = 0x25372Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253728u;
    // 0x25372c: 0x24060279  addiu       $a2, $zero, 0x279 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253728u, 0x253730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253730u;
label_253730:
    // 0x253730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253734: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x253734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x253738: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253738u;
    SET_GPR_U32(ctx, 31, 0x253740u);
    ctx->pc = 0x25373Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253738u;
    // 0x25373c: 0x24060277  addiu       $a2, $zero, 0x277 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 631));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253738u, 0x253740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253740u;
label_253740:
    // 0x253740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253744: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x253744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x253748: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253748u;
    SET_GPR_U32(ctx, 31, 0x253750u);
    ctx->pc = 0x25374Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253748u;
    // 0x25374c: 0x24060277  addiu       $a2, $zero, 0x277 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 631));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253748u, 0x253750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253750u;
label_253750:
    // 0x253750: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x253750u;
    {
        const bool branch_taken_0x253750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253750) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253758u;
label_253758:
    // 0x253758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25375c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25375cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253760: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253760u;
    SET_GPR_U32(ctx, 31, 0x253768u);
    ctx->pc = 0x253764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253760u;
    // 0x253764: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253760u, 0x253768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253768u;
label_253768:
    // 0x253768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25376c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x25376cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253770: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253770u;
    SET_GPR_U32(ctx, 31, 0x253778u);
    ctx->pc = 0x253774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253770u;
    // 0x253774: 0x24060052  addiu       $a2, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253770u, 0x253778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253778u;
label_253778:
    // 0x253778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25377c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x25377cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x253780: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253780u;
    SET_GPR_U32(ctx, 31, 0x253788u);
    ctx->pc = 0x253784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253780u;
    // 0x253784: 0x24060033  addiu       $a2, $zero, 0x33 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253780u, 0x253788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253788u;
label_253788:
    // 0x253788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25378c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x25378cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x253790: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253790u;
    SET_GPR_U32(ctx, 31, 0x253798u);
    ctx->pc = 0x253794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253790u;
    // 0x253794: 0x24060037  addiu       $a2, $zero, 0x37 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253790u, 0x253798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253798u;
label_253798:
    // 0x253798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25379c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x25379cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2537a0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2537A0u;
    SET_GPR_U32(ctx, 31, 0x2537A8u);
    ctx->pc = 0x2537A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537A0u;
    // 0x2537a4: 0x24060056  addiu       $a2, $zero, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2537A0u, 0x2537A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537A8u;
label_2537a8:
    // 0x2537a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2537a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537ac: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2537acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2537b0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2537B0u;
    SET_GPR_U32(ctx, 31, 0x2537B8u);
    ctx->pc = 0x2537B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537B0u;
    // 0x2537b4: 0x24060056  addiu       $a2, $zero, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2537B0u, 0x2537B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537B8u;
label_2537b8:
    // 0x2537b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2537b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2537bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2537c0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2537C0u;
    SET_GPR_U32(ctx, 31, 0x2537C8u);
    ctx->pc = 0x2537C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537C0u;
    // 0x2537c4: 0x24060056  addiu       $a2, $zero, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2537C0u, 0x2537C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537C8u;
label_2537c8:
    // 0x2537c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2537c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2537ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2537d0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2537D0u;
    SET_GPR_U32(ctx, 31, 0x2537D8u);
    ctx->pc = 0x2537D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537D0u;
    // 0x2537d4: 0x24060056  addiu       $a2, $zero, 0x56 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2537D0u, 0x2537D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537D8u;
label_2537d8:
    // 0x2537d8: 0x1000019b  b           . + 4 + (0x19B << 2)
    ctx->pc = 0x2537D8u;
    {
        const bool branch_taken_0x2537d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2537d8) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x2537E0u;
label_2537e0:
    // 0x2537e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2537e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2537e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537e8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2537E8u;
    SET_GPR_U32(ctx, 31, 0x2537F0u);
    ctx->pc = 0x2537ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537E8u;
    // 0x2537ec: 0x24060053  addiu       $a2, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2537E8u, 0x2537F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2537F0u;
label_2537f0:
    // 0x2537f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2537f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2537f4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2537f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2537f8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2537F8u;
    SET_GPR_U32(ctx, 31, 0x253800u);
    ctx->pc = 0x2537FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2537F8u;
    // 0x2537fc: 0x24060053  addiu       $a2, $zero, 0x53 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2537F8u, 0x253800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253800u;
label_253800:
    // 0x253800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253804: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x253804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253808: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253808u;
    SET_GPR_U32(ctx, 31, 0x253810u);
    ctx->pc = 0x25380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253808u;
    // 0x25380c: 0x24060057  addiu       $a2, $zero, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253808u, 0x253810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253810u;
label_253810:
    // 0x253810: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253814: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x253814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x253818: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253818u;
    SET_GPR_U32(ctx, 31, 0x253820u);
    ctx->pc = 0x25381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253818u;
    // 0x25381c: 0x24060057  addiu       $a2, $zero, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253818u, 0x253820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253820u;
label_253820:
    // 0x253820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253824: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x253824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x253828: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253828u;
    SET_GPR_U32(ctx, 31, 0x253830u);
    ctx->pc = 0x25382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253828u;
    // 0x25382c: 0x24060057  addiu       $a2, $zero, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253828u, 0x253830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253830u;
label_253830:
    // 0x253830: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x253830u;
    {
        const bool branch_taken_0x253830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253830) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253838u;
label_253838:
    // 0x253838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25383c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25383cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253840: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253840u;
    SET_GPR_U32(ctx, 31, 0x253848u);
    ctx->pc = 0x253844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253840u;
    // 0x253844: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253840u, 0x253848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253848u;
label_253848:
    // 0x253848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25384c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x25384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253850: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253850u;
    SET_GPR_U32(ctx, 31, 0x253858u);
    ctx->pc = 0x253854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253850u;
    // 0x253854: 0x24060054  addiu       $a2, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253850u, 0x253858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253858u;
label_253858:
    // 0x253858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25385c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x25385cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253860: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253860u;
    SET_GPR_U32(ctx, 31, 0x253868u);
    ctx->pc = 0x253864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253860u;
    // 0x253864: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253860u, 0x253868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253868u;
label_253868:
    // 0x253868: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25386c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x25386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x253870: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253870u;
    SET_GPR_U32(ctx, 31, 0x253878u);
    ctx->pc = 0x253874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253870u;
    // 0x253874: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253870u, 0x253878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253878u;
label_253878:
    // 0x253878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25387c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x25387cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x253880: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253880u;
    SET_GPR_U32(ctx, 31, 0x253888u);
    ctx->pc = 0x253884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253880u;
    // 0x253884: 0x24060058  addiu       $a2, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253880u, 0x253888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253888u;
label_253888:
    // 0x253888: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x253888u;
    {
        const bool branch_taken_0x253888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253888) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253890u;
label_253890:
    // 0x253890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253894: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253898: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253898u;
    SET_GPR_U32(ctx, 31, 0x2538A0u);
    ctx->pc = 0x25389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253898u;
    // 0x25389c: 0x24060055  addiu       $a2, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253898u, 0x2538A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538A0u;
label_2538a0:
    // 0x2538a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2538a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538a4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2538a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2538a8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2538A8u;
    SET_GPR_U32(ctx, 31, 0x2538B0u);
    ctx->pc = 0x2538ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538A8u;
    // 0x2538ac: 0x24060055  addiu       $a2, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2538A8u, 0x2538B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538B0u;
label_2538b0:
    // 0x2538b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2538b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2538b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2538b8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2538B8u;
    SET_GPR_U32(ctx, 31, 0x2538C0u);
    ctx->pc = 0x2538BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538B8u;
    // 0x2538bc: 0x24060059  addiu       $a2, $zero, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2538B8u, 0x2538C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538C0u;
label_2538c0:
    // 0x2538c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2538c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2538c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2538c8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2538C8u;
    SET_GPR_U32(ctx, 31, 0x2538D0u);
    ctx->pc = 0x2538CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538C8u;
    // 0x2538cc: 0x24060059  addiu       $a2, $zero, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2538C8u, 0x2538D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538D0u;
label_2538d0:
    // 0x2538d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2538d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2538d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2538d8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2538D8u;
    SET_GPR_U32(ctx, 31, 0x2538E0u);
    ctx->pc = 0x2538DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538D8u;
    // 0x2538dc: 0x24060059  addiu       $a2, $zero, 0x59 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2538D8u, 0x2538E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538E0u;
label_2538e0:
    // 0x2538e0: 0x10000159  b           . + 4 + (0x159 << 2)
    ctx->pc = 0x2538E0u;
    {
        const bool branch_taken_0x2538e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2538e0) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x2538E8u;
label_2538e8:
    // 0x2538e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2538e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538ec: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2538ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2538f0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2538F0u;
    SET_GPR_U32(ctx, 31, 0x2538F8u);
    ctx->pc = 0x2538F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2538F0u;
    // 0x2538f4: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2538F0u, 0x2538F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2538F8u;
label_2538f8:
    // 0x2538f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2538f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2538fc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2538fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x253900: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253900u;
    SET_GPR_U32(ctx, 31, 0x253908u);
    ctx->pc = 0x253904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253900u;
    // 0x253904: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253900u, 0x253908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253908u;
label_253908:
    // 0x253908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25390c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x25390cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x253910: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253910u;
    SET_GPR_U32(ctx, 31, 0x253918u);
    ctx->pc = 0x253914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253910u;
    // 0x253914: 0x24060031  addiu       $a2, $zero, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253910u, 0x253918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253918u;
label_253918:
    // 0x253918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25391c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25391cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x253920: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253920u;
    SET_GPR_U32(ctx, 31, 0x253928u);
    ctx->pc = 0x253924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253920u;
    // 0x253924: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253920u, 0x253928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253928u;
label_253928:
    // 0x253928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25392c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x25392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x253930: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253930u;
    SET_GPR_U32(ctx, 31, 0x253938u);
    ctx->pc = 0x253934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253930u;
    // 0x253934: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253930u, 0x253938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253938u;
label_253938:
    // 0x253938: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x253938u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x25393c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x25393cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x253940: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x253940u;
    {
        const bool branch_taken_0x253940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253940u;
        // 0x253944: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253940) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253948u;
    // 0x253948: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x253948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x25394c: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x25394Cu;
    SET_GPR_U32(ctx, 31, 0x253954u);
    ctx->pc = 0x253950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25394Cu;
    // 0x253950: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x25394Cu, 0x253954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253954u;
label_253954:
    // 0x253954: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x253954u;
    {
        const bool branch_taken_0x253954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253954) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x25395Cu;
label_25395c:
    // 0x25395c: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x25395cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x253960: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x253960u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x253964: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x253964u;
    {
        const bool branch_taken_0x253964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x253968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253964u;
        // 0x253968: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253964) {
            ctx->pc = 0x253978u;
            goto label_253978;
        }
    }
    ctx->pc = 0x25396Cu;
    // 0x25396c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25396cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253970: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253970u;
    SET_GPR_U32(ctx, 31, 0x253978u);
    ctx->pc = 0x253974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253970u;
    // 0x253974: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253970u, 0x253978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253978u;
label_253978:
    // 0x253978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25397c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x25397cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x253980: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253980u;
    SET_GPR_U32(ctx, 31, 0x253988u);
    ctx->pc = 0x253984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253980u;
    // 0x253984: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253980u, 0x253988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253988u;
label_253988:
    // 0x253988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25398c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x25398cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x253990: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253990u;
    SET_GPR_U32(ctx, 31, 0x253998u);
    ctx->pc = 0x253994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253990u;
    // 0x253994: 0x24060029  addiu       $a2, $zero, 0x29 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253990u, 0x253998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253998u;
label_253998:
    // 0x253998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25399c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x25399cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2539a0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2539A0u;
    SET_GPR_U32(ctx, 31, 0x2539A8u);
    ctx->pc = 0x2539A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539A0u;
    // 0x2539a4: 0x2406002b  addiu       $a2, $zero, 0x2B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2539A0u, 0x2539A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539A8u;
label_2539a8:
    // 0x2539a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2539a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539ac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2539acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2539b0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2539B0u;
    SET_GPR_U32(ctx, 31, 0x2539B8u);
    ctx->pc = 0x2539B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539B0u;
    // 0x2539b4: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2539B0u, 0x2539B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539B8u;
label_2539b8:
    // 0x2539b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2539b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539bc: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x2539bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2539c0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2539C0u;
    {
        const bool branch_taken_0x2539c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539C0u;
        // 0x2539c4: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539c0) {
            ctx->pc = 0x253A20u;
            goto label_253a20;
        }
    }
    ctx->pc = 0x2539C8u;
label_2539c8:
    // 0x2539c8: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2539c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2539cc: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2539ccu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2539d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2539D0u;
    {
        const bool branch_taken_0x2539d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2539D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2539D0u;
        // 0x2539d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2539d0) {
            ctx->pc = 0x2539E4u;
            goto label_2539e4;
        }
    }
    ctx->pc = 0x2539D8u;
    // 0x2539d8: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2539d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2539dc: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2539DCu;
    SET_GPR_U32(ctx, 31, 0x2539E4u);
    ctx->pc = 0x2539E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539DCu;
    // 0x2539e0: 0x2406017c  addiu       $a2, $zero, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2539DCu, 0x2539E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539E4u;
label_2539e4:
    // 0x2539e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2539e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2539e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2539ec: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2539ECu;
    SET_GPR_U32(ctx, 31, 0x2539F4u);
    ctx->pc = 0x2539F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539ECu;
    // 0x2539f0: 0x24060022  addiu       $a2, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2539ECu, 0x2539F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2539F4u;
label_2539f4:
    // 0x2539f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2539f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2539f8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x2539f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2539fc: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x2539FCu;
    SET_GPR_U32(ctx, 31, 0x253A04u);
    ctx->pc = 0x253A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2539FCu;
    // 0x253a00: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x2539FCu, 0x253A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A04u;
label_253a04:
    // 0x253a04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a08: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x253a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x253a0c: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253A0Cu;
    SET_GPR_U32(ctx, 31, 0x253A14u);
    ctx->pc = 0x253A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A0Cu;
    // 0x253a10: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253A0Cu, 0x253A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A14u;
label_253a14:
    // 0x253a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a18: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x253a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x253a1c: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x253a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_253a20:
    // 0x253a20: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253A20u;
    SET_GPR_U32(ctx, 31, 0x253A28u);
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253A20u, 0x253A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A28u;
label_253a28:
    // 0x253a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a2c: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x253a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x253a30: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253A30u;
    SET_GPR_U32(ctx, 31, 0x253A38u);
    ctx->pc = 0x253A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A30u;
    // 0x253a34: 0x2406026d  addiu       $a2, $zero, 0x26D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253A30u, 0x253A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A38u;
label_253a38:
    // 0x253a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a3c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x253a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x253a40: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253A40u;
    SET_GPR_U32(ctx, 31, 0x253A48u);
    ctx->pc = 0x253A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A40u;
    // 0x253a44: 0x2406026e  addiu       $a2, $zero, 0x26E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 622));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253A40u, 0x253A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A48u;
label_253a48:
    // 0x253a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a4c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x253a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x253a50: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253A50u;
    SET_GPR_U32(ctx, 31, 0x253A58u);
    ctx->pc = 0x253A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A50u;
    // 0x253a54: 0x2406026f  addiu       $a2, $zero, 0x26F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 623));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253A50u, 0x253A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A58u;
label_253a58:
    // 0x253a58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a5c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x253a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x253a60: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253A60u;
    SET_GPR_U32(ctx, 31, 0x253A68u);
    ctx->pc = 0x253A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A60u;
    // 0x253a64: 0x24060270  addiu       $a2, $zero, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253A60u, 0x253A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A68u;
label_253a68:
    // 0x253a68: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x253A68u;
    {
        const bool branch_taken_0x253a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253a68) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253A70u;
label_253a70:
    // 0x253a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a78: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253A78u;
    SET_GPR_U32(ctx, 31, 0x253A80u);
    ctx->pc = 0x253A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A78u;
    // 0x253a7c: 0x240601fd  addiu       $a2, $zero, 0x1FD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 509));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253A78u, 0x253A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A80u;
label_253a80:
    // 0x253a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a84: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x253a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x253a88: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253A88u;
    SET_GPR_U32(ctx, 31, 0x253A90u);
    ctx->pc = 0x253A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A88u;
    // 0x253a8c: 0x24060207  addiu       $a2, $zero, 0x207 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253A88u, 0x253A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253A90u;
label_253a90:
    // 0x253a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253a94: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x253a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x253a98: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253A98u;
    SET_GPR_U32(ctx, 31, 0x253AA0u);
    ctx->pc = 0x253A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253A98u;
    // 0x253a9c: 0x24060207  addiu       $a2, $zero, 0x207 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 519));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253A98u, 0x253AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AA0u;
label_253aa0:
    // 0x253aa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253aa4: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x253aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x253aa8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253AA8u;
    SET_GPR_U32(ctx, 31, 0x253AB0u);
    ctx->pc = 0x253AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AA8u;
    // 0x253aac: 0x2406020b  addiu       $a2, $zero, 0x20B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253AA8u, 0x253AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AB0u;
label_253ab0:
    // 0x253ab0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ab4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x253ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x253ab8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253AB8u;
    SET_GPR_U32(ctx, 31, 0x253AC0u);
    ctx->pc = 0x253ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AB8u;
    // 0x253abc: 0x24060203  addiu       $a2, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253AB8u, 0x253AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AC0u;
label_253ac0:
    // 0x253ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ac4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x253ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253ac8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253AC8u;
    SET_GPR_U32(ctx, 31, 0x253AD0u);
    ctx->pc = 0x253ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AC8u;
    // 0x253acc: 0x24060203  addiu       $a2, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253AC8u, 0x253AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AD0u;
label_253ad0:
    // 0x253ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ad4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x253ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x253ad8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253AD8u;
    SET_GPR_U32(ctx, 31, 0x253AE0u);
    ctx->pc = 0x253ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AD8u;
    // 0x253adc: 0x24060204  addiu       $a2, $zero, 0x204 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253AD8u, 0x253AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AE0u;
label_253ae0:
    // 0x253ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ae4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x253ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x253ae8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253AE8u;
    SET_GPR_U32(ctx, 31, 0x253AF0u);
    ctx->pc = 0x253AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AE8u;
    // 0x253aec: 0x24060205  addiu       $a2, $zero, 0x205 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253AE8u, 0x253AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253AF0u;
label_253af0:
    // 0x253af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253af4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x253af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x253af8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253AF8u;
    SET_GPR_U32(ctx, 31, 0x253B00u);
    ctx->pc = 0x253AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253AF8u;
    // 0x253afc: 0x24060206  addiu       $a2, $zero, 0x206 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 518));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253AF8u, 0x253B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B00u;
label_253b00:
    // 0x253b00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253b08: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253B08u;
    SET_GPR_U32(ctx, 31, 0x253B10u);
    ctx->pc = 0x253B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B08u;
    // 0x253b0c: 0x24060217  addiu       $a2, $zero, 0x217 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253B08u, 0x253B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B10u;
label_253b10:
    // 0x253b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x253b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253b18: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253B18u;
    SET_GPR_U32(ctx, 31, 0x253B20u);
    ctx->pc = 0x253B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B18u;
    // 0x253b1c: 0x24060219  addiu       $a2, $zero, 0x219 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 537));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253B18u, 0x253B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B20u;
label_253b20:
    // 0x253b20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b24: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x253b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x253b28: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253B28u;
    SET_GPR_U32(ctx, 31, 0x253B30u);
    ctx->pc = 0x253B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B28u;
    // 0x253b2c: 0x24060211  addiu       $a2, $zero, 0x211 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253B28u, 0x253B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B30u;
label_253b30:
    // 0x253b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b34: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253b38: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253B38u;
    SET_GPR_U32(ctx, 31, 0x253B40u);
    ctx->pc = 0x253B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B38u;
    // 0x253b3c: 0x2406020f  addiu       $a2, $zero, 0x20F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 527));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253B38u, 0x253B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B40u;
label_253b40:
    // 0x253b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b44: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x253b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x253b48: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253B48u;
    SET_GPR_U32(ctx, 31, 0x253B50u);
    ctx->pc = 0x253B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B48u;
    // 0x253b4c: 0x24060217  addiu       $a2, $zero, 0x217 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 535));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253B48u, 0x253B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B50u;
label_253b50:
    // 0x253b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b54: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x253b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x253b58: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253B58u;
    SET_GPR_U32(ctx, 31, 0x253B60u);
    ctx->pc = 0x253B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B58u;
    // 0x253b5c: 0x24060219  addiu       $a2, $zero, 0x219 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 537));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253B58u, 0x253B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B60u;
label_253b60:
    // 0x253b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b64: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x253b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x253b68: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253B68u;
    SET_GPR_U32(ctx, 31, 0x253B70u);
    ctx->pc = 0x253B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B68u;
    // 0x253b6c: 0x2406021d  addiu       $a2, $zero, 0x21D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 541));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253B68u, 0x253B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B70u;
label_253b70:
    // 0x253b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b74: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x253b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x253b78: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253B78u;
    SET_GPR_U32(ctx, 31, 0x253B80u);
    ctx->pc = 0x253B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B78u;
    // 0x253b7c: 0x24060211  addiu       $a2, $zero, 0x211 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 529));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253B78u, 0x253B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B80u;
label_253b80:
    // 0x253b80: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x253B80u;
    {
        const bool branch_taken_0x253b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253b80) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253B88u;
label_253b88:
    // 0x253b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b90: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253B90u;
    SET_GPR_U32(ctx, 31, 0x253B98u);
    ctx->pc = 0x253B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253B90u;
    // 0x253b94: 0x2406022b  addiu       $a2, $zero, 0x22B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 555));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253B90u, 0x253B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253B98u;
label_253b98:
    // 0x253b98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253b9c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x253b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x253ba0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253BA0u;
    SET_GPR_U32(ctx, 31, 0x253BA8u);
    ctx->pc = 0x253BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BA0u;
    // 0x253ba4: 0x24060235  addiu       $a2, $zero, 0x235 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 565));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253BA0u, 0x253BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BA8u;
label_253ba8:
    // 0x253ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bac: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x253bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x253bb0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253BB0u;
    SET_GPR_U32(ctx, 31, 0x253BB8u);
    ctx->pc = 0x253BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BB0u;
    // 0x253bb4: 0x24060235  addiu       $a2, $zero, 0x235 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 565));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253BB0u, 0x253BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BB8u;
label_253bb8:
    // 0x253bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bbc: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x253bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x253bc0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253BC0u;
    SET_GPR_U32(ctx, 31, 0x253BC8u);
    ctx->pc = 0x253BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BC0u;
    // 0x253bc4: 0x24060239  addiu       $a2, $zero, 0x239 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 569));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253BC0u, 0x253BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BC8u;
label_253bc8:
    // 0x253bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x253bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x253bd0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253BD0u;
    SET_GPR_U32(ctx, 31, 0x253BD8u);
    ctx->pc = 0x253BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BD0u;
    // 0x253bd4: 0x24060231  addiu       $a2, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253BD0u, 0x253BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BD8u;
label_253bd8:
    // 0x253bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x253bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253be0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253BE0u;
    SET_GPR_U32(ctx, 31, 0x253BE8u);
    ctx->pc = 0x253BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BE0u;
    // 0x253be4: 0x24060231  addiu       $a2, $zero, 0x231 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 561));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253BE0u, 0x253BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BE8u;
label_253be8:
    // 0x253be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bec: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x253becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x253bf0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253BF0u;
    SET_GPR_U32(ctx, 31, 0x253BF8u);
    ctx->pc = 0x253BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253BF0u;
    // 0x253bf4: 0x24060232  addiu       $a2, $zero, 0x232 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 562));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253BF0u, 0x253BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253BF8u;
label_253bf8:
    // 0x253bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253bfc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x253bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x253c00: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C00u;
    SET_GPR_U32(ctx, 31, 0x253C08u);
    ctx->pc = 0x253C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C00u;
    // 0x253c04: 0x24060233  addiu       $a2, $zero, 0x233 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 563));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C00u, 0x253C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C08u;
label_253c08:
    // 0x253c08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c0c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x253c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x253c10: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C10u;
    SET_GPR_U32(ctx, 31, 0x253C18u);
    ctx->pc = 0x253C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C10u;
    // 0x253c14: 0x24060234  addiu       $a2, $zero, 0x234 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C10u, 0x253C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C18u;
label_253c18:
    // 0x253c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x253c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253c20: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C20u;
    SET_GPR_U32(ctx, 31, 0x253C28u);
    ctx->pc = 0x253C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C20u;
    // 0x253c24: 0x24060245  addiu       $a2, $zero, 0x245 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C20u, 0x253C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C28u;
label_253c28:
    // 0x253c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x253c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x253c30: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C30u;
    SET_GPR_U32(ctx, 31, 0x253C38u);
    ctx->pc = 0x253C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C30u;
    // 0x253c34: 0x24060247  addiu       $a2, $zero, 0x247 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C30u, 0x253C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C38u;
label_253c38:
    // 0x253c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c3c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x253c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x253c40: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C40u;
    SET_GPR_U32(ctx, 31, 0x253C48u);
    ctx->pc = 0x253C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C40u;
    // 0x253c44: 0x2406023f  addiu       $a2, $zero, 0x23F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C40u, 0x253C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C48u;
label_253c48:
    // 0x253c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c4c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253c50: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C50u;
    SET_GPR_U32(ctx, 31, 0x253C58u);
    ctx->pc = 0x253C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C50u;
    // 0x253c54: 0x2406023d  addiu       $a2, $zero, 0x23D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 573));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C50u, 0x253C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C58u;
label_253c58:
    // 0x253c58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c5c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x253c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x253c60: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C60u;
    SET_GPR_U32(ctx, 31, 0x253C68u);
    ctx->pc = 0x253C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C60u;
    // 0x253c64: 0x24060245  addiu       $a2, $zero, 0x245 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 581));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C60u, 0x253C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C68u;
label_253c68:
    // 0x253c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c6c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x253c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x253c70: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C70u;
    SET_GPR_U32(ctx, 31, 0x253C78u);
    ctx->pc = 0x253C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C70u;
    // 0x253c74: 0x24060247  addiu       $a2, $zero, 0x247 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 583));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C70u, 0x253C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C78u;
label_253c78:
    // 0x253c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c7c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x253c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x253c80: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C80u;
    SET_GPR_U32(ctx, 31, 0x253C88u);
    ctx->pc = 0x253C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C80u;
    // 0x253c84: 0x2406024b  addiu       $a2, $zero, 0x24B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 587));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C80u, 0x253C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C88u;
label_253c88:
    // 0x253c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253c8c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x253c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x253c90: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253C90u;
    SET_GPR_U32(ctx, 31, 0x253C98u);
    ctx->pc = 0x253C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253C90u;
    // 0x253c94: 0x2406023f  addiu       $a2, $zero, 0x23F (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 575));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253C90u, 0x253C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253C98u;
label_253c98:
    // 0x253c98: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x253C98u;
    {
        const bool branch_taken_0x253c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253c98) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253CA0u;
label_253ca0:
    // 0x253ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253ca8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253CA8u;
    SET_GPR_U32(ctx, 31, 0x253CB0u);
    ctx->pc = 0x253CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CA8u;
    // 0x253cac: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253CA8u, 0x253CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CB0u;
label_253cb0:
    // 0x253cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cb4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253cb8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253CB8u;
    SET_GPR_U32(ctx, 31, 0x253CC0u);
    ctx->pc = 0x253CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CB8u;
    // 0x253cbc: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253CB8u, 0x253CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CC0u;
label_253cc0:
    // 0x253cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x253cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x253cc8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253CC8u;
    SET_GPR_U32(ctx, 31, 0x253CD0u);
    ctx->pc = 0x253CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CC8u;
    // 0x253ccc: 0x240600c9  addiu       $a2, $zero, 0xC9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253CC8u, 0x253CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CD0u;
label_253cd0:
    // 0x253cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cd4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x253cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x253cd8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253CD8u;
    SET_GPR_U32(ctx, 31, 0x253CE0u);
    ctx->pc = 0x253CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CD8u;
    // 0x253cdc: 0x240600c9  addiu       $a2, $zero, 0xC9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253CD8u, 0x253CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CE0u;
label_253ce0:
    // 0x253ce0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x253CE0u;
    {
        const bool branch_taken_0x253ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253ce0) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253CE8u;
label_253ce8:
    // 0x253ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cf0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253CF0u;
    SET_GPR_U32(ctx, 31, 0x253CF8u);
    ctx->pc = 0x253CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253CF0u;
    // 0x253cf4: 0x24060164  addiu       $a2, $zero, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253CF0u, 0x253CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253CF8u;
label_253cf8:
    // 0x253cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cfc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253d00: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253D00u;
    SET_GPR_U32(ctx, 31, 0x253D08u);
    ctx->pc = 0x253D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D00u;
    // 0x253d04: 0x24060164  addiu       $a2, $zero, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253D00u, 0x253D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D08u;
label_253d08:
    // 0x253d08: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x253D08u;
    {
        const bool branch_taken_0x253d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d08) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253D10u;
label_253d10:
    // 0x253d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d18: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253D18u;
    SET_GPR_U32(ctx, 31, 0x253D20u);
    ctx->pc = 0x253D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D18u;
    // 0x253d1c: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253D18u, 0x253D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D20u;
label_253d20:
    // 0x253d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d24: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253d28: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253D28u;
    SET_GPR_U32(ctx, 31, 0x253D30u);
    ctx->pc = 0x253D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D28u;
    // 0x253d2c: 0x24060140  addiu       $a2, $zero, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253D28u, 0x253D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D30u;
label_253d30:
    // 0x253d30: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x253D30u;
    {
        const bool branch_taken_0x253d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d30) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253D38u;
label_253d38:
    // 0x253d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d40: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253D40u;
    SET_GPR_U32(ctx, 31, 0x253D48u);
    ctx->pc = 0x253D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D40u;
    // 0x253d44: 0x240600c4  addiu       $a2, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253D40u, 0x253D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D48u;
label_253d48:
    // 0x253d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d4c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253d50: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253D50u;
    SET_GPR_U32(ctx, 31, 0x253D58u);
    ctx->pc = 0x253D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D50u;
    // 0x253d54: 0x240600c4  addiu       $a2, $zero, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253D50u, 0x253D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D58u;
label_253d58:
    // 0x253d58: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x253D58u;
    {
        const bool branch_taken_0x253d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d58) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253D60u;
label_253d60:
    // 0x253d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d68: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253D68u;
    SET_GPR_U32(ctx, 31, 0x253D70u);
    ctx->pc = 0x253D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D68u;
    // 0x253d6c: 0x240600cf  addiu       $a2, $zero, 0xCF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253D68u, 0x253D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D70u;
label_253d70:
    // 0x253d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d74: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253d78: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253D78u;
    SET_GPR_U32(ctx, 31, 0x253D80u);
    ctx->pc = 0x253D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D78u;
    // 0x253d7c: 0x240600cf  addiu       $a2, $zero, 0xCF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 207));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253D78u, 0x253D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D80u;
label_253d80:
    // 0x253d80: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x253D80u;
    {
        const bool branch_taken_0x253d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253d80) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253D88u;
label_253d88:
    // 0x253d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253d8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d90: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253D90u;
    SET_GPR_U32(ctx, 31, 0x253D98u);
    ctx->pc = 0x253D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253D90u;
    // 0x253d94: 0x240600d2  addiu       $a2, $zero, 0xD2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253D90u, 0x253D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253D98u;
label_253d98:
    // 0x253d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253d9c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253da0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253DA0u;
    SET_GPR_U32(ctx, 31, 0x253DA8u);
    ctx->pc = 0x253DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DA0u;
    // 0x253da4: 0x240600d2  addiu       $a2, $zero, 0xD2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253DA0u, 0x253DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DA8u;
label_253da8:
    // 0x253da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253dac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x253dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x253db0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253DB0u;
    SET_GPR_U32(ctx, 31, 0x253DB8u);
    ctx->pc = 0x253DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DB0u;
    // 0x253db4: 0x240600db  addiu       $a2, $zero, 0xDB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 219));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253DB0u, 0x253DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DB8u;
label_253db8:
    // 0x253db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253dbc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x253dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x253dc0: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253DC0u;
    SET_GPR_U32(ctx, 31, 0x253DC8u);
    ctx->pc = 0x253DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DC0u;
    // 0x253dc4: 0x240600df  addiu       $a2, $zero, 0xDF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253DC0u, 0x253DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DC8u;
label_253dc8:
    // 0x253dc8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x253DC8u;
    {
        const bool branch_taken_0x253dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253dc8) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253DD0u;
label_253dd0:
    // 0x253dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253dd8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253DD8u;
    SET_GPR_U32(ctx, 31, 0x253DE0u);
    ctx->pc = 0x253DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DD8u;
    // 0x253ddc: 0x2406015d  addiu       $a2, $zero, 0x15D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253DD8u, 0x253DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DE0u;
label_253de0:
    // 0x253de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253de4: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253de8: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253DE8u;
    SET_GPR_U32(ctx, 31, 0x253DF0u);
    ctx->pc = 0x253DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253DE8u;
    // 0x253dec: 0x2406015d  addiu       $a2, $zero, 0x15D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 349));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253DE8u, 0x253DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253DF0u;
label_253df0:
    // 0x253df0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x253DF0u;
    {
        const bool branch_taken_0x253df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x253df0) {
            ctx->pc = 0x253E48u;
            return;
        }
    }
    ctx->pc = 0x253DF8u;
label_253df8:
    // 0x253df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253dfc: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x253dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x253e00: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253E00u;
    SET_GPR_U32(ctx, 31, 0x253E08u);
    ctx->pc = 0x253E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E00u;
    // 0x253e04: 0x240601d2  addiu       $a2, $zero, 0x1D2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 466));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253E00u, 0x253E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E08u;
label_253e08:
    // 0x253e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e0c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x253e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x253e10: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253E10u;
    SET_GPR_U32(ctx, 31, 0x253E18u);
    ctx->pc = 0x253E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E10u;
    // 0x253e14: 0x240601d5  addiu       $a2, $zero, 0x1D5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253E10u, 0x253E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E18u;
label_253e18:
    // 0x253e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e1c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x253e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x253e20: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253E20u;
    SET_GPR_U32(ctx, 31, 0x253E28u);
    ctx->pc = 0x253E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E20u;
    // 0x253e24: 0x240601d6  addiu       $a2, $zero, 0x1D6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 470));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253E20u, 0x253E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E28u;
label_253e28:
    // 0x253e28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x253e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e30: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253E30u;
    SET_GPR_U32(ctx, 31, 0x253E38u);
    ctx->pc = 0x253E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E30u;
    // 0x253e34: 0x240601d5  addiu       $a2, $zero, 0x1D5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253E30u, 0x253E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E38u;
label_253e38:
    // 0x253e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x253e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e3c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x253e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x253e40: 0xc094d7c  jal         func_2535F0
    ctx->pc = 0x253E40u;
    SET_GPR_U32(ctx, 31, 0x253E48u);
    ctx->pc = 0x253E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253E40u;
    // 0x253e44: 0x240601d5  addiu       $a2, $zero, 0x1D5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 469));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2535F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535F0u, 0x253E40u, 0x253E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253E48u;
}
