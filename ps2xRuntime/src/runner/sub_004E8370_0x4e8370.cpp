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

// Function: sub_004E8370
// Address: 0x4e8370 - 0x4e8510
void sub_004E8370_0x4e8370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8370_0x4e8370");
#endif

    switch (ctx->pc) {
        case 0x4e8370u: goto label_4e8370;
        case 0x4e8374u: goto label_4e8374;
        case 0x4e8378u: goto label_4e8378;
        case 0x4e837cu: goto label_4e837c;
        case 0x4e8380u: goto label_4e8380;
        case 0x4e8384u: goto label_4e8384;
        case 0x4e8388u: goto label_4e8388;
        case 0x4e838cu: goto label_4e838c;
        case 0x4e8390u: goto label_4e8390;
        case 0x4e8394u: goto label_4e8394;
        case 0x4e8398u: goto label_4e8398;
        case 0x4e839cu: goto label_4e839c;
        case 0x4e83a0u: goto label_4e83a0;
        case 0x4e83a4u: goto label_4e83a4;
        case 0x4e83a8u: goto label_4e83a8;
        case 0x4e83acu: goto label_4e83ac;
        case 0x4e83b0u: goto label_4e83b0;
        case 0x4e83b4u: goto label_4e83b4;
        case 0x4e83b8u: goto label_4e83b8;
        case 0x4e83bcu: goto label_4e83bc;
        case 0x4e83c0u: goto label_4e83c0;
        case 0x4e83c4u: goto label_4e83c4;
        case 0x4e83c8u: goto label_4e83c8;
        case 0x4e83ccu: goto label_4e83cc;
        case 0x4e83d0u: goto label_4e83d0;
        case 0x4e83d4u: goto label_4e83d4;
        case 0x4e83d8u: goto label_4e83d8;
        case 0x4e83dcu: goto label_4e83dc;
        case 0x4e83e0u: goto label_4e83e0;
        case 0x4e83e4u: goto label_4e83e4;
        case 0x4e83e8u: goto label_4e83e8;
        case 0x4e83ecu: goto label_4e83ec;
        case 0x4e83f0u: goto label_4e83f0;
        case 0x4e83f4u: goto label_4e83f4;
        case 0x4e83f8u: goto label_4e83f8;
        case 0x4e83fcu: goto label_4e83fc;
        case 0x4e8400u: goto label_4e8400;
        case 0x4e8404u: goto label_4e8404;
        case 0x4e8408u: goto label_4e8408;
        case 0x4e840cu: goto label_4e840c;
        case 0x4e8410u: goto label_4e8410;
        case 0x4e8414u: goto label_4e8414;
        case 0x4e8418u: goto label_4e8418;
        case 0x4e841cu: goto label_4e841c;
        case 0x4e8420u: goto label_4e8420;
        case 0x4e8424u: goto label_4e8424;
        case 0x4e8428u: goto label_4e8428;
        case 0x4e842cu: goto label_4e842c;
        case 0x4e8430u: goto label_4e8430;
        case 0x4e8434u: goto label_4e8434;
        case 0x4e8438u: goto label_4e8438;
        case 0x4e843cu: goto label_4e843c;
        case 0x4e8440u: goto label_4e8440;
        case 0x4e8444u: goto label_4e8444;
        case 0x4e8448u: goto label_4e8448;
        case 0x4e844cu: goto label_4e844c;
        case 0x4e8450u: goto label_4e8450;
        case 0x4e8454u: goto label_4e8454;
        case 0x4e8458u: goto label_4e8458;
        case 0x4e845cu: goto label_4e845c;
        case 0x4e8460u: goto label_4e8460;
        case 0x4e8464u: goto label_4e8464;
        case 0x4e8468u: goto label_4e8468;
        case 0x4e846cu: goto label_4e846c;
        case 0x4e8470u: goto label_4e8470;
        case 0x4e8474u: goto label_4e8474;
        case 0x4e8478u: goto label_4e8478;
        case 0x4e847cu: goto label_4e847c;
        case 0x4e8480u: goto label_4e8480;
        case 0x4e8484u: goto label_4e8484;
        case 0x4e8488u: goto label_4e8488;
        case 0x4e848cu: goto label_4e848c;
        case 0x4e8490u: goto label_4e8490;
        case 0x4e8494u: goto label_4e8494;
        case 0x4e8498u: goto label_4e8498;
        case 0x4e849cu: goto label_4e849c;
        case 0x4e84a0u: goto label_4e84a0;
        case 0x4e84a4u: goto label_4e84a4;
        case 0x4e84a8u: goto label_4e84a8;
        case 0x4e84acu: goto label_4e84ac;
        case 0x4e84b0u: goto label_4e84b0;
        case 0x4e84b4u: goto label_4e84b4;
        case 0x4e84b8u: goto label_4e84b8;
        case 0x4e84bcu: goto label_4e84bc;
        case 0x4e84c0u: goto label_4e84c0;
        case 0x4e84c4u: goto label_4e84c4;
        case 0x4e84c8u: goto label_4e84c8;
        case 0x4e84ccu: goto label_4e84cc;
        case 0x4e84d0u: goto label_4e84d0;
        case 0x4e84d4u: goto label_4e84d4;
        case 0x4e84d8u: goto label_4e84d8;
        case 0x4e84dcu: goto label_4e84dc;
        case 0x4e84e0u: goto label_4e84e0;
        case 0x4e84e4u: goto label_4e84e4;
        case 0x4e84e8u: goto label_4e84e8;
        case 0x4e84ecu: goto label_4e84ec;
        case 0x4e84f0u: goto label_4e84f0;
        case 0x4e84f4u: goto label_4e84f4;
        case 0x4e84f8u: goto label_4e84f8;
        case 0x4e84fcu: goto label_4e84fc;
        case 0x4e8500u: goto label_4e8500;
        case 0x4e8504u: goto label_4e8504;
        case 0x4e8508u: goto label_4e8508;
        case 0x4e850cu: goto label_4e850c;
        default: break;
    }

    ctx->pc = 0x4e8370u;

label_4e8370:
    // 0x4e8370: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4e8370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4e8374:
    // 0x4e8374: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4e8374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_4e8378:
    // 0x4e8378: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4e8378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_4e837c:
    // 0x4e837c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e837cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8380:
    // 0x4e8380: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4e8380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_4e8384:
    // 0x4e8384: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e8384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e8388:
    // 0x4e8388: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4e8388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_4e838c:
    // 0x4e838c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4e838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_4e8390:
    // 0x4e8390: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e8390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e8394:
    // 0x4e8394: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4e8394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_4e8398:
    // 0x4e8398: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x4e8398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_4e839c:
    // 0x4e839c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e83a0:
    // 0x4e83a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4e83a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e83a4:
    // 0x4e83a4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x4e83a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_4e83a8:
    // 0x4e83a8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_4e83ac:
    if (ctx->pc == 0x4E83ACu) {
        ctx->pc = 0x4E83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E83A8u;
        // 0x4e83ac: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E83B0u;
        goto label_4e83b0;
    }
    ctx->pc = 0x4E83A8u;
    {
        const bool branch_taken_0x4e83a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4E83ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E83A8u;
        // 0x4e83ac: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e83a8) {
            ctx->pc = 0x4E83F4u;
            goto label_4e83f4;
        }
    }
    ctx->pc = 0x4E83B0u;
label_4e83b0:
    // 0x4e83b0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4e83b4:
    if (ctx->pc == 0x4E83B4u) {
        ctx->pc = 0x4E83B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E83B0u;
        // 0x4e83b4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E83B8u;
        goto label_4e83b8;
    }
    ctx->pc = 0x4E83B0u;
    {
        const bool branch_taken_0x4e83b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e83b0) {
            ctx->pc = 0x4E83B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E83B0u;
            // 0x4e83b4: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E83C4u;
            goto label_4e83c4;
        }
    }
    ctx->pc = 0x4E83B8u;
label_4e83b8:
    // 0x4e83b8: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x4e83b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_4e83bc:
    // 0x4e83bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e83bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4e83c0:
    // 0x4e83c0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4e83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e83c4:
    // 0x4e83c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e83c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e83c8:
    // 0x4e83c8: 0x2486fffc  addiu       $a2, $a0, -0x4
    ctx->pc = 0x4e83c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_4e83cc:
    // 0x4e83cc: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x4e83ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_4e83d0:
    // 0x4e83d0: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e83d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e83d4:
    // 0x4e83d4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x4e83d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_4e83d8:
    // 0x4e83d8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e83d8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e83dc:
    // 0x4e83dc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4e83dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4e83e0:
    // 0x4e83e0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x4e83e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e83e4:
    // 0x4e83e4: 0xc10c1bb  jal         func_4306EC
label_4e83e8:
    if (ctx->pc == 0x4E83E8u) {
        ctx->pc = 0x4E83E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E83E4u;
        // 0x4e83e8: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E83ECu;
        goto label_4e83ec;
    }
    ctx->pc = 0x4E83E4u;
    SET_GPR_U32(ctx, 31, 0x4E83ECu);
    ctx->pc = 0x4E83E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E83E4u;
    // 0x4e83e8: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E83E4u, 0x4E83ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E83ECu;
label_4e83ec:
    // 0x4e83ec: 0x1000003d  b           . + 4 + (0x3D << 2)
label_4e83f0:
    if (ctx->pc == 0x4E83F0u) {
        ctx->pc = 0x4E83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E83ECu;
        // 0x4e83f0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E83F4u;
        goto label_4e83f4;
    }
    ctx->pc = 0x4E83ECu;
    {
        const bool branch_taken_0x4e83ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E83ECu;
        // 0x4e83f0: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e83ec) {
            ctx->pc = 0x4E84E4u;
            goto label_4e84e4;
        }
    }
    ctx->pc = 0x4E83F4u;
label_4e83f4:
    // 0x4e83f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4e83f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e83f8:
    // 0x4e83f8: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4e83f8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4e83fc:
    // 0x4e83fc: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4e83fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4e8400:
    // 0x4e8400: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4e8400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4e8404:
    // 0x4e8404: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x4e8404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e8408:
    // 0x4e8408: 0x24965ef8  addiu       $s6, $a0, 0x5EF8
    ctx->pc = 0x4e8408u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 24312));
label_4e840c:
    // 0x4e840c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4e840cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4e8410:
    // 0x4e8410: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e8410u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e8414:
    // 0x4e8414: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x4e8414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_4e8418:
    // 0x4e8418: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e8418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e841c:
    // 0x4e841c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4e841cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_4e8420:
    // 0x4e8420: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4e8420u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4e8424:
    // 0x4e8424: 0x5a080  sll         $s4, $a1, 2
    ctx->pc = 0x4e8424u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e8428:
    // 0x4e8428: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4e8428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4e842c:
    // 0x4e842c: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4e842cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4e8430:
    // 0x4e8430: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x4e8430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_4e8434:
    // 0x4e8434: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4e8434u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4e8438:
    // 0x4e8438: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x4e8438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4e843c:
    // 0x4e843c: 0x24a55f70  addiu       $a1, $a1, 0x5F70
    ctx->pc = 0x4e843cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24432));
label_4e8440:
    // 0x4e8440: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4e8440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e8444:
    // 0x4e8444: 0x254a5f78  addiu       $t2, $t2, 0x5F78
    ctx->pc = 0x4e8444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 24440));
label_4e8448:
    // 0x4e8448: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4e8448u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4e844c:
    // 0x4e844c: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4e844cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4e8450:
    // 0x4e8450: 0x40f809  jalr        $v0
label_4e8454:
    if (ctx->pc == 0x4E8454u) {
        ctx->pc = 0x4E8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8450u;
        // 0x4e8454: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8458u;
        goto label_4e8458;
    }
    ctx->pc = 0x4E8450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E8458u);
        ctx->pc = 0x4E8454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8450u;
        // 0x4e8454: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8450u, 0x4E8458u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E8458u;
label_4e8458:
    // 0x4e8458: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e8458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e845c:
    // 0x4e845c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e845cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e8460:
    // 0x4e8460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e8460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e8464:
    // 0x4e8464: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x4e8464u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_4e8468:
    // 0x4e8468: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4e8468u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4e846c:
    // 0x4e846c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x4e846cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4e8470:
    // 0x4e8470: 0xc10c1bb  jal         func_4306EC
label_4e8474:
    if (ctx->pc == 0x4E8474u) {
        ctx->pc = 0x4E8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8470u;
        // 0x4e8474: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8478u;
        goto label_4e8478;
    }
    ctx->pc = 0x4E8470u;
    SET_GPR_U32(ctx, 31, 0x4E8478u);
    ctx->pc = 0x4E8474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8470u;
    // 0x4e8474: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E8470u, 0x4E8478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8478u;
label_4e8478:
    // 0x4e8478: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
label_4e847c:
    if (ctx->pc == 0x4E847Cu) {
        ctx->pc = 0x4E847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8478u;
        // 0x4e847c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8480u;
        goto label_4e8480;
    }
    ctx->pc = 0x4E8478u;
    {
        const bool branch_taken_0x4e8478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8478) {
            ctx->pc = 0x4E847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8478u;
            // 0x4e847c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E848Cu;
            goto label_4e848c;
        }
    }
    ctx->pc = 0x4E8480u;
label_4e8480:
    // 0x4e8480: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4e8480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4e8484:
    // 0x4e8484: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e8484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e8488:
    // 0x4e8488: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4e8488u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4e848c:
    // 0x4e848c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x4e848cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4e8490:
    // 0x4e8490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e8490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e8494:
    // 0x4e8494: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4e8494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e8498:
    // 0x4e8498: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x4e8498u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_4e849c:
    // 0x4e849c: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x4e849cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_4e84a0:
    // 0x4e84a0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4e84a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4e84a4:
    // 0x4e84a4: 0xc10c1bb  jal         func_4306EC
label_4e84a8:
    if (ctx->pc == 0x4E84A8u) {
        ctx->pc = 0x4E84A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E84A4u;
        // 0x4e84a8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E84ACu;
        goto label_4e84ac;
    }
    ctx->pc = 0x4E84A4u;
    SET_GPR_U32(ctx, 31, 0x4E84ACu);
    ctx->pc = 0x4E84A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E84A4u;
    // 0x4e84a8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4E84A4u, 0x4E84ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E84ACu;
label_4e84ac:
    // 0x4e84ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4e84acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4e84b0:
    // 0x4e84b0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4e84b4:
    if (ctx->pc == 0x4E84B4u) {
        ctx->pc = 0x4E84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E84B0u;
        // 0x4e84b4: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E84B8u;
        goto label_4e84b8;
    }
    ctx->pc = 0x4E84B0u;
    {
        const bool branch_taken_0x4e84b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E84B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E84B0u;
        // 0x4e84b4: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e84b0) {
            ctx->pc = 0x4E84D4u;
            goto label_4e84d4;
        }
    }
    ctx->pc = 0x4E84B8u;
label_4e84b8:
    // 0x4e84b8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4e84b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e84bc:
    // 0x4e84bc: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4e84bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4e84c0:
    // 0x4e84c0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e84c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e84c4:
    // 0x4e84c4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e84c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e84c8:
    // 0x4e84c8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e84c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e84cc:
    // 0x4e84cc: 0x60f809  jalr        $v1
label_4e84d0:
    if (ctx->pc == 0x4E84D0u) {
        ctx->pc = 0x4E84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E84CCu;
        // 0x4e84d0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E84D4u;
        goto label_4e84d4;
    }
    ctx->pc = 0x4E84CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E84D4u);
        ctx->pc = 0x4E84D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E84CCu;
        // 0x4e84d0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E84CCu, 0x4E84D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E84D4u;
label_4e84d4:
    // 0x4e84d4: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x4e84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_4e84d8:
    // 0x4e84d8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x4e84d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_4e84dc:
    // 0x4e84dc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x4e84dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_4e84e0:
    // 0x4e84e0: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4e84e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4e84e4:
    // 0x4e84e4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x4e84e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e84e8:
    // 0x4e84e8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x4e84e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e84ec:
    // 0x4e84ec: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x4e84ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e84f0:
    // 0x4e84f0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x4e84f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e84f4:
    // 0x4e84f4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e84f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e84f8:
    // 0x4e84f8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x4e84f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e84fc:
    // 0x4e84fc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x4e84fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e8500:
    // 0x4e8500: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x4e8500u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e8504:
    // 0x4e8504: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e8504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e8508:
    // 0x4e8508: 0x3e00008  jr          $ra
label_4e850c:
    if (ctx->pc == 0x4E850Cu) {
        ctx->pc = 0x4E850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8508u;
        // 0x4e850c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8510u;
        goto label_fallthrough_0x4e8508;
    }
    ctx->pc = 0x4E8508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8508u;
        // 0x4e850c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e8508:
    ctx->pc = 0x4E8510u;
}
