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

// Function: sub_001B6358
// Address: 0x1b6358 - 0x1b66e0
void sub_001B6358_0x1b6358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6358_0x1b6358");
#endif

    switch (ctx->pc) {
        case 0x1b6358u: goto label_1b6358;
        case 0x1b635cu: goto label_1b635c;
        case 0x1b6360u: goto label_1b6360;
        case 0x1b6364u: goto label_1b6364;
        case 0x1b6368u: goto label_1b6368;
        case 0x1b636cu: goto label_1b636c;
        case 0x1b6370u: goto label_1b6370;
        case 0x1b6374u: goto label_1b6374;
        case 0x1b6378u: goto label_1b6378;
        case 0x1b637cu: goto label_1b637c;
        case 0x1b6380u: goto label_1b6380;
        case 0x1b6384u: goto label_1b6384;
        case 0x1b6388u: goto label_1b6388;
        case 0x1b638cu: goto label_1b638c;
        case 0x1b6390u: goto label_1b6390;
        case 0x1b6394u: goto label_1b6394;
        case 0x1b6398u: goto label_1b6398;
        case 0x1b639cu: goto label_1b639c;
        case 0x1b63a0u: goto label_1b63a0;
        case 0x1b63a4u: goto label_1b63a4;
        case 0x1b63a8u: goto label_1b63a8;
        case 0x1b63acu: goto label_1b63ac;
        case 0x1b63b0u: goto label_1b63b0;
        case 0x1b63b4u: goto label_1b63b4;
        case 0x1b63b8u: goto label_1b63b8;
        case 0x1b63bcu: goto label_1b63bc;
        case 0x1b63c0u: goto label_1b63c0;
        case 0x1b63c4u: goto label_1b63c4;
        case 0x1b63c8u: goto label_1b63c8;
        case 0x1b63ccu: goto label_1b63cc;
        case 0x1b63d0u: goto label_1b63d0;
        case 0x1b63d4u: goto label_1b63d4;
        case 0x1b63d8u: goto label_1b63d8;
        case 0x1b63dcu: goto label_1b63dc;
        case 0x1b63e0u: goto label_1b63e0;
        case 0x1b63e4u: goto label_1b63e4;
        case 0x1b63e8u: goto label_1b63e8;
        case 0x1b63ecu: goto label_1b63ec;
        case 0x1b63f0u: goto label_1b63f0;
        case 0x1b63f4u: goto label_1b63f4;
        case 0x1b63f8u: goto label_1b63f8;
        case 0x1b63fcu: goto label_1b63fc;
        case 0x1b6400u: goto label_1b6400;
        case 0x1b6404u: goto label_1b6404;
        case 0x1b6408u: goto label_1b6408;
        case 0x1b640cu: goto label_1b640c;
        case 0x1b6410u: goto label_1b6410;
        case 0x1b6414u: goto label_1b6414;
        case 0x1b6418u: goto label_1b6418;
        case 0x1b641cu: goto label_1b641c;
        case 0x1b6420u: goto label_1b6420;
        case 0x1b6424u: goto label_1b6424;
        case 0x1b6428u: goto label_1b6428;
        case 0x1b642cu: goto label_1b642c;
        case 0x1b6430u: goto label_1b6430;
        case 0x1b6434u: goto label_1b6434;
        case 0x1b6438u: goto label_1b6438;
        case 0x1b643cu: goto label_1b643c;
        case 0x1b6440u: goto label_1b6440;
        case 0x1b6444u: goto label_1b6444;
        case 0x1b6448u: goto label_1b6448;
        case 0x1b644cu: goto label_1b644c;
        case 0x1b6450u: goto label_1b6450;
        case 0x1b6454u: goto label_1b6454;
        case 0x1b6458u: goto label_1b6458;
        case 0x1b645cu: goto label_1b645c;
        case 0x1b6460u: goto label_1b6460;
        case 0x1b6464u: goto label_1b6464;
        case 0x1b6468u: goto label_1b6468;
        case 0x1b646cu: goto label_1b646c;
        case 0x1b6470u: goto label_1b6470;
        case 0x1b6474u: goto label_1b6474;
        case 0x1b6478u: goto label_1b6478;
        case 0x1b647cu: goto label_1b647c;
        case 0x1b6480u: goto label_1b6480;
        case 0x1b6484u: goto label_1b6484;
        case 0x1b6488u: goto label_1b6488;
        case 0x1b648cu: goto label_1b648c;
        case 0x1b6490u: goto label_1b6490;
        case 0x1b6494u: goto label_1b6494;
        case 0x1b6498u: goto label_1b6498;
        case 0x1b649cu: goto label_1b649c;
        case 0x1b64a0u: goto label_1b64a0;
        case 0x1b64a4u: goto label_1b64a4;
        case 0x1b64a8u: goto label_1b64a8;
        case 0x1b64acu: goto label_1b64ac;
        case 0x1b64b0u: goto label_1b64b0;
        case 0x1b64b4u: goto label_1b64b4;
        case 0x1b64b8u: goto label_1b64b8;
        case 0x1b64bcu: goto label_1b64bc;
        case 0x1b64c0u: goto label_1b64c0;
        case 0x1b64c4u: goto label_1b64c4;
        case 0x1b64c8u: goto label_1b64c8;
        case 0x1b64ccu: goto label_1b64cc;
        case 0x1b64d0u: goto label_1b64d0;
        case 0x1b64d4u: goto label_1b64d4;
        case 0x1b64d8u: goto label_1b64d8;
        case 0x1b64dcu: goto label_1b64dc;
        case 0x1b64e0u: goto label_1b64e0;
        case 0x1b64e4u: goto label_1b64e4;
        case 0x1b64e8u: goto label_1b64e8;
        case 0x1b64ecu: goto label_1b64ec;
        case 0x1b64f0u: goto label_1b64f0;
        case 0x1b64f4u: goto label_1b64f4;
        case 0x1b64f8u: goto label_1b64f8;
        case 0x1b64fcu: goto label_1b64fc;
        case 0x1b6500u: goto label_1b6500;
        case 0x1b6504u: goto label_1b6504;
        case 0x1b6508u: goto label_1b6508;
        case 0x1b650cu: goto label_1b650c;
        case 0x1b6510u: goto label_1b6510;
        case 0x1b6514u: goto label_1b6514;
        case 0x1b6518u: goto label_1b6518;
        case 0x1b651cu: goto label_1b651c;
        case 0x1b6520u: goto label_1b6520;
        case 0x1b6524u: goto label_1b6524;
        case 0x1b6528u: goto label_1b6528;
        case 0x1b652cu: goto label_1b652c;
        case 0x1b6530u: goto label_1b6530;
        case 0x1b6534u: goto label_1b6534;
        case 0x1b6538u: goto label_1b6538;
        case 0x1b653cu: goto label_1b653c;
        case 0x1b6540u: goto label_1b6540;
        case 0x1b6544u: goto label_1b6544;
        case 0x1b6548u: goto label_1b6548;
        case 0x1b654cu: goto label_1b654c;
        case 0x1b6550u: goto label_1b6550;
        case 0x1b6554u: goto label_1b6554;
        case 0x1b6558u: goto label_1b6558;
        case 0x1b655cu: goto label_1b655c;
        case 0x1b6560u: goto label_1b6560;
        case 0x1b6564u: goto label_1b6564;
        case 0x1b6568u: goto label_1b6568;
        case 0x1b656cu: goto label_1b656c;
        case 0x1b6570u: goto label_1b6570;
        case 0x1b6574u: goto label_1b6574;
        case 0x1b6578u: goto label_1b6578;
        case 0x1b657cu: goto label_1b657c;
        case 0x1b6580u: goto label_1b6580;
        case 0x1b6584u: goto label_1b6584;
        case 0x1b6588u: goto label_1b6588;
        case 0x1b658cu: goto label_1b658c;
        case 0x1b6590u: goto label_1b6590;
        case 0x1b6594u: goto label_1b6594;
        case 0x1b6598u: goto label_1b6598;
        case 0x1b659cu: goto label_1b659c;
        case 0x1b65a0u: goto label_1b65a0;
        case 0x1b65a4u: goto label_1b65a4;
        case 0x1b65a8u: goto label_1b65a8;
        case 0x1b65acu: goto label_1b65ac;
        case 0x1b65b0u: goto label_1b65b0;
        case 0x1b65b4u: goto label_1b65b4;
        case 0x1b65b8u: goto label_1b65b8;
        case 0x1b65bcu: goto label_1b65bc;
        case 0x1b65c0u: goto label_1b65c0;
        case 0x1b65c4u: goto label_1b65c4;
        case 0x1b65c8u: goto label_1b65c8;
        case 0x1b65ccu: goto label_1b65cc;
        case 0x1b65d0u: goto label_1b65d0;
        case 0x1b65d4u: goto label_1b65d4;
        case 0x1b65d8u: goto label_1b65d8;
        case 0x1b65dcu: goto label_1b65dc;
        case 0x1b65e0u: goto label_1b65e0;
        case 0x1b65e4u: goto label_1b65e4;
        case 0x1b65e8u: goto label_1b65e8;
        case 0x1b65ecu: goto label_1b65ec;
        case 0x1b65f0u: goto label_1b65f0;
        case 0x1b65f4u: goto label_1b65f4;
        case 0x1b65f8u: goto label_1b65f8;
        case 0x1b65fcu: goto label_1b65fc;
        case 0x1b6600u: goto label_1b6600;
        case 0x1b6604u: goto label_1b6604;
        case 0x1b6608u: goto label_1b6608;
        case 0x1b660cu: goto label_1b660c;
        case 0x1b6610u: goto label_1b6610;
        case 0x1b6614u: goto label_1b6614;
        case 0x1b6618u: goto label_1b6618;
        case 0x1b661cu: goto label_1b661c;
        case 0x1b6620u: goto label_1b6620;
        case 0x1b6624u: goto label_1b6624;
        case 0x1b6628u: goto label_1b6628;
        case 0x1b662cu: goto label_1b662c;
        case 0x1b6630u: goto label_1b6630;
        case 0x1b6634u: goto label_1b6634;
        case 0x1b6638u: goto label_1b6638;
        case 0x1b663cu: goto label_1b663c;
        case 0x1b6640u: goto label_1b6640;
        case 0x1b6644u: goto label_1b6644;
        case 0x1b6648u: goto label_1b6648;
        case 0x1b664cu: goto label_1b664c;
        case 0x1b6650u: goto label_1b6650;
        case 0x1b6654u: goto label_1b6654;
        case 0x1b6658u: goto label_1b6658;
        case 0x1b665cu: goto label_1b665c;
        case 0x1b6660u: goto label_1b6660;
        case 0x1b6664u: goto label_1b6664;
        case 0x1b6668u: goto label_1b6668;
        case 0x1b666cu: goto label_1b666c;
        case 0x1b6670u: goto label_1b6670;
        case 0x1b6674u: goto label_1b6674;
        case 0x1b6678u: goto label_1b6678;
        case 0x1b667cu: goto label_1b667c;
        case 0x1b6680u: goto label_1b6680;
        case 0x1b6684u: goto label_1b6684;
        case 0x1b6688u: goto label_1b6688;
        case 0x1b668cu: goto label_1b668c;
        case 0x1b6690u: goto label_1b6690;
        case 0x1b6694u: goto label_1b6694;
        case 0x1b6698u: goto label_1b6698;
        case 0x1b669cu: goto label_1b669c;
        case 0x1b66a0u: goto label_1b66a0;
        case 0x1b66a4u: goto label_1b66a4;
        case 0x1b66a8u: goto label_1b66a8;
        case 0x1b66acu: goto label_1b66ac;
        case 0x1b66b0u: goto label_1b66b0;
        case 0x1b66b4u: goto label_1b66b4;
        case 0x1b66b8u: goto label_1b66b8;
        case 0x1b66bcu: goto label_1b66bc;
        case 0x1b66c0u: goto label_1b66c0;
        case 0x1b66c4u: goto label_1b66c4;
        case 0x1b66c8u: goto label_1b66c8;
        case 0x1b66ccu: goto label_1b66cc;
        case 0x1b66d0u: goto label_1b66d0;
        case 0x1b66d4u: goto label_1b66d4;
        case 0x1b66d8u: goto label_1b66d8;
        case 0x1b66dcu: goto label_1b66dc;
        default: break;
    }

    ctx->pc = 0x1b6358u;

label_1b6358:
    // 0x1b6358: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1b6358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1b635c:
    // 0x1b635c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1b6360:
    // 0x1b6360: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1b6360u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b6364:
    // 0x1b6364: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1b6364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1b6368:
    // 0x1b6368: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1b6368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_1b636c:
    // 0x1b636c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1b636cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1b6370:
    // 0x1b6370: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1b6370u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1b6374:
    // 0x1b6374: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1b6374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1b6378:
    // 0x1b6378: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1b6378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1b637c:
    // 0x1b637c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1b637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1b6380:
    // 0x1b6380: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1b6380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1b6384:
    // 0x1b6384: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1b6384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1b6388:
    // 0x1b6388: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1b6388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1b638c:
    // 0x1b638c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1b638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1b6390:
    // 0x1b6390: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1b6390u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1b6394:
    // 0x1b6394: 0xc06d85a  jal         func_1B6168
label_1b6398:
    if (ctx->pc == 0x1B6398u) {
        ctx->pc = 0x1B6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6394u;
        // 0x1b6398: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B639Cu;
        goto label_1b639c;
    }
    ctx->pc = 0x1B6394u;
    SET_GPR_U32(ctx, 31, 0x1B639Cu);
    ctx->pc = 0x1B6398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6394u;
    // 0x1b6398: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6168u, 0x1B6394u, 0x1B639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B639Cu;
label_1b639c:
    // 0x1b639c: 0x1220006d  beqz        $s1, . + 4 + (0x6D << 2)
label_1b63a0:
    if (ctx->pc == 0x1B63A0u) {
        ctx->pc = 0x1B63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B639Cu;
        // 0x1b63a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B63A4u;
        goto label_1b63a4;
    }
    ctx->pc = 0x1B639Cu;
    {
        const bool branch_taken_0x1b639c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B639Cu;
        // 0x1b63a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b639c) {
            ctx->pc = 0x1B6554u;
            goto label_1b6554;
        }
    }
    ctx->pc = 0x1B63A4u;
label_1b63a4:
    // 0x1b63a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1b63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b63a8:
    // 0x1b63a8: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x1b63a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1b63ac:
    // 0x1b63ac: 0x8c630120  lw          $v1, 0x120($v1)
    ctx->pc = 0x1b63acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 288)));
label_1b63b0:
    // 0x1b63b0: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1b63b4:
    if (ctx->pc == 0x1B63B4u) {
        ctx->pc = 0x1B63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63B0u;
        // 0x1b63b4: 0x38630004  xori        $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B63B8u;
        goto label_1b63b8;
    }
    ctx->pc = 0x1B63B0u;
    {
        const bool branch_taken_0x1b63b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1B63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63B0u;
        // 0x1b63b4: 0x38630004  xori        $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63b0) {
            ctx->pc = 0x1B63C0u;
            goto label_1b63c0;
        }
    }
    ctx->pc = 0x1B63B8u;
label_1b63b8:
    // 0x1b63b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b63bc:
    if (ctx->pc == 0x1B63BCu) {
        ctx->pc = 0x1B63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63B8u;
        // 0x1b63bc: 0x3c11020f  lui         $s1, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)527 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B63C0u;
        goto label_1b63c0;
    }
    ctx->pc = 0x1B63B8u;
    {
        const bool branch_taken_0x1b63b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B63BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63B8u;
        // 0x1b63bc: 0x3c11020f  lui         $s1, 0x20F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)527 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63b8) {
            ctx->pc = 0x1B63C8u;
            goto label_1b63c8;
        }
    }
    ctx->pc = 0x1B63C0u;
label_1b63c0:
    // 0x1b63c0: 0x3c020210  lui         $v0, 0x210
    ctx->pc = 0x1b63c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)528 << 16));
label_1b63c4:
    // 0x1b63c4: 0x43880a  movz        $s1, $v0, $v1
    ctx->pc = 0x1b63c4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1b63c8:
    // 0x1b63c8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1b63c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1b63cc:
    // 0x1b63cc: 0x241000ff  addiu       $s0, $zero, 0xFF
    ctx->pc = 0x1b63ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b63d0:
    // 0x1b63d0: 0xa3a30030  sb          $v1, 0x30($sp)
    ctx->pc = 0x1b63d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 3));
label_1b63d4:
    // 0x1b63d4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1b63d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1b63d8:
    // 0x1b63d8: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1b63d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1b63dc:
    // 0x1b63dc: 0x240400bc  addiu       $a0, $zero, 0xBC
    ctx->pc = 0x1b63dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
label_1b63e0:
    // 0x1b63e0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1b63e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b63e4:
    // 0x1b63e4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1b63e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1b63e8:
    // 0x1b63e8: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x1b63e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 4));
label_1b63ec:
    // 0x1b63ec: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b63ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b63f0:
    // 0x1b63f0: 0xa0500003  sb          $s0, 0x3($v0)
    ctx->pc = 0x1b63f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 16));
label_1b63f4:
    // 0x1b63f4: 0x26e40040  addiu       $a0, $s7, 0x40
    ctx->pc = 0x1b63f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
label_1b63f8:
    // 0x1b63f8: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1b63f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1b63fc:
    // 0x1b63fc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b63fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b6400:
    // 0x1b6400: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1b6400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1b6404:
    // 0x1b6404: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6408:
    // 0x1b6408: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1b6408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1b640c:
    // 0x1b640c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b640cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6410:
    // 0x1b6410: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1b6410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1b6414:
    // 0x1b6414: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1b6414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1b6418:
    // 0x1b6418: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b6418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b641c:
    // 0x1b641c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b641cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b6420:
    // 0x1b6420: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b6420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b6424:
    // 0x1b6424: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6424u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6428:
    // 0x1b6428: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b6428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1b642c:
    // 0x1b642c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1b642cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1b6430:
    // 0x1b6430: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1b6430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1b6434:
    // 0x1b6434: 0xc06876e  jal         func_1A1DB8
label_1b6438:
    if (ctx->pc == 0x1B6438u) {
        ctx->pc = 0x1B6438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6434u;
        // 0x1b6438: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B643Cu;
        goto label_1b643c;
    }
    ctx->pc = 0x1B6434u;
    SET_GPR_U32(ctx, 31, 0x1B643Cu);
    ctx->pc = 0x1B6438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6434u;
    // 0x1b6438: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1B6434u, 0x1B643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B643Cu;
label_1b643c:
    // 0x1b643c: 0x3c0145fa  lui         $at, 0x45FA
    ctx->pc = 0x1b643cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17914 << 16));
label_1b6440:
    // 0x1b6440: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b6440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1b6444:
    // 0x1b6444: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x1b6444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1b6448:
    // 0x1b6448: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x1b6448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1b644c:
    // 0x1b644c: 0x3c013b65  lui         $at, 0x3B65
    ctx->pc = 0x1b644cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15205 << 16));
label_1b6450:
    // 0x1b6450: 0x34216042  ori         $at, $at, 0x6042
    ctx->pc = 0x1b6450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24642);
label_1b6454:
    // 0x1b6454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6458:
    // 0x1b6458: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1b6458u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1b645c:
    // 0x1b645c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1b645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1b6460:
    // 0x1b6460: 0x26e40140  addiu       $a0, $s7, 0x140
    ctx->pc = 0x1b6460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 320));
label_1b6464:
    // 0x1b6464: 0xa3a00034  sb          $zero, 0x34($sp)
    ctx->pc = 0x1b6464u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 52), (uint8_t)GPR_U32(ctx, 0));
label_1b6468:
    // 0x1b6468: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b6468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b646c:
    // 0x1b646c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1b646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b6470:
    // 0x1b6470: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b6470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b6474:
    // 0x1b6474: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1b6474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b6478:
    // 0x1b6478: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6478u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b647c:
    // 0x1b647c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1b647cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b6480:
    // 0x1b6480: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b6480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6484:
    // 0x1b6484: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1b6484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1b6488:
    // 0x1b6488: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b6488u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b648c:
    // 0x1b648c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b648cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6490:
    // 0x1b6490: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b6490u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b6494:
    // 0x1b6494: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1b6494u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1b6498:
    // 0x1b6498: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b6498u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b649c:
    // 0x1b649c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b649cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b64a0:
    // 0x1b64a0: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x1b64a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b64a4:
    // 0x1b64a4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1b64a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1b64a8:
    // 0x1b64a8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1b64a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1b64ac:
    // 0x1b64ac: 0xa0700003  sb          $s0, 0x3($v1)
    ctx->pc = 0x1b64acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 16));
label_1b64b0:
    // 0x1b64b0: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b64b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1b64b4:
    // 0x1b64b4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b64b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b64b8:
    // 0x1b64b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b64b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b64bc:
    // 0x1b64bc: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x1b64bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_1b64c0:
    // 0x1b64c0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1b64c4:
    // 0x1b64c4: 0xc06876e  jal         func_1A1DB8
label_1b64c8:
    if (ctx->pc == 0x1B64C8u) {
        ctx->pc = 0x1B64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B64C4u;
        // 0x1b64c8: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B64CCu;
        goto label_1b64cc;
    }
    ctx->pc = 0x1B64C4u;
    SET_GPR_U32(ctx, 31, 0x1B64CCu);
    ctx->pc = 0x1B64C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B64C4u;
    // 0x1b64c8: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1B64C4u, 0x1B64CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B64CCu;
label_1b64cc:
    // 0x1b64cc: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x1b64ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1b64d0:
    // 0x1b64d0: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x1b64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1b64d4:
    // 0x1b64d4: 0x3c01bb03  lui         $at, 0xBB03
    ctx->pc = 0x1b64d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47875 << 16));
label_1b64d8:
    // 0x1b64d8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b64d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1b64dc:
    // 0x1b64dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b64dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b64e0:
    // 0x1b64e0: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x1b64e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
label_1b64e4:
    // 0x1b64e4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1b64e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1b64e8:
    // 0x1b64e8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b64e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b64ec:
    // 0x1b64ec: 0xa3a00038  sb          $zero, 0x38($sp)
    ctx->pc = 0x1b64ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 0));
label_1b64f0:
    // 0x1b64f0: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1b64f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b64f4:
    // 0x1b64f4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1b64f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b64f8:
    // 0x1b64f8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1b64f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_1b64fc:
    // 0x1b64fc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1b64fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1b6500:
    // 0x1b6500: 0x26e40240  addiu       $a0, $s7, 0x240
    ctx->pc = 0x1b6500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 576));
label_1b6504:
    // 0x1b6504: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1b6504u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1b6508:
    // 0x1b6508: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1b6508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1b650c:
    // 0x1b650c: 0x3c01bb44  lui         $at, 0xBB44
    ctx->pc = 0x1b650cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47940 << 16));
label_1b6510:
    // 0x1b6510: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x1b6510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_1b6514:
    // 0x1b6514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b6518:
    // 0x1b6518: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1b6518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1b651c:
    // 0x1b651c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b651cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b6520:
    // 0x1b6520: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6524:
    // 0x1b6524: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1b6524u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1b6528:
    // 0x1b6528: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b6528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1b652c:
    // 0x1b652c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1b652cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1b6530:
    // 0x1b6530: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b6530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6534:
    // 0x1b6534: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x1b6534u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
label_1b6538:
    // 0x1b6538: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b6538u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b653c:
    // 0x1b653c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1b653cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1b6540:
    // 0x1b6540: 0xa0700003  sb          $s0, 0x3($v1)
    ctx->pc = 0x1b6540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 16));
label_1b6544:
    // 0x1b6544: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1b6544u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_1b6548:
    // 0x1b6548: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1b6548u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_1b654c:
    // 0x1b654c: 0xc06876e  jal         func_1A1DB8
label_1b6550:
    if (ctx->pc == 0x1B6550u) {
        ctx->pc = 0x1B6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B654Cu;
        // 0x1b6550: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6554u;
        goto label_1b6554;
    }
    ctx->pc = 0x1B654Cu;
    SET_GPR_U32(ctx, 31, 0x1B6554u);
    ctx->pc = 0x1B6550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B654Cu;
    // 0x1b6550: 0x8fa60038  lw          $a2, 0x38($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1DB8u, 0x1B654Cu, 0x1B6554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6554u;
label_1b6554:
    // 0x1b6554: 0x26f00340  addiu       $s0, $s7, 0x340
    ctx->pc = 0x1b6554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 832));
label_1b6558:
    // 0x1b6558: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b6558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b655c:
    // 0x1b655c: 0x27b6003c  addiu       $s6, $sp, 0x3C
    ctx->pc = 0x1b655cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1b6560:
    // 0x1b6560: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x1b6560u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1b6564:
    // 0x1b6564: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x1b6564u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1b6568:
    // 0x1b6568: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1b6568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b656c:
    // 0x1b656c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1b656cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b6570:
    // 0x1b6570: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1b6570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1b6574:
    // 0x1b6574: 0x223001b  divu        $zero, $s1, $v1
    ctx->pc = 0x1b6574u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_1b6578:
    // 0x1b6578: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1b657c:
    if (ctx->pc == 0x1B657Cu) {
        ctx->pc = 0x1B657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6578u;
        // 0x1b657c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6580u;
        goto label_1b6580;
    }
    ctx->pc = 0x1B6578u;
    {
        const bool branch_taken_0x1b6578 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6578) {
            ctx->pc = 0x1B657Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6578u;
            // 0x1b657c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6580u;
            goto label_1b6580;
        }
    }
    ctx->pc = 0x1B6580u;
label_1b6580:
    // 0x1b6580: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b6580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1b6584:
    // 0x1b6584: 0x1010  mfhi        $v0
    ctx->pc = 0x1b6584u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1b6588:
    // 0x1b6588: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
label_1b658c:
    if (ctx->pc == 0x1B658Cu) {
        ctx->pc = 0x1B658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6588u;
        // 0x1b658c: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6590u;
        goto label_1b6590;
    }
    ctx->pc = 0x1B6588u;
    {
        const bool branch_taken_0x1b6588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6588u;
        // 0x1b658c: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6588) {
            ctx->pc = 0x1B6608u;
            goto label_1b6608;
        }
    }
    ctx->pc = 0x1B6590u;
label_1b6590:
    // 0x1b6590: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1b6590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1b6594:
    // 0x1b6594: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x1b6594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1b6598:
    // 0x1b6598: 0xa3a2003c  sb          $v0, 0x3C($sp)
    ctx->pc = 0x1b6598u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 2));
label_1b659c:
    // 0x1b659c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b659cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b65a0:
    // 0x1b65a0: 0x2402ffbc  addiu       $v0, $zero, -0x44
    ctx->pc = 0x1b65a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
label_1b65a4:
    // 0x1b65a4: 0xa2d50003  sb          $s5, 0x3($s6)
    ctx->pc = 0x1b65a4u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 3), (uint8_t)GPR_U32(ctx, 21));
label_1b65a8:
    // 0x1b65a8: 0xa2c20002  sb          $v0, 0x2($s6)
    ctx->pc = 0x1b65a8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 2), (uint8_t)GPR_U32(ctx, 2));
label_1b65ac:
    // 0x1b65ac: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b65acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b65b0:
    // 0x1b65b0: 0xa2c30001  sb          $v1, 0x1($s6)
    ctx->pc = 0x1b65b0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 1), (uint8_t)GPR_U32(ctx, 3));
label_1b65b4:
    // 0x1b65b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b65b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b65b8:
    // 0x1b65b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b65b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b65bc:
    // 0x1b65bc: 0x2409016f  addiu       $t1, $zero, 0x16F
    ctx->pc = 0x1b65bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
label_1b65c0:
    // 0x1b65c0: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x1b65c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1b65c4:
    // 0x1b65c4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1b65c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b65c8:
    // 0x1b65c8: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1b65c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1b65cc:
    // 0x1b65cc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b65ccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b65d0:
    // 0x1b65d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b65d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b65d4:
    // 0x1b65d4: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x1b65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
label_1b65d8:
    // 0x1b65d8: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x1b65d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
label_1b65dc:
    // 0x1b65dc: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1b65dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1b65e0:
    // 0x1b65e0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b65e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b65e4:
    // 0x1b65e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b65e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b65e8:
    // 0x1b65e8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1b65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1b65ec:
    // 0x1b65ec: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1b65ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1b65f0:
    // 0x1b65f0: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1b65f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1b65f4:
    // 0x1b65f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b65f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b65f8:
    // 0x1b65f8: 0x40f809  jalr        $v0
label_1b65fc:
    if (ctx->pc == 0x1B65FCu) {
        ctx->pc = 0x1B65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65F8u;
        // 0x1b65fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6600u;
        goto label_1b6600;
    }
    ctx->pc = 0x1B65F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6600u);
        ctx->pc = 0x1B65FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65F8u;
        // 0x1b65fc: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B65F8u, 0x1B6600u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6600u;
label_1b6600:
    // 0x1b6600: 0x1000001d  b           . + 4 + (0x1D << 2)
label_1b6604:
    if (ctx->pc == 0x1B6604u) {
        ctx->pc = 0x1B6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6600u;
        // 0x1b6604: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6608u;
        goto label_1b6608;
    }
    ctx->pc = 0x1B6600u;
    {
        const bool branch_taken_0x1b6600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6600u;
        // 0x1b6604: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6600) {
            ctx->pc = 0x1B6678u;
            goto label_1b6678;
        }
    }
    ctx->pc = 0x1B6608u;
label_1b6608:
    // 0x1b6608: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x1b6608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_1b660c:
    // 0x1b660c: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x1b660cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
label_1b6610:
    // 0x1b6610: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1b6610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b6614:
    // 0x1b6614: 0xa2820001  sb          $v0, 0x1($s4)
    ctx->pc = 0x1b6614u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 2));
label_1b6618:
    // 0x1b6618: 0x2403ffbc  addiu       $v1, $zero, -0x44
    ctx->pc = 0x1b6618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967228));
label_1b661c:
    // 0x1b661c: 0xa2950003  sb          $s5, 0x3($s4)
    ctx->pc = 0x1b661cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 21));
label_1b6620:
    // 0x1b6620: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6620u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6624:
    // 0x1b6624: 0xa2830002  sb          $v1, 0x2($s4)
    ctx->pc = 0x1b6624u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 3));
label_1b6628:
    // 0x1b6628: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1b6628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b662c:
    // 0x1b662c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b6630:
    // 0x1b6630: 0x2409016e  addiu       $t1, $zero, 0x16E
    ctx->pc = 0x1b6630u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 366));
label_1b6634:
    // 0x1b6634: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1b6634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1b6638:
    // 0x1b6638: 0x240a0003  addiu       $t2, $zero, 0x3
    ctx->pc = 0x1b6638u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b663c:
    // 0x1b663c: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1b663cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1b6640:
    // 0x1b6640: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1b6640u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6644:
    // 0x1b6644: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b6644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_1b6648:
    // 0x1b6648: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1b6648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1b664c:
    // 0x1b664c: 0xafb50010  sw          $s5, 0x10($sp)
    ctx->pc = 0x1b664cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 21));
label_1b6650:
    // 0x1b6650: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x1b6650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
label_1b6654:
    // 0x1b6654: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b6654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1b6658:
    // 0x1b6658: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b6658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b665c:
    // 0x1b665c: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1b665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1b6660:
    // 0x1b6660: 0x3c01462b  lui         $at, 0x462B
    ctx->pc = 0x1b6660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17963 << 16));
label_1b6664:
    // 0x1b6664: 0x3421e000  ori         $at, $at, 0xE000
    ctx->pc = 0x1b6664u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57344);
label_1b6668:
    // 0x1b6668: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b6668u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1b666c:
    // 0x1b666c: 0x40f809  jalr        $v0
label_1b6670:
    if (ctx->pc == 0x1B6670u) {
        ctx->pc = 0x1B6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B666Cu;
        // 0x1b6670: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B6674u;
        goto label_1b6674;
    }
    ctx->pc = 0x1B666Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B6674u);
        ctx->pc = 0x1B6670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B666Cu;
        // 0x1b6670: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B666Cu, 0x1B6674u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B6674u;
label_1b6674:
    // 0x1b6674: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b6674u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1b6678:
    // 0x1b6678: 0x26730100  addiu       $s3, $s3, 0x100
    ctx->pc = 0x1b6678u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_1b667c:
    // 0x1b667c: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x1b667cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_1b6680:
    // 0x1b6680: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x1b6680u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1b6684:
    // 0x1b6684: 0x1440ffba  bnez        $v0, . + 4 + (-0x46 << 2)
label_1b6688:
    if (ctx->pc == 0x1B6688u) {
        ctx->pc = 0x1B6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6684u;
        // 0x1b6688: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B668Cu;
        goto label_1b668c;
    }
    ctx->pc = 0x1B6684u;
    {
        const bool branch_taken_0x1b6684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6684u;
        // 0x1b6688: 0x26520100  addiu       $s2, $s2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6684) {
            ctx->pc = 0x1B6570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6570;
        }
    }
    ctx->pc = 0x1B668Cu;
label_1b668c:
    // 0x1b668c: 0x7bc20000  lq          $v0, 0x0($fp)
    ctx->pc = 0x1b668cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 0)));
label_1b6690:
    // 0x1b6690: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1b6690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1b6694:
    // 0x1b6694: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b6694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1b6698:
    // 0x1b6698: 0xaee30c40  sw          $v1, 0xC40($s7)
    ctx->pc = 0x1b6698u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 3136), GPR_U32(ctx, 3));
label_1b669c:
    // 0x1b669c: 0xaee40c60  sw          $a0, 0xC60($s7)
    ctx->pc = 0x1b669cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 3168), GPR_U32(ctx, 4));
label_1b66a0:
    // 0x1b66a0: 0x7ee20c50  sq          $v0, 0xC50($s7)
    ctx->pc = 0x1b66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 3152), GPR_VEC(ctx, 2));
label_1b66a4:
    // 0x1b66a4: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x1b66a4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_1b66a8:
    // 0x1b66a8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1b66a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1b66ac:
    // 0x1b66ac: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1b66acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1b66b0:
    // 0x1b66b0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1b66b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1b66b4:
    // 0x1b66b4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1b66b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b66b8:
    // 0x1b66b8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1b66b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1b66bc:
    // 0x1b66bc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1b66bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b66c0:
    // 0x1b66c0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1b66c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b66c4:
    // 0x1b66c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b66c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b66c8:
    // 0x1b66c8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1b66c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b66cc:
    // 0x1b66cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1b66ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1b66d0:
    // 0x1b66d0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1b66d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b66d4:
    // 0x1b66d4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1b66d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b66d8:
    // 0x1b66d8: 0x3e00008  jr          $ra
label_1b66dc:
    if (ctx->pc == 0x1B66DCu) {
        ctx->pc = 0x1B66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B66D8u;
        // 0x1b66dc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B66E0u;
        goto label_fallthrough_0x1b66d8;
    }
    ctx->pc = 0x1B66D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B66DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B66D8u;
        // 0x1b66dc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B66D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b66d8:
    ctx->pc = 0x1B66E0u;
}
