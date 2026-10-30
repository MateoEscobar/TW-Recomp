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

// Function: sub_002A3320
// Address: 0x2a3320 - 0x2a3498
void sub_002A3320_0x2a3320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3320_0x2a3320");
#endif

    switch (ctx->pc) {
        case 0x2a3320u: goto label_2a3320;
        case 0x2a3324u: goto label_2a3324;
        case 0x2a3328u: goto label_2a3328;
        case 0x2a332cu: goto label_2a332c;
        case 0x2a3330u: goto label_2a3330;
        case 0x2a3334u: goto label_2a3334;
        case 0x2a3338u: goto label_2a3338;
        case 0x2a333cu: goto label_2a333c;
        case 0x2a3340u: goto label_2a3340;
        case 0x2a3344u: goto label_2a3344;
        case 0x2a3348u: goto label_2a3348;
        case 0x2a334cu: goto label_2a334c;
        case 0x2a3350u: goto label_2a3350;
        case 0x2a3354u: goto label_2a3354;
        case 0x2a3358u: goto label_2a3358;
        case 0x2a335cu: goto label_2a335c;
        case 0x2a3360u: goto label_2a3360;
        case 0x2a3364u: goto label_2a3364;
        case 0x2a3368u: goto label_2a3368;
        case 0x2a336cu: goto label_2a336c;
        case 0x2a3370u: goto label_2a3370;
        case 0x2a3374u: goto label_2a3374;
        case 0x2a3378u: goto label_2a3378;
        case 0x2a337cu: goto label_2a337c;
        case 0x2a3380u: goto label_2a3380;
        case 0x2a3384u: goto label_2a3384;
        case 0x2a3388u: goto label_2a3388;
        case 0x2a338cu: goto label_2a338c;
        case 0x2a3390u: goto label_2a3390;
        case 0x2a3394u: goto label_2a3394;
        case 0x2a3398u: goto label_2a3398;
        case 0x2a339cu: goto label_2a339c;
        case 0x2a33a0u: goto label_2a33a0;
        case 0x2a33a4u: goto label_2a33a4;
        case 0x2a33a8u: goto label_2a33a8;
        case 0x2a33acu: goto label_2a33ac;
        case 0x2a33b0u: goto label_2a33b0;
        case 0x2a33b4u: goto label_2a33b4;
        case 0x2a33b8u: goto label_2a33b8;
        case 0x2a33bcu: goto label_2a33bc;
        case 0x2a33c0u: goto label_2a33c0;
        case 0x2a33c4u: goto label_2a33c4;
        case 0x2a33c8u: goto label_2a33c8;
        case 0x2a33ccu: goto label_2a33cc;
        case 0x2a33d0u: goto label_2a33d0;
        case 0x2a33d4u: goto label_2a33d4;
        case 0x2a33d8u: goto label_2a33d8;
        case 0x2a33dcu: goto label_2a33dc;
        case 0x2a33e0u: goto label_2a33e0;
        case 0x2a33e4u: goto label_2a33e4;
        case 0x2a33e8u: goto label_2a33e8;
        case 0x2a33ecu: goto label_2a33ec;
        case 0x2a33f0u: goto label_2a33f0;
        case 0x2a33f4u: goto label_2a33f4;
        case 0x2a33f8u: goto label_2a33f8;
        case 0x2a33fcu: goto label_2a33fc;
        case 0x2a3400u: goto label_2a3400;
        case 0x2a3404u: goto label_2a3404;
        case 0x2a3408u: goto label_2a3408;
        case 0x2a340cu: goto label_2a340c;
        case 0x2a3410u: goto label_2a3410;
        case 0x2a3414u: goto label_2a3414;
        case 0x2a3418u: goto label_2a3418;
        case 0x2a341cu: goto label_2a341c;
        case 0x2a3420u: goto label_2a3420;
        case 0x2a3424u: goto label_2a3424;
        case 0x2a3428u: goto label_2a3428;
        case 0x2a342cu: goto label_2a342c;
        case 0x2a3430u: goto label_2a3430;
        case 0x2a3434u: goto label_2a3434;
        case 0x2a3438u: goto label_2a3438;
        case 0x2a343cu: goto label_2a343c;
        case 0x2a3440u: goto label_2a3440;
        case 0x2a3444u: goto label_2a3444;
        case 0x2a3448u: goto label_2a3448;
        case 0x2a344cu: goto label_2a344c;
        case 0x2a3450u: goto label_2a3450;
        case 0x2a3454u: goto label_2a3454;
        case 0x2a3458u: goto label_2a3458;
        case 0x2a345cu: goto label_2a345c;
        case 0x2a3460u: goto label_2a3460;
        case 0x2a3464u: goto label_2a3464;
        case 0x2a3468u: goto label_2a3468;
        case 0x2a346cu: goto label_2a346c;
        case 0x2a3470u: goto label_2a3470;
        case 0x2a3474u: goto label_2a3474;
        case 0x2a3478u: goto label_2a3478;
        case 0x2a347cu: goto label_2a347c;
        case 0x2a3480u: goto label_2a3480;
        case 0x2a3484u: goto label_2a3484;
        case 0x2a3488u: goto label_2a3488;
        case 0x2a348cu: goto label_2a348c;
        case 0x2a3490u: goto label_2a3490;
        case 0x2a3494u: goto label_2a3494;
        default: break;
    }

    ctx->pc = 0x2a3320u;

label_2a3320:
    // 0x2a3320: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2a3320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2a3324:
    // 0x2a3324: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2a3324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2a3328:
    // 0x2a3328: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x2a3328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_2a332c:
    // 0x2a332c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x2a332cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_2a3330:
    // 0x2a3330: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2a3330u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a3334:
    // 0x2a3334: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2a3334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2a3338:
    // 0x2a3338: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2a3338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2a333c:
    // 0x2a333c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2a333cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_2a3340:
    // 0x2a3340: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2a3340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2a3344:
    // 0x2a3344: 0x2442f370  addiu       $v0, $v0, -0xC90
    ctx->pc = 0x2a3344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964080));
label_2a3348:
    // 0x2a3348: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2a3348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2a334c:
    // 0x2a334c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2a334cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2a3350:
    // 0x2a3350: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2a3350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2a3354:
    // 0x2a3354: 0x69c00  sll         $s3, $a2, 16
    ctx->pc = 0x2a3354u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_2a3358:
    // 0x2a3358: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2a3358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2a335c:
    // 0x2a335c: 0x78c00  sll         $s1, $a3, 16
    ctx->pc = 0x2a335cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2a3360:
    // 0x2a3360: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2a3360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2a3364:
    // 0x2a3364: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2a3364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2a3368:
    // 0x2a3368: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x2a3368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_2a336c:
    // 0x2a336c: 0x89400  sll         $s2, $t0, 16
    ctx->pc = 0x2a336cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_2a3370:
    // 0x2a3370: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2a3370u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2a3374:
    // 0x2a3374: 0x98400  sll         $s0, $t1, 16
    ctx->pc = 0x2a3374u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_2a3378:
    // 0x2a3378: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2a3378u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2a337c:
    // 0x2a337c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x2a337cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
label_2a3380:
    // 0x2a3380: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a3384:
    // 0x2a3384: 0xbf403  sra         $fp, $t3, 16
    ctx->pc = 0x2a3384u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 11), 16));
label_2a3388:
    // 0x2a3388: 0xa2e00004  sb          $zero, 0x4($s7)
    ctx->pc = 0x2a3388u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 4), (uint8_t)GPR_U32(ctx, 0));
label_2a338c:
    // 0x2a338c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2a338cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2a3390:
    // 0x2a3390: 0xa2e00005  sb          $zero, 0x5($s7)
    ctx->pc = 0x2a3390u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 5), (uint8_t)GPR_U32(ctx, 0));
label_2a3394:
    // 0x2a3394: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2a3394u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_2a3398:
    // 0x2a3398: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x2a3398u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
label_2a339c:
    // 0x2a339c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2a339cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2a33a0:
    // 0x2a33a0: 0x8c862b04  lw          $a2, 0x2B04($a0)
    ctx->pc = 0x2a33a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11012)));
label_2a33a4:
    // 0x2a33a4: 0x139c03  sra         $s3, $s3, 16
    ctx->pc = 0x2a33a4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 16));
label_2a33a8:
    // 0x2a33a8: 0xaee2000c  sw          $v0, 0xC($s7)
    ctx->pc = 0x2a33a8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 2));
label_2a33ac:
    // 0x2a33ac: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x2a33acu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
label_2a33b0:
    // 0x2a33b0: 0xaef50000  sw          $s5, 0x0($s7)
    ctx->pc = 0x2a33b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 21));
label_2a33b4:
    // 0x2a33b4: 0x129403  sra         $s2, $s2, 16
    ctx->pc = 0x2a33b4u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 18), 16));
label_2a33b8:
    // 0x2a33b8: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x2a33b8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
label_2a33bc:
    // 0x2a33bc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a33bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a33c0:
    // 0x2a33c0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2a33c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_2a33c4:
    // 0x2a33c4: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x2a33c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_2a33c8:
    // 0x2a33c8: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x2a33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_2a33cc:
    // 0x2a33cc: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x2a33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_2a33d0:
    // 0x2a33d0: 0x40f809  jalr        $v0
label_2a33d4:
    if (ctx->pc == 0x2A33D4u) {
        ctx->pc = 0x2A33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33D0u;
        // 0x2a33d4: 0x8fb400d8  lw          $s4, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A33D8u;
        goto label_2a33d8;
    }
    ctx->pc = 0x2A33D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A33D8u);
        ctx->pc = 0x2A33D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33D0u;
        // 0x2a33d4: 0x8fb400d8  lw          $s4, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A33D0u, 0x2A33D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A33D8u;
label_2a33d8:
    // 0x2a33d8: 0xaee20020  sw          $v0, 0x20($s7)
    ctx->pc = 0x2a33d8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 2));
label_2a33dc:
    // 0x2a33dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a33dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a33e0:
    // 0x2a33e0: 0xa6e00032  sh          $zero, 0x32($s7)
    ctx->pc = 0x2a33e0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 50), (uint16_t)GPR_U32(ctx, 0));
label_2a33e4:
    // 0x2a33e4: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x2a33e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2a33e8:
    // 0x2a33e8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a33e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a33ec:
    // 0x2a33ec: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a33ecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a33f0:
    // 0x2a33f0: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a33f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a33f4:
    // 0x2a33f4: 0x60f809  jalr        $v1
label_2a33f8:
    if (ctx->pc == 0x2A33F8u) {
        ctx->pc = 0x2A33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33F4u;
        // 0x2a33f8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A33FCu;
        goto label_2a33fc;
    }
    ctx->pc = 0x2A33F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A33FCu);
        ctx->pc = 0x2A33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A33F4u;
        // 0x2a33f8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A33F4u, 0x2A33FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A33FCu;
label_2a33fc:
    // 0x2a33fc: 0x2108018  mult        $s0, $s0, $s0
    ctx->pc = 0x2a33fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2a3400:
    // 0x2a3400: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2a3400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2a3404:
    // 0x2a3404: 0xe6f40024  swc1        $f20, 0x24($s7)
    ctx->pc = 0x2a3404u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 36), bits); }
label_2a3408:
    // 0x2a3408: 0x7ee20010  sq          $v0, 0x10($s7)
    ctx->pc = 0x2a3408u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 2));
label_2a340c:
    // 0x2a340c: 0xe6f50028  swc1        $f21, 0x28($s7)
    ctx->pc = 0x2a340cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 40), bits); }
label_2a3410:
    // 0x2a3410: 0xa6f10030  sh          $s1, 0x30($s7)
    ctx->pc = 0x2a3410u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 48), (uint16_t)GPR_U32(ctx, 17));
label_2a3414:
    // 0x2a3414: 0xa6f30036  sh          $s3, 0x36($s7)
    ctx->pc = 0x2a3414u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 54), (uint16_t)GPR_U32(ctx, 19));
label_2a3418:
    // 0x2a3418: 0xa6f2003a  sh          $s2, 0x3A($s7)
    ctx->pc = 0x2a3418u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 58), (uint16_t)GPR_U32(ctx, 18));
label_2a341c:
    // 0x2a341c: 0xa6f0003c  sh          $s0, 0x3C($s7)
    ctx->pc = 0x2a341cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 60), (uint16_t)GPR_U32(ctx, 16));
label_2a3420:
    // 0x2a3420: 0xaef6004c  sw          $s6, 0x4C($s7)
    ctx->pc = 0x2a3420u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 76), GPR_U32(ctx, 22));
label_2a3424:
    // 0x2a3424: 0xaef40048  sw          $s4, 0x48($s7)
    ctx->pc = 0x2a3424u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 72), GPR_U32(ctx, 20));
label_2a3428:
    // 0x2a3428: 0xaee0002c  sw          $zero, 0x2C($s7)
    ctx->pc = 0x2a3428u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 0));
label_2a342c:
    // 0x2a342c: 0xa6e00034  sh          $zero, 0x34($s7)
    ctx->pc = 0x2a342cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 52), (uint16_t)GPR_U32(ctx, 0));
label_2a3430:
    // 0x2a3430: 0xa6e00038  sh          $zero, 0x38($s7)
    ctx->pc = 0x2a3430u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 56), (uint16_t)GPR_U32(ctx, 0));
label_2a3434:
    // 0x2a3434: 0xaefe0044  sw          $fp, 0x44($s7)
    ctx->pc = 0x2a3434u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 30));
label_2a3438:
    // 0x2a3438: 0x13c00008  beqz        $fp, . + 4 + (0x8 << 2)
label_2a343c:
    if (ctx->pc == 0x2A343Cu) {
        ctx->pc = 0x2A343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3438u;
        // 0x2a343c: 0xaee00040  sw          $zero, 0x40($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3440u;
        goto label_2a3440;
    }
    ctx->pc = 0x2A3438u;
    {
        const bool branch_taken_0x2a3438 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A343Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3438u;
        // 0x2a343c: 0xaee00040  sw          $zero, 0x40($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3438) {
            ctx->pc = 0x2A345Cu;
            goto label_2a345c;
        }
    }
    ctx->pc = 0x2A3440u;
label_2a3440:
    // 0x2a3440: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a3440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a3444:
    // 0x2a3444: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2a3444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2a3448:
    // 0x2a3448: 0x8ca4b734  lw          $a0, -0x48CC($a1)
    ctx->pc = 0x2a3448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a344c:
    // 0x2a344c: 0x3c31818  mult        $v1, $fp, $v1
    ctx->pc = 0x2a344cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2a3450:
    // 0x2a3450: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x2a3450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2a3454:
    // 0x2a3454: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a3458:
    // 0x2a3458: 0xaee20044  sw          $v0, 0x44($s7)
    ctx->pc = 0x2a3458u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 68), GPR_U32(ctx, 2));
label_2a345c:
    // 0x2a345c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2a345cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2a3460:
    // 0x2a3460: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2a3460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a3464:
    // 0x2a3464: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2a3464u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a3468:
    // 0x2a3468: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2a3468u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a346c:
    // 0x2a346c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2a346cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a3470:
    // 0x2a3470: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2a3470u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a3474:
    // 0x2a3474: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2a3474u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a3478:
    // 0x2a3478: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2a3478u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a347c:
    // 0x2a347c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x2a347cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3480:
    // 0x2a3480: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x2a3480u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a3484:
    // 0x2a3484: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a3488:
    // 0x2a3488: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2a3488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2a348c:
    // 0x2a348c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2a348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a3490:
    // 0x2a3490: 0x3e00008  jr          $ra
label_2a3494:
    if (ctx->pc == 0x2A3494u) {
        ctx->pc = 0x2A3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3490u;
        // 0x2a3494: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A3498u;
        goto label_fallthrough_0x2a3490;
    }
    ctx->pc = 0x2A3490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3490u;
        // 0x2a3494: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a3490:
    ctx->pc = 0x2A3498u;
}
