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

// Function: sub_002FD158
// Address: 0x2fd158 - 0x2fd4e8
void sub_002FD158_0x2fd158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD158_0x2fd158");
#endif

    switch (ctx->pc) {
        case 0x2fd158u: goto label_2fd158;
        case 0x2fd15cu: goto label_2fd15c;
        case 0x2fd160u: goto label_2fd160;
        case 0x2fd164u: goto label_2fd164;
        case 0x2fd168u: goto label_2fd168;
        case 0x2fd16cu: goto label_2fd16c;
        case 0x2fd170u: goto label_2fd170;
        case 0x2fd174u: goto label_2fd174;
        case 0x2fd178u: goto label_2fd178;
        case 0x2fd17cu: goto label_2fd17c;
        case 0x2fd180u: goto label_2fd180;
        case 0x2fd184u: goto label_2fd184;
        case 0x2fd188u: goto label_2fd188;
        case 0x2fd18cu: goto label_2fd18c;
        case 0x2fd190u: goto label_2fd190;
        case 0x2fd194u: goto label_2fd194;
        case 0x2fd198u: goto label_2fd198;
        case 0x2fd19cu: goto label_2fd19c;
        case 0x2fd1a0u: goto label_2fd1a0;
        case 0x2fd1a4u: goto label_2fd1a4;
        case 0x2fd1a8u: goto label_2fd1a8;
        case 0x2fd1acu: goto label_2fd1ac;
        case 0x2fd1b0u: goto label_2fd1b0;
        case 0x2fd1b4u: goto label_2fd1b4;
        case 0x2fd1b8u: goto label_2fd1b8;
        case 0x2fd1bcu: goto label_2fd1bc;
        case 0x2fd1c0u: goto label_2fd1c0;
        case 0x2fd1c4u: goto label_2fd1c4;
        case 0x2fd1c8u: goto label_2fd1c8;
        case 0x2fd1ccu: goto label_2fd1cc;
        case 0x2fd1d0u: goto label_2fd1d0;
        case 0x2fd1d4u: goto label_2fd1d4;
        case 0x2fd1d8u: goto label_2fd1d8;
        case 0x2fd1dcu: goto label_2fd1dc;
        case 0x2fd1e0u: goto label_2fd1e0;
        case 0x2fd1e4u: goto label_2fd1e4;
        case 0x2fd1e8u: goto label_2fd1e8;
        case 0x2fd1ecu: goto label_2fd1ec;
        case 0x2fd1f0u: goto label_2fd1f0;
        case 0x2fd1f4u: goto label_2fd1f4;
        case 0x2fd1f8u: goto label_2fd1f8;
        case 0x2fd1fcu: goto label_2fd1fc;
        case 0x2fd200u: goto label_2fd200;
        case 0x2fd204u: goto label_2fd204;
        case 0x2fd208u: goto label_2fd208;
        case 0x2fd20cu: goto label_2fd20c;
        case 0x2fd210u: goto label_2fd210;
        case 0x2fd214u: goto label_2fd214;
        case 0x2fd218u: goto label_2fd218;
        case 0x2fd21cu: goto label_2fd21c;
        case 0x2fd220u: goto label_2fd220;
        case 0x2fd224u: goto label_2fd224;
        case 0x2fd228u: goto label_2fd228;
        case 0x2fd22cu: goto label_2fd22c;
        case 0x2fd230u: goto label_2fd230;
        case 0x2fd234u: goto label_2fd234;
        case 0x2fd238u: goto label_2fd238;
        case 0x2fd23cu: goto label_2fd23c;
        case 0x2fd240u: goto label_2fd240;
        case 0x2fd244u: goto label_2fd244;
        case 0x2fd248u: goto label_2fd248;
        case 0x2fd24cu: goto label_2fd24c;
        case 0x2fd250u: goto label_2fd250;
        case 0x2fd254u: goto label_2fd254;
        case 0x2fd258u: goto label_2fd258;
        case 0x2fd25cu: goto label_2fd25c;
        case 0x2fd260u: goto label_2fd260;
        case 0x2fd264u: goto label_2fd264;
        case 0x2fd268u: goto label_2fd268;
        case 0x2fd26cu: goto label_2fd26c;
        case 0x2fd270u: goto label_2fd270;
        case 0x2fd274u: goto label_2fd274;
        case 0x2fd278u: goto label_2fd278;
        case 0x2fd27cu: goto label_2fd27c;
        case 0x2fd280u: goto label_2fd280;
        case 0x2fd284u: goto label_2fd284;
        case 0x2fd288u: goto label_2fd288;
        case 0x2fd28cu: goto label_2fd28c;
        case 0x2fd290u: goto label_2fd290;
        case 0x2fd294u: goto label_2fd294;
        case 0x2fd298u: goto label_2fd298;
        case 0x2fd29cu: goto label_2fd29c;
        case 0x2fd2a0u: goto label_2fd2a0;
        case 0x2fd2a4u: goto label_2fd2a4;
        case 0x2fd2a8u: goto label_2fd2a8;
        case 0x2fd2acu: goto label_2fd2ac;
        case 0x2fd2b0u: goto label_2fd2b0;
        case 0x2fd2b4u: goto label_2fd2b4;
        case 0x2fd2b8u: goto label_2fd2b8;
        case 0x2fd2bcu: goto label_2fd2bc;
        case 0x2fd2c0u: goto label_2fd2c0;
        case 0x2fd2c4u: goto label_2fd2c4;
        case 0x2fd2c8u: goto label_2fd2c8;
        case 0x2fd2ccu: goto label_2fd2cc;
        case 0x2fd2d0u: goto label_2fd2d0;
        case 0x2fd2d4u: goto label_2fd2d4;
        case 0x2fd2d8u: goto label_2fd2d8;
        case 0x2fd2dcu: goto label_2fd2dc;
        case 0x2fd2e0u: goto label_2fd2e0;
        case 0x2fd2e4u: goto label_2fd2e4;
        case 0x2fd2e8u: goto label_2fd2e8;
        case 0x2fd2ecu: goto label_2fd2ec;
        case 0x2fd2f0u: goto label_2fd2f0;
        case 0x2fd2f4u: goto label_2fd2f4;
        case 0x2fd2f8u: goto label_2fd2f8;
        case 0x2fd2fcu: goto label_2fd2fc;
        case 0x2fd300u: goto label_2fd300;
        case 0x2fd304u: goto label_2fd304;
        case 0x2fd308u: goto label_2fd308;
        case 0x2fd30cu: goto label_2fd30c;
        case 0x2fd310u: goto label_2fd310;
        case 0x2fd314u: goto label_2fd314;
        case 0x2fd318u: goto label_2fd318;
        case 0x2fd31cu: goto label_2fd31c;
        case 0x2fd320u: goto label_2fd320;
        case 0x2fd324u: goto label_2fd324;
        case 0x2fd328u: goto label_2fd328;
        case 0x2fd32cu: goto label_2fd32c;
        case 0x2fd330u: goto label_2fd330;
        case 0x2fd334u: goto label_2fd334;
        case 0x2fd338u: goto label_2fd338;
        case 0x2fd33cu: goto label_2fd33c;
        case 0x2fd340u: goto label_2fd340;
        case 0x2fd344u: goto label_2fd344;
        case 0x2fd348u: goto label_2fd348;
        case 0x2fd34cu: goto label_2fd34c;
        case 0x2fd350u: goto label_2fd350;
        case 0x2fd354u: goto label_2fd354;
        case 0x2fd358u: goto label_2fd358;
        case 0x2fd35cu: goto label_2fd35c;
        case 0x2fd360u: goto label_2fd360;
        case 0x2fd364u: goto label_2fd364;
        case 0x2fd368u: goto label_2fd368;
        case 0x2fd36cu: goto label_2fd36c;
        case 0x2fd370u: goto label_2fd370;
        case 0x2fd374u: goto label_2fd374;
        case 0x2fd378u: goto label_2fd378;
        case 0x2fd37cu: goto label_2fd37c;
        case 0x2fd380u: goto label_2fd380;
        case 0x2fd384u: goto label_2fd384;
        case 0x2fd388u: goto label_2fd388;
        case 0x2fd38cu: goto label_2fd38c;
        case 0x2fd390u: goto label_2fd390;
        case 0x2fd394u: goto label_2fd394;
        case 0x2fd398u: goto label_2fd398;
        case 0x2fd39cu: goto label_2fd39c;
        case 0x2fd3a0u: goto label_2fd3a0;
        case 0x2fd3a4u: goto label_2fd3a4;
        case 0x2fd3a8u: goto label_2fd3a8;
        case 0x2fd3acu: goto label_2fd3ac;
        case 0x2fd3b0u: goto label_2fd3b0;
        case 0x2fd3b4u: goto label_2fd3b4;
        case 0x2fd3b8u: goto label_2fd3b8;
        case 0x2fd3bcu: goto label_2fd3bc;
        case 0x2fd3c0u: goto label_2fd3c0;
        case 0x2fd3c4u: goto label_2fd3c4;
        case 0x2fd3c8u: goto label_2fd3c8;
        case 0x2fd3ccu: goto label_2fd3cc;
        case 0x2fd3d0u: goto label_2fd3d0;
        case 0x2fd3d4u: goto label_2fd3d4;
        case 0x2fd3d8u: goto label_2fd3d8;
        case 0x2fd3dcu: goto label_2fd3dc;
        case 0x2fd3e0u: goto label_2fd3e0;
        case 0x2fd3e4u: goto label_2fd3e4;
        case 0x2fd3e8u: goto label_2fd3e8;
        case 0x2fd3ecu: goto label_2fd3ec;
        case 0x2fd3f0u: goto label_2fd3f0;
        case 0x2fd3f4u: goto label_2fd3f4;
        case 0x2fd3f8u: goto label_2fd3f8;
        case 0x2fd3fcu: goto label_2fd3fc;
        case 0x2fd400u: goto label_2fd400;
        case 0x2fd404u: goto label_2fd404;
        case 0x2fd408u: goto label_2fd408;
        case 0x2fd40cu: goto label_2fd40c;
        case 0x2fd410u: goto label_2fd410;
        case 0x2fd414u: goto label_2fd414;
        case 0x2fd418u: goto label_2fd418;
        case 0x2fd41cu: goto label_2fd41c;
        case 0x2fd420u: goto label_2fd420;
        case 0x2fd424u: goto label_2fd424;
        case 0x2fd428u: goto label_2fd428;
        case 0x2fd42cu: goto label_2fd42c;
        case 0x2fd430u: goto label_2fd430;
        case 0x2fd434u: goto label_2fd434;
        case 0x2fd438u: goto label_2fd438;
        case 0x2fd43cu: goto label_2fd43c;
        case 0x2fd440u: goto label_2fd440;
        case 0x2fd444u: goto label_2fd444;
        case 0x2fd448u: goto label_2fd448;
        case 0x2fd44cu: goto label_2fd44c;
        case 0x2fd450u: goto label_2fd450;
        case 0x2fd454u: goto label_2fd454;
        case 0x2fd458u: goto label_2fd458;
        case 0x2fd45cu: goto label_2fd45c;
        case 0x2fd460u: goto label_2fd460;
        case 0x2fd464u: goto label_2fd464;
        case 0x2fd468u: goto label_2fd468;
        case 0x2fd46cu: goto label_2fd46c;
        case 0x2fd470u: goto label_2fd470;
        case 0x2fd474u: goto label_2fd474;
        case 0x2fd478u: goto label_2fd478;
        case 0x2fd47cu: goto label_2fd47c;
        case 0x2fd480u: goto label_2fd480;
        case 0x2fd484u: goto label_2fd484;
        case 0x2fd488u: goto label_2fd488;
        case 0x2fd48cu: goto label_2fd48c;
        case 0x2fd490u: goto label_2fd490;
        case 0x2fd494u: goto label_2fd494;
        case 0x2fd498u: goto label_2fd498;
        case 0x2fd49cu: goto label_2fd49c;
        case 0x2fd4a0u: goto label_2fd4a0;
        case 0x2fd4a4u: goto label_2fd4a4;
        case 0x2fd4a8u: goto label_2fd4a8;
        case 0x2fd4acu: goto label_2fd4ac;
        case 0x2fd4b0u: goto label_2fd4b0;
        case 0x2fd4b4u: goto label_2fd4b4;
        case 0x2fd4b8u: goto label_2fd4b8;
        case 0x2fd4bcu: goto label_2fd4bc;
        case 0x2fd4c0u: goto label_2fd4c0;
        case 0x2fd4c4u: goto label_2fd4c4;
        case 0x2fd4c8u: goto label_2fd4c8;
        case 0x2fd4ccu: goto label_2fd4cc;
        case 0x2fd4d0u: goto label_2fd4d0;
        case 0x2fd4d4u: goto label_2fd4d4;
        case 0x2fd4d8u: goto label_2fd4d8;
        case 0x2fd4dcu: goto label_2fd4dc;
        case 0x2fd4e0u: goto label_2fd4e0;
        case 0x2fd4e4u: goto label_2fd4e4;
        default: break;
    }

    ctx->pc = 0x2fd158u;

label_2fd158:
    // 0x2fd158: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fd158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2fd15c:
    // 0x2fd15c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2fd15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2fd160:
    // 0x2fd160: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fd160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fd164:
    // 0x2fd164: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2fd164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2fd168:
    // 0x2fd168: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2fd168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2fd16c:
    // 0x2fd16c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2fd16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2fd170:
    // 0x2fd170: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2fd170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2fd174:
    // 0x2fd174: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2fd174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2fd178:
    // 0x2fd178: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2fd178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2fd17c:
    // 0x2fd17c: 0xc0e409a  jal         func_390268
label_2fd180:
    if (ctx->pc == 0x2FD180u) {
        ctx->pc = 0x2FD180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD17Cu;
        // 0x2fd180: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD184u;
        goto label_2fd184;
    }
    ctx->pc = 0x2FD17Cu;
    SET_GPR_U32(ctx, 31, 0x2FD184u);
    ctx->pc = 0x2FD180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD17Cu;
    // 0x2fd180: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FD17Cu, 0x2FD184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD184u;
label_2fd184:
    // 0x2fd184: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fd184u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd188:
    // 0x2fd188: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2fd188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2fd18c:
    // 0x2fd18c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2fd190:
    if (ctx->pc == 0x2FD190u) {
        ctx->pc = 0x2FD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD18Cu;
        // 0x2fd190: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD194u;
        goto label_2fd194;
    }
    ctx->pc = 0x2FD18Cu;
    {
        const bool branch_taken_0x2fd18c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD18Cu;
        // 0x2fd190: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd18c) {
            ctx->pc = 0x2FD1A8u;
            goto label_2fd1a8;
        }
    }
    ctx->pc = 0x2FD194u;
label_2fd194:
    // 0x2fd194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd198:
    // 0x2fd198: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2fd198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_2fd19c:
    // 0x2fd19c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2fd19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2fd1a0:
    // 0x2fd1a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2fd1a4:
    if (ctx->pc == 0x2FD1A4u) {
        ctx->pc = 0x2FD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1A0u;
        // 0x2fd1a4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD1A8u;
        goto label_2fd1a8;
    }
    ctx->pc = 0x2FD1A0u;
    {
        const bool branch_taken_0x2fd1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1A0u;
        // 0x2fd1a4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1a0) {
            ctx->pc = 0x2FD1C0u;
            goto label_2fd1c0;
        }
    }
    ctx->pc = 0x2FD1A8u;
label_2fd1a8:
    // 0x2fd1a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2fd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2fd1ac:
    // 0x2fd1ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2fd1acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2fd1b0:
    // 0x2fd1b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fd1b4:
    // 0x2fd1b4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2fd1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2fd1b8:
    // 0x2fd1b8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2fd1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_2fd1bc:
    // 0x2fd1bc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2fd1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_2fd1c0:
    // 0x2fd1c0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2fd1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd1c4:
    // 0x2fd1c4: 0xc0a3fa4  jal         func_28FE90
label_2fd1c8:
    if (ctx->pc == 0x2FD1C8u) {
        ctx->pc = 0x2FD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1C4u;
        // 0x2fd1c8: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD1CCu;
        goto label_2fd1cc;
    }
    ctx->pc = 0x2FD1C4u;
    SET_GPR_U32(ctx, 31, 0x2FD1CCu);
    ctx->pc = 0x2FD1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD1C4u;
    // 0x2fd1c8: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2FD1C4u, 0x2FD1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD1CCu;
label_2fd1cc:
    // 0x2fd1cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fd1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd1d0:
    // 0x2fd1d0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2fd1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2fd1d4:
    // 0x2fd1d4: 0x50400064  beql        $v0, $zero, . + 4 + (0x64 << 2)
label_2fd1d8:
    if (ctx->pc == 0x2FD1D8u) {
        ctx->pc = 0x2FD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1D4u;
        // 0x2fd1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD1DCu;
        goto label_2fd1dc;
    }
    ctx->pc = 0x2FD1D4u;
    {
        const bool branch_taken_0x2fd1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd1d4) {
            ctx->pc = 0x2FD1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD1D4u;
            // 0x2fd1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD368u;
            goto label_2fd368;
        }
    }
    ctx->pc = 0x2FD1DCu;
label_2fd1dc:
    // 0x2fd1dc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2fd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd1e0:
    // 0x2fd1e0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fd1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_2fd1e4:
    // 0x2fd1e4: 0xc0e409a  jal         func_390268
label_2fd1e8:
    if (ctx->pc == 0x2FD1E8u) {
        ctx->pc = 0x2FD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1E4u;
        // 0x2fd1e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD1ECu;
        goto label_2fd1ec;
    }
    ctx->pc = 0x2FD1E4u;
    SET_GPR_U32(ctx, 31, 0x2FD1ECu);
    ctx->pc = 0x2FD1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD1E4u;
    // 0x2fd1e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2FD1E4u, 0x2FD1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD1ECu;
label_2fd1ec:
    // 0x2fd1ec: 0x1282005e  beq         $s4, $v0, . + 4 + (0x5E << 2)
label_2fd1f0:
    if (ctx->pc == 0x2FD1F0u) {
        ctx->pc = 0x2FD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1ECu;
        // 0x2fd1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD1F4u;
        goto label_2fd1f4;
    }
    ctx->pc = 0x2FD1ECu;
    {
        const bool branch_taken_0x2fd1ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1ECu;
        // 0x2fd1f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1ec) {
            ctx->pc = 0x2FD368u;
            goto label_2fd368;
        }
    }
    ctx->pc = 0x2FD1F4u;
label_2fd1f4:
    // 0x2fd1f4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2fd1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2fd1f8:
    // 0x2fd1f8: 0xc0a7a72  jal         func_29E9C8
label_2fd1fc:
    if (ctx->pc == 0x2FD1FCu) {
        ctx->pc = 0x2FD1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1F8u;
        // 0x2fd1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD200u;
        goto label_2fd200;
    }
    ctx->pc = 0x2FD1F8u;
    SET_GPR_U32(ctx, 31, 0x2FD200u);
    ctx->pc = 0x2FD1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD1F8u;
    // 0x2fd1fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FD1F8u, 0x2FD200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD200u;
label_2fd200:
    // 0x2fd200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fd200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd204:
    // 0x2fd204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd208:
    // 0x2fd208: 0x16020057  bne         $s0, $v0, . + 4 + (0x57 << 2)
label_2fd20c:
    if (ctx->pc == 0x2FD20Cu) {
        ctx->pc = 0x2FD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD208u;
        // 0x2fd20c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD210u;
        goto label_2fd210;
    }
    ctx->pc = 0x2FD208u;
    {
        const bool branch_taken_0x2fd208 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD208u;
        // 0x2fd20c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd208) {
            ctx->pc = 0x2FD368u;
            goto label_2fd368;
        }
    }
    ctx->pc = 0x2FD210u;
label_2fd210:
    // 0x2fd210: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x2fd210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_2fd214:
    // 0x2fd214: 0xc0a7a72  jal         func_29E9C8
label_2fd218:
    if (ctx->pc == 0x2FD218u) {
        ctx->pc = 0x2FD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD214u;
        // 0x2fd218: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD21Cu;
        goto label_2fd21c;
    }
    ctx->pc = 0x2FD214u;
    SET_GPR_U32(ctx, 31, 0x2FD21Cu);
    ctx->pc = 0x2FD218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD214u;
    // 0x2fd218: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FD214u, 0x2FD21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD21Cu;
label_2fd21c:
    // 0x2fd21c: 0x1450003c  bne         $v0, $s0, . + 4 + (0x3C << 2)
label_2fd220:
    if (ctx->pc == 0x2FD220u) {
        ctx->pc = 0x2FD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD21Cu;
        // 0x2fd220: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD224u;
        goto label_2fd224;
    }
    ctx->pc = 0x2FD21Cu;
    {
        const bool branch_taken_0x2fd21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD21Cu;
        // 0x2fd220: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd21c) {
            ctx->pc = 0x2FD310u;
            goto label_2fd310;
        }
    }
    ctx->pc = 0x2FD224u;
label_2fd224:
    // 0x2fd224: 0xc0a7a72  jal         func_29E9C8
label_2fd228:
    if (ctx->pc == 0x2FD228u) {
        ctx->pc = 0x2FD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD224u;
        // 0x2fd228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD22Cu;
        goto label_2fd22c;
    }
    ctx->pc = 0x2FD224u;
    SET_GPR_U32(ctx, 31, 0x2FD22Cu);
    ctx->pc = 0x2FD228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD224u;
    // 0x2fd228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FD224u, 0x2FD22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD22Cu;
label_2fd22c:
    // 0x2fd22c: 0x1450002e  bne         $v0, $s0, . + 4 + (0x2E << 2)
label_2fd230:
    if (ctx->pc == 0x2FD230u) {
        ctx->pc = 0x2FD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD22Cu;
        // 0x2fd230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD234u;
        goto label_2fd234;
    }
    ctx->pc = 0x2FD22Cu;
    {
        const bool branch_taken_0x2fd22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD22Cu;
        // 0x2fd230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd22c) {
            ctx->pc = 0x2FD2E8u;
            goto label_2fd2e8;
        }
    }
    ctx->pc = 0x2FD234u;
label_2fd234:
    // 0x2fd234: 0xc0a7a92  jal         func_29EA48
label_2fd238:
    if (ctx->pc == 0x2FD238u) {
        ctx->pc = 0x2FD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD234u;
        // 0x2fd238: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD23Cu;
        goto label_2fd23c;
    }
    ctx->pc = 0x2FD234u;
    SET_GPR_U32(ctx, 31, 0x2FD23Cu);
    ctx->pc = 0x2FD238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD234u;
    // 0x2fd238: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA48u, 0x2FD234u, 0x2FD23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD23Cu;
label_2fd23c:
    // 0x2fd23c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2fd240:
    if (ctx->pc == 0x2FD240u) {
        ctx->pc = 0x2FD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD23Cu;
        // 0x2fd240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD244u;
        goto label_2fd244;
    }
    ctx->pc = 0x2FD23Cu;
    {
        const bool branch_taken_0x2fd23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD23Cu;
        // 0x2fd240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd23c) {
            ctx->pc = 0x2FD28Cu;
            goto label_2fd28c;
        }
    }
    ctx->pc = 0x2FD244u;
label_2fd244:
    // 0x2fd244: 0xc0a7a92  jal         func_29EA48
label_2fd248:
    if (ctx->pc == 0x2FD248u) {
        ctx->pc = 0x2FD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD244u;
        // 0x2fd248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD24Cu;
        goto label_2fd24c;
    }
    ctx->pc = 0x2FD244u;
    SET_GPR_U32(ctx, 31, 0x2FD24Cu);
    ctx->pc = 0x2FD248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD244u;
    // 0x2fd248: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA48u, 0x2FD244u, 0x2FD24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD24Cu;
label_2fd24c:
    // 0x2fd24c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2fd250:
    if (ctx->pc == 0x2FD250u) {
        ctx->pc = 0x2FD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD24Cu;
        // 0x2fd250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD254u;
        goto label_2fd254;
    }
    ctx->pc = 0x2FD24Cu;
    {
        const bool branch_taken_0x2fd24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD24Cu;
        // 0x2fd250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd24c) {
            ctx->pc = 0x2FD28Cu;
            goto label_2fd28c;
        }
    }
    ctx->pc = 0x2FD254u;
label_2fd254:
    // 0x2fd254: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2fd254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd258:
    // 0x2fd258: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2fd258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fd25c:
    // 0x2fd25c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2fd25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2fd260:
    // 0x2fd260: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2fd260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2fd264:
    // 0x2fd264: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2fd264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2fd268:
    // 0x2fd268: 0x40f809  jalr        $v0
label_2fd26c:
    if (ctx->pc == 0x2FD26Cu) {
        ctx->pc = 0x2FD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD268u;
        // 0x2fd26c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD270u;
        goto label_2fd270;
    }
    ctx->pc = 0x2FD268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FD270u);
        ctx->pc = 0x2FD26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD268u;
        // 0x2fd26c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD268u, 0x2FD270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FD270u;
label_2fd270:
    // 0x2fd270: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x2fd270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_2fd274:
    // 0x2fd274: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2fd274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2fd278:
    // 0x2fd278: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fd278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fd27c:
    // 0x2fd27c: 0x87a30032  lh          $v1, 0x32($sp)
    ctx->pc = 0x2fd27cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 50)));
label_2fd280:
    // 0x2fd280: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fd280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2fd284:
    // 0x2fd284: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2fd288:
    if (ctx->pc == 0x2FD288u) {
        ctx->pc = 0x2FD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD284u;
        // 0x2fd288: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD28Cu;
        goto label_2fd28c;
    }
    ctx->pc = 0x2FD284u;
    {
        const bool branch_taken_0x2fd284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD284u;
        // 0x2fd288: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd284) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD28Cu;
label_2fd28c:
    // 0x2fd28c: 0xc0a7a60  jal         func_29E980
label_2fd290:
    if (ctx->pc == 0x2FD290u) {
        ctx->pc = 0x2FD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD28Cu;
        // 0x2fd290: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD294u;
        goto label_2fd294;
    }
    ctx->pc = 0x2FD28Cu;
    SET_GPR_U32(ctx, 31, 0x2FD294u);
    ctx->pc = 0x2FD290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD28Cu;
    // 0x2fd290: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E980u, 0x2FD28Cu, 0x2FD294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD294u;
label_2fd294:
    // 0x2fd294: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fd294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd298:
    // 0x2fd298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fd298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd29c:
    // 0x2fd29c: 0xc0a7a60  jal         func_29E980
label_2fd2a0:
    if (ctx->pc == 0x2FD2A0u) {
        ctx->pc = 0x2FD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD29Cu;
        // 0x2fd2a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2A4u;
        goto label_2fd2a4;
    }
    ctx->pc = 0x2FD29Cu;
    SET_GPR_U32(ctx, 31, 0x2FD2A4u);
    ctx->pc = 0x2FD2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD29Cu;
    // 0x2fd2a0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E980u, 0x2FD29Cu, 0x2FD2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD2A4u;
label_2fd2a4:
    // 0x2fd2a4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x2fd2a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2fd2a8:
    // 0x2fd2a8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2fd2ac:
    if (ctx->pc == 0x2FD2ACu) {
        ctx->pc = 0x2FD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2A8u;
        // 0x2fd2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2B0u;
        goto label_2fd2b0;
    }
    ctx->pc = 0x2FD2A8u;
    {
        const bool branch_taken_0x2fd2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2A8u;
        // 0x2fd2ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2a8) {
            ctx->pc = 0x2FD2CCu;
            goto label_2fd2cc;
        }
    }
    ctx->pc = 0x2FD2B0u;
label_2fd2b0:
    // 0x2fd2b0: 0xc0a7a92  jal         func_29EA48
label_2fd2b4:
    if (ctx->pc == 0x2FD2B4u) {
        ctx->pc = 0x2FD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2B0u;
        // 0x2fd2b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2B8u;
        goto label_2fd2b8;
    }
    ctx->pc = 0x2FD2B0u;
    SET_GPR_U32(ctx, 31, 0x2FD2B8u);
    ctx->pc = 0x2FD2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD2B0u;
    // 0x2fd2b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA48u, 0x2FD2B0u, 0x2FD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD2B8u;
label_2fd2b8:
    // 0x2fd2b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd2bc:
    // 0x2fd2bc: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
label_2fd2c0:
    if (ctx->pc == 0x2FD2C0u) {
        ctx->pc = 0x2FD2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2BCu;
        // 0x2fd2c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2C4u;
        goto label_2fd2c4;
    }
    ctx->pc = 0x2FD2BCu;
    {
        const bool branch_taken_0x2fd2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FD2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2BCu;
        // 0x2fd2c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2bc) {
            ctx->pc = 0x2FD368u;
            goto label_2fd368;
        }
    }
    ctx->pc = 0x2FD2C4u;
label_2fd2c4:
    // 0x2fd2c4: 0x1000007e  b           . + 4 + (0x7E << 2)
label_2fd2c8:
    if (ctx->pc == 0x2FD2C8u) {
        ctx->pc = 0x2FD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2C4u;
        // 0x2fd2c8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2CCu;
        goto label_2fd2cc;
    }
    ctx->pc = 0x2FD2C4u;
    {
        const bool branch_taken_0x2fd2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2C4u;
        // 0x2fd2c8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2c4) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD2CCu;
label_2fd2cc:
    // 0x2fd2cc: 0xc0a7a92  jal         func_29EA48
label_2fd2d0:
    if (ctx->pc == 0x2FD2D0u) {
        ctx->pc = 0x2FD2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2CCu;
        // 0x2fd2d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2D4u;
        goto label_2fd2d4;
    }
    ctx->pc = 0x2FD2CCu;
    SET_GPR_U32(ctx, 31, 0x2FD2D4u);
    ctx->pc = 0x2FD2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD2CCu;
    // 0x2fd2d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA48u, 0x2FD2CCu, 0x2FD2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD2D4u;
label_2fd2d4:
    // 0x2fd2d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd2d8:
    // 0x2fd2d8: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
label_2fd2dc:
    if (ctx->pc == 0x2FD2DCu) {
        ctx->pc = 0x2FD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2D8u;
        // 0x2fd2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2E0u;
        goto label_2fd2e0;
    }
    ctx->pc = 0x2FD2D8u;
    {
        const bool branch_taken_0x2fd2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FD2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2D8u;
        // 0x2fd2dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2d8) {
            ctx->pc = 0x2FD368u;
            goto label_2fd368;
        }
    }
    ctx->pc = 0x2FD2E0u;
label_2fd2e0:
    // 0x2fd2e0: 0x10000077  b           . + 4 + (0x77 << 2)
label_2fd2e4:
    if (ctx->pc == 0x2FD2E4u) {
        ctx->pc = 0x2FD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2E0u;
        // 0x2fd2e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2E8u;
        goto label_2fd2e8;
    }
    ctx->pc = 0x2FD2E0u;
    {
        const bool branch_taken_0x2fd2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2E0u;
        // 0x2fd2e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2e0) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD2E8u;
label_2fd2e8:
    // 0x2fd2e8: 0xc0a7a72  jal         func_29E9C8
label_2fd2ec:
    if (ctx->pc == 0x2FD2ECu) {
        ctx->pc = 0x2FD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2E8u;
        // 0x2fd2ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2F0u;
        goto label_2fd2f0;
    }
    ctx->pc = 0x2FD2E8u;
    SET_GPR_U32(ctx, 31, 0x2FD2F0u);
    ctx->pc = 0x2FD2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD2E8u;
    // 0x2fd2ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FD2E8u, 0x2FD2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD2F0u;
label_2fd2f0:
    // 0x2fd2f0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
label_2fd2f4:
    if (ctx->pc == 0x2FD2F4u) {
        ctx->pc = 0x2FD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2F0u;
        // 0x2fd2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD2F8u;
        goto label_2fd2f8;
    }
    ctx->pc = 0x2FD2F0u;
    {
        const bool branch_taken_0x2fd2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2F0u;
        // 0x2fd2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2f0) {
            ctx->pc = 0x2FD2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd2e0;
        }
    }
    ctx->pc = 0x2FD2F8u;
label_2fd2f8:
    // 0x2fd2f8: 0xc0a7a92  jal         func_29EA48
label_2fd2fc:
    if (ctx->pc == 0x2FD2FCu) {
        ctx->pc = 0x2FD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2F8u;
        // 0x2fd2fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD300u;
        goto label_2fd300;
    }
    ctx->pc = 0x2FD2F8u;
    SET_GPR_U32(ctx, 31, 0x2FD300u);
    ctx->pc = 0x2FD2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD2F8u;
    // 0x2fd2fc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA48u, 0x2FD2F8u, 0x2FD300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD300u;
label_2fd300:
    // 0x2fd300: 0x14500019  bne         $v0, $s0, . + 4 + (0x19 << 2)
label_2fd304:
    if (ctx->pc == 0x2FD304u) {
        ctx->pc = 0x2FD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD300u;
        // 0x2fd304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD308u;
        goto label_2fd308;
    }
    ctx->pc = 0x2FD300u;
    {
        const bool branch_taken_0x2fd300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FD304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD300u;
        // 0x2fd304: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd300) {
            ctx->pc = 0x2FD368u;
            goto label_2fd368;
        }
    }
    ctx->pc = 0x2FD308u;
label_2fd308:
    // 0x2fd308: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2fd30c:
    if (ctx->pc == 0x2FD30Cu) {
        ctx->pc = 0x2FD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD308u;
        // 0x2fd30c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD310u;
        goto label_2fd310;
    }
    ctx->pc = 0x2FD308u;
    {
        const bool branch_taken_0x2fd308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD308u;
        // 0x2fd30c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd308) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD310u;
label_2fd310:
    // 0x2fd310: 0xc0a7a72  jal         func_29E9C8
label_2fd314:
    if (ctx->pc == 0x2FD314u) {
        ctx->pc = 0x2FD314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD310u;
        // 0x2fd314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD318u;
        goto label_2fd318;
    }
    ctx->pc = 0x2FD310u;
    SET_GPR_U32(ctx, 31, 0x2FD318u);
    ctx->pc = 0x2FD314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD310u;
    // 0x2fd314: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FD310u, 0x2FD318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD318u;
label_2fd318:
    // 0x2fd318: 0x1450000b  bne         $v0, $s0, . + 4 + (0xB << 2)
label_2fd31c:
    if (ctx->pc == 0x2FD31Cu) {
        ctx->pc = 0x2FD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD318u;
        // 0x2fd31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD320u;
        goto label_2fd320;
    }
    ctx->pc = 0x2FD318u;
    {
        const bool branch_taken_0x2fd318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD318u;
        // 0x2fd31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd318) {
            ctx->pc = 0x2FD348u;
            goto label_2fd348;
        }
    }
    ctx->pc = 0x2FD320u;
label_2fd320:
    // 0x2fd320: 0xc0a7a72  jal         func_29E9C8
label_2fd324:
    if (ctx->pc == 0x2FD324u) {
        ctx->pc = 0x2FD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD320u;
        // 0x2fd324: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD328u;
        goto label_2fd328;
    }
    ctx->pc = 0x2FD320u;
    SET_GPR_U32(ctx, 31, 0x2FD328u);
    ctx->pc = 0x2FD324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD320u;
    // 0x2fd324: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FD320u, 0x2FD328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD328u;
label_2fd328:
    // 0x2fd328: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
label_2fd32c:
    if (ctx->pc == 0x2FD32Cu) {
        ctx->pc = 0x2FD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD328u;
        // 0x2fd32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD330u;
        goto label_2fd330;
    }
    ctx->pc = 0x2FD328u;
    {
        const bool branch_taken_0x2fd328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD328u;
        // 0x2fd32c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd328) {
            ctx->pc = 0x2FD2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd2c4;
        }
    }
    ctx->pc = 0x2FD330u;
label_2fd330:
    // 0x2fd330: 0xc0a7a72  jal         func_29E9C8
label_2fd334:
    if (ctx->pc == 0x2FD334u) {
        ctx->pc = 0x2FD334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD330u;
        // 0x2fd334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD338u;
        goto label_2fd338;
    }
    ctx->pc = 0x2FD330u;
    SET_GPR_U32(ctx, 31, 0x2FD338u);
    ctx->pc = 0x2FD334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD330u;
    // 0x2fd334: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E9C8u, 0x2FD330u, 0x2FD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD338u;
label_2fd338:
    // 0x2fd338: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2fd33c:
    if (ctx->pc == 0x2FD33Cu) {
        ctx->pc = 0x2FD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD338u;
        // 0x2fd33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD340u;
        goto label_2fd340;
    }
    ctx->pc = 0x2FD338u;
    {
        const bool branch_taken_0x2fd338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD338u;
        // 0x2fd33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd338) {
            ctx->pc = 0x2FD368u;
            goto label_2fd368;
        }
    }
    ctx->pc = 0x2FD340u;
label_2fd340:
    // 0x2fd340: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2fd344:
    if (ctx->pc == 0x2FD344u) {
        ctx->pc = 0x2FD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD340u;
        // 0x2fd344: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD348u;
        goto label_2fd348;
    }
    ctx->pc = 0x2FD340u;
    {
        const bool branch_taken_0x2fd340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD340u;
        // 0x2fd344: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd340) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD348u;
label_2fd348:
    // 0x2fd348: 0xc0a7a92  jal         func_29EA48
label_2fd34c:
    if (ctx->pc == 0x2FD34Cu) {
        ctx->pc = 0x2FD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD348u;
        // 0x2fd34c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD350u;
        goto label_2fd350;
    }
    ctx->pc = 0x2FD348u;
    SET_GPR_U32(ctx, 31, 0x2FD350u);
    ctx->pc = 0x2FD34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD348u;
    // 0x2fd34c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA48u, 0x2FD348u, 0x2FD350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD350u;
label_2fd350:
    // 0x2fd350: 0x1050ffdc  beq         $v0, $s0, . + 4 + (-0x24 << 2)
label_2fd354:
    if (ctx->pc == 0x2FD354u) {
        ctx->pc = 0x2FD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD350u;
        // 0x2fd354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD358u;
        goto label_2fd358;
    }
    ctx->pc = 0x2FD350u;
    {
        const bool branch_taken_0x2fd350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2FD354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD350u;
        // 0x2fd354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd350) {
            ctx->pc = 0x2FD2C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd2c4;
        }
    }
    ctx->pc = 0x2FD358u;
label_2fd358:
    // 0x2fd358: 0xc0a7a92  jal         func_29EA48
label_2fd35c:
    if (ctx->pc == 0x2FD35Cu) {
        ctx->pc = 0x2FD35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD358u;
        // 0x2fd35c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD360u;
        goto label_2fd360;
    }
    ctx->pc = 0x2FD358u;
    SET_GPR_U32(ctx, 31, 0x2FD360u);
    ctx->pc = 0x2FD35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD358u;
    // 0x2fd35c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA48u, 0x2FD358u, 0x2FD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD360u;
label_2fd360:
    // 0x2fd360: 0x1050ffdf  beq         $v0, $s0, . + 4 + (-0x21 << 2)
label_2fd364:
    if (ctx->pc == 0x2FD364u) {
        ctx->pc = 0x2FD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD360u;
        // 0x2fd364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD368u;
        goto label_2fd368;
    }
    ctx->pc = 0x2FD360u;
    {
        const bool branch_taken_0x2fd360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2FD364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD360u;
        // 0x2fd364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd360) {
            ctx->pc = 0x2FD2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd2e0;
        }
    }
    ctx->pc = 0x2FD368u;
label_2fd368:
    // 0x2fd368: 0xc0a7a60  jal         func_29E980
label_2fd36c:
    if (ctx->pc == 0x2FD36Cu) {
        ctx->pc = 0x2FD36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD368u;
        // 0x2fd36c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD370u;
        goto label_2fd370;
    }
    ctx->pc = 0x2FD368u;
    SET_GPR_U32(ctx, 31, 0x2FD370u);
    ctx->pc = 0x2FD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD368u;
    // 0x2fd36c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E980u, 0x2FD368u, 0x2FD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD370u;
label_2fd370:
    // 0x2fd370: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2fd370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2fd374:
    // 0x2fd374: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fd374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd378:
    // 0x2fd378: 0xc0a7a60  jal         func_29E980
label_2fd37c:
    if (ctx->pc == 0x2FD37Cu) {
        ctx->pc = 0x2FD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD378u;
        // 0x2fd37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD380u;
        goto label_2fd380;
    }
    ctx->pc = 0x2FD378u;
    SET_GPR_U32(ctx, 31, 0x2FD380u);
    ctx->pc = 0x2FD37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD378u;
    // 0x2fd37c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E980u, 0x2FD378u, 0x2FD380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD380u;
label_2fd380:
    // 0x2fd380: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x2fd380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2fd384:
    // 0x2fd384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fd384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd388:
    // 0x2fd388: 0xc0a7a60  jal         func_29E980
label_2fd38c:
    if (ctx->pc == 0x2FD38Cu) {
        ctx->pc = 0x2FD38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD388u;
        // 0x2fd38c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD390u;
        goto label_2fd390;
    }
    ctx->pc = 0x2FD388u;
    SET_GPR_U32(ctx, 31, 0x2FD390u);
    ctx->pc = 0x2FD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD388u;
    // 0x2fd38c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E980u, 0x2FD388u, 0x2FD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD390u;
label_2fd390:
    // 0x2fd390: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2fd390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2fd394:
    // 0x2fd394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fd394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd398:
    // 0x2fd398: 0xc0a7a60  jal         func_29E980
label_2fd39c:
    if (ctx->pc == 0x2FD39Cu) {
        ctx->pc = 0x2FD39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD398u;
        // 0x2fd39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD3A0u;
        goto label_2fd3a0;
    }
    ctx->pc = 0x2FD398u;
    SET_GPR_U32(ctx, 31, 0x2FD3A0u);
    ctx->pc = 0x2FD39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD398u;
    // 0x2fd39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E980u, 0x2FD398u, 0x2FD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD3A0u;
label_2fd3a0:
    // 0x2fd3a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2fd3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2fd3a4:
    // 0x2fd3a4: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2fd3a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2fd3a8:
    // 0x2fd3a8: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_2fd3ac:
    if (ctx->pc == 0x2FD3ACu) {
        ctx->pc = 0x2FD3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3A8u;
        // 0x2fd3ac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD3B0u;
        goto label_2fd3b0;
    }
    ctx->pc = 0x2FD3A8u;
    {
        const bool branch_taken_0x2fd3a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3A8u;
        // 0x2fd3ac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3a8) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD3B0u;
label_2fd3b0:
    // 0x2fd3b0: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2fd3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2fd3b4:
    // 0x2fd3b4: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_2fd3b8:
    if (ctx->pc == 0x2FD3B8u) {
        ctx->pc = 0x2FD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3B4u;
        // 0x2fd3b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD3BCu;
        goto label_2fd3bc;
    }
    ctx->pc = 0x2FD3B4u;
    {
        const bool branch_taken_0x2fd3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3B4u;
        // 0x2fd3b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3b4) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD3BCu;
label_2fd3bc:
    // 0x2fd3bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fd3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fd3c0:
    // 0x2fd3c0: 0xc088e58  jal         func_223960
label_2fd3c4:
    if (ctx->pc == 0x2FD3C4u) {
        ctx->pc = 0x2FD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3C0u;
        // 0x2fd3c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD3C8u;
        goto label_2fd3c8;
    }
    ctx->pc = 0x2FD3C0u;
    SET_GPR_U32(ctx, 31, 0x2FD3C8u);
    ctx->pc = 0x2FD3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD3C0u;
    // 0x2fd3c4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x2FD3C0u, 0x2FD3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD3C8u;
label_2fd3c8:
    // 0x2fd3c8: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
label_2fd3cc:
    if (ctx->pc == 0x2FD3CCu) {
        ctx->pc = 0x2FD3D0u;
        goto label_2fd3d0;
    }
    ctx->pc = 0x2FD3C8u;
    {
        const bool branch_taken_0x2fd3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x2fd3c8) {
            ctx->pc = 0x2FD3E0u;
            goto label_2fd3e0;
        }
    }
    ctx->pc = 0x2FD3D0u;
label_2fd3d0:
    // 0x2fd3d0: 0xc088e70  jal         func_2239C0
label_2fd3d4:
    if (ctx->pc == 0x2FD3D4u) {
        ctx->pc = 0x2FD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3D0u;
        // 0x2fd3d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD3D8u;
        goto label_2fd3d8;
    }
    ctx->pc = 0x2FD3D0u;
    SET_GPR_U32(ctx, 31, 0x2FD3D8u);
    ctx->pc = 0x2FD3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD3D0u;
    // 0x2fd3d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x2FD3D0u, 0x2FD3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD3D8u;
label_2fd3d8:
    // 0x2fd3d8: 0x14500039  bne         $v0, $s0, . + 4 + (0x39 << 2)
label_2fd3dc:
    if (ctx->pc == 0x2FD3DCu) {
        ctx->pc = 0x2FD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3D8u;
        // 0x2fd3dc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD3E0u;
        goto label_2fd3e0;
    }
    ctx->pc = 0x2FD3D8u;
    {
        const bool branch_taken_0x2fd3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3D8u;
        // 0x2fd3dc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3d8) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD3E0u;
label_2fd3e0:
    // 0x2fd3e0: 0xc087502  jal         func_21D408
label_2fd3e4:
    if (ctx->pc == 0x2FD3E4u) {
        ctx->pc = 0x2FD3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3E0u;
        // 0x2fd3e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD3E8u;
        goto label_2fd3e8;
    }
    ctx->pc = 0x2FD3E0u;
    SET_GPR_U32(ctx, 31, 0x2FD3E8u);
    ctx->pc = 0x2FD3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD3E0u;
    // 0x2fd3e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2FD3E0u, 0x2FD3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD3E8u;
label_2fd3e8:
    // 0x2fd3e8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2fd3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd3ec:
    // 0x2fd3ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fd3ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd3f0:
    // 0x2fd3f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fd3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd3f4:
    // 0x2fd3f4: 0xc0a404e  jal         func_290138
label_2fd3f8:
    if (ctx->pc == 0x2FD3F8u) {
        ctx->pc = 0x2FD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3F4u;
        // 0x2fd3f8: 0x8c950000  lw          $s5, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD3FCu;
        goto label_2fd3fc;
    }
    ctx->pc = 0x2FD3F4u;
    SET_GPR_U32(ctx, 31, 0x2FD3FCu);
    ctx->pc = 0x2FD3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD3F4u;
    // 0x2fd3f8: 0x8c950000  lw          $s5, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290138u, 0x2FD3F4u, 0x2FD3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD3FCu;
label_2fd3fc:
    // 0x2fd3fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fd3fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd400:
    // 0x2fd400: 0x1650002f  bne         $s2, $s0, . + 4 + (0x2F << 2)
label_2fd404:
    if (ctx->pc == 0x2FD404u) {
        ctx->pc = 0x2FD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD400u;
        // 0x2fd404: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD408u;
        goto label_2fd408;
    }
    ctx->pc = 0x2FD400u;
    {
        const bool branch_taken_0x2fd400 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x2FD404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD400u;
        // 0x2fd404: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd400) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD408u;
label_2fd408:
    // 0x2fd408: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x2fd408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2fd40c:
    // 0x2fd40c: 0xc0a3fa4  jal         func_28FE90
label_2fd410:
    if (ctx->pc == 0x2FD410u) {
        ctx->pc = 0x2FD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD40Cu;
        // 0x2fd410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD414u;
        goto label_2fd414;
    }
    ctx->pc = 0x2FD40Cu;
    SET_GPR_U32(ctx, 31, 0x2FD414u);
    ctx->pc = 0x2FD410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD40Cu;
    // 0x2fd410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE90u, 0x2FD40Cu, 0x2FD414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD414u;
label_2fd414:
    // 0x2fd414: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2fd414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2fd418:
    // 0x2fd418: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fd418u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fd41c:
    // 0x2fd41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fd420:
    // 0x2fd420: 0x84c500a8  lh          $a1, 0xA8($a2)
    ctx->pc = 0x2fd420u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 168)));
label_2fd424:
    // 0x2fd424: 0x8cc300ac  lw          $v1, 0xAC($a2)
    ctx->pc = 0x2fd424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 172)));
label_2fd428:
    // 0x2fd428: 0x60f809  jalr        $v1
label_2fd42c:
    if (ctx->pc == 0x2FD42Cu) {
        ctx->pc = 0x2FD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD428u;
        // 0x2fd42c: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD430u;
        goto label_2fd430;
    }
    ctx->pc = 0x2FD428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2FD430u);
        ctx->pc = 0x2FD42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD428u;
        // 0x2fd42c: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD428u, 0x2FD430u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FD430u;
label_2fd430:
    // 0x2fd430: 0x86a20092  lh          $v0, 0x92($s5)
    ctx->pc = 0x2fd430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
label_2fd434:
    // 0x2fd434: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x2fd434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
label_2fd438:
    // 0x2fd438: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x2fd438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
label_2fd43c:
    // 0x2fd43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fd440:
    // 0x2fd440: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2fd440u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2fd444:
    // 0x2fd444: 0xc0a7ac4  jal         func_29EB10
label_2fd448:
    if (ctx->pc == 0x2FD448u) {
        ctx->pc = 0x2FD448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD444u;
        // 0x2fd448: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD44Cu;
        goto label_2fd44c;
    }
    ctx->pc = 0x2FD444u;
    SET_GPR_U32(ctx, 31, 0x2FD44Cu);
    ctx->pc = 0x2FD448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD444u;
    // 0x2fd448: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EB10u, 0x2FD444u, 0x2FD44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD44Cu;
label_2fd44c:
    // 0x2fd44c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fd44cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd450:
    // 0x2fd450: 0xc088e58  jal         func_223960
label_2fd454:
    if (ctx->pc == 0x2FD454u) {
        ctx->pc = 0x2FD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD450u;
        // 0x2fd454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD458u;
        goto label_2fd458;
    }
    ctx->pc = 0x2FD450u;
    SET_GPR_U32(ctx, 31, 0x2FD458u);
    ctx->pc = 0x2FD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD450u;
    // 0x2fd454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x2FD450u, 0x2FD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD458u;
label_2fd458:
    // 0x2fd458: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
label_2fd45c:
    if (ctx->pc == 0x2FD45Cu) {
        ctx->pc = 0x2FD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD458u;
        // 0x2fd45c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD460u;
        goto label_2fd460;
    }
    ctx->pc = 0x2FD458u;
    {
        const bool branch_taken_0x2fd458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2FD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD458u;
        // 0x2fd45c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd458) {
            ctx->pc = 0x2FD470u;
            goto label_2fd470;
        }
    }
    ctx->pc = 0x2FD460u;
label_2fd460:
    // 0x2fd460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fd460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd464:
    // 0x2fd464: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x2fd464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fd468:
    // 0x2fd468: 0x10000003  b           . + 4 + (0x3 << 2)
label_2fd46c:
    if (ctx->pc == 0x2FD46Cu) {
        ctx->pc = 0x2FD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD468u;
        // 0x2fd46c: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD470u;
        goto label_2fd470;
    }
    ctx->pc = 0x2FD468u;
    {
        const bool branch_taken_0x2fd468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD468u;
        // 0x2fd46c: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd468) {
            ctx->pc = 0x2FD478u;
            goto label_2fd478;
        }
    }
    ctx->pc = 0x2FD470u;
label_2fd470:
    // 0x2fd470: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x2fd470u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2fd474:
    // 0x2fd474: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2fd474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fd478:
    // 0x2fd478: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_2fd47c:
    if (ctx->pc == 0x2FD47Cu) {
        ctx->pc = 0x2FD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD478u;
        // 0x2fd47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD480u;
        goto label_2fd480;
    }
    ctx->pc = 0x2FD478u;
    {
        const bool branch_taken_0x2fd478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD478u;
        // 0x2fd47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd478) {
            ctx->pc = 0x2FD4BCu;
            goto label_2fd4bc;
        }
    }
    ctx->pc = 0x2FD480u;
label_2fd480:
    // 0x2fd480: 0xc0a446a  jal         func_2911A8
label_2fd484:
    if (ctx->pc == 0x2FD484u) {
        ctx->pc = 0x2FD484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD480u;
        // 0x2fd484: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD488u;
        goto label_2fd488;
    }
    ctx->pc = 0x2FD480u;
    SET_GPR_U32(ctx, 31, 0x2FD488u);
    ctx->pc = 0x2FD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD480u;
    // 0x2fd484: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911A8u, 0x2FD480u, 0x2FD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD488u;
label_2fd488:
    // 0x2fd488: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd48c:
    // 0x2fd48c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_2fd490:
    if (ctx->pc == 0x2FD490u) {
        ctx->pc = 0x2FD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD48Cu;
        // 0x2fd490: 0x2a030005  slti        $v1, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD494u;
        goto label_2fd494;
    }
    ctx->pc = 0x2FD48Cu;
    {
        const bool branch_taken_0x2fd48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FD490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD48Cu;
        // 0x2fd490: 0x2a030005  slti        $v1, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd48c) {
            ctx->pc = 0x2FD4B0u;
            goto label_2fd4b0;
        }
    }
    ctx->pc = 0x2FD494u;
label_2fd494:
    // 0x2fd494: 0x92650025  lbu         $a1, 0x25($s3)
    ctx->pc = 0x2fd494u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 37)));
label_2fd498:
    // 0x2fd498: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2fd498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd49c:
    // 0x2fd49c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2fd49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2fd4a0:
    // 0x2fd4a0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2fd4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2fd4a4:
    // 0x2fd4a4: 0xc0a337e  jal         func_28CDF8
label_2fd4a8:
    if (ctx->pc == 0x2FD4A8u) {
        ctx->pc = 0x2FD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4A4u;
        // 0x2fd4a8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD4ACu;
        goto label_2fd4ac;
    }
    ctx->pc = 0x2FD4A4u;
    SET_GPR_U32(ctx, 31, 0x2FD4ACu);
    ctx->pc = 0x2FD4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD4A4u;
    // 0x2fd4a8: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2FD4A4u, 0x2FD4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD4ACu;
label_2fd4ac:
    // 0x2fd4ac: 0x2a030005  slti        $v1, $s0, 0x5
    ctx->pc = 0x2fd4acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
label_2fd4b0:
    // 0x2fd4b0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2fd4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fd4b4:
    // 0x2fd4b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2fd4b8:
    if (ctx->pc == 0x2FD4B8u) {
        ctx->pc = 0x2FD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4B4u;
        // 0x2fd4b8: 0x243100a  movz        $v0, $s2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD4BCu;
        goto label_2fd4bc;
    }
    ctx->pc = 0x2FD4B4u;
    {
        const bool branch_taken_0x2fd4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4B4u;
        // 0x2fd4b8: 0x243100a  movz        $v0, $s2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd4b4) {
            ctx->pc = 0x2FD4C0u;
            goto label_2fd4c0;
        }
    }
    ctx->pc = 0x2FD4BCu;
label_2fd4bc:
    // 0x2fd4bc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2fd4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2fd4c0:
    // 0x2fd4c0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2fd4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2fd4c4:
    // 0x2fd4c4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2fd4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2fd4c8:
    // 0x2fd4c8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2fd4c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2fd4cc:
    // 0x2fd4cc: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2fd4ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2fd4d0:
    // 0x2fd4d0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2fd4d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fd4d4:
    // 0x2fd4d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fd4d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fd4d8:
    // 0x2fd4d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2fd4d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fd4dc:
    // 0x2fd4dc: 0x3e00008  jr          $ra
label_2fd4e0:
    if (ctx->pc == 0x2FD4E0u) {
        ctx->pc = 0x2FD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4DCu;
        // 0x2fd4e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FD4E4u;
        goto label_2fd4e4;
    }
    ctx->pc = 0x2FD4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4DCu;
        // 0x2fd4e0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD4E4u;
label_2fd4e4:
    // 0x2fd4e4: 0x0  nop
    ctx->pc = 0x2fd4e4u;
    // NOP
    ctx->pc = 0x2fd4e8u;
}
