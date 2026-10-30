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

// Function: sub_003DC678
// Address: 0x3dc678 - 0x3dcb08
void sub_003DC678_0x3dc678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DC678_0x3dc678");
#endif

    switch (ctx->pc) {
        case 0x3dc678u: goto label_3dc678;
        case 0x3dc67cu: goto label_3dc67c;
        case 0x3dc680u: goto label_3dc680;
        case 0x3dc684u: goto label_3dc684;
        case 0x3dc688u: goto label_3dc688;
        case 0x3dc68cu: goto label_3dc68c;
        case 0x3dc690u: goto label_3dc690;
        case 0x3dc694u: goto label_3dc694;
        case 0x3dc698u: goto label_3dc698;
        case 0x3dc69cu: goto label_3dc69c;
        case 0x3dc6a0u: goto label_3dc6a0;
        case 0x3dc6a4u: goto label_3dc6a4;
        case 0x3dc6a8u: goto label_3dc6a8;
        case 0x3dc6acu: goto label_3dc6ac;
        case 0x3dc6b0u: goto label_3dc6b0;
        case 0x3dc6b4u: goto label_3dc6b4;
        case 0x3dc6b8u: goto label_3dc6b8;
        case 0x3dc6bcu: goto label_3dc6bc;
        case 0x3dc6c0u: goto label_3dc6c0;
        case 0x3dc6c4u: goto label_3dc6c4;
        case 0x3dc6c8u: goto label_3dc6c8;
        case 0x3dc6ccu: goto label_3dc6cc;
        case 0x3dc6d0u: goto label_3dc6d0;
        case 0x3dc6d4u: goto label_3dc6d4;
        case 0x3dc6d8u: goto label_3dc6d8;
        case 0x3dc6dcu: goto label_3dc6dc;
        case 0x3dc6e0u: goto label_3dc6e0;
        case 0x3dc6e4u: goto label_3dc6e4;
        case 0x3dc6e8u: goto label_3dc6e8;
        case 0x3dc6ecu: goto label_3dc6ec;
        case 0x3dc6f0u: goto label_3dc6f0;
        case 0x3dc6f4u: goto label_3dc6f4;
        case 0x3dc6f8u: goto label_3dc6f8;
        case 0x3dc6fcu: goto label_3dc6fc;
        case 0x3dc700u: goto label_3dc700;
        case 0x3dc704u: goto label_3dc704;
        case 0x3dc708u: goto label_3dc708;
        case 0x3dc70cu: goto label_3dc70c;
        case 0x3dc710u: goto label_3dc710;
        case 0x3dc714u: goto label_3dc714;
        case 0x3dc718u: goto label_3dc718;
        case 0x3dc71cu: goto label_3dc71c;
        case 0x3dc720u: goto label_3dc720;
        case 0x3dc724u: goto label_3dc724;
        case 0x3dc728u: goto label_3dc728;
        case 0x3dc72cu: goto label_3dc72c;
        case 0x3dc730u: goto label_3dc730;
        case 0x3dc734u: goto label_3dc734;
        case 0x3dc738u: goto label_3dc738;
        case 0x3dc73cu: goto label_3dc73c;
        case 0x3dc740u: goto label_3dc740;
        case 0x3dc744u: goto label_3dc744;
        case 0x3dc748u: goto label_3dc748;
        case 0x3dc74cu: goto label_3dc74c;
        case 0x3dc750u: goto label_3dc750;
        case 0x3dc754u: goto label_3dc754;
        case 0x3dc758u: goto label_3dc758;
        case 0x3dc75cu: goto label_3dc75c;
        case 0x3dc760u: goto label_3dc760;
        case 0x3dc764u: goto label_3dc764;
        case 0x3dc768u: goto label_3dc768;
        case 0x3dc76cu: goto label_3dc76c;
        case 0x3dc770u: goto label_3dc770;
        case 0x3dc774u: goto label_3dc774;
        case 0x3dc778u: goto label_3dc778;
        case 0x3dc77cu: goto label_3dc77c;
        case 0x3dc780u: goto label_3dc780;
        case 0x3dc784u: goto label_3dc784;
        case 0x3dc788u: goto label_3dc788;
        case 0x3dc78cu: goto label_3dc78c;
        case 0x3dc790u: goto label_3dc790;
        case 0x3dc794u: goto label_3dc794;
        case 0x3dc798u: goto label_3dc798;
        case 0x3dc79cu: goto label_3dc79c;
        case 0x3dc7a0u: goto label_3dc7a0;
        case 0x3dc7a4u: goto label_3dc7a4;
        case 0x3dc7a8u: goto label_3dc7a8;
        case 0x3dc7acu: goto label_3dc7ac;
        case 0x3dc7b0u: goto label_3dc7b0;
        case 0x3dc7b4u: goto label_3dc7b4;
        case 0x3dc7b8u: goto label_3dc7b8;
        case 0x3dc7bcu: goto label_3dc7bc;
        case 0x3dc7c0u: goto label_3dc7c0;
        case 0x3dc7c4u: goto label_3dc7c4;
        case 0x3dc7c8u: goto label_3dc7c8;
        case 0x3dc7ccu: goto label_3dc7cc;
        case 0x3dc7d0u: goto label_3dc7d0;
        case 0x3dc7d4u: goto label_3dc7d4;
        case 0x3dc7d8u: goto label_3dc7d8;
        case 0x3dc7dcu: goto label_3dc7dc;
        case 0x3dc7e0u: goto label_3dc7e0;
        case 0x3dc7e4u: goto label_3dc7e4;
        case 0x3dc7e8u: goto label_3dc7e8;
        case 0x3dc7ecu: goto label_3dc7ec;
        case 0x3dc7f0u: goto label_3dc7f0;
        case 0x3dc7f4u: goto label_3dc7f4;
        case 0x3dc7f8u: goto label_3dc7f8;
        case 0x3dc7fcu: goto label_3dc7fc;
        case 0x3dc800u: goto label_3dc800;
        case 0x3dc804u: goto label_3dc804;
        case 0x3dc808u: goto label_3dc808;
        case 0x3dc80cu: goto label_3dc80c;
        case 0x3dc810u: goto label_3dc810;
        case 0x3dc814u: goto label_3dc814;
        case 0x3dc818u: goto label_3dc818;
        case 0x3dc81cu: goto label_3dc81c;
        case 0x3dc820u: goto label_3dc820;
        case 0x3dc824u: goto label_3dc824;
        case 0x3dc828u: goto label_3dc828;
        case 0x3dc82cu: goto label_3dc82c;
        case 0x3dc830u: goto label_3dc830;
        case 0x3dc834u: goto label_3dc834;
        case 0x3dc838u: goto label_3dc838;
        case 0x3dc83cu: goto label_3dc83c;
        case 0x3dc840u: goto label_3dc840;
        case 0x3dc844u: goto label_3dc844;
        case 0x3dc848u: goto label_3dc848;
        case 0x3dc84cu: goto label_3dc84c;
        case 0x3dc850u: goto label_3dc850;
        case 0x3dc854u: goto label_3dc854;
        case 0x3dc858u: goto label_3dc858;
        case 0x3dc85cu: goto label_3dc85c;
        case 0x3dc860u: goto label_3dc860;
        case 0x3dc864u: goto label_3dc864;
        case 0x3dc868u: goto label_3dc868;
        case 0x3dc86cu: goto label_3dc86c;
        case 0x3dc870u: goto label_3dc870;
        case 0x3dc874u: goto label_3dc874;
        case 0x3dc878u: goto label_3dc878;
        case 0x3dc87cu: goto label_3dc87c;
        case 0x3dc880u: goto label_3dc880;
        case 0x3dc884u: goto label_3dc884;
        case 0x3dc888u: goto label_3dc888;
        case 0x3dc88cu: goto label_3dc88c;
        case 0x3dc890u: goto label_3dc890;
        case 0x3dc894u: goto label_3dc894;
        case 0x3dc898u: goto label_3dc898;
        case 0x3dc89cu: goto label_3dc89c;
        case 0x3dc8a0u: goto label_3dc8a0;
        case 0x3dc8a4u: goto label_3dc8a4;
        case 0x3dc8a8u: goto label_3dc8a8;
        case 0x3dc8acu: goto label_3dc8ac;
        case 0x3dc8b0u: goto label_3dc8b0;
        case 0x3dc8b4u: goto label_3dc8b4;
        case 0x3dc8b8u: goto label_3dc8b8;
        case 0x3dc8bcu: goto label_3dc8bc;
        case 0x3dc8c0u: goto label_3dc8c0;
        case 0x3dc8c4u: goto label_3dc8c4;
        case 0x3dc8c8u: goto label_3dc8c8;
        case 0x3dc8ccu: goto label_3dc8cc;
        case 0x3dc8d0u: goto label_3dc8d0;
        case 0x3dc8d4u: goto label_3dc8d4;
        case 0x3dc8d8u: goto label_3dc8d8;
        case 0x3dc8dcu: goto label_3dc8dc;
        case 0x3dc8e0u: goto label_3dc8e0;
        case 0x3dc8e4u: goto label_3dc8e4;
        case 0x3dc8e8u: goto label_3dc8e8;
        case 0x3dc8ecu: goto label_3dc8ec;
        case 0x3dc8f0u: goto label_3dc8f0;
        case 0x3dc8f4u: goto label_3dc8f4;
        case 0x3dc8f8u: goto label_3dc8f8;
        case 0x3dc8fcu: goto label_3dc8fc;
        case 0x3dc900u: goto label_3dc900;
        case 0x3dc904u: goto label_3dc904;
        case 0x3dc908u: goto label_3dc908;
        case 0x3dc90cu: goto label_3dc90c;
        case 0x3dc910u: goto label_3dc910;
        case 0x3dc914u: goto label_3dc914;
        case 0x3dc918u: goto label_3dc918;
        case 0x3dc91cu: goto label_3dc91c;
        case 0x3dc920u: goto label_3dc920;
        case 0x3dc924u: goto label_3dc924;
        case 0x3dc928u: goto label_3dc928;
        case 0x3dc92cu: goto label_3dc92c;
        case 0x3dc930u: goto label_3dc930;
        case 0x3dc934u: goto label_3dc934;
        case 0x3dc938u: goto label_3dc938;
        case 0x3dc93cu: goto label_3dc93c;
        case 0x3dc940u: goto label_3dc940;
        case 0x3dc944u: goto label_3dc944;
        case 0x3dc948u: goto label_3dc948;
        case 0x3dc94cu: goto label_3dc94c;
        case 0x3dc950u: goto label_3dc950;
        case 0x3dc954u: goto label_3dc954;
        case 0x3dc958u: goto label_3dc958;
        case 0x3dc95cu: goto label_3dc95c;
        case 0x3dc960u: goto label_3dc960;
        case 0x3dc964u: goto label_3dc964;
        case 0x3dc968u: goto label_3dc968;
        case 0x3dc96cu: goto label_3dc96c;
        case 0x3dc970u: goto label_3dc970;
        case 0x3dc974u: goto label_3dc974;
        case 0x3dc978u: goto label_3dc978;
        case 0x3dc97cu: goto label_3dc97c;
        case 0x3dc980u: goto label_3dc980;
        case 0x3dc984u: goto label_3dc984;
        case 0x3dc988u: goto label_3dc988;
        case 0x3dc98cu: goto label_3dc98c;
        case 0x3dc990u: goto label_3dc990;
        case 0x3dc994u: goto label_3dc994;
        case 0x3dc998u: goto label_3dc998;
        case 0x3dc99cu: goto label_3dc99c;
        case 0x3dc9a0u: goto label_3dc9a0;
        case 0x3dc9a4u: goto label_3dc9a4;
        case 0x3dc9a8u: goto label_3dc9a8;
        case 0x3dc9acu: goto label_3dc9ac;
        case 0x3dc9b0u: goto label_3dc9b0;
        case 0x3dc9b4u: goto label_3dc9b4;
        case 0x3dc9b8u: goto label_3dc9b8;
        case 0x3dc9bcu: goto label_3dc9bc;
        case 0x3dc9c0u: goto label_3dc9c0;
        case 0x3dc9c4u: goto label_3dc9c4;
        case 0x3dc9c8u: goto label_3dc9c8;
        case 0x3dc9ccu: goto label_3dc9cc;
        case 0x3dc9d0u: goto label_3dc9d0;
        case 0x3dc9d4u: goto label_3dc9d4;
        case 0x3dc9d8u: goto label_3dc9d8;
        case 0x3dc9dcu: goto label_3dc9dc;
        case 0x3dc9e0u: goto label_3dc9e0;
        case 0x3dc9e4u: goto label_3dc9e4;
        case 0x3dc9e8u: goto label_3dc9e8;
        case 0x3dc9ecu: goto label_3dc9ec;
        case 0x3dc9f0u: goto label_3dc9f0;
        case 0x3dc9f4u: goto label_3dc9f4;
        case 0x3dc9f8u: goto label_3dc9f8;
        case 0x3dc9fcu: goto label_3dc9fc;
        case 0x3dca00u: goto label_3dca00;
        case 0x3dca04u: goto label_3dca04;
        case 0x3dca08u: goto label_3dca08;
        case 0x3dca0cu: goto label_3dca0c;
        case 0x3dca10u: goto label_3dca10;
        case 0x3dca14u: goto label_3dca14;
        case 0x3dca18u: goto label_3dca18;
        case 0x3dca1cu: goto label_3dca1c;
        case 0x3dca20u: goto label_3dca20;
        case 0x3dca24u: goto label_3dca24;
        case 0x3dca28u: goto label_3dca28;
        case 0x3dca2cu: goto label_3dca2c;
        case 0x3dca30u: goto label_3dca30;
        case 0x3dca34u: goto label_3dca34;
        case 0x3dca38u: goto label_3dca38;
        case 0x3dca3cu: goto label_3dca3c;
        case 0x3dca40u: goto label_3dca40;
        case 0x3dca44u: goto label_3dca44;
        case 0x3dca48u: goto label_3dca48;
        case 0x3dca4cu: goto label_3dca4c;
        case 0x3dca50u: goto label_3dca50;
        case 0x3dca54u: goto label_3dca54;
        case 0x3dca58u: goto label_3dca58;
        case 0x3dca5cu: goto label_3dca5c;
        case 0x3dca60u: goto label_3dca60;
        case 0x3dca64u: goto label_3dca64;
        case 0x3dca68u: goto label_3dca68;
        case 0x3dca6cu: goto label_3dca6c;
        case 0x3dca70u: goto label_3dca70;
        case 0x3dca74u: goto label_3dca74;
        case 0x3dca78u: goto label_3dca78;
        case 0x3dca7cu: goto label_3dca7c;
        case 0x3dca80u: goto label_3dca80;
        case 0x3dca84u: goto label_3dca84;
        case 0x3dca88u: goto label_3dca88;
        case 0x3dca8cu: goto label_3dca8c;
        case 0x3dca90u: goto label_3dca90;
        case 0x3dca94u: goto label_3dca94;
        case 0x3dca98u: goto label_3dca98;
        case 0x3dca9cu: goto label_3dca9c;
        case 0x3dcaa0u: goto label_3dcaa0;
        case 0x3dcaa4u: goto label_3dcaa4;
        case 0x3dcaa8u: goto label_3dcaa8;
        case 0x3dcaacu: goto label_3dcaac;
        case 0x3dcab0u: goto label_3dcab0;
        case 0x3dcab4u: goto label_3dcab4;
        case 0x3dcab8u: goto label_3dcab8;
        case 0x3dcabcu: goto label_3dcabc;
        case 0x3dcac0u: goto label_3dcac0;
        case 0x3dcac4u: goto label_3dcac4;
        case 0x3dcac8u: goto label_3dcac8;
        case 0x3dcaccu: goto label_3dcacc;
        case 0x3dcad0u: goto label_3dcad0;
        case 0x3dcad4u: goto label_3dcad4;
        case 0x3dcad8u: goto label_3dcad8;
        case 0x3dcadcu: goto label_3dcadc;
        case 0x3dcae0u: goto label_3dcae0;
        case 0x3dcae4u: goto label_3dcae4;
        case 0x3dcae8u: goto label_3dcae8;
        case 0x3dcaecu: goto label_3dcaec;
        case 0x3dcaf0u: goto label_3dcaf0;
        case 0x3dcaf4u: goto label_3dcaf4;
        case 0x3dcaf8u: goto label_3dcaf8;
        case 0x3dcafcu: goto label_3dcafc;
        case 0x3dcb00u: goto label_3dcb00;
        case 0x3dcb04u: goto label_3dcb04;
        default: break;
    }

    ctx->pc = 0x3dc678u;

label_3dc678:
    // 0x3dc678: 0x7fb40560  sq          $s4, 0x560($sp)
    ctx->pc = 0x3dc678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1376), GPR_VEC(ctx, 20));
label_3dc67c:
    // 0x3dc67c: 0x7fb60540  sq          $s6, 0x540($sp)
    ctx->pc = 0x3dc67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1344), GPR_VEC(ctx, 22));
label_3dc680:
    // 0x3dc680: 0x7fb70530  sq          $s7, 0x530($sp)
    ctx->pc = 0x3dc680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1328), GPR_VEC(ctx, 23));
label_3dc684:
    // 0x3dc684: 0x7fbe0520  sq          $fp, 0x520($sp)
    ctx->pc = 0x3dc684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1312), GPR_VEC(ctx, 30));
label_3dc688:
    // 0x3dc688: 0xffbf0510  sd          $ra, 0x510($sp)
    ctx->pc = 0x3dc688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1296), GPR_U64(ctx, 31));
label_3dc68c:
    // 0x3dc68c: 0xe7b905d8  swc1        $f25, 0x5D8($sp)
    ctx->pc = 0x3dc68cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1496), bits); }
label_3dc690:
    // 0x3dc690: 0xe7b805d0  swc1        $f24, 0x5D0($sp)
    ctx->pc = 0x3dc690u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1488), bits); }
label_3dc694:
    // 0x3dc694: 0xe7b705c8  swc1        $f23, 0x5C8($sp)
    ctx->pc = 0x3dc694u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1480), bits); }
label_3dc698:
    // 0x3dc698: 0xe7b605c0  swc1        $f22, 0x5C0($sp)
    ctx->pc = 0x3dc698u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1472), bits); }
label_3dc69c:
    // 0x3dc69c: 0xe7b505b8  swc1        $f21, 0x5B8($sp)
    ctx->pc = 0x3dc69cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1464), bits); }
label_3dc6a0:
    // 0x3dc6a0: 0xe7b405b0  swc1        $f20, 0x5B0($sp)
    ctx->pc = 0x3dc6a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1456), bits); }
label_3dc6a4:
    // 0x3dc6a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3dc6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3dc6a8:
    // 0x3dc6a8: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dc6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dc6ac:
    // 0x3dc6ac: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dc6b0:
    // 0x3dc6b0: 0x40f809  jalr        $v0
label_3dc6b4:
    if (ctx->pc == 0x3DC6B4u) {
        ctx->pc = 0x3DC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6B0u;
        // 0x3dc6b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6B8u;
        goto label_3dc6b8;
    }
    ctx->pc = 0x3DC6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DC6B8u);
        ctx->pc = 0x3DC6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6B0u;
        // 0x3dc6b4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DC6B0u, 0x3DC6B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DC6B8u;
label_3dc6b8:
    // 0x3dc6b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3dc6b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dc6bc:
    // 0x3dc6bc: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x3dc6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
label_3dc6c0:
    // 0x3dc6c0: 0x24020c04  addiu       $v0, $zero, 0xC04
    ctx->pc = 0x3dc6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3076));
label_3dc6c4:
    // 0x3dc6c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dc6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc6c8:
    // 0x3dc6c8: 0xc0ea14c  jal         func_3A8530
label_3dc6cc:
    if (ctx->pc == 0x3DC6CCu) {
        ctx->pc = 0x3DC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6C8u;
        // 0x3dc6cc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6D0u;
        goto label_3dc6d0;
    }
    ctx->pc = 0x3DC6C8u;
    SET_GPR_U32(ctx, 31, 0x3DC6D0u);
    ctx->pc = 0x3DC6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC6C8u;
    // 0x3dc6cc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3DC6C8u, 0x3DC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC6D0u;
label_3dc6d0:
    // 0x3dc6d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dc6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dc6d4:
    // 0x3dc6d4: 0xc0ea12a  jal         func_3A84A8
label_3dc6d8:
    if (ctx->pc == 0x3DC6D8u) {
        ctx->pc = 0x3DC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6D4u;
        // 0x3dc6d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6DCu;
        goto label_3dc6dc;
    }
    ctx->pc = 0x3DC6D4u;
    SET_GPR_U32(ctx, 31, 0x3DC6DCu);
    ctx->pc = 0x3DC6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC6D4u;
    // 0x3dc6d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DC6D4u, 0x3DC6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC6DCu;
label_3dc6dc:
    // 0x3dc6dc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dc6dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc6e0:
    // 0x3dc6e0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3dc6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3dc6e4:
    // 0x3dc6e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3dc6e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dc6e8:
    // 0x3dc6e8: 0xc0ea12a  jal         func_3A84A8
label_3dc6ec:
    if (ctx->pc == 0x3DC6ECu) {
        ctx->pc = 0x3DC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6E8u;
        // 0x3dc6ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC6F0u;
        goto label_3dc6f0;
    }
    ctx->pc = 0x3DC6E8u;
    SET_GPR_U32(ctx, 31, 0x3DC6F0u);
    ctx->pc = 0x3DC6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC6E8u;
    // 0x3dc6ec: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DC6E8u, 0x3DC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC6F0u;
label_3dc6f0:
    // 0x3dc6f0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dc6f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc6f4:
    // 0x3dc6f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dc6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dc6f8:
    // 0x3dc6f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dc6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3dc6fc:
    // 0x3dc6fc: 0xc0e858c  jal         func_3A1630
label_3dc700:
    if (ctx->pc == 0x3DC700u) {
        ctx->pc = 0x3DC700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC6FCu;
        // 0x3dc700: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC704u;
        goto label_3dc704;
    }
    ctx->pc = 0x3DC6FCu;
    SET_GPR_U32(ctx, 31, 0x3DC704u);
    ctx->pc = 0x3DC700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC6FCu;
    // 0x3dc700: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DC6FCu, 0x3DC704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC704u;
label_3dc704:
    // 0x3dc704: 0x7ba60000  lq          $a2, 0x0($sp)
    ctx->pc = 0x3dc704u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dc708:
    // 0x3dc708: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3dc708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3dc70c:
    // 0x3dc70c: 0x7ba80010  lq          $t0, 0x10($sp)
    ctx->pc = 0x3dc70cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dc710:
    // 0x3dc710: 0x24631730  addiu       $v1, $v1, 0x1730
    ctx->pc = 0x3dc710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5936));
label_3dc714:
    // 0x3dc714: 0x7e260010  sq          $a2, 0x10($s1)
    ctx->pc = 0x3dc714u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 6));
label_3dc718:
    // 0x3dc718: 0x7e280020  sq          $t0, 0x20($s1)
    ctx->pc = 0x3dc718u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 8));
label_3dc71c:
    // 0x3dc71c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x3dc71cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_3dc720:
    // 0x3dc720: 0x48a80800  qmtc2.ni    $t0, $vf1
    ctx->pc = 0x3dc720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_3dc724:
    // 0x3dc724: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3dc724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3dc728:
    // 0x3dc728: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3dc728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc72c:
    // 0x3dc72c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3dc72cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dc730:
    // 0x3dc730: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3dc730u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3dc734:
    // 0x3dc734: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3dc734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc738:
    // 0x3dc738: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3dc738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc73c:
    // 0x3dc73c: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3dc73cu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3dc740:
    // 0x3dc740: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3dc740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc744:
    // 0x3dc744: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3dc744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3dc748:
    // 0x3dc748: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3dc748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3dc74c:
    // 0x3dc74c: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3dc74cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc750:
    // 0x3dc750: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3dc750u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dc754:
    // 0x3dc754: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3dc754u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc758:
    // 0x3dc758: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3dc758u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc75c:
    // 0x3dc75c: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3dc75cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc760:
    // 0x3dc760: 0x48282800  qmfc2.ni    $t0, $vf5
    ctx->pc = 0x3dc760u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[5]));
label_3dc764:
    // 0x3dc764: 0x8e270054  lw          $a3, 0x54($s1)
    ctx->pc = 0x3dc764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3dc768:
    // 0x3dc768: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x3dc768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3dc76c:
    // 0x3dc76c: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x3dc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
label_3dc770:
    // 0x3dc770: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3dc770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3dc774:
    // 0x3dc774: 0x7fa60040  sq          $a2, 0x40($sp)
    ctx->pc = 0x3dc774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 6));
label_3dc778:
    // 0x3dc778: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x3dc778u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dc77c:
    // 0x3dc77c: 0x7fa80050  sq          $t0, 0x50($sp)
    ctx->pc = 0x3dc77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
label_3dc780:
    // 0x3dc780: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x3dc780u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
label_3dc784:
    // 0x3dc784: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x3dc784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
label_3dc788:
    // 0x3dc788: 0x34840006  ori         $a0, $a0, 0x6
    ctx->pc = 0x3dc788u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6);
label_3dc78c:
    // 0x3dc78c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3dc78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3dc790:
    // 0x3dc790: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dc790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc794:
    // 0x3dc794: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3dc794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3dc798:
    // 0x3dc798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dc798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dc79c:
    // 0x3dc79c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x3dc79cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_3dc7a0:
    // 0x3dc7a0: 0xc0e93a2  jal         func_3A4E88
label_3dc7a4:
    if (ctx->pc == 0x3DC7A4u) {
        ctx->pc = 0x3DC7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7A0u;
        // 0x3dc7a4: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC7A8u;
        goto label_3dc7a8;
    }
    ctx->pc = 0x3DC7A0u;
    SET_GPR_U32(ctx, 31, 0x3DC7A8u);
    ctx->pc = 0x3DC7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC7A0u;
    // 0x3dc7a4: 0x240800ff  addiu       $t0, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3DC7A0u, 0x3DC7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC7A8u;
label_3dc7a8:
    // 0x3dc7a8: 0x3c1e006f  lui         $fp, 0x6F
    ctx->pc = 0x3dc7a8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)111 << 16));
label_3dc7ac:
    // 0x3dc7ac: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x3dc7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_3dc7b0:
    // 0x3dc7b0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x3dc7b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_3dc7b4:
    // 0x3dc7b4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3dc7b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3dc7b8:
    // 0x3dc7b8: 0x3c170051  lui         $s7, 0x51
    ctx->pc = 0x3dc7b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)81 << 16));
label_3dc7bc:
    // 0x3dc7bc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3dc7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_3dc7c0:
    // 0x3dc7c0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x3dc7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_3dc7c4:
    // 0x3dc7c4: 0x27d2b8b8  addiu       $s2, $fp, -0x4748
    ctx->pc = 0x3dc7c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
label_3dc7c8:
    // 0x3dc7c8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x3dc7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
label_3dc7cc:
    // 0x3dc7cc: 0x4600bd86  mov.s       $f22, $f23
    ctx->pc = 0x3dc7ccu;
    ctx->f[22] = FPU_MOV_S(ctx->f[23]);
label_3dc7d0:
    // 0x3dc7d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3dc7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dc7d4:
    // 0x3dc7d4: 0x27b40070  addiu       $s4, $sp, 0x70
    ctx->pc = 0x3dc7d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3dc7d8:
    // 0x3dc7d8: 0x27b30100  addiu       $s3, $sp, 0x100
    ctx->pc = 0x3dc7d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3dc7dc:
    // 0x3dc7dc: 0x0  nop
    ctx->pc = 0x3dc7dcu;
    // NOP
label_3dc7e0:
    // 0x3dc7e0: 0x4490a000  mtc1        $s0, $f20
    ctx->pc = 0x3dc7e0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dc7e4:
    // 0x3dc7e4: 0x0  nop
    ctx->pc = 0x3dc7e4u;
    // NOP
label_3dc7e8:
    // 0x3dc7e8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x3dc7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3dc7ec:
    // 0x3dc7ec: 0x4614cd02  mul.s       $f20, $f25, $f20
    ctx->pc = 0x3dc7ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[20]);
label_3dc7f0:
    // 0x3dc7f0: 0xc12e310  jal         func_4B8C40
label_3dc7f4:
    if (ctx->pc == 0x3DC7F4u) {
        ctx->pc = 0x3DC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7F0u;
        // 0x3dc7f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC7F8u;
        goto label_3dc7f8;
    }
    ctx->pc = 0x3DC7F0u;
    SET_GPR_U32(ctx, 31, 0x3DC7F8u);
    ctx->pc = 0x3DC7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC7F0u;
    // 0x3dc7f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3DC7F0u, 0x3DC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC7F8u;
label_3dc7f8:
    // 0x3dc7f8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3dc7f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3dc7fc:
    // 0x3dc7fc: 0xc12e29c  jal         func_4B8A70
label_3dc800:
    if (ctx->pc == 0x3DC800u) {
        ctx->pc = 0x3DC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC7FCu;
        // 0x3dc800: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC804u;
        goto label_3dc804;
    }
    ctx->pc = 0x3DC7FCu;
    SET_GPR_U32(ctx, 31, 0x3DC804u);
    ctx->pc = 0x3DC800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC7FCu;
    // 0x3dc800: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3DC7FCu, 0x3DC804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC804u;
label_3dc804:
    // 0x3dc804: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3dc804u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3dc808:
    // 0x3dc808: 0xe7b50064  swc1        $f21, 0x64($sp)
    ctx->pc = 0x3dc808u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3dc80c:
    // 0x3dc80c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3dc80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3dc810:
    // 0x3dc810: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3dc810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3dc814:
    // 0x3dc814: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3dc814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3dc818:
    // 0x3dc818: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3dc818u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dc81c:
    // 0x3dc81c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3dc81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3dc820:
    // 0x3dc820: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3dc820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3dc824:
    // 0x3dc824: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3dc824u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3dc828:
    // 0x3dc828: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3dc828u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3dc82c:
    // 0x3dc82c: 0x4be208ea  vmul.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x3dc82cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc830:
    // 0x3dc830: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3dc830u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dc834:
    // 0x3dc834: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3dc834u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3dc838:
    // 0x3dc838: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3dc838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc83c:
    // 0x3dc83c: 0x4bc209bf  vmulaw.xyz  $ACC, $vf1, $vf2w
    ctx->pc = 0x3dc83cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dc840:
    // 0x3dc840: 0x4bc1114b  vmaddw.xyz  $vf5, $vf2, $vf1w
    ctx->pc = 0x3dc840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc844:
    // 0x3dc844: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3dc844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc848:
    // 0x3dc848: 0x4bc52168  vadd.xyz    $vf5, $vf4, $vf5
    ctx->pc = 0x3dc848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc84c:
    // 0x3dc84c: 0x4a231944  vsubx.w     $vf5, $vf3, $vf3x
    ctx->pc = 0x3dc84cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc850:
    // 0x3dc850: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3dc850u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3dc854:
    // 0x3dc854: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3dc854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3dc858:
    // 0x3dc858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dc858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dc85c:
    // 0x3dc85c: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x3dc85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_3dc860:
    // 0x3dc860: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3dc860u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3dc864:
    // 0x3dc864: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x3dc864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_3dc868:
    // 0x3dc868: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x3dc868u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
label_3dc86c:
    // 0x3dc86c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3dc86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3dc870:
    // 0x3dc870: 0xc0cd518  jal         func_335460
label_3dc874:
    if (ctx->pc == 0x3DC874u) {
        ctx->pc = 0x3DC874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC870u;
        // 0x3dc874: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC878u;
        goto label_3dc878;
    }
    ctx->pc = 0x3DC870u;
    SET_GPR_U32(ctx, 31, 0x3DC878u);
    ctx->pc = 0x3DC874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC870u;
    // 0x3dc874: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DC870u, 0x3DC878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC878u;
label_3dc878:
    // 0x3dc878: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3dc878u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3dc87c:
    // 0x3dc87c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dc87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dc880:
    // 0x3dc880: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3dc880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3dc884:
    // 0x3dc884: 0xc0cd518  jal         func_335460
label_3dc888:
    if (ctx->pc == 0x3DC888u) {
        ctx->pc = 0x3DC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC884u;
        // 0x3dc888: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC88Cu;
        goto label_3dc88c;
    }
    ctx->pc = 0x3DC884u;
    SET_GPR_U32(ctx, 31, 0x3DC88Cu);
    ctx->pc = 0x3DC888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC884u;
    // 0x3dc888: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DC884u, 0x3DC88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC88Cu;
label_3dc88c:
    // 0x3dc88c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3dc88cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3dc890:
    // 0x3dc890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dc890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dc894:
    // 0x3dc894: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x3dc894u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
label_3dc898:
    // 0x3dc898: 0xc0cd518  jal         func_335460
label_3dc89c:
    if (ctx->pc == 0x3DC89Cu) {
        ctx->pc = 0x3DC89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC898u;
        // 0x3dc89c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC8A0u;
        goto label_3dc8a0;
    }
    ctx->pc = 0x3DC898u;
    SET_GPR_U32(ctx, 31, 0x3DC8A0u);
    ctx->pc = 0x3DC89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC898u;
    // 0x3dc89c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DC898u, 0x3DC8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC8A0u;
label_3dc8a0:
    // 0x3dc8a0: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x3dc8a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3dc8a4:
    // 0x3dc8a4: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x3dc8a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3dc8a8:
    // 0x3dc8a8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x3dc8a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_3dc8ac:
    // 0x3dc8ac: 0xe696000c  swc1        $f22, 0xC($s4)
    ctx->pc = 0x3dc8acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3dc8b0:
    // 0x3dc8b0: 0x7ba30070  lq          $v1, 0x70($sp)
    ctx->pc = 0x3dc8b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3dc8b4:
    // 0x3dc8b4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3dc8b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dc8b8:
    // 0x3dc8b8: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3dc8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3dc8bc:
    // 0x3dc8bc: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3dc8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3dc8c0:
    // 0x3dc8c0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3dc8c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3dc8c4:
    // 0x3dc8c4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3dc8c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3dc8c8:
    // 0x3dc8c8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3dc8c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc8cc:
    // 0x3dc8cc: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3dc8ccu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dc8d0:
    // 0x3dc8d0: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3dc8d0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3dc8d4:
    // 0x3dc8d4: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3dc8d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc8d8:
    // 0x3dc8d8: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3dc8d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc8dc:
    // 0x3dc8dc: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3dc8dcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3dc8e0:
    // 0x3dc8e0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3dc8e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc8e4:
    // 0x3dc8e4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3dc8e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3dc8e8:
    // 0x3dc8e8: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3dc8e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3dc8ec:
    // 0x3dc8ec: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3dc8ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc8f0:
    // 0x3dc8f0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3dc8f0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dc8f4:
    // 0x3dc8f4: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3dc8f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dc8f8:
    // 0x3dc8f8: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3dc8f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc8fc:
    // 0x3dc8fc: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3dc8fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dc900:
    // 0x3dc900: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x3dc900u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
label_3dc904:
    // 0x3dc904: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3dc904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3dc908:
    // 0x3dc908: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3dc908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3dc90c:
    // 0x3dc90c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3dc90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3dc910:
    // 0x3dc910: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x3dc910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_3dc914:
    // 0x3dc914: 0x8ee3489c  lw          $v1, 0x489C($s7)
    ctx->pc = 0x3dc914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
label_3dc918:
    // 0x3dc918: 0x84620454  lh          $v0, 0x454($v1)
    ctx->pc = 0x3dc918u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1108)));
label_3dc91c:
    // 0x3dc91c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
label_3dc920:
    if (ctx->pc == 0x3DC920u) {
        ctx->pc = 0x3DC920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC91Cu;
        // 0x3dc920: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC924u;
        goto label_3dc924;
    }
    ctx->pc = 0x3DC91Cu;
    {
        const bool branch_taken_0x3dc91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc91c) {
            ctx->pc = 0x3DC920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC91Cu;
            // 0x3dc920: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DC9B4u;
            goto label_3dc9b4;
        }
    }
    ctx->pc = 0x3DC924u;
label_3dc924:
    // 0x3dc924: 0xc0e9694  jal         func_3A5A50
label_3dc928:
    if (ctx->pc == 0x3DC928u) {
        ctx->pc = 0x3DC928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC924u;
        // 0x3dc928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC92Cu;
        goto label_3dc92c;
    }
    ctx->pc = 0x3DC924u;
    SET_GPR_U32(ctx, 31, 0x3DC92Cu);
    ctx->pc = 0x3DC928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC924u;
    // 0x3dc928: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DC924u, 0x3DC92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC92Cu;
label_3dc92c:
    // 0x3dc92c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_3dc930:
    if (ctx->pc == 0x3DC930u) {
        ctx->pc = 0x3DC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC92Cu;
        // 0x3dc930: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC934u;
        goto label_3dc934;
    }
    ctx->pc = 0x3DC92Cu;
    {
        const bool branch_taken_0x3dc92c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC92Cu;
        // 0x3dc930: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc92c) {
            ctx->pc = 0x3DC9B0u;
            goto label_3dc9b0;
        }
    }
    ctx->pc = 0x3DC934u;
label_3dc934:
    // 0x3dc934: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3dc934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3dc938:
    // 0x3dc938: 0xc136b18  jal         func_4DAC60
label_3dc93c:
    if (ctx->pc == 0x3DC93Cu) {
        ctx->pc = 0x3DC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC938u;
        // 0x3dc93c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC940u;
        goto label_3dc940;
    }
    ctx->pc = 0x3DC938u;
    SET_GPR_U32(ctx, 31, 0x3DC940u);
    ctx->pc = 0x3DC93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC938u;
    // 0x3dc93c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3DC938u, 0x3DC940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC940u;
label_3dc940:
    // 0x3dc940: 0x7ba30060  lq          $v1, 0x60($sp)
    ctx->pc = 0x3dc940u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dc944:
    // 0x3dc944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dc944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dc948:
    // 0x3dc948: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3dc948u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3dc94c:
    // 0x3dc94c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3dc94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3dc950:
    // 0x3dc950: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3dc950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3dc954:
    // 0x3dc954: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dc954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc958:
    // 0x3dc958: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3dc958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3dc95c:
    // 0x3dc95c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3dc95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dc960:
    // 0x3dc960: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x3dc960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
label_3dc964:
    // 0x3dc964: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3dc964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3dc968:
    // 0x3dc968: 0xc0cd518  jal         func_335460
label_3dc96c:
    if (ctx->pc == 0x3DC96Cu) {
        ctx->pc = 0x3DC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC968u;
        // 0x3dc96c: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC970u;
        goto label_3dc970;
    }
    ctx->pc = 0x3DC968u;
    SET_GPR_U32(ctx, 31, 0x3DC970u);
    ctx->pc = 0x3DC96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC968u;
    // 0x3dc96c: 0x7fa30050  sq          $v1, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DC968u, 0x3DC970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC970u;
label_3dc970:
    // 0x3dc970: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x3dc970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3dc974:
    // 0x3dc974: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x3dc974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
label_3dc978:
    // 0x3dc978: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3dc978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dc97c:
    // 0x3dc97c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3dc97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dc980:
    // 0x3dc980: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x3dc980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3dc984:
    // 0x3dc984: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3dc984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3dc988:
    // 0x3dc988: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3dc988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3dc98c:
    // 0x3dc98c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3dc98cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3dc990:
    // 0x3dc990: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x3dc990u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3dc994:
    // 0x3dc994: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x3dc994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_3dc998:
    // 0x3dc998: 0xc0ea004  jal         func_3A8010
label_3dc99c:
    if (ctx->pc == 0x3DC99Cu) {
        ctx->pc = 0x3DC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC998u;
        // 0x3dc99c: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC9A0u;
        goto label_3dc9a0;
    }
    ctx->pc = 0x3DC998u;
    SET_GPR_U32(ctx, 31, 0x3DC9A0u);
    ctx->pc = 0x3DC99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC998u;
    // 0x3dc99c: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8010u, 0x3DC998u, 0x3DC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC9A0u;
label_3dc9a0:
    // 0x3dc9a0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x3dc9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_3dc9a4:
    // 0x3dc9a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3dc9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3dc9a8:
    // 0x3dc9a8: 0xc0f15bc  jal         func_3C56F0
label_3dc9ac:
    if (ctx->pc == 0x3DC9ACu) {
        ctx->pc = 0x3DC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9A8u;
        // 0x3dc9ac: 0x24445178  addiu       $a0, $v0, 0x5178 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC9B0u;
        goto label_3dc9b0;
    }
    ctx->pc = 0x3DC9A8u;
    SET_GPR_U32(ctx, 31, 0x3DC9B0u);
    ctx->pc = 0x3DC9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC9A8u;
    // 0x3dc9ac: 0x24445178  addiu       $a0, $v0, 0x5178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DC9A8u, 0x3DC9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC9B0u;
label_3dc9b0:
    // 0x3dc9b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3dc9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3dc9b4:
    // 0x3dc9b4: 0x2a02000a  slti        $v0, $s0, 0xA
    ctx->pc = 0x3dc9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)10) ? 1 : 0);
label_3dc9b8:
    // 0x3dc9b8: 0x1440ff89  bnez        $v0, . + 4 + (-0x77 << 2)
label_3dc9bc:
    if (ctx->pc == 0x3DC9BCu) {
        ctx->pc = 0x3DC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9B8u;
        // 0x3dc9bc: 0x8ee2489c  lw          $v0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC9C0u;
        goto label_3dc9c0;
    }
    ctx->pc = 0x3DC9B8u;
    {
        const bool branch_taken_0x3dc9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9B8u;
        // 0x3dc9bc: 0x8ee2489c  lw          $v0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dc9b8) {
            ctx->pc = 0x3DC7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc7e0;
        }
    }
    ctx->pc = 0x3DC9C0u;
label_3dc9c0:
    // 0x3dc9c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3dc9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3dc9c4:
    // 0x3dc9c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3dc9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3dc9c8:
    // 0x3dc9c8: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x3dc9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3dc9cc:
    // 0x3dc9cc: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x3dc9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3dc9d0:
    // 0x3dc9d0: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x3dc9d0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
label_3dc9d4:
    // 0x3dc9d4: 0x2410000b  addiu       $s0, $zero, 0xB
    ctx->pc = 0x3dc9d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_3dc9d8:
    // 0x3dc9d8: 0x84430454  lh          $v1, 0x454($v0)
    ctx->pc = 0x3dc9d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1108)));
label_3dc9dc:
    // 0x3dc9dc: 0x54600035  bnel        $v1, $zero, . + 4 + (0x35 << 2)
label_3dc9e0:
    if (ctx->pc == 0x3DC9E0u) {
        ctx->pc = 0x3DC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9DCu;
        // 0x3dc9e0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC9E4u;
        goto label_3dc9e4;
    }
    ctx->pc = 0x3DC9DCu;
    {
        const bool branch_taken_0x3dc9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dc9dc) {
            ctx->pc = 0x3DC9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC9DCu;
            // 0x3dc9e0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCAB4u;
            goto label_3dcab4;
        }
    }
    ctx->pc = 0x3DC9E4u;
label_3dc9e4:
    // 0x3dc9e4: 0xc0e9694  jal         func_3A5A50
label_3dc9e8:
    if (ctx->pc == 0x3DC9E8u) {
        ctx->pc = 0x3DC9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9E4u;
        // 0x3dc9e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC9ECu;
        goto label_3dc9ec;
    }
    ctx->pc = 0x3DC9E4u;
    SET_GPR_U32(ctx, 31, 0x3DC9ECu);
    ctx->pc = 0x3DC9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DC9E4u;
    // 0x3dc9e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3DC9E4u, 0x3DC9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DC9ECu;
label_3dc9ec:
    // 0x3dc9ec: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_3dc9f0:
    if (ctx->pc == 0x3DC9F0u) {
        ctx->pc = 0x3DC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DC9ECu;
        // 0x3dc9f0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DC9F4u;
        goto label_3dc9f4;
    }
    ctx->pc = 0x3DC9ECu;
    {
        const bool branch_taken_0x3dc9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dc9ec) {
            ctx->pc = 0x3DC9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DC9ECu;
            // 0x3dc9f0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCAB4u;
            goto label_3dcab4;
        }
    }
    ctx->pc = 0x3DC9F4u;
label_3dc9f4:
    // 0x3dc9f4: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x3dc9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
label_3dc9f8:
    // 0x3dc9f8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3dc9f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3dc9fc:
    // 0x3dc9fc: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x3dc9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_3dca00:
    // 0x3dca00: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3dca00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3dca04:
    // 0x3dca04: 0xc0cd518  jal         func_335460
label_3dca08:
    if (ctx->pc == 0x3DCA08u) {
        ctx->pc = 0x3DCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCA04u;
        // 0x3dca08: 0x27c4b8b8  addiu       $a0, $fp, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCA0Cu;
        goto label_3dca0c;
    }
    ctx->pc = 0x3DCA04u;
    SET_GPR_U32(ctx, 31, 0x3DCA0Cu);
    ctx->pc = 0x3DCA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCA04u;
    // 0x3dca08: 0x27c4b8b8  addiu       $a0, $fp, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3DCA04u, 0x3DCA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCA0Cu;
label_3dca0c:
    // 0x3dca0c: 0x7a230020  lq          $v1, 0x20($s1)
    ctx->pc = 0x3dca0cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 32)));
label_3dca10:
    // 0x3dca10: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x3dca10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3dca14:
    // 0x3dca14: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x3dca14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_3dca18:
    // 0x3dca18: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x3dca18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_3dca1c:
    // 0x3dca1c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x3dca1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3dca20:
    // 0x3dca20: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x3dca20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dca24:
    // 0x3dca24: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x3dca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_3dca28:
    // 0x3dca28: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3dca28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3dca2c:
    // 0x3dca2c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3dca2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3dca30:
    // 0x3dca30: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3dca30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dca34:
    // 0x3dca34: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x3dca34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dca38:
    // 0x3dca38: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x3dca38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3dca3c:
    // 0x3dca3c: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3dca3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dca40:
    // 0x3dca40: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x3dca40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dca44:
    // 0x3dca44: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x3dca44u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_3dca48:
    // 0x3dca48: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3dca48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dca4c:
    // 0x3dca4c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x3dca4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_3dca50:
    // 0x3dca50: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x3dca50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3dca54:
    // 0x3dca54: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x3dca54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dca58:
    // 0x3dca58: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x3dca58u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_3dca5c:
    // 0x3dca5c: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x3dca5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3dca60:
    // 0x3dca60: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x3dca60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dca64:
    // 0x3dca64: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x3dca64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_3dca68:
    // 0x3dca68: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x3dca68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
label_3dca6c:
    // 0x3dca6c: 0x4617b800  add.s       $f0, $f23, $f23
    ctx->pc = 0x3dca6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_3dca70:
    // 0x3dca70: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3dca70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_3dca74:
    // 0x3dca74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3dca74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3dca78:
    // 0x3dca78: 0x27a50450  addiu       $a1, $sp, 0x450
    ctx->pc = 0x3dca78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3dca7c:
    // 0x3dca7c: 0x7fa30460  sq          $v1, 0x460($sp)
    ctx->pc = 0x3dca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 3));
label_3dca80:
    // 0x3dca80: 0x27a60460  addiu       $a2, $sp, 0x460
    ctx->pc = 0x3dca80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3dca84:
    // 0x3dca84: 0x7fa20450  sq          $v0, 0x450($sp)
    ctx->pc = 0x3dca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1104), GPR_VEC(ctx, 2));
label_3dca88:
    // 0x3dca88: 0x27a70470  addiu       $a3, $sp, 0x470
    ctx->pc = 0x3dca88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3dca8c:
    // 0x3dca8c: 0xe7a00470  swc1        $f0, 0x470($sp)
    ctx->pc = 0x3dca8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1136), bits); }
label_3dca90:
    // 0x3dca90: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x3dca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
label_3dca94:
    // 0x3dca94: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x3dca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
label_3dca98:
    // 0x3dca98: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x3dca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
label_3dca9c:
    // 0x3dca9c: 0xc0e9fa6  jal         func_3A7E98
label_3dcaa0:
    if (ctx->pc == 0x3DCAA0u) {
        ctx->pc = 0x3DCAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCA9Cu;
        // 0x3dcaa0: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCAA4u;
        goto label_3dcaa4;
    }
    ctx->pc = 0x3DCA9Cu;
    SET_GPR_U32(ctx, 31, 0x3DCAA4u);
    ctx->pc = 0x3DCAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCA9Cu;
    // 0x3dcaa0: 0x7fa30020  sq          $v1, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3DCA9Cu, 0x3DCAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCAA4u;
label_3dcaa4:
    // 0x3dcaa4: 0x26845188  addiu       $a0, $s4, 0x5188
    ctx->pc = 0x3dcaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20872));
label_3dcaa8:
    // 0x3dcaa8: 0xc0f15bc  jal         func_3C56F0
label_3dcaac:
    if (ctx->pc == 0x3DCAACu) {
        ctx->pc = 0x3DCAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCAA8u;
        // 0x3dcaac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCAB0u;
        goto label_3dcab0;
    }
    ctx->pc = 0x3DCAA8u;
    SET_GPR_U32(ctx, 31, 0x3DCAB0u);
    ctx->pc = 0x3DCAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCAA8u;
    // 0x3dcaac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DCAA8u, 0x3DCAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCAB0u;
label_3dcab0:
    // 0x3dcab0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3dcab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3dcab4:
    // 0x3dcab4: 0x601ffc8  bgez        $s0, . + 4 + (-0x38 << 2)
label_3dcab8:
    if (ctx->pc == 0x3DCAB8u) {
        ctx->pc = 0x3DCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCAB4u;
        // 0x3dcab8: 0x8ee2489c  lw          $v0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCABCu;
        goto label_3dcabc;
    }
    ctx->pc = 0x3DCAB4u;
    {
        const bool branch_taken_0x3dcab4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3DCAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCAB4u;
        // 0x3dcab8: 0x8ee2489c  lw          $v0, 0x489C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcab4) {
            ctx->pc = 0x3DC9D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dc9d8;
        }
    }
    ctx->pc = 0x3DCABCu;
label_3dcabc:
    // 0x3dcabc: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x3dcabcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_3dcac0:
    // 0x3dcac0: 0x7bb005a0  lq          $s0, 0x5A0($sp)
    ctx->pc = 0x3dcac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1440)));
label_3dcac4:
    // 0x3dcac4: 0x7bb10590  lq          $s1, 0x590($sp)
    ctx->pc = 0x3dcac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1424)));
label_3dcac8:
    // 0x3dcac8: 0x7bb20580  lq          $s2, 0x580($sp)
    ctx->pc = 0x3dcac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1408)));
label_3dcacc:
    // 0x3dcacc: 0x7bb30570  lq          $s3, 0x570($sp)
    ctx->pc = 0x3dcaccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1392)));
label_3dcad0:
    // 0x3dcad0: 0x7bb40560  lq          $s4, 0x560($sp)
    ctx->pc = 0x3dcad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1376)));
label_3dcad4:
    // 0x3dcad4: 0x7bb50550  lq          $s5, 0x550($sp)
    ctx->pc = 0x3dcad4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1360)));
label_3dcad8:
    // 0x3dcad8: 0x7bb60540  lq          $s6, 0x540($sp)
    ctx->pc = 0x3dcad8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1344)));
label_3dcadc:
    // 0x3dcadc: 0x7bb70530  lq          $s7, 0x530($sp)
    ctx->pc = 0x3dcadcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1328)));
label_3dcae0:
    // 0x3dcae0: 0x7bbe0520  lq          $fp, 0x520($sp)
    ctx->pc = 0x3dcae0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1312)));
label_3dcae4:
    // 0x3dcae4: 0xdfbf0510  ld          $ra, 0x510($sp)
    ctx->pc = 0x3dcae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1296)));
label_3dcae8:
    // 0x3dcae8: 0xc7b905d8  lwc1        $f25, 0x5D8($sp)
    ctx->pc = 0x3dcae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3dcaec:
    // 0x3dcaec: 0xc7b805d0  lwc1        $f24, 0x5D0($sp)
    ctx->pc = 0x3dcaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3dcaf0:
    // 0x3dcaf0: 0xc7b705c8  lwc1        $f23, 0x5C8($sp)
    ctx->pc = 0x3dcaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3dcaf4:
    // 0x3dcaf4: 0xc7b605c0  lwc1        $f22, 0x5C0($sp)
    ctx->pc = 0x3dcaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3dcaf8:
    // 0x3dcaf8: 0xc7b505b8  lwc1        $f21, 0x5B8($sp)
    ctx->pc = 0x3dcaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3dcafc:
    // 0x3dcafc: 0xc7b405b0  lwc1        $f20, 0x5B0($sp)
    ctx->pc = 0x3dcafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dcb00:
    // 0x3dcb00: 0x3e00008  jr          $ra
label_3dcb04:
    if (ctx->pc == 0x3DCB04u) {
        ctx->pc = 0x3DCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB00u;
        // 0x3dcb04: 0x27bd05e0  addiu       $sp, $sp, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DCB08u;
        goto label_fallthrough_0x3dcb00;
    }
    ctx->pc = 0x3DCB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCB00u;
        // 0x3dcb04: 0x27bd05e0  addiu       $sp, $sp, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3dcb00:
    ctx->pc = 0x3DCB08u;
}
