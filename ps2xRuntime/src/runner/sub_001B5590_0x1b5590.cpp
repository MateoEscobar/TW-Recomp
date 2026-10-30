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

// Function: sub_001B5590
// Address: 0x1b5590 - 0x1b57c8
void sub_001B5590_0x1b5590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5590_0x1b5590");
#endif

    switch (ctx->pc) {
        case 0x1b5590u: goto label_1b5590;
        case 0x1b5594u: goto label_1b5594;
        case 0x1b5598u: goto label_1b5598;
        case 0x1b559cu: goto label_1b559c;
        case 0x1b55a0u: goto label_1b55a0;
        case 0x1b55a4u: goto label_1b55a4;
        case 0x1b55a8u: goto label_1b55a8;
        case 0x1b55acu: goto label_1b55ac;
        case 0x1b55b0u: goto label_1b55b0;
        case 0x1b55b4u: goto label_1b55b4;
        case 0x1b55b8u: goto label_1b55b8;
        case 0x1b55bcu: goto label_1b55bc;
        case 0x1b55c0u: goto label_1b55c0;
        case 0x1b55c4u: goto label_1b55c4;
        case 0x1b55c8u: goto label_1b55c8;
        case 0x1b55ccu: goto label_1b55cc;
        case 0x1b55d0u: goto label_1b55d0;
        case 0x1b55d4u: goto label_1b55d4;
        case 0x1b55d8u: goto label_1b55d8;
        case 0x1b55dcu: goto label_1b55dc;
        case 0x1b55e0u: goto label_1b55e0;
        case 0x1b55e4u: goto label_1b55e4;
        case 0x1b55e8u: goto label_1b55e8;
        case 0x1b55ecu: goto label_1b55ec;
        case 0x1b55f0u: goto label_1b55f0;
        case 0x1b55f4u: goto label_1b55f4;
        case 0x1b55f8u: goto label_1b55f8;
        case 0x1b55fcu: goto label_1b55fc;
        case 0x1b5600u: goto label_1b5600;
        case 0x1b5604u: goto label_1b5604;
        case 0x1b5608u: goto label_1b5608;
        case 0x1b560cu: goto label_1b560c;
        case 0x1b5610u: goto label_1b5610;
        case 0x1b5614u: goto label_1b5614;
        case 0x1b5618u: goto label_1b5618;
        case 0x1b561cu: goto label_1b561c;
        case 0x1b5620u: goto label_1b5620;
        case 0x1b5624u: goto label_1b5624;
        case 0x1b5628u: goto label_1b5628;
        case 0x1b562cu: goto label_1b562c;
        case 0x1b5630u: goto label_1b5630;
        case 0x1b5634u: goto label_1b5634;
        case 0x1b5638u: goto label_1b5638;
        case 0x1b563cu: goto label_1b563c;
        case 0x1b5640u: goto label_1b5640;
        case 0x1b5644u: goto label_1b5644;
        case 0x1b5648u: goto label_1b5648;
        case 0x1b564cu: goto label_1b564c;
        case 0x1b5650u: goto label_1b5650;
        case 0x1b5654u: goto label_1b5654;
        case 0x1b5658u: goto label_1b5658;
        case 0x1b565cu: goto label_1b565c;
        case 0x1b5660u: goto label_1b5660;
        case 0x1b5664u: goto label_1b5664;
        case 0x1b5668u: goto label_1b5668;
        case 0x1b566cu: goto label_1b566c;
        case 0x1b5670u: goto label_1b5670;
        case 0x1b5674u: goto label_1b5674;
        case 0x1b5678u: goto label_1b5678;
        case 0x1b567cu: goto label_1b567c;
        case 0x1b5680u: goto label_1b5680;
        case 0x1b5684u: goto label_1b5684;
        case 0x1b5688u: goto label_1b5688;
        case 0x1b568cu: goto label_1b568c;
        case 0x1b5690u: goto label_1b5690;
        case 0x1b5694u: goto label_1b5694;
        case 0x1b5698u: goto label_1b5698;
        case 0x1b569cu: goto label_1b569c;
        case 0x1b56a0u: goto label_1b56a0;
        case 0x1b56a4u: goto label_1b56a4;
        case 0x1b56a8u: goto label_1b56a8;
        case 0x1b56acu: goto label_1b56ac;
        case 0x1b56b0u: goto label_1b56b0;
        case 0x1b56b4u: goto label_1b56b4;
        case 0x1b56b8u: goto label_1b56b8;
        case 0x1b56bcu: goto label_1b56bc;
        case 0x1b56c0u: goto label_1b56c0;
        case 0x1b56c4u: goto label_1b56c4;
        case 0x1b56c8u: goto label_1b56c8;
        case 0x1b56ccu: goto label_1b56cc;
        case 0x1b56d0u: goto label_1b56d0;
        case 0x1b56d4u: goto label_1b56d4;
        case 0x1b56d8u: goto label_1b56d8;
        case 0x1b56dcu: goto label_1b56dc;
        case 0x1b56e0u: goto label_1b56e0;
        case 0x1b56e4u: goto label_1b56e4;
        case 0x1b56e8u: goto label_1b56e8;
        case 0x1b56ecu: goto label_1b56ec;
        case 0x1b56f0u: goto label_1b56f0;
        case 0x1b56f4u: goto label_1b56f4;
        case 0x1b56f8u: goto label_1b56f8;
        case 0x1b56fcu: goto label_1b56fc;
        case 0x1b5700u: goto label_1b5700;
        case 0x1b5704u: goto label_1b5704;
        case 0x1b5708u: goto label_1b5708;
        case 0x1b570cu: goto label_1b570c;
        case 0x1b5710u: goto label_1b5710;
        case 0x1b5714u: goto label_1b5714;
        case 0x1b5718u: goto label_1b5718;
        case 0x1b571cu: goto label_1b571c;
        case 0x1b5720u: goto label_1b5720;
        case 0x1b5724u: goto label_1b5724;
        case 0x1b5728u: goto label_1b5728;
        case 0x1b572cu: goto label_1b572c;
        case 0x1b5730u: goto label_1b5730;
        case 0x1b5734u: goto label_1b5734;
        case 0x1b5738u: goto label_1b5738;
        case 0x1b573cu: goto label_1b573c;
        case 0x1b5740u: goto label_1b5740;
        case 0x1b5744u: goto label_1b5744;
        case 0x1b5748u: goto label_1b5748;
        case 0x1b574cu: goto label_1b574c;
        case 0x1b5750u: goto label_1b5750;
        case 0x1b5754u: goto label_1b5754;
        case 0x1b5758u: goto label_1b5758;
        case 0x1b575cu: goto label_1b575c;
        case 0x1b5760u: goto label_1b5760;
        case 0x1b5764u: goto label_1b5764;
        case 0x1b5768u: goto label_1b5768;
        case 0x1b576cu: goto label_1b576c;
        case 0x1b5770u: goto label_1b5770;
        case 0x1b5774u: goto label_1b5774;
        case 0x1b5778u: goto label_1b5778;
        case 0x1b577cu: goto label_1b577c;
        case 0x1b5780u: goto label_1b5780;
        case 0x1b5784u: goto label_1b5784;
        case 0x1b5788u: goto label_1b5788;
        case 0x1b578cu: goto label_1b578c;
        case 0x1b5790u: goto label_1b5790;
        case 0x1b5794u: goto label_1b5794;
        case 0x1b5798u: goto label_1b5798;
        case 0x1b579cu: goto label_1b579c;
        case 0x1b57a0u: goto label_1b57a0;
        case 0x1b57a4u: goto label_1b57a4;
        case 0x1b57a8u: goto label_1b57a8;
        case 0x1b57acu: goto label_1b57ac;
        case 0x1b57b0u: goto label_1b57b0;
        case 0x1b57b4u: goto label_1b57b4;
        case 0x1b57b8u: goto label_1b57b8;
        case 0x1b57bcu: goto label_1b57bc;
        case 0x1b57c0u: goto label_1b57c0;
        case 0x1b57c4u: goto label_1b57c4;
        default: break;
    }

    ctx->pc = 0x1b5590u;

label_1b5590:
    // 0x1b5590: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1b5590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1b5594:
    // 0x1b5594: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1b5594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_1b5598:
    // 0x1b5598: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1b5598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_1b559c:
    // 0x1b559c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1b559cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b55a0:
    // 0x1b55a0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1b55a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1b55a4:
    // 0x1b55a4: 0x30f700ff  andi        $s7, $a3, 0xFF
    ctx->pc = 0x1b55a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_1b55a8:
    // 0x1b55a8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1b55a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1b55ac:
    // 0x1b55ac: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1b55acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_1b55b0:
    // 0x1b55b0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1b55b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_1b55b4:
    // 0x1b55b4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1b55b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1b55b8:
    // 0x1b55b8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b55b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1b55bc:
    // 0x1b55bc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1b55bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_1b55c0:
    // 0x1b55c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b55c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1b55c4:
    // 0x1b55c4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b55c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1b55c8:
    // 0x1b55c8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1b55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1b55cc:
    // 0x1b55cc: 0x1080005d  beqz        $a0, . + 4 + (0x5D << 2)
label_1b55d0:
    if (ctx->pc == 0x1B55D0u) {
        ctx->pc = 0x1B55D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55CCu;
        // 0x1b55d0: 0x24505320  addiu       $s0, $v0, 0x5320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B55D4u;
        goto label_1b55d4;
    }
    ctx->pc = 0x1B55CCu;
    {
        const bool branch_taken_0x1b55cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55CCu;
        // 0x1b55d0: 0x24505320  addiu       $s0, $v0, 0x5320 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55cc) {
            ctx->pc = 0x1B5744u;
            goto label_1b5744;
        }
    }
    ctx->pc = 0x1B55D4u;
label_1b55d4:
    // 0x1b55d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b55d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1b55d8:
    // 0x1b55d8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1b55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1b55dc:
    // 0x1b55dc: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x1b55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
label_1b55e0:
    // 0x1b55e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b55e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b55e4:
    // 0x1b55e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b55e8:
    // 0x1b55e8: 0x12c00064  beqz        $s6, . + 4 + (0x64 << 2)
label_1b55ec:
    if (ctx->pc == 0x1B55ECu) {
        ctx->pc = 0x1B55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55E8u;
        // 0x1b55ec: 0xac566b20  sw          $s6, 0x6B20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27424), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B55F0u;
        goto label_1b55f0;
    }
    ctx->pc = 0x1B55E8u;
    {
        const bool branch_taken_0x1b55e8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B55E8u;
        // 0x1b55ec: 0xac566b20  sw          $s6, 0x6B20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27424), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b55e8) {
            ctx->pc = 0x1B577Cu;
            goto label_1b577c;
        }
    }
    ctx->pc = 0x1B55F0u;
label_1b55f0:
    // 0x1b55f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b55f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1b55f4:
    // 0x1b55f4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b55f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b55f8:
    // 0x1b55f8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b55f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b55fc:
    // 0x1b55fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1b55fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5600:
    // 0x1b5600: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1b5600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1b5604:
    // 0x1b5604: 0x3c1e0060  lui         $fp, 0x60
    ctx->pc = 0x1b5604u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)96 << 16));
label_1b5608:
    // 0x1b5608: 0x8e420434  lw          $v0, 0x434($s2)
    ctx->pc = 0x1b5608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1076)));
label_1b560c:
    // 0x1b560c: 0x54400047  bnel        $v0, $zero, . + 4 + (0x47 << 2)
label_1b5610:
    if (ctx->pc == 0x1B5610u) {
        ctx->pc = 0x1B5610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B560Cu;
        // 0x1b5610: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5614u;
        goto label_1b5614;
    }
    ctx->pc = 0x1B560Cu;
    {
        const bool branch_taken_0x1b560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b560c) {
            ctx->pc = 0x1B5610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B560Cu;
            // 0x1b5610: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B572Cu;
            goto label_1b572c;
        }
    }
    ctx->pc = 0x1B5614u;
label_1b5614:
    // 0x1b5614: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b5618:
    // 0x1b5618: 0x2445d574  addiu       $a1, $v0, -0x2A8C
    ctx->pc = 0x1b5618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956404));
label_1b561c:
    // 0x1b561c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b5620:
    // 0x1b5620: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
label_1b5624:
    if (ctx->pc == 0x1B5624u) {
        ctx->pc = 0x1B5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5620u;
        // 0x1b5624: 0x2444d57c  addiu       $a0, $v0, -0x2A84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956412));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5628u;
        goto label_1b5628;
    }
    ctx->pc = 0x1B5620u;
    {
        const bool branch_taken_0x1b5620 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x1B5624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5620u;
        // 0x1b5624: 0x2444d57c  addiu       $a0, $v0, -0x2A84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956412));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5620) {
            ctx->pc = 0x1B563Cu;
            goto label_1b563c;
        }
    }
    ctx->pc = 0x1B5628u;
label_1b5628:
    // 0x1b5628: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x1b5628u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b562c:
    // 0x1b562c: 0x0  nop
    ctx->pc = 0x1b562cu;
    // NOP
label_1b5630:
    // 0x1b5630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b5630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b5634:
    // 0x1b5634: 0x10000009  b           . + 4 + (0x9 << 2)
label_1b5638:
    if (ctx->pc == 0x1B5638u) {
        ctx->pc = 0x1B5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5634u;
        // 0x1b5638: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B563Cu;
        goto label_1b563c;
    }
    ctx->pc = 0x1B5634u;
    {
        const bool branch_taken_0x1b5634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5634u;
        // 0x1b5638: 0xc4810000  lwc1        $f1, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5634) {
            ctx->pc = 0x1B565Cu;
            goto label_1b565c;
        }
    }
    ctx->pc = 0x1B563Cu;
label_1b563c:
    // 0x1b563c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x1b563cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_1b5640:
    // 0x1b5640: 0x131842  srl         $v1, $s3, 1
    ctx->pc = 0x1b5640u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
label_1b5644:
    // 0x1b5644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1b5648:
    // 0x1b5648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b564c:
    // 0x1b564c: 0x0  nop
    ctx->pc = 0x1b564cu;
    // NOP
label_1b5650:
    // 0x1b5650: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b5650u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b5654:
    // 0x1b5654: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1b5654u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1b5658:
    // 0x1b5658: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1b5658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b565c:
    // 0x1b565c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1b565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1b5660:
    // 0x1b5660: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1b5660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b5664:
    // 0x1b5664: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b5664u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b5668:
    // 0x1b5668: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1b5668u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1b566c:
    // 0x1b566c: 0x8fc6d310  lw          $a2, -0x2CF0($fp)
    ctx->pc = 0x1b566cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294955792)));
label_1b5670:
    // 0x1b5670: 0xc440d56c  lwc1        $f0, -0x2A94($v0)
    ctx->pc = 0x1b5670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b5674:
    // 0x1b5674: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b5674u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b5678:
    // 0x1b5678: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b5678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b567c:
    // 0x1b567c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1b567cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5680:
    // 0x1b5680: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1b5680u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1b5684:
    // 0x1b5684: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1b5684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1b5688:
    // 0x1b5688: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x1b5688u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_1b568c:
    // 0x1b568c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1b568cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5690:
    // 0x1b5690: 0xe694000c  swc1        $f20, 0xC($s4)
    ctx->pc = 0x1b5690u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_1b5694:
    // 0x1b5694: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b5694u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5698:
    // 0x1b5698: 0xe6820008  swc1        $f2, 0x8($s4)
    ctx->pc = 0x1b5698u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_1b569c:
    // 0x1b569c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1b569cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1b56a0:
    // 0x1b56a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b56a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1b56a4:
    // 0x1b56a4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1b56a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b56a8:
    // 0x1b56a8: 0x846400c0  lh          $a0, 0xC0($v1)
    ctx->pc = 0x1b56a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 192)));
label_1b56ac:
    // 0x1b56ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b56acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b56b0:
    // 0x1b56b0: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x1b56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_1b56b4:
    // 0x1b56b4: 0x40f809  jalr        $v0
label_1b56b8:
    if (ctx->pc == 0x1B56B8u) {
        ctx->pc = 0x1B56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56B4u;
        // 0x1b56b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B56BCu;
        goto label_1b56bc;
    }
    ctx->pc = 0x1B56B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B56BCu);
        ctx->pc = 0x1B56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56B4u;
        // 0x1b56b8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B56B4u, 0x1B56BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B56BCu;
label_1b56bc:
    // 0x1b56bc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1b56bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1b56c0:
    // 0x1b56c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b56c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b56c4:
    // 0x1b56c4: 0xc079bd4  jal         func_1E6F50
label_1b56c8:
    if (ctx->pc == 0x1B56C8u) {
        ctx->pc = 0x1B56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56C4u;
        // 0x1b56c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B56CCu;
        goto label_1b56cc;
    }
    ctx->pc = 0x1B56C4u;
    SET_GPR_U32(ctx, 31, 0x1B56CCu);
    ctx->pc = 0x1B56C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56C4u;
    // 0x1b56c8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6F50u, 0x1B56C4u, 0x1B56CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56CCu;
label_1b56cc:
    // 0x1b56cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b56d0:
    // 0x1b56d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b56d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b56d4:
    // 0x1b56d4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1b56d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1b56d8:
    // 0x1b56d8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1b56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1b56dc:
    // 0x1b56dc: 0x60f809  jalr        $v1
label_1b56e0:
    if (ctx->pc == 0x1B56E0u) {
        ctx->pc = 0x1B56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56DCu;
        // 0x1b56e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B56E4u;
        goto label_1b56e4;
    }
    ctx->pc = 0x1B56DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B56E4u);
        ctx->pc = 0x1B56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56DCu;
        // 0x1b56e0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B56DCu, 0x1B56E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B56E4u;
label_1b56e4:
    // 0x1b56e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b56e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b56e8:
    // 0x1b56e8: 0xc06e51e  jal         func_1B9478
label_1b56ec:
    if (ctx->pc == 0x1B56ECu) {
        ctx->pc = 0x1B56ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56E8u;
        // 0x1b56ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B56F0u;
        goto label_1b56f0;
    }
    ctx->pc = 0x1B56E8u;
    SET_GPR_U32(ctx, 31, 0x1B56F0u);
    ctx->pc = 0x1B56ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56E8u;
    // 0x1b56ec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9478u, 0x1B56E8u, 0x1B56F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56F0u;
label_1b56f0:
    // 0x1b56f0: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x1b56f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_1b56f4:
    // 0x1b56f4: 0xc0733ae  jal         func_1CCEB8
label_1b56f8:
    if (ctx->pc == 0x1B56F8u) {
        ctx->pc = 0x1B56F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56F4u;
        // 0x1b56f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B56FCu;
        goto label_1b56fc;
    }
    ctx->pc = 0x1B56F4u;
    SET_GPR_U32(ctx, 31, 0x1B56FCu);
    ctx->pc = 0x1B56F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B56F4u;
    // 0x1b56f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCEB8u, 0x1B56F4u, 0x1B56FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B56FCu;
label_1b56fc:
    // 0x1b56fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b56fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b5700:
    // 0x1b5700: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b5700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b5704:
    // 0x1b5704: 0xae400558  sw          $zero, 0x558($s2)
    ctx->pc = 0x1b5704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1368), GPR_U32(ctx, 0));
label_1b5708:
    // 0x1b5708: 0x245100e8  addiu       $s1, $v0, 0xE8
    ctx->pc = 0x1b5708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
label_1b570c:
    // 0x1b570c: 0x845000e8  lh          $s0, 0xE8($v0)
    ctx->pc = 0x1b570cu;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_1b5710:
    // 0x1b5710: 0xc0733c4  jal         func_1CCF10
label_1b5714:
    if (ctx->pc == 0x1B5714u) {
        ctx->pc = 0x1B5714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5710u;
        // 0x1b5714: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5718u;
        goto label_1b5718;
    }
    ctx->pc = 0x1B5710u;
    SET_GPR_U32(ctx, 31, 0x1B5718u);
    ctx->pc = 0x1B5714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5710u;
    // 0x1b5714: 0x2508021  addu        $s0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCF10u, 0x1B5710u, 0x1B5718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5718u;
label_1b5718:
    // 0x1b5718: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b5718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1b571c:
    // 0x1b571c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b571cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b5720:
    // 0x1b5720: 0x60f809  jalr        $v1
label_1b5724:
    if (ctx->pc == 0x1B5724u) {
        ctx->pc = 0x1B5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5720u;
        // 0x1b5724: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5728u;
        goto label_1b5728;
    }
    ctx->pc = 0x1B5720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B5728u);
        ctx->pc = 0x1B5724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5720u;
        // 0x1b5724: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5720u, 0x1B5728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B5728u;
label_1b5728:
    // 0x1b5728: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b5728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1b572c:
    // 0x1b572c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x1b572cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_1b5730:
    // 0x1b5730: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x1b5730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_1b5734:
    // 0x1b5734: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
label_1b5738:
    if (ctx->pc == 0x1B5738u) {
        ctx->pc = 0x1B5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5734u;
        // 0x1b5738: 0x26520560  addiu       $s2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B573Cu;
        goto label_1b573c;
    }
    ctx->pc = 0x1B5734u;
    {
        const bool branch_taken_0x1b5734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5734u;
        // 0x1b5738: 0x26520560  addiu       $s2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5734) {
            ctx->pc = 0x1B5608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5608;
        }
    }
    ctx->pc = 0x1B573Cu;
label_1b573c:
    // 0x1b573c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1b5740:
    if (ctx->pc == 0x1B5740u) {
        ctx->pc = 0x1B5744u;
        goto label_1b5744;
    }
    ctx->pc = 0x1B573Cu;
    {
        const bool branch_taken_0x1b573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b573c) {
            ctx->pc = 0x1B577Cu;
            goto label_1b577c;
        }
    }
    ctx->pc = 0x1B5744u;
label_1b5744:
    // 0x1b5744: 0x26112040  addiu       $s1, $s0, 0x2040
    ctx->pc = 0x1b5744u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8256));
label_1b5748:
    // 0x1b5748: 0x8e020434  lw          $v0, 0x434($s0)
    ctx->pc = 0x1b5748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
label_1b574c:
    // 0x1b574c: 0x0  nop
    ctx->pc = 0x1b574cu;
    // NOP
label_1b5750:
    // 0x1b5750: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1b5754:
    if (ctx->pc == 0x1B5754u) {
        ctx->pc = 0x1B5754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5750u;
        // 0x1b5754: 0x26100560  addiu       $s0, $s0, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5758u;
        goto label_1b5758;
    }
    ctx->pc = 0x1B5750u;
    {
        const bool branch_taken_0x1b5750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5750) {
            ctx->pc = 0x1B5754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5750u;
            // 0x1b5754: 0x26100560  addiu       $s0, $s0, 0x560 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5770u;
            goto label_1b5770;
        }
    }
    ctx->pc = 0x1B5758u;
label_1b5758:
    // 0x1b5758: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b5758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b575c:
    // 0x1b575c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1b575cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1b5760:
    // 0x1b5760: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1b5760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1b5764:
    // 0x1b5764: 0x60f809  jalr        $v1
label_1b5768:
    if (ctx->pc == 0x1B5768u) {
        ctx->pc = 0x1B5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5764u;
        // 0x1b5768: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B576Cu;
        goto label_1b576c;
    }
    ctx->pc = 0x1B5764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B576Cu);
        ctx->pc = 0x1B5768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5764u;
        // 0x1b5768: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5764u, 0x1B576Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B576Cu;
label_1b576c:
    // 0x1b576c: 0x26100560  addiu       $s0, $s0, 0x560
    ctx->pc = 0x1b576cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1376));
label_1b5770:
    // 0x1b5770: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1b5770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1b5774:
    // 0x1b5774: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_1b5778:
    if (ctx->pc == 0x1B5778u) {
        ctx->pc = 0x1B5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5774u;
        // 0x1b5778: 0x8e020434  lw          $v0, 0x434($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B577Cu;
        goto label_1b577c;
    }
    ctx->pc = 0x1B5774u;
    {
        const bool branch_taken_0x1b5774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5774) {
            ctx->pc = 0x1B5778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5774u;
            // 0x1b5778: 0x8e020434  lw          $v0, 0x434($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1076)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5750;
        }
    }
    ctx->pc = 0x1B577Cu;
label_1b577c:
    // 0x1b577c: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
label_1b5780:
    if (ctx->pc == 0x1B5780u) {
        ctx->pc = 0x1B5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B577Cu;
        // 0x1b5780: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5784u;
        goto label_1b5784;
    }
    ctx->pc = 0x1B577Cu;
    {
        const bool branch_taken_0x1b577c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B577Cu;
        // 0x1b5780: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b577c) {
            ctx->pc = 0x1B5790u;
            goto label_1b5790;
        }
    }
    ctx->pc = 0x1B5784u;
label_1b5784:
    // 0x1b5784: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1b5784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_1b5788:
    // 0x1b5788: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b578c:
    if (ctx->pc == 0x1B578Cu) {
        ctx->pc = 0x1B578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5788u;
        // 0x1b578c: 0xac562e44  sw          $s6, 0x2E44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11844), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B5790u;
        goto label_1b5790;
    }
    ctx->pc = 0x1B5788u;
    {
        const bool branch_taken_0x1b5788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5788u;
        // 0x1b578c: 0xac562e44  sw          $s6, 0x2E44($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11844), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5788) {
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B5790u;
label_1b5790:
    // 0x1b5790: 0xac562e40  sw          $s6, 0x2E40($v0)
    ctx->pc = 0x1b5790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11840), GPR_U32(ctx, 22));
label_1b5794:
    // 0x1b5794: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1b5794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b5798:
    // 0x1b5798: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1b5798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b579c:
    // 0x1b579c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1b579cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b57a0:
    // 0x1b57a0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1b57a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b57a4:
    // 0x1b57a4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1b57a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b57a8:
    // 0x1b57a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b57a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b57ac:
    // 0x1b57ac: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1b57acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b57b0:
    // 0x1b57b0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1b57b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b57b4:
    // 0x1b57b4: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1b57b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b57b8:
    // 0x1b57b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b57b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1b57bc:
    // 0x1b57bc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b57bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b57c0:
    // 0x1b57c0: 0x3e00008  jr          $ra
label_1b57c4:
    if (ctx->pc == 0x1B57C4u) {
        ctx->pc = 0x1B57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57C0u;
        // 0x1b57c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B57C8u;
        goto label_fallthrough_0x1b57c0;
    }
    ctx->pc = 0x1B57C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B57C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57C0u;
        // 0x1b57c4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B57C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b57c0:
    ctx->pc = 0x1B57C8u;
}
