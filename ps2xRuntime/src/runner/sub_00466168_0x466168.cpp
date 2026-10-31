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

// Function: sub_00466168
// Address: 0x466168 - 0x466518
void sub_00466168_0x466168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466168_0x466168");
#endif

    switch (ctx->pc) {
        case 0x466168u: goto label_466168;
        case 0x46616cu: goto label_46616c;
        case 0x466170u: goto label_466170;
        case 0x466174u: goto label_466174;
        case 0x466178u: goto label_466178;
        case 0x46617cu: goto label_46617c;
        case 0x466180u: goto label_466180;
        case 0x466184u: goto label_466184;
        case 0x466188u: goto label_466188;
        case 0x46618cu: goto label_46618c;
        case 0x466190u: goto label_466190;
        case 0x466194u: goto label_466194;
        case 0x466198u: goto label_466198;
        case 0x46619cu: goto label_46619c;
        case 0x4661a0u: goto label_4661a0;
        case 0x4661a4u: goto label_4661a4;
        case 0x4661a8u: goto label_4661a8;
        case 0x4661acu: goto label_4661ac;
        case 0x4661b0u: goto label_4661b0;
        case 0x4661b4u: goto label_4661b4;
        case 0x4661b8u: goto label_4661b8;
        case 0x4661bcu: goto label_4661bc;
        case 0x4661c0u: goto label_4661c0;
        case 0x4661c4u: goto label_4661c4;
        case 0x4661c8u: goto label_4661c8;
        case 0x4661ccu: goto label_4661cc;
        case 0x4661d0u: goto label_4661d0;
        case 0x4661d4u: goto label_4661d4;
        case 0x4661d8u: goto label_4661d8;
        case 0x4661dcu: goto label_4661dc;
        case 0x4661e0u: goto label_4661e0;
        case 0x4661e4u: goto label_4661e4;
        case 0x4661e8u: goto label_4661e8;
        case 0x4661ecu: goto label_4661ec;
        case 0x4661f0u: goto label_4661f0;
        case 0x4661f4u: goto label_4661f4;
        case 0x4661f8u: goto label_4661f8;
        case 0x4661fcu: goto label_4661fc;
        case 0x466200u: goto label_466200;
        case 0x466204u: goto label_466204;
        case 0x466208u: goto label_466208;
        case 0x46620cu: goto label_46620c;
        case 0x466210u: goto label_466210;
        case 0x466214u: goto label_466214;
        case 0x466218u: goto label_466218;
        case 0x46621cu: goto label_46621c;
        case 0x466220u: goto label_466220;
        case 0x466224u: goto label_466224;
        case 0x466228u: goto label_466228;
        case 0x46622cu: goto label_46622c;
        case 0x466230u: goto label_466230;
        case 0x466234u: goto label_466234;
        case 0x466238u: goto label_466238;
        case 0x46623cu: goto label_46623c;
        case 0x466240u: goto label_466240;
        case 0x466244u: goto label_466244;
        case 0x466248u: goto label_466248;
        case 0x46624cu: goto label_46624c;
        case 0x466250u: goto label_466250;
        case 0x466254u: goto label_466254;
        case 0x466258u: goto label_466258;
        case 0x46625cu: goto label_46625c;
        case 0x466260u: goto label_466260;
        case 0x466264u: goto label_466264;
        case 0x466268u: goto label_466268;
        case 0x46626cu: goto label_46626c;
        case 0x466270u: goto label_466270;
        case 0x466274u: goto label_466274;
        case 0x466278u: goto label_466278;
        case 0x46627cu: goto label_46627c;
        case 0x466280u: goto label_466280;
        case 0x466284u: goto label_466284;
        case 0x466288u: goto label_466288;
        case 0x46628cu: goto label_46628c;
        case 0x466290u: goto label_466290;
        case 0x466294u: goto label_466294;
        case 0x466298u: goto label_466298;
        case 0x46629cu: goto label_46629c;
        case 0x4662a0u: goto label_4662a0;
        case 0x4662a4u: goto label_4662a4;
        case 0x4662a8u: goto label_4662a8;
        case 0x4662acu: goto label_4662ac;
        case 0x4662b0u: goto label_4662b0;
        case 0x4662b4u: goto label_4662b4;
        case 0x4662b8u: goto label_4662b8;
        case 0x4662bcu: goto label_4662bc;
        case 0x4662c0u: goto label_4662c0;
        case 0x4662c4u: goto label_4662c4;
        case 0x4662c8u: goto label_4662c8;
        case 0x4662ccu: goto label_4662cc;
        case 0x4662d0u: goto label_4662d0;
        case 0x4662d4u: goto label_4662d4;
        case 0x4662d8u: goto label_4662d8;
        case 0x4662dcu: goto label_4662dc;
        case 0x4662e0u: goto label_4662e0;
        case 0x4662e4u: goto label_4662e4;
        case 0x4662e8u: goto label_4662e8;
        case 0x4662ecu: goto label_4662ec;
        case 0x4662f0u: goto label_4662f0;
        case 0x4662f4u: goto label_4662f4;
        case 0x4662f8u: goto label_4662f8;
        case 0x4662fcu: goto label_4662fc;
        case 0x466300u: goto label_466300;
        case 0x466304u: goto label_466304;
        case 0x466308u: goto label_466308;
        case 0x46630cu: goto label_46630c;
        case 0x466310u: goto label_466310;
        case 0x466314u: goto label_466314;
        case 0x466318u: goto label_466318;
        case 0x46631cu: goto label_46631c;
        case 0x466320u: goto label_466320;
        case 0x466324u: goto label_466324;
        case 0x466328u: goto label_466328;
        case 0x46632cu: goto label_46632c;
        case 0x466330u: goto label_466330;
        case 0x466334u: goto label_466334;
        case 0x466338u: goto label_466338;
        case 0x46633cu: goto label_46633c;
        case 0x466340u: goto label_466340;
        case 0x466344u: goto label_466344;
        case 0x466348u: goto label_466348;
        case 0x46634cu: goto label_46634c;
        case 0x466350u: goto label_466350;
        case 0x466354u: goto label_466354;
        case 0x466358u: goto label_466358;
        case 0x46635cu: goto label_46635c;
        case 0x466360u: goto label_466360;
        case 0x466364u: goto label_466364;
        case 0x466368u: goto label_466368;
        case 0x46636cu: goto label_46636c;
        case 0x466370u: goto label_466370;
        case 0x466374u: goto label_466374;
        case 0x466378u: goto label_466378;
        case 0x46637cu: goto label_46637c;
        case 0x466380u: goto label_466380;
        case 0x466384u: goto label_466384;
        case 0x466388u: goto label_466388;
        case 0x46638cu: goto label_46638c;
        case 0x466390u: goto label_466390;
        case 0x466394u: goto label_466394;
        case 0x466398u: goto label_466398;
        case 0x46639cu: goto label_46639c;
        case 0x4663a0u: goto label_4663a0;
        case 0x4663a4u: goto label_4663a4;
        case 0x4663a8u: goto label_4663a8;
        case 0x4663acu: goto label_4663ac;
        case 0x4663b0u: goto label_4663b0;
        case 0x4663b4u: goto label_4663b4;
        case 0x4663b8u: goto label_4663b8;
        case 0x4663bcu: goto label_4663bc;
        case 0x4663c0u: goto label_4663c0;
        case 0x4663c4u: goto label_4663c4;
        case 0x4663c8u: goto label_4663c8;
        case 0x4663ccu: goto label_4663cc;
        case 0x4663d0u: goto label_4663d0;
        case 0x4663d4u: goto label_4663d4;
        case 0x4663d8u: goto label_4663d8;
        case 0x4663dcu: goto label_4663dc;
        case 0x4663e0u: goto label_4663e0;
        case 0x4663e4u: goto label_4663e4;
        case 0x4663e8u: goto label_4663e8;
        case 0x4663ecu: goto label_4663ec;
        case 0x4663f0u: goto label_4663f0;
        case 0x4663f4u: goto label_4663f4;
        case 0x4663f8u: goto label_4663f8;
        case 0x4663fcu: goto label_4663fc;
        case 0x466400u: goto label_466400;
        case 0x466404u: goto label_466404;
        case 0x466408u: goto label_466408;
        case 0x46640cu: goto label_46640c;
        case 0x466410u: goto label_466410;
        case 0x466414u: goto label_466414;
        case 0x466418u: goto label_466418;
        case 0x46641cu: goto label_46641c;
        case 0x466420u: goto label_466420;
        case 0x466424u: goto label_466424;
        case 0x466428u: goto label_466428;
        case 0x46642cu: goto label_46642c;
        case 0x466430u: goto label_466430;
        case 0x466434u: goto label_466434;
        case 0x466438u: goto label_466438;
        case 0x46643cu: goto label_46643c;
        case 0x466440u: goto label_466440;
        case 0x466444u: goto label_466444;
        case 0x466448u: goto label_466448;
        case 0x46644cu: goto label_46644c;
        case 0x466450u: goto label_466450;
        case 0x466454u: goto label_466454;
        case 0x466458u: goto label_466458;
        case 0x46645cu: goto label_46645c;
        case 0x466460u: goto label_466460;
        case 0x466464u: goto label_466464;
        case 0x466468u: goto label_466468;
        case 0x46646cu: goto label_46646c;
        case 0x466470u: goto label_466470;
        case 0x466474u: goto label_466474;
        case 0x466478u: goto label_466478;
        case 0x46647cu: goto label_46647c;
        case 0x466480u: goto label_466480;
        case 0x466484u: goto label_466484;
        case 0x466488u: goto label_466488;
        case 0x46648cu: goto label_46648c;
        case 0x466490u: goto label_466490;
        case 0x466494u: goto label_466494;
        case 0x466498u: goto label_466498;
        case 0x46649cu: goto label_46649c;
        case 0x4664a0u: goto label_4664a0;
        case 0x4664a4u: goto label_4664a4;
        case 0x4664a8u: goto label_4664a8;
        case 0x4664acu: goto label_4664ac;
        case 0x4664b0u: goto label_4664b0;
        case 0x4664b4u: goto label_4664b4;
        case 0x4664b8u: goto label_4664b8;
        case 0x4664bcu: goto label_4664bc;
        case 0x4664c0u: goto label_4664c0;
        case 0x4664c4u: goto label_4664c4;
        case 0x4664c8u: goto label_4664c8;
        case 0x4664ccu: goto label_4664cc;
        case 0x4664d0u: goto label_4664d0;
        case 0x4664d4u: goto label_4664d4;
        case 0x4664d8u: goto label_4664d8;
        case 0x4664dcu: goto label_4664dc;
        case 0x4664e0u: goto label_4664e0;
        case 0x4664e4u: goto label_4664e4;
        case 0x4664e8u: goto label_4664e8;
        case 0x4664ecu: goto label_4664ec;
        case 0x4664f0u: goto label_4664f0;
        case 0x4664f4u: goto label_4664f4;
        case 0x4664f8u: goto label_4664f8;
        case 0x4664fcu: goto label_4664fc;
        case 0x466500u: goto label_466500;
        case 0x466504u: goto label_466504;
        case 0x466508u: goto label_466508;
        case 0x46650cu: goto label_46650c;
        case 0x466510u: goto label_466510;
        case 0x466514u: goto label_466514;
        default: break;
    }

    ctx->pc = 0x466168u;

label_466168:
    // 0x466168: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x466168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_46616c:
    // 0x46616c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x46616cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_466170:
    // 0x466170: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x466170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
label_466174:
    // 0x466174: 0x2442e680  addiu       $v0, $v0, -0x1980
    ctx->pc = 0x466174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
label_466178:
    // 0x466178: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x466178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
label_46617c:
    // 0x46617c: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x46617cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
label_466180:
    // 0x466180: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x466180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
label_466184:
    // 0x466184: 0x2463ad18  addiu       $v1, $v1, -0x52E8
    ctx->pc = 0x466184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946072));
label_466188:
    // 0x466188: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x466188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
label_46618c:
    // 0x46618c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x46618cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_466190:
    // 0x466190: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x466190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
label_466194:
    // 0x466194: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x466194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_466198:
    // 0x466198: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x466198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
label_46619c:
    // 0x46619c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x46619cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4661a0:
    // 0x4661a0: 0x7fbe0120  sq          $fp, 0x120($sp)
    ctx->pc = 0x4661a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 30));
label_4661a4:
    // 0x4661a4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x4661a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4661a8:
    // 0x4661a8: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x4661a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
label_4661ac:
    // 0x4661ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x4661acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_4661b0:
    // 0x4661b0: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x4661b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
label_4661b4:
    // 0x4661b4: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x4661b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_4661b8:
    // 0x4661b8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x4661b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_4661bc:
    // 0x4661bc: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x4661bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4661c0:
    // 0x4661c0: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x4661c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4661c4:
    // 0x4661c4: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x4661c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_4661c8:
    // 0x4661c8: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x4661c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_4661cc:
    // 0x4661cc: 0x40f809  jalr        $v0
label_4661d0:
    if (ctx->pc == 0x4661D0u) {
        ctx->pc = 0x4661D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4661CCu;
        // 0x4661d0: 0xafa60100  sw          $a2, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4661D4u;
        goto label_4661d4;
    }
    ctx->pc = 0x4661CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4661D4u);
        ctx->pc = 0x4661D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4661CCu;
        // 0x4661d0: 0xafa60100  sw          $a2, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4661CCu, 0x4661D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4661D4u;
label_4661d4:
    // 0x4661d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4661d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4661d8:
    // 0x4661d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4661d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4661dc:
    // 0x4661dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4661dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4661e0:
    // 0x4661e0: 0xc10c1fa  jal         func_4307E8
label_4661e4:
    if (ctx->pc == 0x4661E4u) {
        ctx->pc = 0x4661E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4661E0u;
        // 0x4661e4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4661E8u;
        goto label_4661e8;
    }
    ctx->pc = 0x4661E0u;
    SET_GPR_U32(ctx, 31, 0x4661E8u);
    ctx->pc = 0x4661E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4661E0u;
    // 0x4661e4: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4661E0u, 0x4661E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4661E8u;
label_4661e8:
    // 0x4661e8: 0x1600002c  bnez        $s0, . + 4 + (0x2C << 2)
label_4661ec:
    if (ctx->pc == 0x4661ECu) {
        ctx->pc = 0x4661ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4661E8u;
        // 0x4661ec: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4661F0u;
        goto label_4661f0;
    }
    ctx->pc = 0x4661E8u;
    {
        const bool branch_taken_0x4661e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4661ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4661E8u;
        // 0x4661ec: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4661e8) {
            ctx->pc = 0x46629Cu;
            goto label_46629c;
        }
    }
    ctx->pc = 0x4661F0u;
label_4661f0:
    // 0x4661f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4661f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4661f4:
    // 0x4661f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4661f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4661f8:
    // 0x4661f8: 0x12600027  beqz        $s3, . + 4 + (0x27 << 2)
label_4661fc:
    if (ctx->pc == 0x4661FCu) {
        ctx->pc = 0x4661FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4661F8u;
        // 0x4661fc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466200u;
        goto label_466200;
    }
    ctx->pc = 0x4661F8u;
    {
        const bool branch_taken_0x4661f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4661FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4661F8u;
        // 0x4661fc: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4661f8) {
            ctx->pc = 0x466298u;
            goto label_466298;
        }
    }
    ctx->pc = 0x466200u;
label_466200:
    // 0x466200: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x466200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_466204:
    // 0x466204: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x466204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466208:
    // 0x466208: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x466208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_46620c:
    // 0x46620c: 0x0  nop
    ctx->pc = 0x46620cu;
    // NOP
label_466210:
    // 0x466210: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x466210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_466214:
    // 0x466214: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x466214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_466218:
    // 0x466218: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_46621c:
    if (ctx->pc == 0x46621Cu) {
        ctx->pc = 0x46621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466218u;
        // 0x46621c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466220u;
        goto label_466220;
    }
    ctx->pc = 0x466218u;
    {
        const bool branch_taken_0x466218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x46621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466218u;
        // 0x46621c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466218) {
            ctx->pc = 0x466284u;
            goto label_466284;
        }
    }
    ctx->pc = 0x466220u;
label_466220:
    // 0x466220: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x466220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_466224:
    // 0x466224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x466224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_466228:
    // 0x466228: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_46622c:
    if (ctx->pc == 0x46622Cu) {
        ctx->pc = 0x46622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466228u;
        // 0x46622c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466230u;
        goto label_466230;
    }
    ctx->pc = 0x466228u;
    {
        const bool branch_taken_0x466228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x46622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466228u;
        // 0x46622c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466228) {
            ctx->pc = 0x466284u;
            goto label_466284;
        }
    }
    ctx->pc = 0x466230u;
label_466230:
    // 0x466230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x466230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_466234:
    // 0x466234: 0x10890018  beq         $a0, $t1, . + 4 + (0x18 << 2)
label_466238:
    if (ctx->pc == 0x466238u) {
        ctx->pc = 0x466238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466234u;
        // 0x466238: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46623Cu;
        goto label_46623c;
    }
    ctx->pc = 0x466234u;
    {
        const bool branch_taken_0x466234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 9));
        ctx->pc = 0x466238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466234u;
        // 0x466238: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466234) {
            ctx->pc = 0x466298u;
            goto label_466298;
        }
    }
    ctx->pc = 0x46623Cu;
label_46623c:
    // 0x46623c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x46623cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_466240:
    // 0x466240: 0x1141021  addu        $v0, $t0, $s4
    ctx->pc = 0x466240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 20)));
label_466244:
    // 0x466244: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x466244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_466248:
    // 0x466248: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x466248u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_46624c:
    // 0x46624c: 0x0  nop
    ctx->pc = 0x46624cu;
    // NOP
label_466250:
    // 0x466250: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x466250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_466254:
    // 0x466254: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_466258:
    if (ctx->pc == 0x466258u) {
        ctx->pc = 0x466258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466254u;
        // 0x466258: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46625Cu;
        goto label_46625c;
    }
    ctx->pc = 0x466254u;
    {
        const bool branch_taken_0x466254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466254) {
            ctx->pc = 0x466258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466254u;
            // 0x466258: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466288u;
            goto label_466288;
        }
    }
    ctx->pc = 0x46625Cu;
label_46625c:
    // 0x46625c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x46625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_466260:
    // 0x466260: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_466264:
    if (ctx->pc == 0x466264u) {
        ctx->pc = 0x466264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466260u;
        // 0x466264: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466268u;
        goto label_466268;
    }
    ctx->pc = 0x466260u;
    {
        const bool branch_taken_0x466260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x466260) {
            ctx->pc = 0x466264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466260u;
            // 0x466264: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466288u;
            goto label_466288;
        }
    }
    ctx->pc = 0x466268u;
label_466268:
    // 0x466268: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x466268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_46626c:
    // 0x46626c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x46626cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_466270:
    // 0x466270: 0x10460009  beq         $v0, $a2, . + 4 + (0x9 << 2)
label_466274:
    if (ctx->pc == 0x466274u) {
        ctx->pc = 0x466274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466270u;
        // 0x466274: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466278u;
        goto label_466278;
    }
    ctx->pc = 0x466270u;
    {
        const bool branch_taken_0x466270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x466274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466270u;
        // 0x466274: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466270) {
            ctx->pc = 0x466298u;
            goto label_466298;
        }
    }
    ctx->pc = 0x466278u;
label_466278:
    // 0x466278: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x466278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_46627c:
    // 0x46627c: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_466280:
    if (ctx->pc == 0x466280u) {
        ctx->pc = 0x466280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46627Cu;
        // 0x466280: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466284u;
        goto label_466284;
    }
    ctx->pc = 0x46627Cu;
    {
        const bool branch_taken_0x46627c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x466280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46627Cu;
        // 0x466280: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46627c) {
            ctx->pc = 0x466250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466250;
        }
    }
    ctx->pc = 0x466284u;
label_466284:
    // 0x466284: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x466284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_466288:
    // 0x466288: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x466288u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_46628c:
    // 0x46628c: 0xf3102b  sltu        $v0, $a3, $s3
    ctx->pc = 0x46628cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_466290:
    // 0x466290: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_466294:
    if (ctx->pc == 0x466294u) {
        ctx->pc = 0x466294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466290u;
        // 0x466294: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466298u;
        goto label_466298;
    }
    ctx->pc = 0x466290u;
    {
        const bool branch_taken_0x466290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x466294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466290u;
        // 0x466294: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466290) {
            ctx->pc = 0x466210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466210;
        }
    }
    ctx->pc = 0x466298u;
label_466298:
    // 0x466298: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x466298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_46629c:
    // 0x46629c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_4662a0:
    if (ctx->pc == 0x4662A0u) {
        ctx->pc = 0x4662A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46629Cu;
        // 0x4662a0: 0x17b180  sll         $s6, $s7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4662A4u;
        goto label_4662a4;
    }
    ctx->pc = 0x46629Cu;
    {
        const bool branch_taken_0x46629c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4662A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46629Cu;
        // 0x4662a0: 0x17b180  sll         $s6, $s7, 6 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46629c) {
            ctx->pc = 0x466380u;
            goto label_466380;
        }
    }
    ctx->pc = 0x4662A4u;
label_4662a4:
    // 0x4662a4: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x4662a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4662a8:
    // 0x4662a8: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x4662a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4662ac:
    // 0x4662ac: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x4662acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_4662b0:
    // 0x4662b0: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
label_4662b4:
    if (ctx->pc == 0x4662B4u) {
        ctx->pc = 0x4662B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4662B0u;
        // 0x4662b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4662B8u;
        goto label_4662b8;
    }
    ctx->pc = 0x4662B0u;
    {
        const bool branch_taken_0x4662b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4662B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4662B0u;
        // 0x4662b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4662b0) {
            ctx->pc = 0x466380u;
            goto label_466380;
        }
    }
    ctx->pc = 0x4662B8u;
label_4662b8:
    // 0x4662b8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x4662b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4662bc:
    // 0x4662bc: 0x0  nop
    ctx->pc = 0x4662bcu;
    // NOP
label_4662c0:
    // 0x4662c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4662c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4662c4:
    // 0x4662c4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
label_4662c8:
    if (ctx->pc == 0x4662C8u) {
        ctx->pc = 0x4662C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4662C4u;
        // 0x4662c8: 0x24ad0001  addiu       $t5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4662CCu;
        goto label_4662cc;
    }
    ctx->pc = 0x4662C4u;
    {
        const bool branch_taken_0x4662c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4662C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4662C4u;
        // 0x4662c8: 0x24ad0001  addiu       $t5, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4662c4) {
            ctx->pc = 0x466370u;
            goto label_466370;
        }
    }
    ctx->pc = 0x4662CCu;
label_4662cc:
    // 0x4662cc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x4662ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4662d0:
    // 0x4662d0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x4662d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_4662d4:
    // 0x4662d4: 0x546021  addu        $t4, $v0, $s4
    ctx->pc = 0x4662d4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_4662d8:
    // 0x4662d8: 0x755821  addu        $t3, $v1, $s5
    ctx->pc = 0x4662d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_4662dc:
    // 0x4662dc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x4662dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4662e0:
    // 0x4662e0: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x4662e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_4662e4:
    // 0x4662e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4662e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4662e8:
    // 0x4662e8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_4662ec:
    if (ctx->pc == 0x4662ECu) {
        ctx->pc = 0x4662ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4662E8u;
        // 0x4662ec: 0x248a0001  addiu       $t2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4662F0u;
        goto label_4662f0;
    }
    ctx->pc = 0x4662E8u;
    {
        const bool branch_taken_0x4662e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4662ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4662E8u;
        // 0x4662ec: 0x248a0001  addiu       $t2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4662e8) {
            ctx->pc = 0x46635Cu;
            goto label_46635c;
        }
    }
    ctx->pc = 0x4662F0u;
label_4662f0:
    // 0x4662f0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4662f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4662f4:
    // 0x4662f4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4662f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4662f8:
    // 0x4662f8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4662f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_4662fc:
    // 0x4662fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4662fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_466300:
    // 0x466300: 0x821006  srlv        $v0, $v0, $a0
    ctx->pc = 0x466300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_466304:
    // 0x466304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x466304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466308:
    // 0x466308: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x466308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_46630c:
    // 0x46630c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_466310:
    if (ctx->pc == 0x466310u) {
        ctx->pc = 0x466310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46630Cu;
        // 0x466310: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x466314u;
        goto label_466314;
    }
    ctx->pc = 0x46630Cu;
    {
        const bool branch_taken_0x46630c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x466310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46630Cu;
        // 0x466310: 0x304400ff  andi        $a0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x46630c) {
            ctx->pc = 0x466344u;
            goto label_466344;
        }
    }
    ctx->pc = 0x466314u;
label_466314:
    // 0x466314: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x466314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_466318:
    // 0x466318: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_46631c:
    if (ctx->pc == 0x46631Cu) {
        ctx->pc = 0x46631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466318u;
        // 0x46631c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466320u;
        goto label_466320;
    }
    ctx->pc = 0x466318u;
    {
        const bool branch_taken_0x466318 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x466318) {
            ctx->pc = 0x46631Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466318u;
            // 0x46631c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466344u;
            goto label_466344;
        }
    }
    ctx->pc = 0x466320u;
label_466320:
    // 0x466320: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x466320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_466324:
    // 0x466324: 0x0  nop
    ctx->pc = 0x466324u;
    // NOP
label_466328:
    // 0x466328: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x466328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_46632c:
    // 0x46632c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_466330:
    if (ctx->pc == 0x466330u) {
        ctx->pc = 0x466330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46632Cu;
        // 0x466330: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466334u;
        goto label_466334;
    }
    ctx->pc = 0x46632Cu;
    {
        const bool branch_taken_0x46632c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x466330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46632Cu;
        // 0x466330: 0x1051021  addu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46632c) {
            ctx->pc = 0x466344u;
            goto label_466344;
        }
    }
    ctx->pc = 0x466334u;
label_466334:
    // 0x466334: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x466334u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_466338:
    // 0x466338: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
label_46633c:
    if (ctx->pc == 0x46633Cu) {
        ctx->pc = 0x46633Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466338u;
        // 0x46633c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466340u;
        goto label_466340;
    }
    ctx->pc = 0x466338u;
    {
        const bool branch_taken_0x466338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x466338) {
            ctx->pc = 0x46633Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466338u;
            // 0x46633c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x466328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466328;
        }
    }
    ctx->pc = 0x466340u;
label_466340:
    // 0x466340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x466340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466344:
    // 0x466344: 0x10e00005  beqz        $a3, . + 4 + (0x5 << 2)
label_466348:
    if (ctx->pc == 0x466348u) {
        ctx->pc = 0x466348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466344u;
        // 0x466348: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46634Cu;
        goto label_46634c;
    }
    ctx->pc = 0x466344u;
    {
        const bool branch_taken_0x466344 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x466348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466344u;
        // 0x466348: 0x1061821  addu        $v1, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466344) {
            ctx->pc = 0x46635Cu;
            goto label_46635c;
        }
    }
    ctx->pc = 0x46634Cu;
label_46634c:
    // 0x46634c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x46634cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_466350:
    // 0x466350: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x466350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_466354:
    // 0x466354: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x466354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_466358:
    // 0x466358: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x466358u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_46635c:
    // 0x46635c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x46635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_466360:
    // 0x466360: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x466360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_466364:
    // 0x466364: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x466364u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_466368:
    // 0x466368: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_46636c:
    if (ctx->pc == 0x46636Cu) {
        ctx->pc = 0x46636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466368u;
        // 0x46636c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466370u;
        goto label_466370;
    }
    ctx->pc = 0x466368u;
    {
        const bool branch_taken_0x466368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46636Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466368u;
        // 0x46636c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466368) {
            ctx->pc = 0x4662E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4662e0;
        }
    }
    ctx->pc = 0x466370u;
label_466370:
    // 0x466370: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x466370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_466374:
    // 0x466374: 0xb3102b  sltu        $v0, $a1, $s3
    ctx->pc = 0x466374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_466378:
    // 0x466378: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
label_46637c:
    if (ctx->pc == 0x46637Cu) {
        ctx->pc = 0x46637Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466378u;
        // 0x46637c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466380u;
        goto label_466380;
    }
    ctx->pc = 0x466378u;
    {
        const bool branch_taken_0x466378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x466378) {
            ctx->pc = 0x46637Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x466378u;
            // 0x46637c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4662C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4662c0;
        }
    }
    ctx->pc = 0x466380u;
label_466380:
    // 0x466380: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x466380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_466384:
    // 0x466384: 0x8fb20100  lw          $s2, 0x100($sp)
    ctx->pc = 0x466384u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_466388:
    // 0x466388: 0x2631018  mult        $v0, $s3, $v1
    ctx->pc = 0x466388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_46638c:
    // 0x46638c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46638cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_466390:
    // 0x466390: 0x34a50116  ori         $a1, $a1, 0x116
    ctx->pc = 0x466390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)278);
label_466394:
    // 0x466394: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x466394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_466398:
    // 0x466398: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x466398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46639c:
    // 0x46639c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x46639cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_4663a0:
    // 0x4663a0: 0x2444ad18  addiu       $a0, $v0, -0x52E8
    ctx->pc = 0x4663a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4663a4:
    // 0x4663a4: 0x2470000f  addiu       $s0, $v1, 0xF
    ctx->pc = 0x4663a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_4663a8:
    // 0x4663a8: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x4663a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
label_4663ac:
    // 0x4663ac: 0x40f809  jalr        $v0
label_4663b0:
    if (ctx->pc == 0x4663B0u) {
        ctx->pc = 0x4663B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4663ACu;
        // 0x4663b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4663B4u;
        goto label_4663b4;
    }
    ctx->pc = 0x4663ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4663B4u);
        ctx->pc = 0x4663B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4663ACu;
        // 0x4663b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4663ACu, 0x4663B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4663B4u;
label_4663b4:
    // 0x4663b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_4663b8:
    if (ctx->pc == 0x4663B8u) {
        ctx->pc = 0x4663B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4663B4u;
        // 0x4663b8: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4663BCu;
        goto label_4663bc;
    }
    ctx->pc = 0x4663B4u;
    {
        const bool branch_taken_0x4663b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4663B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4663B4u;
        // 0x4663b8: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4663b4) {
            ctx->pc = 0x4663C4u;
            goto label_4663c4;
        }
    }
    ctx->pc = 0x4663BCu;
label_4663bc:
    // 0x4663bc: 0x1000003f  b           . + 4 + (0x3F << 2)
label_4663c0:
    if (ctx->pc == 0x4663C0u) {
        ctx->pc = 0x4663C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4663BCu;
        // 0x4663c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4663C4u;
        goto label_4663c4;
    }
    ctx->pc = 0x4663BCu;
    {
        const bool branch_taken_0x4663bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4663C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4663BCu;
        // 0x4663c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4663bc) {
            ctx->pc = 0x4664BCu;
            goto label_4664bc;
        }
    }
    ctx->pc = 0x4663C4u;
label_4663c4:
    // 0x4663c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4663c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4663c8:
    // 0x4663c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4663c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4663cc:
    // 0x4663cc: 0xc10c1fa  jal         func_4307E8
label_4663d0:
    if (ctx->pc == 0x4663D0u) {
        ctx->pc = 0x4663D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4663CCu;
        // 0x4663d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4663D4u;
        goto label_4663d4;
    }
    ctx->pc = 0x4663CCu;
    SET_GPR_U32(ctx, 31, 0x4663D4u);
    ctx->pc = 0x4663D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4663CCu;
    // 0x4663d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4663CCu, 0x4663D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4663D4u;
label_4663d4:
    // 0x4663d4: 0x8e250044  lw          $a1, 0x44($s1)
    ctx->pc = 0x4663d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
label_4663d8:
    // 0x4663d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4663d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_4663dc:
    // 0x4663dc: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x4663dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_4663e0:
    // 0x4663e0: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x4663e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_4663e4:
    // 0x4663e4: 0xb21021  addu        $v0, $a1, $s2
    ctx->pc = 0x4663e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_4663e8:
    // 0x4663e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4663e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4663ec:
    // 0x4663ec: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x4663ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_4663f0:
    // 0x4663f0: 0xae370000  sw          $s7, 0x0($s1)
    ctx->pc = 0x4663f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 23));
label_4663f4:
    // 0x4663f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4663f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4663f8:
    // 0x4663f8: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x4663f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_4663fc:
    // 0x4663fc: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x4663fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_466400:
    // 0x466400: 0xae250008  sw          $a1, 0x8($s1)
    ctx->pc = 0x466400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 5));
label_466404:
    // 0x466404: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x466404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_466408:
    // 0x466408: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x466408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_46640c:
    // 0x46640c: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x46640cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
label_466410:
    // 0x466410: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_466414:
    if (ctx->pc == 0x466414u) {
        ctx->pc = 0x466414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466410u;
        // 0x466414: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466418u;
        goto label_466418;
    }
    ctx->pc = 0x466410u;
    {
        const bool branch_taken_0x466410 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x466414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466410u;
        // 0x466414: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466410) {
            ctx->pc = 0x466428u;
            goto label_466428;
        }
    }
    ctx->pc = 0x466418u;
label_466418:
    // 0x466418: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x466418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_46641c:
    // 0x46641c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x46641cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_466420:
    // 0x466420: 0xc10c190  jal         func_430640
label_466424:
    if (ctx->pc == 0x466424u) {
        ctx->pc = 0x466424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466420u;
        // 0x466424: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466428u;
        goto label_466428;
    }
    ctx->pc = 0x466420u;
    SET_GPR_U32(ctx, 31, 0x466428u);
    ctx->pc = 0x466424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x466420u;
    // 0x466424: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x466420u, 0x466428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466428u;
label_466428:
    // 0x466428: 0x13c00019  beqz        $fp, . + 4 + (0x19 << 2)
label_46642c:
    if (ctx->pc == 0x46642Cu) {
        ctx->pc = 0x466430u;
        goto label_466430;
    }
    ctx->pc = 0x466428u;
    {
        const bool branch_taken_0x466428 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x466428) {
            ctx->pc = 0x466490u;
            goto label_466490;
        }
    }
    ctx->pc = 0x466430u;
label_466430:
    // 0x466430: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x466430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_466434:
    // 0x466434: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x466434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_466438:
    // 0x466438: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x466438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_46643c:
    // 0x46643c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x46643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_466440:
    // 0x466440: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
label_466444:
    if (ctx->pc == 0x466444u) {
        ctx->pc = 0x466448u;
        goto label_466448;
    }
    ctx->pc = 0x466440u;
    {
        const bool branch_taken_0x466440 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x466440) {
            ctx->pc = 0x466490u;
            goto label_466490;
        }
    }
    ctx->pc = 0x466448u;
label_466448:
    // 0x466448: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x466448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_46644c:
    // 0x46644c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x46644cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_466450:
    // 0x466450: 0x5e5021  addu        $t2, $v0, $fp
    ctx->pc = 0x466450u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_466454:
    // 0x466454: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x466454u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_466458:
    // 0x466458: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x466458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_46645c:
    // 0x46645c: 0x52180  sll         $a0, $a1, 6
    ctx->pc = 0x46645cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_466460:
    // 0x466460: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x466460u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_466464:
    // 0x466464: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x466464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_466468:
    // 0x466468: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x466468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_46646c:
    // 0x46646c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x46646cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_466470:
    // 0x466470: 0x79420010  lq          $v0, 0x10($t2)
    ctx->pc = 0x466470u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 16)));
label_466474:
    // 0x466474: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x466474u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_466478:
    // 0x466478: 0x79430020  lq          $v1, 0x20($t2)
    ctx->pc = 0x466478u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 10), 32)));
label_46647c:
    // 0x46647c: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x46647cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_466480:
    // 0x466480: 0x79420030  lq          $v0, 0x30($t2)
    ctx->pc = 0x466480u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 10), 48)));
label_466484:
    // 0x466484: 0x254affc0  addiu       $t2, $t2, -0x40
    ctx->pc = 0x466484u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967232));
label_466488:
    // 0x466488: 0x14a6fff3  bne         $a1, $a2, . + 4 + (-0xD << 2)
label_46648c:
    if (ctx->pc == 0x46648Cu) {
        ctx->pc = 0x46648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466488u;
        // 0x46648c: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466490u;
        goto label_466490;
    }
    ctx->pc = 0x466488u;
    {
        const bool branch_taken_0x466488 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x46648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466488u;
        // 0x46648c: 0x7c820030  sq          $v0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466488) {
            ctx->pc = 0x466458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_466458;
        }
    }
    ctx->pc = 0x466490u;
label_466490:
    // 0x466490: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_466494:
    if (ctx->pc == 0x466494u) {
        ctx->pc = 0x466494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466490u;
        // 0x466494: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466498u;
        goto label_466498;
    }
    ctx->pc = 0x466490u;
    {
        const bool branch_taken_0x466490 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x466494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466490u;
        // 0x466494: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466490) {
            ctx->pc = 0x4664A4u;
            goto label_4664a4;
        }
    }
    ctx->pc = 0x466498u;
label_466498:
    // 0x466498: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x466498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_46649c:
    // 0x46649c: 0xc10c190  jal         func_430640
label_4664a0:
    if (ctx->pc == 0x4664A0u) {
        ctx->pc = 0x4664A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46649Cu;
        // 0x4664a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4664A4u;
        goto label_4664a4;
    }
    ctx->pc = 0x46649Cu;
    SET_GPR_U32(ctx, 31, 0x4664A4u);
    ctx->pc = 0x4664A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46649Cu;
    // 0x4664a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x46649Cu, 0x4664A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4664A4u;
label_4664a4:
    // 0x4664a4: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_4664a8:
    if (ctx->pc == 0x4664A8u) {
        ctx->pc = 0x4664A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4664A4u;
        // 0x4664a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4664ACu;
        goto label_4664ac;
    }
    ctx->pc = 0x4664A4u;
    {
        const bool branch_taken_0x4664a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4664A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4664A4u;
        // 0x4664a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4664a4) {
            ctx->pc = 0x4664B8u;
            goto label_4664b8;
        }
    }
    ctx->pc = 0x4664ACu;
label_4664ac:
    // 0x4664ac: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x4664acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_4664b0:
    // 0x4664b0: 0xc10c190  jal         func_430640
label_4664b4:
    if (ctx->pc == 0x4664B4u) {
        ctx->pc = 0x4664B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4664B0u;
        // 0x4664b4: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4664B8u;
        goto label_4664b8;
    }
    ctx->pc = 0x4664B0u;
    SET_GPR_U32(ctx, 31, 0x4664B8u);
    ctx->pc = 0x4664B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4664B0u;
    // 0x4664b4: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4664B0u, 0x4664B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4664B8u;
label_4664b8:
    // 0x4664b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4664b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4664bc:
    // 0x4664bc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_4664c0:
    if (ctx->pc == 0x4664C0u) {
        ctx->pc = 0x4664C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4664BCu;
        // 0x4664c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4664C4u;
        goto label_4664c4;
    }
    ctx->pc = 0x4664BCu;
    {
        const bool branch_taken_0x4664bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4664C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4664BCu;
        // 0x4664c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4664bc) {
            ctx->pc = 0x4664E8u;
            goto label_4664e8;
        }
    }
    ctx->pc = 0x4664C4u;
label_4664c4:
    // 0x4664c4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x4664c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_4664c8:
    // 0x4664c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4664c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4664cc:
    // 0x4664cc: 0x2443ad18  addiu       $v1, $v0, -0x52E8
    ctx->pc = 0x4664ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_4664d0:
    // 0x4664d0: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4664d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_4664d4:
    // 0x4664d4: 0x2446e680  addiu       $a2, $v0, -0x1980
    ctx->pc = 0x4664d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
label_4664d8:
    // 0x4664d8: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x4664d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_4664dc:
    // 0x4664dc: 0x40f809  jalr        $v0
label_4664e0:
    if (ctx->pc == 0x4664E0u) {
        ctx->pc = 0x4664E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4664DCu;
        // 0x4664e0: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4664E4u;
        goto label_4664e4;
    }
    ctx->pc = 0x4664DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4664E4u);
        ctx->pc = 0x4664E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4664DCu;
        // 0x4664e0: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4664DCu, 0x4664E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4664E4u;
label_4664e4:
    // 0x4664e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4664e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4664e8:
    // 0x4664e8: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x4664e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_4664ec:
    // 0x4664ec: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x4664ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_4664f0:
    // 0x4664f0: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x4664f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_4664f4:
    // 0x4664f4: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x4664f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_4664f8:
    // 0x4664f8: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x4664f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_4664fc:
    // 0x4664fc: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x4664fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_466500:
    // 0x466500: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x466500u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_466504:
    // 0x466504: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x466504u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_466508:
    // 0x466508: 0x7bbe0120  lq          $fp, 0x120($sp)
    ctx->pc = 0x466508u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_46650c:
    // 0x46650c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x46650cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_466510:
    // 0x466510: 0x3e00008  jr          $ra
label_466514:
    if (ctx->pc == 0x466514u) {
        ctx->pc = 0x466514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466510u;
        // 0x466514: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x466518u;
        goto label_fallthrough_0x466510;
    }
    ctx->pc = 0x466510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x466510u;
        // 0x466514: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x466510:
    ctx->pc = 0x466518u;
}
