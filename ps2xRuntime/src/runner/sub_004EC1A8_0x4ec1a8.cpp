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

// Function: sub_004EC1A8
// Address: 0x4ec1a8 - 0x4ec468
void sub_004EC1A8_0x4ec1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC1A8_0x4ec1a8");
#endif

    switch (ctx->pc) {
        case 0x4ec1a8u: goto label_4ec1a8;
        case 0x4ec1acu: goto label_4ec1ac;
        case 0x4ec1b0u: goto label_4ec1b0;
        case 0x4ec1b4u: goto label_4ec1b4;
        case 0x4ec1b8u: goto label_4ec1b8;
        case 0x4ec1bcu: goto label_4ec1bc;
        case 0x4ec1c0u: goto label_4ec1c0;
        case 0x4ec1c4u: goto label_4ec1c4;
        case 0x4ec1c8u: goto label_4ec1c8;
        case 0x4ec1ccu: goto label_4ec1cc;
        case 0x4ec1d0u: goto label_4ec1d0;
        case 0x4ec1d4u: goto label_4ec1d4;
        case 0x4ec1d8u: goto label_4ec1d8;
        case 0x4ec1dcu: goto label_4ec1dc;
        case 0x4ec1e0u: goto label_4ec1e0;
        case 0x4ec1e4u: goto label_4ec1e4;
        case 0x4ec1e8u: goto label_4ec1e8;
        case 0x4ec1ecu: goto label_4ec1ec;
        case 0x4ec1f0u: goto label_4ec1f0;
        case 0x4ec1f4u: goto label_4ec1f4;
        case 0x4ec1f8u: goto label_4ec1f8;
        case 0x4ec1fcu: goto label_4ec1fc;
        case 0x4ec200u: goto label_4ec200;
        case 0x4ec204u: goto label_4ec204;
        case 0x4ec208u: goto label_4ec208;
        case 0x4ec20cu: goto label_4ec20c;
        case 0x4ec210u: goto label_4ec210;
        case 0x4ec214u: goto label_4ec214;
        case 0x4ec218u: goto label_4ec218;
        case 0x4ec21cu: goto label_4ec21c;
        case 0x4ec220u: goto label_4ec220;
        case 0x4ec224u: goto label_4ec224;
        case 0x4ec228u: goto label_4ec228;
        case 0x4ec22cu: goto label_4ec22c;
        case 0x4ec230u: goto label_4ec230;
        case 0x4ec234u: goto label_4ec234;
        case 0x4ec238u: goto label_4ec238;
        case 0x4ec23cu: goto label_4ec23c;
        case 0x4ec240u: goto label_4ec240;
        case 0x4ec244u: goto label_4ec244;
        case 0x4ec248u: goto label_4ec248;
        case 0x4ec24cu: goto label_4ec24c;
        case 0x4ec250u: goto label_4ec250;
        case 0x4ec254u: goto label_4ec254;
        case 0x4ec258u: goto label_4ec258;
        case 0x4ec25cu: goto label_4ec25c;
        case 0x4ec260u: goto label_4ec260;
        case 0x4ec264u: goto label_4ec264;
        case 0x4ec268u: goto label_4ec268;
        case 0x4ec26cu: goto label_4ec26c;
        case 0x4ec270u: goto label_4ec270;
        case 0x4ec274u: goto label_4ec274;
        case 0x4ec278u: goto label_4ec278;
        case 0x4ec27cu: goto label_4ec27c;
        case 0x4ec280u: goto label_4ec280;
        case 0x4ec284u: goto label_4ec284;
        case 0x4ec288u: goto label_4ec288;
        case 0x4ec28cu: goto label_4ec28c;
        case 0x4ec290u: goto label_4ec290;
        case 0x4ec294u: goto label_4ec294;
        case 0x4ec298u: goto label_4ec298;
        case 0x4ec29cu: goto label_4ec29c;
        case 0x4ec2a0u: goto label_4ec2a0;
        case 0x4ec2a4u: goto label_4ec2a4;
        case 0x4ec2a8u: goto label_4ec2a8;
        case 0x4ec2acu: goto label_4ec2ac;
        case 0x4ec2b0u: goto label_4ec2b0;
        case 0x4ec2b4u: goto label_4ec2b4;
        case 0x4ec2b8u: goto label_4ec2b8;
        case 0x4ec2bcu: goto label_4ec2bc;
        case 0x4ec2c0u: goto label_4ec2c0;
        case 0x4ec2c4u: goto label_4ec2c4;
        case 0x4ec2c8u: goto label_4ec2c8;
        case 0x4ec2ccu: goto label_4ec2cc;
        case 0x4ec2d0u: goto label_4ec2d0;
        case 0x4ec2d4u: goto label_4ec2d4;
        case 0x4ec2d8u: goto label_4ec2d8;
        case 0x4ec2dcu: goto label_4ec2dc;
        case 0x4ec2e0u: goto label_4ec2e0;
        case 0x4ec2e4u: goto label_4ec2e4;
        case 0x4ec2e8u: goto label_4ec2e8;
        case 0x4ec2ecu: goto label_4ec2ec;
        case 0x4ec2f0u: goto label_4ec2f0;
        case 0x4ec2f4u: goto label_4ec2f4;
        case 0x4ec2f8u: goto label_4ec2f8;
        case 0x4ec2fcu: goto label_4ec2fc;
        case 0x4ec300u: goto label_4ec300;
        case 0x4ec304u: goto label_4ec304;
        case 0x4ec308u: goto label_4ec308;
        case 0x4ec30cu: goto label_4ec30c;
        case 0x4ec310u: goto label_4ec310;
        case 0x4ec314u: goto label_4ec314;
        case 0x4ec318u: goto label_4ec318;
        case 0x4ec31cu: goto label_4ec31c;
        case 0x4ec320u: goto label_4ec320;
        case 0x4ec324u: goto label_4ec324;
        case 0x4ec328u: goto label_4ec328;
        case 0x4ec32cu: goto label_4ec32c;
        case 0x4ec330u: goto label_4ec330;
        case 0x4ec334u: goto label_4ec334;
        case 0x4ec338u: goto label_4ec338;
        case 0x4ec33cu: goto label_4ec33c;
        case 0x4ec340u: goto label_4ec340;
        case 0x4ec344u: goto label_4ec344;
        case 0x4ec348u: goto label_4ec348;
        case 0x4ec34cu: goto label_4ec34c;
        case 0x4ec350u: goto label_4ec350;
        case 0x4ec354u: goto label_4ec354;
        case 0x4ec358u: goto label_4ec358;
        case 0x4ec35cu: goto label_4ec35c;
        case 0x4ec360u: goto label_4ec360;
        case 0x4ec364u: goto label_4ec364;
        case 0x4ec368u: goto label_4ec368;
        case 0x4ec36cu: goto label_4ec36c;
        case 0x4ec370u: goto label_4ec370;
        case 0x4ec374u: goto label_4ec374;
        case 0x4ec378u: goto label_4ec378;
        case 0x4ec37cu: goto label_4ec37c;
        case 0x4ec380u: goto label_4ec380;
        case 0x4ec384u: goto label_4ec384;
        case 0x4ec388u: goto label_4ec388;
        case 0x4ec38cu: goto label_4ec38c;
        case 0x4ec390u: goto label_4ec390;
        case 0x4ec394u: goto label_4ec394;
        case 0x4ec398u: goto label_4ec398;
        case 0x4ec39cu: goto label_4ec39c;
        case 0x4ec3a0u: goto label_4ec3a0;
        case 0x4ec3a4u: goto label_4ec3a4;
        case 0x4ec3a8u: goto label_4ec3a8;
        case 0x4ec3acu: goto label_4ec3ac;
        case 0x4ec3b0u: goto label_4ec3b0;
        case 0x4ec3b4u: goto label_4ec3b4;
        case 0x4ec3b8u: goto label_4ec3b8;
        case 0x4ec3bcu: goto label_4ec3bc;
        case 0x4ec3c0u: goto label_4ec3c0;
        case 0x4ec3c4u: goto label_4ec3c4;
        case 0x4ec3c8u: goto label_4ec3c8;
        case 0x4ec3ccu: goto label_4ec3cc;
        case 0x4ec3d0u: goto label_4ec3d0;
        case 0x4ec3d4u: goto label_4ec3d4;
        case 0x4ec3d8u: goto label_4ec3d8;
        case 0x4ec3dcu: goto label_4ec3dc;
        case 0x4ec3e0u: goto label_4ec3e0;
        case 0x4ec3e4u: goto label_4ec3e4;
        case 0x4ec3e8u: goto label_4ec3e8;
        case 0x4ec3ecu: goto label_4ec3ec;
        case 0x4ec3f0u: goto label_4ec3f0;
        case 0x4ec3f4u: goto label_4ec3f4;
        case 0x4ec3f8u: goto label_4ec3f8;
        case 0x4ec3fcu: goto label_4ec3fc;
        case 0x4ec400u: goto label_4ec400;
        case 0x4ec404u: goto label_4ec404;
        case 0x4ec408u: goto label_4ec408;
        case 0x4ec40cu: goto label_4ec40c;
        case 0x4ec410u: goto label_4ec410;
        case 0x4ec414u: goto label_4ec414;
        case 0x4ec418u: goto label_4ec418;
        case 0x4ec41cu: goto label_4ec41c;
        case 0x4ec420u: goto label_4ec420;
        case 0x4ec424u: goto label_4ec424;
        case 0x4ec428u: goto label_4ec428;
        case 0x4ec42cu: goto label_4ec42c;
        case 0x4ec430u: goto label_4ec430;
        case 0x4ec434u: goto label_4ec434;
        case 0x4ec438u: goto label_4ec438;
        case 0x4ec43cu: goto label_4ec43c;
        case 0x4ec440u: goto label_4ec440;
        case 0x4ec444u: goto label_4ec444;
        case 0x4ec448u: goto label_4ec448;
        case 0x4ec44cu: goto label_4ec44c;
        case 0x4ec450u: goto label_4ec450;
        case 0x4ec454u: goto label_4ec454;
        case 0x4ec458u: goto label_4ec458;
        case 0x4ec45cu: goto label_4ec45c;
        case 0x4ec460u: goto label_4ec460;
        case 0x4ec464u: goto label_4ec464;
        default: break;
    }

    ctx->pc = 0x4ec1a8u;

label_4ec1a8:
    // 0x4ec1a8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x4ec1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_4ec1ac:
    // 0x4ec1ac: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4ec1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4ec1b0:
    // 0x4ec1b0: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x4ec1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_4ec1b4:
    // 0x4ec1b4: 0x2442e9c0  addiu       $v0, $v0, -0x1640
    ctx->pc = 0x4ec1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961600));
label_4ec1b8:
    // 0x4ec1b8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x4ec1b8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ec1bc:
    // 0x4ec1bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x4ec1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_4ec1c0:
    // 0x4ec1c0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x4ec1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_4ec1c4:
    // 0x4ec1c4: 0x27c43fe0  addiu       $a0, $fp, 0x3FE0
    ctx->pc = 0x4ec1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16352));
label_4ec1c8:
    // 0x4ec1c8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x4ec1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_4ec1cc:
    // 0x4ec1cc: 0x3c120054  lui         $s2, 0x54
    ctx->pc = 0x4ec1ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)84 << 16));
label_4ec1d0:
    // 0x4ec1d0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4ec1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_4ec1d4:
    // 0x4ec1d4: 0x27d43480  addiu       $s4, $fp, 0x3480
    ctx->pc = 0x4ec1d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 13440));
label_4ec1d8:
    // 0x4ec1d8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x4ec1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_4ec1dc:
    // 0x4ec1dc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec1e0:
    // 0x4ec1e0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x4ec1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_4ec1e4:
    // 0x4ec1e4: 0x3c100054  lui         $s0, 0x54
    ctx->pc = 0x4ec1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)84 << 16));
label_4ec1e8:
    // 0x4ec1e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4ec1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4ec1ec:
    // 0x4ec1ec: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x4ec1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_4ec1f0:
    // 0x4ec1f0: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x4ec1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_4ec1f4:
    // 0x4ec1f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ec1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ec1f8:
    // 0x4ec1f8: 0xc06870c  jal         func_1A1C30
label_4ec1fc:
    if (ctx->pc == 0x4EC1FCu) {
        ctx->pc = 0x4EC1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC1F8u;
        // 0x4ec1fc: 0xafc24120  sw          $v0, 0x4120($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 16672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC200u;
        goto label_4ec200;
    }
    ctx->pc = 0x4EC1F8u;
    SET_GPR_U32(ctx, 31, 0x4EC200u);
    ctx->pc = 0x4EC1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC1F8u;
    // 0x4ec1fc: 0xafc24120  sw          $v0, 0x4120($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 16672), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC1F8u, 0x4EC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC200u;
label_4ec200:
    // 0x4ec200: 0x27c43ee0  addiu       $a0, $fp, 0x3EE0
    ctx->pc = 0x4ec200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 16096));
label_4ec204:
    // 0x4ec204: 0xc06870c  jal         func_1A1C30
label_4ec208:
    if (ctx->pc == 0x4EC208u) {
        ctx->pc = 0x4EC208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC204u;
        // 0x4ec208: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC20Cu;
        goto label_4ec20c;
    }
    ctx->pc = 0x4EC204u;
    SET_GPR_U32(ctx, 31, 0x4EC20Cu);
    ctx->pc = 0x4EC208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC204u;
    // 0x4ec208: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC204u, 0x4EC20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC20Cu;
label_4ec20c:
    // 0x4ec20c: 0x27c43de0  addiu       $a0, $fp, 0x3DE0
    ctx->pc = 0x4ec20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 15840));
label_4ec210:
    // 0x4ec210: 0xc06870c  jal         func_1A1C30
label_4ec214:
    if (ctx->pc == 0x4EC214u) {
        ctx->pc = 0x4EC214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC210u;
        // 0x4ec214: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC218u;
        goto label_4ec218;
    }
    ctx->pc = 0x4EC210u;
    SET_GPR_U32(ctx, 31, 0x4EC218u);
    ctx->pc = 0x4EC214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC210u;
    // 0x4ec214: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC210u, 0x4EC218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC218u;
label_4ec218:
    // 0x4ec218: 0x27c43ce0  addiu       $a0, $fp, 0x3CE0
    ctx->pc = 0x4ec218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 15584));
label_4ec21c:
    // 0x4ec21c: 0xc06870c  jal         func_1A1C30
label_4ec220:
    if (ctx->pc == 0x4EC220u) {
        ctx->pc = 0x4EC220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC21Cu;
        // 0x4ec220: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC224u;
        goto label_4ec224;
    }
    ctx->pc = 0x4EC21Cu;
    SET_GPR_U32(ctx, 31, 0x4EC224u);
    ctx->pc = 0x4EC220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC21Cu;
    // 0x4ec220: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC21Cu, 0x4EC224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC224u;
label_4ec224:
    // 0x4ec224: 0x27c43ac0  addiu       $a0, $fp, 0x3AC0
    ctx->pc = 0x4ec224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 15040));
label_4ec228:
    // 0x4ec228: 0xc06e410  jal         func_1B9040
label_4ec22c:
    if (ctx->pc == 0x4EC22Cu) {
        ctx->pc = 0x4EC22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC228u;
        // 0x4ec22c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC230u;
        goto label_4ec230;
    }
    ctx->pc = 0x4EC228u;
    SET_GPR_U32(ctx, 31, 0x4EC230u);
    ctx->pc = 0x4EC22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC228u;
    // 0x4ec22c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC228u, 0x4EC230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC230u;
label_4ec230:
    // 0x4ec230: 0x27c23780  addiu       $v0, $fp, 0x3780
    ctx->pc = 0x4ec230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 14208));
label_4ec234:
    // 0x4ec234: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_4ec238:
    if (ctx->pc == 0x4EC238u) {
        ctx->pc = 0x4EC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC234u;
        // 0x4ec238: 0x27d13a80  addiu       $s1, $fp, 0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 14976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC23Cu;
        goto label_4ec23c;
    }
    ctx->pc = 0x4EC234u;
    {
        const bool branch_taken_0x4ec234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC234u;
        // 0x4ec238: 0x27d13a80  addiu       $s1, $fp, 0x3A80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 14976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec234) {
            ctx->pc = 0x4EC268u;
            goto label_4ec268;
        }
    }
    ctx->pc = 0x4EC23Cu;
label_4ec23c:
    // 0x4ec23c: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
label_4ec240:
    if (ctx->pc == 0x4EC240u) {
        ctx->pc = 0x4EC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC23Cu;
        // 0x4ec240: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC244u;
        goto label_4ec244;
    }
    ctx->pc = 0x4EC23Cu;
    {
        const bool branch_taken_0x4ec23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x4EC240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC23Cu;
        // 0x4ec240: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec23c) {
            ctx->pc = 0x4EC268u;
            goto label_4ec268;
        }
    }
    ctx->pc = 0x4EC244u;
label_4ec244:
    // 0x4ec244: 0x2631ff00  addiu       $s1, $s1, -0x100
    ctx->pc = 0x4ec244u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
label_4ec248:
    // 0x4ec248: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ec248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ec24c:
    // 0x4ec24c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4ec24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ec250:
    // 0x4ec250: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4ec250u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4ec254:
    // 0x4ec254: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4ec254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4ec258:
    // 0x4ec258: 0x60f809  jalr        $v1
label_4ec25c:
    if (ctx->pc == 0x4EC25Cu) {
        ctx->pc = 0x4EC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC258u;
        // 0x4ec25c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC260u;
        goto label_4ec260;
    }
    ctx->pc = 0x4EC258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EC260u);
        ctx->pc = 0x4EC25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC258u;
        // 0x4ec25c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC258u, 0x4EC260u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EC260u;
label_4ec260:
    // 0x4ec260: 0x1671fff9  bne         $s3, $s1, . + 4 + (-0x7 << 2)
label_4ec264:
    if (ctx->pc == 0x4EC264u) {
        ctx->pc = 0x4EC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC260u;
        // 0x4ec264: 0x2631ff00  addiu       $s1, $s1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC268u;
        goto label_4ec268;
    }
    ctx->pc = 0x4EC260u;
    {
        const bool branch_taken_0x4ec260 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 17));
        ctx->pc = 0x4EC264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC260u;
        // 0x4ec264: 0x2631ff00  addiu       $s1, $s1, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec260) {
            ctx->pc = 0x4EC248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ec248;
        }
    }
    ctx->pc = 0x4EC268u;
label_4ec268:
    // 0x4ec268: 0x26840200  addiu       $a0, $s4, 0x200
    ctx->pc = 0x4ec268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
label_4ec26c:
    // 0x4ec26c: 0xc06870c  jal         func_1A1C30
label_4ec270:
    if (ctx->pc == 0x4EC270u) {
        ctx->pc = 0x4EC270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC26Cu;
        // 0x4ec270: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC274u;
        goto label_4ec274;
    }
    ctx->pc = 0x4EC26Cu;
    SET_GPR_U32(ctx, 31, 0x4EC274u);
    ctx->pc = 0x4EC270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC26Cu;
    // 0x4ec270: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC26Cu, 0x4EC274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC274u;
label_4ec274:
    // 0x4ec274: 0x265294a0  addiu       $s2, $s2, -0x6B60
    ctx->pc = 0x4ec274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939808));
label_4ec278:
    // 0x4ec278: 0x26840100  addiu       $a0, $s4, 0x100
    ctx->pc = 0x4ec278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
label_4ec27c:
    // 0x4ec27c: 0xc06870c  jal         func_1A1C30
label_4ec280:
    if (ctx->pc == 0x4EC280u) {
        ctx->pc = 0x4EC280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC27Cu;
        // 0x4ec280: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC284u;
        goto label_4ec284;
    }
    ctx->pc = 0x4EC27Cu;
    SET_GPR_U32(ctx, 31, 0x4EC284u);
    ctx->pc = 0x4EC280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC27Cu;
    // 0x4ec280: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC27Cu, 0x4EC284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC284u;
label_4ec284:
    // 0x4ec284: 0x26109fd0  addiu       $s0, $s0, -0x6030
    ctx->pc = 0x4ec284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942672));
label_4ec288:
    // 0x4ec288: 0xae920078  sw          $s2, 0x78($s4)
    ctx->pc = 0x4ec288u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 18));
label_4ec28c:
    // 0x4ec28c: 0x27c41ef0  addiu       $a0, $fp, 0x1EF0
    ctx->pc = 0x4ec28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 7920));
label_4ec290:
    // 0x4ec290: 0xae9200e8  sw          $s2, 0xE8($s4)
    ctx->pc = 0x4ec290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 232), GPR_U32(ctx, 18));
label_4ec294:
    // 0x4ec294: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec298:
    // 0x4ec298: 0x27d11ac0  addiu       $s1, $fp, 0x1AC0
    ctx->pc = 0x4ec298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 6848));
label_4ec29c:
    // 0x4ec29c: 0xc069860  jal         func_1A6180
label_4ec2a0:
    if (ctx->pc == 0x4EC2A0u) {
        ctx->pc = 0x4EC2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC29Cu;
        // 0x4ec2a0: 0x27d31690  addiu       $s3, $fp, 0x1690 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 5776));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC2A4u;
        goto label_4ec2a4;
    }
    ctx->pc = 0x4EC29Cu;
    SET_GPR_U32(ctx, 31, 0x4EC2A4u);
    ctx->pc = 0x4EC2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC29Cu;
    // 0x4ec2a0: 0x27d31690  addiu       $s3, $fp, 0x1690 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 5776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6180u, 0x4EC29Cu, 0x4EC2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC2A4u;
label_4ec2a4:
    // 0x4ec2a4: 0x27d41260  addiu       $s4, $fp, 0x1260
    ctx->pc = 0x4ec2a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4704));
label_4ec2a8:
    // 0x4ec2a8: 0xafd01ac0  sw          $s0, 0x1AC0($fp)
    ctx->pc = 0x4ec2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 6848), GPR_U32(ctx, 16));
label_4ec2ac:
    // 0x4ec2ac: 0x27c41dc0  addiu       $a0, $fp, 0x1DC0
    ctx->pc = 0x4ec2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 7616));
label_4ec2b0:
    // 0x4ec2b0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec2b4:
    // 0x4ec2b4: 0xc06870c  jal         func_1A1C30
label_4ec2b8:
    if (ctx->pc == 0x4EC2B8u) {
        ctx->pc = 0x4EC2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC2B4u;
        // 0x4ec2b8: 0x27d50e30  addiu       $s5, $fp, 0xE30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 3632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC2BCu;
        goto label_4ec2bc;
    }
    ctx->pc = 0x4EC2B4u;
    SET_GPR_U32(ctx, 31, 0x4EC2BCu);
    ctx->pc = 0x4EC2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC2B4u;
    // 0x4ec2b8: 0x27d50e30  addiu       $s5, $fp, 0xE30 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 3632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC2B4u, 0x4EC2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC2BCu;
label_4ec2bc:
    // 0x4ec2bc: 0x27d70460  addiu       $s7, $fp, 0x460
    ctx->pc = 0x4ec2bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 1120));
label_4ec2c0:
    // 0x4ec2c0: 0x27c41bd0  addiu       $a0, $fp, 0x1BD0
    ctx->pc = 0x4ec2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 7120));
label_4ec2c4:
    // 0x4ec2c4: 0xc06e410  jal         func_1B9040
label_4ec2c8:
    if (ctx->pc == 0x4EC2C8u) {
        ctx->pc = 0x4EC2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC2C4u;
        // 0x4ec2c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC2CCu;
        goto label_4ec2cc;
    }
    ctx->pc = 0x4EC2C4u;
    SET_GPR_U32(ctx, 31, 0x4EC2CCu);
    ctx->pc = 0x4EC2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC2C4u;
    // 0x4ec2c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC2C4u, 0x4EC2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC2CCu;
label_4ec2cc:
    // 0x4ec2cc: 0x27d60400  addiu       $s6, $fp, 0x400
    ctx->pc = 0x4ec2ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 1024));
label_4ec2d0:
    // 0x4ec2d0: 0x27c41b00  addiu       $a0, $fp, 0x1B00
    ctx->pc = 0x4ec2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6912));
label_4ec2d4:
    // 0x4ec2d4: 0xc0733f0  jal         func_1CCFC0
label_4ec2d8:
    if (ctx->pc == 0x4EC2D8u) {
        ctx->pc = 0x4EC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC2D4u;
        // 0x4ec2d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC2DCu;
        goto label_4ec2dc;
    }
    ctx->pc = 0x4EC2D4u;
    SET_GPR_U32(ctx, 31, 0x4EC2DCu);
    ctx->pc = 0x4EC2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC2D4u;
    // 0x4ec2d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC2D4u, 0x4EC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC2DCu;
label_4ec2dc:
    // 0x4ec2dc: 0x27c20070  addiu       $v0, $fp, 0x70
    ctx->pc = 0x4ec2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 112));
label_4ec2e0:
    // 0x4ec2e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ec2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ec2e4:
    // 0x4ec2e4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4ec2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4ec2e8:
    // 0x4ec2e8: 0xc06a39e  jal         func_1A8E78
label_4ec2ec:
    if (ctx->pc == 0x4EC2ECu) {
        ctx->pc = 0x4EC2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC2E8u;
        // 0x4ec2ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC2F0u;
        goto label_4ec2f0;
    }
    ctx->pc = 0x4EC2E8u;
    SET_GPR_U32(ctx, 31, 0x4EC2F0u);
    ctx->pc = 0x4EC2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC2E8u;
    // 0x4ec2ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC2E8u, 0x4EC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC2F0u;
label_4ec2f0:
    // 0x4ec2f0: 0xafd01690  sw          $s0, 0x1690($fp)
    ctx->pc = 0x4ec2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 5776), GPR_U32(ctx, 16));
label_4ec2f4:
    // 0x4ec2f4: 0x27c41990  addiu       $a0, $fp, 0x1990
    ctx->pc = 0x4ec2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6544));
label_4ec2f8:
    // 0x4ec2f8: 0xc06870c  jal         func_1A1C30
label_4ec2fc:
    if (ctx->pc == 0x4EC2FCu) {
        ctx->pc = 0x4EC2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC2F8u;
        // 0x4ec2fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC300u;
        goto label_4ec300;
    }
    ctx->pc = 0x4EC2F8u;
    SET_GPR_U32(ctx, 31, 0x4EC300u);
    ctx->pc = 0x4EC2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC2F8u;
    // 0x4ec2fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC2F8u, 0x4EC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC300u;
label_4ec300:
    // 0x4ec300: 0x27c417a0  addiu       $a0, $fp, 0x17A0
    ctx->pc = 0x4ec300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 6048));
label_4ec304:
    // 0x4ec304: 0xc06e410  jal         func_1B9040
label_4ec308:
    if (ctx->pc == 0x4EC308u) {
        ctx->pc = 0x4EC308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC304u;
        // 0x4ec308: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC30Cu;
        goto label_4ec30c;
    }
    ctx->pc = 0x4EC304u;
    SET_GPR_U32(ctx, 31, 0x4EC30Cu);
    ctx->pc = 0x4EC308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC304u;
    // 0x4ec308: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC304u, 0x4EC30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC30Cu;
label_4ec30c:
    // 0x4ec30c: 0x27c416d0  addiu       $a0, $fp, 0x16D0
    ctx->pc = 0x4ec30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5840));
label_4ec310:
    // 0x4ec310: 0xc0733f0  jal         func_1CCFC0
label_4ec314:
    if (ctx->pc == 0x4EC314u) {
        ctx->pc = 0x4EC314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC310u;
        // 0x4ec314: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC318u;
        goto label_4ec318;
    }
    ctx->pc = 0x4EC310u;
    SET_GPR_U32(ctx, 31, 0x4EC318u);
    ctx->pc = 0x4EC314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC310u;
    // 0x4ec314: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC310u, 0x4EC318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC318u;
label_4ec318:
    // 0x4ec318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ec318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4ec31c:
    // 0x4ec31c: 0xc06a39e  jal         func_1A8E78
label_4ec320:
    if (ctx->pc == 0x4EC320u) {
        ctx->pc = 0x4EC320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC31Cu;
        // 0x4ec320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC324u;
        goto label_4ec324;
    }
    ctx->pc = 0x4EC31Cu;
    SET_GPR_U32(ctx, 31, 0x4EC324u);
    ctx->pc = 0x4EC320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC31Cu;
    // 0x4ec320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC31Cu, 0x4EC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC324u;
label_4ec324:
    // 0x4ec324: 0xafd01260  sw          $s0, 0x1260($fp)
    ctx->pc = 0x4ec324u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4704), GPR_U32(ctx, 16));
label_4ec328:
    // 0x4ec328: 0x27c41560  addiu       $a0, $fp, 0x1560
    ctx->pc = 0x4ec328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 5472));
label_4ec32c:
    // 0x4ec32c: 0xc06870c  jal         func_1A1C30
label_4ec330:
    if (ctx->pc == 0x4EC330u) {
        ctx->pc = 0x4EC330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC32Cu;
        // 0x4ec330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC334u;
        goto label_4ec334;
    }
    ctx->pc = 0x4EC32Cu;
    SET_GPR_U32(ctx, 31, 0x4EC334u);
    ctx->pc = 0x4EC330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC32Cu;
    // 0x4ec330: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC32Cu, 0x4EC334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC334u;
label_4ec334:
    // 0x4ec334: 0x27c41370  addiu       $a0, $fp, 0x1370
    ctx->pc = 0x4ec334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4976));
label_4ec338:
    // 0x4ec338: 0xc06e410  jal         func_1B9040
label_4ec33c:
    if (ctx->pc == 0x4EC33Cu) {
        ctx->pc = 0x4EC33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC338u;
        // 0x4ec33c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC340u;
        goto label_4ec340;
    }
    ctx->pc = 0x4EC338u;
    SET_GPR_U32(ctx, 31, 0x4EC340u);
    ctx->pc = 0x4EC33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC338u;
    // 0x4ec33c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC338u, 0x4EC340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC340u;
label_4ec340:
    // 0x4ec340: 0x27c412a0  addiu       $a0, $fp, 0x12A0
    ctx->pc = 0x4ec340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4768));
label_4ec344:
    // 0x4ec344: 0xc0733f0  jal         func_1CCFC0
label_4ec348:
    if (ctx->pc == 0x4EC348u) {
        ctx->pc = 0x4EC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC344u;
        // 0x4ec348: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC34Cu;
        goto label_4ec34c;
    }
    ctx->pc = 0x4EC344u;
    SET_GPR_U32(ctx, 31, 0x4EC34Cu);
    ctx->pc = 0x4EC348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC344u;
    // 0x4ec348: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC344u, 0x4EC34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC34Cu;
label_4ec34c:
    // 0x4ec34c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ec34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ec350:
    // 0x4ec350: 0xc06a39e  jal         func_1A8E78
label_4ec354:
    if (ctx->pc == 0x4EC354u) {
        ctx->pc = 0x4EC354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC350u;
        // 0x4ec354: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC358u;
        goto label_4ec358;
    }
    ctx->pc = 0x4EC350u;
    SET_GPR_U32(ctx, 31, 0x4EC358u);
    ctx->pc = 0x4EC354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC350u;
    // 0x4ec354: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC350u, 0x4EC358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC358u;
label_4ec358:
    // 0x4ec358: 0xafd00e30  sw          $s0, 0xE30($fp)
    ctx->pc = 0x4ec358u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 3632), GPR_U32(ctx, 16));
label_4ec35c:
    // 0x4ec35c: 0x27c41130  addiu       $a0, $fp, 0x1130
    ctx->pc = 0x4ec35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4400));
label_4ec360:
    // 0x4ec360: 0xc06870c  jal         func_1A1C30
label_4ec364:
    if (ctx->pc == 0x4EC364u) {
        ctx->pc = 0x4EC364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC360u;
        // 0x4ec364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC368u;
        goto label_4ec368;
    }
    ctx->pc = 0x4EC360u;
    SET_GPR_U32(ctx, 31, 0x4EC368u);
    ctx->pc = 0x4EC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC360u;
    // 0x4ec364: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC360u, 0x4EC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC368u;
label_4ec368:
    // 0x4ec368: 0x27c40f40  addiu       $a0, $fp, 0xF40
    ctx->pc = 0x4ec368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3904));
label_4ec36c:
    // 0x4ec36c: 0xc06e410  jal         func_1B9040
label_4ec370:
    if (ctx->pc == 0x4EC370u) {
        ctx->pc = 0x4EC370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC36Cu;
        // 0x4ec370: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC374u;
        goto label_4ec374;
    }
    ctx->pc = 0x4EC36Cu;
    SET_GPR_U32(ctx, 31, 0x4EC374u);
    ctx->pc = 0x4EC370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC36Cu;
    // 0x4ec370: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC36Cu, 0x4EC374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC374u;
label_4ec374:
    // 0x4ec374: 0x27c40e70  addiu       $a0, $fp, 0xE70
    ctx->pc = 0x4ec374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3696));
label_4ec378:
    // 0x4ec378: 0xc0733f0  jal         func_1CCFC0
label_4ec37c:
    if (ctx->pc == 0x4EC37Cu) {
        ctx->pc = 0x4EC37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC378u;
        // 0x4ec37c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC380u;
        goto label_4ec380;
    }
    ctx->pc = 0x4EC378u;
    SET_GPR_U32(ctx, 31, 0x4EC380u);
    ctx->pc = 0x4EC37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC378u;
    // 0x4ec37c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC378u, 0x4EC380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC380u;
label_4ec380:
    // 0x4ec380: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ec380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ec384:
    // 0x4ec384: 0xc06a39e  jal         func_1A8E78
label_4ec388:
    if (ctx->pc == 0x4EC388u) {
        ctx->pc = 0x4EC388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC384u;
        // 0x4ec388: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC38Cu;
        goto label_4ec38c;
    }
    ctx->pc = 0x4EC384u;
    SET_GPR_U32(ctx, 31, 0x4EC38Cu);
    ctx->pc = 0x4EC388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC384u;
    // 0x4ec388: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC384u, 0x4EC38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC38Cu;
label_4ec38c:
    // 0x4ec38c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ec38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4ec390:
    // 0x4ec390: 0x27c40880  addiu       $a0, $fp, 0x880
    ctx->pc = 0x4ec390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2176));
label_4ec394:
    // 0x4ec394: 0x2462a4b8  addiu       $v0, $v1, -0x5B48
    ctx->pc = 0x4ec394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943928));
label_4ec398:
    // 0x4ec398: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec39c:
    // 0x4ec39c: 0xc079bbc  jal         func_1E6EF0
label_4ec3a0:
    if (ctx->pc == 0x4EC3A0u) {
        ctx->pc = 0x4EC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC39Cu;
        // 0x4ec3a0: 0xafc20400  sw          $v0, 0x400($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC3A4u;
        goto label_4ec3a4;
    }
    ctx->pc = 0x4EC39Cu;
    SET_GPR_U32(ctx, 31, 0x4EC3A4u);
    ctx->pc = 0x4EC3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC39Cu;
    // 0x4ec3a0: 0xafc20400  sw          $v0, 0x400($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 1024), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6EF0u, 0x4EC39Cu, 0x4EC3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC3A4u;
label_4ec3a4:
    // 0x4ec3a4: 0xafd00460  sw          $s0, 0x460($fp)
    ctx->pc = 0x4ec3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1120), GPR_U32(ctx, 16));
label_4ec3a8:
    // 0x4ec3a8: 0x27c40760  addiu       $a0, $fp, 0x760
    ctx->pc = 0x4ec3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1888));
label_4ec3ac:
    // 0x4ec3ac: 0xc06870c  jal         func_1A1C30
label_4ec3b0:
    if (ctx->pc == 0x4EC3B0u) {
        ctx->pc = 0x4EC3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC3ACu;
        // 0x4ec3b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC3B4u;
        goto label_4ec3b4;
    }
    ctx->pc = 0x4EC3ACu;
    SET_GPR_U32(ctx, 31, 0x4EC3B4u);
    ctx->pc = 0x4EC3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC3ACu;
    // 0x4ec3b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C30u, 0x4EC3ACu, 0x4EC3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC3B4u;
label_4ec3b4:
    // 0x4ec3b4: 0x27c40570  addiu       $a0, $fp, 0x570
    ctx->pc = 0x4ec3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1392));
label_4ec3b8:
    // 0x4ec3b8: 0xc06e410  jal         func_1B9040
label_4ec3bc:
    if (ctx->pc == 0x4EC3BCu) {
        ctx->pc = 0x4EC3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC3B8u;
        // 0x4ec3bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC3C0u;
        goto label_4ec3c0;
    }
    ctx->pc = 0x4EC3B8u;
    SET_GPR_U32(ctx, 31, 0x4EC3C0u);
    ctx->pc = 0x4EC3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC3B8u;
    // 0x4ec3bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC3B8u, 0x4EC3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC3C0u;
label_4ec3c0:
    // 0x4ec3c0: 0x27c404a0  addiu       $a0, $fp, 0x4A0
    ctx->pc = 0x4ec3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1184));
label_4ec3c4:
    // 0x4ec3c4: 0xc0733f0  jal         func_1CCFC0
label_4ec3c8:
    if (ctx->pc == 0x4EC3C8u) {
        ctx->pc = 0x4EC3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC3C4u;
        // 0x4ec3c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC3CCu;
        goto label_4ec3cc;
    }
    ctx->pc = 0x4EC3C4u;
    SET_GPR_U32(ctx, 31, 0x4EC3CCu);
    ctx->pc = 0x4EC3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC3C4u;
    // 0x4ec3c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC3C4u, 0x4EC3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC3CCu;
label_4ec3cc:
    // 0x4ec3cc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4ec3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4ec3d0:
    // 0x4ec3d0: 0xc06a39e  jal         func_1A8E78
label_4ec3d4:
    if (ctx->pc == 0x4EC3D4u) {
        ctx->pc = 0x4EC3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC3D0u;
        // 0x4ec3d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC3D8u;
        goto label_4ec3d8;
    }
    ctx->pc = 0x4EC3D0u;
    SET_GPR_U32(ctx, 31, 0x4EC3D8u);
    ctx->pc = 0x4EC3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC3D0u;
    // 0x4ec3d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC3D0u, 0x4EC3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC3D8u;
label_4ec3d8:
    // 0x4ec3d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4ec3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4ec3dc:
    // 0x4ec3dc: 0xc06a39e  jal         func_1A8E78
label_4ec3e0:
    if (ctx->pc == 0x4EC3E0u) {
        ctx->pc = 0x4EC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC3DCu;
        // 0x4ec3e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC3E4u;
        goto label_4ec3e4;
    }
    ctx->pc = 0x4EC3DCu;
    SET_GPR_U32(ctx, 31, 0x4EC3E4u);
    ctx->pc = 0x4EC3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC3DCu;
    // 0x4ec3e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC3DCu, 0x4EC3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC3E4u;
label_4ec3e4:
    // 0x4ec3e4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4ec3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_4ec3e8:
    // 0x4ec3e8: 0x27c402a0  addiu       $a0, $fp, 0x2A0
    ctx->pc = 0x4ec3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 672));
label_4ec3ec:
    // 0x4ec3ec: 0x2462a930  addiu       $v0, $v1, -0x56D0
    ctx->pc = 0x4ec3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945072));
label_4ec3f0:
    // 0x4ec3f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4ec3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ec3f4:
    // 0x4ec3f4: 0xc0733f0  jal         func_1CCFC0
label_4ec3f8:
    if (ctx->pc == 0x4EC3F8u) {
        ctx->pc = 0x4EC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC3F4u;
        // 0x4ec3f8: 0xafc20070  sw          $v0, 0x70($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC3FCu;
        goto label_4ec3fc;
    }
    ctx->pc = 0x4EC3F4u;
    SET_GPR_U32(ctx, 31, 0x4EC3FCu);
    ctx->pc = 0x4EC3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC3F4u;
    // 0x4ec3f8: 0xafc20070  sw          $v0, 0x70($fp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CCFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCFC0u, 0x4EC3F4u, 0x4EC3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC3FCu;
label_4ec3fc:
    // 0x4ec3fc: 0x27c400b0  addiu       $a0, $fp, 0xB0
    ctx->pc = 0x4ec3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 176));
label_4ec400:
    // 0x4ec400: 0xc06e410  jal         func_1B9040
label_4ec404:
    if (ctx->pc == 0x4EC404u) {
        ctx->pc = 0x4EC404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC400u;
        // 0x4ec404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC408u;
        goto label_4ec408;
    }
    ctx->pc = 0x4EC400u;
    SET_GPR_U32(ctx, 31, 0x4EC408u);
    ctx->pc = 0x4EC404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC400u;
    // 0x4ec404: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9040u, 0x4EC400u, 0x4EC408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC408u;
label_4ec408:
    // 0x4ec408: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4ec408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_4ec40c:
    // 0x4ec40c: 0xc06a39e  jal         func_1A8E78
label_4ec410:
    if (ctx->pc == 0x4EC410u) {
        ctx->pc = 0x4EC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC40Cu;
        // 0x4ec410: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC414u;
        goto label_4ec414;
    }
    ctx->pc = 0x4EC40Cu;
    SET_GPR_U32(ctx, 31, 0x4EC414u);
    ctx->pc = 0x4EC410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC40Cu;
    // 0x4ec410: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4EC40Cu, 0x4EC414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC414u;
label_4ec414:
    // 0x4ec414: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4ec414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4ec418:
    // 0x4ec418: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4ec418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4ec41c:
    // 0x4ec41c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4ec420:
    if (ctx->pc == 0x4EC420u) {
        ctx->pc = 0x4EC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC41Cu;
        // 0x4ec420: 0xafd20068  sw          $s2, 0x68($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 104), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC424u;
        goto label_4ec424;
    }
    ctx->pc = 0x4EC41Cu;
    {
        const bool branch_taken_0x4ec41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC41Cu;
        // 0x4ec420: 0xafd20068  sw          $s2, 0x68($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 104), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ec41c) {
            ctx->pc = 0x4EC42Cu;
            goto label_4ec42c;
        }
    }
    ctx->pc = 0x4EC424u;
label_4ec424:
    // 0x4ec424: 0xc10b208  jal         func_42C820
label_4ec428:
    if (ctx->pc == 0x4EC428u) {
        ctx->pc = 0x4EC428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC424u;
        // 0x4ec428: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC42Cu;
        goto label_4ec42c;
    }
    ctx->pc = 0x4EC424u;
    SET_GPR_U32(ctx, 31, 0x4EC42Cu);
    ctx->pc = 0x4EC428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EC424u;
    // 0x4ec428: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4EC424u, 0x4EC42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EC42Cu;
label_4ec42c:
    // 0x4ec42c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x4ec42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4ec430:
    // 0x4ec430: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x4ec430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4ec434:
    // 0x4ec434: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x4ec434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ec438:
    // 0x4ec438: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x4ec438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ec43c:
    // 0x4ec43c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x4ec43cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ec440:
    // 0x4ec440: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4ec440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ec444:
    // 0x4ec444: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x4ec444u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ec448:
    // 0x4ec448: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x4ec448u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ec44c:
    // 0x4ec44c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x4ec44cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ec450:
    // 0x4ec450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ec450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ec454:
    // 0x4ec454: 0x3e00008  jr          $ra
label_4ec458:
    if (ctx->pc == 0x4EC458u) {
        ctx->pc = 0x4EC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC454u;
        // 0x4ec458: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EC45Cu;
        goto label_4ec45c;
    }
    ctx->pc = 0x4EC454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EC458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EC454u;
        // 0x4ec458: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EC454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EC45Cu;
label_4ec45c:
    // 0x4ec45c: 0x0  nop
    ctx->pc = 0x4ec45cu;
    // NOP
label_4ec460:
    // 0x4ec460: 0x7c8240e0  sq          $v0, 0x40E0($a0)
    ctx->pc = 0x4ec460u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16608), GPR_VEC(ctx, 2));
label_4ec464:
    // 0x4ec464: 0x0  nop
    ctx->pc = 0x4ec464u;
    // NOP
    ctx->pc = 0x4ec468u;
}
