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

// Function: sub_003BF1B8
// Address: 0x3bf1b8 - 0x3bf528
void sub_003BF1B8_0x3bf1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF1B8_0x3bf1b8");
#endif

    switch (ctx->pc) {
        case 0x3bf1b8u: goto label_3bf1b8;
        case 0x3bf1bcu: goto label_3bf1bc;
        case 0x3bf1c0u: goto label_3bf1c0;
        case 0x3bf1c4u: goto label_3bf1c4;
        case 0x3bf1c8u: goto label_3bf1c8;
        case 0x3bf1ccu: goto label_3bf1cc;
        case 0x3bf1d0u: goto label_3bf1d0;
        case 0x3bf1d4u: goto label_3bf1d4;
        case 0x3bf1d8u: goto label_3bf1d8;
        case 0x3bf1dcu: goto label_3bf1dc;
        case 0x3bf1e0u: goto label_3bf1e0;
        case 0x3bf1e4u: goto label_3bf1e4;
        case 0x3bf1e8u: goto label_3bf1e8;
        case 0x3bf1ecu: goto label_3bf1ec;
        case 0x3bf1f0u: goto label_3bf1f0;
        case 0x3bf1f4u: goto label_3bf1f4;
        case 0x3bf1f8u: goto label_3bf1f8;
        case 0x3bf1fcu: goto label_3bf1fc;
        case 0x3bf200u: goto label_3bf200;
        case 0x3bf204u: goto label_3bf204;
        case 0x3bf208u: goto label_3bf208;
        case 0x3bf20cu: goto label_3bf20c;
        case 0x3bf210u: goto label_3bf210;
        case 0x3bf214u: goto label_3bf214;
        case 0x3bf218u: goto label_3bf218;
        case 0x3bf21cu: goto label_3bf21c;
        case 0x3bf220u: goto label_3bf220;
        case 0x3bf224u: goto label_3bf224;
        case 0x3bf228u: goto label_3bf228;
        case 0x3bf22cu: goto label_3bf22c;
        case 0x3bf230u: goto label_3bf230;
        case 0x3bf234u: goto label_3bf234;
        case 0x3bf238u: goto label_3bf238;
        case 0x3bf23cu: goto label_3bf23c;
        case 0x3bf240u: goto label_3bf240;
        case 0x3bf244u: goto label_3bf244;
        case 0x3bf248u: goto label_3bf248;
        case 0x3bf24cu: goto label_3bf24c;
        case 0x3bf250u: goto label_3bf250;
        case 0x3bf254u: goto label_3bf254;
        case 0x3bf258u: goto label_3bf258;
        case 0x3bf25cu: goto label_3bf25c;
        case 0x3bf260u: goto label_3bf260;
        case 0x3bf264u: goto label_3bf264;
        case 0x3bf268u: goto label_3bf268;
        case 0x3bf26cu: goto label_3bf26c;
        case 0x3bf270u: goto label_3bf270;
        case 0x3bf274u: goto label_3bf274;
        case 0x3bf278u: goto label_3bf278;
        case 0x3bf27cu: goto label_3bf27c;
        case 0x3bf280u: goto label_3bf280;
        case 0x3bf284u: goto label_3bf284;
        case 0x3bf288u: goto label_3bf288;
        case 0x3bf28cu: goto label_3bf28c;
        case 0x3bf290u: goto label_3bf290;
        case 0x3bf294u: goto label_3bf294;
        case 0x3bf298u: goto label_3bf298;
        case 0x3bf29cu: goto label_3bf29c;
        case 0x3bf2a0u: goto label_3bf2a0;
        case 0x3bf2a4u: goto label_3bf2a4;
        case 0x3bf2a8u: goto label_3bf2a8;
        case 0x3bf2acu: goto label_3bf2ac;
        case 0x3bf2b0u: goto label_3bf2b0;
        case 0x3bf2b4u: goto label_3bf2b4;
        case 0x3bf2b8u: goto label_3bf2b8;
        case 0x3bf2bcu: goto label_3bf2bc;
        case 0x3bf2c0u: goto label_3bf2c0;
        case 0x3bf2c4u: goto label_3bf2c4;
        case 0x3bf2c8u: goto label_3bf2c8;
        case 0x3bf2ccu: goto label_3bf2cc;
        case 0x3bf2d0u: goto label_3bf2d0;
        case 0x3bf2d4u: goto label_3bf2d4;
        case 0x3bf2d8u: goto label_3bf2d8;
        case 0x3bf2dcu: goto label_3bf2dc;
        case 0x3bf2e0u: goto label_3bf2e0;
        case 0x3bf2e4u: goto label_3bf2e4;
        case 0x3bf2e8u: goto label_3bf2e8;
        case 0x3bf2ecu: goto label_3bf2ec;
        case 0x3bf2f0u: goto label_3bf2f0;
        case 0x3bf2f4u: goto label_3bf2f4;
        case 0x3bf2f8u: goto label_3bf2f8;
        case 0x3bf2fcu: goto label_3bf2fc;
        case 0x3bf300u: goto label_3bf300;
        case 0x3bf304u: goto label_3bf304;
        case 0x3bf308u: goto label_3bf308;
        case 0x3bf30cu: goto label_3bf30c;
        case 0x3bf310u: goto label_3bf310;
        case 0x3bf314u: goto label_3bf314;
        case 0x3bf318u: goto label_3bf318;
        case 0x3bf31cu: goto label_3bf31c;
        case 0x3bf320u: goto label_3bf320;
        case 0x3bf324u: goto label_3bf324;
        case 0x3bf328u: goto label_3bf328;
        case 0x3bf32cu: goto label_3bf32c;
        case 0x3bf330u: goto label_3bf330;
        case 0x3bf334u: goto label_3bf334;
        case 0x3bf338u: goto label_3bf338;
        case 0x3bf33cu: goto label_3bf33c;
        case 0x3bf340u: goto label_3bf340;
        case 0x3bf344u: goto label_3bf344;
        case 0x3bf348u: goto label_3bf348;
        case 0x3bf34cu: goto label_3bf34c;
        case 0x3bf350u: goto label_3bf350;
        case 0x3bf354u: goto label_3bf354;
        case 0x3bf358u: goto label_3bf358;
        case 0x3bf35cu: goto label_3bf35c;
        case 0x3bf360u: goto label_3bf360;
        case 0x3bf364u: goto label_3bf364;
        case 0x3bf368u: goto label_3bf368;
        case 0x3bf36cu: goto label_3bf36c;
        case 0x3bf370u: goto label_3bf370;
        case 0x3bf374u: goto label_3bf374;
        case 0x3bf378u: goto label_3bf378;
        case 0x3bf37cu: goto label_3bf37c;
        case 0x3bf380u: goto label_3bf380;
        case 0x3bf384u: goto label_3bf384;
        case 0x3bf388u: goto label_3bf388;
        case 0x3bf38cu: goto label_3bf38c;
        case 0x3bf390u: goto label_3bf390;
        case 0x3bf394u: goto label_3bf394;
        case 0x3bf398u: goto label_3bf398;
        case 0x3bf39cu: goto label_3bf39c;
        case 0x3bf3a0u: goto label_3bf3a0;
        case 0x3bf3a4u: goto label_3bf3a4;
        case 0x3bf3a8u: goto label_3bf3a8;
        case 0x3bf3acu: goto label_3bf3ac;
        case 0x3bf3b0u: goto label_3bf3b0;
        case 0x3bf3b4u: goto label_3bf3b4;
        case 0x3bf3b8u: goto label_3bf3b8;
        case 0x3bf3bcu: goto label_3bf3bc;
        case 0x3bf3c0u: goto label_3bf3c0;
        case 0x3bf3c4u: goto label_3bf3c4;
        case 0x3bf3c8u: goto label_3bf3c8;
        case 0x3bf3ccu: goto label_3bf3cc;
        case 0x3bf3d0u: goto label_3bf3d0;
        case 0x3bf3d4u: goto label_3bf3d4;
        case 0x3bf3d8u: goto label_3bf3d8;
        case 0x3bf3dcu: goto label_3bf3dc;
        case 0x3bf3e0u: goto label_3bf3e0;
        case 0x3bf3e4u: goto label_3bf3e4;
        case 0x3bf3e8u: goto label_3bf3e8;
        case 0x3bf3ecu: goto label_3bf3ec;
        case 0x3bf3f0u: goto label_3bf3f0;
        case 0x3bf3f4u: goto label_3bf3f4;
        case 0x3bf3f8u: goto label_3bf3f8;
        case 0x3bf3fcu: goto label_3bf3fc;
        case 0x3bf400u: goto label_3bf400;
        case 0x3bf404u: goto label_3bf404;
        case 0x3bf408u: goto label_3bf408;
        case 0x3bf40cu: goto label_3bf40c;
        case 0x3bf410u: goto label_3bf410;
        case 0x3bf414u: goto label_3bf414;
        case 0x3bf418u: goto label_3bf418;
        case 0x3bf41cu: goto label_3bf41c;
        case 0x3bf420u: goto label_3bf420;
        case 0x3bf424u: goto label_3bf424;
        case 0x3bf428u: goto label_3bf428;
        case 0x3bf42cu: goto label_3bf42c;
        case 0x3bf430u: goto label_3bf430;
        case 0x3bf434u: goto label_3bf434;
        case 0x3bf438u: goto label_3bf438;
        case 0x3bf43cu: goto label_3bf43c;
        case 0x3bf440u: goto label_3bf440;
        case 0x3bf444u: goto label_3bf444;
        case 0x3bf448u: goto label_3bf448;
        case 0x3bf44cu: goto label_3bf44c;
        case 0x3bf450u: goto label_3bf450;
        case 0x3bf454u: goto label_3bf454;
        case 0x3bf458u: goto label_3bf458;
        case 0x3bf45cu: goto label_3bf45c;
        case 0x3bf460u: goto label_3bf460;
        case 0x3bf464u: goto label_3bf464;
        case 0x3bf468u: goto label_3bf468;
        case 0x3bf46cu: goto label_3bf46c;
        case 0x3bf470u: goto label_3bf470;
        case 0x3bf474u: goto label_3bf474;
        case 0x3bf478u: goto label_3bf478;
        case 0x3bf47cu: goto label_3bf47c;
        case 0x3bf480u: goto label_3bf480;
        case 0x3bf484u: goto label_3bf484;
        case 0x3bf488u: goto label_3bf488;
        case 0x3bf48cu: goto label_3bf48c;
        case 0x3bf490u: goto label_3bf490;
        case 0x3bf494u: goto label_3bf494;
        case 0x3bf498u: goto label_3bf498;
        case 0x3bf49cu: goto label_3bf49c;
        case 0x3bf4a0u: goto label_3bf4a0;
        case 0x3bf4a4u: goto label_3bf4a4;
        case 0x3bf4a8u: goto label_3bf4a8;
        case 0x3bf4acu: goto label_3bf4ac;
        case 0x3bf4b0u: goto label_3bf4b0;
        case 0x3bf4b4u: goto label_3bf4b4;
        case 0x3bf4b8u: goto label_3bf4b8;
        case 0x3bf4bcu: goto label_3bf4bc;
        case 0x3bf4c0u: goto label_3bf4c0;
        case 0x3bf4c4u: goto label_3bf4c4;
        case 0x3bf4c8u: goto label_3bf4c8;
        case 0x3bf4ccu: goto label_3bf4cc;
        case 0x3bf4d0u: goto label_3bf4d0;
        case 0x3bf4d4u: goto label_3bf4d4;
        case 0x3bf4d8u: goto label_3bf4d8;
        case 0x3bf4dcu: goto label_3bf4dc;
        case 0x3bf4e0u: goto label_3bf4e0;
        case 0x3bf4e4u: goto label_3bf4e4;
        case 0x3bf4e8u: goto label_3bf4e8;
        case 0x3bf4ecu: goto label_3bf4ec;
        case 0x3bf4f0u: goto label_3bf4f0;
        case 0x3bf4f4u: goto label_3bf4f4;
        case 0x3bf4f8u: goto label_3bf4f8;
        case 0x3bf4fcu: goto label_3bf4fc;
        case 0x3bf500u: goto label_3bf500;
        case 0x3bf504u: goto label_3bf504;
        case 0x3bf508u: goto label_3bf508;
        case 0x3bf50cu: goto label_3bf50c;
        case 0x3bf510u: goto label_3bf510;
        case 0x3bf514u: goto label_3bf514;
        case 0x3bf518u: goto label_3bf518;
        case 0x3bf51cu: goto label_3bf51c;
        case 0x3bf520u: goto label_3bf520;
        case 0x3bf524u: goto label_3bf524;
        default: break;
    }

    ctx->pc = 0x3bf1b8u;

label_3bf1b8:
    // 0x3bf1b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3bf1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3bf1bc:
    // 0x3bf1bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3bf1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3bf1c0:
    // 0x3bf1c0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3bf1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3bf1c4:
    // 0x3bf1c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3bf1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bf1c8:
    // 0x3bf1c8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3bf1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3bf1cc:
    // 0x3bf1cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bf1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3bf1d0:
    // 0x3bf1d0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3bf1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3bf1d4:
    // 0x3bf1d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3bf1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bf1d8:
    // 0x3bf1d8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3bf1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3bf1dc:
    // 0x3bf1dc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3bf1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3bf1e0:
    // 0x3bf1e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3bf1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bf1e4:
    // 0x3bf1e4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3bf1e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3bf1e8:
    // 0x3bf1e8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3bf1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3bf1ec:
    // 0x3bf1ec: 0x40f809  jalr        $v0
label_3bf1f0:
    if (ctx->pc == 0x3BF1F0u) {
        ctx->pc = 0x3BF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1ECu;
        // 0x3bf1f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF1F4u;
        goto label_3bf1f4;
    }
    ctx->pc = 0x3BF1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF1F4u);
        ctx->pc = 0x3BF1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1ECu;
        // 0x3bf1f0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF1ECu, 0x3BF1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF1F4u;
label_3bf1f4:
    // 0x3bf1f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3bf1f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bf1f8:
    // 0x3bf1f8: 0x2e22003d  sltiu       $v0, $s1, 0x3D
    ctx->pc = 0x3bf1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)61) ? 1 : 0);
label_3bf1fc:
    // 0x3bf1fc: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
label_3bf200:
    if (ctx->pc == 0x3BF200u) {
        ctx->pc = 0x3BF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1FCu;
        // 0x3bf200: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF204u;
        goto label_3bf204;
    }
    ctx->pc = 0x3BF1FCu;
    {
        const bool branch_taken_0x3bf1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF1FCu;
        // 0x3bf200: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf1fc) {
            ctx->pc = 0x3BF528u;
            return;
        }
    }
    ctx->pc = 0x3BF204u;
label_3bf204:
    // 0x3bf204: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x3bf204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_3bf208:
    // 0x3bf208: 0x244227d0  addiu       $v0, $v0, 0x27D0
    ctx->pc = 0x3bf208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10192));
label_3bf20c:
    // 0x3bf20c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3bf20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3bf210:
    // 0x3bf210: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3bf210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bf214:
    // 0x3bf214: 0x800008  jr          $a0
label_3bf218:
    if (ctx->pc == 0x3BF218u) {
        ctx->pc = 0x3BF21Cu;
        goto label_3bf21c;
    }
    ctx->pc = 0x3BF214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3BF21Cu: goto label_3bf21c;
            case 0x3BF234u: goto label_3bf234;
            case 0x3BF268u: goto label_3bf268;
            case 0x3BF294u: goto label_3bf294;
            case 0x3BF394u: goto label_3bf394;
            case 0x3BF3ACu: goto label_3bf3ac;
            case 0x3BF3C4u: goto label_3bf3c4;
            case 0x3BF500u: goto label_3bf500;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF214u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3BF21Cu;
label_3bf21c:
    // 0x3bf21c: 0xc0ea146  jal         func_3A8518
label_3bf220:
    if (ctx->pc == 0x3BF220u) {
        ctx->pc = 0x3BF220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF21Cu;
        // 0x3bf220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF224u;
        goto label_3bf224;
    }
    ctx->pc = 0x3BF21Cu;
    SET_GPR_U32(ctx, 31, 0x3BF224u);
    ctx->pc = 0x3BF220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF21Cu;
    // 0x3bf220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3BF21Cu, 0x3BF224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF224u;
label_3bf224:
    // 0x3bf224: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3bf224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bf228:
    // 0x3bf228: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x3bf228u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_3bf22c:
    // 0x3bf22c: 0x100000be  b           . + 4 + (0xBE << 2)
label_3bf230:
    if (ctx->pc == 0x3BF230u) {
        ctx->pc = 0x3BF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF22Cu;
        // 0x3bf230: 0xae83000c  sw          $v1, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF234u;
        goto label_3bf234;
    }
    ctx->pc = 0x3BF22Cu;
    {
        const bool branch_taken_0x3bf22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF22Cu;
        // 0x3bf230: 0xae83000c  sw          $v1, 0xC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf22c) {
            ctx->pc = 0x3BF528u;
            return;
        }
    }
    ctx->pc = 0x3BF234u;
label_3bf234:
    // 0x3bf234: 0xc0ea146  jal         func_3A8518
label_3bf238:
    if (ctx->pc == 0x3BF238u) {
        ctx->pc = 0x3BF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF234u;
        // 0x3bf238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF23Cu;
        goto label_3bf23c;
    }
    ctx->pc = 0x3BF234u;
    SET_GPR_U32(ctx, 31, 0x3BF23Cu);
    ctx->pc = 0x3BF238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF234u;
    // 0x3bf238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3BF234u, 0x3BF23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF23Cu;
label_3bf23c:
    // 0x3bf23c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_3bf240:
    if (ctx->pc == 0x3BF240u) {
        ctx->pc = 0x3BF240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF23Cu;
        // 0x3bf240: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF244u;
        goto label_3bf244;
    }
    ctx->pc = 0x3BF23Cu;
    {
        const bool branch_taken_0x3bf23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bf23c) {
            ctx->pc = 0x3BF240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BF23Cu;
            // 0x3bf240: 0x8e620054  lw          $v0, 0x54($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BF25Cu;
            goto label_3bf25c;
        }
    }
    ctx->pc = 0x3BF244u;
label_3bf244:
    // 0x3bf244: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3bf244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3bf248:
    // 0x3bf248: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bf248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3bf24c:
    // 0x3bf24c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x3bf24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
label_3bf250:
    // 0x3bf250: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bf250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3bf254:
    // 0x3bf254: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_3bf258:
    if (ctx->pc == 0x3BF258u) {
        ctx->pc = 0x3BF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF254u;
        // 0x3bf258: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF25Cu;
        goto label_3bf25c;
    }
    ctx->pc = 0x3BF254u;
    {
        const bool branch_taken_0x3bf254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF254u;
        // 0x3bf258: 0xae630054  sw          $v1, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf254) {
            ctx->pc = 0x3BF528u;
            return;
        }
    }
    ctx->pc = 0x3BF25Cu;
label_3bf25c:
    // 0x3bf25c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x3bf25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_3bf260:
    // 0x3bf260: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_3bf264:
    if (ctx->pc == 0x3BF264u) {
        ctx->pc = 0x3BF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF260u;
        // 0x3bf264: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF268u;
        goto label_3bf268;
    }
    ctx->pc = 0x3BF260u;
    {
        const bool branch_taken_0x3bf260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF260u;
        // 0x3bf264: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf260) {
            ctx->pc = 0x3BF528u;
            return;
        }
    }
    ctx->pc = 0x3BF268u;
label_3bf268:
    // 0x3bf268: 0xc0ea146  jal         func_3A8518
label_3bf26c:
    if (ctx->pc == 0x3BF26Cu) {
        ctx->pc = 0x3BF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF268u;
        // 0x3bf26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF270u;
        goto label_3bf270;
    }
    ctx->pc = 0x3BF268u;
    SET_GPR_U32(ctx, 31, 0x3BF270u);
    ctx->pc = 0x3BF26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF268u;
    // 0x3bf26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3BF268u, 0x3BF270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF270u;
label_3bf270:
    // 0x3bf270: 0xc0ea146  jal         func_3A8518
label_3bf274:
    if (ctx->pc == 0x3BF274u) {
        ctx->pc = 0x3BF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF270u;
        // 0x3bf274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF278u;
        goto label_3bf278;
    }
    ctx->pc = 0x3BF270u;
    SET_GPR_U32(ctx, 31, 0x3BF278u);
    ctx->pc = 0x3BF274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF270u;
    // 0x3bf274: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3BF270u, 0x3BF278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF278u;
label_3bf278:
    // 0x3bf278: 0xc0ea13a  jal         func_3A84E8
label_3bf27c:
    if (ctx->pc == 0x3BF27Cu) {
        ctx->pc = 0x3BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF278u;
        // 0x3bf27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF280u;
        goto label_3bf280;
    }
    ctx->pc = 0x3BF278u;
    SET_GPR_U32(ctx, 31, 0x3BF280u);
    ctx->pc = 0x3BF27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF278u;
    // 0x3bf27c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3BF278u, 0x3BF280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF280u;
label_3bf280:
    // 0x3bf280: 0xc0ea146  jal         func_3A8518
label_3bf284:
    if (ctx->pc == 0x3BF284u) {
        ctx->pc = 0x3BF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF280u;
        // 0x3bf284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF288u;
        goto label_3bf288;
    }
    ctx->pc = 0x3BF280u;
    SET_GPR_U32(ctx, 31, 0x3BF288u);
    ctx->pc = 0x3BF284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF280u;
    // 0x3bf284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3BF280u, 0x3BF288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF288u;
label_3bf288:
    // 0x3bf288: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bf288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bf28c:
    // 0x3bf28c: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_3bf290:
    if (ctx->pc == 0x3BF290u) {
        ctx->pc = 0x3BF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF28Cu;
        // 0x3bf290: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF294u;
        goto label_3bf294;
    }
    ctx->pc = 0x3BF28Cu;
    {
        const bool branch_taken_0x3bf28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF28Cu;
        // 0x3bf290: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf28c) {
            ctx->pc = 0x3BF528u;
            return;
        }
    }
    ctx->pc = 0x3BF294u;
label_3bf294:
    // 0x3bf294: 0x3c02d4e0  lui         $v0, 0xD4E0
    ctx->pc = 0x3bf294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54496 << 16));
label_3bf298:
    // 0x3bf298: 0x8e7100c4  lw          $s1, 0xC4($s3)
    ctx->pc = 0x3bf298u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_3bf29c:
    // 0x3bf29c: 0x3442581e  ori         $v0, $v0, 0x581E
    ctx->pc = 0x3bf29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22558);
label_3bf2a0:
    // 0x3bf2a0: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
label_3bf2a4:
    if (ctx->pc == 0x3BF2A4u) {
        ctx->pc = 0x3BF2A8u;
        goto label_3bf2a8;
    }
    ctx->pc = 0x3BF2A0u;
    {
        const bool branch_taken_0x3bf2a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bf2a0) {
            ctx->pc = 0x3BF2D8u;
            goto label_3bf2d8;
        }
    }
    ctx->pc = 0x3BF2A8u;
label_3bf2a8:
    // 0x3bf2a8: 0x3c02f2a4  lui         $v0, 0xF2A4
    ctx->pc = 0x3bf2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62116 << 16));
label_3bf2ac:
    // 0x3bf2ac: 0x34429b0b  ori         $v0, $v0, 0x9B0B
    ctx->pc = 0x3bf2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39691);
label_3bf2b0:
    // 0x3bf2b0: 0x12220009  beq         $s1, $v0, . + 4 + (0x9 << 2)
label_3bf2b4:
    if (ctx->pc == 0x3BF2B4u) {
        ctx->pc = 0x3BF2B8u;
        goto label_3bf2b8;
    }
    ctx->pc = 0x3BF2B0u;
    {
        const bool branch_taken_0x3bf2b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bf2b0) {
            ctx->pc = 0x3BF2D8u;
            goto label_3bf2d8;
        }
    }
    ctx->pc = 0x3BF2B8u;
label_3bf2b8:
    // 0x3bf2b8: 0x3c02e324  lui         $v0, 0xE324
    ctx->pc = 0x3bf2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58148 << 16));
label_3bf2bc:
    // 0x3bf2bc: 0x3442d413  ori         $v0, $v0, 0xD413
    ctx->pc = 0x3bf2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54291);
label_3bf2c0:
    // 0x3bf2c0: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_3bf2c4:
    if (ctx->pc == 0x3BF2C4u) {
        ctx->pc = 0x3BF2C8u;
        goto label_3bf2c8;
    }
    ctx->pc = 0x3BF2C0u;
    {
        const bool branch_taken_0x3bf2c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3bf2c0) {
            ctx->pc = 0x3BF2D8u;
            goto label_3bf2d8;
        }
    }
    ctx->pc = 0x3BF2C8u;
label_3bf2c8:
    // 0x3bf2c8: 0x3c02e319  lui         $v0, 0xE319
    ctx->pc = 0x3bf2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58137 << 16));
label_3bf2cc:
    // 0x3bf2cc: 0x3442651e  ori         $v0, $v0, 0x651E
    ctx->pc = 0x3bf2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25886);
label_3bf2d0:
    // 0x3bf2d0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
label_3bf2d4:
    if (ctx->pc == 0x3BF2D4u) {
        ctx->pc = 0x3BF2D8u;
        goto label_3bf2d8;
    }
    ctx->pc = 0x3BF2D0u;
    {
        const bool branch_taken_0x3bf2d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bf2d0) {
            ctx->pc = 0x3BF2E0u;
            goto label_3bf2e0;
        }
    }
    ctx->pc = 0x3BF2D8u;
label_3bf2d8:
    // 0x3bf2d8: 0xc0e94d0  jal         func_3A5340
label_3bf2dc:
    if (ctx->pc == 0x3BF2DCu) {
        ctx->pc = 0x3BF2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2D8u;
        // 0x3bf2dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2E0u;
        goto label_3bf2e0;
    }
    ctx->pc = 0x3BF2D8u;
    SET_GPR_U32(ctx, 31, 0x3BF2E0u);
    ctx->pc = 0x3BF2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF2D8u;
    // 0x3bf2dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3BF2D8u, 0x3BF2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF2E0u;
label_3bf2e0:
    // 0x3bf2e0: 0xc0e9344  jal         func_3A4D10
label_3bf2e4:
    if (ctx->pc == 0x3BF2E4u) {
        ctx->pc = 0x3BF2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2E0u;
        // 0x3bf2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2E8u;
        goto label_3bf2e8;
    }
    ctx->pc = 0x3BF2E0u;
    SET_GPR_U32(ctx, 31, 0x3BF2E8u);
    ctx->pc = 0x3BF2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF2E0u;
    // 0x3bf2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D10u, 0x3BF2E0u, 0x3BF2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF2E8u;
label_3bf2e8:
    // 0x3bf2e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bf2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bf2ec:
    // 0x3bf2ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf2f0:
    // 0x3bf2f0: 0xc0e9132  jal         func_3A44C8
label_3bf2f4:
    if (ctx->pc == 0x3BF2F4u) {
        ctx->pc = 0x3BF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2F0u;
        // 0x3bf2f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF2F8u;
        goto label_3bf2f8;
    }
    ctx->pc = 0x3BF2F0u;
    SET_GPR_U32(ctx, 31, 0x3BF2F8u);
    ctx->pc = 0x3BF2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF2F0u;
    // 0x3bf2f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3BF2F0u, 0x3BF2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF2F8u;
label_3bf2f8:
    // 0x3bf2f8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_3bf2fc:
    if (ctx->pc == 0x3BF2FCu) {
        ctx->pc = 0x3BF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2F8u;
        // 0x3bf2fc: 0xae6200c4  sw          $v0, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF300u;
        goto label_3bf300;
    }
    ctx->pc = 0x3BF2F8u;
    {
        const bool branch_taken_0x3bf2f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF2F8u;
        // 0x3bf2fc: 0xae6200c4  sw          $v0, 0xC4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf2f8) {
            ctx->pc = 0x3BF30Cu;
            goto label_3bf30c;
        }
    }
    ctx->pc = 0x3BF300u;
label_3bf300:
    // 0x3bf300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3bf300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3bf304:
    // 0x3bf304: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x3bf304u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
label_3bf308:
    // 0x3bf308: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x3bf308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_3bf30c:
    // 0x3bf30c: 0x3c0242d4  lui         $v0, 0x42D4
    ctx->pc = 0x3bf30cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17108 << 16));
label_3bf310:
    // 0x3bf310: 0x3442c1ac  ori         $v0, $v0, 0xC1AC
    ctx->pc = 0x3bf310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49580);
label_3bf314:
    // 0x3bf314: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
label_3bf318:
    if (ctx->pc == 0x3BF318u) {
        ctx->pc = 0x3BF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF314u;
        // 0x3bf318: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF31Cu;
        goto label_3bf31c;
    }
    ctx->pc = 0x3BF314u;
    {
        const bool branch_taken_0x3bf314 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BF318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF314u;
        // 0x3bf318: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf314) {
            ctx->pc = 0x3BF354u;
            goto label_3bf354;
        }
    }
    ctx->pc = 0x3BF31Cu;
label_3bf31c:
    // 0x3bf31c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bf31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bf320:
    // 0x3bf320: 0xc0cd4ee  jal         func_3353B8
label_3bf324:
    if (ctx->pc == 0x3BF324u) {
        ctx->pc = 0x3BF324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF320u;
        // 0x3bf324: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF328u;
        goto label_3bf328;
    }
    ctx->pc = 0x3BF320u;
    SET_GPR_U32(ctx, 31, 0x3BF328u);
    ctx->pc = 0x3BF324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF320u;
    // 0x3bf324: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3BF320u, 0x3BF328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF328u;
label_3bf328:
    // 0x3bf328: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3bf32c:
    if (ctx->pc == 0x3BF32Cu) {
        ctx->pc = 0x3BF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF328u;
        // 0x3bf32c: 0x3c053795  lui         $a1, 0x3795 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14229 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF330u;
        goto label_3bf330;
    }
    ctx->pc = 0x3BF328u;
    {
        const bool branch_taken_0x3bf328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF328u;
        // 0x3bf32c: 0x3c053795  lui         $a1, 0x3795 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)14229 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf328) {
            ctx->pc = 0x3BF33Cu;
            goto label_3bf33c;
        }
    }
    ctx->pc = 0x3BF330u;
label_3bf330:
    // 0x3bf330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf334:
    // 0x3bf334: 0x10000004  b           . + 4 + (0x4 << 2)
label_3bf338:
    if (ctx->pc == 0x3BF338u) {
        ctx->pc = 0x3BF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF334u;
        // 0x3bf338: 0x34a58541  ori         $a1, $a1, 0x8541 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34113);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF33Cu;
        goto label_3bf33c;
    }
    ctx->pc = 0x3BF334u;
    {
        const bool branch_taken_0x3bf334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF334u;
        // 0x3bf338: 0x34a58541  ori         $a1, $a1, 0x8541 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34113);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf334) {
            ctx->pc = 0x3BF348u;
            goto label_3bf348;
        }
    }
    ctx->pc = 0x3BF33Cu;
label_3bf33c:
    // 0x3bf33c: 0x3c05ae9c  lui         $a1, 0xAE9C
    ctx->pc = 0x3bf33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44700 << 16));
label_3bf340:
    // 0x3bf340: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf344:
    // 0x3bf344: 0x34a5d4fb  ori         $a1, $a1, 0xD4FB
    ctx->pc = 0x3bf344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54523);
label_3bf348:
    // 0x3bf348: 0xc0e9132  jal         func_3A44C8
label_3bf34c:
    if (ctx->pc == 0x3BF34Cu) {
        ctx->pc = 0x3BF350u;
        goto label_3bf350;
    }
    ctx->pc = 0x3BF348u;
    SET_GPR_U32(ctx, 31, 0x3BF350u);
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3BF348u, 0x3BF350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF350u;
label_3bf350:
    // 0x3bf350: 0xae6200c4  sw          $v0, 0xC4($s3)
    ctx->pc = 0x3bf350u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
label_3bf354:
    // 0x3bf354: 0x3c02ebd3  lui         $v0, 0xEBD3
    ctx->pc = 0x3bf354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60371 << 16));
label_3bf358:
    // 0x3bf358: 0x8e7100c4  lw          $s1, 0xC4($s3)
    ctx->pc = 0x3bf358u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_3bf35c:
    // 0x3bf35c: 0x3442da04  ori         $v0, $v0, 0xDA04
    ctx->pc = 0x3bf35cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55812);
label_3bf360:
    // 0x3bf360: 0x16220072  bne         $s1, $v0, . + 4 + (0x72 << 2)
label_3bf364:
    if (ctx->pc == 0x3BF364u) {
        ctx->pc = 0x3BF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF360u;
        // 0x3bf364: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF368u;
        goto label_3bf368;
    }
    ctx->pc = 0x3BF360u;
    {
        const bool branch_taken_0x3bf360 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BF364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF360u;
        // 0x3bf364: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf360) {
            ctx->pc = 0x3BF52Cu;
            return;
        }
    }
    ctx->pc = 0x3BF368u;
label_3bf368:
    // 0x3bf368: 0x3c04ebd3  lui         $a0, 0xEBD3
    ctx->pc = 0x3bf368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60371 << 16));
label_3bf36c:
    // 0x3bf36c: 0xc0e9344  jal         func_3A4D10
label_3bf370:
    if (ctx->pc == 0x3BF370u) {
        ctx->pc = 0x3BF370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF36Cu;
        // 0x3bf370: 0x3484da04  ori         $a0, $a0, 0xDA04 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55812);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF374u;
        goto label_3bf374;
    }
    ctx->pc = 0x3BF36Cu;
    SET_GPR_U32(ctx, 31, 0x3BF374u);
    ctx->pc = 0x3BF370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF36Cu;
    // 0x3bf370: 0x3484da04  ori         $a0, $a0, 0xDA04 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55812);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4D10u, 0x3BF36Cu, 0x3BF374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF374u;
label_3bf374:
    // 0x3bf374: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf378:
    // 0x3bf378: 0xc0e9132  jal         func_3A44C8
label_3bf37c:
    if (ctx->pc == 0x3BF37Cu) {
        ctx->pc = 0x3BF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF378u;
        // 0x3bf37c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF380u;
        goto label_3bf380;
    }
    ctx->pc = 0x3BF378u;
    SET_GPR_U32(ctx, 31, 0x3BF380u);
    ctx->pc = 0x3BF37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF378u;
    // 0x3bf37c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3BF378u, 0x3BF380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF380u;
label_3bf380:
    // 0x3bf380: 0xae6200c4  sw          $v0, 0xC4($s3)
    ctx->pc = 0x3bf380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
label_3bf384:
    // 0x3bf384: 0xc0e94d0  jal         func_3A5340
label_3bf388:
    if (ctx->pc == 0x3BF388u) {
        ctx->pc = 0x3BF388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF384u;
        // 0x3bf388: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF38Cu;
        goto label_3bf38c;
    }
    ctx->pc = 0x3BF384u;
    SET_GPR_U32(ctx, 31, 0x3BF38Cu);
    ctx->pc = 0x3BF388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF384u;
    // 0x3bf388: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5340u, 0x3BF384u, 0x3BF38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF38Cu;
label_3bf38c:
    // 0x3bf38c: 0x10000067  b           . + 4 + (0x67 << 2)
label_3bf390:
    if (ctx->pc == 0x3BF390u) {
        ctx->pc = 0x3BF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF38Cu;
        // 0x3bf390: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF394u;
        goto label_3bf394;
    }
    ctx->pc = 0x3BF38Cu;
    {
        const bool branch_taken_0x3bf38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF38Cu;
        // 0x3bf390: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf38c) {
            ctx->pc = 0x3BF52Cu;
            return;
        }
    }
    ctx->pc = 0x3BF394u;
label_3bf394:
    // 0x3bf394: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3bf394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3bf398:
    // 0x3bf398: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bf398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bf39c:
    // 0x3bf39c: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x3bf39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_3bf3a0:
    // 0x3bf3a0: 0xae620054  sw          $v0, 0x54($s3)
    ctx->pc = 0x3bf3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
label_3bf3a4:
    // 0x3bf3a4: 0x10000060  b           . + 4 + (0x60 << 2)
label_3bf3a8:
    if (ctx->pc == 0x3BF3A8u) {
        ctx->pc = 0x3BF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3A4u;
        // 0x3bf3a8: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3ACu;
        goto label_3bf3ac;
    }
    ctx->pc = 0x3BF3A4u;
    {
        const bool branch_taken_0x3bf3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3A4u;
        // 0x3bf3a8: 0xae830008  sw          $v1, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf3a4) {
            ctx->pc = 0x3BF528u;
            return;
        }
    }
    ctx->pc = 0x3BF3ACu;
label_3bf3ac:
    // 0x3bf3ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3bf3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3bf3b0:
    // 0x3bf3b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3bf3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3bf3b4:
    // 0x3bf3b4: 0xc0edea2  jal         func_3B7A88
label_3bf3b8:
    if (ctx->pc == 0x3BF3B8u) {
        ctx->pc = 0x3BF3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3B4u;
        // 0x3bf3b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3BCu;
        goto label_3bf3bc;
    }
    ctx->pc = 0x3BF3B4u;
    SET_GPR_U32(ctx, 31, 0x3BF3BCu);
    ctx->pc = 0x3BF3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF3B4u;
    // 0x3bf3b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7A88u, 0x3BF3B4u, 0x3BF3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF3BCu;
label_3bf3bc:
    // 0x3bf3bc: 0x1000005b  b           . + 4 + (0x5B << 2)
label_3bf3c0:
    if (ctx->pc == 0x3BF3C0u) {
        ctx->pc = 0x3BF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3BCu;
        // 0x3bf3c0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3C4u;
        goto label_3bf3c4;
    }
    ctx->pc = 0x3BF3BCu;
    {
        const bool branch_taken_0x3bf3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3BCu;
        // 0x3bf3c0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf3bc) {
            ctx->pc = 0x3BF52Cu;
            return;
        }
    }
    ctx->pc = 0x3BF3C4u;
label_3bf3c4:
    // 0x3bf3c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bf3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bf3c8:
    // 0x3bf3c8: 0xc0ea12a  jal         func_3A84A8
label_3bf3cc:
    if (ctx->pc == 0x3BF3CCu) {
        ctx->pc = 0x3BF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3C8u;
        // 0x3bf3cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3D0u;
        goto label_3bf3d0;
    }
    ctx->pc = 0x3BF3C8u;
    SET_GPR_U32(ctx, 31, 0x3BF3D0u);
    ctx->pc = 0x3BF3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF3C8u;
    // 0x3bf3cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BF3C8u, 0x3BF3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF3D0u;
label_3bf3d0:
    // 0x3bf3d0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3bf3d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf3d4:
    // 0x3bf3d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3bf3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bf3d8:
    // 0x3bf3d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3bf3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf3dc:
    // 0x3bf3dc: 0xc0ea12a  jal         func_3A84A8
label_3bf3e0:
    if (ctx->pc == 0x3BF3E0u) {
        ctx->pc = 0x3BF3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF3DCu;
        // 0x3bf3e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF3E4u;
        goto label_3bf3e4;
    }
    ctx->pc = 0x3BF3DCu;
    SET_GPR_U32(ctx, 31, 0x3BF3E4u);
    ctx->pc = 0x3BF3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF3DCu;
    // 0x3bf3e0: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3BF3DCu, 0x3BF3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF3E4u;
label_3bf3e4:
    // 0x3bf3e4: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x3bf3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3bf3e8:
    // 0x3bf3e8: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x3bf3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
label_3bf3ec:
    // 0x3bf3ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3bf3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3bf3f0:
    // 0x3bf3f0: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x3bf3f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf3f4:
    // 0x3bf3f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3bf3f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3bf3f8:
    // 0x3bf3f8: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x3bf3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_3bf3fc:
    // 0x3bf3fc: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3bf3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3bf400:
    // 0x3bf400: 0x24a51720  addiu       $a1, $a1, 0x1720
    ctx->pc = 0x3bf400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5920));
label_3bf404:
    // 0x3bf404: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x3bf404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
label_3bf408:
    // 0x3bf408: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x3bf408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_3bf40c:
    // 0x3bf40c: 0x24c61730  addiu       $a2, $a2, 0x1730
    ctx->pc = 0x3bf40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5936));
label_3bf410:
    // 0x3bf410: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3bf410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3bf414:
    // 0x3bf414: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3bf414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3bf418:
    // 0x3bf418: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3bf418u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_3bf41c:
    // 0x3bf41c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x3bf41cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3bf420:
    // 0x3bf420: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x3bf420u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_3bf424:
    // 0x3bf424: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3bf424u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3bf428:
    // 0x3bf428: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x3bf428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3bf42c:
    // 0x3bf42c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3bf42cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bf430:
    // 0x3bf430: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3bf430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bf434:
    // 0x3bf434: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3bf434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bf438:
    // 0x3bf438: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x3bf438u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
label_3bf43c:
    // 0x3bf43c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x3bf43cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_3bf440:
    // 0x3bf440: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3bf440u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3bf444:
    // 0x3bf444: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x3bf444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bf448:
    // 0x3bf448: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3bf448u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bf44c:
    // 0x3bf44c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3bf44cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3bf450:
    // 0x3bf450: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x3bf450u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_3bf454:
    // 0x3bf454: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3bf454u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3bf458:
    // 0x3bf458: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3bf458u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3bf45c:
    // 0x3bf45c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3bf45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3bf460:
    // 0x3bf460: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3bf460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3bf464:
    // 0x3bf464: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3bf464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3bf468:
    // 0x3bf468: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3bf468u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3bf46c:
    // 0x3bf46c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x3bf46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_3bf470:
    // 0x3bf470: 0xe622000c  swc1        $f2, 0xC($s1)
    ctx->pc = 0x3bf470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_3bf474:
    // 0x3bf474: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x3bf474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_3bf478:
    // 0x3bf478: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3bf478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3bf47c:
    // 0x3bf47c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3bf47cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bf480:
    // 0x3bf480: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3bf480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bf484:
    // 0x3bf484: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3bf484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3bf488:
    // 0x3bf488: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x3bf488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_3bf48c:
    // 0x3bf48c: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x3bf48cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_3bf490:
    // 0x3bf490: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x3bf490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_3bf494:
    // 0x3bf494: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3bf494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3bf498:
    // 0x3bf498: 0x84700070  lh          $s0, 0x70($v1)
    ctx->pc = 0x3bf498u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_3bf49c:
    // 0x3bf49c: 0xc0cd518  jal         func_335460
label_3bf4a0:
    if (ctx->pc == 0x3BF4A0u) {
        ctx->pc = 0x3BF4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF49Cu;
        // 0x3bf4a0: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF4A4u;
        goto label_3bf4a4;
    }
    ctx->pc = 0x3BF49Cu;
    SET_GPR_U32(ctx, 31, 0x3BF4A4u);
    ctx->pc = 0x3BF4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF49Cu;
    // 0x3bf4a0: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3BF49Cu, 0x3BF4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF4A4u;
label_3bf4a4:
    // 0x3bf4a4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3bf4a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3bf4a8:
    // 0x3bf4a8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3bf4a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3bf4ac:
    // 0x3bf4ac: 0xc136b24  jal         func_4DAC90
label_3bf4b0:
    if (ctx->pc == 0x3BF4B0u) {
        ctx->pc = 0x3BF4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4ACu;
        // 0x3bf4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF4B4u;
        goto label_3bf4b4;
    }
    ctx->pc = 0x3BF4ACu;
    SET_GPR_U32(ctx, 31, 0x3BF4B4u);
    ctx->pc = 0x3BF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF4ACu;
    // 0x3bf4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3BF4ACu, 0x3BF4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF4B4u;
label_3bf4b4:
    // 0x3bf4b4: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x3bf4b4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3bf4b8:
    // 0x3bf4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bf4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3bf4bc:
    // 0x3bf4bc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x3bf4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_3bf4c0:
    // 0x3bf4c0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3bf4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3bf4c4:
    // 0x3bf4c4: 0x40f809  jalr        $v0
label_3bf4c8:
    if (ctx->pc == 0x3BF4C8u) {
        ctx->pc = 0x3BF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4C4u;
        // 0x3bf4c8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF4CCu;
        goto label_3bf4cc;
    }
    ctx->pc = 0x3BF4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF4CCu);
        ctx->pc = 0x3BF4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4C4u;
        // 0x3bf4c8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF4C4u, 0x3BF4CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF4CCu;
label_3bf4cc:
    // 0x3bf4cc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3bf4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3bf4d0:
    // 0x3bf4d0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3bf4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3bf4d4:
    // 0x3bf4d4: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x3bf4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_3bf4d8:
    // 0x3bf4d8: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x3bf4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_3bf4dc:
    // 0x3bf4dc: 0x40f809  jalr        $v0
label_3bf4e0:
    if (ctx->pc == 0x3BF4E0u) {
        ctx->pc = 0x3BF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4DCu;
        // 0x3bf4e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF4E4u;
        goto label_3bf4e4;
    }
    ctx->pc = 0x3BF4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF4E4u);
        ctx->pc = 0x3BF4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4DCu;
        // 0x3bf4e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF4DCu, 0x3BF4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF4E4u;
label_3bf4e4:
    // 0x3bf4e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3bf4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3bf4e8:
    // 0x3bf4e8: 0x3c040420  lui         $a0, 0x420
    ctx->pc = 0x3bf4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1056 << 16));
label_3bf4ec:
    // 0x3bf4ec: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3bf4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
label_3bf4f0:
    // 0x3bf4f0: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x3bf4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_3bf4f4:
    // 0x3bf4f4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3bf4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_3bf4f8:
    // 0x3bf4f8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3bf4fc:
    if (ctx->pc == 0x3BF4FCu) {
        ctx->pc = 0x3BF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4F8u;
        // 0x3bf4fc: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF500u;
        goto label_3bf500;
    }
    ctx->pc = 0x3BF4F8u;
    {
        const bool branch_taken_0x3bf4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF4F8u;
        // 0x3bf4fc: 0xae620054  sw          $v0, 0x54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf4f8) {
            ctx->pc = 0x3BF528u;
            return;
        }
    }
    ctx->pc = 0x3BF500u;
label_3bf500:
    // 0x3bf500: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x3bf500u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3bf504:
    // 0x3bf504: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
label_3bf508:
    if (ctx->pc == 0x3BF508u) {
        ctx->pc = 0x3BF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF504u;
        // 0x3bf508: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF50Cu;
        goto label_3bf50c;
    }
    ctx->pc = 0x3BF504u;
    {
        const bool branch_taken_0x3bf504 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF504u;
        // 0x3bf508: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf504) {
            ctx->pc = 0x3BF528u;
            return;
        }
    }
    ctx->pc = 0x3BF50Cu;
label_3bf50c:
    // 0x3bf50c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3bf50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3bf510:
    // 0x3bf510: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3bf510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3bf514:
    // 0x3bf514: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x3bf514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
label_3bf518:
    // 0x3bf518: 0x8c4300cc  lw          $v1, 0xCC($v0)
    ctx->pc = 0x3bf518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_3bf51c:
    // 0x3bf51c: 0x60f809  jalr        $v1
label_3bf520:
    if (ctx->pc == 0x3BF520u) {
        ctx->pc = 0x3BF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF51Cu;
        // 0x3bf520: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF524u;
        goto label_3bf524;
    }
    ctx->pc = 0x3BF51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3BF524u);
        ctx->pc = 0x3BF520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF51Cu;
        // 0x3bf520: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF51Cu, 0x3BF524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF524u;
label_3bf524:
    // 0x3bf524: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x3bf524u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    ctx->pc = 0x3bf528u;
}
