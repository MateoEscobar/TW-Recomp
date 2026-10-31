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

// Function: sub_0015E238
// Address: 0x15e238 - 0x15e530
void sub_0015E238_0x15e238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E238_0x15e238");
#endif

    switch (ctx->pc) {
        case 0x15e238u: goto label_15e238;
        case 0x15e23cu: goto label_15e23c;
        case 0x15e240u: goto label_15e240;
        case 0x15e244u: goto label_15e244;
        case 0x15e248u: goto label_15e248;
        case 0x15e24cu: goto label_15e24c;
        case 0x15e250u: goto label_15e250;
        case 0x15e254u: goto label_15e254;
        case 0x15e258u: goto label_15e258;
        case 0x15e25cu: goto label_15e25c;
        case 0x15e260u: goto label_15e260;
        case 0x15e264u: goto label_15e264;
        case 0x15e268u: goto label_15e268;
        case 0x15e26cu: goto label_15e26c;
        case 0x15e270u: goto label_15e270;
        case 0x15e274u: goto label_15e274;
        case 0x15e278u: goto label_15e278;
        case 0x15e27cu: goto label_15e27c;
        case 0x15e280u: goto label_15e280;
        case 0x15e284u: goto label_15e284;
        case 0x15e288u: goto label_15e288;
        case 0x15e28cu: goto label_15e28c;
        case 0x15e290u: goto label_15e290;
        case 0x15e294u: goto label_15e294;
        case 0x15e298u: goto label_15e298;
        case 0x15e29cu: goto label_15e29c;
        case 0x15e2a0u: goto label_15e2a0;
        case 0x15e2a4u: goto label_15e2a4;
        case 0x15e2a8u: goto label_15e2a8;
        case 0x15e2acu: goto label_15e2ac;
        case 0x15e2b0u: goto label_15e2b0;
        case 0x15e2b4u: goto label_15e2b4;
        case 0x15e2b8u: goto label_15e2b8;
        case 0x15e2bcu: goto label_15e2bc;
        case 0x15e2c0u: goto label_15e2c0;
        case 0x15e2c4u: goto label_15e2c4;
        case 0x15e2c8u: goto label_15e2c8;
        case 0x15e2ccu: goto label_15e2cc;
        case 0x15e2d0u: goto label_15e2d0;
        case 0x15e2d4u: goto label_15e2d4;
        case 0x15e2d8u: goto label_15e2d8;
        case 0x15e2dcu: goto label_15e2dc;
        case 0x15e2e0u: goto label_15e2e0;
        case 0x15e2e4u: goto label_15e2e4;
        case 0x15e2e8u: goto label_15e2e8;
        case 0x15e2ecu: goto label_15e2ec;
        case 0x15e2f0u: goto label_15e2f0;
        case 0x15e2f4u: goto label_15e2f4;
        case 0x15e2f8u: goto label_15e2f8;
        case 0x15e2fcu: goto label_15e2fc;
        case 0x15e300u: goto label_15e300;
        case 0x15e304u: goto label_15e304;
        case 0x15e308u: goto label_15e308;
        case 0x15e30cu: goto label_15e30c;
        case 0x15e310u: goto label_15e310;
        case 0x15e314u: goto label_15e314;
        case 0x15e318u: goto label_15e318;
        case 0x15e31cu: goto label_15e31c;
        case 0x15e320u: goto label_15e320;
        case 0x15e324u: goto label_15e324;
        case 0x15e328u: goto label_15e328;
        case 0x15e32cu: goto label_15e32c;
        case 0x15e330u: goto label_15e330;
        case 0x15e334u: goto label_15e334;
        case 0x15e338u: goto label_15e338;
        case 0x15e33cu: goto label_15e33c;
        case 0x15e340u: goto label_15e340;
        case 0x15e344u: goto label_15e344;
        case 0x15e348u: goto label_15e348;
        case 0x15e34cu: goto label_15e34c;
        case 0x15e350u: goto label_15e350;
        case 0x15e354u: goto label_15e354;
        case 0x15e358u: goto label_15e358;
        case 0x15e35cu: goto label_15e35c;
        case 0x15e360u: goto label_15e360;
        case 0x15e364u: goto label_15e364;
        case 0x15e368u: goto label_15e368;
        case 0x15e36cu: goto label_15e36c;
        case 0x15e370u: goto label_15e370;
        case 0x15e374u: goto label_15e374;
        case 0x15e378u: goto label_15e378;
        case 0x15e37cu: goto label_15e37c;
        case 0x15e380u: goto label_15e380;
        case 0x15e384u: goto label_15e384;
        case 0x15e388u: goto label_15e388;
        case 0x15e38cu: goto label_15e38c;
        case 0x15e390u: goto label_15e390;
        case 0x15e394u: goto label_15e394;
        case 0x15e398u: goto label_15e398;
        case 0x15e39cu: goto label_15e39c;
        case 0x15e3a0u: goto label_15e3a0;
        case 0x15e3a4u: goto label_15e3a4;
        case 0x15e3a8u: goto label_15e3a8;
        case 0x15e3acu: goto label_15e3ac;
        case 0x15e3b0u: goto label_15e3b0;
        case 0x15e3b4u: goto label_15e3b4;
        case 0x15e3b8u: goto label_15e3b8;
        case 0x15e3bcu: goto label_15e3bc;
        case 0x15e3c0u: goto label_15e3c0;
        case 0x15e3c4u: goto label_15e3c4;
        case 0x15e3c8u: goto label_15e3c8;
        case 0x15e3ccu: goto label_15e3cc;
        case 0x15e3d0u: goto label_15e3d0;
        case 0x15e3d4u: goto label_15e3d4;
        case 0x15e3d8u: goto label_15e3d8;
        case 0x15e3dcu: goto label_15e3dc;
        case 0x15e3e0u: goto label_15e3e0;
        case 0x15e3e4u: goto label_15e3e4;
        case 0x15e3e8u: goto label_15e3e8;
        case 0x15e3ecu: goto label_15e3ec;
        case 0x15e3f0u: goto label_15e3f0;
        case 0x15e3f4u: goto label_15e3f4;
        case 0x15e3f8u: goto label_15e3f8;
        case 0x15e3fcu: goto label_15e3fc;
        case 0x15e400u: goto label_15e400;
        case 0x15e404u: goto label_15e404;
        case 0x15e408u: goto label_15e408;
        case 0x15e40cu: goto label_15e40c;
        case 0x15e410u: goto label_15e410;
        case 0x15e414u: goto label_15e414;
        case 0x15e418u: goto label_15e418;
        case 0x15e41cu: goto label_15e41c;
        case 0x15e420u: goto label_15e420;
        case 0x15e424u: goto label_15e424;
        case 0x15e428u: goto label_15e428;
        case 0x15e42cu: goto label_15e42c;
        case 0x15e430u: goto label_15e430;
        case 0x15e434u: goto label_15e434;
        case 0x15e438u: goto label_15e438;
        case 0x15e43cu: goto label_15e43c;
        case 0x15e440u: goto label_15e440;
        case 0x15e444u: goto label_15e444;
        case 0x15e448u: goto label_15e448;
        case 0x15e44cu: goto label_15e44c;
        case 0x15e450u: goto label_15e450;
        case 0x15e454u: goto label_15e454;
        case 0x15e458u: goto label_15e458;
        case 0x15e45cu: goto label_15e45c;
        case 0x15e460u: goto label_15e460;
        case 0x15e464u: goto label_15e464;
        case 0x15e468u: goto label_15e468;
        case 0x15e46cu: goto label_15e46c;
        case 0x15e470u: goto label_15e470;
        case 0x15e474u: goto label_15e474;
        case 0x15e478u: goto label_15e478;
        case 0x15e47cu: goto label_15e47c;
        case 0x15e480u: goto label_15e480;
        case 0x15e484u: goto label_15e484;
        case 0x15e488u: goto label_15e488;
        case 0x15e48cu: goto label_15e48c;
        case 0x15e490u: goto label_15e490;
        case 0x15e494u: goto label_15e494;
        case 0x15e498u: goto label_15e498;
        case 0x15e49cu: goto label_15e49c;
        case 0x15e4a0u: goto label_15e4a0;
        case 0x15e4a4u: goto label_15e4a4;
        case 0x15e4a8u: goto label_15e4a8;
        case 0x15e4acu: goto label_15e4ac;
        case 0x15e4b0u: goto label_15e4b0;
        case 0x15e4b4u: goto label_15e4b4;
        case 0x15e4b8u: goto label_15e4b8;
        case 0x15e4bcu: goto label_15e4bc;
        case 0x15e4c0u: goto label_15e4c0;
        case 0x15e4c4u: goto label_15e4c4;
        case 0x15e4c8u: goto label_15e4c8;
        case 0x15e4ccu: goto label_15e4cc;
        case 0x15e4d0u: goto label_15e4d0;
        case 0x15e4d4u: goto label_15e4d4;
        case 0x15e4d8u: goto label_15e4d8;
        case 0x15e4dcu: goto label_15e4dc;
        case 0x15e4e0u: goto label_15e4e0;
        case 0x15e4e4u: goto label_15e4e4;
        case 0x15e4e8u: goto label_15e4e8;
        case 0x15e4ecu: goto label_15e4ec;
        case 0x15e4f0u: goto label_15e4f0;
        case 0x15e4f4u: goto label_15e4f4;
        case 0x15e4f8u: goto label_15e4f8;
        case 0x15e4fcu: goto label_15e4fc;
        case 0x15e500u: goto label_15e500;
        case 0x15e504u: goto label_15e504;
        case 0x15e508u: goto label_15e508;
        case 0x15e50cu: goto label_15e50c;
        case 0x15e510u: goto label_15e510;
        case 0x15e514u: goto label_15e514;
        case 0x15e518u: goto label_15e518;
        case 0x15e51cu: goto label_15e51c;
        case 0x15e520u: goto label_15e520;
        case 0x15e524u: goto label_15e524;
        case 0x15e528u: goto label_15e528;
        case 0x15e52cu: goto label_15e52c;
        default: break;
    }

    ctx->pc = 0x15e238u;

label_15e238:
    // 0x15e238: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x15e238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_15e23c:
    // 0x15e23c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15e240:
    // 0x15e240: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x15e240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_15e244:
    // 0x15e244: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15e244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e248:
    // 0x15e248: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15e248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15e24c:
    // 0x15e24c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x15e24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_15e250:
    // 0x15e250: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x15e250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_15e254:
    // 0x15e254: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15e254u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15e258:
    // 0x15e258: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x15e258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_15e25c:
    // 0x15e25c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x15e25cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_15e260:
    // 0x15e260: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x15e260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_15e264:
    // 0x15e264: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x15e264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_15e268:
    // 0x15e268: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x15e268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_15e26c:
    // 0x15e26c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x15e26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_15e270:
    // 0x15e270: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x15e270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_15e274:
    // 0x15e274: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x15e274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
label_15e278:
    // 0x15e278: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15e278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15e27c:
    // 0x15e27c: 0xc0517d8  jal         func_145F60
label_15e280:
    if (ctx->pc == 0x15E280u) {
        ctx->pc = 0x15E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E27Cu;
        // 0x15e280: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E284u;
        goto label_15e284;
    }
    ctx->pc = 0x15E27Cu;
    SET_GPR_U32(ctx, 31, 0x15E284u);
    ctx->pc = 0x15E280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E27Cu;
    // 0x15e280: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145F60u, 0x15E27Cu, 0x15E284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E284u;
label_15e284:
    // 0x15e284: 0xc05587e  jal         func_1561F8
label_15e288:
    if (ctx->pc == 0x15E288u) {
        ctx->pc = 0x15E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E284u;
        // 0x15e288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E28Cu;
        goto label_15e28c;
    }
    ctx->pc = 0x15E284u;
    SET_GPR_U32(ctx, 31, 0x15E28Cu);
    ctx->pc = 0x15E288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E284u;
    // 0x15e288: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x15E284u, 0x15E28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E28Cu;
label_15e28c:
    // 0x15e28c: 0xc055888  jal         func_156220
label_15e290:
    if (ctx->pc == 0x15E290u) {
        ctx->pc = 0x15E290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E28Cu;
        // 0x15e290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E294u;
        goto label_15e294;
    }
    ctx->pc = 0x15E28Cu;
    SET_GPR_U32(ctx, 31, 0x15E294u);
    ctx->pc = 0x15E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E28Cu;
    // 0x15e290: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x15E28Cu, 0x15E294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E294u;
label_15e294:
    // 0x15e294: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15e298:
    // 0x15e298: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15e298u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15e29c:
    // 0x15e29c: 0x8c455024  lw          $a1, 0x5024($v0)
    ctx->pc = 0x15e29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20516)));
label_15e2a0:
    // 0x15e2a0: 0x8ca30128  lw          $v1, 0x128($a1)
    ctx->pc = 0x15e2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 296)));
label_15e2a4:
    // 0x15e2a4: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x15e2a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_15e2a8:
    // 0x15e2a8: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x15e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15e2ac:
    // 0x15e2ac: 0x40f809  jalr        $v0
label_15e2b0:
    if (ctx->pc == 0x15E2B0u) {
        ctx->pc = 0x15E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2ACu;
        // 0x15e2b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2B4u;
        goto label_15e2b4;
    }
    ctx->pc = 0x15E2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15E2B4u);
        ctx->pc = 0x15E2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2ACu;
        // 0x15e2b0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E2ACu, 0x15E2B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E2B4u;
label_15e2b4:
    // 0x15e2b4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15e2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15e2b8:
    // 0x15e2b8: 0xc0e8c52  jal         func_3A3148
label_15e2bc:
    if (ctx->pc == 0x15E2BCu) {
        ctx->pc = 0x15E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2B8u;
        // 0x15e2bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2C0u;
        goto label_15e2c0;
    }
    ctx->pc = 0x15E2B8u;
    SET_GPR_U32(ctx, 31, 0x15E2C0u);
    ctx->pc = 0x15E2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2B8u;
    // 0x15e2bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15E2B8u, 0x15E2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2C0u;
label_15e2c0:
    // 0x15e2c0: 0xc0558b2  jal         func_1562C8
label_15e2c4:
    if (ctx->pc == 0x15E2C4u) {
        ctx->pc = 0x15E2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2C0u;
        // 0x15e2c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2C8u;
        goto label_15e2c8;
    }
    ctx->pc = 0x15E2C0u;
    SET_GPR_U32(ctx, 31, 0x15E2C8u);
    ctx->pc = 0x15E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2C0u;
    // 0x15e2c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x15E2C0u, 0x15E2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2C8u;
label_15e2c8:
    // 0x15e2c8: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x15e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_15e2cc:
    // 0x15e2cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e2d0:
    // 0x15e2d0: 0x8c62536c  lw          $v0, 0x536C($v1)
    ctx->pc = 0x15e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21356)));
label_15e2d4:
    // 0x15e2d4: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
label_15e2d8:
    if (ctx->pc == 0x15E2D8u) {
        ctx->pc = 0x15E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2D4u;
        // 0x15e2d8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2DCu;
        goto label_15e2dc;
    }
    ctx->pc = 0x15E2D4u;
    {
        const bool branch_taken_0x15e2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x15e2d4) {
            ctx->pc = 0x15E2D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E2D4u;
            // 0x15e2d8: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E2FCu;
            goto label_15e2fc;
        }
    }
    ctx->pc = 0x15E2DCu;
label_15e2dc:
    // 0x15e2dc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15e2e0:
    // 0x15e2e0: 0xc0e8c6a  jal         func_3A31A8
label_15e2e4:
    if (ctx->pc == 0x15E2E4u) {
        ctx->pc = 0x15E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2E0u;
        // 0x15e2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2E8u;
        goto label_15e2e8;
    }
    ctx->pc = 0x15E2E0u;
    SET_GPR_U32(ctx, 31, 0x15E2E8u);
    ctx->pc = 0x15E2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2E0u;
    // 0x15e2e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x15E2E0u, 0x15E2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2E8u;
label_15e2e8:
    // 0x15e2e8: 0x8e8347c4  lw          $v1, 0x47C4($s4)
    ctx->pc = 0x15e2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
label_15e2ec:
    // 0x15e2ec: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15e2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15e2f0:
    // 0x15e2f0: 0xc0d4456  jal         func_351158
label_15e2f4:
    if (ctx->pc == 0x15E2F4u) {
        ctx->pc = 0x15E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E2F0u;
        // 0x15e2f4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E2F8u;
        goto label_15e2f8;
    }
    ctx->pc = 0x15E2F0u;
    SET_GPR_U32(ctx, 31, 0x15E2F8u);
    ctx->pc = 0x15E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E2F0u;
    // 0x15e2f4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x15E2F0u, 0x15E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E2F8u;
label_15e2f8:
    // 0x15e2f8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15e2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15e2fc:
    // 0x15e2fc: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15e2fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15e300:
    // 0x15e300: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x15e300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_15e304:
    // 0x15e304: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x15e304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15e308:
    // 0x15e308: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x15e308u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e30c:
    // 0x15e30c: 0xc062a60  jal         func_18A980
label_15e310:
    if (ctx->pc == 0x15E310u) {
        ctx->pc = 0x15E310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E30Cu;
        // 0x15e310: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E314u;
        goto label_15e314;
    }
    ctx->pc = 0x15E30Cu;
    SET_GPR_U32(ctx, 31, 0x15E314u);
    ctx->pc = 0x15E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E30Cu;
    // 0x15e310: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x15E30Cu, 0x15E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E314u;
label_15e314:
    // 0x15e314: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x15e314u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_15e318:
    // 0x15e318: 0x8e25cdb4  lw          $a1, -0x324C($s1)
    ctx->pc = 0x15e318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_15e31c:
    // 0x15e31c: 0x26550020  addiu       $s5, $s2, 0x20
    ctx->pc = 0x15e31cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_15e320:
    // 0x15e320: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15e320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15e324:
    // 0x15e324: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15e324u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15e328:
    // 0x15e328: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15e328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15e32c:
    // 0x15e32c: 0x60f809  jalr        $v1
label_15e330:
    if (ctx->pc == 0x15E330u) {
        ctx->pc = 0x15E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E32Cu;
        // 0x15e330: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E334u;
        goto label_15e334;
    }
    ctx->pc = 0x15E32Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E334u);
        ctx->pc = 0x15E330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E32Cu;
        // 0x15e330: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E32Cu, 0x15E334u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E334u;
label_15e334:
    // 0x15e334: 0xc103e28  jal         func_40F8A0
label_15e338:
    if (ctx->pc == 0x15E338u) {
        ctx->pc = 0x15E338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E334u;
        // 0x15e338: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E33Cu;
        goto label_15e33c;
    }
    ctx->pc = 0x15E334u;
    SET_GPR_U32(ctx, 31, 0x15E33Cu);
    ctx->pc = 0x15E338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E334u;
    // 0x15e338: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x15E334u, 0x15E33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E33Cu;
label_15e33c:
    // 0x15e33c: 0xc06181a  jal         func_186068
label_15e340:
    if (ctx->pc == 0x15E340u) {
        ctx->pc = 0x15E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E33Cu;
        // 0x15e340: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E344u;
        goto label_15e344;
    }
    ctx->pc = 0x15E33Cu;
    SET_GPR_U32(ctx, 31, 0x15E344u);
    ctx->pc = 0x15E340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E33Cu;
    // 0x15e340: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x15E33Cu, 0x15E344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E344u;
label_15e344:
    // 0x15e344: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x15e344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15e348:
    // 0x15e348: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x15e348u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15e34c:
    // 0x15e34c: 0x0  nop
    ctx->pc = 0x15e34cu;
    // NOP
label_15e350:
    // 0x15e350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e354:
    // 0x15e354: 0xc047e6c  jal         func_11F9B0
label_15e358:
    if (ctx->pc == 0x15E358u) {
        ctx->pc = 0x15E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E354u;
        // 0x15e358: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E35Cu;
        goto label_15e35c;
    }
    ctx->pc = 0x15E354u;
    SET_GPR_U32(ctx, 31, 0x15E35Cu);
    ctx->pc = 0x15E358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E354u;
    // 0x15e358: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15E354u, 0x15E35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E35Cu;
label_15e35c:
    // 0x15e35c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15e360:
    // 0x15e360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15e360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15e364:
    // 0x15e364: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15e364u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_15e368:
    // 0x15e368: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x15e368u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15e36c:
    // 0x15e36c: 0xc0f809  jalr        $a2
label_15e370:
    if (ctx->pc == 0x15E370u) {
        ctx->pc = 0x15E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E36Cu;
        // 0x15e370: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E374u;
        goto label_15e374;
    }
    ctx->pc = 0x15E36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15E374u);
        ctx->pc = 0x15E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E36Cu;
        // 0x15e370: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E36Cu, 0x15E374u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E374u;
label_15e374:
    // 0x15e374: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15e374u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15e378:
    // 0x15e378: 0x2e640002  sltiu       $a0, $s3, 0x2
    ctx->pc = 0x15e378u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15e37c:
    // 0x15e37c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x15e37cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_15e380:
    // 0x15e380: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x15e380u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15e384:
    // 0x15e384: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15e384u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_15e388:
    // 0x15e388: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_15e38c:
    if (ctx->pc == 0x15E38Cu) {
        ctx->pc = 0x15E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E388u;
        // 0x15e38c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E390u;
        goto label_15e390;
    }
    ctx->pc = 0x15E388u;
    {
        const bool branch_taken_0x15e388 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E388u;
        // 0x15e38c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e388) {
            ctx->pc = 0x15E350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e350;
        }
    }
    ctx->pc = 0x15E390u;
label_15e390:
    // 0x15e390: 0x8fc4aa84  lw          $a0, -0x557C($fp)
    ctx->pc = 0x15e390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945412)));
label_15e394:
    // 0x15e394: 0xc043e04  jal         func_10F810
label_15e398:
    if (ctx->pc == 0x15E398u) {
        ctx->pc = 0x15E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E394u;
        // 0x15e398: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E39Cu;
        goto label_15e39c;
    }
    ctx->pc = 0x15E394u;
    SET_GPR_U32(ctx, 31, 0x15E39Cu);
    ctx->pc = 0x15E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E394u;
    // 0x15e398: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15E394u, 0x15E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E39Cu;
label_15e39c:
    // 0x15e39c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15e3a0:
    // 0x15e3a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e3a4:
    // 0x15e3a4: 0xc05fa98  jal         func_17EA60
label_15e3a8:
    if (ctx->pc == 0x15E3A8u) {
        ctx->pc = 0x15E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3A4u;
        // 0x15e3a8: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3ACu;
        goto label_15e3ac;
    }
    ctx->pc = 0x15E3A4u;
    SET_GPR_U32(ctx, 31, 0x15E3ACu);
    ctx->pc = 0x15E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3A4u;
    // 0x15e3a8: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17EA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17EA60u, 0x15E3A4u, 0x15E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3ACu;
label_15e3ac:
    // 0x15e3ac: 0xc055902  jal         func_156408
label_15e3b0:
    if (ctx->pc == 0x15E3B0u) {
        ctx->pc = 0x15E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3ACu;
        // 0x15e3b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3B4u;
        goto label_15e3b4;
    }
    ctx->pc = 0x15E3ACu;
    SET_GPR_U32(ctx, 31, 0x15E3B4u);
    ctx->pc = 0x15E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3ACu;
    // 0x15e3b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156408u, 0x15E3ACu, 0x15E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3B4u;
label_15e3b4:
    // 0x15e3b4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15e3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15e3b8:
    // 0x15e3b8: 0xc06ba0a  jal         func_1AE828
label_15e3bc:
    if (ctx->pc == 0x15E3BCu) {
        ctx->pc = 0x15E3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3B8u;
        // 0x15e3bc: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3C0u;
        goto label_15e3c0;
    }
    ctx->pc = 0x15E3B8u;
    SET_GPR_U32(ctx, 31, 0x15E3C0u);
    ctx->pc = 0x15E3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3B8u;
    // 0x15e3bc: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x15E3B8u, 0x15E3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3C0u;
label_15e3c0:
    // 0x15e3c0: 0xc0812e8  jal         func_204BA0
label_15e3c4:
    if (ctx->pc == 0x15E3C4u) {
        ctx->pc = 0x15E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3C0u;
        // 0x15e3c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3C8u;
        goto label_15e3c8;
    }
    ctx->pc = 0x15E3C0u;
    SET_GPR_U32(ctx, 31, 0x15E3C8u);
    ctx->pc = 0x15E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3C0u;
    // 0x15e3c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204BA0u, 0x15E3C0u, 0x15E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3C8u;
label_15e3c8:
    // 0x15e3c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15e3c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15e3cc:
    // 0x15e3cc: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x15e3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
label_15e3d0:
    // 0x15e3d0: 0xc055996  jal         func_156658
label_15e3d4:
    if (ctx->pc == 0x15E3D4u) {
        ctx->pc = 0x15E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3D0u;
        // 0x15e3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3D8u;
        goto label_15e3d8;
    }
    ctx->pc = 0x15E3D0u;
    SET_GPR_U32(ctx, 31, 0x15E3D8u);
    ctx->pc = 0x15E3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3D0u;
    // 0x15e3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156658u, 0x15E3D0u, 0x15E3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3D8u;
label_15e3d8:
    // 0x15e3d8: 0xc061748  jal         func_185D20
label_15e3dc:
    if (ctx->pc == 0x15E3DCu) {
        ctx->pc = 0x15E3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3D8u;
        // 0x15e3dc: 0x8ee4cd4c  lw          $a0, -0x32B4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3E0u;
        goto label_15e3e0;
    }
    ctx->pc = 0x15E3D8u;
    SET_GPR_U32(ctx, 31, 0x15E3E0u);
    ctx->pc = 0x15E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E3D8u;
    // 0x15e3dc: 0x8ee4cd4c  lw          $a0, -0x32B4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x15E3D8u, 0x15E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E3E0u;
label_15e3e0:
    // 0x15e3e0: 0x8ec5cdb4  lw          $a1, -0x324C($s6)
    ctx->pc = 0x15e3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_15e3e4:
    // 0x15e3e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15e3e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15e3e8:
    // 0x15e3e8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15e3ec:
    // 0x15e3ec: 0x84440128  lh          $a0, 0x128($v0)
    ctx->pc = 0x15e3ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 296)));
label_15e3f0:
    // 0x15e3f0: 0x8c43012c  lw          $v1, 0x12C($v0)
    ctx->pc = 0x15e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_15e3f4:
    // 0x15e3f4: 0x60f809  jalr        $v1
label_15e3f8:
    if (ctx->pc == 0x15E3F8u) {
        ctx->pc = 0x15E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3F4u;
        // 0x15e3f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E3FCu;
        goto label_15e3fc;
    }
    ctx->pc = 0x15E3F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E3FCu);
        ctx->pc = 0x15E3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E3F4u;
        // 0x15e3f8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E3F4u, 0x15E3FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E3FCu;
label_15e3fc:
    // 0x15e3fc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15e400:
    // 0x15e400: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15e400u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15e404:
    // 0x15e404: 0x8c452b04  lw          $a1, 0x2B04($v0)
    ctx->pc = 0x15e404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_15e408:
    // 0x15e408: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15e408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15e40c:
    // 0x15e40c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x15e40cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_15e410:
    // 0x15e410: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x15e410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_15e414:
    // 0x15e414: 0x60f809  jalr        $v1
label_15e418:
    if (ctx->pc == 0x15E418u) {
        ctx->pc = 0x15E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E414u;
        // 0x15e418: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E41Cu;
        goto label_15e41c;
    }
    ctx->pc = 0x15E414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E41Cu);
        ctx->pc = 0x15E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E414u;
        // 0x15e418: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E414u, 0x15E41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E41Cu;
label_15e41c:
    // 0x15e41c: 0x8ec5cdb4  lw          $a1, -0x324C($s6)
    ctx->pc = 0x15e41cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954420)));
label_15e420:
    // 0x15e420: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15e420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15e424:
    // 0x15e424: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15e424u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15e428:
    // 0x15e428: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15e428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15e42c:
    // 0x15e42c: 0x60f809  jalr        $v1
label_15e430:
    if (ctx->pc == 0x15E430u) {
        ctx->pc = 0x15E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E42Cu;
        // 0x15e430: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E434u;
        goto label_15e434;
    }
    ctx->pc = 0x15E42Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15E434u);
        ctx->pc = 0x15E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E42Cu;
        // 0x15e430: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E42Cu, 0x15E434u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15E434u;
label_15e434:
    // 0x15e434: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15e438:
    // 0x15e438: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15e43c:
    // 0x15e43c: 0xc0552b8  jal         func_154AE0
label_15e440:
    if (ctx->pc == 0x15E440u) {
        ctx->pc = 0x15E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E43Cu;
        // 0x15e440: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E444u;
        goto label_15e444;
    }
    ctx->pc = 0x15E43Cu;
    SET_GPR_U32(ctx, 31, 0x15E444u);
    ctx->pc = 0x15E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E43Cu;
    // 0x15e440: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15E43Cu, 0x15E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E444u;
label_15e444:
    // 0x15e444: 0xc055880  jal         func_156200
label_15e448:
    if (ctx->pc == 0x15E448u) {
        ctx->pc = 0x15E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E444u;
        // 0x15e448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E44Cu;
        goto label_15e44c;
    }
    ctx->pc = 0x15E444u;
    SET_GPR_U32(ctx, 31, 0x15E44Cu);
    ctx->pc = 0x15E448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E444u;
    // 0x15e448: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x15E444u, 0x15E44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E44Cu;
label_15e44c:
    // 0x15e44c: 0xc055a70  jal         func_1569C0
label_15e450:
    if (ctx->pc == 0x15E450u) {
        ctx->pc = 0x15E454u;
        goto label_15e454;
    }
    ctx->pc = 0x15E44Cu;
    SET_GPR_U32(ctx, 31, 0x15E454u);
    ctx->pc = 0x1569C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569C0u, 0x15E44Cu, 0x15E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E454u;
label_15e454:
    // 0x15e454: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x15e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_15e458:
    // 0x15e458: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_15e45c:
    if (ctx->pc == 0x15E45Cu) {
        ctx->pc = 0x15E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E458u;
        // 0x15e45c: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E460u;
        goto label_15e460;
    }
    ctx->pc = 0x15E458u;
    {
        const bool branch_taken_0x15e458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e458) {
            ctx->pc = 0x15E45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E458u;
            // 0x15e45c: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E494u;
            goto label_15e494;
        }
    }
    ctx->pc = 0x15E460u;
label_15e460:
    // 0x15e460: 0xc07f882  jal         func_1FE208
label_15e464:
    if (ctx->pc == 0x15E464u) {
        ctx->pc = 0x15E468u;
        goto label_15e468;
    }
    ctx->pc = 0x15E460u;
    SET_GPR_U32(ctx, 31, 0x15E468u);
    ctx->pc = 0x1FE208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE208u, 0x15E460u, 0x15E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E468u;
label_15e468:
    // 0x15e468: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_15e46c:
    if (ctx->pc == 0x15E46Cu) {
        ctx->pc = 0x15E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E468u;
        // 0x15e46c: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E470u;
        goto label_15e470;
    }
    ctx->pc = 0x15E468u;
    {
        const bool branch_taken_0x15e468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E468u;
        // 0x15e46c: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e468) {
            ctx->pc = 0x15E494u;
            goto label_15e494;
        }
    }
    ctx->pc = 0x15E470u;
label_15e470:
    // 0x15e470: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_15e474:
    if (ctx->pc == 0x15E474u) {
        ctx->pc = 0x15E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E470u;
        // 0x15e474: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E478u;
        goto label_15e478;
    }
    ctx->pc = 0x15E470u;
    {
        const bool branch_taken_0x15e470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E470u;
        // 0x15e474: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e470) {
            ctx->pc = 0x15E49Cu;
            goto label_15e49c;
        }
    }
    ctx->pc = 0x15E478u;
label_15e478:
    // 0x15e478: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15e478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15e47c:
    // 0x15e47c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15e47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15e480:
    // 0x15e480: 0xc062c5a  jal         func_18B168
label_15e484:
    if (ctx->pc == 0x15E484u) {
        ctx->pc = 0x15E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E480u;
        // 0x15e484: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E488u;
        goto label_15e488;
    }
    ctx->pc = 0x15E480u;
    SET_GPR_U32(ctx, 31, 0x15E488u);
    ctx->pc = 0x15E484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E480u;
    // 0x15e484: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15E480u, 0x15E488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E488u;
label_15e488:
    // 0x15e488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e48c:
    // 0x15e48c: 0x10000009  b           . + 4 + (0x9 << 2)
label_15e490:
    if (ctx->pc == 0x15E490u) {
        ctx->pc = 0x15E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E48Cu;
        // 0x15e490: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E494u;
        goto label_15e494;
    }
    ctx->pc = 0x15E48Cu;
    {
        const bool branch_taken_0x15e48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E48Cu;
        // 0x15e490: 0xae4200c4  sw          $v0, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e48c) {
            ctx->pc = 0x15E4B4u;
            goto label_15e4b4;
        }
    }
    ctx->pc = 0x15E494u;
label_15e494:
    // 0x15e494: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_15e498:
    if (ctx->pc == 0x15E498u) {
        ctx->pc = 0x15E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E494u;
        // 0x15e498: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E49Cu;
        goto label_15e49c;
    }
    ctx->pc = 0x15E494u;
    {
        const bool branch_taken_0x15e494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E494u;
        // 0x15e498: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e494) {
            ctx->pc = 0x15E4B4u;
            goto label_15e4b4;
        }
    }
    ctx->pc = 0x15E49Cu;
label_15e49c:
    // 0x15e49c: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x15e49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958776)));
label_15e4a0:
    // 0x15e4a0: 0x8c6401d4  lw          $a0, 0x1D4($v1)
    ctx->pc = 0x15e4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 468)));
label_15e4a4:
    // 0x15e4a4: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_15e4a8:
    if (ctx->pc == 0x15E4A8u) {
        ctx->pc = 0x15E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4A4u;
        // 0x15e4a8: 0x8fc4aa84  lw          $a0, -0x557C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4ACu;
        goto label_15e4ac;
    }
    ctx->pc = 0x15E4A4u;
    {
        const bool branch_taken_0x15e4a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4A4u;
        // 0x15e4a8: 0x8fc4aa84  lw          $a0, -0x557C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4a4) {
            ctx->pc = 0x15E4B4u;
            goto label_15e4b4;
        }
    }
    ctx->pc = 0x15E4ACu;
label_15e4ac:
    // 0x15e4ac: 0xc043eea  jal         func_10FBA8
label_15e4b0:
    if (ctx->pc == 0x15E4B0u) {
        ctx->pc = 0x15E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4ACu;
        // 0x15e4b0: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4B4u;
        goto label_15e4b4;
    }
    ctx->pc = 0x15E4ACu;
    SET_GPR_U32(ctx, 31, 0x15E4B4u);
    ctx->pc = 0x15E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4ACu;
    // 0x15e4b0: 0xae4000c4  sw          $zero, 0xC4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FBA8u, 0x15E4ACu, 0x15E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4B4u;
label_15e4b4:
    // 0x15e4b4: 0xc080fe6  jal         func_203F98
label_15e4b8:
    if (ctx->pc == 0x15E4B8u) {
        ctx->pc = 0x15E4BCu;
        goto label_15e4bc;
    }
    ctx->pc = 0x15E4B4u;
    SET_GPR_U32(ctx, 31, 0x15E4BCu);
    ctx->pc = 0x203F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203F98u, 0x15E4B4u, 0x15E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4BCu;
label_15e4bc:
    // 0x15e4bc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_15e4c0:
    if (ctx->pc == 0x15E4C0u) {
        ctx->pc = 0x15E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4BCu;
        // 0x15e4c0: 0x8e4200c0  lw          $v0, 0xC0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4C4u;
        goto label_15e4c4;
    }
    ctx->pc = 0x15E4BCu;
    {
        const bool branch_taken_0x15e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e4bc) {
            ctx->pc = 0x15E4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E4BCu;
            // 0x15e4c0: 0x8e4200c0  lw          $v0, 0xC0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E4E0u;
            goto label_15e4e0;
        }
    }
    ctx->pc = 0x15E4C4u;
label_15e4c4:
    // 0x15e4c4: 0xc080fea  jal         func_203FA8
label_15e4c8:
    if (ctx->pc == 0x15E4C8u) {
        ctx->pc = 0x15E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4C4u;
        // 0x15e4c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4CCu;
        goto label_15e4cc;
    }
    ctx->pc = 0x15E4C4u;
    SET_GPR_U32(ctx, 31, 0x15E4CCu);
    ctx->pc = 0x15E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4C4u;
    // 0x15e4c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203FA8u, 0x15E4C4u, 0x15E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4CCu;
label_15e4cc:
    // 0x15e4cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15e4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_15e4d0:
    // 0x15e4d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15e4d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_15e4d4:
    // 0x15e4d4: 0xc062c5a  jal         func_18B168
label_15e4d8:
    if (ctx->pc == 0x15E4D8u) {
        ctx->pc = 0x15E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4D4u;
        // 0x15e4d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4DCu;
        goto label_15e4dc;
    }
    ctx->pc = 0x15E4D4u;
    SET_GPR_U32(ctx, 31, 0x15E4DCu);
    ctx->pc = 0x15E4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E4D4u;
    // 0x15e4d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B168u, 0x15E4D4u, 0x15E4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E4DCu;
label_15e4dc:
    // 0x15e4dc: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x15e4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_15e4e0:
    // 0x15e4e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_15e4e4:
    if (ctx->pc == 0x15E4E4u) {
        ctx->pc = 0x15E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E0u;
        // 0x15e4e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4E8u;
        goto label_15e4e8;
    }
    ctx->pc = 0x15E4E0u;
    {
        const bool branch_taken_0x15e4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4E0u;
        // 0x15e4e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4e0) {
            ctx->pc = 0x15E4F4u;
            goto label_15e4f4;
        }
    }
    ctx->pc = 0x15E4E8u;
label_15e4e8:
    // 0x15e4e8: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x15e4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_15e4ec:
    // 0x15e4ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15e4f0:
    if (ctx->pc == 0x15E4F0u) {
        ctx->pc = 0x15E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4ECu;
        // 0x15e4f0: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E4F4u;
        goto label_15e4f4;
    }
    ctx->pc = 0x15E4ECu;
    {
        const bool branch_taken_0x15e4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E4ECu;
        // 0x15e4f0: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e4ec) {
            ctx->pc = 0x15E4FCu;
            goto label_15e4fc;
        }
    }
    ctx->pc = 0x15E4F4u;
label_15e4f4:
    // 0x15e4f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15e4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15e4f8:
    // 0x15e4f8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x15e4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_15e4fc:
    // 0x15e4fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15e4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_15e500:
    // 0x15e500: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x15e500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_15e504:
    // 0x15e504: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x15e504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15e508:
    // 0x15e508: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x15e508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15e50c:
    // 0x15e50c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x15e50cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15e510:
    // 0x15e510: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x15e510u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15e514:
    // 0x15e514: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x15e514u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15e518:
    // 0x15e518: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x15e518u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15e51c:
    // 0x15e51c: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x15e51cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15e520:
    // 0x15e520: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15e520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15e524:
    // 0x15e524: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x15e524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15e528:
    // 0x15e528: 0x3e00008  jr          $ra
label_15e52c:
    if (ctx->pc == 0x15E52Cu) {
        ctx->pc = 0x15E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E528u;
        // 0x15e52c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15E530u;
        goto label_fallthrough_0x15e528;
    }
    ctx->pc = 0x15E528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E528u;
        // 0x15e52c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15e528:
    ctx->pc = 0x15E530u;
}
