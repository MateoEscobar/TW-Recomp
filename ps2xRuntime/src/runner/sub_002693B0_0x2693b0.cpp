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

// Function: sub_002693B0
// Address: 0x2693b0 - 0x269510
void sub_002693B0_0x2693b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002693B0_0x2693b0");
#endif

    switch (ctx->pc) {
        case 0x2693b0u: goto label_2693b0;
        case 0x2693b4u: goto label_2693b4;
        case 0x2693b8u: goto label_2693b8;
        case 0x2693bcu: goto label_2693bc;
        case 0x2693c0u: goto label_2693c0;
        case 0x2693c4u: goto label_2693c4;
        case 0x2693c8u: goto label_2693c8;
        case 0x2693ccu: goto label_2693cc;
        case 0x2693d0u: goto label_2693d0;
        case 0x2693d4u: goto label_2693d4;
        case 0x2693d8u: goto label_2693d8;
        case 0x2693dcu: goto label_2693dc;
        case 0x2693e0u: goto label_2693e0;
        case 0x2693e4u: goto label_2693e4;
        case 0x2693e8u: goto label_2693e8;
        case 0x2693ecu: goto label_2693ec;
        case 0x2693f0u: goto label_2693f0;
        case 0x2693f4u: goto label_2693f4;
        case 0x2693f8u: goto label_2693f8;
        case 0x2693fcu: goto label_2693fc;
        case 0x269400u: goto label_269400;
        case 0x269404u: goto label_269404;
        case 0x269408u: goto label_269408;
        case 0x26940cu: goto label_26940c;
        case 0x269410u: goto label_269410;
        case 0x269414u: goto label_269414;
        case 0x269418u: goto label_269418;
        case 0x26941cu: goto label_26941c;
        case 0x269420u: goto label_269420;
        case 0x269424u: goto label_269424;
        case 0x269428u: goto label_269428;
        case 0x26942cu: goto label_26942c;
        case 0x269430u: goto label_269430;
        case 0x269434u: goto label_269434;
        case 0x269438u: goto label_269438;
        case 0x26943cu: goto label_26943c;
        case 0x269440u: goto label_269440;
        case 0x269444u: goto label_269444;
        case 0x269448u: goto label_269448;
        case 0x26944cu: goto label_26944c;
        case 0x269450u: goto label_269450;
        case 0x269454u: goto label_269454;
        case 0x269458u: goto label_269458;
        case 0x26945cu: goto label_26945c;
        case 0x269460u: goto label_269460;
        case 0x269464u: goto label_269464;
        case 0x269468u: goto label_269468;
        case 0x26946cu: goto label_26946c;
        case 0x269470u: goto label_269470;
        case 0x269474u: goto label_269474;
        case 0x269478u: goto label_269478;
        case 0x26947cu: goto label_26947c;
        case 0x269480u: goto label_269480;
        case 0x269484u: goto label_269484;
        case 0x269488u: goto label_269488;
        case 0x26948cu: goto label_26948c;
        case 0x269490u: goto label_269490;
        case 0x269494u: goto label_269494;
        case 0x269498u: goto label_269498;
        case 0x26949cu: goto label_26949c;
        case 0x2694a0u: goto label_2694a0;
        case 0x2694a4u: goto label_2694a4;
        case 0x2694a8u: goto label_2694a8;
        case 0x2694acu: goto label_2694ac;
        case 0x2694b0u: goto label_2694b0;
        case 0x2694b4u: goto label_2694b4;
        case 0x2694b8u: goto label_2694b8;
        case 0x2694bcu: goto label_2694bc;
        case 0x2694c0u: goto label_2694c0;
        case 0x2694c4u: goto label_2694c4;
        case 0x2694c8u: goto label_2694c8;
        case 0x2694ccu: goto label_2694cc;
        case 0x2694d0u: goto label_2694d0;
        case 0x2694d4u: goto label_2694d4;
        case 0x2694d8u: goto label_2694d8;
        case 0x2694dcu: goto label_2694dc;
        case 0x2694e0u: goto label_2694e0;
        case 0x2694e4u: goto label_2694e4;
        case 0x2694e8u: goto label_2694e8;
        case 0x2694ecu: goto label_2694ec;
        case 0x2694f0u: goto label_2694f0;
        case 0x2694f4u: goto label_2694f4;
        case 0x2694f8u: goto label_2694f8;
        case 0x2694fcu: goto label_2694fc;
        case 0x269500u: goto label_269500;
        case 0x269504u: goto label_269504;
        case 0x269508u: goto label_269508;
        case 0x26950cu: goto label_26950c;
        default: break;
    }

    ctx->pc = 0x2693b0u;

label_2693b0:
    // 0x2693b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2693b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2693b4:
    // 0x2693b4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2693b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2693b8:
    // 0x2693b8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2693b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2693bc:
    // 0x2693bc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2693bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2693c0:
    // 0x2693c0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2693c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2693c4:
    // 0x2693c4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2693c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2693c8:
    // 0x2693c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2693c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2693cc:
    // 0x2693cc: 0xc08bf92  jal         func_22FE48
label_2693d0:
    if (ctx->pc == 0x2693D0u) {
        ctx->pc = 0x2693D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693CCu;
        // 0x2693d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2693D4u;
        goto label_2693d4;
    }
    ctx->pc = 0x2693CCu;
    SET_GPR_U32(ctx, 31, 0x2693D4u);
    ctx->pc = 0x2693D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693CCu;
    // 0x2693d0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x2693CCu, 0x2693D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693D4u;
label_2693d4:
    // 0x2693d4: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x2693d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_2693d8:
    // 0x2693d8: 0x8e3400d8  lw          $s4, 0xD8($s1)
    ctx->pc = 0x2693d8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2693dc:
    // 0x2693dc: 0x2610df28  addiu       $s0, $s0, -0x20D8
    ctx->pc = 0x2693dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958888));
label_2693e0:
    // 0x2693e0: 0xc041532  jal         func_1054C8
label_2693e4:
    if (ctx->pc == 0x2693E4u) {
        ctx->pc = 0x2693E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693E0u;
        // 0x2693e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2693E8u;
        goto label_2693e8;
    }
    ctx->pc = 0x2693E0u;
    SET_GPR_U32(ctx, 31, 0x2693E8u);
    ctx->pc = 0x2693E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693E0u;
    // 0x2693e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2693E0u, 0x2693E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693E8u;
label_2693e8:
    // 0x2693e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2693e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2693ec:
    // 0x2693ec: 0xc041532  jal         func_1054C8
label_2693f0:
    if (ctx->pc == 0x2693F0u) {
        ctx->pc = 0x2693F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693ECu;
        // 0x2693f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2693F4u;
        goto label_2693f4;
    }
    ctx->pc = 0x2693ECu;
    SET_GPR_U32(ctx, 31, 0x2693F4u);
    ctx->pc = 0x2693F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693ECu;
    // 0x2693f0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2693ECu, 0x2693F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693F4u;
label_2693f4:
    // 0x2693f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2693f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2693f8:
    // 0x2693f8: 0xc041532  jal         func_1054C8
label_2693fc:
    if (ctx->pc == 0x2693FCu) {
        ctx->pc = 0x2693FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693F8u;
        // 0x2693fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269400u;
        goto label_269400;
    }
    ctx->pc = 0x2693F8u;
    SET_GPR_U32(ctx, 31, 0x269400u);
    ctx->pc = 0x2693FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693F8u;
    // 0x2693fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2693F8u, 0x269400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269400u;
label_269400:
    // 0x269400: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_269404:
    if (ctx->pc == 0x269404u) {
        ctx->pc = 0x269404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269400u;
        // 0x269404: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269408u;
        goto label_269408;
    }
    ctx->pc = 0x269400u;
    {
        const bool branch_taken_0x269400 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x269404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269400u;
        // 0x269404: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269400) {
            ctx->pc = 0x269428u;
            goto label_269428;
        }
    }
    ctx->pc = 0x269408u;
label_269408:
    // 0x269408: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x269408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26940c:
    // 0x26940c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x26940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_269410:
    // 0x269410: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x269410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269414:
    // 0x269414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x269414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_269418:
    // 0x269418: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x269418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26941c:
    // 0x26941c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26941cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_269420:
    // 0x269420: 0xc04159e  jal         func_105678
label_269424:
    if (ctx->pc == 0x269424u) {
        ctx->pc = 0x269424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269420u;
        // 0x269424: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269428u;
        goto label_269428;
    }
    ctx->pc = 0x269420u;
    SET_GPR_U32(ctx, 31, 0x269428u);
    ctx->pc = 0x269424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269420u;
    // 0x269424: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x269420u, 0x269428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269428u;
label_269428:
    // 0x269428: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x269428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26942c:
    // 0x26942c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_269430:
    // 0x269430: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
label_269434:
    if (ctx->pc == 0x269434u) {
        ctx->pc = 0x269434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269430u;
        // 0x269434: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269438u;
        goto label_269438;
    }
    ctx->pc = 0x269430u;
    {
        const bool branch_taken_0x269430 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x269434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269430u;
        // 0x269434: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269430) {
            ctx->pc = 0x269478u;
            goto label_269478;
        }
    }
    ctx->pc = 0x269438u;
label_269438:
    // 0x269438: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x269438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26943c:
    // 0x26943c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26943cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_269440:
    // 0x269440: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x269440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_269444:
    // 0x269444: 0x40f809  jalr        $v0
label_269448:
    if (ctx->pc == 0x269448u) {
        ctx->pc = 0x269448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269444u;
        // 0x269448: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26944Cu;
        goto label_26944c;
    }
    ctx->pc = 0x269444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26944Cu);
        ctx->pc = 0x269448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269444u;
        // 0x269448: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269444u, 0x26944Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26944Cu;
label_26944c:
    // 0x26944c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x26944cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_269450:
    // 0x269450: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x269450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
label_269454:
    // 0x269454: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269458:
    // 0x269458: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x269458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26945c:
    // 0x26945c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x26945cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269460:
    // 0x269460: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x269460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_269464:
    // 0x269464: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x269464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_269468:
    // 0x269468: 0x24060091  addiu       $a2, $zero, 0x91
    ctx->pc = 0x269468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
label_26946c:
    // 0x26946c: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x26946cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
label_269470:
    // 0x269470: 0xc041664  jal         func_105990
label_269474:
    if (ctx->pc == 0x269474u) {
        ctx->pc = 0x269474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269470u;
        // 0x269474: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269478u;
        goto label_269478;
    }
    ctx->pc = 0x269470u;
    SET_GPR_U32(ctx, 31, 0x269478u);
    ctx->pc = 0x269474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269470u;
    // 0x269474: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x269470u, 0x269478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269478u;
label_269478:
    // 0x269478: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_26947c:
    if (ctx->pc == 0x26947Cu) {
        ctx->pc = 0x26947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269478u;
        // 0x26947c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269480u;
        goto label_269480;
    }
    ctx->pc = 0x269478u;
    {
        const bool branch_taken_0x269478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269478u;
        // 0x26947c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269478) {
            ctx->pc = 0x2694A0u;
            goto label_2694a0;
        }
    }
    ctx->pc = 0x269480u;
label_269480:
    // 0x269480: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x269480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_269484:
    // 0x269484: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x269484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_269488:
    // 0x269488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x269488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26948c:
    // 0x26948c: 0x3c013e08  lui         $at, 0x3E08
    ctx->pc = 0x26948cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15880 << 16));
label_269490:
    // 0x269490: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x269490u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
label_269494:
    // 0x269494: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x269494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_269498:
    // 0x269498: 0xc041b20  jal         func_106C80
label_26949c:
    if (ctx->pc == 0x26949Cu) {
        ctx->pc = 0x26949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269498u;
        // 0x26949c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2694A0u;
        goto label_2694a0;
    }
    ctx->pc = 0x269498u;
    SET_GPR_U32(ctx, 31, 0x2694A0u);
    ctx->pc = 0x26949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269498u;
    // 0x26949c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x269498u, 0x2694A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694A0u;
label_2694a0:
    // 0x2694a0: 0xc05d484  jal         func_175210
label_2694a4:
    if (ctx->pc == 0x2694A4u) {
        ctx->pc = 0x2694A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694A0u;
        // 0x2694a4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2694A8u;
        goto label_2694a8;
    }
    ctx->pc = 0x2694A0u;
    SET_GPR_U32(ctx, 31, 0x2694A8u);
    ctx->pc = 0x2694A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2694A0u;
    // 0x2694a4: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2694A0u, 0x2694A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694A8u;
label_2694a8:
    // 0x2694a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2694a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2694ac:
    // 0x2694ac: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x2694acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_2694b0:
    // 0x2694b0: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x2694b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_2694b4:
    // 0x2694b4: 0xa0f809  jalr        $a1
label_2694b8:
    if (ctx->pc == 0x2694B8u) {
        ctx->pc = 0x2694B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694B4u;
        // 0x2694b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2694BCu;
        goto label_2694bc;
    }
    ctx->pc = 0x2694B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2694BCu);
        ctx->pc = 0x2694B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694B4u;
        // 0x2694b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2694B4u, 0x2694BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2694BCu;
label_2694bc:
    // 0x2694bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2694bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2694c0:
    // 0x2694c0: 0xc087016  jal         func_21C058
label_2694c4:
    if (ctx->pc == 0x2694C4u) {
        ctx->pc = 0x2694C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694C0u;
        // 0x2694c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2694C8u;
        goto label_2694c8;
    }
    ctx->pc = 0x2694C0u;
    SET_GPR_U32(ctx, 31, 0x2694C8u);
    ctx->pc = 0x2694C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2694C0u;
    // 0x2694c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x2694C0u, 0x2694C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694C8u;
label_2694c8:
    // 0x2694c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2694c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2694cc:
    // 0x2694cc: 0xc05d53a  jal         func_1754E8
label_2694d0:
    if (ctx->pc == 0x2694D0u) {
        ctx->pc = 0x2694D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694CCu;
        // 0x2694d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2694D4u;
        goto label_2694d4;
    }
    ctx->pc = 0x2694CCu;
    SET_GPR_U32(ctx, 31, 0x2694D4u);
    ctx->pc = 0x2694D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2694CCu;
    // 0x2694d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x2694CCu, 0x2694D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694D4u;
label_2694d4:
    // 0x2694d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2694d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2694d8:
    // 0x2694d8: 0xc05d4f6  jal         func_1753D8
label_2694dc:
    if (ctx->pc == 0x2694DCu) {
        ctx->pc = 0x2694DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694D8u;
        // 0x2694dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2694E0u;
        goto label_2694e0;
    }
    ctx->pc = 0x2694D8u;
    SET_GPR_U32(ctx, 31, 0x2694E0u);
    ctx->pc = 0x2694DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2694D8u;
    // 0x2694dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x2694D8u, 0x2694E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694E0u;
label_2694e0:
    // 0x2694e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2694e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2694e4:
    // 0x2694e4: 0xc089990  jal         func_226640
label_2694e8:
    if (ctx->pc == 0x2694E8u) {
        ctx->pc = 0x2694E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694E4u;
        // 0x2694e8: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2694ECu;
        goto label_2694ec;
    }
    ctx->pc = 0x2694E4u;
    SET_GPR_U32(ctx, 31, 0x2694ECu);
    ctx->pc = 0x2694E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2694E4u;
    // 0x2694e8: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x2694E4u, 0x2694ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694ECu;
label_2694ec:
    // 0x2694ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2694ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2694f0:
    // 0x2694f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2694f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2694f4:
    // 0x2694f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2694f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2694f8:
    // 0x2694f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2694f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2694fc:
    // 0x2694fc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2694fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_269500:
    // 0x269500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x269500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_269504:
    // 0x269504: 0x3e00008  jr          $ra
label_269508:
    if (ctx->pc == 0x269508u) {
        ctx->pc = 0x269508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269504u;
        // 0x269508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26950Cu;
        goto label_26950c;
    }
    ctx->pc = 0x269504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269504u;
        // 0x269508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26950Cu;
label_26950c:
    // 0x26950c: 0x0  nop
    ctx->pc = 0x26950cu;
    // NOP
    ctx->pc = 0x269510u;
}
