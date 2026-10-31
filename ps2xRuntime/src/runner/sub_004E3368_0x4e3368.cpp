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

// Function: sub_004E3368
// Address: 0x4e3368 - 0x4e3508
void sub_004E3368_0x4e3368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3368_0x4e3368");
#endif

    switch (ctx->pc) {
        case 0x4e3368u: goto label_4e3368;
        case 0x4e336cu: goto label_4e336c;
        case 0x4e3370u: goto label_4e3370;
        case 0x4e3374u: goto label_4e3374;
        case 0x4e3378u: goto label_4e3378;
        case 0x4e337cu: goto label_4e337c;
        case 0x4e3380u: goto label_4e3380;
        case 0x4e3384u: goto label_4e3384;
        case 0x4e3388u: goto label_4e3388;
        case 0x4e338cu: goto label_4e338c;
        case 0x4e3390u: goto label_4e3390;
        case 0x4e3394u: goto label_4e3394;
        case 0x4e3398u: goto label_4e3398;
        case 0x4e339cu: goto label_4e339c;
        case 0x4e33a0u: goto label_4e33a0;
        case 0x4e33a4u: goto label_4e33a4;
        case 0x4e33a8u: goto label_4e33a8;
        case 0x4e33acu: goto label_4e33ac;
        case 0x4e33b0u: goto label_4e33b0;
        case 0x4e33b4u: goto label_4e33b4;
        case 0x4e33b8u: goto label_4e33b8;
        case 0x4e33bcu: goto label_4e33bc;
        case 0x4e33c0u: goto label_4e33c0;
        case 0x4e33c4u: goto label_4e33c4;
        case 0x4e33c8u: goto label_4e33c8;
        case 0x4e33ccu: goto label_4e33cc;
        case 0x4e33d0u: goto label_4e33d0;
        case 0x4e33d4u: goto label_4e33d4;
        case 0x4e33d8u: goto label_4e33d8;
        case 0x4e33dcu: goto label_4e33dc;
        case 0x4e33e0u: goto label_4e33e0;
        case 0x4e33e4u: goto label_4e33e4;
        case 0x4e33e8u: goto label_4e33e8;
        case 0x4e33ecu: goto label_4e33ec;
        case 0x4e33f0u: goto label_4e33f0;
        case 0x4e33f4u: goto label_4e33f4;
        case 0x4e33f8u: goto label_4e33f8;
        case 0x4e33fcu: goto label_4e33fc;
        case 0x4e3400u: goto label_4e3400;
        case 0x4e3404u: goto label_4e3404;
        case 0x4e3408u: goto label_4e3408;
        case 0x4e340cu: goto label_4e340c;
        case 0x4e3410u: goto label_4e3410;
        case 0x4e3414u: goto label_4e3414;
        case 0x4e3418u: goto label_4e3418;
        case 0x4e341cu: goto label_4e341c;
        case 0x4e3420u: goto label_4e3420;
        case 0x4e3424u: goto label_4e3424;
        case 0x4e3428u: goto label_4e3428;
        case 0x4e342cu: goto label_4e342c;
        case 0x4e3430u: goto label_4e3430;
        case 0x4e3434u: goto label_4e3434;
        case 0x4e3438u: goto label_4e3438;
        case 0x4e343cu: goto label_4e343c;
        case 0x4e3440u: goto label_4e3440;
        case 0x4e3444u: goto label_4e3444;
        case 0x4e3448u: goto label_4e3448;
        case 0x4e344cu: goto label_4e344c;
        case 0x4e3450u: goto label_4e3450;
        case 0x4e3454u: goto label_4e3454;
        case 0x4e3458u: goto label_4e3458;
        case 0x4e345cu: goto label_4e345c;
        case 0x4e3460u: goto label_4e3460;
        case 0x4e3464u: goto label_4e3464;
        case 0x4e3468u: goto label_4e3468;
        case 0x4e346cu: goto label_4e346c;
        case 0x4e3470u: goto label_4e3470;
        case 0x4e3474u: goto label_4e3474;
        case 0x4e3478u: goto label_4e3478;
        case 0x4e347cu: goto label_4e347c;
        case 0x4e3480u: goto label_4e3480;
        case 0x4e3484u: goto label_4e3484;
        case 0x4e3488u: goto label_4e3488;
        case 0x4e348cu: goto label_4e348c;
        case 0x4e3490u: goto label_4e3490;
        case 0x4e3494u: goto label_4e3494;
        case 0x4e3498u: goto label_4e3498;
        case 0x4e349cu: goto label_4e349c;
        case 0x4e34a0u: goto label_4e34a0;
        case 0x4e34a4u: goto label_4e34a4;
        case 0x4e34a8u: goto label_4e34a8;
        case 0x4e34acu: goto label_4e34ac;
        case 0x4e34b0u: goto label_4e34b0;
        case 0x4e34b4u: goto label_4e34b4;
        case 0x4e34b8u: goto label_4e34b8;
        case 0x4e34bcu: goto label_4e34bc;
        case 0x4e34c0u: goto label_4e34c0;
        case 0x4e34c4u: goto label_4e34c4;
        case 0x4e34c8u: goto label_4e34c8;
        case 0x4e34ccu: goto label_4e34cc;
        case 0x4e34d0u: goto label_4e34d0;
        case 0x4e34d4u: goto label_4e34d4;
        case 0x4e34d8u: goto label_4e34d8;
        case 0x4e34dcu: goto label_4e34dc;
        case 0x4e34e0u: goto label_4e34e0;
        case 0x4e34e4u: goto label_4e34e4;
        case 0x4e34e8u: goto label_4e34e8;
        case 0x4e34ecu: goto label_4e34ec;
        case 0x4e34f0u: goto label_4e34f0;
        case 0x4e34f4u: goto label_4e34f4;
        case 0x4e34f8u: goto label_4e34f8;
        case 0x4e34fcu: goto label_4e34fc;
        case 0x4e3500u: goto label_4e3500;
        case 0x4e3504u: goto label_4e3504;
        default: break;
    }

    ctx->pc = 0x4e3368u;

label_4e3368:
    // 0x4e3368: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e3368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e336c:
    // 0x4e336c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e336cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e3370:
    // 0x4e3370: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e3370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e3374:
    // 0x4e3374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e3374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3378:
    // 0x4e3378: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e3378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e337c:
    // 0x4e337c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e337cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e3380:
    // 0x4e3380: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e3380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e3384:
    // 0x4e3384: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e3384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e3388:
    // 0x4e3388: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e3388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e338c:
    // 0x4e338c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e338cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e3390:
    // 0x4e3390: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e3390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e3394:
    // 0x4e3394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e3394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e3398:
    // 0x4e3398: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e3398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e339c:
    // 0x4e339c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e33a0:
    // 0x4e33a0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e33a4:
    if (ctx->pc == 0x4E33A4u) {
        ctx->pc = 0x4E33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E33A0u;
        // 0x4e33a4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E33A8u;
        goto label_4e33a8;
    }
    ctx->pc = 0x4E33A0u;
    {
        const bool branch_taken_0x4e33a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E33A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E33A0u;
        // 0x4e33a4: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e33a0) {
            ctx->pc = 0x4E33ECu;
            goto label_4e33ec;
        }
    }
    ctx->pc = 0x4E33A8u;
label_4e33a8:
    // 0x4e33a8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e33ac:
    if (ctx->pc == 0x4E33ACu) {
        ctx->pc = 0x4E33ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E33A8u;
        // 0x4e33ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E33B0u;
        goto label_4e33b0;
    }
    ctx->pc = 0x4E33A8u;
    {
        const bool branch_taken_0x4e33a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e33a8) {
            ctx->pc = 0x4E33ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E33A8u;
            // 0x4e33ac: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E33BCu;
            goto label_4e33bc;
        }
    }
    ctx->pc = 0x4E33B0u;
label_4e33b0:
    // 0x4e33b0: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e33b4:
    // 0x4e33b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e33b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e33b8:
    // 0x4e33b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e33b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e33bc:
    // 0x4e33bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e33bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e33c0:
    // 0x4e33c0: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e33c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e33c4:
    // 0x4e33c4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e33c8:
    // 0x4e33c8: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e33c8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e33cc:
    // 0x4e33cc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e33ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e33d0:
    // 0x4e33d0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e33d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e33d4:
    // 0x4e33d4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e33d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e33d8:
    // 0x4e33d8: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e33d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e33dc:
    // 0x4e33dc: 0xc10c1bb  jal         func_4306EC
label_4e33e0:
    if (ctx->pc == 0x4E33E0u) {
        ctx->pc = 0x4E33E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E33DCu;
        // 0x4e33e0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E33E4u;
        goto label_4e33e4;
    }
    ctx->pc = 0x4E33DCu;
    SET_GPR_U32(ctx, 31, 0x4E33E4u);
    ctx->pc = 0x4E33E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E33DCu;
    // 0x4e33e0: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E33DCu, 0x4E33E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E33E4u;
label_4e33e4:
    // 0x4e33e4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e33e8:
    if (ctx->pc == 0x4E33E8u) {
        ctx->pc = 0x4E33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E33E4u;
        // 0x4e33e8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E33ECu;
        goto label_4e33ec;
    }
    ctx->pc = 0x4E33E4u;
    {
        const bool branch_taken_0x4e33e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E33E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E33E4u;
        // 0x4e33e8: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e33e4) {
            ctx->pc = 0x4E34DCu;
            goto label_4e34dc;
        }
    }
    ctx->pc = 0x4E33ECu;
label_4e33ec:
    // 0x4e33ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e33ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e33f0:
    // 0x4e33f0: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e33f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e33f4:
    // 0x4e33f4: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e33f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e33f8:
    // 0x4e33f8: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e33fc:
    // 0x4e33fc: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e33fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e3400:
    // 0x4e3400: 0x24962c10  addiu       $s6, $a0, 0x2C10
    ctx->pc = 0x4e3400u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 11280));
label_4e3404:
    // 0x4e3404: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e3404u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e3408:
    // 0x4e3408: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e3408u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e340c:
    // 0x4e340c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e340cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e3410:
    // 0x4e3410: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e3410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e3414:
    // 0x4e3414: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e3414u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e3418:
    // 0x4e3418: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e3418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e341c:
    // 0x4e341c: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e341cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e3420:
    // 0x4e3420: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e3420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e3424:
    // 0x4e3424: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e3424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e3428:
    // 0x4e3428: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e3428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e342c:
    // 0x4e342c: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e342cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e3430:
    // 0x4e3430: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e3430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e3434:
    // 0x4e3434: 0x24a52c08  addiu       $a1, $a1, 0x2C08
    ctx->pc = 0x4e3434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11272));
label_4e3438:
    // 0x4e3438: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e3438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e343c:
    // 0x4e343c: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4e343cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4e3440:
    // 0x4e3440: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e3440u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e3444:
    // 0x4e3444: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e3444u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e3448:
    // 0x4e3448: 0x40f809  jalr        $v0
label_4e344c:
    if (ctx->pc == 0x4E344Cu) {
        ctx->pc = 0x4E344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3448u;
        // 0x4e344c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3450u;
        goto label_4e3450;
    }
    ctx->pc = 0x4E3448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E3450u);
        ctx->pc = 0x4E344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3448u;
        // 0x4e344c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3448u, 0x4E3450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E3450u;
label_4e3450:
    // 0x4e3450: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e3450u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e3454:
    // 0x4e3454: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e3454u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e3458:
    // 0x4e3458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e3458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e345c:
    // 0x4e345c: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e345cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e3460:
    // 0x4e3460: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e3460u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e3464:
    // 0x4e3464: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e3464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e3468:
    // 0x4e3468: 0xc10c1bb  jal         func_4306EC
label_4e346c:
    if (ctx->pc == 0x4E346Cu) {
        ctx->pc = 0x4E346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3468u;
        // 0x4e346c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3470u;
        goto label_4e3470;
    }
    ctx->pc = 0x4E3468u;
    SET_GPR_U32(ctx, 31, 0x4E3470u);
    ctx->pc = 0x4E346Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3468u;
    // 0x4e346c: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E3468u, 0x4E3470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3470u;
label_4e3470:
    // 0x4e3470: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e3474:
    if (ctx->pc == 0x4E3474u) {
        ctx->pc = 0x4E3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3470u;
        // 0x4e3474: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3478u;
        goto label_4e3478;
    }
    ctx->pc = 0x4E3470u;
    {
        const bool branch_taken_0x4e3470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3470) {
            ctx->pc = 0x4E3474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3470u;
            // 0x4e3474: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3484u;
            goto label_4e3484;
        }
    }
    ctx->pc = 0x4E3478u;
label_4e3478:
    // 0x4e3478: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e3478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e347c:
    // 0x4e347c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e347cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e3480:
    // 0x4e3480: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e3480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e3484:
    // 0x4e3484: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e3484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e3488:
    // 0x4e3488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e348c:
    // 0x4e348c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e348cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e3490:
    // 0x4e3490: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e3490u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e3494:
    // 0x4e3494: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e3494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e3498:
    // 0x4e3498: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e3498u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e349c:
    // 0x4e349c: 0xc10c1bb  jal         func_4306EC
label_4e34a0:
    if (ctx->pc == 0x4E34A0u) {
        ctx->pc = 0x4E34A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E349Cu;
        // 0x4e34a0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E34A4u;
        goto label_4e34a4;
    }
    ctx->pc = 0x4E349Cu;
    SET_GPR_U32(ctx, 31, 0x4E34A4u);
    ctx->pc = 0x4E34A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E349Cu;
    // 0x4e34a0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E349Cu, 0x4E34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E34A4u;
label_4e34a4:
    // 0x4e34a4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e34a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e34a8:
    // 0x4e34a8: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e34ac:
    if (ctx->pc == 0x4E34ACu) {
        ctx->pc = 0x4E34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E34A8u;
        // 0x4e34ac: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E34B0u;
        goto label_4e34b0;
    }
    ctx->pc = 0x4E34A8u;
    {
        const bool branch_taken_0x4e34a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E34A8u;
        // 0x4e34ac: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e34a8) {
            ctx->pc = 0x4E34CCu;
            goto label_4e34cc;
        }
    }
    ctx->pc = 0x4E34B0u;
label_4e34b0:
    // 0x4e34b0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e34b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e34b4:
    // 0x4e34b4: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e34b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e34b8:
    // 0x4e34b8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e34bc:
    // 0x4e34bc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e34bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e34c0:
    // 0x4e34c0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e34c4:
    // 0x4e34c4: 0x60f809  jalr        $v1
label_4e34c8:
    if (ctx->pc == 0x4E34C8u) {
        ctx->pc = 0x4E34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E34C4u;
        // 0x4e34c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E34CCu;
        goto label_4e34cc;
    }
    ctx->pc = 0x4E34C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E34CCu);
        ctx->pc = 0x4E34C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E34C4u;
        // 0x4e34c8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E34C4u, 0x4E34CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E34CCu;
label_4e34cc:
    // 0x4e34cc: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e34ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e34d0:
    // 0x4e34d0: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e34d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e34d4:
    // 0x4e34d4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e34d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e34d8:
    // 0x4e34d8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e34d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e34dc:
    // 0x4e34dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e34dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e34e0:
    // 0x4e34e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e34e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e34e4:
    // 0x4e34e4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e34e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e34e8:
    // 0x4e34e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e34e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e34ec:
    // 0x4e34ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e34ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e34f0:
    // 0x4e34f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e34f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e34f4:
    // 0x4e34f4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e34f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e34f8:
    // 0x4e34f8: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e34f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e34fc:
    // 0x4e34fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e34fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3500:
    // 0x4e3500: 0x3e00008  jr          $ra
label_4e3504:
    if (ctx->pc == 0x4E3504u) {
        ctx->pc = 0x4E3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3500u;
        // 0x4e3504: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E3508u;
        goto label_fallthrough_0x4e3500;
    }
    ctx->pc = 0x4E3500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3500u;
        // 0x4e3504: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e3500:
    ctx->pc = 0x4E3508u;
}
