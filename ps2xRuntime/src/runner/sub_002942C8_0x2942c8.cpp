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

// Function: sub_002942C8
// Address: 0x2942c8 - 0x294618
void sub_002942C8_0x2942c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002942C8_0x2942c8");
#endif

    switch (ctx->pc) {
        case 0x2942c8u: goto label_2942c8;
        case 0x2942ccu: goto label_2942cc;
        case 0x2942d0u: goto label_2942d0;
        case 0x2942d4u: goto label_2942d4;
        case 0x2942d8u: goto label_2942d8;
        case 0x2942dcu: goto label_2942dc;
        case 0x2942e0u: goto label_2942e0;
        case 0x2942e4u: goto label_2942e4;
        case 0x2942e8u: goto label_2942e8;
        case 0x2942ecu: goto label_2942ec;
        case 0x2942f0u: goto label_2942f0;
        case 0x2942f4u: goto label_2942f4;
        case 0x2942f8u: goto label_2942f8;
        case 0x2942fcu: goto label_2942fc;
        case 0x294300u: goto label_294300;
        case 0x294304u: goto label_294304;
        case 0x294308u: goto label_294308;
        case 0x29430cu: goto label_29430c;
        case 0x294310u: goto label_294310;
        case 0x294314u: goto label_294314;
        case 0x294318u: goto label_294318;
        case 0x29431cu: goto label_29431c;
        case 0x294320u: goto label_294320;
        case 0x294324u: goto label_294324;
        case 0x294328u: goto label_294328;
        case 0x29432cu: goto label_29432c;
        case 0x294330u: goto label_294330;
        case 0x294334u: goto label_294334;
        case 0x294338u: goto label_294338;
        case 0x29433cu: goto label_29433c;
        case 0x294340u: goto label_294340;
        case 0x294344u: goto label_294344;
        case 0x294348u: goto label_294348;
        case 0x29434cu: goto label_29434c;
        case 0x294350u: goto label_294350;
        case 0x294354u: goto label_294354;
        case 0x294358u: goto label_294358;
        case 0x29435cu: goto label_29435c;
        case 0x294360u: goto label_294360;
        case 0x294364u: goto label_294364;
        case 0x294368u: goto label_294368;
        case 0x29436cu: goto label_29436c;
        case 0x294370u: goto label_294370;
        case 0x294374u: goto label_294374;
        case 0x294378u: goto label_294378;
        case 0x29437cu: goto label_29437c;
        case 0x294380u: goto label_294380;
        case 0x294384u: goto label_294384;
        case 0x294388u: goto label_294388;
        case 0x29438cu: goto label_29438c;
        case 0x294390u: goto label_294390;
        case 0x294394u: goto label_294394;
        case 0x294398u: goto label_294398;
        case 0x29439cu: goto label_29439c;
        case 0x2943a0u: goto label_2943a0;
        case 0x2943a4u: goto label_2943a4;
        case 0x2943a8u: goto label_2943a8;
        case 0x2943acu: goto label_2943ac;
        case 0x2943b0u: goto label_2943b0;
        case 0x2943b4u: goto label_2943b4;
        case 0x2943b8u: goto label_2943b8;
        case 0x2943bcu: goto label_2943bc;
        case 0x2943c0u: goto label_2943c0;
        case 0x2943c4u: goto label_2943c4;
        case 0x2943c8u: goto label_2943c8;
        case 0x2943ccu: goto label_2943cc;
        case 0x2943d0u: goto label_2943d0;
        case 0x2943d4u: goto label_2943d4;
        case 0x2943d8u: goto label_2943d8;
        case 0x2943dcu: goto label_2943dc;
        case 0x2943e0u: goto label_2943e0;
        case 0x2943e4u: goto label_2943e4;
        case 0x2943e8u: goto label_2943e8;
        case 0x2943ecu: goto label_2943ec;
        case 0x2943f0u: goto label_2943f0;
        case 0x2943f4u: goto label_2943f4;
        case 0x2943f8u: goto label_2943f8;
        case 0x2943fcu: goto label_2943fc;
        case 0x294400u: goto label_294400;
        case 0x294404u: goto label_294404;
        case 0x294408u: goto label_294408;
        case 0x29440cu: goto label_29440c;
        case 0x294410u: goto label_294410;
        case 0x294414u: goto label_294414;
        case 0x294418u: goto label_294418;
        case 0x29441cu: goto label_29441c;
        case 0x294420u: goto label_294420;
        case 0x294424u: goto label_294424;
        case 0x294428u: goto label_294428;
        case 0x29442cu: goto label_29442c;
        case 0x294430u: goto label_294430;
        case 0x294434u: goto label_294434;
        case 0x294438u: goto label_294438;
        case 0x29443cu: goto label_29443c;
        case 0x294440u: goto label_294440;
        case 0x294444u: goto label_294444;
        case 0x294448u: goto label_294448;
        case 0x29444cu: goto label_29444c;
        case 0x294450u: goto label_294450;
        case 0x294454u: goto label_294454;
        case 0x294458u: goto label_294458;
        case 0x29445cu: goto label_29445c;
        case 0x294460u: goto label_294460;
        case 0x294464u: goto label_294464;
        case 0x294468u: goto label_294468;
        case 0x29446cu: goto label_29446c;
        case 0x294470u: goto label_294470;
        case 0x294474u: goto label_294474;
        case 0x294478u: goto label_294478;
        case 0x29447cu: goto label_29447c;
        case 0x294480u: goto label_294480;
        case 0x294484u: goto label_294484;
        case 0x294488u: goto label_294488;
        case 0x29448cu: goto label_29448c;
        case 0x294490u: goto label_294490;
        case 0x294494u: goto label_294494;
        case 0x294498u: goto label_294498;
        case 0x29449cu: goto label_29449c;
        case 0x2944a0u: goto label_2944a0;
        case 0x2944a4u: goto label_2944a4;
        case 0x2944a8u: goto label_2944a8;
        case 0x2944acu: goto label_2944ac;
        case 0x2944b0u: goto label_2944b0;
        case 0x2944b4u: goto label_2944b4;
        case 0x2944b8u: goto label_2944b8;
        case 0x2944bcu: goto label_2944bc;
        case 0x2944c0u: goto label_2944c0;
        case 0x2944c4u: goto label_2944c4;
        case 0x2944c8u: goto label_2944c8;
        case 0x2944ccu: goto label_2944cc;
        case 0x2944d0u: goto label_2944d0;
        case 0x2944d4u: goto label_2944d4;
        case 0x2944d8u: goto label_2944d8;
        case 0x2944dcu: goto label_2944dc;
        case 0x2944e0u: goto label_2944e0;
        case 0x2944e4u: goto label_2944e4;
        case 0x2944e8u: goto label_2944e8;
        case 0x2944ecu: goto label_2944ec;
        case 0x2944f0u: goto label_2944f0;
        case 0x2944f4u: goto label_2944f4;
        case 0x2944f8u: goto label_2944f8;
        case 0x2944fcu: goto label_2944fc;
        case 0x294500u: goto label_294500;
        case 0x294504u: goto label_294504;
        case 0x294508u: goto label_294508;
        case 0x29450cu: goto label_29450c;
        case 0x294510u: goto label_294510;
        case 0x294514u: goto label_294514;
        case 0x294518u: goto label_294518;
        case 0x29451cu: goto label_29451c;
        case 0x294520u: goto label_294520;
        case 0x294524u: goto label_294524;
        case 0x294528u: goto label_294528;
        case 0x29452cu: goto label_29452c;
        case 0x294530u: goto label_294530;
        case 0x294534u: goto label_294534;
        case 0x294538u: goto label_294538;
        case 0x29453cu: goto label_29453c;
        case 0x294540u: goto label_294540;
        case 0x294544u: goto label_294544;
        case 0x294548u: goto label_294548;
        case 0x29454cu: goto label_29454c;
        case 0x294550u: goto label_294550;
        case 0x294554u: goto label_294554;
        case 0x294558u: goto label_294558;
        case 0x29455cu: goto label_29455c;
        case 0x294560u: goto label_294560;
        case 0x294564u: goto label_294564;
        case 0x294568u: goto label_294568;
        case 0x29456cu: goto label_29456c;
        case 0x294570u: goto label_294570;
        case 0x294574u: goto label_294574;
        case 0x294578u: goto label_294578;
        case 0x29457cu: goto label_29457c;
        case 0x294580u: goto label_294580;
        case 0x294584u: goto label_294584;
        case 0x294588u: goto label_294588;
        case 0x29458cu: goto label_29458c;
        case 0x294590u: goto label_294590;
        case 0x294594u: goto label_294594;
        case 0x294598u: goto label_294598;
        case 0x29459cu: goto label_29459c;
        case 0x2945a0u: goto label_2945a0;
        case 0x2945a4u: goto label_2945a4;
        case 0x2945a8u: goto label_2945a8;
        case 0x2945acu: goto label_2945ac;
        case 0x2945b0u: goto label_2945b0;
        case 0x2945b4u: goto label_2945b4;
        case 0x2945b8u: goto label_2945b8;
        case 0x2945bcu: goto label_2945bc;
        case 0x2945c0u: goto label_2945c0;
        case 0x2945c4u: goto label_2945c4;
        case 0x2945c8u: goto label_2945c8;
        case 0x2945ccu: goto label_2945cc;
        case 0x2945d0u: goto label_2945d0;
        case 0x2945d4u: goto label_2945d4;
        case 0x2945d8u: goto label_2945d8;
        case 0x2945dcu: goto label_2945dc;
        case 0x2945e0u: goto label_2945e0;
        case 0x2945e4u: goto label_2945e4;
        case 0x2945e8u: goto label_2945e8;
        case 0x2945ecu: goto label_2945ec;
        case 0x2945f0u: goto label_2945f0;
        case 0x2945f4u: goto label_2945f4;
        case 0x2945f8u: goto label_2945f8;
        case 0x2945fcu: goto label_2945fc;
        case 0x294600u: goto label_294600;
        case 0x294604u: goto label_294604;
        case 0x294608u: goto label_294608;
        case 0x29460cu: goto label_29460c;
        case 0x294610u: goto label_294610;
        case 0x294614u: goto label_294614;
        default: break;
    }

    ctx->pc = 0x2942c8u;

label_2942c8:
    // 0x2942c8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2942c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2942cc:
    // 0x2942cc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2942ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_2942d0:
    // 0x2942d0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2942d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2942d4:
    // 0x2942d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2942d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2942d8:
    // 0x2942d8: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2942d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_2942dc:
    // 0x2942dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2942dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2942e0:
    // 0x2942e0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2942e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_2942e4:
    // 0x2942e4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2942e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_2942e8:
    // 0x2942e8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2942e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_2942ec:
    // 0x2942ec: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2942ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_2942f0:
    // 0x2942f0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2942f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2942f4:
    // 0x2942f4: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2942f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_2942f8:
    // 0x2942f8: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2942f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_2942fc:
    // 0x2942fc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2942fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_294300:
    // 0x294300: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x294300u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_294304:
    // 0x294304: 0xc05959e  jal         func_165678
label_294308:
    if (ctx->pc == 0x294308u) {
        ctx->pc = 0x294308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294304u;
        // 0x294308: 0xe7b500e8  swc1        $f21, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29430Cu;
        goto label_29430c;
    }
    ctx->pc = 0x294304u;
    SET_GPR_U32(ctx, 31, 0x29430Cu);
    ctx->pc = 0x294308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294304u;
    // 0x294308: 0xe7b500e8  swc1        $f21, 0xE8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x165678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165678u, 0x294304u, 0x29430Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29430Cu;
label_29430c:
    // 0x29430c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x29430cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_294310:
    // 0x294310: 0x128000b1  beqz        $s4, . + 4 + (0xB1 << 2)
label_294314:
    if (ctx->pc == 0x294314u) {
        ctx->pc = 0x294314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294310u;
        // 0x294314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294318u;
        goto label_294318;
    }
    ctx->pc = 0x294310u;
    {
        const bool branch_taken_0x294310 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x294314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294310u;
        // 0x294314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294310) {
            ctx->pc = 0x2945D8u;
            goto label_2945d8;
        }
    }
    ctx->pc = 0x294318u;
label_294318:
    // 0x294318: 0xc087502  jal         func_21D408
label_29431c:
    if (ctx->pc == 0x29431Cu) {
        ctx->pc = 0x29431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294318u;
        // 0x29431c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294320u;
        goto label_294320;
    }
    ctx->pc = 0x294318u;
    SET_GPR_U32(ctx, 31, 0x294320u);
    ctx->pc = 0x29431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294318u;
    // 0x29431c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x294318u, 0x294320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294320u;
label_294320:
    // 0x294320: 0xc0e409a  jal         func_390268
label_294324:
    if (ctx->pc == 0x294324u) {
        ctx->pc = 0x294324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294320u;
        // 0x294324: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294328u;
        goto label_294328;
    }
    ctx->pc = 0x294320u;
    SET_GPR_U32(ctx, 31, 0x294328u);
    ctx->pc = 0x294324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294320u;
    // 0x294324: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x294320u, 0x294328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294328u;
label_294328:
    // 0x294328: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x294328u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29432c:
    // 0x29432c: 0x8e8301a8  lw          $v1, 0x1A8($s4)
    ctx->pc = 0x29432cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_294330:
    // 0x294330: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x294330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_294334:
    // 0x294334: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x294334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_294338:
    // 0x294338: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
label_29433c:
    if (ctx->pc == 0x29433Cu) {
        ctx->pc = 0x29433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294338u;
        // 0x29433c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294340u;
        goto label_294340;
    }
    ctx->pc = 0x294338u;
    {
        const bool branch_taken_0x294338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294338u;
        // 0x29433c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294338) {
            ctx->pc = 0x2945D8u;
            goto label_2945d8;
        }
    }
    ctx->pc = 0x294340u;
label_294340:
    // 0x294340: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x294340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
label_294344:
    // 0x294344: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x294344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
label_294348:
    // 0x294348: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x294348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29434c:
    // 0x29434c: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x29434cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_294350:
    // 0x294350: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x294350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_294354:
    // 0x294354: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x294354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_294358:
    // 0x294358: 0x26370048  addiu       $s7, $s1, 0x48
    ctx->pc = 0x294358u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
label_29435c:
    // 0x29435c: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x29435cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
label_294360:
    // 0x294360: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x294360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
label_294364:
    // 0x294364: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x294364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_294368:
    // 0x294368: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x294368u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29436c:
    // 0x29436c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x29436cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294370:
    // 0x294370: 0xc12e29c  jal         func_4B8A70
label_294374:
    if (ctx->pc == 0x294374u) {
        ctx->pc = 0x294374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294370u;
        // 0x294374: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x294378u;
        goto label_294378;
    }
    ctx->pc = 0x294370u;
    SET_GPR_U32(ctx, 31, 0x294378u);
    ctx->pc = 0x294374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294370u;
    // 0x294374: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x294370u, 0x294378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294378u;
label_294378:
    // 0x294378: 0x86820092  lh          $v0, 0x92($s4)
    ctx->pc = 0x294378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_29437c:
    // 0x29437c: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x29437cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
label_294380:
    // 0x294380: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x294380u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_294384:
    // 0x294384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x294384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_294388:
    // 0x294388: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x294388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_29438c:
    // 0x29438c: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x29438cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_294390:
    // 0x294390: 0xc0cd8ec  jal         func_3363B0
label_294394:
    if (ctx->pc == 0x294394u) {
        ctx->pc = 0x294394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294390u;
        // 0x294394: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294398u;
        goto label_294398;
    }
    ctx->pc = 0x294390u;
    SET_GPR_U32(ctx, 31, 0x294398u);
    ctx->pc = 0x294394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294390u;
    // 0x294394: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x294390u, 0x294398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294398u;
label_294398:
    // 0x294398: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x294398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29439c:
    // 0x29439c: 0x0  nop
    ctx->pc = 0x29439cu;
    // NOP
label_2943a0:
    // 0x2943a0: 0xc137826  jal         func_4DE098
label_2943a4:
    if (ctx->pc == 0x2943A4u) {
        ctx->pc = 0x2943A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943A0u;
        // 0x2943a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943A8u;
        goto label_2943a8;
    }
    ctx->pc = 0x2943A0u;
    SET_GPR_U32(ctx, 31, 0x2943A8u);
    ctx->pc = 0x2943A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2943A0u;
    // 0x2943a4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x2943A0u, 0x2943A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2943A8u;
label_2943a8:
    // 0x2943a8: 0xc0e409a  jal         func_390268
label_2943ac:
    if (ctx->pc == 0x2943ACu) {
        ctx->pc = 0x2943ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943A8u;
        // 0x2943ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943B0u;
        goto label_2943b0;
    }
    ctx->pc = 0x2943A8u;
    SET_GPR_U32(ctx, 31, 0x2943B0u);
    ctx->pc = 0x2943ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2943A8u;
    // 0x2943ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2943A8u, 0x2943B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2943B0u;
label_2943b0:
    // 0x2943b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2943b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2943b4:
    // 0x2943b4: 0x52200084  beql        $s1, $zero, . + 4 + (0x84 << 2)
label_2943b8:
    if (ctx->pc == 0x2943B8u) {
        ctx->pc = 0x2943B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943B4u;
        // 0x2943b8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943BCu;
        goto label_2943bc;
    }
    ctx->pc = 0x2943B4u;
    {
        const bool branch_taken_0x2943b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2943b4) {
            ctx->pc = 0x2943B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2943B4u;
            // 0x2943b8: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945C8u;
            goto label_2945c8;
        }
    }
    ctx->pc = 0x2943BCu;
label_2943bc:
    // 0x2943bc: 0x52340082  beql        $s1, $s4, . + 4 + (0x82 << 2)
label_2943c0:
    if (ctx->pc == 0x2943C0u) {
        ctx->pc = 0x2943C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943BCu;
        // 0x2943c0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943C4u;
        goto label_2943c4;
    }
    ctx->pc = 0x2943BCu;
    {
        const bool branch_taken_0x2943bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x2943bc) {
            ctx->pc = 0x2943C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2943BCu;
            // 0x2943c0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945C8u;
            goto label_2945c8;
        }
    }
    ctx->pc = 0x2943C4u;
label_2943c4:
    // 0x2943c4: 0xc087502  jal         func_21D408
label_2943c8:
    if (ctx->pc == 0x2943C8u) {
        ctx->pc = 0x2943C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943C4u;
        // 0x2943c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943CCu;
        goto label_2943cc;
    }
    ctx->pc = 0x2943C4u;
    SET_GPR_U32(ctx, 31, 0x2943CCu);
    ctx->pc = 0x2943C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2943C4u;
    // 0x2943c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2943C4u, 0x2943CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2943CCu;
label_2943cc:
    // 0x2943cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2943ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2943d0:
    // 0x2943d0: 0x8242002c  lb          $v0, 0x2C($s2)
    ctx->pc = 0x2943d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 44)));
label_2943d4:
    // 0x2943d4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_2943d8:
    if (ctx->pc == 0x2943D8u) {
        ctx->pc = 0x2943D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943D4u;
        // 0x2943d8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943DCu;
        goto label_2943dc;
    }
    ctx->pc = 0x2943D4u;
    {
        const bool branch_taken_0x2943d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2943D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943D4u;
        // 0x2943d8: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943d4) {
            ctx->pc = 0x2943E8u;
            goto label_2943e8;
        }
    }
    ctx->pc = 0x2943DCu;
label_2943dc:
    // 0x2943dc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2943dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2943e0:
    // 0x2943e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2943e4:
    if (ctx->pc == 0x2943E4u) {
        ctx->pc = 0x2943E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943E0u;
        // 0x2943e4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943E8u;
        goto label_2943e8;
    }
    ctx->pc = 0x2943E0u;
    {
        const bool branch_taken_0x2943e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2943E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943E0u;
        // 0x2943e4: 0x8c500040  lw          $s0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2943e0) {
            ctx->pc = 0x2943ECu;
            goto label_2943ec;
        }
    }
    ctx->pc = 0x2943E8u;
label_2943e8:
    // 0x2943e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2943e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2943ec:
    // 0x2943ec: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_2943f0:
    if (ctx->pc == 0x2943F0u) {
        ctx->pc = 0x2943F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2943ECu;
        // 0x2943f0: 0x86220092  lh          $v0, 0x92($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2943F4u;
        goto label_2943f4;
    }
    ctx->pc = 0x2943ECu;
    {
        const bool branch_taken_0x2943ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2943ec) {
            ctx->pc = 0x2943F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2943ECu;
            // 0x2943f0: 0x86220092  lh          $v0, 0x92($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x294458u;
            goto label_294458;
        }
    }
    ctx->pc = 0x2943F4u;
label_2943f4:
    // 0x2943f4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2943f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2943f8:
    // 0x2943f8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x2943f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_2943fc:
    // 0x2943fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2943fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_294400:
    // 0x294400: 0x40f809  jalr        $v0
label_294404:
    if (ctx->pc == 0x294404u) {
        ctx->pc = 0x294404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294400u;
        // 0x294404: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294408u;
        goto label_294408;
    }
    ctx->pc = 0x294400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294408u);
        ctx->pc = 0x294404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294400u;
        // 0x294404: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294400u, 0x294408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294408u;
label_294408:
    // 0x294408: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x294408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_29440c:
    // 0x29440c: 0x5043006e  beql        $v0, $v1, . + 4 + (0x6E << 2)
label_294410:
    if (ctx->pc == 0x294410u) {
        ctx->pc = 0x294410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29440Cu;
        // 0x294410: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294414u;
        goto label_294414;
    }
    ctx->pc = 0x29440Cu;
    {
        const bool branch_taken_0x29440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29440c) {
            ctx->pc = 0x294410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29440Cu;
            // 0x294410: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945C8u;
            goto label_2945c8;
        }
    }
    ctx->pc = 0x294414u;
label_294414:
    // 0x294414: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x294414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_294418:
    // 0x294418: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x294418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29441c:
    // 0x29441c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_294420:
    // 0x294420: 0x40f809  jalr        $v0
label_294424:
    if (ctx->pc == 0x294424u) {
        ctx->pc = 0x294424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294420u;
        // 0x294424: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294428u;
        goto label_294428;
    }
    ctx->pc = 0x294420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294428u);
        ctx->pc = 0x294424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294420u;
        // 0x294424: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294420u, 0x294428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294428u;
label_294428:
    // 0x294428: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x294428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_29442c:
    // 0x29442c: 0x50430066  beql        $v0, $v1, . + 4 + (0x66 << 2)
label_294430:
    if (ctx->pc == 0x294430u) {
        ctx->pc = 0x294430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29442Cu;
        // 0x294430: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294434u;
        goto label_294434;
    }
    ctx->pc = 0x29442Cu;
    {
        const bool branch_taken_0x29442c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29442c) {
            ctx->pc = 0x294430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29442Cu;
            // 0x294430: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945C8u;
            goto label_2945c8;
        }
    }
    ctx->pc = 0x294434u;
label_294434:
    // 0x294434: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x294434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_294438:
    // 0x294438: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x294438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_29443c:
    // 0x29443c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_294440:
    // 0x294440: 0x40f809  jalr        $v0
label_294444:
    if (ctx->pc == 0x294444u) {
        ctx->pc = 0x294444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294440u;
        // 0x294444: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294448u;
        goto label_294448;
    }
    ctx->pc = 0x294440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294448u);
        ctx->pc = 0x294444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294440u;
        // 0x294444: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294440u, 0x294448u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294448u;
label_294448:
    // 0x294448: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x294448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
label_29444c:
    // 0x29444c: 0x5043005e  beql        $v0, $v1, . + 4 + (0x5E << 2)
label_294450:
    if (ctx->pc == 0x294450u) {
        ctx->pc = 0x294450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29444Cu;
        // 0x294450: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294454u;
        goto label_294454;
    }
    ctx->pc = 0x29444Cu;
    {
        const bool branch_taken_0x29444c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29444c) {
            ctx->pc = 0x294450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29444Cu;
            // 0x294450: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945C8u;
            goto label_2945c8;
        }
    }
    ctx->pc = 0x294454u;
label_294454:
    // 0x294454: 0x86220092  lh          $v0, 0x92($s1)
    ctx->pc = 0x294454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 146)));
label_294458:
    // 0x294458: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x294458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_29445c:
    // 0x29445c: 0x24834b00  addiu       $v1, $a0, 0x4B00
    ctx->pc = 0x29445cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_294460:
    // 0x294460: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x294460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_294464:
    // 0x294464: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x294464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_294468:
    // 0x294468: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x294468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29446c:
    // 0x29446c: 0xc0cdb38  jal         func_336CE0
label_294470:
    if (ctx->pc == 0x294470u) {
        ctx->pc = 0x294470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29446Cu;
        // 0x294470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294474u;
        goto label_294474;
    }
    ctx->pc = 0x29446Cu;
    SET_GPR_U32(ctx, 31, 0x294474u);
    ctx->pc = 0x294470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29446Cu;
    // 0x294470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x29446Cu, 0x294474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294474u;
label_294474:
    // 0x294474: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x294474u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_294478:
    // 0x294478: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x294478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29447c:
    // 0x29447c: 0x0  nop
    ctx->pc = 0x29447cu;
    // NOP
label_294480:
    // 0x294480: 0x45030051  bc1tl       . + 4 + (0x51 << 2)
label_294484:
    if (ctx->pc == 0x294484u) {
        ctx->pc = 0x294484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294480u;
        // 0x294484: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294488u;
        goto label_294488;
    }
    ctx->pc = 0x294480u;
    {
        const bool branch_taken_0x294480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x294480) {
            ctx->pc = 0x294484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294480u;
            // 0x294484: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945C8u;
            goto label_2945c8;
        }
    }
    ctx->pc = 0x294488u;
label_294488:
    // 0x294488: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29448c:
    // 0x29448c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_294490:
    // 0x294490: 0xc136afa  jal         func_4DABE8
label_294494:
    if (ctx->pc == 0x294494u) {
        ctx->pc = 0x294494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294490u;
        // 0x294494: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294498u;
        goto label_294498;
    }
    ctx->pc = 0x294490u;
    SET_GPR_U32(ctx, 31, 0x294498u);
    ctx->pc = 0x294494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294490u;
    // 0x294494: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x294490u, 0x294498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294498u;
label_294498:
    // 0x294498: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x294498u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29449c:
    // 0x29449c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x29449cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_2944a0:
    // 0x2944a0: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x2944a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2944a4:
    // 0x2944a4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2944a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2944a8:
    // 0x2944a8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2944a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2944ac:
    // 0x2944ac: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2944acu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2944b0:
    // 0x2944b0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2944b0u;
    // VWAITQ (Q already resolved in this runtime)
label_2944b4:
    // 0x2944b4: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x2944b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2944b8:
    // 0x2944b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2944b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2944bc:
    // 0x2944bc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x2944bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2944c0:
    // 0x2944c0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2944c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2944c4:
    // 0x2944c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2944c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2944c8:
    // 0x2944c8: 0x4b8208ea  vmul.xy     $vf3, $vf1, $vf2
    ctx->pc = 0x2944c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2944cc:
    // 0x2944cc: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x2944ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2944d0:
    // 0x2944d0: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x2944d0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_2944d4:
    // 0x2944d4: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x2944d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
label_2944d8:
    // 0x2944d8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2944d8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2944dc:
    // 0x2944dc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2944dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2944e0:
    // 0x2944e0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2944e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2944e4:
    // 0x2944e4: 0x0  nop
    ctx->pc = 0x2944e4u;
    // NOP
label_2944e8:
    // 0x2944e8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2944ec:
    if (ctx->pc == 0x2944ECu) {
        ctx->pc = 0x2944ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944E8u;
        // 0x2944ec: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2944F0u;
        goto label_2944f0;
    }
    ctx->pc = 0x2944E8u;
    {
        const bool branch_taken_0x2944e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2944ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2944E8u;
        // 0x2944ec: 0x7fa30010  sq          $v1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944e8) {
            ctx->pc = 0x29450Cu;
            goto label_29450c;
        }
    }
    ctx->pc = 0x2944F0u;
label_2944f0:
    // 0x2944f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2944f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2944f4:
    // 0x2944f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2944f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2944f8:
    // 0x2944f8: 0x0  nop
    ctx->pc = 0x2944f8u;
    // NOP
label_2944fc:
    // 0x2944fc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2944fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294500:
    // 0x294500: 0x0  nop
    ctx->pc = 0x294500u;
    // NOP
label_294504:
    // 0x294504: 0x45030030  bc1tl       . + 4 + (0x30 << 2)
label_294508:
    if (ctx->pc == 0x294508u) {
        ctx->pc = 0x294508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294504u;
        // 0x294508: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29450Cu;
        goto label_29450c;
    }
    ctx->pc = 0x294504u;
    {
        const bool branch_taken_0x294504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x294504) {
            ctx->pc = 0x294508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294504u;
            // 0x294508: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945C8u;
            goto label_2945c8;
        }
    }
    ctx->pc = 0x29450Cu;
label_29450c:
    // 0x29450c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x29450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_294510:
    // 0x294510: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x294510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_294514:
    // 0x294514: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x294514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294518:
    // 0x294518: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x294518u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_29451c:
    // 0x29451c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x29451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_294520:
    // 0x294520: 0x40f809  jalr        $v0
label_294524:
    if (ctx->pc == 0x294524u) {
        ctx->pc = 0x294524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294520u;
        // 0x294524: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294528u;
        goto label_294528;
    }
    ctx->pc = 0x294520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294528u);
        ctx->pc = 0x294524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294520u;
        // 0x294524: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294520u, 0x294528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294528u;
label_294528:
    // 0x294528: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_29452c:
    if (ctx->pc == 0x29452Cu) {
        ctx->pc = 0x294530u;
        goto label_294530;
    }
    ctx->pc = 0x294528u;
    {
        const bool branch_taken_0x294528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294528) {
            ctx->pc = 0x2945A0u;
            goto label_2945a0;
        }
    }
    ctx->pc = 0x294530u;
label_294530:
    // 0x294530: 0x924202e5  lbu         $v0, 0x2E5($s2)
    ctx->pc = 0x294530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 741)));
label_294534:
    // 0x294534: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_294538:
    if (ctx->pc == 0x294538u) {
        ctx->pc = 0x29453Cu;
        goto label_29453c;
    }
    ctx->pc = 0x294534u;
    {
        const bool branch_taken_0x294534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294534) {
            ctx->pc = 0x2945A0u;
            goto label_2945a0;
        }
    }
    ctx->pc = 0x29453Cu;
label_29453c:
    // 0x29453c: 0x13d10018  beq         $fp, $s1, . + 4 + (0x18 << 2)
label_294540:
    if (ctx->pc == 0x294540u) {
        ctx->pc = 0x294544u;
        goto label_294544;
    }
    ctx->pc = 0x29453Cu;
    {
        const bool branch_taken_0x29453c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 17));
        if (branch_taken_0x29453c) {
            ctx->pc = 0x2945A0u;
            goto label_2945a0;
        }
    }
    ctx->pc = 0x294544u;
label_294544:
    // 0x294544: 0x8242002e  lb          $v0, 0x2E($s2)
    ctx->pc = 0x294544u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 46)));
label_294548:
    // 0x294548: 0x58400015  blezl       $v0, . + 4 + (0x15 << 2)
label_29454c:
    if (ctx->pc == 0x29454Cu) {
        ctx->pc = 0x29454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294548u;
        // 0x29454c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294550u;
        goto label_294550;
    }
    ctx->pc = 0x294548u;
    {
        const bool branch_taken_0x294548 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x294548) {
            ctx->pc = 0x29454Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294548u;
            // 0x29454c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945A0u;
            goto label_2945a0;
        }
    }
    ctx->pc = 0x294550u;
label_294550:
    // 0x294550: 0xc0a36c2  jal         func_28DB08
label_294554:
    if (ctx->pc == 0x294554u) {
        ctx->pc = 0x294554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294550u;
        // 0x294554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294558u;
        goto label_294558;
    }
    ctx->pc = 0x294550u;
    SET_GPR_U32(ctx, 31, 0x294558u);
    ctx->pc = 0x294554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294550u;
    // 0x294554: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x294550u, 0x294558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294558u;
label_294558:
    // 0x294558: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x294558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_29455c:
    // 0x29455c: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x29455cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_294560:
    // 0x294560: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x294560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_294564:
    // 0x294564: 0xa0f809  jalr        $a1
label_294568:
    if (ctx->pc == 0x294568u) {
        ctx->pc = 0x294568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294564u;
        // 0x294568: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29456Cu;
        goto label_29456c;
    }
    ctx->pc = 0x294564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x29456Cu);
        ctx->pc = 0x294568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294564u;
        // 0x294568: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294564u, 0x29456Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29456Cu;
label_29456c:
    // 0x29456c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x29456cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_294570:
    // 0x294570: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_294574:
    if (ctx->pc == 0x294574u) {
        ctx->pc = 0x294578u;
        goto label_294578;
    }
    ctx->pc = 0x294570u;
    {
        const bool branch_taken_0x294570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x294570) {
            ctx->pc = 0x2945A0u;
            goto label_2945a0;
        }
    }
    ctx->pc = 0x294578u;
label_294578:
    // 0x294578: 0xc0a36c2  jal         func_28DB08
label_29457c:
    if (ctx->pc == 0x29457Cu) {
        ctx->pc = 0x29457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294578u;
        // 0x29457c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294580u;
        goto label_294580;
    }
    ctx->pc = 0x294578u;
    SET_GPR_U32(ctx, 31, 0x294580u);
    ctx->pc = 0x29457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294578u;
    // 0x29457c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB08u, 0x294578u, 0x294580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294580u;
label_294580:
    // 0x294580: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x294580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_294584:
    // 0x294584: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x294584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_294588:
    // 0x294588: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x294588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29458c:
    // 0x29458c: 0xa0f809  jalr        $a1
label_294590:
    if (ctx->pc == 0x294590u) {
        ctx->pc = 0x294590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29458Cu;
        // 0x294590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294594u;
        goto label_294594;
    }
    ctx->pc = 0x29458Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x294594u);
        ctx->pc = 0x294590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29458Cu;
        // 0x294590: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29458Cu, 0x294594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x294594u;
label_294594:
    // 0x294594: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x294594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_294598:
    // 0x294598: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_29459c:
    if (ctx->pc == 0x29459Cu) {
        ctx->pc = 0x29459Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294598u;
        // 0x29459c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945A0u;
        goto label_2945a0;
    }
    ctx->pc = 0x294598u;
    {
        const bool branch_taken_0x294598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294598) {
            ctx->pc = 0x29459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x294598u;
            // 0x29459c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2945A0u;
            goto label_2945a0;
        }
    }
    ctx->pc = 0x2945A0u;
label_2945a0:
    // 0x2945a0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2945a4:
    if (ctx->pc == 0x2945A4u) {
        ctx->pc = 0x2945A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945A0u;
        // 0x2945a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945A8u;
        goto label_2945a8;
    }
    ctx->pc = 0x2945A0u;
    {
        const bool branch_taken_0x2945a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2945A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945A0u;
        // 0x2945a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945a0) {
            ctx->pc = 0x2945C4u;
            goto label_2945c4;
        }
    }
    ctx->pc = 0x2945A8u;
label_2945a8:
    // 0x2945a8: 0xc0a36c8  jal         func_28DB20
label_2945ac:
    if (ctx->pc == 0x2945ACu) {
        ctx->pc = 0x2945ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945A8u;
        // 0x2945ac: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945B0u;
        goto label_2945b0;
    }
    ctx->pc = 0x2945A8u;
    SET_GPR_U32(ctx, 31, 0x2945B0u);
    ctx->pc = 0x2945ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945A8u;
    // 0x2945ac: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2945A8u, 0x2945B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945B0u;
label_2945b0:
    // 0x2945b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2945b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2945b4:
    // 0x2945b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2945b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2945b8:
    // 0x2945b8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2945b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2945bc:
    // 0x2945bc: 0xc0a2892  jal         func_28A248
label_2945c0:
    if (ctx->pc == 0x2945C0u) {
        ctx->pc = 0x2945C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945BCu;
        // 0x2945c0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945C4u;
        goto label_2945c4;
    }
    ctx->pc = 0x2945BCu;
    SET_GPR_U32(ctx, 31, 0x2945C4u);
    ctx->pc = 0x2945C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2945BCu;
    // 0x2945c0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28A248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28A248u, 0x2945BCu, 0x2945C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2945C4u;
label_2945c4:
    // 0x2945c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2945c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2945c8:
    // 0x2945c8: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x2945c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2945cc:
    // 0x2945cc: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
label_2945d0:
    if (ctx->pc == 0x2945D0u) {
        ctx->pc = 0x2945D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945CCu;
        // 0x2945d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2945D4u;
        goto label_2945d4;
    }
    ctx->pc = 0x2945CCu;
    {
        const bool branch_taken_0x2945cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2945D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2945CCu;
        // 0x2945d0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945cc) {
            ctx->pc = 0x2943A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2943a0;
        }
    }
    ctx->pc = 0x2945D4u;
label_2945d4:
    // 0x2945d4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2945d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2945d8:
    // 0x2945d8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2945d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2945dc:
    // 0x2945dc: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2945dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2945e0:
    // 0x2945e0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2945e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2945e4:
    // 0x2945e4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2945e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2945e8:
    // 0x2945e8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2945e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2945ec:
    // 0x2945ec: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2945ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2945f0:
    // 0x2945f0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2945f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2945f4:
    // 0x2945f4: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2945f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2945f8:
    // 0x2945f8: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2945f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2945fc:
    // 0x2945fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2945fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_294600:
    // 0x294600: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x294600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_294604:
    // 0x294604: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x294604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_294608:
    // 0x294608: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x294608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29460c:
    // 0x29460c: 0x3e00008  jr          $ra
label_294610:
    if (ctx->pc == 0x294610u) {
        ctx->pc = 0x294610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29460Cu;
        // 0x294610: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x294614u;
        goto label_294614;
    }
    ctx->pc = 0x29460Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29460Cu;
        // 0x294610: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29460Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294614u;
label_294614:
    // 0x294614: 0x0  nop
    ctx->pc = 0x294614u;
    // NOP
    ctx->pc = 0x294618u;
}
