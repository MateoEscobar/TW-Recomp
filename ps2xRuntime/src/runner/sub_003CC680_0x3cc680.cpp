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

// Function: sub_003CC680
// Address: 0x3cc680 - 0x3cc7e0
void sub_003CC680_0x3cc680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC680_0x3cc680");
#endif

    switch (ctx->pc) {
        case 0x3cc680u: goto label_3cc680;
        case 0x3cc684u: goto label_3cc684;
        case 0x3cc688u: goto label_3cc688;
        case 0x3cc68cu: goto label_3cc68c;
        case 0x3cc690u: goto label_3cc690;
        case 0x3cc694u: goto label_3cc694;
        case 0x3cc698u: goto label_3cc698;
        case 0x3cc69cu: goto label_3cc69c;
        case 0x3cc6a0u: goto label_3cc6a0;
        case 0x3cc6a4u: goto label_3cc6a4;
        case 0x3cc6a8u: goto label_3cc6a8;
        case 0x3cc6acu: goto label_3cc6ac;
        case 0x3cc6b0u: goto label_3cc6b0;
        case 0x3cc6b4u: goto label_3cc6b4;
        case 0x3cc6b8u: goto label_3cc6b8;
        case 0x3cc6bcu: goto label_3cc6bc;
        case 0x3cc6c0u: goto label_3cc6c0;
        case 0x3cc6c4u: goto label_3cc6c4;
        case 0x3cc6c8u: goto label_3cc6c8;
        case 0x3cc6ccu: goto label_3cc6cc;
        case 0x3cc6d0u: goto label_3cc6d0;
        case 0x3cc6d4u: goto label_3cc6d4;
        case 0x3cc6d8u: goto label_3cc6d8;
        case 0x3cc6dcu: goto label_3cc6dc;
        case 0x3cc6e0u: goto label_3cc6e0;
        case 0x3cc6e4u: goto label_3cc6e4;
        case 0x3cc6e8u: goto label_3cc6e8;
        case 0x3cc6ecu: goto label_3cc6ec;
        case 0x3cc6f0u: goto label_3cc6f0;
        case 0x3cc6f4u: goto label_3cc6f4;
        case 0x3cc6f8u: goto label_3cc6f8;
        case 0x3cc6fcu: goto label_3cc6fc;
        case 0x3cc700u: goto label_3cc700;
        case 0x3cc704u: goto label_3cc704;
        case 0x3cc708u: goto label_3cc708;
        case 0x3cc70cu: goto label_3cc70c;
        case 0x3cc710u: goto label_3cc710;
        case 0x3cc714u: goto label_3cc714;
        case 0x3cc718u: goto label_3cc718;
        case 0x3cc71cu: goto label_3cc71c;
        case 0x3cc720u: goto label_3cc720;
        case 0x3cc724u: goto label_3cc724;
        case 0x3cc728u: goto label_3cc728;
        case 0x3cc72cu: goto label_3cc72c;
        case 0x3cc730u: goto label_3cc730;
        case 0x3cc734u: goto label_3cc734;
        case 0x3cc738u: goto label_3cc738;
        case 0x3cc73cu: goto label_3cc73c;
        case 0x3cc740u: goto label_3cc740;
        case 0x3cc744u: goto label_3cc744;
        case 0x3cc748u: goto label_3cc748;
        case 0x3cc74cu: goto label_3cc74c;
        case 0x3cc750u: goto label_3cc750;
        case 0x3cc754u: goto label_3cc754;
        case 0x3cc758u: goto label_3cc758;
        case 0x3cc75cu: goto label_3cc75c;
        case 0x3cc760u: goto label_3cc760;
        case 0x3cc764u: goto label_3cc764;
        case 0x3cc768u: goto label_3cc768;
        case 0x3cc76cu: goto label_3cc76c;
        case 0x3cc770u: goto label_3cc770;
        case 0x3cc774u: goto label_3cc774;
        case 0x3cc778u: goto label_3cc778;
        case 0x3cc77cu: goto label_3cc77c;
        case 0x3cc780u: goto label_3cc780;
        case 0x3cc784u: goto label_3cc784;
        case 0x3cc788u: goto label_3cc788;
        case 0x3cc78cu: goto label_3cc78c;
        case 0x3cc790u: goto label_3cc790;
        case 0x3cc794u: goto label_3cc794;
        case 0x3cc798u: goto label_3cc798;
        case 0x3cc79cu: goto label_3cc79c;
        case 0x3cc7a0u: goto label_3cc7a0;
        case 0x3cc7a4u: goto label_3cc7a4;
        case 0x3cc7a8u: goto label_3cc7a8;
        case 0x3cc7acu: goto label_3cc7ac;
        case 0x3cc7b0u: goto label_3cc7b0;
        case 0x3cc7b4u: goto label_3cc7b4;
        case 0x3cc7b8u: goto label_3cc7b8;
        case 0x3cc7bcu: goto label_3cc7bc;
        case 0x3cc7c0u: goto label_3cc7c0;
        case 0x3cc7c4u: goto label_3cc7c4;
        case 0x3cc7c8u: goto label_3cc7c8;
        case 0x3cc7ccu: goto label_3cc7cc;
        case 0x3cc7d0u: goto label_3cc7d0;
        case 0x3cc7d4u: goto label_3cc7d4;
        case 0x3cc7d8u: goto label_3cc7d8;
        case 0x3cc7dcu: goto label_3cc7dc;
        default: break;
    }

    ctx->pc = 0x3cc680u;

label_3cc680:
    // 0x3cc680: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3cc680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3cc684:
    // 0x3cc684: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3cc684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_3cc688:
    // 0x3cc688: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3cc688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_3cc68c:
    // 0x3cc68c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3cc68cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cc690:
    // 0x3cc690: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3cc690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3cc694:
    // 0x3cc694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3cc694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cc698:
    // 0x3cc698: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3cc698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3cc69c:
    // 0x3cc69c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3cc69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3cc6a0:
    // 0x3cc6a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3cc6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cc6a4:
    // 0x3cc6a4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cc6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cc6a8:
    // 0x3cc6a8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cc6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cc6ac:
    // 0x3cc6ac: 0x40f809  jalr        $v0
label_3cc6b0:
    if (ctx->pc == 0x3CC6B0u) {
        ctx->pc = 0x3CC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC6ACu;
        // 0x3cc6b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC6B4u;
        goto label_3cc6b4;
    }
    ctx->pc = 0x3CC6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC6B4u);
        ctx->pc = 0x3CC6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC6ACu;
        // 0x3cc6b0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC6ACu, 0x3CC6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC6B4u;
label_3cc6b4:
    // 0x3cc6b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3cc6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc6b8:
    // 0x3cc6b8: 0xc0ea146  jal         func_3A8518
label_3cc6bc:
    if (ctx->pc == 0x3CC6BCu) {
        ctx->pc = 0x3CC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC6B8u;
        // 0x3cc6bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC6C0u;
        goto label_3cc6c0;
    }
    ctx->pc = 0x3CC6B8u;
    SET_GPR_U32(ctx, 31, 0x3CC6C0u);
    ctx->pc = 0x3CC6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC6B8u;
    // 0x3cc6bc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3CC6B8u, 0x3CC6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC6C0u;
label_3cc6c0:
    // 0x3cc6c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cc6c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc6c4:
    // 0x3cc6c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3cc6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3cc6c8:
    // 0x3cc6c8: 0xc0ea12a  jal         func_3A84A8
label_3cc6cc:
    if (ctx->pc == 0x3CC6CCu) {
        ctx->pc = 0x3CC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC6C8u;
        // 0x3cc6cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC6D0u;
        goto label_3cc6d0;
    }
    ctx->pc = 0x3CC6C8u;
    SET_GPR_U32(ctx, 31, 0x3CC6D0u);
    ctx->pc = 0x3CC6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC6C8u;
    // 0x3cc6cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CC6C8u, 0x3CC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC6D0u;
label_3cc6d0:
    // 0x3cc6d0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3cc6d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cc6d4:
    // 0x3cc6d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cc6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cc6d8:
    // 0x3cc6d8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x3cc6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3cc6dc:
    // 0x3cc6dc: 0xc0e858c  jal         func_3A1630
label_3cc6e0:
    if (ctx->pc == 0x3CC6E0u) {
        ctx->pc = 0x3CC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC6DCu;
        // 0x3cc6e0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC6E4u;
        goto label_3cc6e4;
    }
    ctx->pc = 0x3CC6DCu;
    SET_GPR_U32(ctx, 31, 0x3CC6E4u);
    ctx->pc = 0x3CC6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC6DCu;
    // 0x3cc6e0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CC6DCu, 0x3CC6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC6E4u;
label_3cc6e4:
    // 0x3cc6e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3cc6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3cc6e8:
    // 0x3cc6e8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x3cc6e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_3cc6ec:
    // 0x3cc6ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3cc6ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3cc6f0:
    // 0x3cc6f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cc6f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cc6f4:
    // 0x3cc6f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3cc6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3cc6f8:
    // 0x3cc6f8: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3cc6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3cc6fc:
    // 0x3cc6fc: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3cc6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
label_3cc700:
    // 0x3cc700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cc700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc704:
    // 0x3cc704: 0x16430019  bne         $s2, $v1, . + 4 + (0x19 << 2)
label_3cc708:
    if (ctx->pc == 0x3CC708u) {
        ctx->pc = 0x3CC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC704u;
        // 0x3cc708: 0xe62000c0  swc1        $f0, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC70Cu;
        goto label_3cc70c;
    }
    ctx->pc = 0x3CC704u;
    {
        const bool branch_taken_0x3cc704 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x3CC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC704u;
        // 0x3cc708: 0xe62000c0  swc1        $f0, 0xC0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc704) {
            ctx->pc = 0x3CC76Cu;
            goto label_3cc76c;
        }
    }
    ctx->pc = 0x3CC70Cu;
label_3cc70c:
    // 0x3cc70c: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3cc70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3cc710:
    // 0x3cc710: 0x342104f7  ori         $at, $at, 0x4F7
    ctx->pc = 0x3cc710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1271);
label_3cc714:
    // 0x3cc714: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cc714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cc718:
    // 0x3cc718: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x3cc718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
label_3cc71c:
    // 0x3cc71c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3cc71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cc720:
    // 0x3cc720: 0x346347ff  ori         $v1, $v1, 0x47FF
    ctx->pc = 0x3cc720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18431);
label_3cc724:
    // 0x3cc724: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x3cc724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3cc728:
    // 0x3cc728: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x3cc728u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3cc72c:
    // 0x3cc72c: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3cc72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3cc730:
    // 0x3cc730: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3cc730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_3cc734:
    // 0x3cc734: 0x3c013e13  lui         $at, 0x3E13
    ctx->pc = 0x3cc734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15891 << 16));
label_3cc738:
    // 0x3cc738: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x3cc738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
label_3cc73c:
    // 0x3cc73c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3cc73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3cc740:
    // 0x3cc740: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cc740u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cc744:
    // 0x3cc744: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x3cc744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_3cc748:
    // 0x3cc748: 0xae320054  sw          $s2, 0x54($s1)
    ctx->pc = 0x3cc748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 18));
label_3cc74c:
    // 0x3cc74c: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3cc74cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3cc750:
    // 0x3cc750: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3cc750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3cc754:
    // 0x3cc754: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3cc754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3cc758:
    // 0x3cc758: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3cc758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3cc75c:
    // 0x3cc75c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3cc75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3cc760:
    // 0x3cc760: 0xe62100c0  swc1        $f1, 0xC0($s1)
    ctx->pc = 0x3cc760u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_3cc764:
    // 0x3cc764: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3cc764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
label_3cc768:
    // 0x3cc768: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3cc768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3cc76c:
    // 0x3cc76c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3cc76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3cc770:
    // 0x3cc770: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3cc770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3cc774:
    // 0x3cc774: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3cc774u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3cc778:
    // 0x3cc778: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3cc778u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3cc77c:
    // 0x3cc77c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3cc77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3cc780:
    // 0x3cc780: 0x40f809  jalr        $v0
label_3cc784:
    if (ctx->pc == 0x3CC784u) {
        ctx->pc = 0x3CC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC780u;
        // 0x3cc784: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC788u;
        goto label_3cc788;
    }
    ctx->pc = 0x3CC780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC788u);
        ctx->pc = 0x3CC784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC780u;
        // 0x3cc784: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC780u, 0x3CC788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC788u;
label_3cc788:
    // 0x3cc788: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cc788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cc78c:
    // 0x3cc78c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3cc78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3cc790:
    // 0x3cc790: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x3cc790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_3cc794:
    // 0x3cc794: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3cc794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc798:
    // 0x3cc798: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x3cc798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_3cc79c:
    // 0x3cc79c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3cc79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc7a0:
    // 0x3cc7a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3cc7a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc7a4:
    // 0x3cc7a4: 0xc0e93a2  jal         func_3A4E88
label_3cc7a8:
    if (ctx->pc == 0x3CC7A8u) {
        ctx->pc = 0x3CC7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7A4u;
        // 0x3cc7a8: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC7ACu;
        goto label_3cc7ac;
    }
    ctx->pc = 0x3CC7A4u;
    SET_GPR_U32(ctx, 31, 0x3CC7ACu);
    ctx->pc = 0x3CC7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC7A4u;
    // 0x3cc7a8: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3CC7A4u, 0x3CC7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC7ACu;
label_3cc7ac:
    // 0x3cc7ac: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3cc7acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3cc7b0:
    // 0x3cc7b0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3cc7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3cc7b4:
    // 0x3cc7b4: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3cc7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3cc7b8:
    // 0x3cc7b8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3cc7b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cc7bc:
    // 0x3cc7bc: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x3cc7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_3cc7c0:
    // 0x3cc7c0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3cc7c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cc7c4:
    // 0x3cc7c4: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x3cc7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_3cc7c8:
    // 0x3cc7c8: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3cc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3cc7cc:
    // 0x3cc7cc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3cc7ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cc7d0:
    // 0x3cc7d0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3cc7d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3cc7d4:
    // 0x3cc7d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3cc7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3cc7d8:
    // 0x3cc7d8: 0x3e00008  jr          $ra
label_3cc7dc:
    if (ctx->pc == 0x3CC7DCu) {
        ctx->pc = 0x3CC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7D8u;
        // 0x3cc7dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC7E0u;
        goto label_fallthrough_0x3cc7d8;
    }
    ctx->pc = 0x3CC7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC7D8u;
        // 0x3cc7dc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cc7d8:
    ctx->pc = 0x3CC7E0u;
}
