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

// Function: sub_002A62D8
// Address: 0x2a62d8 - 0x2a66c0
void sub_002A62D8_0x2a62d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A62D8_0x2a62d8");
#endif

    switch (ctx->pc) {
        case 0x2a62d8u: goto label_2a62d8;
        case 0x2a62dcu: goto label_2a62dc;
        case 0x2a62e0u: goto label_2a62e0;
        case 0x2a62e4u: goto label_2a62e4;
        case 0x2a62e8u: goto label_2a62e8;
        case 0x2a62ecu: goto label_2a62ec;
        case 0x2a62f0u: goto label_2a62f0;
        case 0x2a62f4u: goto label_2a62f4;
        case 0x2a62f8u: goto label_2a62f8;
        case 0x2a62fcu: goto label_2a62fc;
        case 0x2a6300u: goto label_2a6300;
        case 0x2a6304u: goto label_2a6304;
        case 0x2a6308u: goto label_2a6308;
        case 0x2a630cu: goto label_2a630c;
        case 0x2a6310u: goto label_2a6310;
        case 0x2a6314u: goto label_2a6314;
        case 0x2a6318u: goto label_2a6318;
        case 0x2a631cu: goto label_2a631c;
        case 0x2a6320u: goto label_2a6320;
        case 0x2a6324u: goto label_2a6324;
        case 0x2a6328u: goto label_2a6328;
        case 0x2a632cu: goto label_2a632c;
        case 0x2a6330u: goto label_2a6330;
        case 0x2a6334u: goto label_2a6334;
        case 0x2a6338u: goto label_2a6338;
        case 0x2a633cu: goto label_2a633c;
        case 0x2a6340u: goto label_2a6340;
        case 0x2a6344u: goto label_2a6344;
        case 0x2a6348u: goto label_2a6348;
        case 0x2a634cu: goto label_2a634c;
        case 0x2a6350u: goto label_2a6350;
        case 0x2a6354u: goto label_2a6354;
        case 0x2a6358u: goto label_2a6358;
        case 0x2a635cu: goto label_2a635c;
        case 0x2a6360u: goto label_2a6360;
        case 0x2a6364u: goto label_2a6364;
        case 0x2a6368u: goto label_2a6368;
        case 0x2a636cu: goto label_2a636c;
        case 0x2a6370u: goto label_2a6370;
        case 0x2a6374u: goto label_2a6374;
        case 0x2a6378u: goto label_2a6378;
        case 0x2a637cu: goto label_2a637c;
        case 0x2a6380u: goto label_2a6380;
        case 0x2a6384u: goto label_2a6384;
        case 0x2a6388u: goto label_2a6388;
        case 0x2a638cu: goto label_2a638c;
        case 0x2a6390u: goto label_2a6390;
        case 0x2a6394u: goto label_2a6394;
        case 0x2a6398u: goto label_2a6398;
        case 0x2a639cu: goto label_2a639c;
        case 0x2a63a0u: goto label_2a63a0;
        case 0x2a63a4u: goto label_2a63a4;
        case 0x2a63a8u: goto label_2a63a8;
        case 0x2a63acu: goto label_2a63ac;
        case 0x2a63b0u: goto label_2a63b0;
        case 0x2a63b4u: goto label_2a63b4;
        case 0x2a63b8u: goto label_2a63b8;
        case 0x2a63bcu: goto label_2a63bc;
        case 0x2a63c0u: goto label_2a63c0;
        case 0x2a63c4u: goto label_2a63c4;
        case 0x2a63c8u: goto label_2a63c8;
        case 0x2a63ccu: goto label_2a63cc;
        case 0x2a63d0u: goto label_2a63d0;
        case 0x2a63d4u: goto label_2a63d4;
        case 0x2a63d8u: goto label_2a63d8;
        case 0x2a63dcu: goto label_2a63dc;
        case 0x2a63e0u: goto label_2a63e0;
        case 0x2a63e4u: goto label_2a63e4;
        case 0x2a63e8u: goto label_2a63e8;
        case 0x2a63ecu: goto label_2a63ec;
        case 0x2a63f0u: goto label_2a63f0;
        case 0x2a63f4u: goto label_2a63f4;
        case 0x2a63f8u: goto label_2a63f8;
        case 0x2a63fcu: goto label_2a63fc;
        case 0x2a6400u: goto label_2a6400;
        case 0x2a6404u: goto label_2a6404;
        case 0x2a6408u: goto label_2a6408;
        case 0x2a640cu: goto label_2a640c;
        case 0x2a6410u: goto label_2a6410;
        case 0x2a6414u: goto label_2a6414;
        case 0x2a6418u: goto label_2a6418;
        case 0x2a641cu: goto label_2a641c;
        case 0x2a6420u: goto label_2a6420;
        case 0x2a6424u: goto label_2a6424;
        case 0x2a6428u: goto label_2a6428;
        case 0x2a642cu: goto label_2a642c;
        case 0x2a6430u: goto label_2a6430;
        case 0x2a6434u: goto label_2a6434;
        case 0x2a6438u: goto label_2a6438;
        case 0x2a643cu: goto label_2a643c;
        case 0x2a6440u: goto label_2a6440;
        case 0x2a6444u: goto label_2a6444;
        case 0x2a6448u: goto label_2a6448;
        case 0x2a644cu: goto label_2a644c;
        case 0x2a6450u: goto label_2a6450;
        case 0x2a6454u: goto label_2a6454;
        case 0x2a6458u: goto label_2a6458;
        case 0x2a645cu: goto label_2a645c;
        case 0x2a6460u: goto label_2a6460;
        case 0x2a6464u: goto label_2a6464;
        case 0x2a6468u: goto label_2a6468;
        case 0x2a646cu: goto label_2a646c;
        case 0x2a6470u: goto label_2a6470;
        case 0x2a6474u: goto label_2a6474;
        case 0x2a6478u: goto label_2a6478;
        case 0x2a647cu: goto label_2a647c;
        case 0x2a6480u: goto label_2a6480;
        case 0x2a6484u: goto label_2a6484;
        case 0x2a6488u: goto label_2a6488;
        case 0x2a648cu: goto label_2a648c;
        case 0x2a6490u: goto label_2a6490;
        case 0x2a6494u: goto label_2a6494;
        case 0x2a6498u: goto label_2a6498;
        case 0x2a649cu: goto label_2a649c;
        case 0x2a64a0u: goto label_2a64a0;
        case 0x2a64a4u: goto label_2a64a4;
        case 0x2a64a8u: goto label_2a64a8;
        case 0x2a64acu: goto label_2a64ac;
        case 0x2a64b0u: goto label_2a64b0;
        case 0x2a64b4u: goto label_2a64b4;
        case 0x2a64b8u: goto label_2a64b8;
        case 0x2a64bcu: goto label_2a64bc;
        case 0x2a64c0u: goto label_2a64c0;
        case 0x2a64c4u: goto label_2a64c4;
        case 0x2a64c8u: goto label_2a64c8;
        case 0x2a64ccu: goto label_2a64cc;
        case 0x2a64d0u: goto label_2a64d0;
        case 0x2a64d4u: goto label_2a64d4;
        case 0x2a64d8u: goto label_2a64d8;
        case 0x2a64dcu: goto label_2a64dc;
        case 0x2a64e0u: goto label_2a64e0;
        case 0x2a64e4u: goto label_2a64e4;
        case 0x2a64e8u: goto label_2a64e8;
        case 0x2a64ecu: goto label_2a64ec;
        case 0x2a64f0u: goto label_2a64f0;
        case 0x2a64f4u: goto label_2a64f4;
        case 0x2a64f8u: goto label_2a64f8;
        case 0x2a64fcu: goto label_2a64fc;
        case 0x2a6500u: goto label_2a6500;
        case 0x2a6504u: goto label_2a6504;
        case 0x2a6508u: goto label_2a6508;
        case 0x2a650cu: goto label_2a650c;
        case 0x2a6510u: goto label_2a6510;
        case 0x2a6514u: goto label_2a6514;
        case 0x2a6518u: goto label_2a6518;
        case 0x2a651cu: goto label_2a651c;
        case 0x2a6520u: goto label_2a6520;
        case 0x2a6524u: goto label_2a6524;
        case 0x2a6528u: goto label_2a6528;
        case 0x2a652cu: goto label_2a652c;
        case 0x2a6530u: goto label_2a6530;
        case 0x2a6534u: goto label_2a6534;
        case 0x2a6538u: goto label_2a6538;
        case 0x2a653cu: goto label_2a653c;
        case 0x2a6540u: goto label_2a6540;
        case 0x2a6544u: goto label_2a6544;
        case 0x2a6548u: goto label_2a6548;
        case 0x2a654cu: goto label_2a654c;
        case 0x2a6550u: goto label_2a6550;
        case 0x2a6554u: goto label_2a6554;
        case 0x2a6558u: goto label_2a6558;
        case 0x2a655cu: goto label_2a655c;
        case 0x2a6560u: goto label_2a6560;
        case 0x2a6564u: goto label_2a6564;
        case 0x2a6568u: goto label_2a6568;
        case 0x2a656cu: goto label_2a656c;
        case 0x2a6570u: goto label_2a6570;
        case 0x2a6574u: goto label_2a6574;
        case 0x2a6578u: goto label_2a6578;
        case 0x2a657cu: goto label_2a657c;
        case 0x2a6580u: goto label_2a6580;
        case 0x2a6584u: goto label_2a6584;
        case 0x2a6588u: goto label_2a6588;
        case 0x2a658cu: goto label_2a658c;
        case 0x2a6590u: goto label_2a6590;
        case 0x2a6594u: goto label_2a6594;
        case 0x2a6598u: goto label_2a6598;
        case 0x2a659cu: goto label_2a659c;
        case 0x2a65a0u: goto label_2a65a0;
        case 0x2a65a4u: goto label_2a65a4;
        case 0x2a65a8u: goto label_2a65a8;
        case 0x2a65acu: goto label_2a65ac;
        case 0x2a65b0u: goto label_2a65b0;
        case 0x2a65b4u: goto label_2a65b4;
        case 0x2a65b8u: goto label_2a65b8;
        case 0x2a65bcu: goto label_2a65bc;
        case 0x2a65c0u: goto label_2a65c0;
        case 0x2a65c4u: goto label_2a65c4;
        case 0x2a65c8u: goto label_2a65c8;
        case 0x2a65ccu: goto label_2a65cc;
        case 0x2a65d0u: goto label_2a65d0;
        case 0x2a65d4u: goto label_2a65d4;
        case 0x2a65d8u: goto label_2a65d8;
        case 0x2a65dcu: goto label_2a65dc;
        case 0x2a65e0u: goto label_2a65e0;
        case 0x2a65e4u: goto label_2a65e4;
        case 0x2a65e8u: goto label_2a65e8;
        case 0x2a65ecu: goto label_2a65ec;
        case 0x2a65f0u: goto label_2a65f0;
        case 0x2a65f4u: goto label_2a65f4;
        case 0x2a65f8u: goto label_2a65f8;
        case 0x2a65fcu: goto label_2a65fc;
        case 0x2a6600u: goto label_2a6600;
        case 0x2a6604u: goto label_2a6604;
        case 0x2a6608u: goto label_2a6608;
        case 0x2a660cu: goto label_2a660c;
        case 0x2a6610u: goto label_2a6610;
        case 0x2a6614u: goto label_2a6614;
        case 0x2a6618u: goto label_2a6618;
        case 0x2a661cu: goto label_2a661c;
        case 0x2a6620u: goto label_2a6620;
        case 0x2a6624u: goto label_2a6624;
        case 0x2a6628u: goto label_2a6628;
        case 0x2a662cu: goto label_2a662c;
        case 0x2a6630u: goto label_2a6630;
        case 0x2a6634u: goto label_2a6634;
        case 0x2a6638u: goto label_2a6638;
        case 0x2a663cu: goto label_2a663c;
        case 0x2a6640u: goto label_2a6640;
        case 0x2a6644u: goto label_2a6644;
        case 0x2a6648u: goto label_2a6648;
        case 0x2a664cu: goto label_2a664c;
        case 0x2a6650u: goto label_2a6650;
        case 0x2a6654u: goto label_2a6654;
        case 0x2a6658u: goto label_2a6658;
        case 0x2a665cu: goto label_2a665c;
        case 0x2a6660u: goto label_2a6660;
        case 0x2a6664u: goto label_2a6664;
        case 0x2a6668u: goto label_2a6668;
        case 0x2a666cu: goto label_2a666c;
        case 0x2a6670u: goto label_2a6670;
        case 0x2a6674u: goto label_2a6674;
        case 0x2a6678u: goto label_2a6678;
        case 0x2a667cu: goto label_2a667c;
        case 0x2a6680u: goto label_2a6680;
        case 0x2a6684u: goto label_2a6684;
        case 0x2a6688u: goto label_2a6688;
        case 0x2a668cu: goto label_2a668c;
        case 0x2a6690u: goto label_2a6690;
        case 0x2a6694u: goto label_2a6694;
        case 0x2a6698u: goto label_2a6698;
        case 0x2a669cu: goto label_2a669c;
        case 0x2a66a0u: goto label_2a66a0;
        case 0x2a66a4u: goto label_2a66a4;
        case 0x2a66a8u: goto label_2a66a8;
        case 0x2a66acu: goto label_2a66ac;
        case 0x2a66b0u: goto label_2a66b0;
        case 0x2a66b4u: goto label_2a66b4;
        case 0x2a66b8u: goto label_2a66b8;
        case 0x2a66bcu: goto label_2a66bc;
        default: break;
    }

    ctx->pc = 0x2a62d8u;

label_2a62d8:
    // 0x2a62d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2a62d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_2a62dc:
    // 0x2a62dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a62dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a62e0:
    // 0x2a62e0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2a62e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2a62e4:
    // 0x2a62e4: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2a62e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2a62e8:
    // 0x2a62e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a62e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a62ec:
    // 0x2a62ec: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2a62ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2a62f0:
    // 0x2a62f0: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2a62f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2a62f4:
    // 0x2a62f4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2a62f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2a62f8:
    // 0x2a62f8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2a62f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2a62fc:
    // 0x2a62fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2a62fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2a6300:
    // 0x2a6300: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2a6300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2a6304:
    // 0x2a6304: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x2a6304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_2a6308:
    // 0x2a6308: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x2a6308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_2a630c:
    // 0x2a630c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a630cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6310:
    // 0x2a6310: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x2a6310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
label_2a6314:
    // 0x2a6314: 0xc0e409a  jal         func_390268
label_2a6318:
    if (ctx->pc == 0x2A6318u) {
        ctx->pc = 0x2A6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6314u;
        // 0x2a6318: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A631Cu;
        goto label_2a631c;
    }
    ctx->pc = 0x2A6314u;
    SET_GPR_U32(ctx, 31, 0x2A631Cu);
    ctx->pc = 0x2A6318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6314u;
    // 0x2a6318: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A6314u, 0x2A631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A631Cu;
label_2a631c:
    // 0x2a631c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2a631cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6320:
    // 0x2a6320: 0x126000db  beqz        $s3, . + 4 + (0xDB << 2)
label_2a6324:
    if (ctx->pc == 0x2A6324u) {
        ctx->pc = 0x2A6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6320u;
        // 0x2a6324: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6328u;
        goto label_2a6328;
    }
    ctx->pc = 0x2A6320u;
    {
        const bool branch_taken_0x2a6320 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6320u;
        // 0x2a6324: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6320) {
            ctx->pc = 0x2A6690u;
            goto label_2a6690;
        }
    }
    ctx->pc = 0x2A6328u;
label_2a6328:
    // 0x2a6328: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a6328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a632c:
    // 0x2a632c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a632cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6330:
    // 0x2a6330: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2a6330u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2a6334:
    // 0x2a6334: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a6334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a6338:
    // 0x2a6338: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a6338u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a633c:
    // 0x2a633c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a633cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a6340:
    // 0x2a6340: 0x60f809  jalr        $v1
label_2a6344:
    if (ctx->pc == 0x2A6344u) {
        ctx->pc = 0x2A6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6340u;
        // 0x2a6344: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6348u;
        goto label_2a6348;
    }
    ctx->pc = 0x2A6340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A6348u);
        ctx->pc = 0x2A6344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6340u;
        // 0x2a6344: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6340u, 0x2A6348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6348u;
label_2a6348:
    // 0x2a6348: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a6348u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a634c:
    // 0x2a634c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a634cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a6350:
    // 0x2a6350: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2a6350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2a6354:
    // 0x2a6354: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a6354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a6358:
    // 0x2a6358: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x2a6358u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2a635c:
    // 0x2a635c: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x2a635cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2a6360:
    // 0x2a6360: 0xc0f809  jalr        $a2
label_2a6364:
    if (ctx->pc == 0x2A6364u) {
        ctx->pc = 0x2A6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6360u;
        // 0x2a6364: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6368u;
        goto label_2a6368;
    }
    ctx->pc = 0x2A6360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x2A6368u);
        ctx->pc = 0x2A6364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6360u;
        // 0x2a6364: 0x2652821  addu        $a1, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6360u, 0x2A6368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6368u;
label_2a6368:
    // 0x2a6368: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2a6368u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2a636c:
    // 0x2a636c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a636cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6370:
    // 0x2a6370: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a6370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a6374:
    // 0x2a6374: 0xc0cdb38  jal         func_336CE0
label_2a6378:
    if (ctx->pc == 0x2A6378u) {
        ctx->pc = 0x2A6378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6374u;
        // 0x2a6378: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A637Cu;
        goto label_2a637c;
    }
    ctx->pc = 0x2A6374u;
    SET_GPR_U32(ctx, 31, 0x2A637Cu);
    ctx->pc = 0x2A6378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6374u;
    // 0x2a6378: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2A6374u, 0x2A637Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A637Cu;
label_2a637c:
    // 0x2a637c: 0x8623004a  lh          $v1, 0x4A($s1)
    ctx->pc = 0x2a637cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 74)));
label_2a6380:
    // 0x2a6380: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_2a6384:
    if (ctx->pc == 0x2A6384u) {
        ctx->pc = 0x2A6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6380u;
        // 0x2a6384: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6388u;
        goto label_2a6388;
    }
    ctx->pc = 0x2A6380u;
    {
        const bool branch_taken_0x2a6380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6380u;
        // 0x2a6384: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6380) {
            ctx->pc = 0x2A639Cu;
            goto label_2a639c;
        }
    }
    ctx->pc = 0x2A6388u;
label_2a6388:
    // 0x2a6388: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a6388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a638c:
    // 0x2a638c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_2a6390:
    if (ctx->pc == 0x2A6390u) {
        ctx->pc = 0x2A6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A638Cu;
        // 0x2a6390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6394u;
        goto label_2a6394;
    }
    ctx->pc = 0x2A638Cu;
    {
        const bool branch_taken_0x2a638c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A638Cu;
        // 0x2a6390: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a638c) {
            ctx->pc = 0x2A6400u;
            goto label_2a6400;
        }
    }
    ctx->pc = 0x2A6394u;
label_2a6394:
    // 0x2a6394: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_2a6398:
    if (ctx->pc == 0x2A6398u) {
        ctx->pc = 0x2A6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6394u;
        // 0x2a6398: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A639Cu;
        goto label_2a639c;
    }
    ctx->pc = 0x2A6394u;
    {
        const bool branch_taken_0x2a6394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6394u;
        // 0x2a6398: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6394) {
            ctx->pc = 0x2A6698u;
            goto label_2a6698;
        }
    }
    ctx->pc = 0x2A639Cu;
label_2a639c:
    // 0x2a639c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2a639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2a63a0:
    // 0x2a63a0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a63a4:
    // 0x2a63a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2a63a8:
    // 0x2a63a8: 0xc0a367c  jal         func_28D9F0
label_2a63ac:
    if (ctx->pc == 0x2A63ACu) {
        ctx->pc = 0x2A63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63A8u;
        // 0x2a63ac: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A63B0u;
        goto label_2a63b0;
    }
    ctx->pc = 0x2A63A8u;
    SET_GPR_U32(ctx, 31, 0x2A63B0u);
    ctx->pc = 0x2A63ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A63A8u;
    // 0x2a63ac: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A63A8u, 0x2A63B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63B0u;
label_2a63b0:
    // 0x2a63b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a63b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a63b4:
    // 0x2a63b4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_2a63b8:
    if (ctx->pc == 0x2A63B8u) {
        ctx->pc = 0x2A63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63B4u;
        // 0x2a63b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A63BCu;
        goto label_2a63bc;
    }
    ctx->pc = 0x2A63B4u;
    {
        const bool branch_taken_0x2a63b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63B4u;
        // 0x2a63b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63b4) {
            ctx->pc = 0x2A63F8u;
            goto label_2a63f8;
        }
    }
    ctx->pc = 0x2A63BCu;
label_2a63bc:
    // 0x2a63bc: 0xc10587a  jal         func_4161E8
label_2a63c0:
    if (ctx->pc == 0x2A63C0u) {
        ctx->pc = 0x2A63C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63BCu;
        // 0x2a63c0: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A63C4u;
        goto label_2a63c4;
    }
    ctx->pc = 0x2A63BCu;
    SET_GPR_U32(ctx, 31, 0x2A63C4u);
    ctx->pc = 0x2A63C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A63BCu;
    // 0x2a63c0: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A63BCu, 0x2A63C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63C4u;
label_2a63c4:
    // 0x2a63c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a63c8:
    // 0x2a63c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a63c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a63cc:
    // 0x2a63cc: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2a63ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a63d0:
    // 0x2a63d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a63d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a63d4:
    // 0x2a63d4: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x2a63d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2a63d8:
    // 0x2a63d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a63d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a63dc:
    // 0x2a63dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a63dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a63e0:
    // 0x2a63e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a63e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a63e4:
    // 0x2a63e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a63e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a63e8:
    // 0x2a63e8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a63e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a63ec:
    // 0x2a63ec: 0xc0bee7a  jal         func_2FB9E8
label_2a63f0:
    if (ctx->pc == 0x2A63F0u) {
        ctx->pc = 0x2A63F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63ECu;
        // 0x2a63f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A63F4u;
        goto label_2a63f4;
    }
    ctx->pc = 0x2A63ECu;
    SET_GPR_U32(ctx, 31, 0x2A63F4u);
    ctx->pc = 0x2A63F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A63ECu;
    // 0x2a63f0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A63ECu, 0x2A63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A63F4u;
label_2a63f4:
    // 0x2a63f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a63f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a63f8:
    // 0x2a63f8: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_2a63fc:
    if (ctx->pc == 0x2A63FCu) {
        ctx->pc = 0x2A63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63F8u;
        // 0x2a63fc: 0xa622004a  sh          $v0, 0x4A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6400u;
        goto label_2a6400;
    }
    ctx->pc = 0x2A63F8u;
    {
        const bool branch_taken_0x2a63f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A63FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A63F8u;
        // 0x2a63fc: 0xa622004a  sh          $v0, 0x4A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 74), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a63f8) {
            ctx->pc = 0x2A6690u;
            goto label_2a6690;
        }
    }
    ctx->pc = 0x2A6400u;
label_2a6400:
    // 0x2a6400: 0xc08bfb4  jal         func_22FED0
label_2a6404:
    if (ctx->pc == 0x2A6404u) {
        ctx->pc = 0x2A6404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6400u;
        // 0x2a6404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6408u;
        goto label_2a6408;
    }
    ctx->pc = 0x2A6400u;
    SET_GPR_U32(ctx, 31, 0x2A6408u);
    ctx->pc = 0x2A6404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6400u;
    // 0x2a6404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FED0u, 0x2A6400u, 0x2A6408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6408u;
label_2a6408:
    // 0x2a6408: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2a6408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a640c:
    // 0x2a640c: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2a640cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2a6410:
    // 0x2a6410: 0x1c60001c  bgtz        $v1, . + 4 + (0x1C << 2)
label_2a6414:
    if (ctx->pc == 0x2A6414u) {
        ctx->pc = 0x2A6418u;
        goto label_2a6418;
    }
    ctx->pc = 0x2A6410u;
    {
        const bool branch_taken_0x2a6410 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x2a6410) {
            ctx->pc = 0x2A6484u;
            goto label_2a6484;
        }
    }
    ctx->pc = 0x2A6418u;
label_2a6418:
    // 0x2a6418: 0xc0b81f4  jal         func_2E07D0
label_2a641c:
    if (ctx->pc == 0x2A641Cu) {
        ctx->pc = 0x2A641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6418u;
        // 0x2a641c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6420u;
        goto label_2a6420;
    }
    ctx->pc = 0x2A6418u;
    SET_GPR_U32(ctx, 31, 0x2A6420u);
    ctx->pc = 0x2A641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6418u;
    // 0x2a641c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07D0u, 0x2A6418u, 0x2A6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6420u;
label_2a6420:
    // 0x2a6420: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x2a6420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2a6424:
    // 0x2a6424: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2a6424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2a6428:
    // 0x2a6428: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a6428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a642c:
    // 0x2a642c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a6430:
    // 0x2a6430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a6430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a6434:
    // 0x2a6434: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2a6434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2a6438:
    // 0x2a6438: 0xc0a367c  jal         func_28D9F0
label_2a643c:
    if (ctx->pc == 0x2A643Cu) {
        ctx->pc = 0x2A643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6438u;
        // 0x2a643c: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6440u;
        goto label_2a6440;
    }
    ctx->pc = 0x2A6438u;
    SET_GPR_U32(ctx, 31, 0x2A6440u);
    ctx->pc = 0x2A643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6438u;
    // 0x2a643c: 0xae250028  sw          $a1, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2A6438u, 0x2A6440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6440u;
label_2a6440:
    // 0x2a6440: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6444:
    // 0x2a6444: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_2a6448:
    if (ctx->pc == 0x2A6448u) {
        ctx->pc = 0x2A644Cu;
        goto label_2a644c;
    }
    ctx->pc = 0x2A6444u;
    {
        const bool branch_taken_0x2a6444 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a6444) {
            ctx->pc = 0x2A6484u;
            goto label_2a6484;
        }
    }
    ctx->pc = 0x2A644Cu;
label_2a644c:
    // 0x2a644c: 0xc10587a  jal         func_4161E8
label_2a6450:
    if (ctx->pc == 0x2A6450u) {
        ctx->pc = 0x2A6450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A644Cu;
        // 0x2a6450: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6454u;
        goto label_2a6454;
    }
    ctx->pc = 0x2A644Cu;
    SET_GPR_U32(ctx, 31, 0x2A6454u);
    ctx->pc = 0x2A6450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A644Cu;
    // 0x2a6450: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A644Cu, 0x2A6454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6454u;
label_2a6454:
    // 0x2a6454: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a6454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a6458:
    // 0x2a6458: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a6458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a645c:
    // 0x2a645c: 0x8c6abd30  lw          $t2, -0x42D0($v1)
    ctx->pc = 0x2a645cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a6460:
    // 0x2a6460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6464:
    // 0x2a6464: 0x8e27003c  lw          $a3, 0x3C($s1)
    ctx->pc = 0x2a6464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2a6468:
    // 0x2a6468: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2a6468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a646c:
    // 0x2a646c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a646cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a6470:
    // 0x2a6470: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a6470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a6474:
    // 0x2a6474: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a6474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6478:
    // 0x2a6478: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2a6478u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a647c:
    // 0x2a647c: 0xc0bee7a  jal         func_2FB9E8
label_2a6480:
    if (ctx->pc == 0x2A6480u) {
        ctx->pc = 0x2A6480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A647Cu;
        // 0x2a6480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6484u;
        goto label_2a6484;
    }
    ctx->pc = 0x2A647Cu;
    SET_GPR_U32(ctx, 31, 0x2A6484u);
    ctx->pc = 0x2A6480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A647Cu;
    // 0x2a6480: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2A647Cu, 0x2A6484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6484u;
label_2a6484:
    // 0x2a6484: 0xc0a36c2  jal         func_28DB08
label_2a6488:
    if (ctx->pc == 0x2A6488u) {
        ctx->pc = 0x2A6488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6484u;
        // 0x2a6488: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A648Cu;
        goto label_2a648c;
    }
    ctx->pc = 0x2A6484u;
    SET_GPR_U32(ctx, 31, 0x2A648Cu);
    ctx->pc = 0x2A6488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6484u;
    // 0x2a6488: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x2A6484u, 0x2A648Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A648Cu;
label_2a648c:
    // 0x2a648c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a648cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6490:
    // 0x2a6490: 0x86300040  lh          $s0, 0x40($s1)
    ctx->pc = 0x2a6490u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
label_2a6494:
    // 0x2a6494: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a6494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a6498:
    // 0x2a6498: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_2a649c:
    if (ctx->pc == 0x2A649Cu) {
        ctx->pc = 0x2A649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6498u;
        // 0x2a649c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64A0u;
        goto label_2a64a0;
    }
    ctx->pc = 0x2A6498u;
    {
        const bool branch_taken_0x2a6498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6498u;
        // 0x2a649c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6498) {
            ctx->pc = 0x2A64B0u;
            goto label_2a64b0;
        }
    }
    ctx->pc = 0x2A64A0u;
label_2a64a0:
    // 0x2a64a0: 0x12020040  beq         $s0, $v0, . + 4 + (0x40 << 2)
label_2a64a4:
    if (ctx->pc == 0x2A64A4u) {
        ctx->pc = 0x2A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64A0u;
        // 0x2a64a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64A8u;
        goto label_2a64a8;
    }
    ctx->pc = 0x2A64A0u;
    {
        const bool branch_taken_0x2a64a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A64A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64A0u;
        // 0x2a64a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64a0) {
            ctx->pc = 0x2A65A4u;
            goto label_2a65a4;
        }
    }
    ctx->pc = 0x2A64A8u;
label_2a64a8:
    // 0x2a64a8: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2a64ac:
    if (ctx->pc == 0x2A64ACu) {
        ctx->pc = 0x2A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64A8u;
        // 0x2a64ac: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64B0u;
        goto label_2a64b0;
    }
    ctx->pc = 0x2A64A8u;
    {
        const bool branch_taken_0x2a64a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64A8u;
        // 0x2a64ac: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64a8) {
            ctx->pc = 0x2A6698u;
            goto label_2a6698;
        }
    }
    ctx->pc = 0x2A64B0u;
label_2a64b0:
    // 0x2a64b0: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2a64b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2a64b4:
    // 0x2a64b4: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x2a64b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_2a64b8:
    // 0x2a64b8: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2a64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
label_2a64bc:
    // 0x2a64bc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2a64bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2a64c0:
    // 0x2a64c0: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x2a64c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2a64c4:
    // 0x2a64c4: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
label_2a64c8:
    if (ctx->pc == 0x2A64C8u) {
        ctx->pc = 0x2A64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64C4u;
        // 0x2a64c8: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64CCu;
        goto label_2a64cc;
    }
    ctx->pc = 0x2A64C4u;
    {
        const bool branch_taken_0x2a64c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A64C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64C4u;
        // 0x2a64c8: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64c4) {
            ctx->pc = 0x2A65A4u;
            goto label_2a65a4;
        }
    }
    ctx->pc = 0x2A64CCu;
label_2a64cc:
    // 0x2a64cc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2a64d0:
    // 0x2a64d0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2a64d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a64d4:
    // 0x2a64d4: 0xc0cd4e4  jal         func_335390
label_2a64d8:
    if (ctx->pc == 0x2A64D8u) {
        ctx->pc = 0x2A64D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64D4u;
        // 0x2a64d8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64DCu;
        goto label_2a64dc;
    }
    ctx->pc = 0x2A64D4u;
    SET_GPR_U32(ctx, 31, 0x2A64DCu);
    ctx->pc = 0x2A64D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A64D4u;
    // 0x2a64d8: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A64D4u, 0x2A64DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A64DCu;
label_2a64dc:
    // 0x2a64dc: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x2a64dcu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a64e0:
    // 0x2a64e0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2a64e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2a64e4:
    // 0x2a64e4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2a64e8:
    if (ctx->pc == 0x2A64E8u) {
        ctx->pc = 0x2A64E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64E4u;
        // 0x2a64e8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64ECu;
        goto label_2a64ec;
    }
    ctx->pc = 0x2A64E4u;
    {
        const bool branch_taken_0x2a64e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a64e4) {
            ctx->pc = 0x2A64E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A64E4u;
            // 0x2a64e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A64ECu;
            goto label_2a64ec;
        }
    }
    ctx->pc = 0x2A64ECu;
label_2a64ec:
    // 0x2a64ec: 0x86230048  lh          $v1, 0x48($s1)
    ctx->pc = 0x2a64ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 72)));
label_2a64f0:
    // 0x2a64f0: 0x2010  mfhi        $a0
    ctx->pc = 0x2a64f0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a64f4:
    // 0x2a64f4: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2a64f8:
    if (ctx->pc == 0x2A64F8u) {
        ctx->pc = 0x2A64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64F4u;
        // 0x2a64f8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A64FCu;
        goto label_2a64fc;
    }
    ctx->pc = 0x2A64F4u;
    {
        const bool branch_taken_0x2a64f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A64F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A64F4u;
        // 0x2a64f8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a64f4) {
            ctx->pc = 0x2A6524u;
            goto label_2a6524;
        }
    }
    ctx->pc = 0x2A64FCu;
label_2a64fc:
    // 0x2a64fc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a64fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6500:
    // 0x2a6500: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2a6500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2a6504:
    // 0x2a6504: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2a6504u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2a6508:
    // 0x2a6508: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a6508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a650c:
    // 0x2a650c: 0x24c635c8  addiu       $a2, $a2, 0x35C8
    ctx->pc = 0x2a650cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13768));
label_2a6510:
    // 0x2a6510: 0x24e70fd0  addiu       $a3, $a3, 0xFD0
    ctx->pc = 0x2a6510u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4048));
label_2a6514:
    // 0x2a6514: 0xc10ca04  jal         func_432810
label_2a6518:
    if (ctx->pc == 0x2A6518u) {
        ctx->pc = 0x2A6518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6514u;
        // 0x2a6518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A651Cu;
        goto label_2a651c;
    }
    ctx->pc = 0x2A6514u;
    SET_GPR_U32(ctx, 31, 0x2A651Cu);
    ctx->pc = 0x2A6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6514u;
    // 0x2a6518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x2A6514u, 0x2A651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A651Cu;
label_2a651c:
    // 0x2a651c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a6520:
    if (ctx->pc == 0x2A6520u) {
        ctx->pc = 0x2A6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A651Cu;
        // 0x2a6520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6524u;
        goto label_2a6524;
    }
    ctx->pc = 0x2A651Cu;
    {
        const bool branch_taken_0x2a651c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A651Cu;
        // 0x2a6520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a651c) {
            ctx->pc = 0x2A6548u;
            goto label_2a6548;
        }
    }
    ctx->pc = 0x2A6524u;
label_2a6524:
    // 0x2a6524: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2a6524u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a6528:
    // 0x2a6528: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x2a6528u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_2a652c:
    // 0x2a652c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x2a652cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_2a6530:
    // 0x2a6530: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a6530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_2a6534:
    // 0x2a6534: 0x24c635d8  addiu       $a2, $a2, 0x35D8
    ctx->pc = 0x2a6534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13784));
label_2a6538:
    // 0x2a6538: 0x24e70fd0  addiu       $a3, $a3, 0xFD0
    ctx->pc = 0x2a6538u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4048));
label_2a653c:
    // 0x2a653c: 0xc10ca04  jal         func_432810
label_2a6540:
    if (ctx->pc == 0x2A6540u) {
        ctx->pc = 0x2A6540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A653Cu;
        // 0x2a6540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6544u;
        goto label_2a6544;
    }
    ctx->pc = 0x2A653Cu;
    SET_GPR_U32(ctx, 31, 0x2A6544u);
    ctx->pc = 0x2A6540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A653Cu;
    // 0x2a6540: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x2A653Cu, 0x2A6544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6544u;
label_2a6544:
    // 0x2a6544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a6544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6548:
    // 0x2a6548: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2a6548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_2a654c:
    // 0x2a654c: 0xc050fda  jal         func_143F68
label_2a6550:
    if (ctx->pc == 0x2A6550u) {
        ctx->pc = 0x2A6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A654Cu;
        // 0x2a6550: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6554u;
        goto label_2a6554;
    }
    ctx->pc = 0x2A654Cu;
    SET_GPR_U32(ctx, 31, 0x2A6554u);
    ctx->pc = 0x2A6550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A654Cu;
    // 0x2a6550: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2A654Cu, 0x2A6554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6554u;
label_2a6554:
    // 0x2a6554: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2a6558:
    // 0x2a6558: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a6558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2a655c:
    // 0x2a655c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a655cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6560:
    // 0x2a6560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2a6560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a6564:
    // 0x2a6564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a6564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6568:
    // 0x2a6568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a6568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a656c:
    // 0x2a656c: 0xc087900  jal         func_21E400
label_2a6570:
    if (ctx->pc == 0x2A6570u) {
        ctx->pc = 0x2A6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A656Cu;
        // 0x2a6570: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6574u;
        goto label_2a6574;
    }
    ctx->pc = 0x2A656Cu;
    SET_GPR_U32(ctx, 31, 0x2A6574u);
    ctx->pc = 0x2A6570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A656Cu;
    // 0x2a6570: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E400u, 0x2A656Cu, 0x2A6574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6574u;
label_2a6574:
    // 0x2a6574: 0x8ec3b734  lw          $v1, -0x48CC($s6)
    ctx->pc = 0x2a6574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294948660)));
label_2a6578:
    // 0x2a6578: 0x26a4b880  addiu       $a0, $s5, -0x4780
    ctx->pc = 0x2a6578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948992));
label_2a657c:
    // 0x2a657c: 0xc0cd4e4  jal         func_335390
label_2a6580:
    if (ctx->pc == 0x2A6580u) {
        ctx->pc = 0x2A6580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A657Cu;
        // 0x2a6580: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6584u;
        goto label_2a6584;
    }
    ctx->pc = 0x2A657Cu;
    SET_GPR_U32(ctx, 31, 0x2A6584u);
    ctx->pc = 0x2A6580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A657Cu;
    // 0x2a6580: 0x8c700048  lw          $s0, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2A657Cu, 0x2A6584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6584u;
label_2a6584:
    // 0x2a6584: 0x24031388  addiu       $v1, $zero, 0x1388
    ctx->pc = 0x2a6584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_2a6588:
    // 0x2a6588: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2a6588u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2a658c:
    // 0x2a658c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2a6590:
    if (ctx->pc == 0x2A6590u) {
        ctx->pc = 0x2A6590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A658Cu;
        // 0x2a6590: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6594u;
        goto label_2a6594;
    }
    ctx->pc = 0x2A658Cu;
    {
        const bool branch_taken_0x2a658c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a658c) {
            ctx->pc = 0x2A6590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A658Cu;
            // 0x2a6590: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A6594u;
            goto label_2a6594;
        }
    }
    ctx->pc = 0x2A6594u;
label_2a6594:
    // 0x2a6594: 0x2010  mfhi        $a0
    ctx->pc = 0x2a6594u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2a6598:
    // 0x2a6598: 0x24841388  addiu       $a0, $a0, 0x1388
    ctx->pc = 0x2a6598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5000));
label_2a659c:
    // 0x2a659c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x2a659cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2a65a0:
    // 0x2a65a0: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x2a65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
label_2a65a4:
    // 0x2a65a4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2a65a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_2a65a8:
    // 0x2a65a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a65a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a65ac:
    // 0x2a65ac: 0x0  nop
    ctx->pc = 0x2a65acu;
    // NOP
label_2a65b0:
    // 0x2a65b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a65b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a65b4:
    // 0x2a65b4: 0x0  nop
    ctx->pc = 0x2a65b4u;
    // NOP
label_2a65b8:
    // 0x2a65b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2a65bc:
    if (ctx->pc == 0x2A65BCu) {
        ctx->pc = 0x2A65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65B8u;
        // 0x2a65bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A65C0u;
        goto label_2a65c0;
    }
    ctx->pc = 0x2A65B8u;
    {
        const bool branch_taken_0x2a65b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A65BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65B8u;
        // 0x2a65bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65b8) {
            ctx->pc = 0x2A65D0u;
            goto label_2a65d0;
        }
    }
    ctx->pc = 0x2A65C0u;
label_2a65c0:
    // 0x2a65c0: 0xc0bf0fa  jal         func_2FC3E8
label_2a65c4:
    if (ctx->pc == 0x2A65C4u) {
        ctx->pc = 0x2A65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65C0u;
        // 0x2a65c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A65C8u;
        goto label_2a65c8;
    }
    ctx->pc = 0x2A65C0u;
    SET_GPR_U32(ctx, 31, 0x2A65C8u);
    ctx->pc = 0x2A65C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65C0u;
    // 0x2a65c4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2A65C0u, 0x2A65C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65C8u;
label_2a65c8:
    // 0x2a65c8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2a65cc:
    if (ctx->pc == 0x2A65CCu) {
        ctx->pc = 0x2A65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65C8u;
        // 0x2a65cc: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A65D0u;
        goto label_2a65d0;
    }
    ctx->pc = 0x2A65C8u;
    {
        const bool branch_taken_0x2a65c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A65CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65C8u;
        // 0x2a65cc: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65c8) {
            ctx->pc = 0x2A65DCu;
            goto label_2a65dc;
        }
    }
    ctx->pc = 0x2A65D0u;
label_2a65d0:
    // 0x2a65d0: 0xc0bf0fa  jal         func_2FC3E8
label_2a65d4:
    if (ctx->pc == 0x2A65D4u) {
        ctx->pc = 0x2A65D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65D0u;
        // 0x2a65d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A65D8u;
        goto label_2a65d8;
    }
    ctx->pc = 0x2A65D0u;
    SET_GPR_U32(ctx, 31, 0x2A65D8u);
    ctx->pc = 0x2A65D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65D0u;
    // 0x2a65d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC3E8u, 0x2A65D0u, 0x2A65D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65D8u;
label_2a65d8:
    // 0x2a65d8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x2a65d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2a65dc:
    // 0x2a65dc: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2a65e0:
    if (ctx->pc == 0x2A65E0u) {
        ctx->pc = 0x2A65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65DCu;
        // 0x2a65e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A65E4u;
        goto label_2a65e4;
    }
    ctx->pc = 0x2A65DCu;
    {
        const bool branch_taken_0x2a65dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A65E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65DCu;
        // 0x2a65e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65dc) {
            ctx->pc = 0x2A6694u;
            goto label_2a6694;
        }
    }
    ctx->pc = 0x2A65E4u;
label_2a65e4:
    // 0x2a65e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2a65e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a65e8:
    // 0x2a65e8: 0xc0a2fd0  jal         func_28BF40
label_2a65ec:
    if (ctx->pc == 0x2A65ECu) {
        ctx->pc = 0x2A65ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65E8u;
        // 0x2a65ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A65F0u;
        goto label_2a65f0;
    }
    ctx->pc = 0x2A65E8u;
    SET_GPR_U32(ctx, 31, 0x2A65F0u);
    ctx->pc = 0x2A65ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A65E8u;
    // 0x2a65ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF40u, 0x2A65E8u, 0x2A65F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A65F0u;
label_2a65f0:
    // 0x2a65f0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2a65f4:
    if (ctx->pc == 0x2A65F4u) {
        ctx->pc = 0x2A65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65F0u;
        // 0x2a65f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A65F8u;
        goto label_2a65f8;
    }
    ctx->pc = 0x2A65F0u;
    {
        const bool branch_taken_0x2a65f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A65F0u;
        // 0x2a65f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a65f0) {
            ctx->pc = 0x2A6694u;
            goto label_2a6694;
        }
    }
    ctx->pc = 0x2A65F8u;
label_2a65f8:
    // 0x2a65f8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2a65f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2a65fc:
    // 0x2a65fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a65fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2a6600:
    // 0x2a6600: 0x0  nop
    ctx->pc = 0x2a6600u;
    // NOP
label_2a6604:
    // 0x2a6604: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2a6604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2a6608:
    // 0x2a6608: 0x0  nop
    ctx->pc = 0x2a6608u;
    // NOP
label_2a660c:
    // 0x2a660c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_2a6610:
    if (ctx->pc == 0x2A6610u) {
        ctx->pc = 0x2A6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A660Cu;
        // 0x2a6610: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6614u;
        goto label_2a6614;
    }
    ctx->pc = 0x2A660Cu;
    {
        const bool branch_taken_0x2a660c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A660Cu;
        // 0x2a6610: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a660c) {
            ctx->pc = 0x2A6698u;
            goto label_2a6698;
        }
    }
    ctx->pc = 0x2A6614u;
label_2a6614:
    // 0x2a6614: 0xc0a36c8  jal         func_28DB20
label_2a6618:
    if (ctx->pc == 0x2A6618u) {
        ctx->pc = 0x2A6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6614u;
        // 0x2a6618: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A661Cu;
        goto label_2a661c;
    }
    ctx->pc = 0x2A6614u;
    SET_GPR_U32(ctx, 31, 0x2A661Cu);
    ctx->pc = 0x2A6618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6614u;
    // 0x2a6618: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2A6614u, 0x2A661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A661Cu;
label_2a661c:
    // 0x2a661c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a661cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a6620:
    // 0x2a6620: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6624:
    // 0x2a6624: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6628:
    // 0x2a6628: 0x40f809  jalr        $v0
label_2a662c:
    if (ctx->pc == 0x2A662Cu) {
        ctx->pc = 0x2A662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6628u;
        // 0x2a662c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6630u;
        goto label_2a6630;
    }
    ctx->pc = 0x2A6628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6630u);
        ctx->pc = 0x2A662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6628u;
        // 0x2a662c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6628u, 0x2A6630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6630u;
label_2a6630:
    // 0x2a6630: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a6630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6634:
    // 0x2a6634: 0xc0bf3ae  jal         func_2FCEB8
label_2a6638:
    if (ctx->pc == 0x2A6638u) {
        ctx->pc = 0x2A6638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6634u;
        // 0x2a6638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A663Cu;
        goto label_2a663c;
    }
    ctx->pc = 0x2A6634u;
    SET_GPR_U32(ctx, 31, 0x2A663Cu);
    ctx->pc = 0x2A6638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6634u;
    // 0x2a6638: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FCEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FCEB8u, 0x2A6634u, 0x2A663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A663Cu;
label_2a663c:
    // 0x2a663c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2a663cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2a6640:
    // 0x2a6640: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2a6640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2a6644:
    // 0x2a6644: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x2a6644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2a6648:
    // 0x2a6648: 0xe6340038  swc1        $f20, 0x38($s1)
    ctx->pc = 0x2a6648u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
label_2a664c:
    // 0x2a664c: 0xae240034  sw          $a0, 0x34($s1)
    ctx->pc = 0x2a664cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 4));
label_2a6650:
    // 0x2a6650: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2a6650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2a6654:
    // 0x2a6654: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a6654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6658:
    // 0x2a6658: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a665c:
    // 0x2a665c: 0x40f809  jalr        $v0
label_2a6660:
    if (ctx->pc == 0x2A6660u) {
        ctx->pc = 0x2A6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A665Cu;
        // 0x2a6660: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6664u;
        goto label_2a6664;
    }
    ctx->pc = 0x2A665Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A6664u);
        ctx->pc = 0x2A6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A665Cu;
        // 0x2a6660: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A665Cu, 0x2A6664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A6664u;
label_2a6664:
    // 0x2a6664: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2a6664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2a6668:
    // 0x2a6668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a6668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a666c:
    // 0x2a666c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2a666cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2a6670:
    // 0x2a6670: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2a6670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2a6674:
    // 0x2a6674: 0x40f809  jalr        $v0
label_2a6678:
    if (ctx->pc == 0x2A6678u) {
        ctx->pc = 0x2A6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6674u;
        // 0x2a6678: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A667Cu;
        goto label_2a667c;
    }
    ctx->pc = 0x2A6674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A667Cu);
        ctx->pc = 0x2A6678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6674u;
        // 0x2a6678: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6674u, 0x2A667Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A667Cu;
label_2a667c:
    // 0x2a667c: 0x8e270044  lw          $a3, 0x44($s1)
    ctx->pc = 0x2a667cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_2a6680:
    // 0x2a6680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a6680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a6684:
    // 0x2a6684: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a6684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a6688:
    // 0x2a6688: 0xc0a9ad4  jal         func_2A6B50
label_2a668c:
    if (ctx->pc == 0x2A668Cu) {
        ctx->pc = 0x2A668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6688u;
        // 0x2a668c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A6690u;
        goto label_2a6690;
    }
    ctx->pc = 0x2A6688u;
    SET_GPR_U32(ctx, 31, 0x2A6690u);
    ctx->pc = 0x2A668Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A6688u;
    // 0x2a668c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6B50u, 0x2A6688u, 0x2A6690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A6690u;
label_2a6690:
    // 0x2a6690: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a6690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a6694:
    // 0x2a6694: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2a6694u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2a6698:
    // 0x2a6698: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2a6698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2a669c:
    // 0x2a669c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2a669cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a66a0:
    // 0x2a66a0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2a66a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a66a4:
    // 0x2a66a4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2a66a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a66a8:
    // 0x2a66a8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2a66a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a66ac:
    // 0x2a66ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2a66acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a66b0:
    // 0x2a66b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2a66b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a66b4:
    // 0x2a66b4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2a66b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2a66b8:
    // 0x2a66b8: 0x3e00008  jr          $ra
label_2a66bc:
    if (ctx->pc == 0x2A66BCu) {
        ctx->pc = 0x2A66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66B8u;
        // 0x2a66bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A66C0u;
        goto label_fallthrough_0x2a66b8;
    }
    ctx->pc = 0x2A66B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A66BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A66B8u;
        // 0x2a66bc: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A66B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a66b8:
    ctx->pc = 0x2A66C0u;
}
