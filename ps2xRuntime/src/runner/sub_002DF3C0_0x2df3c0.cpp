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

// Function: sub_002DF3C0
// Address: 0x2df3c0 - 0x2df6c0
void sub_002DF3C0_0x2df3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF3C0_0x2df3c0");
#endif

    switch (ctx->pc) {
        case 0x2df3c0u: goto label_2df3c0;
        case 0x2df3c4u: goto label_2df3c4;
        case 0x2df3c8u: goto label_2df3c8;
        case 0x2df3ccu: goto label_2df3cc;
        case 0x2df3d0u: goto label_2df3d0;
        case 0x2df3d4u: goto label_2df3d4;
        case 0x2df3d8u: goto label_2df3d8;
        case 0x2df3dcu: goto label_2df3dc;
        case 0x2df3e0u: goto label_2df3e0;
        case 0x2df3e4u: goto label_2df3e4;
        case 0x2df3e8u: goto label_2df3e8;
        case 0x2df3ecu: goto label_2df3ec;
        case 0x2df3f0u: goto label_2df3f0;
        case 0x2df3f4u: goto label_2df3f4;
        case 0x2df3f8u: goto label_2df3f8;
        case 0x2df3fcu: goto label_2df3fc;
        case 0x2df400u: goto label_2df400;
        case 0x2df404u: goto label_2df404;
        case 0x2df408u: goto label_2df408;
        case 0x2df40cu: goto label_2df40c;
        case 0x2df410u: goto label_2df410;
        case 0x2df414u: goto label_2df414;
        case 0x2df418u: goto label_2df418;
        case 0x2df41cu: goto label_2df41c;
        case 0x2df420u: goto label_2df420;
        case 0x2df424u: goto label_2df424;
        case 0x2df428u: goto label_2df428;
        case 0x2df42cu: goto label_2df42c;
        case 0x2df430u: goto label_2df430;
        case 0x2df434u: goto label_2df434;
        case 0x2df438u: goto label_2df438;
        case 0x2df43cu: goto label_2df43c;
        case 0x2df440u: goto label_2df440;
        case 0x2df444u: goto label_2df444;
        case 0x2df448u: goto label_2df448;
        case 0x2df44cu: goto label_2df44c;
        case 0x2df450u: goto label_2df450;
        case 0x2df454u: goto label_2df454;
        case 0x2df458u: goto label_2df458;
        case 0x2df45cu: goto label_2df45c;
        case 0x2df460u: goto label_2df460;
        case 0x2df464u: goto label_2df464;
        case 0x2df468u: goto label_2df468;
        case 0x2df46cu: goto label_2df46c;
        case 0x2df470u: goto label_2df470;
        case 0x2df474u: goto label_2df474;
        case 0x2df478u: goto label_2df478;
        case 0x2df47cu: goto label_2df47c;
        case 0x2df480u: goto label_2df480;
        case 0x2df484u: goto label_2df484;
        case 0x2df488u: goto label_2df488;
        case 0x2df48cu: goto label_2df48c;
        case 0x2df490u: goto label_2df490;
        case 0x2df494u: goto label_2df494;
        case 0x2df498u: goto label_2df498;
        case 0x2df49cu: goto label_2df49c;
        case 0x2df4a0u: goto label_2df4a0;
        case 0x2df4a4u: goto label_2df4a4;
        case 0x2df4a8u: goto label_2df4a8;
        case 0x2df4acu: goto label_2df4ac;
        case 0x2df4b0u: goto label_2df4b0;
        case 0x2df4b4u: goto label_2df4b4;
        case 0x2df4b8u: goto label_2df4b8;
        case 0x2df4bcu: goto label_2df4bc;
        case 0x2df4c0u: goto label_2df4c0;
        case 0x2df4c4u: goto label_2df4c4;
        case 0x2df4c8u: goto label_2df4c8;
        case 0x2df4ccu: goto label_2df4cc;
        case 0x2df4d0u: goto label_2df4d0;
        case 0x2df4d4u: goto label_2df4d4;
        case 0x2df4d8u: goto label_2df4d8;
        case 0x2df4dcu: goto label_2df4dc;
        case 0x2df4e0u: goto label_2df4e0;
        case 0x2df4e4u: goto label_2df4e4;
        case 0x2df4e8u: goto label_2df4e8;
        case 0x2df4ecu: goto label_2df4ec;
        case 0x2df4f0u: goto label_2df4f0;
        case 0x2df4f4u: goto label_2df4f4;
        case 0x2df4f8u: goto label_2df4f8;
        case 0x2df4fcu: goto label_2df4fc;
        case 0x2df500u: goto label_2df500;
        case 0x2df504u: goto label_2df504;
        case 0x2df508u: goto label_2df508;
        case 0x2df50cu: goto label_2df50c;
        case 0x2df510u: goto label_2df510;
        case 0x2df514u: goto label_2df514;
        case 0x2df518u: goto label_2df518;
        case 0x2df51cu: goto label_2df51c;
        case 0x2df520u: goto label_2df520;
        case 0x2df524u: goto label_2df524;
        case 0x2df528u: goto label_2df528;
        case 0x2df52cu: goto label_2df52c;
        case 0x2df530u: goto label_2df530;
        case 0x2df534u: goto label_2df534;
        case 0x2df538u: goto label_2df538;
        case 0x2df53cu: goto label_2df53c;
        case 0x2df540u: goto label_2df540;
        case 0x2df544u: goto label_2df544;
        case 0x2df548u: goto label_2df548;
        case 0x2df54cu: goto label_2df54c;
        case 0x2df550u: goto label_2df550;
        case 0x2df554u: goto label_2df554;
        case 0x2df558u: goto label_2df558;
        case 0x2df55cu: goto label_2df55c;
        case 0x2df560u: goto label_2df560;
        case 0x2df564u: goto label_2df564;
        case 0x2df568u: goto label_2df568;
        case 0x2df56cu: goto label_2df56c;
        case 0x2df570u: goto label_2df570;
        case 0x2df574u: goto label_2df574;
        case 0x2df578u: goto label_2df578;
        case 0x2df57cu: goto label_2df57c;
        case 0x2df580u: goto label_2df580;
        case 0x2df584u: goto label_2df584;
        case 0x2df588u: goto label_2df588;
        case 0x2df58cu: goto label_2df58c;
        case 0x2df590u: goto label_2df590;
        case 0x2df594u: goto label_2df594;
        case 0x2df598u: goto label_2df598;
        case 0x2df59cu: goto label_2df59c;
        case 0x2df5a0u: goto label_2df5a0;
        case 0x2df5a4u: goto label_2df5a4;
        case 0x2df5a8u: goto label_2df5a8;
        case 0x2df5acu: goto label_2df5ac;
        case 0x2df5b0u: goto label_2df5b0;
        case 0x2df5b4u: goto label_2df5b4;
        case 0x2df5b8u: goto label_2df5b8;
        case 0x2df5bcu: goto label_2df5bc;
        case 0x2df5c0u: goto label_2df5c0;
        case 0x2df5c4u: goto label_2df5c4;
        case 0x2df5c8u: goto label_2df5c8;
        case 0x2df5ccu: goto label_2df5cc;
        case 0x2df5d0u: goto label_2df5d0;
        case 0x2df5d4u: goto label_2df5d4;
        case 0x2df5d8u: goto label_2df5d8;
        case 0x2df5dcu: goto label_2df5dc;
        case 0x2df5e0u: goto label_2df5e0;
        case 0x2df5e4u: goto label_2df5e4;
        case 0x2df5e8u: goto label_2df5e8;
        case 0x2df5ecu: goto label_2df5ec;
        case 0x2df5f0u: goto label_2df5f0;
        case 0x2df5f4u: goto label_2df5f4;
        case 0x2df5f8u: goto label_2df5f8;
        case 0x2df5fcu: goto label_2df5fc;
        case 0x2df600u: goto label_2df600;
        case 0x2df604u: goto label_2df604;
        case 0x2df608u: goto label_2df608;
        case 0x2df60cu: goto label_2df60c;
        case 0x2df610u: goto label_2df610;
        case 0x2df614u: goto label_2df614;
        case 0x2df618u: goto label_2df618;
        case 0x2df61cu: goto label_2df61c;
        case 0x2df620u: goto label_2df620;
        case 0x2df624u: goto label_2df624;
        case 0x2df628u: goto label_2df628;
        case 0x2df62cu: goto label_2df62c;
        case 0x2df630u: goto label_2df630;
        case 0x2df634u: goto label_2df634;
        case 0x2df638u: goto label_2df638;
        case 0x2df63cu: goto label_2df63c;
        case 0x2df640u: goto label_2df640;
        case 0x2df644u: goto label_2df644;
        case 0x2df648u: goto label_2df648;
        case 0x2df64cu: goto label_2df64c;
        case 0x2df650u: goto label_2df650;
        case 0x2df654u: goto label_2df654;
        case 0x2df658u: goto label_2df658;
        case 0x2df65cu: goto label_2df65c;
        case 0x2df660u: goto label_2df660;
        case 0x2df664u: goto label_2df664;
        case 0x2df668u: goto label_2df668;
        case 0x2df66cu: goto label_2df66c;
        case 0x2df670u: goto label_2df670;
        case 0x2df674u: goto label_2df674;
        case 0x2df678u: goto label_2df678;
        case 0x2df67cu: goto label_2df67c;
        case 0x2df680u: goto label_2df680;
        case 0x2df684u: goto label_2df684;
        case 0x2df688u: goto label_2df688;
        case 0x2df68cu: goto label_2df68c;
        case 0x2df690u: goto label_2df690;
        case 0x2df694u: goto label_2df694;
        case 0x2df698u: goto label_2df698;
        case 0x2df69cu: goto label_2df69c;
        case 0x2df6a0u: goto label_2df6a0;
        case 0x2df6a4u: goto label_2df6a4;
        case 0x2df6a8u: goto label_2df6a8;
        case 0x2df6acu: goto label_2df6ac;
        case 0x2df6b0u: goto label_2df6b0;
        case 0x2df6b4u: goto label_2df6b4;
        case 0x2df6b8u: goto label_2df6b8;
        case 0x2df6bcu: goto label_2df6bc;
        default: break;
    }

    ctx->pc = 0x2df3c0u;

label_2df3c0:
    // 0x2df3c0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2df3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_2df3c4:
    // 0x2df3c4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2df3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_2df3c8:
    // 0x2df3c8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2df3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_2df3cc:
    // 0x2df3cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2df3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df3d0:
    // 0x2df3d0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2df3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_2df3d4:
    // 0x2df3d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2df3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2df3d8:
    // 0x2df3d8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2df3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_2df3dc:
    // 0x2df3dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2df3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2df3e0:
    // 0x2df3e0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2df3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_2df3e4:
    // 0x2df3e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2df3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2df3e8:
    // 0x2df3e8: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x2df3e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2df3ec:
    // 0x2df3ec: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x2df3ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2df3f0:
    // 0x2df3f0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2df3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_2df3f4:
    // 0x2df3f4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2df3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df3f8:
    // 0x2df3f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2df3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2df3fc:
    // 0x2df3fc: 0x8e140000  lw          $s4, 0x0($s0)
    ctx->pc = 0x2df3fcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2df400:
    // 0x2df400: 0xc0e409a  jal         func_390268
label_2df404:
    if (ctx->pc == 0x2DF404u) {
        ctx->pc = 0x2DF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF400u;
        // 0x2df404: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF408u;
        goto label_2df408;
    }
    ctx->pc = 0x2DF400u;
    SET_GPR_U32(ctx, 31, 0x2DF408u);
    ctx->pc = 0x2DF404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF400u;
    // 0x2df404: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2DF400u, 0x2DF408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF408u;
label_2df408:
    // 0x2df408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df40c:
    // 0x2df40c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df410:
    // 0x2df410: 0xc0a352c  jal         func_28D4B0
label_2df414:
    if (ctx->pc == 0x2DF414u) {
        ctx->pc = 0x2DF414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF410u;
        // 0x2df414: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF418u;
        goto label_2df418;
    }
    ctx->pc = 0x2DF410u;
    SET_GPR_U32(ctx, 31, 0x2DF418u);
    ctx->pc = 0x2DF414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF410u;
    // 0x2df414: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D4B0u, 0x2DF410u, 0x2DF418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF418u;
label_2df418:
    // 0x2df418: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2df418u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df41c:
    // 0x2df41c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_2df420:
    if (ctx->pc == 0x2DF420u) {
        ctx->pc = 0x2DF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF41Cu;
        // 0x2df420: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF424u;
        goto label_2df424;
    }
    ctx->pc = 0x2DF41Cu;
    {
        const bool branch_taken_0x2df41c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF41Cu;
        // 0x2df420: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df41c) {
            ctx->pc = 0x2DF42Cu;
            goto label_2df42c;
        }
    }
    ctx->pc = 0x2DF424u;
label_2df424:
    // 0x2df424: 0x1000009a  b           . + 4 + (0x9A << 2)
label_2df428:
    if (ctx->pc == 0x2DF428u) {
        ctx->pc = 0x2DF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF424u;
        // 0x2df428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF42Cu;
        goto label_2df42c;
    }
    ctx->pc = 0x2DF424u;
    {
        const bool branch_taken_0x2df424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF424u;
        // 0x2df428: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df424) {
            ctx->pc = 0x2DF690u;
            goto label_2df690;
        }
    }
    ctx->pc = 0x2DF42Cu;
label_2df42c:
    // 0x2df42c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2df42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df430:
    // 0x2df430: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2df434:
    if (ctx->pc == 0x2DF434u) {
        ctx->pc = 0x2DF434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF430u;
        // 0x2df434: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF438u;
        goto label_2df438;
    }
    ctx->pc = 0x2DF430u;
    {
        const bool branch_taken_0x2df430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df430) {
            ctx->pc = 0x2DF434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF430u;
            // 0x2df434: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF438u;
            goto label_2df438;
        }
    }
    ctx->pc = 0x2DF438u;
label_2df438:
    // 0x2df438: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2df438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2df43c:
    // 0x2df43c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2df43cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2df440:
    // 0x2df440: 0x2010  mfhi        $a0
    ctx->pc = 0x2df440u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2df444:
    // 0x2df444: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_2df448:
    if (ctx->pc == 0x2DF448u) {
        ctx->pc = 0x2DF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF444u;
        // 0x2df448: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF44Cu;
        goto label_2df44c;
    }
    ctx->pc = 0x2DF444u;
    {
        const bool branch_taken_0x2df444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DF448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF444u;
        // 0x2df448: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df444) {
            ctx->pc = 0x2DF46Cu;
            goto label_2df46c;
        }
    }
    ctx->pc = 0x2DF44Cu;
label_2df44c:
    // 0x2df44c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2df450:
    // 0x2df450: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2df450u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2df454:
    // 0x2df454: 0x26840284  addiu       $a0, $s4, 0x284
    ctx->pc = 0x2df454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 644));
label_2df458:
    // 0x2df458: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2df458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df45c:
    // 0x2df45c: 0x240605dc  addiu       $a2, $zero, 0x5DC
    ctx->pc = 0x2df45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
label_2df460:
    // 0x2df460: 0xc0a6800  jal         func_29A000
label_2df464:
    if (ctx->pc == 0x2DF464u) {
        ctx->pc = 0x2DF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF460u;
        // 0x2df464: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF468u;
        goto label_2df468;
    }
    ctx->pc = 0x2DF460u;
    SET_GPR_U32(ctx, 31, 0x2DF468u);
    ctx->pc = 0x2DF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF460u;
    // 0x2df464: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A000u, 0x2DF460u, 0x2DF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF468u;
label_2df468:
    // 0x2df468: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2df468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2df46c:
    // 0x2df46c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2df46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df470:
    // 0x2df470: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_2df474:
    if (ctx->pc == 0x2DF474u) {
        ctx->pc = 0x2DF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF470u;
        // 0x2df474: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF478u;
        goto label_2df478;
    }
    ctx->pc = 0x2DF470u;
    {
        const bool branch_taken_0x2df470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df470) {
            ctx->pc = 0x2DF474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF470u;
            // 0x2df474: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF478u;
            goto label_2df478;
        }
    }
    ctx->pc = 0x2DF478u;
label_2df478:
    // 0x2df478: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x2df478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_2df47c:
    // 0x2df47c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2df47cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_2df480:
    // 0x2df480: 0x2010  mfhi        $a0
    ctx->pc = 0x2df480u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_2df484:
    // 0x2df484: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_2df488:
    if (ctx->pc == 0x2DF488u) {
        ctx->pc = 0x2DF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF484u;
        // 0x2df488: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF48Cu;
        goto label_2df48c;
    }
    ctx->pc = 0x2DF484u;
    {
        const bool branch_taken_0x2df484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df484) {
            ctx->pc = 0x2DF488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF484u;
            // 0x2df488: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF498u;
            goto label_2df498;
        }
    }
    ctx->pc = 0x2DF48Cu;
label_2df48c:
    // 0x2df48c: 0xc0a36c8  jal         func_28DB20
label_2df490:
    if (ctx->pc == 0x2DF490u) {
        ctx->pc = 0x2DF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF48Cu;
        // 0x2df490: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF494u;
        goto label_2df494;
    }
    ctx->pc = 0x2DF48Cu;
    SET_GPR_U32(ctx, 31, 0x2DF494u);
    ctx->pc = 0x2DF490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF48Cu;
    // 0x2df490: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2DF48Cu, 0x2DF494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF494u;
label_2df494:
    // 0x2df494: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2df494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df498:
    // 0x2df498: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2df498u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
label_2df49c:
    // 0x2df49c: 0x1c40007c  bgtz        $v0, . + 4 + (0x7C << 2)
label_2df4a0:
    if (ctx->pc == 0x2DF4A0u) {
        ctx->pc = 0x2DF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF49Cu;
        // 0x2df4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4A4u;
        goto label_2df4a4;
    }
    ctx->pc = 0x2DF49Cu;
    {
        const bool branch_taken_0x2df49c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2DF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF49Cu;
        // 0x2df4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df49c) {
            ctx->pc = 0x2DF690u;
            goto label_2df690;
        }
    }
    ctx->pc = 0x2DF4A4u;
label_2df4a4:
    // 0x2df4a4: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x2df4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_2df4a8:
    // 0x2df4a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2df4ac:
    if (ctx->pc == 0x2DF4ACu) {
        ctx->pc = 0x2DF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4A8u;
        // 0x2df4ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4B0u;
        goto label_2df4b0;
    }
    ctx->pc = 0x2DF4A8u;
    {
        const bool branch_taken_0x2df4a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4A8u;
        // 0x2df4ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4a8) {
            ctx->pc = 0x2DF4BCu;
            goto label_2df4bc;
        }
    }
    ctx->pc = 0x2DF4B0u;
label_2df4b0:
    // 0x2df4b0: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x2df4b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_2df4b4:
    // 0x2df4b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2df4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2df4b8:
    // 0x2df4b8: 0xa6220018  sh          $v0, 0x18($s1)
    ctx->pc = 0x2df4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 2));
label_2df4bc:
    // 0x2df4bc: 0xc08bfa0  jal         func_22FE80
label_2df4c0:
    if (ctx->pc == 0x2DF4C0u) {
        ctx->pc = 0x2DF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4BCu;
        // 0x2df4c0: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4C4u;
        goto label_2df4c4;
    }
    ctx->pc = 0x2DF4BCu;
    SET_GPR_U32(ctx, 31, 0x2DF4C4u);
    ctx->pc = 0x2DF4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF4BCu;
    // 0x2df4c0: 0x26900090  addiu       $s0, $s4, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE80u, 0x2DF4BCu, 0x2DF4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4C4u;
label_2df4c4:
    // 0x2df4c4: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2df4c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df4c8:
    // 0x2df4c8: 0x86030002  lh          $v1, 0x2($s0)
    ctx->pc = 0x2df4c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2df4cc:
    // 0x2df4cc: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2df4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_2df4d0:
    // 0x2df4d0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2df4d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df4d4:
    // 0x2df4d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df4d8:
    // 0x2df4d8: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2df4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_2df4dc:
    // 0x2df4dc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2df4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2df4e0:
    // 0x2df4e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2df4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2df4e4:
    // 0x2df4e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2df4e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df4e8:
    // 0x2df4e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x2df4e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2df4ec:
    // 0x2df4ec: 0xc08750a  jal         func_21D428
label_2df4f0:
    if (ctx->pc == 0x2DF4F0u) {
        ctx->pc = 0x2DF4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4ECu;
        // 0x2df4f0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF4F4u;
        goto label_2df4f4;
    }
    ctx->pc = 0x2DF4ECu;
    SET_GPR_U32(ctx, 31, 0x2DF4F4u);
    ctx->pc = 0x2DF4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF4ECu;
    // 0x2df4f0: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D428u, 0x2DF4ECu, 0x2DF4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF4F4u;
label_2df4f4:
    // 0x2df4f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df4f8:
    // 0x2df4f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2df4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2df4fc:
    // 0x2df4fc: 0xc0a58bc  jal         func_2962F0
label_2df500:
    if (ctx->pc == 0x2DF500u) {
        ctx->pc = 0x2DF500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4FCu;
        // 0x2df500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF504u;
        goto label_2df504;
    }
    ctx->pc = 0x2DF4FCu;
    SET_GPR_U32(ctx, 31, 0x2DF504u);
    ctx->pc = 0x2DF500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF4FCu;
    // 0x2df500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2962F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2962F0u, 0x2DF4FCu, 0x2DF504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF504u;
label_2df504:
    // 0x2df504: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2df504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df508:
    // 0x2df508: 0xc0a58d6  jal         func_296358
label_2df50c:
    if (ctx->pc == 0x2DF50Cu) {
        ctx->pc = 0x2DF50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF508u;
        // 0x2df50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF510u;
        goto label_2df510;
    }
    ctx->pc = 0x2DF508u;
    SET_GPR_U32(ctx, 31, 0x2DF510u);
    ctx->pc = 0x2DF50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF508u;
    // 0x2df50c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296358u, 0x2DF508u, 0x2DF510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF510u;
label_2df510:
    // 0x2df510: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2df510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df514:
    // 0x2df514: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2df514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2df518:
    // 0x2df518: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
label_2df51c:
    if (ctx->pc == 0x2DF51Cu) {
        ctx->pc = 0x2DF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF518u;
        // 0x2df51c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF520u;
        goto label_2df520;
    }
    ctx->pc = 0x2DF518u;
    {
        const bool branch_taken_0x2df518 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DF51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF518u;
        // 0x2df51c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df518) {
            ctx->pc = 0x2DF530u;
            goto label_2df530;
        }
    }
    ctx->pc = 0x2DF520u;
label_2df520:
    // 0x2df520: 0xc0a5904  jal         func_296410
label_2df524:
    if (ctx->pc == 0x2DF524u) {
        ctx->pc = 0x2DF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF520u;
        // 0x2df524: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF528u;
        goto label_2df528;
    }
    ctx->pc = 0x2DF520u;
    SET_GPR_U32(ctx, 31, 0x2DF528u);
    ctx->pc = 0x2DF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF520u;
    // 0x2df524: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296410u, 0x2DF520u, 0x2DF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF528u;
label_2df528:
    // 0x2df528: 0x10000002  b           . + 4 + (0x2 << 2)
label_2df52c:
    if (ctx->pc == 0x2DF52Cu) {
        ctx->pc = 0x2DF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF528u;
        // 0x2df52c: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF530u;
        goto label_2df530;
    }
    ctx->pc = 0x2DF528u;
    {
        const bool branch_taken_0x2df528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF528u;
        // 0x2df52c: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df528) {
            ctx->pc = 0x2DF534u;
            goto label_2df534;
        }
    }
    ctx->pc = 0x2DF530u;
label_2df530:
    // 0x2df530: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2df530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2df534:
    // 0x2df534: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2df534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2df538:
    // 0x2df538: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2df538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2df53c:
    // 0x2df53c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2df53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2df540:
    // 0x2df540: 0xc0cdb38  jal         func_336CE0
label_2df544:
    if (ctx->pc == 0x2DF544u) {
        ctx->pc = 0x2DF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF540u;
        // 0x2df544: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF548u;
        goto label_2df548;
    }
    ctx->pc = 0x2DF540u;
    SET_GPR_U32(ctx, 31, 0x2DF548u);
    ctx->pc = 0x2DF544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF540u;
    // 0x2df544: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2DF540u, 0x2DF548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF548u;
label_2df548:
    // 0x2df548: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2df548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2df54c:
    // 0x2df54c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2df54cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2df550:
    // 0x2df550: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2df550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df554:
    // 0x2df554: 0x0  nop
    ctx->pc = 0x2df554u;
    // NOP
label_2df558:
    // 0x2df558: 0x45020021  bc1fl       . + 4 + (0x21 << 2)
label_2df55c:
    if (ctx->pc == 0x2DF55Cu) {
        ctx->pc = 0x2DF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF558u;
        // 0x2df55c: 0x86a40002  lh          $a0, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF560u;
        goto label_2df560;
    }
    ctx->pc = 0x2DF558u;
    {
        const bool branch_taken_0x2df558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2df558) {
            ctx->pc = 0x2DF55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF558u;
            // 0x2df55c: 0x86a40002  lh          $a0, 0x2($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF5E0u;
            goto label_2df5e0;
        }
    }
    ctx->pc = 0x2DF560u;
label_2df560:
    // 0x2df560: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x2df560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_2df564:
    // 0x2df564: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x2df564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2df568:
    // 0x2df568: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2df56c:
    if (ctx->pc == 0x2DF56Cu) {
        ctx->pc = 0x2DF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF568u;
        // 0x2df56c: 0x96220018  lhu         $v0, 0x18($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF570u;
        goto label_2df570;
    }
    ctx->pc = 0x2DF568u;
    {
        const bool branch_taken_0x2df568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df568) {
            ctx->pc = 0x2DF56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF568u;
            // 0x2df56c: 0x96220018  lhu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF580u;
            goto label_2df580;
        }
    }
    ctx->pc = 0x2DF570u;
label_2df570:
    // 0x2df570: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2df570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df574:
    // 0x2df574: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x2df574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_2df578:
    // 0x2df578: 0xa6200018  sh          $zero, 0x18($s1)
    ctx->pc = 0x2df578u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 0));
label_2df57c:
    // 0x2df57c: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x2df57cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
label_2df580:
    // 0x2df580: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_2df584:
    if (ctx->pc == 0x2DF584u) {
        ctx->pc = 0x2DF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF580u;
        // 0x2df584: 0x86a40002  lh          $a0, 0x2($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF588u;
        goto label_2df588;
    }
    ctx->pc = 0x2DF580u;
    {
        const bool branch_taken_0x2df580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df580) {
            ctx->pc = 0x2DF584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF580u;
            // 0x2df584: 0x86a40002  lh          $a0, 0x2($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF5E0u;
            goto label_2df5e0;
        }
    }
    ctx->pc = 0x2DF588u;
label_2df588:
    // 0x2df588: 0xc0a367c  jal         func_28D9F0
label_2df58c:
    if (ctx->pc == 0x2DF58Cu) {
        ctx->pc = 0x2DF58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF588u;
        // 0x2df58c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF590u;
        goto label_2df590;
    }
    ctx->pc = 0x2DF588u;
    SET_GPR_U32(ctx, 31, 0x2DF590u);
    ctx->pc = 0x2DF58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF588u;
    // 0x2df58c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DF588u, 0x2DF590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF590u;
label_2df590:
    // 0x2df590: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2df590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df594:
    // 0x2df594: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
label_2df598:
    if (ctx->pc == 0x2DF598u) {
        ctx->pc = 0x2DF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF594u;
        // 0x2df598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF59Cu;
        goto label_2df59c;
    }
    ctx->pc = 0x2DF594u;
    {
        const bool branch_taken_0x2df594 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF594u;
        // 0x2df598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df594) {
            ctx->pc = 0x2DF690u;
            goto label_2df690;
        }
    }
    ctx->pc = 0x2DF59Cu;
label_2df59c:
    // 0x2df59c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2df59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2df5a0:
    // 0x2df5a0: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2df5a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2df5a4:
    // 0x2df5a4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2df5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2df5a8:
    // 0x2df5a8: 0x40f809  jalr        $v0
label_2df5ac:
    if (ctx->pc == 0x2DF5ACu) {
        ctx->pc = 0x2DF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5A8u;
        // 0x2df5ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5B0u;
        goto label_2df5b0;
    }
    ctx->pc = 0x2DF5A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF5B0u);
        ctx->pc = 0x2DF5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5A8u;
        // 0x2df5ac: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF5A8u, 0x2DF5B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF5B0u;
label_2df5b0:
    // 0x2df5b0: 0xc62c0014  lwc1        $f12, 0x14($s1)
    ctx->pc = 0x2df5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2df5b4:
    // 0x2df5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2df5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df5b8:
    // 0x2df5b8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2df5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df5bc:
    // 0x2df5bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2df5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2df5c0:
    // 0x2df5c0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2df5c0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df5c4:
    // 0x2df5c4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2df5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2df5c8:
    // 0x2df5c8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2df5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2df5cc:
    // 0x2df5cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2df5ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df5d0:
    // 0x2df5d0: 0xc0bee7a  jal         func_2FB9E8
label_2df5d4:
    if (ctx->pc == 0x2DF5D4u) {
        ctx->pc = 0x2DF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5D0u;
        // 0x2df5d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5D8u;
        goto label_2df5d8;
    }
    ctx->pc = 0x2DF5D0u;
    SET_GPR_U32(ctx, 31, 0x2DF5D8u);
    ctx->pc = 0x2DF5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF5D0u;
    // 0x2df5d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB9E8u, 0x2DF5D0u, 0x2DF5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF5D8u;
label_2df5d8:
    // 0x2df5d8: 0x1000002d  b           . + 4 + (0x2D << 2)
label_2df5dc:
    if (ctx->pc == 0x2DF5DCu) {
        ctx->pc = 0x2DF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5D8u;
        // 0x2df5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5E0u;
        goto label_2df5e0;
    }
    ctx->pc = 0x2DF5D8u;
    {
        const bool branch_taken_0x2df5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5D8u;
        // 0x2df5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5d8) {
            ctx->pc = 0x2DF690u;
            goto label_2df690;
        }
    }
    ctx->pc = 0x2DF5E0u;
label_2df5e0:
    // 0x2df5e0: 0x26d34b00  addiu       $s3, $s6, 0x4B00
    ctx->pc = 0x2df5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 19200));
label_2df5e4:
    // 0x2df5e4: 0x26500090  addiu       $s0, $s2, 0x90
    ctx->pc = 0x2df5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_2df5e8:
    // 0x2df5e8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2df5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2df5ec:
    // 0x2df5ec: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2df5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2df5f0:
    // 0x2df5f0: 0xc0cd7d2  jal         func_335F48
label_2df5f4:
    if (ctx->pc == 0x2DF5F4u) {
        ctx->pc = 0x2DF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5F0u;
        // 0x2df5f4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF5F8u;
        goto label_2df5f8;
    }
    ctx->pc = 0x2DF5F0u;
    SET_GPR_U32(ctx, 31, 0x2DF5F8u);
    ctx->pc = 0x2DF5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF5F0u;
    // 0x2df5f4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F48u, 0x2DF5F0u, 0x2DF5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF5F8u;
label_2df5f8:
    // 0x2df5f8: 0x86a40002  lh          $a0, 0x2($s5)
    ctx->pc = 0x2df5f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
label_2df5fc:
    // 0x2df5fc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2df5fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_2df600:
    // 0x2df600: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x2df600u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2df604:
    // 0x2df604: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2df604u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_2df608:
    // 0x2df608: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2df608u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2df60c:
    // 0x2df60c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2df60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2df610:
    // 0x2df610: 0xc0cd780  jal         func_335E00
label_2df614:
    if (ctx->pc == 0x2DF614u) {
        ctx->pc = 0x2DF614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF610u;
        // 0x2df614: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF618u;
        goto label_2df618;
    }
    ctx->pc = 0x2DF610u;
    SET_GPR_U32(ctx, 31, 0x2DF618u);
    ctx->pc = 0x2DF614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF610u;
    // 0x2df614: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335E00u, 0x2DF610u, 0x2DF618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF618u;
label_2df618:
    // 0x2df618: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2df618u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2df61c:
    // 0x2df61c: 0xc0cd742  jal         func_335D08
label_2df620:
    if (ctx->pc == 0x2DF620u) {
        ctx->pc = 0x2DF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF61Cu;
        // 0x2df620: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF624u;
        goto label_2df624;
    }
    ctx->pc = 0x2DF61Cu;
    SET_GPR_U32(ctx, 31, 0x2DF624u);
    ctx->pc = 0x2DF620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF61Cu;
    // 0x2df620: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335D08u, 0x2DF61Cu, 0x2DF624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF624u;
label_2df624:
    // 0x2df624: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2df624u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2df628:
    // 0x2df628: 0xc0cdd2e  jal         func_3374B8
label_2df62c:
    if (ctx->pc == 0x2DF62Cu) {
        ctx->pc = 0x2DF62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF628u;
        // 0x2df62c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF630u;
        goto label_2df630;
    }
    ctx->pc = 0x2DF628u;
    SET_GPR_U32(ctx, 31, 0x2DF630u);
    ctx->pc = 0x2DF62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF628u;
    // 0x2df62c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3374B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3374B8u, 0x2DF628u, 0x2DF630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF630u;
label_2df630:
    // 0x2df630: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x2df630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
label_2df634:
    // 0x2df634: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2df634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
label_2df638:
    // 0x2df638: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2df63c:
    // 0x2df63c: 0x0  nop
    ctx->pc = 0x2df63cu;
    // NOP
label_2df640:
    // 0x2df640: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2df640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2df644:
    // 0x2df644: 0x0  nop
    ctx->pc = 0x2df644u;
    // NOP
label_2df648:
    // 0x2df648: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_2df64c:
    if (ctx->pc == 0x2DF64Cu) {
        ctx->pc = 0x2DF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF648u;
        // 0x2df64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF650u;
        goto label_2df650;
    }
    ctx->pc = 0x2DF648u;
    {
        const bool branch_taken_0x2df648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DF64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF648u;
        // 0x2df64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df648) {
            ctx->pc = 0x2DF690u;
            goto label_2df690;
        }
    }
    ctx->pc = 0x2DF650u;
label_2df650:
    // 0x2df650: 0xc0a367c  jal         func_28D9F0
label_2df654:
    if (ctx->pc == 0x2DF654u) {
        ctx->pc = 0x2DF654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF650u;
        // 0x2df654: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF658u;
        goto label_2df658;
    }
    ctx->pc = 0x2DF650u;
    SET_GPR_U32(ctx, 31, 0x2DF658u);
    ctx->pc = 0x2DF654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF650u;
    // 0x2df654: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2DF650u, 0x2DF658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF658u;
label_2df658:
    // 0x2df658: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2df658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2df65c:
    // 0x2df65c: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_2df660:
    if (ctx->pc == 0x2DF660u) {
        ctx->pc = 0x2DF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF65Cu;
        // 0x2df660: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF664u;
        goto label_2df664;
    }
    ctx->pc = 0x2DF65Cu;
    {
        const bool branch_taken_0x2df65c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF65Cu;
        // 0x2df660: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df65c) {
            ctx->pc = 0x2DF68Cu;
            goto label_2df68c;
        }
    }
    ctx->pc = 0x2DF664u;
label_2df664:
    // 0x2df664: 0x86100002  lh          $s0, 0x2($s0)
    ctx->pc = 0x2df664u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_2df668:
    // 0x2df668: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2df668u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_2df66c:
    // 0x2df66c: 0xc0884f6  jal         func_2213D8
label_2df670:
    if (ctx->pc == 0x2DF670u) {
        ctx->pc = 0x2DF670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF66Cu;
        // 0x2df670: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF674u;
        goto label_2df674;
    }
    ctx->pc = 0x2DF66Cu;
    SET_GPR_U32(ctx, 31, 0x2DF674u);
    ctx->pc = 0x2DF670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF66Cu;
    // 0x2df670: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2DF66Cu, 0x2DF674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF674u;
label_2df674:
    // 0x2df674: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2df674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2df678:
    // 0x2df678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2df678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2df67c:
    // 0x2df67c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2df67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df680:
    // 0x2df680: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2df680u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2df684:
    // 0x2df684: 0xc0bf800  jal         func_2FE000
label_2df688:
    if (ctx->pc == 0x2DF688u) {
        ctx->pc = 0x2DF688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF684u;
        // 0x2df688: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF68Cu;
        goto label_2df68c;
    }
    ctx->pc = 0x2DF684u;
    SET_GPR_U32(ctx, 31, 0x2DF68Cu);
    ctx->pc = 0x2DF688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF684u;
    // 0x2df688: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2DF684u, 0x2DF68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF68Cu;
label_2df68c:
    // 0x2df68c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2df68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2df690:
    // 0x2df690: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2df690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2df694:
    // 0x2df694: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2df694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2df698:
    // 0x2df698: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2df698u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2df69c:
    // 0x2df69c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2df69cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2df6a0:
    // 0x2df6a0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2df6a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2df6a4:
    // 0x2df6a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2df6a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2df6a8:
    // 0x2df6a8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x2df6a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2df6ac:
    // 0x2df6ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2df6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2df6b0:
    // 0x2df6b0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x2df6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2df6b4:
    // 0x2df6b4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x2df6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2df6b8:
    // 0x2df6b8: 0x3e00008  jr          $ra
label_2df6bc:
    if (ctx->pc == 0x2DF6BCu) {
        ctx->pc = 0x2DF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6B8u;
        // 0x2df6bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF6C0u;
        goto label_fallthrough_0x2df6b8;
    }
    ctx->pc = 0x2DF6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6B8u;
        // 0x2df6bc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2df6b8:
    ctx->pc = 0x2DF6C0u;
}
