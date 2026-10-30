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

// Function: sub_003CD7C0
// Address: 0x3cd7c0 - 0x3cdae8
void sub_003CD7C0_0x3cd7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CD7C0_0x3cd7c0");
#endif

    switch (ctx->pc) {
        case 0x3cd7c0u: goto label_3cd7c0;
        case 0x3cd7c4u: goto label_3cd7c4;
        case 0x3cd7c8u: goto label_3cd7c8;
        case 0x3cd7ccu: goto label_3cd7cc;
        case 0x3cd7d0u: goto label_3cd7d0;
        case 0x3cd7d4u: goto label_3cd7d4;
        case 0x3cd7d8u: goto label_3cd7d8;
        case 0x3cd7dcu: goto label_3cd7dc;
        case 0x3cd7e0u: goto label_3cd7e0;
        case 0x3cd7e4u: goto label_3cd7e4;
        case 0x3cd7e8u: goto label_3cd7e8;
        case 0x3cd7ecu: goto label_3cd7ec;
        case 0x3cd7f0u: goto label_3cd7f0;
        case 0x3cd7f4u: goto label_3cd7f4;
        case 0x3cd7f8u: goto label_3cd7f8;
        case 0x3cd7fcu: goto label_3cd7fc;
        case 0x3cd800u: goto label_3cd800;
        case 0x3cd804u: goto label_3cd804;
        case 0x3cd808u: goto label_3cd808;
        case 0x3cd80cu: goto label_3cd80c;
        case 0x3cd810u: goto label_3cd810;
        case 0x3cd814u: goto label_3cd814;
        case 0x3cd818u: goto label_3cd818;
        case 0x3cd81cu: goto label_3cd81c;
        case 0x3cd820u: goto label_3cd820;
        case 0x3cd824u: goto label_3cd824;
        case 0x3cd828u: goto label_3cd828;
        case 0x3cd82cu: goto label_3cd82c;
        case 0x3cd830u: goto label_3cd830;
        case 0x3cd834u: goto label_3cd834;
        case 0x3cd838u: goto label_3cd838;
        case 0x3cd83cu: goto label_3cd83c;
        case 0x3cd840u: goto label_3cd840;
        case 0x3cd844u: goto label_3cd844;
        case 0x3cd848u: goto label_3cd848;
        case 0x3cd84cu: goto label_3cd84c;
        case 0x3cd850u: goto label_3cd850;
        case 0x3cd854u: goto label_3cd854;
        case 0x3cd858u: goto label_3cd858;
        case 0x3cd85cu: goto label_3cd85c;
        case 0x3cd860u: goto label_3cd860;
        case 0x3cd864u: goto label_3cd864;
        case 0x3cd868u: goto label_3cd868;
        case 0x3cd86cu: goto label_3cd86c;
        case 0x3cd870u: goto label_3cd870;
        case 0x3cd874u: goto label_3cd874;
        case 0x3cd878u: goto label_3cd878;
        case 0x3cd87cu: goto label_3cd87c;
        case 0x3cd880u: goto label_3cd880;
        case 0x3cd884u: goto label_3cd884;
        case 0x3cd888u: goto label_3cd888;
        case 0x3cd88cu: goto label_3cd88c;
        case 0x3cd890u: goto label_3cd890;
        case 0x3cd894u: goto label_3cd894;
        case 0x3cd898u: goto label_3cd898;
        case 0x3cd89cu: goto label_3cd89c;
        case 0x3cd8a0u: goto label_3cd8a0;
        case 0x3cd8a4u: goto label_3cd8a4;
        case 0x3cd8a8u: goto label_3cd8a8;
        case 0x3cd8acu: goto label_3cd8ac;
        case 0x3cd8b0u: goto label_3cd8b0;
        case 0x3cd8b4u: goto label_3cd8b4;
        case 0x3cd8b8u: goto label_3cd8b8;
        case 0x3cd8bcu: goto label_3cd8bc;
        case 0x3cd8c0u: goto label_3cd8c0;
        case 0x3cd8c4u: goto label_3cd8c4;
        case 0x3cd8c8u: goto label_3cd8c8;
        case 0x3cd8ccu: goto label_3cd8cc;
        case 0x3cd8d0u: goto label_3cd8d0;
        case 0x3cd8d4u: goto label_3cd8d4;
        case 0x3cd8d8u: goto label_3cd8d8;
        case 0x3cd8dcu: goto label_3cd8dc;
        case 0x3cd8e0u: goto label_3cd8e0;
        case 0x3cd8e4u: goto label_3cd8e4;
        case 0x3cd8e8u: goto label_3cd8e8;
        case 0x3cd8ecu: goto label_3cd8ec;
        case 0x3cd8f0u: goto label_3cd8f0;
        case 0x3cd8f4u: goto label_3cd8f4;
        case 0x3cd8f8u: goto label_3cd8f8;
        case 0x3cd8fcu: goto label_3cd8fc;
        case 0x3cd900u: goto label_3cd900;
        case 0x3cd904u: goto label_3cd904;
        case 0x3cd908u: goto label_3cd908;
        case 0x3cd90cu: goto label_3cd90c;
        case 0x3cd910u: goto label_3cd910;
        case 0x3cd914u: goto label_3cd914;
        case 0x3cd918u: goto label_3cd918;
        case 0x3cd91cu: goto label_3cd91c;
        case 0x3cd920u: goto label_3cd920;
        case 0x3cd924u: goto label_3cd924;
        case 0x3cd928u: goto label_3cd928;
        case 0x3cd92cu: goto label_3cd92c;
        case 0x3cd930u: goto label_3cd930;
        case 0x3cd934u: goto label_3cd934;
        case 0x3cd938u: goto label_3cd938;
        case 0x3cd93cu: goto label_3cd93c;
        case 0x3cd940u: goto label_3cd940;
        case 0x3cd944u: goto label_3cd944;
        case 0x3cd948u: goto label_3cd948;
        case 0x3cd94cu: goto label_3cd94c;
        case 0x3cd950u: goto label_3cd950;
        case 0x3cd954u: goto label_3cd954;
        case 0x3cd958u: goto label_3cd958;
        case 0x3cd95cu: goto label_3cd95c;
        case 0x3cd960u: goto label_3cd960;
        case 0x3cd964u: goto label_3cd964;
        case 0x3cd968u: goto label_3cd968;
        case 0x3cd96cu: goto label_3cd96c;
        case 0x3cd970u: goto label_3cd970;
        case 0x3cd974u: goto label_3cd974;
        case 0x3cd978u: goto label_3cd978;
        case 0x3cd97cu: goto label_3cd97c;
        case 0x3cd980u: goto label_3cd980;
        case 0x3cd984u: goto label_3cd984;
        case 0x3cd988u: goto label_3cd988;
        case 0x3cd98cu: goto label_3cd98c;
        case 0x3cd990u: goto label_3cd990;
        case 0x3cd994u: goto label_3cd994;
        case 0x3cd998u: goto label_3cd998;
        case 0x3cd99cu: goto label_3cd99c;
        case 0x3cd9a0u: goto label_3cd9a0;
        case 0x3cd9a4u: goto label_3cd9a4;
        case 0x3cd9a8u: goto label_3cd9a8;
        case 0x3cd9acu: goto label_3cd9ac;
        case 0x3cd9b0u: goto label_3cd9b0;
        case 0x3cd9b4u: goto label_3cd9b4;
        case 0x3cd9b8u: goto label_3cd9b8;
        case 0x3cd9bcu: goto label_3cd9bc;
        case 0x3cd9c0u: goto label_3cd9c0;
        case 0x3cd9c4u: goto label_3cd9c4;
        case 0x3cd9c8u: goto label_3cd9c8;
        case 0x3cd9ccu: goto label_3cd9cc;
        case 0x3cd9d0u: goto label_3cd9d0;
        case 0x3cd9d4u: goto label_3cd9d4;
        case 0x3cd9d8u: goto label_3cd9d8;
        case 0x3cd9dcu: goto label_3cd9dc;
        case 0x3cd9e0u: goto label_3cd9e0;
        case 0x3cd9e4u: goto label_3cd9e4;
        case 0x3cd9e8u: goto label_3cd9e8;
        case 0x3cd9ecu: goto label_3cd9ec;
        case 0x3cd9f0u: goto label_3cd9f0;
        case 0x3cd9f4u: goto label_3cd9f4;
        case 0x3cd9f8u: goto label_3cd9f8;
        case 0x3cd9fcu: goto label_3cd9fc;
        case 0x3cda00u: goto label_3cda00;
        case 0x3cda04u: goto label_3cda04;
        case 0x3cda08u: goto label_3cda08;
        case 0x3cda0cu: goto label_3cda0c;
        case 0x3cda10u: goto label_3cda10;
        case 0x3cda14u: goto label_3cda14;
        case 0x3cda18u: goto label_3cda18;
        case 0x3cda1cu: goto label_3cda1c;
        case 0x3cda20u: goto label_3cda20;
        case 0x3cda24u: goto label_3cda24;
        case 0x3cda28u: goto label_3cda28;
        case 0x3cda2cu: goto label_3cda2c;
        case 0x3cda30u: goto label_3cda30;
        case 0x3cda34u: goto label_3cda34;
        case 0x3cda38u: goto label_3cda38;
        case 0x3cda3cu: goto label_3cda3c;
        case 0x3cda40u: goto label_3cda40;
        case 0x3cda44u: goto label_3cda44;
        case 0x3cda48u: goto label_3cda48;
        case 0x3cda4cu: goto label_3cda4c;
        case 0x3cda50u: goto label_3cda50;
        case 0x3cda54u: goto label_3cda54;
        case 0x3cda58u: goto label_3cda58;
        case 0x3cda5cu: goto label_3cda5c;
        case 0x3cda60u: goto label_3cda60;
        case 0x3cda64u: goto label_3cda64;
        case 0x3cda68u: goto label_3cda68;
        case 0x3cda6cu: goto label_3cda6c;
        case 0x3cda70u: goto label_3cda70;
        case 0x3cda74u: goto label_3cda74;
        case 0x3cda78u: goto label_3cda78;
        case 0x3cda7cu: goto label_3cda7c;
        case 0x3cda80u: goto label_3cda80;
        case 0x3cda84u: goto label_3cda84;
        case 0x3cda88u: goto label_3cda88;
        case 0x3cda8cu: goto label_3cda8c;
        case 0x3cda90u: goto label_3cda90;
        case 0x3cda94u: goto label_3cda94;
        case 0x3cda98u: goto label_3cda98;
        case 0x3cda9cu: goto label_3cda9c;
        case 0x3cdaa0u: goto label_3cdaa0;
        case 0x3cdaa4u: goto label_3cdaa4;
        case 0x3cdaa8u: goto label_3cdaa8;
        case 0x3cdaacu: goto label_3cdaac;
        case 0x3cdab0u: goto label_3cdab0;
        case 0x3cdab4u: goto label_3cdab4;
        case 0x3cdab8u: goto label_3cdab8;
        case 0x3cdabcu: goto label_3cdabc;
        case 0x3cdac0u: goto label_3cdac0;
        case 0x3cdac4u: goto label_3cdac4;
        case 0x3cdac8u: goto label_3cdac8;
        case 0x3cdaccu: goto label_3cdacc;
        case 0x3cdad0u: goto label_3cdad0;
        case 0x3cdad4u: goto label_3cdad4;
        case 0x3cdad8u: goto label_3cdad8;
        case 0x3cdadcu: goto label_3cdadc;
        case 0x3cdae0u: goto label_3cdae0;
        case 0x3cdae4u: goto label_3cdae4;
        default: break;
    }

    ctx->pc = 0x3cd7c0u;

label_3cd7c0:
    // 0x3cd7c0: 0x27bdfad0  addiu       $sp, $sp, -0x530
    ctx->pc = 0x3cd7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965968));
label_3cd7c4:
    // 0x3cd7c4: 0x7fb00500  sq          $s0, 0x500($sp)
    ctx->pc = 0x3cd7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 16));
label_3cd7c8:
    // 0x3cd7c8: 0x7fb104f0  sq          $s1, 0x4F0($sp)
    ctx->pc = 0x3cd7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 17));
label_3cd7cc:
    // 0x3cd7cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3cd7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cd7d0:
    // 0x3cd7d0: 0x7fb204e0  sq          $s2, 0x4E0($sp)
    ctx->pc = 0x3cd7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 18));
label_3cd7d4:
    // 0x3cd7d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cd7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cd7d8:
    // 0x3cd7d8: 0x7fb304d0  sq          $s3, 0x4D0($sp)
    ctx->pc = 0x3cd7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 19));
label_3cd7dc:
    // 0x3cd7dc: 0x7fb404c0  sq          $s4, 0x4C0($sp)
    ctx->pc = 0x3cd7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 20));
label_3cd7e0:
    // 0x3cd7e0: 0x7fb504b0  sq          $s5, 0x4B0($sp)
    ctx->pc = 0x3cd7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 21));
label_3cd7e4:
    // 0x3cd7e4: 0x7fb604a0  sq          $s6, 0x4A0($sp)
    ctx->pc = 0x3cd7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 22));
label_3cd7e8:
    // 0x3cd7e8: 0x7fb70490  sq          $s7, 0x490($sp)
    ctx->pc = 0x3cd7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 23));
label_3cd7ec:
    // 0x3cd7ec: 0xffbf0480  sd          $ra, 0x480($sp)
    ctx->pc = 0x3cd7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 31));
label_3cd7f0:
    // 0x3cd7f0: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x3cd7f0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
label_3cd7f4:
    // 0x3cd7f4: 0xe7b60520  swc1        $f22, 0x520($sp)
    ctx->pc = 0x3cd7f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_3cd7f8:
    // 0x3cd7f8: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x3cd7f8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
label_3cd7fc:
    // 0x3cd7fc: 0xe7b50518  swc1        $f21, 0x518($sp)
    ctx->pc = 0x3cd7fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1304), bits); }
label_3cd800:
    // 0x3cd800: 0xe7b40510  swc1        $f20, 0x510($sp)
    ctx->pc = 0x3cd800u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_3cd804:
    // 0x3cd804: 0x3c013f35  lui         $at, 0x3F35
    ctx->pc = 0x3cd804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16181 << 16));
label_3cd808:
    // 0x3cd808: 0x342104f3  ori         $at, $at, 0x4F3
    ctx->pc = 0x3cd808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1267);
label_3cd80c:
    // 0x3cd80c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3cd80cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3cd810:
    // 0x3cd810: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3cd810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cd814:
    // 0x3cd814: 0x3c01c040  lui         $at, 0xC040
    ctx->pc = 0x3cd814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49216 << 16));
label_3cd818:
    // 0x3cd818: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3cd818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3cd81c:
    // 0x3cd81c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3cd81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3cd820:
    // 0x3cd820: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3cd820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3cd824:
    // 0x3cd824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cd824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cd828:
    // 0x3cd828: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3cd828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3cd82c:
    // 0x3cd82c: 0x40f809  jalr        $v0
label_3cd830:
    if (ctx->pc == 0x3CD830u) {
        ctx->pc = 0x3CD830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD82Cu;
        // 0x3cd830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD834u;
        goto label_3cd834;
    }
    ctx->pc = 0x3CD82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CD834u);
        ctx->pc = 0x3CD830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD82Cu;
        // 0x3cd830: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD82Cu, 0x3CD834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD834u;
label_3cd834:
    // 0x3cd834: 0x24030401  addiu       $v1, $zero, 0x401
    ctx->pc = 0x3cd834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_3cd838:
    // 0x3cd838: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cd838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cd83c:
    // 0x3cd83c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3cd83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3cd840:
    // 0x3cd840: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x3cd840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_3cd844:
    // 0x3cd844: 0xc0e858c  jal         func_3A1630
label_3cd848:
    if (ctx->pc == 0x3CD848u) {
        ctx->pc = 0x3CD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD844u;
        // 0x3cd848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD84Cu;
        goto label_3cd84c;
    }
    ctx->pc = 0x3CD844u;
    SET_GPR_U32(ctx, 31, 0x3CD84Cu);
    ctx->pc = 0x3CD848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD844u;
    // 0x3cd848: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3CD844u, 0x3CD84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD84Cu;
label_3cd84c:
    // 0x3cd84c: 0xc0ea14c  jal         func_3A8530
label_3cd850:
    if (ctx->pc == 0x3CD850u) {
        ctx->pc = 0x3CD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD84Cu;
        // 0x3cd850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD854u;
        goto label_3cd854;
    }
    ctx->pc = 0x3CD84Cu;
    SET_GPR_U32(ctx, 31, 0x3CD854u);
    ctx->pc = 0x3CD850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD84Cu;
    // 0x3cd850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3CD84Cu, 0x3CD854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD854u;
label_3cd854:
    // 0x3cd854: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cd854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cd858:
    // 0x3cd858: 0xc0ea12a  jal         func_3A84A8
label_3cd85c:
    if (ctx->pc == 0x3CD85Cu) {
        ctx->pc = 0x3CD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD858u;
        // 0x3cd85c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD860u;
        goto label_3cd860;
    }
    ctx->pc = 0x3CD858u;
    SET_GPR_U32(ctx, 31, 0x3CD860u);
    ctx->pc = 0x3CD85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD858u;
    // 0x3cd85c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CD858u, 0x3CD860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD860u;
label_3cd860:
    // 0x3cd860: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cd860u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cd864:
    // 0x3cd864: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3cd864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cd868:
    // 0x3cd868: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3cd868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd86c:
    // 0x3cd86c: 0xc0ea12a  jal         func_3A84A8
label_3cd870:
    if (ctx->pc == 0x3CD870u) {
        ctx->pc = 0x3CD870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD86Cu;
        // 0x3cd870: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD874u;
        goto label_3cd874;
    }
    ctx->pc = 0x3CD86Cu;
    SET_GPR_U32(ctx, 31, 0x3CD874u);
    ctx->pc = 0x3CD870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD86Cu;
    // 0x3cd870: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3CD86Cu, 0x3CD874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD874u;
label_3cd874:
    // 0x3cd874: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3cd874u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3cd878:
    // 0x3cd878: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x3cd878u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3cd87c:
    // 0x3cd87c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3cd87cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3cd880:
    // 0x3cd880: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3cd880u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3cd884:
    // 0x3cd884: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x3cd884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
label_3cd888:
    // 0x3cd888: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x3cd888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_3cd88c:
    // 0x3cd88c: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3cd88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3cd890:
    // 0x3cd890: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3cd890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cd894:
    // 0x3cd894: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3cd894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3cd898:
    // 0x3cd898: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3cd898u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cd89c:
    // 0x3cd89c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3cd89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3cd8a0:
    // 0x3cd8a0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cd8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd8a4:
    // 0x3cd8a4: 0x7e030020  sq          $v1, 0x20($s0)
    ctx->pc = 0x3cd8a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 3));
label_3cd8a8:
    // 0x3cd8a8: 0x24844a30  addiu       $a0, $a0, 0x4A30
    ctx->pc = 0x3cd8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18992));
label_3cd8ac:
    // 0x3cd8ac: 0xc0e94ee  jal         func_3A53B8
label_3cd8b0:
    if (ctx->pc == 0x3CD8B0u) {
        ctx->pc = 0x3CD8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8ACu;
        // 0x3cd8b0: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD8B4u;
        goto label_3cd8b4;
    }
    ctx->pc = 0x3CD8ACu;
    SET_GPR_U32(ctx, 31, 0x3CD8B4u);
    ctx->pc = 0x3CD8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD8ACu;
    // 0x3cd8b0: 0x7e020010  sq          $v0, 0x10($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53B8u, 0x3CD8ACu, 0x3CD8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD8B4u;
label_3cd8b4:
    // 0x3cd8b4: 0x3c05800c  lui         $a1, 0x800C
    ctx->pc = 0x3cd8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32780 << 16));
label_3cd8b8:
    // 0x3cd8b8: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3cd8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3cd8bc:
    // 0x3cd8bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd8c0:
    // 0x3cd8c0: 0xc0ea16a  jal         func_3A85A8
label_3cd8c4:
    if (ctx->pc == 0x3CD8C4u) {
        ctx->pc = 0x3CD8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8C0u;
        // 0x3cd8c4: 0x34a5cb9e  ori         $a1, $a1, 0xCB9E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52126);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD8C8u;
        goto label_3cd8c8;
    }
    ctx->pc = 0x3CD8C0u;
    SET_GPR_U32(ctx, 31, 0x3CD8C8u);
    ctx->pc = 0x3CD8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD8C0u;
    // 0x3cd8c4: 0x34a5cb9e  ori         $a1, $a1, 0xCB9E (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52126);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3CD8C0u, 0x3CD8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD8C8u;
label_3cd8c8:
    // 0x3cd8c8: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3cd8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3cd8cc:
    // 0x3cd8cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cd8ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd8d0:
    // 0x3cd8d0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3cd8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3cd8d4:
    // 0x3cd8d4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cd8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3cd8d8:
    // 0x3cd8d8: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3cd8d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3cd8dc:
    // 0x3cd8dc: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3cd8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3cd8e0:
    // 0x3cd8e0: 0x60f809  jalr        $v1
label_3cd8e4:
    if (ctx->pc == 0x3CD8E4u) {
        ctx->pc = 0x3CD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8E0u;
        // 0x3cd8e4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD8E8u;
        goto label_3cd8e8;
    }
    ctx->pc = 0x3CD8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CD8E8u);
        ctx->pc = 0x3CD8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8E0u;
        // 0x3cd8e4: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD8E0u, 0x3CD8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD8E8u;
label_3cd8e8:
    // 0x3cd8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd8ec:
    // 0x3cd8ec: 0xc0ea16a  jal         func_3A85A8
label_3cd8f0:
    if (ctx->pc == 0x3CD8F0u) {
        ctx->pc = 0x3CD8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD8ECu;
        // 0x3cd8f0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD8F4u;
        goto label_3cd8f4;
    }
    ctx->pc = 0x3CD8ECu;
    SET_GPR_U32(ctx, 31, 0x3CD8F4u);
    ctx->pc = 0x3CD8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD8ECu;
    // 0x3cd8f0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3CD8ECu, 0x3CD8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD8F4u;
label_3cd8f4:
    // 0x3cd8f4: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3cd8f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3cd8f8:
    // 0x3cd8f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cd8f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd8fc:
    // 0x3cd8fc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3cd8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3cd900:
    // 0x3cd900: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cd900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3cd904:
    // 0x3cd904: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3cd904u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3cd908:
    // 0x3cd908: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3cd908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3cd90c:
    // 0x3cd90c: 0x60f809  jalr        $v1
label_3cd910:
    if (ctx->pc == 0x3CD910u) {
        ctx->pc = 0x3CD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD90Cu;
        // 0x3cd910: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD914u;
        goto label_3cd914;
    }
    ctx->pc = 0x3CD90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CD914u);
        ctx->pc = 0x3CD910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD90Cu;
        // 0x3cd910: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD90Cu, 0x3CD914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD914u;
label_3cd914:
    // 0x3cd914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd918:
    // 0x3cd918: 0xc0ea16a  jal         func_3A85A8
label_3cd91c:
    if (ctx->pc == 0x3CD91Cu) {
        ctx->pc = 0x3CD91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD918u;
        // 0x3cd91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD920u;
        goto label_3cd920;
    }
    ctx->pc = 0x3CD918u;
    SET_GPR_U32(ctx, 31, 0x3CD920u);
    ctx->pc = 0x3CD91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD918u;
    // 0x3cd91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A85A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A85A8u, 0x3CD918u, 0x3CD920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD920u;
label_3cd920:
    // 0x3cd920: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3cd920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3cd924:
    // 0x3cd924: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cd924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd928:
    // 0x3cd928: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x3cd928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3cd92c:
    // 0x3cd92c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cd92cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3cd930:
    // 0x3cd930: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3cd930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3cd934:
    // 0x3cd934: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3cd934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3cd938:
    // 0x3cd938: 0x60f809  jalr        $v1
label_3cd93c:
    if (ctx->pc == 0x3CD93Cu) {
        ctx->pc = 0x3CD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD938u;
        // 0x3cd93c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD940u;
        goto label_3cd940;
    }
    ctx->pc = 0x3CD938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CD940u);
        ctx->pc = 0x3CD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD938u;
        // 0x3cd93c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD938u, 0x3CD940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD940u;
label_3cd940:
    // 0x3cd940: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x3cd940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
label_3cd944:
    // 0x3cd944: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3cd944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3cd948:
    // 0x3cd948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cd948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd94c:
    // 0x3cd94c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd950:
    // 0x3cd950: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3cd950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3cd954:
    // 0x3cd954: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cd954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd958:
    // 0x3cd958: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3cd958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3cd95c:
    // 0x3cd95c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3cd95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3cd960:
    // 0x3cd960: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x3cd960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3cd964:
    // 0x3cd964: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3cd964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cd968:
    // 0x3cd968: 0xc0ea158  jal         func_3A8560
label_3cd96c:
    if (ctx->pc == 0x3CD96Cu) {
        ctx->pc = 0x3CD96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD968u;
        // 0x3cd96c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD970u;
        goto label_3cd970;
    }
    ctx->pc = 0x3CD968u;
    SET_GPR_U32(ctx, 31, 0x3CD970u);
    ctx->pc = 0x3CD96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD968u;
    // 0x3cd96c: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3CD968u, 0x3CD970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD970u;
label_3cd970:
    // 0x3cd970: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3cd970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3cd974:
    // 0x3cd974: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cd974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd978:
    // 0x3cd978: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3cd978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_3cd97c:
    // 0x3cd97c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cd97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3cd980:
    // 0x3cd980: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3cd980u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3cd984:
    // 0x3cd984: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3cd984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3cd988:
    // 0x3cd988: 0x60f809  jalr        $v1
label_3cd98c:
    if (ctx->pc == 0x3CD98Cu) {
        ctx->pc = 0x3CD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD988u;
        // 0x3cd98c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD990u;
        goto label_3cd990;
    }
    ctx->pc = 0x3CD988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CD990u);
        ctx->pc = 0x3CD98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD988u;
        // 0x3cd98c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD988u, 0x3CD990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD990u;
label_3cd990:
    // 0x3cd990: 0x3c01bf19  lui         $at, 0xBF19
    ctx->pc = 0x3cd990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48921 << 16));
label_3cd994:
    // 0x3cd994: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3cd994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3cd998:
    // 0x3cd998: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cd998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cd99c:
    // 0x3cd99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cd99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd9a0:
    // 0x3cd9a0: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3cd9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3cd9a4:
    // 0x3cd9a4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cd9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cd9a8:
    // 0x3cd9a8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x3cd9a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_3cd9ac:
    // 0x3cd9ac: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3cd9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3cd9b0:
    // 0x3cd9b0: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x3cd9b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_3cd9b4:
    // 0x3cd9b4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3cd9b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3cd9b8:
    // 0x3cd9b8: 0xc0ea158  jal         func_3A8560
label_3cd9bc:
    if (ctx->pc == 0x3CD9BCu) {
        ctx->pc = 0x3CD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9B8u;
        // 0x3cd9bc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD9C0u;
        goto label_3cd9c0;
    }
    ctx->pc = 0x3CD9B8u;
    SET_GPR_U32(ctx, 31, 0x3CD9C0u);
    ctx->pc = 0x3CD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CD9B8u;
    // 0x3cd9bc: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8560u, 0x3CD9B8u, 0x3CD9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CD9C0u;
label_3cd9c0:
    // 0x3cd9c0: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3cd9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3cd9c4:
    // 0x3cd9c4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cd9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cd9c8:
    // 0x3cd9c8: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x3cd9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_3cd9cc:
    // 0x3cd9cc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3cd9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3cd9d0:
    // 0x3cd9d0: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3cd9d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3cd9d4:
    // 0x3cd9d4: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3cd9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3cd9d8:
    // 0x3cd9d8: 0x60f809  jalr        $v1
label_3cd9dc:
    if (ctx->pc == 0x3CD9DCu) {
        ctx->pc = 0x3CD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9D8u;
        // 0x3cd9dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CD9E0u;
        goto label_3cd9e0;
    }
    ctx->pc = 0x3CD9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CD9E0u);
        ctx->pc = 0x3CD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CD9D8u;
        // 0x3cd9dc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CD9D8u, 0x3CD9E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CD9E0u;
label_3cd9e0:
    // 0x3cd9e0: 0x27b00450  addiu       $s0, $sp, 0x450
    ctx->pc = 0x3cd9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3cd9e4:
    // 0x3cd9e4: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3cd9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3cd9e8:
    // 0x3cd9e8: 0xafa00454  sw          $zero, 0x454($sp)
    ctx->pc = 0x3cd9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 0));
label_3cd9ec:
    // 0x3cd9ec: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x3cd9ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3cd9f0:
    // 0x3cd9f0: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3cd9f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3cd9f4:
    // 0x3cd9f4: 0x27b40460  addiu       $s4, $sp, 0x460
    ctx->pc = 0x3cd9f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
label_3cd9f8:
    // 0x3cd9f8: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x3cd9f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3cd9fc:
    // 0x3cd9fc: 0x27b50470  addiu       $s5, $sp, 0x470
    ctx->pc = 0x3cd9fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 1136));
label_3cda00:
    // 0x3cda00: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3cda00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3cda04:
    // 0x3cda04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cda04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cda08:
    // 0x3cda08: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x3cda08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
label_3cda0c:
    // 0x3cda0c: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3cda0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3cda10:
    // 0x3cda10: 0x26314a48  addiu       $s1, $s1, 0x4A48
    ctx->pc = 0x3cda10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 19016));
label_3cda14:
    // 0x3cda14: 0xafb70460  sw          $s7, 0x460($sp)
    ctx->pc = 0x3cda14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 23));
label_3cda18:
    // 0x3cda18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3cda18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cda1c:
    // 0x3cda1c: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3cda1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3cda20:
    // 0x3cda20: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3cda20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cda24:
    // 0x3cda24: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3cda24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3cda28:
    // 0x3cda28: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3cda28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cda2c:
    // 0x3cda2c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3cda2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3cda30:
    // 0x3cda30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cda30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cda34:
    // 0x3cda34: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3cda34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cda38:
    // 0x3cda38: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3cda38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3cda3c:
    // 0x3cda3c: 0xc0e9fd0  jal         func_3A7F40
label_3cda40:
    if (ctx->pc == 0x3CDA40u) {
        ctx->pc = 0x3CDA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA3Cu;
        // 0x3cda40: 0xafa20470  sw          $v0, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDA44u;
        goto label_3cda44;
    }
    ctx->pc = 0x3CDA3Cu;
    SET_GPR_U32(ctx, 31, 0x3CDA44u);
    ctx->pc = 0x3CDA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA3Cu;
    // 0x3cda40: 0xafa20470  sw          $v0, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3CDA3Cu, 0x3CDA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA44u;
label_3cda44:
    // 0x3cda44: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cda44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cda48:
    // 0x3cda48: 0xc0f15bc  jal         func_3C56F0
label_3cda4c:
    if (ctx->pc == 0x3CDA4Cu) {
        ctx->pc = 0x3CDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA48u;
        // 0x3cda4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDA50u;
        goto label_3cda50;
    }
    ctx->pc = 0x3CDA48u;
    SET_GPR_U32(ctx, 31, 0x3CDA50u);
    ctx->pc = 0x3CDA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA48u;
    // 0x3cda4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CDA48u, 0x3CDA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDA50u;
label_3cda50:
    // 0x3cda50: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3cda50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3cda54:
    // 0x3cda54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3cda54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cda58:
    // 0x3cda58: 0xafa00450  sw          $zero, 0x450($sp)
    ctx->pc = 0x3cda58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 0));
label_3cda5c:
    // 0x3cda5c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3cda5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cda60:
    // 0x3cda60: 0xafa00454  sw          $zero, 0x454($sp)
    ctx->pc = 0x3cda60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 0));
label_3cda64:
    // 0x3cda64: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3cda64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cda68:
    // 0x3cda68: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x3cda68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_3cda6c:
    // 0x3cda6c: 0x27a50430  addiu       $a1, $sp, 0x430
    ctx->pc = 0x3cda6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3cda70:
    // 0x3cda70: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x3cda70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3cda74:
    // 0x3cda74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3cda74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3cda78:
    // 0x3cda78: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3cda78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3cda7c:
    // 0x3cda7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cda7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cda80:
    // 0x3cda80: 0x7ba20450  lq          $v0, 0x450($sp)
    ctx->pc = 0x3cda80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1104)));
label_3cda84:
    // 0x3cda84: 0xafb70460  sw          $s7, 0x460($sp)
    ctx->pc = 0x3cda84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 23));
label_3cda88:
    // 0x3cda88: 0xe7a00450  swc1        $f0, 0x450($sp)
    ctx->pc = 0x3cda88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1104), bits); }
label_3cda8c:
    // 0x3cda8c: 0x7fa20430  sq          $v0, 0x430($sp)
    ctx->pc = 0x3cda8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1072), GPR_VEC(ctx, 2));
label_3cda90:
    // 0x3cda90: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3cda90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3cda94:
    // 0x3cda94: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3cda94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3cda98:
    // 0x3cda98: 0xc0e9fd0  jal         func_3A7F40
label_3cda9c:
    if (ctx->pc == 0x3CDA9Cu) {
        ctx->pc = 0x3CDA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDA98u;
        // 0x3cda9c: 0xafa30470  sw          $v1, 0x470($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDAA0u;
        goto label_3cdaa0;
    }
    ctx->pc = 0x3CDA98u;
    SET_GPR_U32(ctx, 31, 0x3CDAA0u);
    ctx->pc = 0x3CDA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDA98u;
    // 0x3cda9c: 0xafa30470  sw          $v1, 0x470($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1136), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7F40u, 0x3CDA98u, 0x3CDAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDAA0u;
label_3cdaa0:
    // 0x3cdaa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cdaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cdaa4:
    // 0x3cdaa4: 0xc0f15bc  jal         func_3C56F0
label_3cdaa8:
    if (ctx->pc == 0x3CDAA8u) {
        ctx->pc = 0x3CDAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDAA4u;
        // 0x3cdaa8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDAACu;
        goto label_3cdaac;
    }
    ctx->pc = 0x3CDAA4u;
    SET_GPR_U32(ctx, 31, 0x3CDAACu);
    ctx->pc = 0x3CDAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CDAA4u;
    // 0x3cdaa8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3CDAA4u, 0x3CDAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CDAACu;
label_3cdaac:
    // 0x3cdaac: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3cdaacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3cdab0:
    // 0x3cdab0: 0x7bb00500  lq          $s0, 0x500($sp)
    ctx->pc = 0x3cdab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_3cdab4:
    // 0x3cdab4: 0x7bb104f0  lq          $s1, 0x4F0($sp)
    ctx->pc = 0x3cdab4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_3cdab8:
    // 0x3cdab8: 0x7bb204e0  lq          $s2, 0x4E0($sp)
    ctx->pc = 0x3cdab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_3cdabc:
    // 0x3cdabc: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x3cdabcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_3cdac0:
    // 0x3cdac0: 0x7bb404c0  lq          $s4, 0x4C0($sp)
    ctx->pc = 0x3cdac0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3cdac4:
    // 0x3cdac4: 0x7bb504b0  lq          $s5, 0x4B0($sp)
    ctx->pc = 0x3cdac4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3cdac8:
    // 0x3cdac8: 0x7bb604a0  lq          $s6, 0x4A0($sp)
    ctx->pc = 0x3cdac8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3cdacc:
    // 0x3cdacc: 0x7bb70490  lq          $s7, 0x490($sp)
    ctx->pc = 0x3cdaccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3cdad0:
    // 0x3cdad0: 0xdfbf0480  ld          $ra, 0x480($sp)
    ctx->pc = 0x3cdad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
label_3cdad4:
    // 0x3cdad4: 0xc7b60520  lwc1        $f22, 0x520($sp)
    ctx->pc = 0x3cdad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3cdad8:
    // 0x3cdad8: 0xc7b50518  lwc1        $f21, 0x518($sp)
    ctx->pc = 0x3cdad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3cdadc:
    // 0x3cdadc: 0xc7b40510  lwc1        $f20, 0x510($sp)
    ctx->pc = 0x3cdadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cdae0:
    // 0x3cdae0: 0x3e00008  jr          $ra
label_3cdae4:
    if (ctx->pc == 0x3CDAE4u) {
        ctx->pc = 0x3CDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDAE0u;
        // 0x3cdae4: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CDAE8u;
        goto label_fallthrough_0x3cdae0;
    }
    ctx->pc = 0x3CDAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CDAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CDAE0u;
        // 0x3cdae4: 0x27bd0530  addiu       $sp, $sp, 0x530 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CDAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cdae0:
    ctx->pc = 0x3CDAE8u;
}
