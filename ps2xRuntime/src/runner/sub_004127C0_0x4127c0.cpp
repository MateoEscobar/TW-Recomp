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

// Function: sub_004127C0
// Address: 0x4127c0 - 0x412888
void sub_004127C0_0x4127c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004127C0_0x4127c0");
#endif

    switch (ctx->pc) {
        case 0x4127c0u: goto label_4127c0;
        case 0x4127c4u: goto label_4127c4;
        case 0x4127c8u: goto label_4127c8;
        case 0x4127ccu: goto label_4127cc;
        case 0x4127d0u: goto label_4127d0;
        case 0x4127d4u: goto label_4127d4;
        case 0x4127d8u: goto label_4127d8;
        case 0x4127dcu: goto label_4127dc;
        case 0x4127e0u: goto label_4127e0;
        case 0x4127e4u: goto label_4127e4;
        case 0x4127e8u: goto label_4127e8;
        case 0x4127ecu: goto label_4127ec;
        case 0x4127f0u: goto label_4127f0;
        case 0x4127f4u: goto label_4127f4;
        case 0x4127f8u: goto label_4127f8;
        case 0x4127fcu: goto label_4127fc;
        case 0x412800u: goto label_412800;
        case 0x412804u: goto label_412804;
        case 0x412808u: goto label_412808;
        case 0x41280cu: goto label_41280c;
        case 0x412810u: goto label_412810;
        case 0x412814u: goto label_412814;
        case 0x412818u: goto label_412818;
        case 0x41281cu: goto label_41281c;
        case 0x412820u: goto label_412820;
        case 0x412824u: goto label_412824;
        case 0x412828u: goto label_412828;
        case 0x41282cu: goto label_41282c;
        case 0x412830u: goto label_412830;
        case 0x412834u: goto label_412834;
        case 0x412838u: goto label_412838;
        case 0x41283cu: goto label_41283c;
        case 0x412840u: goto label_412840;
        case 0x412844u: goto label_412844;
        case 0x412848u: goto label_412848;
        case 0x41284cu: goto label_41284c;
        case 0x412850u: goto label_412850;
        case 0x412854u: goto label_412854;
        case 0x412858u: goto label_412858;
        case 0x41285cu: goto label_41285c;
        case 0x412860u: goto label_412860;
        case 0x412864u: goto label_412864;
        case 0x412868u: goto label_412868;
        case 0x41286cu: goto label_41286c;
        case 0x412870u: goto label_412870;
        case 0x412874u: goto label_412874;
        case 0x412878u: goto label_412878;
        case 0x41287cu: goto label_41287c;
        case 0x412880u: goto label_412880;
        case 0x412884u: goto label_412884;
        default: break;
    }

    ctx->pc = 0x4127c0u;

label_4127c0:
    // 0x4127c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4127c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4127c4:
    // 0x4127c4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4127c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4127c8:
    // 0x4127c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4127c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4127cc:
    // 0x4127cc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4127ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4127d0:
    // 0x4127d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4127d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4127d4:
    // 0x4127d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4127d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4127d8:
    // 0x4127d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4127d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4127dc:
    // 0x4127dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4127dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4127e0:
    // 0x4127e0: 0x24425c48  addiu       $v0, $v0, 0x5C48
    ctx->pc = 0x4127e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23624));
label_4127e4:
    // 0x4127e4: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x4127e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
label_4127e8:
    // 0x4127e8: 0xa200006a  sb          $zero, 0x6A($s0)
    ctx->pc = 0x4127e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 0));
label_4127ec:
    // 0x4127ec: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x4127ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_4127f0:
    // 0x4127f0: 0xc0e3fc6  jal         func_38FF18
label_4127f4:
    if (ctx->pc == 0x4127F4u) {
        ctx->pc = 0x4127F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127F0u;
        // 0x4127f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4127F8u;
        goto label_4127f8;
    }
    ctx->pc = 0x4127F0u;
    SET_GPR_U32(ctx, 31, 0x4127F8u);
    ctx->pc = 0x4127F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4127F0u;
    // 0x4127f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF18u, 0x4127F0u, 0x4127F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4127F8u;
label_4127f8:
    // 0x4127f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4127f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4127fc:
    // 0x4127fc: 0xc0e3ff4  jal         func_38FFD0
label_412800:
    if (ctx->pc == 0x412800u) {
        ctx->pc = 0x412800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4127FCu;
        // 0x412800: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412804u;
        goto label_412804;
    }
    ctx->pc = 0x4127FCu;
    SET_GPR_U32(ctx, 31, 0x412804u);
    ctx->pc = 0x412800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4127FCu;
    // 0x412800: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD0u, 0x4127FCu, 0x412804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412804u;
label_412804:
    // 0x412804: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x412804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
label_412808:
    // 0x412808: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x412808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41280c:
    // 0x41280c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x41280cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_412810:
    // 0x412810: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x412810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_412814:
    // 0x412814: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x412814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_412818:
    // 0x412818: 0x60f809  jalr        $v1
label_41281c:
    if (ctx->pc == 0x41281Cu) {
        ctx->pc = 0x41281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412818u;
        // 0x41281c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412820u;
        goto label_412820;
    }
    ctx->pc = 0x412818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x412820u);
        ctx->pc = 0x41281Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412818u;
        // 0x41281c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412818u, 0x412820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x412820u;
label_412820:
    // 0x412820: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x412820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_412824:
    // 0x412824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x412824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412828:
    // 0x412828: 0xc104a3a  jal         func_4128E8
label_41282c:
    if (ctx->pc == 0x41282Cu) {
        ctx->pc = 0x41282Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412828u;
        // 0x41282c: 0x24a58f18  addiu       $a1, $a1, -0x70E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412830u;
        goto label_412830;
    }
    ctx->pc = 0x412828u;
    SET_GPR_U32(ctx, 31, 0x412830u);
    ctx->pc = 0x41282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412828u;
    // 0x41282c: 0x24a58f18  addiu       $a1, $a1, -0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4128E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4128E8u, 0x412828u, 0x412830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412830u;
label_412830:
    // 0x412830: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x412830u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_412834:
    // 0x412834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x412834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412838:
    // 0x412838: 0x263116c0  addiu       $s1, $s1, 0x16C0
    ctx->pc = 0x412838u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5824));
label_41283c:
    // 0x41283c: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x41283cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_412840:
    // 0x412840: 0xc104a44  jal         func_412910
label_412844:
    if (ctx->pc == 0x412844u) {
        ctx->pc = 0x412844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412840u;
        // 0x412844: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412848u;
        goto label_412848;
    }
    ctx->pc = 0x412840u;
    SET_GPR_U32(ctx, 31, 0x412848u);
    ctx->pc = 0x412844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412840u;
    // 0x412844: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412910u, 0x412840u, 0x412848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412848u;
label_412848:
    // 0x412848: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x412848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_41284c:
    // 0x41284c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41284cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412850:
    // 0x412850: 0xc104a44  jal         func_412910
label_412854:
    if (ctx->pc == 0x412854u) {
        ctx->pc = 0x412854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412850u;
        // 0x412854: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412858u;
        goto label_412858;
    }
    ctx->pc = 0x412850u;
    SET_GPR_U32(ctx, 31, 0x412858u);
    ctx->pc = 0x412854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412850u;
    // 0x412854: 0x7e020020  sq          $v0, 0x20($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412910u, 0x412850u, 0x412858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412858u;
label_412858:
    // 0x412858: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x412858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_41285c:
    // 0x41285c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x41285cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_412860:
    // 0x412860: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x412860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_412864:
    // 0x412864: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x412864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
label_412868:
    // 0x412868: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x412868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_41286c:
    // 0x41286c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x41286cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_412870:
    // 0x412870: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x412870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_412874:
    // 0x412874: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x412874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_412878:
    // 0x412878: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x412878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41287c:
    // 0x41287c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41287cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_412880:
    // 0x412880: 0x3e00008  jr          $ra
label_412884:
    if (ctx->pc == 0x412884u) {
        ctx->pc = 0x412884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412880u;
        // 0x412884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412888u;
        goto label_fallthrough_0x412880;
    }
    ctx->pc = 0x412880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412880u;
        // 0x412884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x412880:
    ctx->pc = 0x412888u;
}
