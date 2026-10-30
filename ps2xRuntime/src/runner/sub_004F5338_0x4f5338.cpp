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

// Function: sub_004F5338
// Address: 0x4f5338 - 0x4f5558
void sub_004F5338_0x4f5338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5338_0x4f5338");
#endif

    switch (ctx->pc) {
        case 0x4f5338u: goto label_4f5338;
        case 0x4f533cu: goto label_4f533c;
        case 0x4f5340u: goto label_4f5340;
        case 0x4f5344u: goto label_4f5344;
        case 0x4f5348u: goto label_4f5348;
        case 0x4f534cu: goto label_4f534c;
        case 0x4f5350u: goto label_4f5350;
        case 0x4f5354u: goto label_4f5354;
        case 0x4f5358u: goto label_4f5358;
        case 0x4f535cu: goto label_4f535c;
        case 0x4f5360u: goto label_4f5360;
        case 0x4f5364u: goto label_4f5364;
        case 0x4f5368u: goto label_4f5368;
        case 0x4f536cu: goto label_4f536c;
        case 0x4f5370u: goto label_4f5370;
        case 0x4f5374u: goto label_4f5374;
        case 0x4f5378u: goto label_4f5378;
        case 0x4f537cu: goto label_4f537c;
        case 0x4f5380u: goto label_4f5380;
        case 0x4f5384u: goto label_4f5384;
        case 0x4f5388u: goto label_4f5388;
        case 0x4f538cu: goto label_4f538c;
        case 0x4f5390u: goto label_4f5390;
        case 0x4f5394u: goto label_4f5394;
        case 0x4f5398u: goto label_4f5398;
        case 0x4f539cu: goto label_4f539c;
        case 0x4f53a0u: goto label_4f53a0;
        case 0x4f53a4u: goto label_4f53a4;
        case 0x4f53a8u: goto label_4f53a8;
        case 0x4f53acu: goto label_4f53ac;
        case 0x4f53b0u: goto label_4f53b0;
        case 0x4f53b4u: goto label_4f53b4;
        case 0x4f53b8u: goto label_4f53b8;
        case 0x4f53bcu: goto label_4f53bc;
        case 0x4f53c0u: goto label_4f53c0;
        case 0x4f53c4u: goto label_4f53c4;
        case 0x4f53c8u: goto label_4f53c8;
        case 0x4f53ccu: goto label_4f53cc;
        case 0x4f53d0u: goto label_4f53d0;
        case 0x4f53d4u: goto label_4f53d4;
        case 0x4f53d8u: goto label_4f53d8;
        case 0x4f53dcu: goto label_4f53dc;
        case 0x4f53e0u: goto label_4f53e0;
        case 0x4f53e4u: goto label_4f53e4;
        case 0x4f53e8u: goto label_4f53e8;
        case 0x4f53ecu: goto label_4f53ec;
        case 0x4f53f0u: goto label_4f53f0;
        case 0x4f53f4u: goto label_4f53f4;
        case 0x4f53f8u: goto label_4f53f8;
        case 0x4f53fcu: goto label_4f53fc;
        case 0x4f5400u: goto label_4f5400;
        case 0x4f5404u: goto label_4f5404;
        case 0x4f5408u: goto label_4f5408;
        case 0x4f540cu: goto label_4f540c;
        case 0x4f5410u: goto label_4f5410;
        case 0x4f5414u: goto label_4f5414;
        case 0x4f5418u: goto label_4f5418;
        case 0x4f541cu: goto label_4f541c;
        case 0x4f5420u: goto label_4f5420;
        case 0x4f5424u: goto label_4f5424;
        case 0x4f5428u: goto label_4f5428;
        case 0x4f542cu: goto label_4f542c;
        case 0x4f5430u: goto label_4f5430;
        case 0x4f5434u: goto label_4f5434;
        case 0x4f5438u: goto label_4f5438;
        case 0x4f543cu: goto label_4f543c;
        case 0x4f5440u: goto label_4f5440;
        case 0x4f5444u: goto label_4f5444;
        case 0x4f5448u: goto label_4f5448;
        case 0x4f544cu: goto label_4f544c;
        case 0x4f5450u: goto label_4f5450;
        case 0x4f5454u: goto label_4f5454;
        case 0x4f5458u: goto label_4f5458;
        case 0x4f545cu: goto label_4f545c;
        case 0x4f5460u: goto label_4f5460;
        case 0x4f5464u: goto label_4f5464;
        case 0x4f5468u: goto label_4f5468;
        case 0x4f546cu: goto label_4f546c;
        case 0x4f5470u: goto label_4f5470;
        case 0x4f5474u: goto label_4f5474;
        case 0x4f5478u: goto label_4f5478;
        case 0x4f547cu: goto label_4f547c;
        case 0x4f5480u: goto label_4f5480;
        case 0x4f5484u: goto label_4f5484;
        case 0x4f5488u: goto label_4f5488;
        case 0x4f548cu: goto label_4f548c;
        case 0x4f5490u: goto label_4f5490;
        case 0x4f5494u: goto label_4f5494;
        case 0x4f5498u: goto label_4f5498;
        case 0x4f549cu: goto label_4f549c;
        case 0x4f54a0u: goto label_4f54a0;
        case 0x4f54a4u: goto label_4f54a4;
        case 0x4f54a8u: goto label_4f54a8;
        case 0x4f54acu: goto label_4f54ac;
        case 0x4f54b0u: goto label_4f54b0;
        case 0x4f54b4u: goto label_4f54b4;
        case 0x4f54b8u: goto label_4f54b8;
        case 0x4f54bcu: goto label_4f54bc;
        case 0x4f54c0u: goto label_4f54c0;
        case 0x4f54c4u: goto label_4f54c4;
        case 0x4f54c8u: goto label_4f54c8;
        case 0x4f54ccu: goto label_4f54cc;
        case 0x4f54d0u: goto label_4f54d0;
        case 0x4f54d4u: goto label_4f54d4;
        case 0x4f54d8u: goto label_4f54d8;
        case 0x4f54dcu: goto label_4f54dc;
        case 0x4f54e0u: goto label_4f54e0;
        case 0x4f54e4u: goto label_4f54e4;
        case 0x4f54e8u: goto label_4f54e8;
        case 0x4f54ecu: goto label_4f54ec;
        case 0x4f54f0u: goto label_4f54f0;
        case 0x4f54f4u: goto label_4f54f4;
        case 0x4f54f8u: goto label_4f54f8;
        case 0x4f54fcu: goto label_4f54fc;
        case 0x4f5500u: goto label_4f5500;
        case 0x4f5504u: goto label_4f5504;
        case 0x4f5508u: goto label_4f5508;
        case 0x4f550cu: goto label_4f550c;
        case 0x4f5510u: goto label_4f5510;
        case 0x4f5514u: goto label_4f5514;
        case 0x4f5518u: goto label_4f5518;
        case 0x4f551cu: goto label_4f551c;
        case 0x4f5520u: goto label_4f5520;
        case 0x4f5524u: goto label_4f5524;
        case 0x4f5528u: goto label_4f5528;
        case 0x4f552cu: goto label_4f552c;
        case 0x4f5530u: goto label_4f5530;
        case 0x4f5534u: goto label_4f5534;
        case 0x4f5538u: goto label_4f5538;
        case 0x4f553cu: goto label_4f553c;
        case 0x4f5540u: goto label_4f5540;
        case 0x4f5544u: goto label_4f5544;
        case 0x4f5548u: goto label_4f5548;
        case 0x4f554cu: goto label_4f554c;
        case 0x4f5550u: goto label_4f5550;
        case 0x4f5554u: goto label_4f5554;
        default: break;
    }

    ctx->pc = 0x4f5338u;

label_4f5338:
    // 0x4f5338: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4f5338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4f533c:
    // 0x4f533c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4f533cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f5340:
    // 0x4f5340: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x4f5340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_4f5344:
    // 0x4f5344: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x4f5344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_4f5348:
    // 0x4f5348: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x4f5348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_4f534c:
    // 0x4f534c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x4f534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_4f5350:
    // 0x4f5350: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4f5350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5354:
    // 0x4f5354: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x4f5354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_4f5358:
    // 0x4f5358: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4f5358u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4f535c:
    // 0x4f535c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4f535cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4f5360:
    // 0x4f5360: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x4f5360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_4f5364:
    // 0x4f5364: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x4f5364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_4f5368:
    // 0x4f5368: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4f5368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4f536c:
    // 0x4f536c: 0x8e4a0028  lw          $t2, 0x28($s2)
    ctx->pc = 0x4f536cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4f5370:
    // 0x4f5370: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x4f5370u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4f5374:
    // 0x4f5374: 0x8e490008  lw          $t1, 0x8($s2)
    ctx->pc = 0x4f5374u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4f5378:
    // 0x4f5378: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x4f5378u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_4f537c:
    // 0x4f537c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4f537cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4f5380:
    // 0x4f5380: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x4f5380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4f5384:
    // 0x4f5384: 0x2088821  addu        $s1, $s0, $t0
    ctx->pc = 0x4f5384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
label_4f5388:
    // 0x4f5388: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x4f5388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_4f538c:
    // 0x4f538c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x4f538cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_4f5390:
    // 0x4f5390: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_4f5394:
    if (ctx->pc == 0x4F5394u) {
        ctx->pc = 0x4F5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5390u;
        // 0x4f5394: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5398u;
        goto label_4f5398;
    }
    ctx->pc = 0x4F5390u;
    {
        const bool branch_taken_0x4f5390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5390u;
        // 0x4f5394: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5390) {
            ctx->pc = 0x4F540Cu;
            goto label_4f540c;
        }
    }
    ctx->pc = 0x4F5398u;
label_4f5398:
    // 0x4f5398: 0x1311023  subu        $v0, $t1, $s1
    ctx->pc = 0x4f5398u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 17)));
label_4f539c:
    // 0x4f539c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4f539cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f53a0:
    // 0x4f53a0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4f53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f53a4:
    // 0x4f53a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f53a8:
    // 0x4f53a8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_4f53ac:
    if (ctx->pc == 0x4F53ACu) {
        ctx->pc = 0x4F53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F53A8u;
        // 0x4f53ac: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F53B0u;
        goto label_4f53b0;
    }
    ctx->pc = 0x4F53A8u;
    {
        const bool branch_taken_0x4f53a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F53ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F53A8u;
        // 0x4f53ac: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f53a8) {
            ctx->pc = 0x4F53B8u;
            goto label_4f53b8;
        }
    }
    ctx->pc = 0x4F53B0u;
label_4f53b0:
    // 0x4f53b0: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4f53b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4f53b4:
    // 0x4f53b4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f53b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f53b8:
    // 0x4f53b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f53b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f53bc:
    // 0x4f53bc: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x4f53bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_4f53c0:
    // 0x4f53c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4f53c4:
    if (ctx->pc == 0x4F53C4u) {
        ctx->pc = 0x4F53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F53C0u;
        // 0x4f53c4: 0x25460004  addiu       $a2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F53C8u;
        goto label_4f53c8;
    }
    ctx->pc = 0x4F53C0u;
    {
        const bool branch_taken_0x4f53c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F53C0u;
        // 0x4f53c4: 0x25460004  addiu       $a2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f53c0) {
            ctx->pc = 0x4F53E4u;
            goto label_4f53e4;
        }
    }
    ctx->pc = 0x4F53C8u;
label_4f53c8:
    // 0x4f53c8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4f53c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4f53cc:
    // 0x4f53cc: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f53ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f53d0:
    // 0x4f53d0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f53d0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f53d4:
    // 0x4f53d4: 0xc10c1bb  jal         func_4306EC
label_4f53d8:
    if (ctx->pc == 0x4F53D8u) {
        ctx->pc = 0x4F53D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F53D4u;
        // 0x4f53d8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F53DCu;
        goto label_4f53dc;
    }
    ctx->pc = 0x4F53D4u;
    SET_GPR_U32(ctx, 31, 0x4F53DCu);
    ctx->pc = 0x4F53D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F53D4u;
    // 0x4f53d8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F53D4u, 0x4F53DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F53DCu;
label_4f53dc:
    // 0x4f53dc: 0x10000041  b           . + 4 + (0x41 << 2)
label_4f53e0:
    if (ctx->pc == 0x4F53E0u) {
        ctx->pc = 0x4F53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F53DCu;
        // 0x4f53e0: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F53E4u;
        goto label_4f53e4;
    }
    ctx->pc = 0x4F53DCu;
    {
        const bool branch_taken_0x4f53dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F53DCu;
        // 0x4f53e0: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f53dc) {
            ctx->pc = 0x4F54E4u;
            goto label_4f54e4;
        }
    }
    ctx->pc = 0x4F53E4u;
label_4f53e4:
    // 0x4f53e4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x4f53e4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4f53e8:
    // 0x4f53e8: 0xc73023  subu        $a2, $a2, $a3
    ctx->pc = 0x4f53e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4f53ec:
    // 0x4f53ec: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x4f53ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_4f53f0:
    // 0x4f53f0: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f53f0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f53f4:
    // 0x4f53f4: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4f53f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4f53f8:
    // 0x4f53f8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4f53f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4f53fc:
    // 0x4f53fc: 0xc10c1bb  jal         func_4306EC
label_4f5400:
    if (ctx->pc == 0x4F5400u) {
        ctx->pc = 0x4F5400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F53FCu;
        // 0x4f5400: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5404u;
        goto label_4f5404;
    }
    ctx->pc = 0x4F53FCu;
    SET_GPR_U32(ctx, 31, 0x4F5404u);
    ctx->pc = 0x4F5400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F53FCu;
    // 0x4f5400: 0x862023  subu        $a0, $a0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F53FCu, 0x4F5404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5404u;
label_4f5404:
    // 0x4f5404: 0x10000038  b           . + 4 + (0x38 << 2)
label_4f5408:
    if (ctx->pc == 0x4F5408u) {
        ctx->pc = 0x4F5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5404u;
        // 0x4f5408: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F540Cu;
        goto label_4f540c;
    }
    ctx->pc = 0x4F5404u;
    {
        const bool branch_taken_0x4f5404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5404u;
        // 0x4f5408: 0x2644000c  addiu       $a0, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5404) {
            ctx->pc = 0x4F54E8u;
            goto label_4f54e8;
        }
    }
    ctx->pc = 0x4F540Cu;
label_4f540c:
    // 0x4f540c: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x4f540cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
label_4f5410:
    // 0x4f5410: 0x128182b  sltu        $v1, $t1, $t0
    ctx->pc = 0x4f5410u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4f5414:
    // 0x4f5414: 0x8ee7b9c0  lw          $a3, -0x4640($s7)
    ctx->pc = 0x4f5414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
label_4f5418:
    // 0x4f5418: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x4f5418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_4f541c:
    // 0x4f541c: 0x3a3100b  movn        $v0, $sp, $v1
    ctx->pc = 0x4f541cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 29));
label_4f5420:
    // 0x4f5420: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x4f5420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_4f5424:
    // 0x4f5424: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x4f5424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4f5428:
    // 0x4f5428: 0x24968a50  addiu       $s6, $a0, -0x75B0
    ctx->pc = 0x4f5428u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937168));
label_4f542c:
    // 0x4f542c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4f542cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4f5430:
    // 0x4f5430: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x4f5430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_4f5434:
    // 0x4f5434: 0x84c40050  lh          $a0, 0x50($a2)
    ctx->pc = 0x4f5434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 80)));
label_4f5438:
    // 0x4f5438: 0x3c0a0059  lui         $t2, 0x59
    ctx->pc = 0x4f5438u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)89 << 16));
label_4f543c:
    // 0x4f543c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x4f543cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_4f5440:
    // 0x4f5440: 0x8cc20054  lw          $v0, 0x54($a2)
    ctx->pc = 0x4f5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_4f5444:
    // 0x4f5444: 0x24730002  addiu       $s3, $v1, 0x2
    ctx->pc = 0x4f5444u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_4f5448:
    // 0x4f5448: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x4f5448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_4f544c:
    // 0x4f544c: 0x24a58a48  addiu       $a1, $a1, -0x75B8
    ctx->pc = 0x4f544cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937160));
label_4f5450:
    // 0x4f5450: 0x254a8a78  addiu       $t2, $t2, -0x7588
    ctx->pc = 0x4f5450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937208));
label_4f5454:
    // 0x4f5454: 0x133080  sll         $a2, $s3, 2
    ctx->pc = 0x4f5454u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4f5458:
    // 0x4f5458: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4f5458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4f545c:
    // 0x4f545c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4f545cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f5460:
    // 0x4f5460: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4f5460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4f5464:
    // 0x4f5464: 0x40f809  jalr        $v0
label_4f5468:
    if (ctx->pc == 0x4F5468u) {
        ctx->pc = 0x4F5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5464u;
        // 0x4f5468: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F546Cu;
        goto label_4f546c;
    }
    ctx->pc = 0x4F5464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F546Cu);
        ctx->pc = 0x4F5468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5464u;
        // 0x4f5468: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5464u, 0x4F546Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F546Cu;
label_4f546c:
    // 0x4f546c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4f546cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4f5470:
    // 0x4f5470: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x4f5470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_4f5474:
    // 0x4f5474: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4f5474u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_4f5478:
    // 0x4f5478: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f5478u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f547c:
    // 0x4f547c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_4f5480:
    if (ctx->pc == 0x4F5480u) {
        ctx->pc = 0x4F5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F547Cu;
        // 0x4f5480: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5484u;
        goto label_4f5484;
    }
    ctx->pc = 0x4F547Cu;
    {
        const bool branch_taken_0x4f547c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F547Cu;
        // 0x4f5480: 0x2822021  addu        $a0, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f547c) {
            ctx->pc = 0x4F5490u;
            goto label_4f5490;
        }
    }
    ctx->pc = 0x4F5484u;
label_4f5484:
    // 0x4f5484: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4f5484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5488:
    // 0x4f5488: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4f5488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4f548c:
    // 0x4f548c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4f5490:
    // 0x4f5490: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x4f5490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_4f5494:
    // 0x4f5494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f5494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5498:
    // 0x4f5498: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x4f5498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_4f549c:
    // 0x4f549c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4f549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4f54a0:
    // 0x4f54a0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x4f54a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4f54a4:
    // 0x4f54a4: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x4f54a4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_4f54a8:
    // 0x4f54a8: 0xc10c1bb  jal         func_4306EC
label_4f54ac:
    if (ctx->pc == 0x4F54ACu) {
        ctx->pc = 0x4F54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F54A8u;
        // 0x4f54ac: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F54B0u;
        goto label_4f54b0;
    }
    ctx->pc = 0x4F54A8u;
    SET_GPR_U32(ctx, 31, 0x4F54B0u);
    ctx->pc = 0x4F54ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F54A8u;
    // 0x4f54ac: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4306ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4306ECu, 0x4F54A8u, 0x4F54B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F54B0u;
label_4f54b0:
    // 0x4f54b0: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x4f54b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4f54b4:
    // 0x4f54b4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_4f54b8:
    if (ctx->pc == 0x4F54B8u) {
        ctx->pc = 0x4F54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F54B4u;
        // 0x4f54b8: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F54BCu;
        goto label_4f54bc;
    }
    ctx->pc = 0x4F54B4u;
    {
        const bool branch_taken_0x4f54b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F54B4u;
        // 0x4f54b8: 0x8ee8b9c0  lw          $t0, -0x4640($s7) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294949312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f54b4) {
            ctx->pc = 0x4F54D8u;
            goto label_4f54d8;
        }
    }
    ctx->pc = 0x4F54BCu;
label_4f54bc:
    // 0x4f54bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4f54bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4f54c0:
    // 0x4f54c0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4f54c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4f54c4:
    // 0x4f54c4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f54c8:
    // 0x4f54c8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f54c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f54cc:
    // 0x4f54cc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f54d0:
    // 0x4f54d0: 0x60f809  jalr        $v1
label_4f54d4:
    if (ctx->pc == 0x4F54D4u) {
        ctx->pc = 0x4F54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F54D0u;
        // 0x4f54d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F54D8u;
        goto label_4f54d8;
    }
    ctx->pc = 0x4F54D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F54D8u);
        ctx->pc = 0x4F54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F54D0u;
        // 0x4f54d4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F54D0u, 0x4F54D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F54D8u;
label_4f54d8:
    // 0x4f54d8: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x4f54d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
label_4f54dc:
    // 0x4f54dc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x4f54dcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_4f54e0:
    // 0x4f54e0: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x4f54e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
label_4f54e4:
    // 0x4f54e4: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x4f54e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4f54e8:
    // 0x4f54e8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4f54e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f54ec:
    // 0x4f54ec: 0xac91000c  sw          $s1, 0xC($a0)
    ctx->pc = 0x4f54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 17));
label_4f54f0:
    // 0x4f54f0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x4f54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_4f54f4:
    // 0x4f54f4: 0x2645001c  addiu       $a1, $s2, 0x1C
    ctx->pc = 0x4f54f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_4f54f8:
    // 0x4f54f8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x4f54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_4f54fc:
    // 0x4f54fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4f54fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4f5500:
    // 0x4f5500: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4f5500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4f5504:
    // 0x4f5504: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4f5504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4f5508:
    // 0x4f5508: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4f550c:
    if (ctx->pc == 0x4F550Cu) {
        ctx->pc = 0x4F550Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5508u;
        // 0x4f550c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5510u;
        goto label_4f5510;
    }
    ctx->pc = 0x4F5508u;
    {
        const bool branch_taken_0x4f5508 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4f5508) {
            ctx->pc = 0x4F550Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5508u;
            // 0x4f550c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5510u;
            goto label_4f5510;
        }
    }
    ctx->pc = 0x4F5510u;
label_4f5510:
    // 0x4f5510: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4f5510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_4f5514:
    // 0x4f5514: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4f5514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4f5518:
    // 0x4f5518: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x4f5518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_4f551c:
    // 0x4f551c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f551cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f5520:
    // 0x4f5520: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x4f5520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_4f5524:
    // 0x4f5524: 0x24420200  addiu       $v0, $v0, 0x200
    ctx->pc = 0x4f5524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
label_4f5528:
    // 0x4f5528: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x4f5528u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4f552c:
    // 0x4f552c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x4f552cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4f5530:
    // 0x4f5530: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x4f5530u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4f5534:
    // 0x4f5534: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x4f5534u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4f5538:
    // 0x4f5538: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4f5538u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4f553c:
    // 0x4f553c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x4f553cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f5540:
    // 0x4f5540: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x4f5540u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f5544:
    // 0x4f5544: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x4f5544u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f5548:
    // 0x4f5548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4f5548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4f554c:
    // 0x4f554c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x4f554cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_4f5550:
    // 0x4f5550: 0x3e00008  jr          $ra
label_4f5554:
    if (ctx->pc == 0x4F5554u) {
        ctx->pc = 0x4F5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5550u;
        // 0x4f5554: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5558u;
        goto label_fallthrough_0x4f5550;
    }
    ctx->pc = 0x4F5550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5550u;
        // 0x4f5554: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f5550:
    ctx->pc = 0x4F5558u;
}
