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

// Function: sub_001CD748
// Address: 0x1cd748 - 0x1cd888
void sub_001CD748_0x1cd748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD748_0x1cd748");
#endif

    switch (ctx->pc) {
        case 0x1cd748u: goto label_1cd748;
        case 0x1cd74cu: goto label_1cd74c;
        case 0x1cd750u: goto label_1cd750;
        case 0x1cd754u: goto label_1cd754;
        case 0x1cd758u: goto label_1cd758;
        case 0x1cd75cu: goto label_1cd75c;
        case 0x1cd760u: goto label_1cd760;
        case 0x1cd764u: goto label_1cd764;
        case 0x1cd768u: goto label_1cd768;
        case 0x1cd76cu: goto label_1cd76c;
        case 0x1cd770u: goto label_1cd770;
        case 0x1cd774u: goto label_1cd774;
        case 0x1cd778u: goto label_1cd778;
        case 0x1cd77cu: goto label_1cd77c;
        case 0x1cd780u: goto label_1cd780;
        case 0x1cd784u: goto label_1cd784;
        case 0x1cd788u: goto label_1cd788;
        case 0x1cd78cu: goto label_1cd78c;
        case 0x1cd790u: goto label_1cd790;
        case 0x1cd794u: goto label_1cd794;
        case 0x1cd798u: goto label_1cd798;
        case 0x1cd79cu: goto label_1cd79c;
        case 0x1cd7a0u: goto label_1cd7a0;
        case 0x1cd7a4u: goto label_1cd7a4;
        case 0x1cd7a8u: goto label_1cd7a8;
        case 0x1cd7acu: goto label_1cd7ac;
        case 0x1cd7b0u: goto label_1cd7b0;
        case 0x1cd7b4u: goto label_1cd7b4;
        case 0x1cd7b8u: goto label_1cd7b8;
        case 0x1cd7bcu: goto label_1cd7bc;
        case 0x1cd7c0u: goto label_1cd7c0;
        case 0x1cd7c4u: goto label_1cd7c4;
        case 0x1cd7c8u: goto label_1cd7c8;
        case 0x1cd7ccu: goto label_1cd7cc;
        case 0x1cd7d0u: goto label_1cd7d0;
        case 0x1cd7d4u: goto label_1cd7d4;
        case 0x1cd7d8u: goto label_1cd7d8;
        case 0x1cd7dcu: goto label_1cd7dc;
        case 0x1cd7e0u: goto label_1cd7e0;
        case 0x1cd7e4u: goto label_1cd7e4;
        case 0x1cd7e8u: goto label_1cd7e8;
        case 0x1cd7ecu: goto label_1cd7ec;
        case 0x1cd7f0u: goto label_1cd7f0;
        case 0x1cd7f4u: goto label_1cd7f4;
        case 0x1cd7f8u: goto label_1cd7f8;
        case 0x1cd7fcu: goto label_1cd7fc;
        case 0x1cd800u: goto label_1cd800;
        case 0x1cd804u: goto label_1cd804;
        case 0x1cd808u: goto label_1cd808;
        case 0x1cd80cu: goto label_1cd80c;
        case 0x1cd810u: goto label_1cd810;
        case 0x1cd814u: goto label_1cd814;
        case 0x1cd818u: goto label_1cd818;
        case 0x1cd81cu: goto label_1cd81c;
        case 0x1cd820u: goto label_1cd820;
        case 0x1cd824u: goto label_1cd824;
        case 0x1cd828u: goto label_1cd828;
        case 0x1cd82cu: goto label_1cd82c;
        case 0x1cd830u: goto label_1cd830;
        case 0x1cd834u: goto label_1cd834;
        case 0x1cd838u: goto label_1cd838;
        case 0x1cd83cu: goto label_1cd83c;
        case 0x1cd840u: goto label_1cd840;
        case 0x1cd844u: goto label_1cd844;
        case 0x1cd848u: goto label_1cd848;
        case 0x1cd84cu: goto label_1cd84c;
        case 0x1cd850u: goto label_1cd850;
        case 0x1cd854u: goto label_1cd854;
        case 0x1cd858u: goto label_1cd858;
        case 0x1cd85cu: goto label_1cd85c;
        case 0x1cd860u: goto label_1cd860;
        case 0x1cd864u: goto label_1cd864;
        case 0x1cd868u: goto label_1cd868;
        case 0x1cd86cu: goto label_1cd86c;
        case 0x1cd870u: goto label_1cd870;
        case 0x1cd874u: goto label_1cd874;
        case 0x1cd878u: goto label_1cd878;
        case 0x1cd87cu: goto label_1cd87c;
        case 0x1cd880u: goto label_1cd880;
        case 0x1cd884u: goto label_1cd884;
        default: break;
    }

    ctx->pc = 0x1cd748u;

label_1cd748:
    // 0x1cd748: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1cd748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_1cd74c:
    // 0x1cd74c: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1cd74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_1cd750:
    // 0x1cd750: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1cd750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_1cd754:
    // 0x1cd754: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1cd754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_1cd758:
    // 0x1cd758: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1cd758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_1cd75c:
    // 0x1cd75c: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1cd75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_1cd760:
    // 0x1cd760: 0xc073500  jal         func_1CD400
label_1cd764:
    if (ctx->pc == 0x1CD764u) {
        ctx->pc = 0x1CD764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD760u;
        // 0x1cd764: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD768u;
        goto label_1cd768;
    }
    ctx->pc = 0x1CD760u;
    SET_GPR_U32(ctx, 31, 0x1CD768u);
    ctx->pc = 0x1CD764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD760u;
    // 0x1cd764: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD400u, 0x1CD760u, 0x1CD768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD768u;
label_1cd768:
    // 0x1cd768: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1cd768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_1cd76c:
    // 0x1cd76c: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1cd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1cd770:
    // 0x1cd770: 0x8cc4504c  lw          $a0, 0x504C($a2)
    ctx->pc = 0x1cd770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20556)));
label_1cd774:
    // 0x1cd774: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1cd778:
    if (ctx->pc == 0x1CD778u) {
        ctx->pc = 0x1CD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD774u;
        // 0x1cd778: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD77Cu;
        goto label_1cd77c;
    }
    ctx->pc = 0x1CD774u;
    {
        const bool branch_taken_0x1cd774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd774) {
            ctx->pc = 0x1CD778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD774u;
            // 0x1cd778: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD77Cu;
            goto label_1cd77c;
        }
    }
    ctx->pc = 0x1CD77Cu;
label_1cd77c:
    // 0x1cd77c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1cd77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1cd780:
    // 0x1cd780: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x1cd780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1cd784:
    // 0x1cd784: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1cd784u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cd788:
    // 0x1cd788: 0x9812  mflo        $s3
    ctx->pc = 0x1cd788u;
    SET_GPR_U64(ctx, 19, ctx->lo);
label_1cd78c:
    // 0x1cd78c: 0x50a00032  beql        $a1, $zero, . + 4 + (0x32 << 2)
label_1cd790:
    if (ctx->pc == 0x1CD790u) {
        ctx->pc = 0x1CD790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD78Cu;
        // 0x1cd790: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD794u;
        goto label_1cd794;
    }
    ctx->pc = 0x1CD78Cu;
    {
        const bool branch_taken_0x1cd78c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd78c) {
            ctx->pc = 0x1CD790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CD78Cu;
            // 0x1cd790: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CD858u;
            goto label_1cd858;
        }
    }
    ctx->pc = 0x1CD794u;
label_1cd794:
    // 0x1cd794: 0xa22001f0  sb          $zero, 0x1F0($s1)
    ctx->pc = 0x1cd794u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 496), (uint8_t)GPR_U32(ctx, 0));
label_1cd798:
    // 0x1cd798: 0x8cc2504c  lw          $v0, 0x504C($a2)
    ctx->pc = 0x1cd798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20556)));
label_1cd79c:
    // 0x1cd79c: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x1cd79cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1cd7a0:
    // 0x1cd7a0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1cd7a4:
    if (ctx->pc == 0x1CD7A4u) {
        ctx->pc = 0x1CD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7A0u;
        // 0x1cd7a4: 0x263201f0  addiu       $s2, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7A8u;
        goto label_1cd7a8;
    }
    ctx->pc = 0x1CD7A0u;
    {
        const bool branch_taken_0x1cd7a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7A0u;
        // 0x1cd7a4: 0x263201f0  addiu       $s2, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd7a0) {
            ctx->pc = 0x1CD7C0u;
            goto label_1cd7c0;
        }
    }
    ctx->pc = 0x1CD7A8u;
label_1cd7a8:
    // 0x1cd7a8: 0xc10c3ac  jal         func_430EB0
label_1cd7ac:
    if (ctx->pc == 0x1CD7ACu) {
        ctx->pc = 0x1CD7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7A8u;
        // 0x1cd7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7B0u;
        goto label_1cd7b0;
    }
    ctx->pc = 0x1CD7A8u;
    SET_GPR_U32(ctx, 31, 0x1CD7B0u);
    ctx->pc = 0x1CD7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7A8u;
    // 0x1cd7ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1CD7A8u, 0x1CD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7B0u;
label_1cd7b0:
    // 0x1cd7b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cd7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7b4:
    // 0x1cd7b4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cd7b8:
    // 0x1cd7b8: 0xc10c4de  jal         func_431378
label_1cd7bc:
    if (ctx->pc == 0x1CD7BCu) {
        ctx->pc = 0x1CD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7B8u;
        // 0x1cd7bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7C0u;
        goto label_1cd7c0;
    }
    ctx->pc = 0x1CD7B8u;
    SET_GPR_U32(ctx, 31, 0x1CD7C0u);
    ctx->pc = 0x1CD7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7B8u;
    // 0x1cd7bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1CD7B8u, 0x1CD7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7C0u;
label_1cd7c0:
    // 0x1cd7c0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1cd7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1cd7c4:
    // 0x1cd7c4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1cd7c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7c8:
    // 0x1cd7c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1cd7c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7cc:
    // 0x1cd7cc: 0x24c65900  addiu       $a2, $a2, 0x5900
    ctx->pc = 0x1cd7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22784));
label_1cd7d0:
    // 0x1cd7d0: 0xc10ca04  jal         func_432810
label_1cd7d4:
    if (ctx->pc == 0x1CD7D4u) {
        ctx->pc = 0x1CD7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7D0u;
        // 0x1cd7d4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7D8u;
        goto label_1cd7d8;
    }
    ctx->pc = 0x1CD7D0u;
    SET_GPR_U32(ctx, 31, 0x1CD7D8u);
    ctx->pc = 0x1CD7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7D0u;
    // 0x1cd7d4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x1CD7D0u, 0x1CD7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7D8u;
label_1cd7d8:
    // 0x1cd7d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1cd7d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7dc:
    // 0x1cd7dc: 0xc10c25f  jal         func_43097C
label_1cd7e0:
    if (ctx->pc == 0x1CD7E0u) {
        ctx->pc = 0x1CD7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7DCu;
        // 0x1cd7e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7E4u;
        goto label_1cd7e4;
    }
    ctx->pc = 0x1CD7DCu;
    SET_GPR_U32(ctx, 31, 0x1CD7E4u);
    ctx->pc = 0x1CD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7DCu;
    // 0x1cd7e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43097Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43097Cu, 0x1CD7DCu, 0x1CD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7E4u;
label_1cd7e4:
    // 0x1cd7e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cd7e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7e8:
    // 0x1cd7e8: 0xc06ec94  jal         func_1BB250
label_1cd7ec:
    if (ctx->pc == 0x1CD7ECu) {
        ctx->pc = 0x1CD7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7E8u;
        // 0x1cd7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7F0u;
        goto label_1cd7f0;
    }
    ctx->pc = 0x1CD7E8u;
    SET_GPR_U32(ctx, 31, 0x1CD7F0u);
    ctx->pc = 0x1CD7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7E8u;
    // 0x1cd7ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB250u, 0x1CD7E8u, 0x1CD7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7F0u;
label_1cd7f0:
    // 0x1cd7f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7f4:
    // 0x1cd7f4: 0xc06e51e  jal         func_1B9478
label_1cd7f8:
    if (ctx->pc == 0x1CD7F8u) {
        ctx->pc = 0x1CD7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD7F4u;
        // 0x1cd7f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD7FCu;
        goto label_1cd7fc;
    }
    ctx->pc = 0x1CD7F4u;
    SET_GPR_U32(ctx, 31, 0x1CD7FCu);
    ctx->pc = 0x1CD7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD7F4u;
    // 0x1cd7f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1CD7F4u, 0x1CD7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD7FCu;
label_1cd7fc:
    // 0x1cd7fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1cd7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1cd800:
    // 0x1cd800: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1cd800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_1cd804:
    // 0x1cd804: 0xc440eb34  lwc1        $f0, -0x14CC($v0)
    ctx->pc = 0x1cd804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961972)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cd808:
    // 0x1cd808: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x1cd808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1cd80c:
    // 0x1cd80c: 0xc461eb38  lwc1        $f1, -0x14C8($v1)
    ctx->pc = 0x1cd80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cd810:
    // 0x1cd810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd814:
    // 0x1cd814: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cd814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1cd818:
    // 0x1cd818: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cd818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cd81c:
    // 0x1cd81c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1cd81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cd820:
    // 0x1cd820: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1cd820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1cd824:
    // 0x1cd824: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cd824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd828:
    // 0x1cd828: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x1cd828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1cd82c:
    // 0x1cd82c: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1cd82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_1cd830:
    // 0x1cd830: 0xc06e4dc  jal         func_1B9370
label_1cd834:
    if (ctx->pc == 0x1CD834u) {
        ctx->pc = 0x1CD834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD830u;
        // 0x1cd834: 0xe4e2000c  swc1        $f2, 0xC($a3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD838u;
        goto label_1cd838;
    }
    ctx->pc = 0x1CD830u;
    SET_GPR_U32(ctx, 31, 0x1CD838u);
    ctx->pc = 0x1CD834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CD830u;
    // 0x1cd834: 0xe4e2000c  swc1        $f2, 0xC($a3) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9370u, 0x1CD830u, 0x1CD838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CD838u;
label_1cd838:
    // 0x1cd838: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1cd838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd83c:
    // 0x1cd83c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cd83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd840:
    // 0x1cd840: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cd840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cd844:
    // 0x1cd844: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cd844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cd848:
    // 0x1cd848: 0x60f809  jalr        $v1
label_1cd84c:
    if (ctx->pc == 0x1CD84Cu) {
        ctx->pc = 0x1CD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD848u;
        // 0x1cd84c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD850u;
        goto label_1cd850;
    }
    ctx->pc = 0x1CD848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD850u);
        ctx->pc = 0x1CD84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD848u;
        // 0x1cd84c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD848u, 0x1CD850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD850u;
label_1cd850:
    // 0x1cd850: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cd854:
    if (ctx->pc == 0x1CD854u) {
        ctx->pc = 0x1CD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD850u;
        // 0x1cd854: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD858u;
        goto label_1cd858;
    }
    ctx->pc = 0x1CD850u;
    {
        const bool branch_taken_0x1cd850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD850u;
        // 0x1cd854: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd850) {
            ctx->pc = 0x1CD870u;
            goto label_1cd870;
        }
    }
    ctx->pc = 0x1CD858u;
label_1cd858:
    // 0x1cd858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd85c:
    // 0x1cd85c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1cd85cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1cd860:
    // 0x1cd860: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1cd860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1cd864:
    // 0x1cd864: 0x60f809  jalr        $v1
label_1cd868:
    if (ctx->pc == 0x1CD868u) {
        ctx->pc = 0x1CD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD864u;
        // 0x1cd868: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD86Cu;
        goto label_1cd86c;
    }
    ctx->pc = 0x1CD864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CD86Cu);
        ctx->pc = 0x1CD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD864u;
        // 0x1cd868: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD864u, 0x1CD86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CD86Cu;
label_1cd86c:
    // 0x1cd86c: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1cd86cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1cd870:
    // 0x1cd870: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1cd870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1cd874:
    // 0x1cd874: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1cd874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cd878:
    // 0x1cd878: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1cd878u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1cd87c:
    // 0x1cd87c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1cd87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1cd880:
    // 0x1cd880: 0x3e00008  jr          $ra
label_1cd884:
    if (ctx->pc == 0x1CD884u) {
        ctx->pc = 0x1CD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD880u;
        // 0x1cd884: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CD888u;
        goto label_fallthrough_0x1cd880;
    }
    ctx->pc = 0x1CD880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD880u;
        // 0x1cd884: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cd880:
    ctx->pc = 0x1CD888u;
}
