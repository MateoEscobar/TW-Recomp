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

// Function: sub_002A5430
// Address: 0x2a5430 - 0x2a57e8
void sub_002A5430_0x2a5430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5430_0x2a5430");
#endif

    switch (ctx->pc) {
        case 0x2a5430u: goto label_2a5430;
        case 0x2a5434u: goto label_2a5434;
        case 0x2a5438u: goto label_2a5438;
        case 0x2a543cu: goto label_2a543c;
        case 0x2a5440u: goto label_2a5440;
        case 0x2a5444u: goto label_2a5444;
        case 0x2a5448u: goto label_2a5448;
        case 0x2a544cu: goto label_2a544c;
        case 0x2a5450u: goto label_2a5450;
        case 0x2a5454u: goto label_2a5454;
        case 0x2a5458u: goto label_2a5458;
        case 0x2a545cu: goto label_2a545c;
        case 0x2a5460u: goto label_2a5460;
        case 0x2a5464u: goto label_2a5464;
        case 0x2a5468u: goto label_2a5468;
        case 0x2a546cu: goto label_2a546c;
        case 0x2a5470u: goto label_2a5470;
        case 0x2a5474u: goto label_2a5474;
        case 0x2a5478u: goto label_2a5478;
        case 0x2a547cu: goto label_2a547c;
        case 0x2a5480u: goto label_2a5480;
        case 0x2a5484u: goto label_2a5484;
        case 0x2a5488u: goto label_2a5488;
        case 0x2a548cu: goto label_2a548c;
        case 0x2a5490u: goto label_2a5490;
        case 0x2a5494u: goto label_2a5494;
        case 0x2a5498u: goto label_2a5498;
        case 0x2a549cu: goto label_2a549c;
        case 0x2a54a0u: goto label_2a54a0;
        case 0x2a54a4u: goto label_2a54a4;
        case 0x2a54a8u: goto label_2a54a8;
        case 0x2a54acu: goto label_2a54ac;
        case 0x2a54b0u: goto label_2a54b0;
        case 0x2a54b4u: goto label_2a54b4;
        case 0x2a54b8u: goto label_2a54b8;
        case 0x2a54bcu: goto label_2a54bc;
        case 0x2a54c0u: goto label_2a54c0;
        case 0x2a54c4u: goto label_2a54c4;
        case 0x2a54c8u: goto label_2a54c8;
        case 0x2a54ccu: goto label_2a54cc;
        case 0x2a54d0u: goto label_2a54d0;
        case 0x2a54d4u: goto label_2a54d4;
        case 0x2a54d8u: goto label_2a54d8;
        case 0x2a54dcu: goto label_2a54dc;
        case 0x2a54e0u: goto label_2a54e0;
        case 0x2a54e4u: goto label_2a54e4;
        case 0x2a54e8u: goto label_2a54e8;
        case 0x2a54ecu: goto label_2a54ec;
        case 0x2a54f0u: goto label_2a54f0;
        case 0x2a54f4u: goto label_2a54f4;
        case 0x2a54f8u: goto label_2a54f8;
        case 0x2a54fcu: goto label_2a54fc;
        case 0x2a5500u: goto label_2a5500;
        case 0x2a5504u: goto label_2a5504;
        case 0x2a5508u: goto label_2a5508;
        case 0x2a550cu: goto label_2a550c;
        case 0x2a5510u: goto label_2a5510;
        case 0x2a5514u: goto label_2a5514;
        case 0x2a5518u: goto label_2a5518;
        case 0x2a551cu: goto label_2a551c;
        case 0x2a5520u: goto label_2a5520;
        case 0x2a5524u: goto label_2a5524;
        case 0x2a5528u: goto label_2a5528;
        case 0x2a552cu: goto label_2a552c;
        case 0x2a5530u: goto label_2a5530;
        case 0x2a5534u: goto label_2a5534;
        case 0x2a5538u: goto label_2a5538;
        case 0x2a553cu: goto label_2a553c;
        case 0x2a5540u: goto label_2a5540;
        case 0x2a5544u: goto label_2a5544;
        case 0x2a5548u: goto label_2a5548;
        case 0x2a554cu: goto label_2a554c;
        case 0x2a5550u: goto label_2a5550;
        case 0x2a5554u: goto label_2a5554;
        case 0x2a5558u: goto label_2a5558;
        case 0x2a555cu: goto label_2a555c;
        case 0x2a5560u: goto label_2a5560;
        case 0x2a5564u: goto label_2a5564;
        case 0x2a5568u: goto label_2a5568;
        case 0x2a556cu: goto label_2a556c;
        case 0x2a5570u: goto label_2a5570;
        case 0x2a5574u: goto label_2a5574;
        case 0x2a5578u: goto label_2a5578;
        case 0x2a557cu: goto label_2a557c;
        case 0x2a5580u: goto label_2a5580;
        case 0x2a5584u: goto label_2a5584;
        case 0x2a5588u: goto label_2a5588;
        case 0x2a558cu: goto label_2a558c;
        case 0x2a5590u: goto label_2a5590;
        case 0x2a5594u: goto label_2a5594;
        case 0x2a5598u: goto label_2a5598;
        case 0x2a559cu: goto label_2a559c;
        case 0x2a55a0u: goto label_2a55a0;
        case 0x2a55a4u: goto label_2a55a4;
        case 0x2a55a8u: goto label_2a55a8;
        case 0x2a55acu: goto label_2a55ac;
        case 0x2a55b0u: goto label_2a55b0;
        case 0x2a55b4u: goto label_2a55b4;
        case 0x2a55b8u: goto label_2a55b8;
        case 0x2a55bcu: goto label_2a55bc;
        case 0x2a55c0u: goto label_2a55c0;
        case 0x2a55c4u: goto label_2a55c4;
        case 0x2a55c8u: goto label_2a55c8;
        case 0x2a55ccu: goto label_2a55cc;
        case 0x2a55d0u: goto label_2a55d0;
        case 0x2a55d4u: goto label_2a55d4;
        case 0x2a55d8u: goto label_2a55d8;
        case 0x2a55dcu: goto label_2a55dc;
        case 0x2a55e0u: goto label_2a55e0;
        case 0x2a55e4u: goto label_2a55e4;
        case 0x2a55e8u: goto label_2a55e8;
        case 0x2a55ecu: goto label_2a55ec;
        case 0x2a55f0u: goto label_2a55f0;
        case 0x2a55f4u: goto label_2a55f4;
        case 0x2a55f8u: goto label_2a55f8;
        case 0x2a55fcu: goto label_2a55fc;
        case 0x2a5600u: goto label_2a5600;
        case 0x2a5604u: goto label_2a5604;
        case 0x2a5608u: goto label_2a5608;
        case 0x2a560cu: goto label_2a560c;
        case 0x2a5610u: goto label_2a5610;
        case 0x2a5614u: goto label_2a5614;
        case 0x2a5618u: goto label_2a5618;
        case 0x2a561cu: goto label_2a561c;
        case 0x2a5620u: goto label_2a5620;
        case 0x2a5624u: goto label_2a5624;
        case 0x2a5628u: goto label_2a5628;
        case 0x2a562cu: goto label_2a562c;
        case 0x2a5630u: goto label_2a5630;
        case 0x2a5634u: goto label_2a5634;
        case 0x2a5638u: goto label_2a5638;
        case 0x2a563cu: goto label_2a563c;
        case 0x2a5640u: goto label_2a5640;
        case 0x2a5644u: goto label_2a5644;
        case 0x2a5648u: goto label_2a5648;
        case 0x2a564cu: goto label_2a564c;
        case 0x2a5650u: goto label_2a5650;
        case 0x2a5654u: goto label_2a5654;
        case 0x2a5658u: goto label_2a5658;
        case 0x2a565cu: goto label_2a565c;
        case 0x2a5660u: goto label_2a5660;
        case 0x2a5664u: goto label_2a5664;
        case 0x2a5668u: goto label_2a5668;
        case 0x2a566cu: goto label_2a566c;
        case 0x2a5670u: goto label_2a5670;
        case 0x2a5674u: goto label_2a5674;
        case 0x2a5678u: goto label_2a5678;
        case 0x2a567cu: goto label_2a567c;
        case 0x2a5680u: goto label_2a5680;
        case 0x2a5684u: goto label_2a5684;
        case 0x2a5688u: goto label_2a5688;
        case 0x2a568cu: goto label_2a568c;
        case 0x2a5690u: goto label_2a5690;
        case 0x2a5694u: goto label_2a5694;
        case 0x2a5698u: goto label_2a5698;
        case 0x2a569cu: goto label_2a569c;
        case 0x2a56a0u: goto label_2a56a0;
        case 0x2a56a4u: goto label_2a56a4;
        case 0x2a56a8u: goto label_2a56a8;
        case 0x2a56acu: goto label_2a56ac;
        case 0x2a56b0u: goto label_2a56b0;
        case 0x2a56b4u: goto label_2a56b4;
        case 0x2a56b8u: goto label_2a56b8;
        case 0x2a56bcu: goto label_2a56bc;
        case 0x2a56c0u: goto label_2a56c0;
        case 0x2a56c4u: goto label_2a56c4;
        case 0x2a56c8u: goto label_2a56c8;
        case 0x2a56ccu: goto label_2a56cc;
        case 0x2a56d0u: goto label_2a56d0;
        case 0x2a56d4u: goto label_2a56d4;
        case 0x2a56d8u: goto label_2a56d8;
        case 0x2a56dcu: goto label_2a56dc;
        case 0x2a56e0u: goto label_2a56e0;
        case 0x2a56e4u: goto label_2a56e4;
        case 0x2a56e8u: goto label_2a56e8;
        case 0x2a56ecu: goto label_2a56ec;
        case 0x2a56f0u: goto label_2a56f0;
        case 0x2a56f4u: goto label_2a56f4;
        case 0x2a56f8u: goto label_2a56f8;
        case 0x2a56fcu: goto label_2a56fc;
        case 0x2a5700u: goto label_2a5700;
        case 0x2a5704u: goto label_2a5704;
        case 0x2a5708u: goto label_2a5708;
        case 0x2a570cu: goto label_2a570c;
        case 0x2a5710u: goto label_2a5710;
        case 0x2a5714u: goto label_2a5714;
        case 0x2a5718u: goto label_2a5718;
        case 0x2a571cu: goto label_2a571c;
        case 0x2a5720u: goto label_2a5720;
        case 0x2a5724u: goto label_2a5724;
        case 0x2a5728u: goto label_2a5728;
        case 0x2a572cu: goto label_2a572c;
        case 0x2a5730u: goto label_2a5730;
        case 0x2a5734u: goto label_2a5734;
        case 0x2a5738u: goto label_2a5738;
        case 0x2a573cu: goto label_2a573c;
        case 0x2a5740u: goto label_2a5740;
        case 0x2a5744u: goto label_2a5744;
        case 0x2a5748u: goto label_2a5748;
        case 0x2a574cu: goto label_2a574c;
        case 0x2a5750u: goto label_2a5750;
        case 0x2a5754u: goto label_2a5754;
        case 0x2a5758u: goto label_2a5758;
        case 0x2a575cu: goto label_2a575c;
        case 0x2a5760u: goto label_2a5760;
        case 0x2a5764u: goto label_2a5764;
        case 0x2a5768u: goto label_2a5768;
        case 0x2a576cu: goto label_2a576c;
        case 0x2a5770u: goto label_2a5770;
        case 0x2a5774u: goto label_2a5774;
        case 0x2a5778u: goto label_2a5778;
        case 0x2a577cu: goto label_2a577c;
        case 0x2a5780u: goto label_2a5780;
        case 0x2a5784u: goto label_2a5784;
        case 0x2a5788u: goto label_2a5788;
        case 0x2a578cu: goto label_2a578c;
        case 0x2a5790u: goto label_2a5790;
        case 0x2a5794u: goto label_2a5794;
        case 0x2a5798u: goto label_2a5798;
        case 0x2a579cu: goto label_2a579c;
        case 0x2a57a0u: goto label_2a57a0;
        case 0x2a57a4u: goto label_2a57a4;
        case 0x2a57a8u: goto label_2a57a8;
        case 0x2a57acu: goto label_2a57ac;
        case 0x2a57b0u: goto label_2a57b0;
        case 0x2a57b4u: goto label_2a57b4;
        case 0x2a57b8u: goto label_2a57b8;
        case 0x2a57bcu: goto label_2a57bc;
        case 0x2a57c0u: goto label_2a57c0;
        case 0x2a57c4u: goto label_2a57c4;
        case 0x2a57c8u: goto label_2a57c8;
        case 0x2a57ccu: goto label_2a57cc;
        case 0x2a57d0u: goto label_2a57d0;
        case 0x2a57d4u: goto label_2a57d4;
        case 0x2a57d8u: goto label_2a57d8;
        case 0x2a57dcu: goto label_2a57dc;
        case 0x2a57e0u: goto label_2a57e0;
        case 0x2a57e4u: goto label_2a57e4;
        default: break;
    }

    ctx->pc = 0x2a5430u;

label_2a5430:
    // 0x2a5430: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a5430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2a5434:
    // 0x2a5434: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2a5434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_2a5438:
    // 0x2a5438: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2a5438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2a543c:
    // 0x2a543c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2a543cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a5440:
    // 0x2a5440: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2a5440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_2a5444:
    // 0x2a5444: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a5444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a5448:
    // 0x2a5448: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2a5448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_2a544c:
    // 0x2a544c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a544cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5450:
    // 0x2a5450: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a5450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a5454:
    // 0x2a5454: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2a5454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2a5458:
    // 0x2a5458: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a5458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a545c:
    // 0x2a545c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a545cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a5460:
    // 0x2a5460: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a5460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a5464:
    // 0x2a5464: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a5464u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a5468:
    // 0x2a5468: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a5468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a546c:
    // 0x2a546c: 0x60f809  jalr        $v1
label_2a5470:
    if (ctx->pc == 0x2A5470u) {
        ctx->pc = 0x2A5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A546Cu;
        // 0x2a5470: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5474u;
        goto label_2a5474;
    }
    ctx->pc = 0x2A546Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A5474u);
        ctx->pc = 0x2A5470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A546Cu;
        // 0x2a5470: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A546Cu, 0x2A5474u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A5474u;
label_2a5474:
    // 0x2a5474: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a5474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5478:
    // 0x2a5478: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a5478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a547c:
    // 0x2a547c: 0x24840124  addiu       $a0, $a0, 0x124
    ctx->pc = 0x2a547cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
label_2a5480:
    // 0x2a5480: 0xc0e409a  jal         func_390268
label_2a5484:
    if (ctx->pc == 0x2A5484u) {
        ctx->pc = 0x2A5484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5480u;
        // 0x2a5484: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5488u;
        goto label_2a5488;
    }
    ctx->pc = 0x2A5480u;
    SET_GPR_U32(ctx, 31, 0x2A5488u);
    ctx->pc = 0x2A5484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5480u;
    // 0x2a5484: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A5480u, 0x2A5488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5488u;
label_2a5488:
    // 0x2a5488: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a5488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a548c:
    // 0x2a548c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_2a5490:
    if (ctx->pc == 0x2A5490u) {
        ctx->pc = 0x2A5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A548Cu;
        // 0x2a5490: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5494u;
        goto label_2a5494;
    }
    ctx->pc = 0x2A548Cu;
    {
        const bool branch_taken_0x2a548c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A548Cu;
        // 0x2a5490: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a548c) {
            ctx->pc = 0x2A54BCu;
            goto label_2a54bc;
        }
    }
    ctx->pc = 0x2A5494u;
label_2a5494:
    // 0x2a5494: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2a5494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a5498:
    // 0x2a5498: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a5498u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a549c:
    // 0x2a549c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a54a0:
    // 0x2a54a0: 0x60f809  jalr        $v1
label_2a54a4:
    if (ctx->pc == 0x2A54A4u) {
        ctx->pc = 0x2A54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54A0u;
        // 0x2a54a4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A54A8u;
        goto label_2a54a8;
    }
    ctx->pc = 0x2A54A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A54A8u);
        ctx->pc = 0x2A54A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54A0u;
        // 0x2a54a4: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A54A0u, 0x2A54A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A54A8u;
label_2a54a8:
    // 0x2a54a8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2a54a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a54ac:
    // 0x2a54ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a54acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a54b0:
    // 0x2a54b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a54b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a54b4:
    // 0x2a54b4: 0xc0cdb62  jal         func_336D88
label_2a54b8:
    if (ctx->pc == 0x2A54B8u) {
        ctx->pc = 0x2A54B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54B4u;
        // 0x2a54b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A54BCu;
        goto label_2a54bc;
    }
    ctx->pc = 0x2A54B4u;
    SET_GPR_U32(ctx, 31, 0x2A54BCu);
    ctx->pc = 0x2A54B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A54B4u;
    // 0x2a54b8: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2A54B4u, 0x2A54BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A54BCu;
label_2a54bc:
    // 0x2a54bc: 0xc10587a  jal         func_4161E8
label_2a54c0:
    if (ctx->pc == 0x2A54C0u) {
        ctx->pc = 0x2A54C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54BCu;
        // 0x2a54c0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A54C4u;
        goto label_2a54c4;
    }
    ctx->pc = 0x2A54BCu;
    SET_GPR_U32(ctx, 31, 0x2A54C4u);
    ctx->pc = 0x2A54C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A54BCu;
    // 0x2a54c0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A54BCu, 0x2A54C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A54C4u;
label_2a54c4:
    // 0x2a54c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a54c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a54c8:
    // 0x2a54c8: 0xc0cdb62  jal         func_336D88
label_2a54cc:
    if (ctx->pc == 0x2A54CCu) {
        ctx->pc = 0x2A54CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54C8u;
        // 0x2a54cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A54D0u;
        goto label_2a54d0;
    }
    ctx->pc = 0x2A54C8u;
    SET_GPR_U32(ctx, 31, 0x2A54D0u);
    ctx->pc = 0x2A54CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A54C8u;
    // 0x2a54cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x2A54C8u, 0x2A54D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A54D0u;
label_2a54d0:
    // 0x2a54d0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a54d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a54d4:
    // 0x2a54d4: 0x86250024  lh          $a1, 0x24($s1)
    ctx->pc = 0x2a54d4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
label_2a54d8:
    // 0x2a54d8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2a54d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a54dc:
    // 0x2a54dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2a54dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a54e0:
    // 0x2a54e0: 0x2ca40005  sltiu       $a0, $a1, 0x5
    ctx->pc = 0x2a54e0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2a54e4:
    // 0x2a54e4: 0x108000b6  beqz        $a0, . + 4 + (0xB6 << 2)
label_2a54e8:
    if (ctx->pc == 0x2A54E8u) {
        ctx->pc = 0x2A54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54E4u;
        // 0x2a54e8: 0x8c660048  lw          $a2, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A54ECu;
        goto label_2a54ec;
    }
    ctx->pc = 0x2A54E4u;
    {
        const bool branch_taken_0x2a54e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A54E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A54E4u;
        // 0x2a54e8: 0x8c660048  lw          $a2, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a54e4) {
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A54ECu;
label_2a54ec:
    // 0x2a54ec: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2a54ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2a54f0:
    // 0x2a54f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2a54f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2a54f4:
    // 0x2a54f4: 0x244235b0  addiu       $v0, $v0, 0x35B0
    ctx->pc = 0x2a54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13744));
label_2a54f8:
    // 0x2a54f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a54f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2a54fc:
    // 0x2a54fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a54fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a5500:
    // 0x2a5500: 0x800008  jr          $a0
label_2a5504:
    if (ctx->pc == 0x2A5504u) {
        ctx->pc = 0x2A5508u;
        goto label_2a5508;
    }
    ctx->pc = 0x2A5500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A5508u: goto label_2a5508;
            case 0x2A5734u: goto label_2a5734;
            case 0x2A574Cu: goto label_2a574c;
            case 0x2A5774u: goto label_2a5774;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5500u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A5508u;
label_2a5508:
    // 0x2a5508: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a5508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a550c:
    // 0x2a550c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a550cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a5510:
    // 0x2a5510: 0x0  nop
    ctx->pc = 0x2a5510u;
    // NOP
label_2a5514:
    // 0x2a5514: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a5514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a5518:
    // 0x2a5518: 0x0  nop
    ctx->pc = 0x2a5518u;
    // NOP
label_2a551c:
    // 0x2a551c: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
label_2a5520:
    if (ctx->pc == 0x2A5520u) {
        ctx->pc = 0x2A5520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A551Cu;
        // 0x2a5520: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5524u;
        goto label_2a5524;
    }
    ctx->pc = 0x2A551Cu;
    {
        const bool branch_taken_0x2a551c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a551c) {
            ctx->pc = 0x2A5520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A551Cu;
            // 0x2a5520: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A5580u;
            goto label_2a5580;
        }
    }
    ctx->pc = 0x2A5524u;
label_2a5524:
    // 0x2a5524: 0xc0a367c  jal         func_28D9F0
label_2a5528:
    if (ctx->pc == 0x2A5528u) {
        ctx->pc = 0x2A5528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5524u;
        // 0x2a5528: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A552Cu;
        goto label_2a552c;
    }
    ctx->pc = 0x2A5524u;
    SET_GPR_U32(ctx, 31, 0x2A552Cu);
    ctx->pc = 0x2A5528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5524u;
    // 0x2a5528: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A5524u, 0x2A552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A552Cu;
label_2a552c:
    // 0x2a552c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a552cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5530:
    // 0x2a5530: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_2a5534:
    if (ctx->pc == 0x2A5534u) {
        ctx->pc = 0x2A5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5530u;
        // 0x2a5534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5538u;
        goto label_2a5538;
    }
    ctx->pc = 0x2A5530u;
    {
        const bool branch_taken_0x2a5530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5530u;
        // 0x2a5534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5530) {
            ctx->pc = 0x2A5578u;
            goto label_2a5578;
        }
    }
    ctx->pc = 0x2A5538u;
label_2a5538:
    // 0x2a5538: 0xc10587a  jal         func_4161E8
label_2a553c:
    if (ctx->pc == 0x2A553Cu) {
        ctx->pc = 0x2A553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5538u;
        // 0x2a553c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5540u;
        goto label_2a5540;
    }
    ctx->pc = 0x2A5538u;
    SET_GPR_U32(ctx, 31, 0x2A5540u);
    ctx->pc = 0x2A553Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5538u;
    // 0x2a553c: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A5538u, 0x2A5540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5540u;
label_2a5540:
    // 0x2a5540: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a5540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a5544:
    // 0x2a5544: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a5544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5548:
    // 0x2a5548: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2a5548u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a554c:
    // 0x2a554c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a554cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5550:
    // 0x2a5550: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2a5550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2a5554:
    // 0x2a5554: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a5554u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2a5558:
    // 0x2a5558: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a5558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a555c:
    // 0x2a555c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a555cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a5560:
    // 0x2a5560: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a5560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a5564:
    // 0x2a5564: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a5564u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a5568:
    // 0x2a5568: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a5568u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a556c:
    // 0x2a556c: 0xc0bee7a  jal         func_2FB9E8
label_2a5570:
    if (ctx->pc == 0x2A5570u) {
        ctx->pc = 0x2A5570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A556Cu;
        // 0x2a5570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5574u;
        goto label_2a5574;
    }
    ctx->pc = 0x2A556Cu;
    SET_GPR_U32(ctx, 31, 0x2A5574u);
    ctx->pc = 0x2A5570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A556Cu;
    // 0x2a5570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A556Cu, 0x2A5574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5574u;
label_2a5574:
    // 0x2a5574: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5578:
    // 0x2a5578: 0x10000091  b           . + 4 + (0x91 << 2)
label_2a557c:
    if (ctx->pc == 0x2A557Cu) {
        ctx->pc = 0x2A557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5578u;
        // 0x2a557c: 0xa6220024  sh          $v0, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5580u;
        goto label_2a5580;
    }
    ctx->pc = 0x2A5578u;
    {
        const bool branch_taken_0x2a5578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5578u;
        // 0x2a557c: 0xa6220024  sh          $v0, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5578) {
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A5580u;
label_2a5580:
    // 0x2a5580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a5584:
    if (ctx->pc == 0x2A5584u) {
        ctx->pc = 0x2A5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5580u;
        // 0x2a5584: 0x46102b  sltu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5588u;
        goto label_2a5588;
    }
    ctx->pc = 0x2A5580u;
    {
        const bool branch_taken_0x2a5580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5580u;
        // 0x2a5584: 0x46102b  sltu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5580) {
            ctx->pc = 0x2A5598u;
            goto label_2a5598;
        }
    }
    ctx->pc = 0x2A5588u;
label_2a5588:
    // 0x2a5588: 0x5440008d  bnel        $v0, $zero, . + 4 + (0x8D << 2)
label_2a558c:
    if (ctx->pc == 0x2A558Cu) {
        ctx->pc = 0x2A558Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5588u;
        // 0x2a558c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5590u;
        goto label_2a5590;
    }
    ctx->pc = 0x2A5588u;
    {
        const bool branch_taken_0x2a5588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a5588) {
            ctx->pc = 0x2A558Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5588u;
            // 0x2a558c: 0xae20002c  sw          $zero, 0x2C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A5590u;
label_2a5590:
    // 0x2a5590: 0x1000008c  b           . + 4 + (0x8C << 2)
label_2a5594:
    if (ctx->pc == 0x2A5594u) {
        ctx->pc = 0x2A5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5590u;
        // 0x2a5594: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5598u;
        goto label_2a5598;
    }
    ctx->pc = 0x2A5590u;
    {
        const bool branch_taken_0x2a5590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5590u;
        // 0x2a5594: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5590) {
            ctx->pc = 0x2A57C4u;
            goto label_2a57c4;
        }
    }
    ctx->pc = 0x2A5598u;
label_2a5598:
    // 0x2a5598: 0x96220026  lhu         $v0, 0x26($s1)
    ctx->pc = 0x2a5598u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
label_2a559c:
    // 0x2a559c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a559cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a55a0:
    // 0x2a55a0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2a55a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2a55a4:
    // 0x2a55a4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2a55a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2a55a8:
    // 0x2a55a8: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x2a55a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2a55ac:
    // 0x2a55ac: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2a55b0:
    if (ctx->pc == 0x2A55B0u) {
        ctx->pc = 0x2A55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55ACu;
        // 0x2a55b0: 0xa6220026  sh          $v0, 0x26($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A55B4u;
        goto label_2a55b4;
    }
    ctx->pc = 0x2A55ACu;
    {
        const bool branch_taken_0x2a55ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A55B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55ACu;
        // 0x2a55b0: 0xa6220026  sh          $v0, 0x26($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55ac) {
            ctx->pc = 0x2A55B8u;
            goto label_2a55b8;
        }
    }
    ctx->pc = 0x2A55B4u;
label_2a55b4:
    // 0x2a55b4: 0xa6200026  sh          $zero, 0x26($s1)
    ctx->pc = 0x2a55b4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 38), (uint16_t)GPR_U32(ctx, 0));
label_2a55b8:
    // 0x2a55b8: 0x86230026  lh          $v1, 0x26($s1)
    ctx->pc = 0x2a55b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
label_2a55bc:
    // 0x2a55bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a55bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a55c0:
    // 0x2a55c0: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_2a55c4:
    if (ctx->pc == 0x2A55C4u) {
        ctx->pc = 0x2A55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55C0u;
        // 0x2a55c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A55C8u;
        goto label_2a55c8;
    }
    ctx->pc = 0x2A55C0u;
    {
        const bool branch_taken_0x2a55c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A55C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55C0u;
        // 0x2a55c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55c0) {
            ctx->pc = 0x2A56C4u;
            goto label_2a56c4;
        }
    }
    ctx->pc = 0x2A55C8u;
label_2a55c8:
    // 0x2a55c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a55cc:
    if (ctx->pc == 0x2A55CCu) {
        ctx->pc = 0x2A55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55C8u;
        // 0x2a55cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A55D0u;
        goto label_2a55d0;
    }
    ctx->pc = 0x2A55C8u;
    {
        const bool branch_taken_0x2a55c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A55CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55C8u;
        // 0x2a55cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55c8) {
            ctx->pc = 0x2A55E0u;
            goto label_2a55e0;
        }
    }
    ctx->pc = 0x2A55D0u;
label_2a55d0:
    // 0x2a55d0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2a55d4:
    if (ctx->pc == 0x2A55D4u) {
        ctx->pc = 0x2A55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55D0u;
        // 0x2a55d4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A55D8u;
        goto label_2a55d8;
    }
    ctx->pc = 0x2A55D0u;
    {
        const bool branch_taken_0x2a55d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A55D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55D0u;
        // 0x2a55d4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55d0) {
            ctx->pc = 0x2A55F0u;
            goto label_2a55f0;
        }
    }
    ctx->pc = 0x2A55D8u;
label_2a55d8:
    // 0x2a55d8: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2a55dc:
    if (ctx->pc == 0x2A55DCu) {
        ctx->pc = 0x2A55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55D8u;
        // 0x2a55dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A55E0u;
        goto label_2a55e0;
    }
    ctx->pc = 0x2A55D8u;
    {
        const bool branch_taken_0x2a55d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A55DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55D8u;
        // 0x2a55dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55d8) {
            ctx->pc = 0x2A57C8u;
            goto label_2a57c8;
        }
    }
    ctx->pc = 0x2A55E0u;
label_2a55e0:
    // 0x2a55e0: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
label_2a55e4:
    if (ctx->pc == 0x2A55E4u) {
        ctx->pc = 0x2A55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55E0u;
        // 0x2a55e4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A55E8u;
        goto label_2a55e8;
    }
    ctx->pc = 0x2A55E0u;
    {
        const bool branch_taken_0x2a55e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55E0u;
        // 0x2a55e4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55e0) {
            ctx->pc = 0x2A572Cu;
            goto label_2a572c;
        }
    }
    ctx->pc = 0x2A55E8u;
label_2a55e8:
    // 0x2a55e8: 0x10000077  b           . + 4 + (0x77 << 2)
label_2a55ec:
    if (ctx->pc == 0x2A55ECu) {
        ctx->pc = 0x2A55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55E8u;
        // 0x2a55ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A55F0u;
        goto label_2a55f0;
    }
    ctx->pc = 0x2A55E8u;
    {
        const bool branch_taken_0x2a55e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A55ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55E8u;
        // 0x2a55ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a55e8) {
            ctx->pc = 0x2A57C8u;
            goto label_2a57c8;
        }
    }
    ctx->pc = 0x2A55F0u;
label_2a55f0:
    // 0x2a55f0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a55f4:
    // 0x2a55f4: 0xc0cd4e4  jal         func_335390
label_2a55f8:
    if (ctx->pc == 0x2A55F8u) {
        ctx->pc = 0x2A55F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A55F4u;
        // 0x2a55f8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A55FCu;
        goto label_2a55fc;
    }
    ctx->pc = 0x2A55F4u;
    SET_GPR_U32(ctx, 31, 0x2A55FCu);
    ctx->pc = 0x2A55F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A55F4u;
    // 0x2a55f8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A55F4u, 0x2A55FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A55FCu;
label_2a55fc:
    // 0x2a55fc: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x2a55fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
label_2a5600:
    // 0x2a5600: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a5600u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a5604:
    // 0x2a5604: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a5608:
    if (ctx->pc == 0x2A5608u) {
        ctx->pc = 0x2A5608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5604u;
        // 0x2a5608: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A560Cu;
        goto label_2a560c;
    }
    ctx->pc = 0x2A5604u;
    {
        const bool branch_taken_0x2a5604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a5604) {
            ctx->pc = 0x2A5608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A5604u;
            // 0x2a5608: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A560Cu;
            goto label_2a560c;
        }
    }
    ctx->pc = 0x2A560Cu;
label_2a560c:
    // 0x2a560c: 0x1010  mfhi        $v0
    ctx->pc = 0x2a560cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2a5610:
    // 0x2a5610: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2a5614:
    if (ctx->pc == 0x2A5614u) {
        ctx->pc = 0x2A5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5610u;
        // 0x2a5614: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5618u;
        goto label_2a5618;
    }
    ctx->pc = 0x2A5610u;
    {
        const bool branch_taken_0x2a5610 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2A5614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5610u;
        // 0x2a5614: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5610) {
            ctx->pc = 0x2A562Cu;
            goto label_2a562c;
        }
    }
    ctx->pc = 0x2A5618u;
label_2a5618:
    // 0x2a5618: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2a5618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a561c:
    // 0x2a561c: 0x0  nop
    ctx->pc = 0x2a561cu;
    // NOP
label_2a5620:
    // 0x2a5620: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2a5620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2a5624:
    // 0x2a5624: 0x10000008  b           . + 4 + (0x8 << 2)
label_2a5628:
    if (ctx->pc == 0x2A5628u) {
        ctx->pc = 0x2A5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5624u;
        // 0x2a5628: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A562Cu;
        goto label_2a562c;
    }
    ctx->pc = 0x2A5624u;
    {
        const bool branch_taken_0x2a5624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5624u;
        // 0x2a5628: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5624) {
            ctx->pc = 0x2A5648u;
            goto label_2a5648;
        }
    }
    ctx->pc = 0x2A562Cu;
label_2a562c:
    // 0x2a562c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2a5630:
    // 0x2a5630: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2a5634:
    // 0x2a5634: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2a5634u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2a5638:
    // 0x2a5638: 0x0  nop
    ctx->pc = 0x2a5638u;
    // NOP
label_2a563c:
    // 0x2a563c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x2a563cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_2a5640:
    // 0x2a5640: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x2a5640u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2a5644:
    // 0x2a5644: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2a5644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2a5648:
    // 0x2a5648: 0xc10587a  jal         func_4161E8
label_2a564c:
    if (ctx->pc == 0x2A564Cu) {
        ctx->pc = 0x2A564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5648u;
        // 0x2a564c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5650u;
        goto label_2a5650;
    }
    ctx->pc = 0x2A5648u;
    SET_GPR_U32(ctx, 31, 0x2A5650u);
    ctx->pc = 0x2A564Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5648u;
    // 0x2a564c: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A5648u, 0x2A5650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5650u;
label_2a5650:
    // 0x2a5650: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a5650u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a5654:
    // 0x2a5654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a5654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5658:
    // 0x2a5658: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a5658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_2a565c:
    // 0x2a565c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2a565cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2a5660:
    // 0x2a5660: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a5660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a5664:
    // 0x2a5664: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2a5664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2a5668:
    // 0x2a5668: 0xc0cdde2  jal         func_337788
label_2a566c:
    if (ctx->pc == 0x2A566Cu) {
        ctx->pc = 0x2A566Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5668u;
        // 0x2a566c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5670u;
        goto label_2a5670;
    }
    ctx->pc = 0x2A5668u;
    SET_GPR_U32(ctx, 31, 0x2A5670u);
    ctx->pc = 0x2A566Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5668u;
    // 0x2a566c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337788u, 0x2A5668u, 0x2A5670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5670u;
label_2a5670:
    // 0x2a5670: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x2a5670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2a5674:
    // 0x2a5674: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2a5674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2a5678:
    // 0x2a5678: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a5678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a567c:
    // 0x2a567c: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x2a567cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_2a5680:
    // 0x2a5680: 0xc0a367c  jal         func_28D9F0
label_2a5684:
    if (ctx->pc == 0x2A5684u) {
        ctx->pc = 0x2A5684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5680u;
        // 0x2a5684: 0xa6230024  sh          $v1, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5688u;
        goto label_2a5688;
    }
    ctx->pc = 0x2A5680u;
    SET_GPR_U32(ctx, 31, 0x2A5688u);
    ctx->pc = 0x2A5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5680u;
    // 0x2a5684: 0xa6230024  sh          $v1, 0x24($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A5680u, 0x2A5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5688u;
label_2a5688:
    // 0x2a5688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a568c:
    // 0x2a568c: 0x1080004c  beqz        $a0, . + 4 + (0x4C << 2)
label_2a5690:
    if (ctx->pc == 0x2A5690u) {
        ctx->pc = 0x2A5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A568Cu;
        // 0x2a5690: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5694u;
        goto label_2a5694;
    }
    ctx->pc = 0x2A568Cu;
    {
        const bool branch_taken_0x2a568c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A568Cu;
        // 0x2a5690: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a568c) {
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A5694u;
label_2a5694:
    // 0x2a5694: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a5694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5698:
    // 0x2a5698: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2a5698u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2a569c:
    // 0x2a569c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x2a569cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2a56a0:
    // 0x2a56a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a56a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2a56a4:
    // 0x2a56a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a56a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a56a8:
    // 0x2a56a8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2a56a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a56ac:
    // 0x2a56ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a56acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a56b0:
    // 0x2a56b0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a56b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a56b4:
    // 0x2a56b4: 0xc0bee7a  jal         func_2FB9E8
label_2a56b8:
    if (ctx->pc == 0x2A56B8u) {
        ctx->pc = 0x2A56B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56B4u;
        // 0x2a56b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A56BCu;
        goto label_2a56bc;
    }
    ctx->pc = 0x2A56B4u;
    SET_GPR_U32(ctx, 31, 0x2A56BCu);
    ctx->pc = 0x2A56B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A56B4u;
    // 0x2a56b8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A56B4u, 0x2A56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A56BCu;
label_2a56bc:
    // 0x2a56bc: 0x10000041  b           . + 4 + (0x41 << 2)
label_2a56c0:
    if (ctx->pc == 0x2A56C0u) {
        ctx->pc = 0x2A56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56BCu;
        // 0x2a56c0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A56C4u;
        goto label_2a56c4;
    }
    ctx->pc = 0x2A56BCu;
    {
        const bool branch_taken_0x2a56bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56BCu;
        // 0x2a56c0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56bc) {
            ctx->pc = 0x2A57C4u;
            goto label_2a57c4;
        }
    }
    ctx->pc = 0x2A56C4u;
label_2a56c4:
    // 0x2a56c4: 0x8ce2b734  lw          $v0, -0x48CC($a3)
    ctx->pc = 0x2a56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948660)));
label_2a56c8:
    // 0x2a56c8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a56c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a56cc:
    // 0x2a56cc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2a56ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a56d0:
    // 0x2a56d0: 0xa6240024  sh          $a0, 0x24($s1)
    ctx->pc = 0x2a56d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 4));
label_2a56d4:
    // 0x2a56d4: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x2a56d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
label_2a56d8:
    // 0x2a56d8: 0x12600039  beqz        $s3, . + 4 + (0x39 << 2)
label_2a56dc:
    if (ctx->pc == 0x2A56DCu) {
        ctx->pc = 0x2A56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56D8u;
        // 0x2a56dc: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A56E0u;
        goto label_2a56e0;
    }
    ctx->pc = 0x2A56D8u;
    {
        const bool branch_taken_0x2a56d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56D8u;
        // 0x2a56dc: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56d8) {
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A56E0u;
label_2a56e0:
    // 0x2a56e0: 0xc0a367c  jal         func_28D9F0
label_2a56e4:
    if (ctx->pc == 0x2A56E4u) {
        ctx->pc = 0x2A56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56E0u;
        // 0x2a56e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A56E8u;
        goto label_2a56e8;
    }
    ctx->pc = 0x2A56E0u;
    SET_GPR_U32(ctx, 31, 0x2A56E8u);
    ctx->pc = 0x2A56E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A56E0u;
    // 0x2a56e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A56E0u, 0x2A56E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A56E8u;
label_2a56e8:
    // 0x2a56e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a56e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a56ec:
    // 0x2a56ec: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
label_2a56f0:
    if (ctx->pc == 0x2A56F0u) {
        ctx->pc = 0x2A56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56ECu;
        // 0x2a56f0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A56F4u;
        goto label_2a56f4;
    }
    ctx->pc = 0x2A56ECu;
    {
        const bool branch_taken_0x2a56ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A56F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A56ECu;
        // 0x2a56f0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a56ec) {
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A56F4u;
label_2a56f4:
    // 0x2a56f4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a56f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a56f8:
    // 0x2a56f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a56f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a56fc:
    // 0x2a56fc: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a56fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a5700:
    // 0x2a5700: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2a5700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a5704:
    // 0x2a5704: 0x40f809  jalr        $v0
label_2a5708:
    if (ctx->pc == 0x2A5708u) {
        ctx->pc = 0x2A5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5704u;
        // 0x2a5708: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A570Cu;
        goto label_2a570c;
    }
    ctx->pc = 0x2A5704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A570Cu);
        ctx->pc = 0x2A5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5704u;
        // 0x2a5708: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5704u, 0x2A570Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A570Cu;
label_2a570c:
    // 0x2a570c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a570cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5710:
    // 0x2a5710: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a5710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a5714:
    // 0x2a5714: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a5714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a5718:
    // 0x2a5718: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a5718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2a571c:
    // 0x2a571c: 0xc0bf800  jal         func_2FE000
label_2a5720:
    if (ctx->pc == 0x2A5720u) {
        ctx->pc = 0x2A5720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A571Cu;
        // 0x2a5720: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5724u;
        goto label_2a5724;
    }
    ctx->pc = 0x2A571Cu;
    SET_GPR_U32(ctx, 31, 0x2A5724u);
    ctx->pc = 0x2A5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A571Cu;
    // 0x2a5720: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2A571Cu, 0x2A5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5724u;
label_2a5724:
    // 0x2a5724: 0x10000027  b           . + 4 + (0x27 << 2)
label_2a5728:
    if (ctx->pc == 0x2A5728u) {
        ctx->pc = 0x2A5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5724u;
        // 0x2a5728: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A572Cu;
        goto label_2a572c;
    }
    ctx->pc = 0x2A5724u;
    {
        const bool branch_taken_0x2a5724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5724u;
        // 0x2a5728: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5724) {
            ctx->pc = 0x2A57C4u;
            goto label_2a57c4;
        }
    }
    ctx->pc = 0x2A572Cu;
label_2a572c:
    // 0x2a572c: 0x10000024  b           . + 4 + (0x24 << 2)
label_2a5730:
    if (ctx->pc == 0x2A5730u) {
        ctx->pc = 0x2A5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A572Cu;
        // 0x2a5730: 0xa6230024  sh          $v1, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5734u;
        goto label_2a5734;
    }
    ctx->pc = 0x2A572Cu;
    {
        const bool branch_taken_0x2a572c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A572Cu;
        // 0x2a5730: 0xa6230024  sh          $v1, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a572c) {
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A5734u;
label_2a5734:
    // 0x2a5734: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2a5734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2a5738:
    // 0x2a5738: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2a5738u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2a573c:
    // 0x2a573c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2a5740:
    if (ctx->pc == 0x2A5740u) {
        ctx->pc = 0x2A5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A573Cu;
        // 0x2a5740: 0x8ce3b734  lw          $v1, -0x48CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5744u;
        goto label_2a5744;
    }
    ctx->pc = 0x2A573Cu;
    {
        const bool branch_taken_0x2a573c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A573Cu;
        // 0x2a5740: 0x8ce3b734  lw          $v1, -0x48CC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a573c) {
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A5744u;
label_2a5744:
    // 0x2a5744: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a5748:
    if (ctx->pc == 0x2A5748u) {
        ctx->pc = 0x2A5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5744u;
        // 0x2a5748: 0xa6200024  sh          $zero, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A574Cu;
        goto label_2a574c;
    }
    ctx->pc = 0x2A5744u;
    {
        const bool branch_taken_0x2a5744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5744u;
        // 0x2a5748: 0xa6200024  sh          $zero, 0x24($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5744) {
            ctx->pc = 0x2A5764u;
            goto label_2a5764;
        }
    }
    ctx->pc = 0x2A574Cu;
label_2a574c:
    // 0x2a574c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5750:
    // 0x2a5750: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a5750u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a5754:
    // 0x2a5754: 0x1c60001b  bgtz        $v1, . + 4 + (0x1B << 2)
label_2a5758:
    if (ctx->pc == 0x2A5758u) {
        ctx->pc = 0x2A5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5754u;
        // 0x2a5758: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A575Cu;
        goto label_2a575c;
    }
    ctx->pc = 0x2A5754u;
    {
        const bool branch_taken_0x2a5754 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A5758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5754u;
        // 0x2a5758: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5754) {
            ctx->pc = 0x2A57C4u;
            goto label_2a57c4;
        }
    }
    ctx->pc = 0x2A575Cu;
label_2a575c:
    // 0x2a575c: 0x8ce3b734  lw          $v1, -0x48CC($a3)
    ctx->pc = 0x2a575cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948660)));
label_2a5760:
    // 0x2a5760: 0xa6200024  sh          $zero, 0x24($s1)
    ctx->pc = 0x2a5760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 0));
label_2a5764:
    // 0x2a5764: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2a5764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a5768:
    // 0x2a5768: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x2a5768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
label_2a576c:
    // 0x2a576c: 0x10000014  b           . + 4 + (0x14 << 2)
label_2a5770:
    if (ctx->pc == 0x2A5770u) {
        ctx->pc = 0x2A5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A576Cu;
        // 0x2a5770: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5774u;
        goto label_2a5774;
    }
    ctx->pc = 0x2A576Cu;
    {
        const bool branch_taken_0x2a576c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A5770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A576Cu;
        // 0x2a5770: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a576c) {
            ctx->pc = 0x2A57C0u;
            goto label_2a57c0;
        }
    }
    ctx->pc = 0x2A5774u;
label_2a5774:
    // 0x2a5774: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a5774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a5778:
    // 0x2a5778: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a5778u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a577c:
    // 0x2a577c: 0x1c600011  bgtz        $v1, . + 4 + (0x11 << 2)
label_2a5780:
    if (ctx->pc == 0x2A5780u) {
        ctx->pc = 0x2A5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A577Cu;
        // 0x2a5780: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A5784u;
        goto label_2a5784;
    }
    ctx->pc = 0x2A577Cu;
    {
        const bool branch_taken_0x2a577c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2A5780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A577Cu;
        // 0x2a5780: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a577c) {
            ctx->pc = 0x2A57C4u;
            goto label_2a57c4;
        }
    }
    ctx->pc = 0x2A5784u;
label_2a5784:
    // 0x2a5784: 0x8ce3b734  lw          $v1, -0x48CC($a3)
    ctx->pc = 0x2a5784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294948660)));
label_2a5788:
    // 0x2a5788: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a5788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a578c:
    // 0x2a578c: 0xa6220024  sh          $v0, 0x24($s1)
    ctx->pc = 0x2a578cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 36), (uint16_t)GPR_U32(ctx, 2));
label_2a5790:
    // 0x2a5790: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a5790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a5794:
    // 0x2a5794: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2a5794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
label_2a5798:
    // 0x2a5798: 0xc0cd4e4  jal         func_335390
label_2a579c:
    if (ctx->pc == 0x2A579Cu) {
        ctx->pc = 0x2A579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5798u;
        // 0x2a579c: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A57A0u;
        goto label_2a57a0;
    }
    ctx->pc = 0x2A5798u;
    SET_GPR_U32(ctx, 31, 0x2A57A0u);
    ctx->pc = 0x2A579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5798u;
    // 0x2a579c: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A5798u, 0x2A57A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A57A0u;
label_2a57a0:
    // 0x2a57a0: 0x240307d0  addiu       $v1, $zero, 0x7D0
    ctx->pc = 0x2a57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
label_2a57a4:
    // 0x2a57a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a57a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a57a8:
    // 0x2a57a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a57ac:
    if (ctx->pc == 0x2A57ACu) {
        ctx->pc = 0x2A57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57A8u;
        // 0x2a57ac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A57B0u;
        goto label_2a57b0;
    }
    ctx->pc = 0x2A57A8u;
    {
        const bool branch_taken_0x2a57a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a57a8) {
            ctx->pc = 0x2A57ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A57A8u;
            // 0x2a57ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A57B0u;
            goto label_2a57b0;
        }
    }
    ctx->pc = 0x2A57B0u;
label_2a57b0:
    // 0x2a57b0: 0x2010  mfhi        $a0
    ctx->pc = 0x2a57b0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a57b4:
    // 0x2a57b4: 0x248403e8  addiu       $a0, $a0, 0x3E8
    ctx->pc = 0x2a57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1000));
label_2a57b8:
    // 0x2a57b8: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2a57b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2a57bc:
    // 0x2a57bc: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x2a57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
label_2a57c0:
    // 0x2a57c0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2a57c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a57c4:
    // 0x2a57c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a57c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a57c8:
    // 0x2a57c8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2a57c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a57cc:
    // 0x2a57cc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2a57ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a57d0:
    // 0x2a57d0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2a57d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a57d4:
    // 0x2a57d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a57d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a57d8:
    // 0x2a57d8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2a57d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a57dc:
    // 0x2a57dc: 0x3e00008  jr          $ra
label_2a57e0:
    if (ctx->pc == 0x2A57E0u) {
        ctx->pc = 0x2A57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57DCu;
        // 0x2a57e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A57E4u;
        goto label_2a57e4;
    }
    ctx->pc = 0x2A57DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A57E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A57DCu;
        // 0x2a57e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A57DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A57E4u;
label_2a57e4:
    // 0x2a57e4: 0x0  nop
    ctx->pc = 0x2a57e4u;
    // NOP
    ctx->pc = 0x2a57e8u;
}
