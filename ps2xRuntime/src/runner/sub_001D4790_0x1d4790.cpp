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

// Function: sub_001D4790
// Address: 0x1d4790 - 0x1d48e0
void sub_001D4790_0x1d4790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4790_0x1d4790");
#endif

    switch (ctx->pc) {
        case 0x1d4790u: goto label_1d4790;
        case 0x1d4794u: goto label_1d4794;
        case 0x1d4798u: goto label_1d4798;
        case 0x1d479cu: goto label_1d479c;
        case 0x1d47a0u: goto label_1d47a0;
        case 0x1d47a4u: goto label_1d47a4;
        case 0x1d47a8u: goto label_1d47a8;
        case 0x1d47acu: goto label_1d47ac;
        case 0x1d47b0u: goto label_1d47b0;
        case 0x1d47b4u: goto label_1d47b4;
        case 0x1d47b8u: goto label_1d47b8;
        case 0x1d47bcu: goto label_1d47bc;
        case 0x1d47c0u: goto label_1d47c0;
        case 0x1d47c4u: goto label_1d47c4;
        case 0x1d47c8u: goto label_1d47c8;
        case 0x1d47ccu: goto label_1d47cc;
        case 0x1d47d0u: goto label_1d47d0;
        case 0x1d47d4u: goto label_1d47d4;
        case 0x1d47d8u: goto label_1d47d8;
        case 0x1d47dcu: goto label_1d47dc;
        case 0x1d47e0u: goto label_1d47e0;
        case 0x1d47e4u: goto label_1d47e4;
        case 0x1d47e8u: goto label_1d47e8;
        case 0x1d47ecu: goto label_1d47ec;
        case 0x1d47f0u: goto label_1d47f0;
        case 0x1d47f4u: goto label_1d47f4;
        case 0x1d47f8u: goto label_1d47f8;
        case 0x1d47fcu: goto label_1d47fc;
        case 0x1d4800u: goto label_1d4800;
        case 0x1d4804u: goto label_1d4804;
        case 0x1d4808u: goto label_1d4808;
        case 0x1d480cu: goto label_1d480c;
        case 0x1d4810u: goto label_1d4810;
        case 0x1d4814u: goto label_1d4814;
        case 0x1d4818u: goto label_1d4818;
        case 0x1d481cu: goto label_1d481c;
        case 0x1d4820u: goto label_1d4820;
        case 0x1d4824u: goto label_1d4824;
        case 0x1d4828u: goto label_1d4828;
        case 0x1d482cu: goto label_1d482c;
        case 0x1d4830u: goto label_1d4830;
        case 0x1d4834u: goto label_1d4834;
        case 0x1d4838u: goto label_1d4838;
        case 0x1d483cu: goto label_1d483c;
        case 0x1d4840u: goto label_1d4840;
        case 0x1d4844u: goto label_1d4844;
        case 0x1d4848u: goto label_1d4848;
        case 0x1d484cu: goto label_1d484c;
        case 0x1d4850u: goto label_1d4850;
        case 0x1d4854u: goto label_1d4854;
        case 0x1d4858u: goto label_1d4858;
        case 0x1d485cu: goto label_1d485c;
        case 0x1d4860u: goto label_1d4860;
        case 0x1d4864u: goto label_1d4864;
        case 0x1d4868u: goto label_1d4868;
        case 0x1d486cu: goto label_1d486c;
        case 0x1d4870u: goto label_1d4870;
        case 0x1d4874u: goto label_1d4874;
        case 0x1d4878u: goto label_1d4878;
        case 0x1d487cu: goto label_1d487c;
        case 0x1d4880u: goto label_1d4880;
        case 0x1d4884u: goto label_1d4884;
        case 0x1d4888u: goto label_1d4888;
        case 0x1d488cu: goto label_1d488c;
        case 0x1d4890u: goto label_1d4890;
        case 0x1d4894u: goto label_1d4894;
        case 0x1d4898u: goto label_1d4898;
        case 0x1d489cu: goto label_1d489c;
        case 0x1d48a0u: goto label_1d48a0;
        case 0x1d48a4u: goto label_1d48a4;
        case 0x1d48a8u: goto label_1d48a8;
        case 0x1d48acu: goto label_1d48ac;
        case 0x1d48b0u: goto label_1d48b0;
        case 0x1d48b4u: goto label_1d48b4;
        case 0x1d48b8u: goto label_1d48b8;
        case 0x1d48bcu: goto label_1d48bc;
        case 0x1d48c0u: goto label_1d48c0;
        case 0x1d48c4u: goto label_1d48c4;
        case 0x1d48c8u: goto label_1d48c8;
        case 0x1d48ccu: goto label_1d48cc;
        case 0x1d48d0u: goto label_1d48d0;
        case 0x1d48d4u: goto label_1d48d4;
        case 0x1d48d8u: goto label_1d48d8;
        case 0x1d48dcu: goto label_1d48dc;
        default: break;
    }

    ctx->pc = 0x1d4790u;

label_1d4790:
    // 0x1d4790: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d4790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d4794:
    // 0x1d4794: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d4794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d4798:
    // 0x1d4798: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d4798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d479c:
    // 0x1d479c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d479cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d47a0:
    // 0x1d47a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d47a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d47a4:
    // 0x1d47a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d47a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d47a8:
    // 0x1d47a8: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x1d47a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_1d47ac:
    // 0x1d47ac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1d47acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1d47b0:
    // 0x1d47b0: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_1d47b4:
    if (ctx->pc == 0x1D47B4u) {
        ctx->pc = 0x1D47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B0u;
        // 0x1d47b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47B8u;
        goto label_1d47b8;
    }
    ctx->pc = 0x1D47B0u;
    {
        const bool branch_taken_0x1d47b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47B0u;
        // 0x1d47b4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47b0) {
            ctx->pc = 0x1D48C8u;
            goto label_1d48c8;
        }
    }
    ctx->pc = 0x1D47B8u;
label_1d47b8:
    // 0x1d47b8: 0xc07514c  jal         func_1D4530
label_1d47bc:
    if (ctx->pc == 0x1D47BCu) {
        ctx->pc = 0x1D47C0u;
        goto label_1d47c0;
    }
    ctx->pc = 0x1D47B8u;
    SET_GPR_U32(ctx, 31, 0x1D47C0u);
    ctx->pc = 0x1D4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4530u, 0x1D47B8u, 0x1D47C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47C0u;
label_1d47c0:
    // 0x1d47c0: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x1d47c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1d47c4:
    // 0x1d47c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d47c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d47c8:
    // 0x1d47c8: 0xc075164  jal         func_1D4590
label_1d47cc:
    if (ctx->pc == 0x1D47CCu) {
        ctx->pc = 0x1D47CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47C8u;
        // 0x1d47cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47D0u;
        goto label_1d47d0;
    }
    ctx->pc = 0x1D47C8u;
    SET_GPR_U32(ctx, 31, 0x1D47D0u);
    ctx->pc = 0x1D47CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47C8u;
    // 0x1d47cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x1D47C8u, 0x1D47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47D0u;
label_1d47d0:
    // 0x1d47d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d47d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d47d4:
    // 0x1d47d4: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x1d47d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_1d47d8:
    // 0x1d47d8: 0x26460001  addiu       $a2, $s2, 0x1
    ctx->pc = 0x1d47d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d47dc:
    // 0x1d47dc: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1d47dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d47e0:
    // 0x1d47e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d47e4:
    if (ctx->pc == 0x1D47E4u) {
        ctx->pc = 0x1D47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47E0u;
        // 0x1d47e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47E8u;
        goto label_1d47e8;
    }
    ctx->pc = 0x1D47E0u;
    {
        const bool branch_taken_0x1d47e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47E0u;
        // 0x1d47e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47e0) {
            ctx->pc = 0x1D480Cu;
            goto label_1d480c;
        }
    }
    ctx->pc = 0x1D47E8u;
label_1d47e8:
    // 0x1d47e8: 0xc07515c  jal         func_1D4570
label_1d47ec:
    if (ctx->pc == 0x1D47ECu) {
        ctx->pc = 0x1D47ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47E8u;
        // 0x1d47ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D47F0u;
        goto label_1d47f0;
    }
    ctx->pc = 0x1D47E8u;
    SET_GPR_U32(ctx, 31, 0x1D47F0u);
    ctx->pc = 0x1D47ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47E8u;
    // 0x1d47ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4570u, 0x1D47E8u, 0x1D47F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D47F0u;
label_1d47f0:
    // 0x1d47f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d47f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d47f4:
    // 0x1d47f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d47f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d47f8:
    // 0x1d47f8: 0xc075172  jal         func_1D45C8
label_1d47fc:
    if (ctx->pc == 0x1D47FCu) {
        ctx->pc = 0x1D47FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47F8u;
        // 0x1d47fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4800u;
        goto label_1d4800;
    }
    ctx->pc = 0x1D47F8u;
    SET_GPR_U32(ctx, 31, 0x1D4800u);
    ctx->pc = 0x1D47FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D47F8u;
    // 0x1d47fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45C8u, 0x1D47F8u, 0x1D4800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4800u;
label_1d4800:
    // 0x1d4800: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d4804:
    // 0x1d4804: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d4808:
    if (ctx->pc == 0x1D4808u) {
        ctx->pc = 0x1D4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4804u;
        // 0x1d4808: 0x24520001  addiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D480Cu;
        goto label_1d480c;
    }
    ctx->pc = 0x1D4804u;
    {
        const bool branch_taken_0x1d4804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4804u;
        // 0x1d4808: 0x24520001  addiu       $s2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4804) {
            ctx->pc = 0x1D481Cu;
            goto label_1d481c;
        }
    }
    ctx->pc = 0x1D480Cu;
label_1d480c:
    // 0x1d480c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d480cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4810:
    // 0x1d4810: 0xc07515c  jal         func_1D4570
label_1d4814:
    if (ctx->pc == 0x1D4814u) {
        ctx->pc = 0x1D4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4810u;
        // 0x1d4814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4818u;
        goto label_1d4818;
    }
    ctx->pc = 0x1D4810u;
    SET_GPR_U32(ctx, 31, 0x1D4818u);
    ctx->pc = 0x1D4814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4810u;
    // 0x1d4814: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4570u, 0x1D4810u, 0x1D4818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4818u;
label_1d4818:
    // 0x1d4818: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d4818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d481c:
    // 0x1d481c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d481cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d4820:
    // 0x1d4820: 0xc07512e  jal         func_1D44B8
label_1d4824:
    if (ctx->pc == 0x1D4824u) {
        ctx->pc = 0x1D4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4820u;
        // 0x1d4824: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4828u;
        goto label_1d4828;
    }
    ctx->pc = 0x1D4820u;
    SET_GPR_U32(ctx, 31, 0x1D4828u);
    ctx->pc = 0x1D4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4820u;
    // 0x1d4824: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B8u, 0x1D4820u, 0x1D4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4828u;
label_1d4828:
    // 0x1d4828: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1d482c:
    if (ctx->pc == 0x1D482Cu) {
        ctx->pc = 0x1D482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4828u;
        // 0x1d482c: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4830u;
        goto label_1d4830;
    }
    ctx->pc = 0x1D4828u;
    {
        const bool branch_taken_0x1d4828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4828u;
        // 0x1d482c: 0x26300070  addiu       $s0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4828) {
            ctx->pc = 0x1D486Cu;
            goto label_1d486c;
        }
    }
    ctx->pc = 0x1D4830u;
label_1d4830:
    // 0x1d4830: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1d4830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1d4834:
    // 0x1d4834: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_1d4838:
    if (ctx->pc == 0x1D4838u) {
        ctx->pc = 0x1D4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4834u;
        // 0x1d4838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D483Cu;
        goto label_1d483c;
    }
    ctx->pc = 0x1D4834u;
    {
        const bool branch_taken_0x1d4834 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4834u;
        // 0x1d4838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4834) {
            ctx->pc = 0x1D4850u;
            goto label_1d4850;
        }
    }
    ctx->pc = 0x1D483Cu;
label_1d483c:
    // 0x1d483c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d4840:
    // 0x1d4840: 0xc0752e2  jal         func_1D4B88
label_1d4844:
    if (ctx->pc == 0x1D4844u) {
        ctx->pc = 0x1D4844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4840u;
        // 0x1d4844: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4848u;
        goto label_1d4848;
    }
    ctx->pc = 0x1D4840u;
    SET_GPR_U32(ctx, 31, 0x1D4848u);
    ctx->pc = 0x1D4844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4840u;
    // 0x1d4844: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1D4840u, 0x1D4848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4848u;
label_1d4848:
    // 0x1d4848: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d484c:
    if (ctx->pc == 0x1D484Cu) {
        ctx->pc = 0x1D484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4848u;
        // 0x1d484c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4850u;
        goto label_1d4850;
    }
    ctx->pc = 0x1D4848u;
    {
        const bool branch_taken_0x1d4848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4848u;
        // 0x1d484c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4848) {
            ctx->pc = 0x1D48C8u;
            goto label_1d48c8;
        }
    }
    ctx->pc = 0x1D4850u;
label_1d4850:
    // 0x1d4850: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d4854:
    // 0x1d4854: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d4858:
    // 0x1d4858: 0xc043f0c  jal         func_10FC30
label_1d485c:
    if (ctx->pc == 0x1D485Cu) {
        ctx->pc = 0x1D485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4858u;
        // 0x1d485c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4860u;
        goto label_1d4860;
    }
    ctx->pc = 0x1D4858u;
    SET_GPR_U32(ctx, 31, 0x1D4860u);
    ctx->pc = 0x1D485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4858u;
    // 0x1d485c: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1D4858u, 0x1D4860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4860u;
label_1d4860:
    // 0x1d4860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4864:
    // 0x1d4864: 0x10000017  b           . + 4 + (0x17 << 2)
label_1d4868:
    if (ctx->pc == 0x1D4868u) {
        ctx->pc = 0x1D4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4864u;
        // 0x1d4868: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D486Cu;
        goto label_1d486c;
    }
    ctx->pc = 0x1D4864u;
    {
        const bool branch_taken_0x1d4864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4864u;
        // 0x1d4868: 0xae2300c4  sw          $v1, 0xC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4864) {
            ctx->pc = 0x1D48C4u;
            goto label_1d48c4;
        }
    }
    ctx->pc = 0x1D486Cu;
label_1d486c:
    // 0x1d486c: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1d486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1d4870:
    // 0x1d4870: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d4870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d4874:
    // 0x1d4874: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d4874u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d4878:
    // 0x1d4878: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d4878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d487c:
    // 0x1d487c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1d487cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d4880:
    // 0x1d4880: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d4880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d4884:
    // 0x1d4884: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x1d4884u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
label_1d4888:
    // 0x1d4888: 0x8c43009c  lw          $v1, 0x9C($v0)
    ctx->pc = 0x1d4888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_1d488c:
    // 0x1d488c: 0x60f809  jalr        $v1
label_1d4890:
    if (ctx->pc == 0x1D4890u) {
        ctx->pc = 0x1D4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D488Cu;
        // 0x1d4890: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4894u;
        goto label_1d4894;
    }
    ctx->pc = 0x1D488Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D4894u);
        ctx->pc = 0x1D4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D488Cu;
        // 0x1d4890: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D488Cu, 0x1D4894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4894u;
label_1d4894:
    // 0x1d4894: 0xae3200a4  sw          $s2, 0xA4($s1)
    ctx->pc = 0x1d4894u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 18));
label_1d4898:
    // 0x1d4898: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x1d4898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_1d489c:
    // 0x1d489c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1d48a0:
    // 0x1d48a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d48a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d48a4:
    // 0x1d48a4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d48a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d48a8:
    // 0x1d48a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1d48a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d48ac:
    // 0x1d48ac: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x1d48acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_1d48b0:
    // 0x1d48b0: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x1d48b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_1d48b4:
    // 0x1d48b4: 0x40f809  jalr        $v0
label_1d48b8:
    if (ctx->pc == 0x1D48B8u) {
        ctx->pc = 0x1D48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48B4u;
        // 0x1d48b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48BCu;
        goto label_1d48bc;
    }
    ctx->pc = 0x1D48B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D48BCu);
        ctx->pc = 0x1D48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48B4u;
        // 0x1d48b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D48B4u, 0x1D48BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D48BCu;
label_1d48bc:
    // 0x1d48bc: 0xc0751e4  jal         func_1D4790
label_1d48c0:
    if (ctx->pc == 0x1D48C0u) {
        ctx->pc = 0x1D48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48BCu;
        // 0x1d48c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48C4u;
        goto label_1d48c4;
    }
    ctx->pc = 0x1D48BCu;
    SET_GPR_U32(ctx, 31, 0x1D48C4u);
    ctx->pc = 0x1D48C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D48BCu;
    // 0x1d48c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4790u;
    goto label_1d4790;
    ctx->pc = 0x1D48C4u;
label_1d48c4:
    // 0x1d48c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d48c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d48c8:
    // 0x1d48c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d48c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d48cc:
    // 0x1d48cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d48ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d48d0:
    // 0x1d48d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d48d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d48d4:
    // 0x1d48d4: 0x3e00008  jr          $ra
label_1d48d8:
    if (ctx->pc == 0x1D48D8u) {
        ctx->pc = 0x1D48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48D4u;
        // 0x1d48d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D48DCu;
        goto label_1d48dc;
    }
    ctx->pc = 0x1D48D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48D4u;
        // 0x1d48d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D48D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D48DCu;
label_1d48dc:
    // 0x1d48dc: 0x0  nop
    ctx->pc = 0x1d48dcu;
    // NOP
    ctx->pc = 0x1d48e0u;
}
