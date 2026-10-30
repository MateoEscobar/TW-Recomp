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

// Function: sub_003DD650
// Address: 0x3dd650 - 0x3dd740
void sub_003DD650_0x3dd650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD650_0x3dd650");
#endif

    switch (ctx->pc) {
        case 0x3dd650u: goto label_3dd650;
        case 0x3dd654u: goto label_3dd654;
        case 0x3dd658u: goto label_3dd658;
        case 0x3dd65cu: goto label_3dd65c;
        case 0x3dd660u: goto label_3dd660;
        case 0x3dd664u: goto label_3dd664;
        case 0x3dd668u: goto label_3dd668;
        case 0x3dd66cu: goto label_3dd66c;
        case 0x3dd670u: goto label_3dd670;
        case 0x3dd674u: goto label_3dd674;
        case 0x3dd678u: goto label_3dd678;
        case 0x3dd67cu: goto label_3dd67c;
        case 0x3dd680u: goto label_3dd680;
        case 0x3dd684u: goto label_3dd684;
        case 0x3dd688u: goto label_3dd688;
        case 0x3dd68cu: goto label_3dd68c;
        case 0x3dd690u: goto label_3dd690;
        case 0x3dd694u: goto label_3dd694;
        case 0x3dd698u: goto label_3dd698;
        case 0x3dd69cu: goto label_3dd69c;
        case 0x3dd6a0u: goto label_3dd6a0;
        case 0x3dd6a4u: goto label_3dd6a4;
        case 0x3dd6a8u: goto label_3dd6a8;
        case 0x3dd6acu: goto label_3dd6ac;
        case 0x3dd6b0u: goto label_3dd6b0;
        case 0x3dd6b4u: goto label_3dd6b4;
        case 0x3dd6b8u: goto label_3dd6b8;
        case 0x3dd6bcu: goto label_3dd6bc;
        case 0x3dd6c0u: goto label_3dd6c0;
        case 0x3dd6c4u: goto label_3dd6c4;
        case 0x3dd6c8u: goto label_3dd6c8;
        case 0x3dd6ccu: goto label_3dd6cc;
        case 0x3dd6d0u: goto label_3dd6d0;
        case 0x3dd6d4u: goto label_3dd6d4;
        case 0x3dd6d8u: goto label_3dd6d8;
        case 0x3dd6dcu: goto label_3dd6dc;
        case 0x3dd6e0u: goto label_3dd6e0;
        case 0x3dd6e4u: goto label_3dd6e4;
        case 0x3dd6e8u: goto label_3dd6e8;
        case 0x3dd6ecu: goto label_3dd6ec;
        case 0x3dd6f0u: goto label_3dd6f0;
        case 0x3dd6f4u: goto label_3dd6f4;
        case 0x3dd6f8u: goto label_3dd6f8;
        case 0x3dd6fcu: goto label_3dd6fc;
        case 0x3dd700u: goto label_3dd700;
        case 0x3dd704u: goto label_3dd704;
        case 0x3dd708u: goto label_3dd708;
        case 0x3dd70cu: goto label_3dd70c;
        case 0x3dd710u: goto label_3dd710;
        case 0x3dd714u: goto label_3dd714;
        case 0x3dd718u: goto label_3dd718;
        case 0x3dd71cu: goto label_3dd71c;
        case 0x3dd720u: goto label_3dd720;
        case 0x3dd724u: goto label_3dd724;
        case 0x3dd728u: goto label_3dd728;
        case 0x3dd72cu: goto label_3dd72c;
        case 0x3dd730u: goto label_3dd730;
        case 0x3dd734u: goto label_3dd734;
        case 0x3dd738u: goto label_3dd738;
        case 0x3dd73cu: goto label_3dd73c;
        default: break;
    }

    ctx->pc = 0x3dd650u;

label_3dd650:
    // 0x3dd650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3dd650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3dd654:
    // 0x3dd654: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3dd654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3dd658:
    // 0x3dd658: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3dd658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3dd65c:
    // 0x3dd65c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dd65cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd660:
    // 0x3dd660: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3dd660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3dd664:
    // 0x3dd664: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3dd664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd668:
    // 0x3dd668: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3dd668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3dd66c:
    // 0x3dd66c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3dd66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3dd670:
    // 0x3dd670: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3dd670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3dd674:
    // 0x3dd674: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dd674u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd678:
    // 0x3dd678: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd67c:
    // 0x3dd67c: 0x40f809  jalr        $v0
label_3dd680:
    if (ctx->pc == 0x3DD680u) {
        ctx->pc = 0x3DD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD67Cu;
        // 0x3dd680: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD684u;
        goto label_3dd684;
    }
    ctx->pc = 0x3DD67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD684u);
        ctx->pc = 0x3DD680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD67Cu;
        // 0x3dd680: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD67Cu, 0x3DD684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD684u;
label_3dd684:
    // 0x3dd684: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x3dd684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_3dd688:
    // 0x3dd688: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3dd688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_3dd68c:
    // 0x3dd68c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3dd68cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3dd690:
    // 0x3dd690: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x3dd690u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_3dd694:
    // 0x3dd694: 0x34630048  ori         $v1, $v1, 0x48
    ctx->pc = 0x3dd694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)72);
label_3dd698:
    // 0x3dd698: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dd698u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd69c:
    // 0x3dd69c: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x3dd69cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_3dd6a0:
    // 0x3dd6a0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3dd6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3dd6a4:
    // 0x3dd6a4: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x3dd6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_3dd6a8:
    // 0x3dd6a8: 0xc0e858c  jal         func_3A1630
label_3dd6ac:
    if (ctx->pc == 0x3DD6ACu) {
        ctx->pc = 0x3DD6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6A8u;
        // 0x3dd6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD6B0u;
        goto label_3dd6b0;
    }
    ctx->pc = 0x3DD6A8u;
    SET_GPR_U32(ctx, 31, 0x3DD6B0u);
    ctx->pc = 0x3DD6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD6A8u;
    // 0x3dd6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DD6A8u, 0x3DD6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD6B0u;
label_3dd6b0:
    // 0x3dd6b0: 0xc0ea146  jal         func_3A8518
label_3dd6b4:
    if (ctx->pc == 0x3DD6B4u) {
        ctx->pc = 0x3DD6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6B0u;
        // 0x3dd6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD6B8u;
        goto label_3dd6b8;
    }
    ctx->pc = 0x3DD6B0u;
    SET_GPR_U32(ctx, 31, 0x3DD6B8u);
    ctx->pc = 0x3DD6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD6B0u;
    // 0x3dd6b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DD6B0u, 0x3DD6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD6B8u;
label_3dd6b8:
    // 0x3dd6b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dd6b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd6bc:
    // 0x3dd6bc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dd6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dd6c0:
    // 0x3dd6c0: 0xc0ea12a  jal         func_3A84A8
label_3dd6c4:
    if (ctx->pc == 0x3DD6C4u) {
        ctx->pc = 0x3DD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6C0u;
        // 0x3dd6c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD6C8u;
        goto label_3dd6c8;
    }
    ctx->pc = 0x3DD6C0u;
    SET_GPR_U32(ctx, 31, 0x3DD6C8u);
    ctx->pc = 0x3DD6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD6C0u;
    // 0x3dd6c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DD6C0u, 0x3DD6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD6C8u;
label_3dd6c8:
    // 0x3dd6c8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dd6c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd6cc:
    // 0x3dd6cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dd6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dd6d0:
    // 0x3dd6d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3dd6d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dd6d4:
    // 0x3dd6d4: 0xc0ea12a  jal         func_3A84A8
label_3dd6d8:
    if (ctx->pc == 0x3DD6D8u) {
        ctx->pc = 0x3DD6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6D4u;
        // 0x3dd6d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD6DCu;
        goto label_3dd6dc;
    }
    ctx->pc = 0x3DD6D4u;
    SET_GPR_U32(ctx, 31, 0x3DD6DCu);
    ctx->pc = 0x3DD6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD6D4u;
    // 0x3dd6d8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DD6D4u, 0x3DD6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD6DCu;
label_3dd6dc:
    // 0x3dd6dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dd6dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd6e0:
    // 0x3dd6e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3dd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3dd6e4:
    // 0x3dd6e4: 0xae1200c4  sw          $s2, 0xC4($s0)
    ctx->pc = 0x3dd6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 18));
label_3dd6e8:
    // 0x3dd6e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dd6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dd6ec:
    // 0x3dd6ec: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3dd6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3dd6f0:
    // 0x3dd6f0: 0xc0cd4ee  jal         func_3353B8
label_3dd6f4:
    if (ctx->pc == 0x3DD6F4u) {
        ctx->pc = 0x3DD6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD6F0u;
        // 0x3dd6f4: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD6F8u;
        goto label_3dd6f8;
    }
    ctx->pc = 0x3DD6F0u;
    SET_GPR_U32(ctx, 31, 0x3DD6F8u);
    ctx->pc = 0x3DD6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD6F0u;
    // 0x3dd6f4: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3DD6F0u, 0x3DD6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD6F8u;
label_3dd6f8:
    // 0x3dd6f8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3dd6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3dd6fc:
    // 0x3dd6fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dd6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dd700:
    // 0x3dd700: 0x34a50036  ori         $a1, $a1, 0x36
    ctx->pc = 0x3dd700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54);
label_3dd704:
    // 0x3dd704: 0xc0e9404  jal         func_3A5010
label_3dd708:
    if (ctx->pc == 0x3DD708u) {
        ctx->pc = 0x3DD708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD704u;
        // 0x3dd708: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD70Cu;
        goto label_3dd70c;
    }
    ctx->pc = 0x3DD704u;
    SET_GPR_U32(ctx, 31, 0x3DD70Cu);
    ctx->pc = 0x3DD708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD704u;
    // 0x3dd708: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5010u, 0x3DD704u, 0x3DD70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD70Cu;
label_3dd70c:
    // 0x3dd70c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3dd70cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd710:
    // 0x3dd710: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3dd710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd714:
    // 0x3dd714: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3dd714u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3dd718:
    // 0x3dd718: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x3dd718u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
label_3dd71c:
    // 0x3dd71c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3dd71cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3dd720:
    // 0x3dd720: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3dd720u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3dd724:
    // 0x3dd724: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3dd724u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dd728:
    // 0x3dd728: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3dd728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dd72c:
    // 0x3dd72c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3dd72cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dd730:
    // 0x3dd730: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3dd730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3dd734:
    // 0x3dd734: 0x3e00008  jr          $ra
label_3dd738:
    if (ctx->pc == 0x3DD738u) {
        ctx->pc = 0x3DD738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD734u;
        // 0x3dd738: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD73Cu;
        goto label_3dd73c;
    }
    ctx->pc = 0x3DD734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD734u;
        // 0x3dd738: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD73Cu;
label_3dd73c:
    // 0x3dd73c: 0x0  nop
    ctx->pc = 0x3dd73cu;
    // NOP
    ctx->pc = 0x3dd740u;
}
