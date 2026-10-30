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

// Function: sub_004A52A8
// Address: 0x4a52a8 - 0x4a56d8
void sub_004A52A8_0x4a52a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A52A8_0x4a52a8");
#endif

    switch (ctx->pc) {
        case 0x4a52a8u: goto label_4a52a8;
        case 0x4a52acu: goto label_4a52ac;
        case 0x4a52b0u: goto label_4a52b0;
        case 0x4a52b4u: goto label_4a52b4;
        case 0x4a52b8u: goto label_4a52b8;
        case 0x4a52bcu: goto label_4a52bc;
        case 0x4a52c0u: goto label_4a52c0;
        case 0x4a52c4u: goto label_4a52c4;
        case 0x4a52c8u: goto label_4a52c8;
        case 0x4a52ccu: goto label_4a52cc;
        case 0x4a52d0u: goto label_4a52d0;
        case 0x4a52d4u: goto label_4a52d4;
        case 0x4a52d8u: goto label_4a52d8;
        case 0x4a52dcu: goto label_4a52dc;
        case 0x4a52e0u: goto label_4a52e0;
        case 0x4a52e4u: goto label_4a52e4;
        case 0x4a52e8u: goto label_4a52e8;
        case 0x4a52ecu: goto label_4a52ec;
        case 0x4a52f0u: goto label_4a52f0;
        case 0x4a52f4u: goto label_4a52f4;
        case 0x4a52f8u: goto label_4a52f8;
        case 0x4a52fcu: goto label_4a52fc;
        case 0x4a5300u: goto label_4a5300;
        case 0x4a5304u: goto label_4a5304;
        case 0x4a5308u: goto label_4a5308;
        case 0x4a530cu: goto label_4a530c;
        case 0x4a5310u: goto label_4a5310;
        case 0x4a5314u: goto label_4a5314;
        case 0x4a5318u: goto label_4a5318;
        case 0x4a531cu: goto label_4a531c;
        case 0x4a5320u: goto label_4a5320;
        case 0x4a5324u: goto label_4a5324;
        case 0x4a5328u: goto label_4a5328;
        case 0x4a532cu: goto label_4a532c;
        case 0x4a5330u: goto label_4a5330;
        case 0x4a5334u: goto label_4a5334;
        case 0x4a5338u: goto label_4a5338;
        case 0x4a533cu: goto label_4a533c;
        case 0x4a5340u: goto label_4a5340;
        case 0x4a5344u: goto label_4a5344;
        case 0x4a5348u: goto label_4a5348;
        case 0x4a534cu: goto label_4a534c;
        case 0x4a5350u: goto label_4a5350;
        case 0x4a5354u: goto label_4a5354;
        case 0x4a5358u: goto label_4a5358;
        case 0x4a535cu: goto label_4a535c;
        case 0x4a5360u: goto label_4a5360;
        case 0x4a5364u: goto label_4a5364;
        case 0x4a5368u: goto label_4a5368;
        case 0x4a536cu: goto label_4a536c;
        case 0x4a5370u: goto label_4a5370;
        case 0x4a5374u: goto label_4a5374;
        case 0x4a5378u: goto label_4a5378;
        case 0x4a537cu: goto label_4a537c;
        case 0x4a5380u: goto label_4a5380;
        case 0x4a5384u: goto label_4a5384;
        case 0x4a5388u: goto label_4a5388;
        case 0x4a538cu: goto label_4a538c;
        case 0x4a5390u: goto label_4a5390;
        case 0x4a5394u: goto label_4a5394;
        case 0x4a5398u: goto label_4a5398;
        case 0x4a539cu: goto label_4a539c;
        case 0x4a53a0u: goto label_4a53a0;
        case 0x4a53a4u: goto label_4a53a4;
        case 0x4a53a8u: goto label_4a53a8;
        case 0x4a53acu: goto label_4a53ac;
        case 0x4a53b0u: goto label_4a53b0;
        case 0x4a53b4u: goto label_4a53b4;
        case 0x4a53b8u: goto label_4a53b8;
        case 0x4a53bcu: goto label_4a53bc;
        case 0x4a53c0u: goto label_4a53c0;
        case 0x4a53c4u: goto label_4a53c4;
        case 0x4a53c8u: goto label_4a53c8;
        case 0x4a53ccu: goto label_4a53cc;
        case 0x4a53d0u: goto label_4a53d0;
        case 0x4a53d4u: goto label_4a53d4;
        case 0x4a53d8u: goto label_4a53d8;
        case 0x4a53dcu: goto label_4a53dc;
        case 0x4a53e0u: goto label_4a53e0;
        case 0x4a53e4u: goto label_4a53e4;
        case 0x4a53e8u: goto label_4a53e8;
        case 0x4a53ecu: goto label_4a53ec;
        case 0x4a53f0u: goto label_4a53f0;
        case 0x4a53f4u: goto label_4a53f4;
        case 0x4a53f8u: goto label_4a53f8;
        case 0x4a53fcu: goto label_4a53fc;
        case 0x4a5400u: goto label_4a5400;
        case 0x4a5404u: goto label_4a5404;
        case 0x4a5408u: goto label_4a5408;
        case 0x4a540cu: goto label_4a540c;
        case 0x4a5410u: goto label_4a5410;
        case 0x4a5414u: goto label_4a5414;
        case 0x4a5418u: goto label_4a5418;
        case 0x4a541cu: goto label_4a541c;
        case 0x4a5420u: goto label_4a5420;
        case 0x4a5424u: goto label_4a5424;
        case 0x4a5428u: goto label_4a5428;
        case 0x4a542cu: goto label_4a542c;
        case 0x4a5430u: goto label_4a5430;
        case 0x4a5434u: goto label_4a5434;
        case 0x4a5438u: goto label_4a5438;
        case 0x4a543cu: goto label_4a543c;
        case 0x4a5440u: goto label_4a5440;
        case 0x4a5444u: goto label_4a5444;
        case 0x4a5448u: goto label_4a5448;
        case 0x4a544cu: goto label_4a544c;
        case 0x4a5450u: goto label_4a5450;
        case 0x4a5454u: goto label_4a5454;
        case 0x4a5458u: goto label_4a5458;
        case 0x4a545cu: goto label_4a545c;
        case 0x4a5460u: goto label_4a5460;
        case 0x4a5464u: goto label_4a5464;
        case 0x4a5468u: goto label_4a5468;
        case 0x4a546cu: goto label_4a546c;
        case 0x4a5470u: goto label_4a5470;
        case 0x4a5474u: goto label_4a5474;
        case 0x4a5478u: goto label_4a5478;
        case 0x4a547cu: goto label_4a547c;
        case 0x4a5480u: goto label_4a5480;
        case 0x4a5484u: goto label_4a5484;
        case 0x4a5488u: goto label_4a5488;
        case 0x4a548cu: goto label_4a548c;
        case 0x4a5490u: goto label_4a5490;
        case 0x4a5494u: goto label_4a5494;
        case 0x4a5498u: goto label_4a5498;
        case 0x4a549cu: goto label_4a549c;
        case 0x4a54a0u: goto label_4a54a0;
        case 0x4a54a4u: goto label_4a54a4;
        case 0x4a54a8u: goto label_4a54a8;
        case 0x4a54acu: goto label_4a54ac;
        case 0x4a54b0u: goto label_4a54b0;
        case 0x4a54b4u: goto label_4a54b4;
        case 0x4a54b8u: goto label_4a54b8;
        case 0x4a54bcu: goto label_4a54bc;
        case 0x4a54c0u: goto label_4a54c0;
        case 0x4a54c4u: goto label_4a54c4;
        case 0x4a54c8u: goto label_4a54c8;
        case 0x4a54ccu: goto label_4a54cc;
        case 0x4a54d0u: goto label_4a54d0;
        case 0x4a54d4u: goto label_4a54d4;
        case 0x4a54d8u: goto label_4a54d8;
        case 0x4a54dcu: goto label_4a54dc;
        case 0x4a54e0u: goto label_4a54e0;
        case 0x4a54e4u: goto label_4a54e4;
        case 0x4a54e8u: goto label_4a54e8;
        case 0x4a54ecu: goto label_4a54ec;
        case 0x4a54f0u: goto label_4a54f0;
        case 0x4a54f4u: goto label_4a54f4;
        case 0x4a54f8u: goto label_4a54f8;
        case 0x4a54fcu: goto label_4a54fc;
        case 0x4a5500u: goto label_4a5500;
        case 0x4a5504u: goto label_4a5504;
        case 0x4a5508u: goto label_4a5508;
        case 0x4a550cu: goto label_4a550c;
        case 0x4a5510u: goto label_4a5510;
        case 0x4a5514u: goto label_4a5514;
        case 0x4a5518u: goto label_4a5518;
        case 0x4a551cu: goto label_4a551c;
        case 0x4a5520u: goto label_4a5520;
        case 0x4a5524u: goto label_4a5524;
        case 0x4a5528u: goto label_4a5528;
        case 0x4a552cu: goto label_4a552c;
        case 0x4a5530u: goto label_4a5530;
        case 0x4a5534u: goto label_4a5534;
        case 0x4a5538u: goto label_4a5538;
        case 0x4a553cu: goto label_4a553c;
        case 0x4a5540u: goto label_4a5540;
        case 0x4a5544u: goto label_4a5544;
        case 0x4a5548u: goto label_4a5548;
        case 0x4a554cu: goto label_4a554c;
        case 0x4a5550u: goto label_4a5550;
        case 0x4a5554u: goto label_4a5554;
        case 0x4a5558u: goto label_4a5558;
        case 0x4a555cu: goto label_4a555c;
        case 0x4a5560u: goto label_4a5560;
        case 0x4a5564u: goto label_4a5564;
        case 0x4a5568u: goto label_4a5568;
        case 0x4a556cu: goto label_4a556c;
        case 0x4a5570u: goto label_4a5570;
        case 0x4a5574u: goto label_4a5574;
        case 0x4a5578u: goto label_4a5578;
        case 0x4a557cu: goto label_4a557c;
        case 0x4a5580u: goto label_4a5580;
        case 0x4a5584u: goto label_4a5584;
        case 0x4a5588u: goto label_4a5588;
        case 0x4a558cu: goto label_4a558c;
        case 0x4a5590u: goto label_4a5590;
        case 0x4a5594u: goto label_4a5594;
        case 0x4a5598u: goto label_4a5598;
        case 0x4a559cu: goto label_4a559c;
        case 0x4a55a0u: goto label_4a55a0;
        case 0x4a55a4u: goto label_4a55a4;
        case 0x4a55a8u: goto label_4a55a8;
        case 0x4a55acu: goto label_4a55ac;
        case 0x4a55b0u: goto label_4a55b0;
        case 0x4a55b4u: goto label_4a55b4;
        case 0x4a55b8u: goto label_4a55b8;
        case 0x4a55bcu: goto label_4a55bc;
        case 0x4a55c0u: goto label_4a55c0;
        case 0x4a55c4u: goto label_4a55c4;
        case 0x4a55c8u: goto label_4a55c8;
        case 0x4a55ccu: goto label_4a55cc;
        case 0x4a55d0u: goto label_4a55d0;
        case 0x4a55d4u: goto label_4a55d4;
        case 0x4a55d8u: goto label_4a55d8;
        case 0x4a55dcu: goto label_4a55dc;
        case 0x4a55e0u: goto label_4a55e0;
        case 0x4a55e4u: goto label_4a55e4;
        case 0x4a55e8u: goto label_4a55e8;
        case 0x4a55ecu: goto label_4a55ec;
        case 0x4a55f0u: goto label_4a55f0;
        case 0x4a55f4u: goto label_4a55f4;
        case 0x4a55f8u: goto label_4a55f8;
        case 0x4a55fcu: goto label_4a55fc;
        case 0x4a5600u: goto label_4a5600;
        case 0x4a5604u: goto label_4a5604;
        case 0x4a5608u: goto label_4a5608;
        case 0x4a560cu: goto label_4a560c;
        case 0x4a5610u: goto label_4a5610;
        case 0x4a5614u: goto label_4a5614;
        case 0x4a5618u: goto label_4a5618;
        case 0x4a561cu: goto label_4a561c;
        case 0x4a5620u: goto label_4a5620;
        case 0x4a5624u: goto label_4a5624;
        case 0x4a5628u: goto label_4a5628;
        case 0x4a562cu: goto label_4a562c;
        case 0x4a5630u: goto label_4a5630;
        case 0x4a5634u: goto label_4a5634;
        case 0x4a5638u: goto label_4a5638;
        case 0x4a563cu: goto label_4a563c;
        case 0x4a5640u: goto label_4a5640;
        case 0x4a5644u: goto label_4a5644;
        case 0x4a5648u: goto label_4a5648;
        case 0x4a564cu: goto label_4a564c;
        case 0x4a5650u: goto label_4a5650;
        case 0x4a5654u: goto label_4a5654;
        case 0x4a5658u: goto label_4a5658;
        case 0x4a565cu: goto label_4a565c;
        case 0x4a5660u: goto label_4a5660;
        case 0x4a5664u: goto label_4a5664;
        case 0x4a5668u: goto label_4a5668;
        case 0x4a566cu: goto label_4a566c;
        case 0x4a5670u: goto label_4a5670;
        case 0x4a5674u: goto label_4a5674;
        case 0x4a5678u: goto label_4a5678;
        case 0x4a567cu: goto label_4a567c;
        case 0x4a5680u: goto label_4a5680;
        case 0x4a5684u: goto label_4a5684;
        case 0x4a5688u: goto label_4a5688;
        case 0x4a568cu: goto label_4a568c;
        case 0x4a5690u: goto label_4a5690;
        case 0x4a5694u: goto label_4a5694;
        case 0x4a5698u: goto label_4a5698;
        case 0x4a569cu: goto label_4a569c;
        case 0x4a56a0u: goto label_4a56a0;
        case 0x4a56a4u: goto label_4a56a4;
        case 0x4a56a8u: goto label_4a56a8;
        case 0x4a56acu: goto label_4a56ac;
        case 0x4a56b0u: goto label_4a56b0;
        case 0x4a56b4u: goto label_4a56b4;
        case 0x4a56b8u: goto label_4a56b8;
        case 0x4a56bcu: goto label_4a56bc;
        case 0x4a56c0u: goto label_4a56c0;
        case 0x4a56c4u: goto label_4a56c4;
        case 0x4a56c8u: goto label_4a56c8;
        case 0x4a56ccu: goto label_4a56cc;
        case 0x4a56d0u: goto label_4a56d0;
        case 0x4a56d4u: goto label_4a56d4;
        default: break;
    }

    ctx->pc = 0x4a52a8u;

label_4a52a8:
    // 0x4a52a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a52a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a52ac:
    // 0x4a52ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a52acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4a52b0:
    // 0x4a52b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a52b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a52b4:
    // 0x4a52b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4a52b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a52b8:
    // 0x4a52b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a52b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a52bc:
    // 0x4a52bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a52bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a52c0:
    // 0x4a52c0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4a52c4:
    if (ctx->pc == 0x4A52C4u) {
        ctx->pc = 0x4A52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A52C0u;
        // 0x4a52c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A52C8u;
        goto label_4a52c8;
    }
    ctx->pc = 0x4A52C0u;
    {
        const bool branch_taken_0x4a52c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A52C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A52C0u;
        // 0x4a52c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a52c0) {
            ctx->pc = 0x4A536Cu;
            goto label_4a536c;
        }
    }
    ctx->pc = 0x4A52C8u;
label_4a52c8:
    // 0x4a52c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a52c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a52cc:
    // 0x4a52cc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x4a52ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_4a52d0:
    // 0x4a52d0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a52d4:
    if (ctx->pc == 0x4A52D4u) {
        ctx->pc = 0x4A52D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A52D0u;
        // 0x4a52d4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A52D8u;
        goto label_4a52d8;
    }
    ctx->pc = 0x4A52D0u;
    {
        const bool branch_taken_0x4a52d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a52d0) {
            ctx->pc = 0x4A52D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A52D0u;
            // 0x4a52d4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A52E4u;
            goto label_4a52e4;
        }
    }
    ctx->pc = 0x4A52D8u;
label_4a52d8:
    // 0x4a52d8: 0x40f809  jalr        $v0
label_4a52dc:
    if (ctx->pc == 0x4A52DCu) {
        ctx->pc = 0x4A52E0u;
        goto label_4a52e0;
    }
    ctx->pc = 0x4A52D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A52E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A52D8u, 0x4A52E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A52E0u;
label_4a52e0:
    // 0x4a52e0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a52e4:
    // 0x4a52e4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x4a52e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_4a52e8:
    // 0x4a52e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a52e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a52ec:
    // 0x4a52ec: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x4a52ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_4a52f0:
    // 0x4a52f0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4a52f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a52f4:
    // 0x4a52f4: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x4a52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4a52f8:
    // 0x4a52f8: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_4a52fc:
    if (ctx->pc == 0x4A52FCu) {
        ctx->pc = 0x4A52FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A52F8u;
        // 0x4a52fc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5300u;
        goto label_4a5300;
    }
    ctx->pc = 0x4A52F8u;
    {
        const bool branch_taken_0x4a52f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a52f8) {
            ctx->pc = 0x4A52FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A52F8u;
            // 0x4a52fc: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5338u;
            goto label_4a5338;
        }
    }
    ctx->pc = 0x4A5300u;
label_4a5300:
    // 0x4a5300: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4a5300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_4a5304:
    // 0x4a5304: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_4a5308:
    if (ctx->pc == 0x4A5308u) {
        ctx->pc = 0x4A5308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5304u;
        // 0x4a5308: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A530Cu;
        goto label_4a530c;
    }
    ctx->pc = 0x4A5304u;
    {
        const bool branch_taken_0x4a5304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5304) {
            ctx->pc = 0x4A5308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5304u;
            // 0x4a5308: 0x8c820038  lw          $v0, 0x38($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A531Cu;
            goto label_4a531c;
        }
    }
    ctx->pc = 0x4A530Cu;
label_4a530c:
    // 0x4a530c: 0x40f809  jalr        $v0
label_4a5310:
    if (ctx->pc == 0x4A5310u) {
        ctx->pc = 0x4A5314u;
        goto label_4a5314;
    }
    ctx->pc = 0x4A530Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A5314u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A530Cu, 0x4A5314u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A5314u;
label_4a5314:
    // 0x4a5314: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4a5314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a5318:
    // 0x4a5318: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x4a5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_4a531c:
    // 0x4a531c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4a5320:
    if (ctx->pc == 0x4A5320u) {
        ctx->pc = 0x4A5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A531Cu;
        // 0x4a5320: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5324u;
        goto label_4a5324;
    }
    ctx->pc = 0x4A531Cu;
    {
        const bool branch_taken_0x4a531c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A531Cu;
        // 0x4a5320: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a531c) {
            ctx->pc = 0x4A5334u;
            goto label_4a5334;
        }
    }
    ctx->pc = 0x4A5324u;
label_4a5324:
    // 0x4a5324: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x4a5324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_4a5328:
    // 0x4a5328: 0x40f809  jalr        $v0
label_4a532c:
    if (ctx->pc == 0x4A532Cu) {
        ctx->pc = 0x4A5330u;
        goto label_4a5330;
    }
    ctx->pc = 0x4A5328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A5330u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5328u, 0x4A5330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A5330u;
label_4a5330:
    // 0x4a5330: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4a5330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4a5334:
    // 0x4a5334: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x4a5334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4a5338:
    // 0x4a5338: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4a533c:
    if (ctx->pc == 0x4A533Cu) {
        ctx->pc = 0x4A533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5338u;
        // 0x4a533c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5340u;
        goto label_4a5340;
    }
    ctx->pc = 0x4A5338u;
    {
        const bool branch_taken_0x4a5338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A533Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5338u;
        // 0x4a533c: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5338) {
            ctx->pc = 0x4A5354u;
            goto label_4a5354;
        }
    }
    ctx->pc = 0x4A5340u;
label_4a5340:
    // 0x4a5340: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x4a5340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_4a5344:
    // 0x4a5344: 0x40f809  jalr        $v0
label_4a5348:
    if (ctx->pc == 0x4A5348u) {
        ctx->pc = 0x4A534Cu;
        goto label_4a534c;
    }
    ctx->pc = 0x4A5344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A534Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A5344u, 0x4A534Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A534Cu;
label_4a534c:
    // 0x4a534c: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x4a534cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_4a5350:
    // 0x4a5350: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x4a5350u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_4a5354:
    // 0x4a5354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a5358:
    // 0x4a5358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a5358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a535c:
    // 0x4a535c: 0xc10c1fa  jal         func_4307E8
label_4a5360:
    if (ctx->pc == 0x4A5360u) {
        ctx->pc = 0x4A5360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A535Cu;
        // 0x4a5360: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5364u;
        goto label_4a5364;
    }
    ctx->pc = 0x4A535Cu;
    SET_GPR_U32(ctx, 31, 0x4A5364u);
    ctx->pc = 0x4A5360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A535Cu;
    // 0x4a5360: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4A535Cu, 0x4A5364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5364u;
label_4a5364:
    // 0x4a5364: 0x100000d1  b           . + 4 + (0xD1 << 2)
label_4a5368:
    if (ctx->pc == 0x4A5368u) {
        ctx->pc = 0x4A5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5364u;
        // 0x4a5368: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A536Cu;
        goto label_4a536c;
    }
    ctx->pc = 0x4A5364u;
    {
        const bool branch_taken_0x4a5364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5364u;
        // 0x4a5368: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5364) {
            ctx->pc = 0x4A56ACu;
            goto label_4a56ac;
        }
    }
    ctx->pc = 0x4A536Cu;
label_4a536c:
    // 0x4a536c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x4a536cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_4a5370:
    // 0x4a5370: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4a5374:
    if (ctx->pc == 0x4A5374u) {
        ctx->pc = 0x4A5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5370u;
        // 0x4a5374: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5378u;
        goto label_4a5378;
    }
    ctx->pc = 0x4A5370u;
    {
        const bool branch_taken_0x4a5370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5370u;
        // 0x4a5374: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5370) {
            ctx->pc = 0x4A538Cu;
            goto label_4a538c;
        }
    }
    ctx->pc = 0x4A5378u;
label_4a5378:
    // 0x4a5378: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x4a5378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_4a537c:
    // 0x4a537c: 0x40f809  jalr        $v0
label_4a5380:
    if (ctx->pc == 0x4A5380u) {
        ctx->pc = 0x4A5384u;
        goto label_4a5384;
    }
    ctx->pc = 0x4A537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A5384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A537Cu, 0x4A5384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A5384u;
label_4a5384:
    // 0x4a5384: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x4a5384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
label_4a5388:
    // 0x4a5388: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x4a5388u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_4a538c:
    // 0x4a538c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4a538cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a5390:
    // 0x4a5390: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x4a5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_4a5394:
    // 0x4a5394: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_4a5398:
    if (ctx->pc == 0x4A5398u) {
        ctx->pc = 0x4A5398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5394u;
        // 0x4a5398: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A539Cu;
        goto label_4a539c;
    }
    ctx->pc = 0x4A5394u;
    {
        const bool branch_taken_0x4a5394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5394) {
            ctx->pc = 0x4A5398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5394u;
            // 0x4a5398: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A53BCu;
            goto label_4a53bc;
        }
    }
    ctx->pc = 0x4A539Cu;
label_4a539c:
    // 0x4a539c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x4a539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_4a53a0:
    // 0x4a53a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4a53a4:
    if (ctx->pc == 0x4A53A4u) {
        ctx->pc = 0x4A53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A53A0u;
        // 0x4a53a4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A53A8u;
        goto label_4a53a8;
    }
    ctx->pc = 0x4A53A0u;
    {
        const bool branch_taken_0x4a53a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A53A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A53A0u;
        // 0x4a53a4: 0x3c030071  lui         $v1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a53a0) {
            ctx->pc = 0x4A53B8u;
            goto label_4a53b8;
        }
    }
    ctx->pc = 0x4A53A8u;
label_4a53a8:
    // 0x4a53a8: 0x8c62ae24  lw          $v0, -0x51DC($v1)
    ctx->pc = 0x4a53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946340)));
label_4a53ac:
    // 0x4a53ac: 0x40f809  jalr        $v0
label_4a53b0:
    if (ctx->pc == 0x4A53B0u) {
        ctx->pc = 0x4A53B4u;
        goto label_4a53b4;
    }
    ctx->pc = 0x4A53ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A53B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A53ACu, 0x4A53B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A53B4u;
label_4a53b4:
    // 0x4a53b4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4a53b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4a53b8:
    // 0x4a53b8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4a53b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a53bc:
    // 0x4a53bc: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x4a53bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_4a53c0:
    // 0x4a53c0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x4a53c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4a53c4:
    // 0x4a53c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a53c8:
    // 0x4a53c8: 0x2261023  subu        $v0, $s1, $a2
    ctx->pc = 0x4a53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_4a53cc:
    // 0x4a53cc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a53ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4a53d0:
    // 0x4a53d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4a53d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4a53d4:
    // 0x4a53d4: 0x248c3  sra         $t1, $v0, 3
    ctx->pc = 0x4a53d4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 3));
label_4a53d8:
    // 0x4a53d8: 0x124202b  sltu        $a0, $t1, $a0
    ctx->pc = 0x4a53d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4a53dc:
    // 0x4a53dc: 0x108000b2  beqz        $a0, . + 4 + (0xB2 << 2)
label_4a53e0:
    if (ctx->pc == 0x4A53E0u) {
        ctx->pc = 0x4A53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A53DCu;
        // 0x4a53e0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A53E4u;
        goto label_4a53e4;
    }
    ctx->pc = 0x4A53DCu;
    {
        const bool branch_taken_0x4a53dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A53E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A53DCu;
        // 0x4a53e0: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a53dc) {
            ctx->pc = 0x4A56A8u;
            goto label_4a56a8;
        }
    }
    ctx->pc = 0x4A53E4u;
label_4a53e4:
    // 0x4a53e4: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a53e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4a53e8:
    // 0x4a53e8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4a53e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a53ec:
    // 0x4a53ec: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x4a53ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a53f0:
    // 0x4a53f0: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x4a53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4a53f4:
    // 0x4a53f4: 0x921c0  sll         $a0, $t1, 7
    ctx->pc = 0x4a53f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
label_4a53f8:
    // 0x4a53f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a53f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a53fc:
    // 0x4a53fc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4a53fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4a5400:
    // 0x4a5400: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4a5400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4a5404:
    // 0x4a5404: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x4a5404u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4a5408:
    // 0x4a5408: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x4a5408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4a540c:
    // 0x4a540c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x4a540cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4a5410:
    // 0x4a5410: 0x24c40080  addiu       $a0, $a2, 0x80
    ctx->pc = 0x4a5410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_4a5414:
    // 0x4a5414: 0x0  nop
    ctx->pc = 0x4a5414u;
    // NOP
label_4a5418:
    // 0x4a5418: 0x861025  or          $v0, $a0, $a2
    ctx->pc = 0x4a5418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_4a541c:
    // 0x4a541c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4a541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_4a5420:
    // 0x4a5420: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_4a5424:
    if (ctx->pc == 0x4A5424u) {
        ctx->pc = 0x4A5424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5420u;
        // 0x4a5424: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5428u;
        goto label_4a5428;
    }
    ctx->pc = 0x4A5420u;
    {
        const bool branch_taken_0x4a5420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5420u;
        // 0x4a5424: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5420) {
            ctx->pc = 0x4A5484u;
            goto label_4a5484;
        }
    }
    ctx->pc = 0x4A5428u;
label_4a5428:
    // 0x4a5428: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x4a5428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4a542c:
    // 0x4a542c: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x4a542cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a5430:
    // 0x4a5430: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x4a5430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_4a5434:
    // 0x4a5434: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x4a5434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_4a5438:
    // 0x4a5438: 0x6867000f  ldl         $a3, 0xF($v1)
    ctx->pc = 0x4a5438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_4a543c:
    // 0x4a543c: 0x6c670008  ldr         $a3, 0x8($v1)
    ctx->pc = 0x4a543cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_4a5440:
    // 0x4a5440: 0x686b0017  ldl         $t3, 0x17($v1)
    ctx->pc = 0x4a5440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4a5444:
    // 0x4a5444: 0x6c6b0010  ldr         $t3, 0x10($v1)
    ctx->pc = 0x4a5444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4a5448:
    // 0x4a5448: 0x686c001f  ldl         $t4, 0x1F($v1)
    ctx->pc = 0x4a5448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_4a544c:
    // 0x4a544c: 0x6c6c0018  ldr         $t4, 0x18($v1)
    ctx->pc = 0x4a544cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4a5450:
    // 0x4a5450: 0xb0c50007  sdl         $a1, 0x7($a2)
    ctx->pc = 0x4a5450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5454:
    // 0x4a5454: 0xb4c50000  sdr         $a1, 0x0($a2)
    ctx->pc = 0x4a5454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5458:
    // 0x4a5458: 0xb0c7000f  sdl         $a3, 0xF($a2)
    ctx->pc = 0x4a5458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a545c:
    // 0x4a545c: 0xb4c70008  sdr         $a3, 0x8($a2)
    ctx->pc = 0x4a545cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5460:
    // 0x4a5460: 0xb0cb0017  sdl         $t3, 0x17($a2)
    ctx->pc = 0x4a5460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5464:
    // 0x4a5464: 0xb4cb0010  sdr         $t3, 0x10($a2)
    ctx->pc = 0x4a5464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5468:
    // 0x4a5468: 0xb0cc001f  sdl         $t4, 0x1F($a2)
    ctx->pc = 0x4a5468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a546c:
    // 0x4a546c: 0xb4cc0018  sdr         $t4, 0x18($a2)
    ctx->pc = 0x4a546cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5470:
    // 0x4a5470: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4a5470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_4a5474:
    // 0x4a5474: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_4a5478:
    if (ctx->pc == 0x4A5478u) {
        ctx->pc = 0x4A5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5474u;
        // 0x4a5478: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A547Cu;
        goto label_4a547c;
    }
    ctx->pc = 0x4A5474u;
    {
        const bool branch_taken_0x4a5474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A5478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5474u;
        // 0x4a5478: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5474) {
            ctx->pc = 0x4A5430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5430;
        }
    }
    ctx->pc = 0x4A547Cu;
label_4a547c:
    // 0x4a547c: 0x1000000f  b           . + 4 + (0xF << 2)
label_4a5480:
    if (ctx->pc == 0x4A5480u) {
        ctx->pc = 0x4A5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A547Cu;
        // 0x4a5480: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5484u;
        goto label_4a5484;
    }
    ctx->pc = 0x4A547Cu;
    {
        const bool branch_taken_0x4a547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A547Cu;
        // 0x4a5480: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a547c) {
            ctx->pc = 0x4A54BCu;
            goto label_4a54bc;
        }
    }
    ctx->pc = 0x4A5484u;
label_4a5484:
    // 0x4a5484: 0x24e80001  addiu       $t0, $a3, 0x1
    ctx->pc = 0x4a5484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4a5488:
    // 0x4a5488: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x4a5488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_4a548c:
    // 0x4a548c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x4a548cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_4a5490:
    // 0x4a5490: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x4a5490u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_4a5494:
    // 0x4a5494: 0xdc6b0010  ld          $t3, 0x10($v1)
    ctx->pc = 0x4a5494u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_4a5498:
    // 0x4a5498: 0xdc6c0018  ld          $t4, 0x18($v1)
    ctx->pc = 0x4a5498u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_4a549c:
    // 0x4a549c: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x4a549cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
label_4a54a0:
    // 0x4a54a0: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x4a54a0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
label_4a54a4:
    // 0x4a54a4: 0xfccb0010  sd          $t3, 0x10($a2)
    ctx->pc = 0x4a54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 11));
label_4a54a8:
    // 0x4a54a8: 0xfccc0018  sd          $t4, 0x18($a2)
    ctx->pc = 0x4a54a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 12));
label_4a54ac:
    // 0x4a54ac: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x4a54acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_4a54b0:
    // 0x4a54b0: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_4a54b4:
    if (ctx->pc == 0x4A54B4u) {
        ctx->pc = 0x4A54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A54B0u;
        // 0x4a54b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A54B8u;
        goto label_4a54b8;
    }
    ctx->pc = 0x4A54B0u;
    {
        const bool branch_taken_0x4a54b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A54B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A54B0u;
        // 0x4a54b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a54b0) {
            ctx->pc = 0x4A548Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a548c;
        }
    }
    ctx->pc = 0x4A54B8u;
label_4a54b8:
    // 0x4a54b8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4a54b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a54bc:
    // 0x4a54bc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4a54bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a54c0:
    // 0x4a54c0: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x4a54c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a54c4:
    // 0x4a54c4: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x4a54c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a54c8:
    // 0x4a54c8: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x4a54c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4a54cc:
    // 0x4a54cc: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
label_4a54d0:
    if (ctx->pc == 0x4A54D0u) {
        ctx->pc = 0x4A54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A54CCu;
        // 0x4a54d0: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A54D4u;
        goto label_4a54d4;
    }
    ctx->pc = 0x4A54CCu;
    {
        const bool branch_taken_0x4a54cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A54D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A54CCu;
        // 0x4a54d0: 0x24c40080  addiu       $a0, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a54cc) {
            ctx->pc = 0x4A5418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5418;
        }
    }
    ctx->pc = 0x4A54D4u;
label_4a54d4:
    // 0x4a54d4: 0x8f838a88  lw          $v1, -0x7578($gp)
    ctx->pc = 0x4a54d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937224)));
label_4a54d8:
    // 0x4a54d8: 0x2542ad18  addiu       $v0, $t2, -0x52E8
    ctx->pc = 0x4a54d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946072));
label_4a54dc:
    // 0x4a54dc: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4a54dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a54e0:
    // 0x4a54e0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4a54e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a54e4:
    // 0x4a54e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a54e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4a54e8:
    // 0x4a54e8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4a54e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4a54ec:
    // 0x4a54ec: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x4a54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_4a54f0:
    // 0x4a54f0: 0xe5282b  sltu        $a1, $a3, $a1
    ctx->pc = 0x4a54f0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_4a54f4:
    // 0x4a54f4: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4a54f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4a54f8:
    // 0x4a54f8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4a54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_4a54fc:
    // 0x4a54fc: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x4a54fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_4a5500:
    // 0x4a5500: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4a5500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_4a5504:
    // 0x4a5504: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_4a5508:
    if (ctx->pc == 0x4A5508u) {
        ctx->pc = 0x4A5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5504u;
        // 0x4a5508: 0x24c4000c  addiu       $a0, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A550Cu;
        goto label_4a550c;
    }
    ctx->pc = 0x4A5504u;
    {
        const bool branch_taken_0x4a5504 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5504u;
        // 0x4a5508: 0x24c4000c  addiu       $a0, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5504) {
            ctx->pc = 0x4A5544u;
            goto label_4a5544;
        }
    }
    ctx->pc = 0x4A550Cu;
label_4a550c:
    // 0x4a550c: 0x0  nop
    ctx->pc = 0x4a550cu;
    // NOP
label_4a5510:
    // 0x4a5510: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4a5510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a5514:
    // 0x4a5514: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4a5514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a5518:
    // 0x4a5518: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4a5518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4a551c:
    // 0x4a551c: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x4a551cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5520:
    // 0x4a5520: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x4a5520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5524:
    // 0x4a5524: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a5524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4a5528:
    // 0x4a5528: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x4a5528u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_4a552c:
    // 0x4a552c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a5530:
    // 0x4a5530: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4a5530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a5534:
    // 0x4a5534: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a5534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a5538:
    // 0x4a5538: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4a5538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a553c:
    // 0x4a553c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4a5540:
    if (ctx->pc == 0x4A5540u) {
        ctx->pc = 0x4A5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A553Cu;
        // 0x4a5540: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5544u;
        goto label_4a5544;
    }
    ctx->pc = 0x4A553Cu;
    {
        const bool branch_taken_0x4a553c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A5540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A553Cu;
        // 0x4a5540: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a553c) {
            ctx->pc = 0x4A5510u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5510;
        }
    }
    ctx->pc = 0x4A5544u;
label_4a5544:
    // 0x4a5544: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a5544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a5548:
    // 0x4a5548: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x4a5548u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4a554c:
    // 0x4a554c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a5550:
    // 0x4a5550: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4a5550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a5554:
    // 0x4a5554: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_4a5558:
    if (ctx->pc == 0x4A5558u) {
        ctx->pc = 0x4A5558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5554u;
        // 0x4a5558: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A555Cu;
        goto label_4a555c;
    }
    ctx->pc = 0x4A5554u;
    {
        const bool branch_taken_0x4a5554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5554u;
        // 0x4a5558: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5554) {
            ctx->pc = 0x4A55F8u;
            goto label_4a55f8;
        }
    }
    ctx->pc = 0x4A555Cu;
label_4a555c:
    // 0x4a555c: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x4a555cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4a5560:
    // 0x4a5560: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4a5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5564:
    // 0x4a5564: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a5564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_4a5568:
    // 0x4a5568: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4a5568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4a556c:
    // 0x4a556c: 0x684b002f  ldl         $t3, 0x2F($v0)
    ctx->pc = 0x4a556cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4a5570:
    // 0x4a5570: 0x6c4b0028  ldr         $t3, 0x28($v0)
    ctx->pc = 0x4a5570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4a5574:
    // 0x4a5574: 0x684c0037  ldl         $t4, 0x37($v0)
    ctx->pc = 0x4a5574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_4a5578:
    // 0x4a5578: 0x6c4c0030  ldr         $t4, 0x30($v0)
    ctx->pc = 0x4a5578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_4a557c:
    // 0x4a557c: 0x6843003f  ldl         $v1, 0x3F($v0)
    ctx->pc = 0x4a557cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a5580:
    // 0x4a5580: 0x6c430038  ldr         $v1, 0x38($v0)
    ctx->pc = 0x4a5580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a5584:
    // 0x4a5584: 0x68440047  ldl         $a0, 0x47($v0)
    ctx->pc = 0x4a5584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_4a5588:
    // 0x4a5588: 0x6c440040  ldr         $a0, 0x40($v0)
    ctx->pc = 0x4a5588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_4a558c:
    // 0x4a558c: 0xb04b0007  sdl         $t3, 0x7($v0)
    ctx->pc = 0x4a558cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5590:
    // 0x4a5590: 0xb44b0000  sdr         $t3, 0x0($v0)
    ctx->pc = 0x4a5590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5594:
    // 0x4a5594: 0xb04c000f  sdl         $t4, 0xF($v0)
    ctx->pc = 0x4a5594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a5598:
    // 0x4a5598: 0xb44c0008  sdr         $t4, 0x8($v0)
    ctx->pc = 0x4a5598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a559c:
    // 0x4a559c: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x4a559cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a55a0:
    // 0x4a55a0: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x4a55a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a55a4:
    // 0x4a55a4: 0xb044001f  sdl         $a0, 0x1F($v0)
    ctx->pc = 0x4a55a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a55a8:
    // 0x4a55a8: 0xb4440018  sdr         $a0, 0x18($v0)
    ctx->pc = 0x4a55a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a55ac:
    // 0x4a55ac: 0x684b004f  ldl         $t3, 0x4F($v0)
    ctx->pc = 0x4a55acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_4a55b0:
    // 0x4a55b0: 0x6c4b0048  ldr         $t3, 0x48($v0)
    ctx->pc = 0x4a55b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_4a55b4:
    // 0x4a55b4: 0xb04b0027  sdl         $t3, 0x27($v0)
    ctx->pc = 0x4a55b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a55b8:
    // 0x4a55b8: 0xb44b0020  sdr         $t3, 0x20($v0)
    ctx->pc = 0x4a55b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a55bc:
    // 0x4a55bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4a55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a55c0:
    // 0x4a55c0: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4a55c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_4a55c4:
    // 0x4a55c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4a55c8:
    // 0x4a55c8: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x4a55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_4a55cc:
    // 0x4a55cc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4a55ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_4a55d0:
    // 0x4a55d0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a55d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a55d4:
    // 0x4a55d4: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4a55d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4a55d8:
    // 0x4a55d8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x4a55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_4a55dc:
    // 0x4a55dc: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x4a55dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_4a55e0:
    // 0x4a55e0: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x4a55e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
label_4a55e4:
    // 0x4a55e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a55e8:
    // 0x4a55e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a55ec:
    // 0x4a55ec: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4a55ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a55f0:
    // 0x4a55f0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_4a55f4:
    if (ctx->pc == 0x4A55F4u) {
        ctx->pc = 0x4A55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A55F0u;
        // 0x4a55f4: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A55F8u;
        goto label_4a55f8;
    }
    ctx->pc = 0x4A55F0u;
    {
        const bool branch_taken_0x4a55f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A55F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A55F0u;
        // 0x4a55f4: 0x24a50028  addiu       $a1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a55f0) {
            ctx->pc = 0x4A5560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5560;
        }
    }
    ctx->pc = 0x4A55F8u;
label_4a55f8:
    // 0x4a55f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a55f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a55fc:
    // 0x4a55fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a5600:
    // 0x4a5600: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_4a5604:
    if (ctx->pc == 0x4A5604u) {
        ctx->pc = 0x4A5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5600u;
        // 0x4a5604: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5608u;
        goto label_4a5608;
    }
    ctx->pc = 0x4A5600u;
    {
        const bool branch_taken_0x4a5600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5600u;
        // 0x4a5604: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5600) {
            ctx->pc = 0x4A56A8u;
            goto label_4a56a8;
        }
    }
    ctx->pc = 0x4A5608u;
label_4a5608:
    // 0x4a5608: 0x240b0028  addiu       $t3, $zero, 0x28
    ctx->pc = 0x4a5608u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a560c:
    // 0x4a560c: 0x240a0028  addiu       $t2, $zero, 0x28
    ctx->pc = 0x4a560cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4a5610:
    // 0x4a5610: 0xeb1818  mult        $v1, $a3, $t3
    ctx->pc = 0x4a5610u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4a5614:
    // 0x4a5614: 0x0  nop
    ctx->pc = 0x4a5614u;
    // NOP
label_4a5618:
    // 0x4a5618: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a5618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a561c:
    // 0x4a561c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4a561cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5620:
    // 0x4a5620: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a5624:
    // 0x4a5624: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a5624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a5628:
    // 0x4a5628: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_4a562c:
    if (ctx->pc == 0x4A562Cu) {
        ctx->pc = 0x4A562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5628u;
        // 0x4a562c: 0x24e80001  addiu       $t0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5630u;
        goto label_4a5630;
    }
    ctx->pc = 0x4A5628u;
    {
        const bool branch_taken_0x4a5628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5628u;
        // 0x4a562c: 0x24e80001  addiu       $t0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5628) {
            ctx->pc = 0x4A5690u;
            goto label_4a5690;
        }
    }
    ctx->pc = 0x4A5630u;
label_4a5630:
    // 0x4a5630: 0xea2818  mult        $a1, $a3, $t2
    ctx->pc = 0x4a5630u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_4a5634:
    // 0x4a5634: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a5634u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_4a5638:
    // 0x4a5638: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a5638u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4a563c:
    // 0x4a563c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x4a563cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4a5640:
    // 0x4a5640: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a5640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4a5644:
    // 0x4a5644: 0x0  nop
    ctx->pc = 0x4a5644u;
    // NOP
label_4a5648:
    // 0x4a5648: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x4a5648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4a564c:
    // 0x4a564c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a564cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4a5650:
    // 0x4a5650: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a5650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a5654:
    // 0x4a5654: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x4a5654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_4a5658:
    // 0x4a5658: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_4a565c:
    if (ctx->pc == 0x4A565Cu) {
        ctx->pc = 0x4A565Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5658u;
        // 0x4a565c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5660u;
        goto label_4a5660;
    }
    ctx->pc = 0x4A5658u;
    {
        const bool branch_taken_0x4a5658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5658) {
            ctx->pc = 0x4A565Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5658u;
            // 0x4a565c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5678u;
            goto label_4a5678;
        }
    }
    ctx->pc = 0x4A5660u;
label_4a5660:
    // 0x4a5660: 0x14690003  bne         $v1, $t1, . + 4 + (0x3 << 2)
label_4a5664:
    if (ctx->pc == 0x4A5664u) {
        ctx->pc = 0x4A5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5660u;
        // 0x4a5664: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5668u;
        goto label_4a5668;
    }
    ctx->pc = 0x4A5660u;
    {
        const bool branch_taken_0x4a5660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 9));
        ctx->pc = 0x4A5664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5660u;
        // 0x4a5664: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5660) {
            ctx->pc = 0x4A5670u;
            goto label_4a5670;
        }
    }
    ctx->pc = 0x4A5668u;
label_4a5668:
    // 0x4a5668: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a566c:
    if (ctx->pc == 0x4A566Cu) {
        ctx->pc = 0x4A566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5668u;
        // 0x4a566c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5670u;
        goto label_4a5670;
    }
    ctx->pc = 0x4A5668u;
    {
        const bool branch_taken_0x4a5668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5668u;
        // 0x4a566c: 0xac870000  sw          $a3, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5668) {
            ctx->pc = 0x4A5674u;
            goto label_4a5674;
        }
    }
    ctx->pc = 0x4A5670u;
label_4a5670:
    // 0x4a5670: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a5670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4a5674:
    // 0x4a5674: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4a5674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5678:
    // 0x4a5678: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4a5678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_4a567c:
    // 0x4a567c: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x4a567cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_4a5680:
    // 0x4a5680: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4a5680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a5684:
    // 0x4a5684: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x4a5684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a5688:
    // 0x4a5688: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_4a568c:
    if (ctx->pc == 0x4A568Cu) {
        ctx->pc = 0x4A568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5688u;
        // 0x4a568c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A5690u;
        goto label_4a5690;
    }
    ctx->pc = 0x4A5688u;
    {
        const bool branch_taken_0x4a5688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5688) {
            ctx->pc = 0x4A568Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A5688u;
            // 0x4a568c: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A5648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5648;
        }
    }
    ctx->pc = 0x4A5690u;
label_4a5690:
    // 0x4a5690: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4a5690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a5694:
    // 0x4a5694: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x4a5694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a5698:
    // 0x4a5698: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a5698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a569c:
    // 0x4a569c: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4a569cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a56a0:
    // 0x4a56a0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_4a56a4:
    if (ctx->pc == 0x4A56A4u) {
        ctx->pc = 0x4A56A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A56A0u;
        // 0x4a56a4: 0xeb1818  mult        $v1, $a3, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A56A8u;
        goto label_4a56a8;
    }
    ctx->pc = 0x4A56A0u;
    {
        const bool branch_taken_0x4a56a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A56A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A56A0u;
        // 0x4a56a4: 0xeb1818  mult        $v1, $a3, $t3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a56a0) {
            ctx->pc = 0x4A5618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5618;
        }
    }
    ctx->pc = 0x4A56A8u;
label_4a56a8:
    // 0x4a56a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4a56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a56ac:
    // 0x4a56ac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a56acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a56b0:
    // 0x4a56b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a56b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a56b4:
    // 0x4a56b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a56b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a56b8:
    // 0x4a56b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a56b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a56bc:
    // 0x4a56bc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x4a56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_4a56c0:
    // 0x4a56c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a56c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a56c4:
    // 0x4a56c4: 0x3e00008  jr          $ra
label_4a56c8:
    if (ctx->pc == 0x4A56C8u) {
        ctx->pc = 0x4A56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A56C4u;
        // 0x4a56c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A56CCu;
        goto label_4a56cc;
    }
    ctx->pc = 0x4A56C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A56C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A56C4u;
        // 0x4a56c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A56C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A56CCu;
label_4a56cc:
    // 0x4a56cc: 0x0  nop
    ctx->pc = 0x4a56ccu;
    // NOP
label_4a56d0:
    // 0x4a56d0: 0xaf85c014  sw          $a1, -0x3FEC($gp)
    ctx->pc = 0x4a56d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950932), GPR_U32(ctx, 5));
label_4a56d4:
    // 0x4a56d4: 0x0  nop
    ctx->pc = 0x4a56d4u;
    // NOP
    ctx->pc = 0x4a56d8u;
}
