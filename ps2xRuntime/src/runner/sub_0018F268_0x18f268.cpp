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

// Function: sub_0018F268
// Address: 0x18f268 - 0x18f628
void sub_0018F268_0x18f268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F268_0x18f268");
#endif

    switch (ctx->pc) {
        case 0x18f268u: goto label_18f268;
        case 0x18f26cu: goto label_18f26c;
        case 0x18f270u: goto label_18f270;
        case 0x18f274u: goto label_18f274;
        case 0x18f278u: goto label_18f278;
        case 0x18f27cu: goto label_18f27c;
        case 0x18f280u: goto label_18f280;
        case 0x18f284u: goto label_18f284;
        case 0x18f288u: goto label_18f288;
        case 0x18f28cu: goto label_18f28c;
        case 0x18f290u: goto label_18f290;
        case 0x18f294u: goto label_18f294;
        case 0x18f298u: goto label_18f298;
        case 0x18f29cu: goto label_18f29c;
        case 0x18f2a0u: goto label_18f2a0;
        case 0x18f2a4u: goto label_18f2a4;
        case 0x18f2a8u: goto label_18f2a8;
        case 0x18f2acu: goto label_18f2ac;
        case 0x18f2b0u: goto label_18f2b0;
        case 0x18f2b4u: goto label_18f2b4;
        case 0x18f2b8u: goto label_18f2b8;
        case 0x18f2bcu: goto label_18f2bc;
        case 0x18f2c0u: goto label_18f2c0;
        case 0x18f2c4u: goto label_18f2c4;
        case 0x18f2c8u: goto label_18f2c8;
        case 0x18f2ccu: goto label_18f2cc;
        case 0x18f2d0u: goto label_18f2d0;
        case 0x18f2d4u: goto label_18f2d4;
        case 0x18f2d8u: goto label_18f2d8;
        case 0x18f2dcu: goto label_18f2dc;
        case 0x18f2e0u: goto label_18f2e0;
        case 0x18f2e4u: goto label_18f2e4;
        case 0x18f2e8u: goto label_18f2e8;
        case 0x18f2ecu: goto label_18f2ec;
        case 0x18f2f0u: goto label_18f2f0;
        case 0x18f2f4u: goto label_18f2f4;
        case 0x18f2f8u: goto label_18f2f8;
        case 0x18f2fcu: goto label_18f2fc;
        case 0x18f300u: goto label_18f300;
        case 0x18f304u: goto label_18f304;
        case 0x18f308u: goto label_18f308;
        case 0x18f30cu: goto label_18f30c;
        case 0x18f310u: goto label_18f310;
        case 0x18f314u: goto label_18f314;
        case 0x18f318u: goto label_18f318;
        case 0x18f31cu: goto label_18f31c;
        case 0x18f320u: goto label_18f320;
        case 0x18f324u: goto label_18f324;
        case 0x18f328u: goto label_18f328;
        case 0x18f32cu: goto label_18f32c;
        case 0x18f330u: goto label_18f330;
        case 0x18f334u: goto label_18f334;
        case 0x18f338u: goto label_18f338;
        case 0x18f33cu: goto label_18f33c;
        case 0x18f340u: goto label_18f340;
        case 0x18f344u: goto label_18f344;
        case 0x18f348u: goto label_18f348;
        case 0x18f34cu: goto label_18f34c;
        case 0x18f350u: goto label_18f350;
        case 0x18f354u: goto label_18f354;
        case 0x18f358u: goto label_18f358;
        case 0x18f35cu: goto label_18f35c;
        case 0x18f360u: goto label_18f360;
        case 0x18f364u: goto label_18f364;
        case 0x18f368u: goto label_18f368;
        case 0x18f36cu: goto label_18f36c;
        case 0x18f370u: goto label_18f370;
        case 0x18f374u: goto label_18f374;
        case 0x18f378u: goto label_18f378;
        case 0x18f37cu: goto label_18f37c;
        case 0x18f380u: goto label_18f380;
        case 0x18f384u: goto label_18f384;
        case 0x18f388u: goto label_18f388;
        case 0x18f38cu: goto label_18f38c;
        case 0x18f390u: goto label_18f390;
        case 0x18f394u: goto label_18f394;
        case 0x18f398u: goto label_18f398;
        case 0x18f39cu: goto label_18f39c;
        case 0x18f3a0u: goto label_18f3a0;
        case 0x18f3a4u: goto label_18f3a4;
        case 0x18f3a8u: goto label_18f3a8;
        case 0x18f3acu: goto label_18f3ac;
        case 0x18f3b0u: goto label_18f3b0;
        case 0x18f3b4u: goto label_18f3b4;
        case 0x18f3b8u: goto label_18f3b8;
        case 0x18f3bcu: goto label_18f3bc;
        case 0x18f3c0u: goto label_18f3c0;
        case 0x18f3c4u: goto label_18f3c4;
        case 0x18f3c8u: goto label_18f3c8;
        case 0x18f3ccu: goto label_18f3cc;
        case 0x18f3d0u: goto label_18f3d0;
        case 0x18f3d4u: goto label_18f3d4;
        case 0x18f3d8u: goto label_18f3d8;
        case 0x18f3dcu: goto label_18f3dc;
        case 0x18f3e0u: goto label_18f3e0;
        case 0x18f3e4u: goto label_18f3e4;
        case 0x18f3e8u: goto label_18f3e8;
        case 0x18f3ecu: goto label_18f3ec;
        case 0x18f3f0u: goto label_18f3f0;
        case 0x18f3f4u: goto label_18f3f4;
        case 0x18f3f8u: goto label_18f3f8;
        case 0x18f3fcu: goto label_18f3fc;
        case 0x18f400u: goto label_18f400;
        case 0x18f404u: goto label_18f404;
        case 0x18f408u: goto label_18f408;
        case 0x18f40cu: goto label_18f40c;
        case 0x18f410u: goto label_18f410;
        case 0x18f414u: goto label_18f414;
        case 0x18f418u: goto label_18f418;
        case 0x18f41cu: goto label_18f41c;
        case 0x18f420u: goto label_18f420;
        case 0x18f424u: goto label_18f424;
        case 0x18f428u: goto label_18f428;
        case 0x18f42cu: goto label_18f42c;
        case 0x18f430u: goto label_18f430;
        case 0x18f434u: goto label_18f434;
        case 0x18f438u: goto label_18f438;
        case 0x18f43cu: goto label_18f43c;
        case 0x18f440u: goto label_18f440;
        case 0x18f444u: goto label_18f444;
        case 0x18f448u: goto label_18f448;
        case 0x18f44cu: goto label_18f44c;
        case 0x18f450u: goto label_18f450;
        case 0x18f454u: goto label_18f454;
        case 0x18f458u: goto label_18f458;
        case 0x18f45cu: goto label_18f45c;
        case 0x18f460u: goto label_18f460;
        case 0x18f464u: goto label_18f464;
        case 0x18f468u: goto label_18f468;
        case 0x18f46cu: goto label_18f46c;
        case 0x18f470u: goto label_18f470;
        case 0x18f474u: goto label_18f474;
        case 0x18f478u: goto label_18f478;
        case 0x18f47cu: goto label_18f47c;
        case 0x18f480u: goto label_18f480;
        case 0x18f484u: goto label_18f484;
        case 0x18f488u: goto label_18f488;
        case 0x18f48cu: goto label_18f48c;
        case 0x18f490u: goto label_18f490;
        case 0x18f494u: goto label_18f494;
        case 0x18f498u: goto label_18f498;
        case 0x18f49cu: goto label_18f49c;
        case 0x18f4a0u: goto label_18f4a0;
        case 0x18f4a4u: goto label_18f4a4;
        case 0x18f4a8u: goto label_18f4a8;
        case 0x18f4acu: goto label_18f4ac;
        case 0x18f4b0u: goto label_18f4b0;
        case 0x18f4b4u: goto label_18f4b4;
        case 0x18f4b8u: goto label_18f4b8;
        case 0x18f4bcu: goto label_18f4bc;
        case 0x18f4c0u: goto label_18f4c0;
        case 0x18f4c4u: goto label_18f4c4;
        case 0x18f4c8u: goto label_18f4c8;
        case 0x18f4ccu: goto label_18f4cc;
        case 0x18f4d0u: goto label_18f4d0;
        case 0x18f4d4u: goto label_18f4d4;
        case 0x18f4d8u: goto label_18f4d8;
        case 0x18f4dcu: goto label_18f4dc;
        case 0x18f4e0u: goto label_18f4e0;
        case 0x18f4e4u: goto label_18f4e4;
        case 0x18f4e8u: goto label_18f4e8;
        case 0x18f4ecu: goto label_18f4ec;
        case 0x18f4f0u: goto label_18f4f0;
        case 0x18f4f4u: goto label_18f4f4;
        case 0x18f4f8u: goto label_18f4f8;
        case 0x18f4fcu: goto label_18f4fc;
        case 0x18f500u: goto label_18f500;
        case 0x18f504u: goto label_18f504;
        case 0x18f508u: goto label_18f508;
        case 0x18f50cu: goto label_18f50c;
        case 0x18f510u: goto label_18f510;
        case 0x18f514u: goto label_18f514;
        case 0x18f518u: goto label_18f518;
        case 0x18f51cu: goto label_18f51c;
        case 0x18f520u: goto label_18f520;
        case 0x18f524u: goto label_18f524;
        case 0x18f528u: goto label_18f528;
        case 0x18f52cu: goto label_18f52c;
        case 0x18f530u: goto label_18f530;
        case 0x18f534u: goto label_18f534;
        case 0x18f538u: goto label_18f538;
        case 0x18f53cu: goto label_18f53c;
        case 0x18f540u: goto label_18f540;
        case 0x18f544u: goto label_18f544;
        case 0x18f548u: goto label_18f548;
        case 0x18f54cu: goto label_18f54c;
        case 0x18f550u: goto label_18f550;
        case 0x18f554u: goto label_18f554;
        case 0x18f558u: goto label_18f558;
        case 0x18f55cu: goto label_18f55c;
        case 0x18f560u: goto label_18f560;
        case 0x18f564u: goto label_18f564;
        case 0x18f568u: goto label_18f568;
        case 0x18f56cu: goto label_18f56c;
        case 0x18f570u: goto label_18f570;
        case 0x18f574u: goto label_18f574;
        case 0x18f578u: goto label_18f578;
        case 0x18f57cu: goto label_18f57c;
        case 0x18f580u: goto label_18f580;
        case 0x18f584u: goto label_18f584;
        case 0x18f588u: goto label_18f588;
        case 0x18f58cu: goto label_18f58c;
        case 0x18f590u: goto label_18f590;
        case 0x18f594u: goto label_18f594;
        case 0x18f598u: goto label_18f598;
        case 0x18f59cu: goto label_18f59c;
        case 0x18f5a0u: goto label_18f5a0;
        case 0x18f5a4u: goto label_18f5a4;
        case 0x18f5a8u: goto label_18f5a8;
        case 0x18f5acu: goto label_18f5ac;
        case 0x18f5b0u: goto label_18f5b0;
        case 0x18f5b4u: goto label_18f5b4;
        case 0x18f5b8u: goto label_18f5b8;
        case 0x18f5bcu: goto label_18f5bc;
        case 0x18f5c0u: goto label_18f5c0;
        case 0x18f5c4u: goto label_18f5c4;
        case 0x18f5c8u: goto label_18f5c8;
        case 0x18f5ccu: goto label_18f5cc;
        case 0x18f5d0u: goto label_18f5d0;
        case 0x18f5d4u: goto label_18f5d4;
        case 0x18f5d8u: goto label_18f5d8;
        case 0x18f5dcu: goto label_18f5dc;
        case 0x18f5e0u: goto label_18f5e0;
        case 0x18f5e4u: goto label_18f5e4;
        case 0x18f5e8u: goto label_18f5e8;
        case 0x18f5ecu: goto label_18f5ec;
        case 0x18f5f0u: goto label_18f5f0;
        case 0x18f5f4u: goto label_18f5f4;
        case 0x18f5f8u: goto label_18f5f8;
        case 0x18f5fcu: goto label_18f5fc;
        case 0x18f600u: goto label_18f600;
        case 0x18f604u: goto label_18f604;
        case 0x18f608u: goto label_18f608;
        case 0x18f60cu: goto label_18f60c;
        case 0x18f610u: goto label_18f610;
        case 0x18f614u: goto label_18f614;
        case 0x18f618u: goto label_18f618;
        case 0x18f61cu: goto label_18f61c;
        case 0x18f620u: goto label_18f620;
        case 0x18f624u: goto label_18f624;
        default: break;
    }

    ctx->pc = 0x18f268u;

label_18f268:
    // 0x18f268: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x18f268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_18f26c:
    // 0x18f26c: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x18f26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_18f270:
    // 0x18f270: 0x3c120059  lui         $s2, 0x59
    ctx->pc = 0x18f270u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)89 << 16));
label_18f274:
    // 0x18f274: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x18f274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
label_18f278:
    // 0x18f278: 0x8e4271b0  lw          $v0, 0x71B0($s2)
    ctx->pc = 0x18f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29104)));
label_18f27c:
    // 0x18f27c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x18f27cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f280:
    // 0x18f280: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x18f280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_18f284:
    // 0x18f284: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x18f284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_18f288:
    // 0x18f288: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x18f288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_18f28c:
    // 0x18f28c: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x18f28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_18f290:
    // 0x18f290: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x18f290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_18f294:
    // 0x18f294: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x18f294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_18f298:
    // 0x18f298: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x18f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
label_18f29c:
    // 0x18f29c: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_18f2a0:
    if (ctx->pc == 0x18F2A0u) {
        ctx->pc = 0x18F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F29Cu;
        // 0x18f2a0: 0xffbf0120  sd          $ra, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2A4u;
        goto label_18f2a4;
    }
    ctx->pc = 0x18F29Cu;
    {
        const bool branch_taken_0x18f29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F29Cu;
        // 0x18f2a0: 0xffbf0120  sd          $ra, 0x120($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f29c) {
            ctx->pc = 0x18F344u;
            goto label_18f344;
        }
    }
    ctx->pc = 0x18F2A4u;
label_18f2a4:
    // 0x18f2a4: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x18f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
label_18f2a8:
    // 0x18f2a8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x18f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_18f2ac:
    // 0x18f2ac: 0x24483148  addiu       $t0, $v0, 0x3148
    ctx->pc = 0x18f2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 12616));
label_18f2b0:
    // 0x18f2b0: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x18f2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_18f2b4:
    // 0x18f2b4: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x18f2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_18f2b8:
    // 0x18f2b8: 0x8906000b  lwl         $a2, 0xB($t0)
    ctx->pc = 0x18f2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_18f2bc:
    // 0x18f2bc: 0x99060008  lwr         $a2, 0x8($t0)
    ctx->pc = 0x18f2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_18f2c0:
    // 0x18f2c0: 0x8107000c  lb          $a3, 0xC($t0)
    ctx->pc = 0x18f2c0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 12)));
label_18f2c4:
    // 0x18f2c4: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x18f2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f2c8:
    // 0x18f2c8: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x18f2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f2cc:
    // 0x18f2cc: 0xaba6000b  swl         $a2, 0xB($sp)
    ctx->pc = 0x18f2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_18f2d0:
    // 0x18f2d0: 0xbba60008  swr         $a2, 0x8($sp)
    ctx->pc = 0x18f2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_18f2d4:
    // 0x18f2d4: 0xa3a7000c  sb          $a3, 0xC($sp)
    ctx->pc = 0x18f2d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 7));
label_18f2d8:
    // 0x18f2d8: 0x24453148  addiu       $a1, $v0, 0x3148
    ctx->pc = 0x18f2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12616));
label_18f2dc:
    // 0x18f2dc: 0xc050fda  jal         func_143F68
label_18f2e0:
    if (ctx->pc == 0x18F2E0u) {
        ctx->pc = 0x18F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2DCu;
        // 0x18f2e0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F2E4u;
        goto label_18f2e4;
    }
    ctx->pc = 0x18F2DCu;
    SET_GPR_U32(ctx, 31, 0x18F2E4u);
    ctx->pc = 0x18F2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2DCu;
    // 0x18f2e0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x18F2DCu, 0x18F2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2E4u;
label_18f2e4:
    // 0x18f2e4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x18f2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18f2e8:
    // 0x18f2e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18f2e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f2ec:
    // 0x18f2ec: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18f2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18f2f0:
    // 0x18f2f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18f2f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f2f4:
    // 0x18f2f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f2f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f2f8:
    // 0x18f2f8: 0xc10ca28  jal         func_4328A0
label_18f2fc:
    if (ctx->pc == 0x18F2FCu) {
        ctx->pc = 0x18F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F2F8u;
        // 0x18f2fc: 0x24a53158  addiu       $a1, $a1, 0x3158 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F300u;
        goto label_18f300;
    }
    ctx->pc = 0x18F2F8u;
    SET_GPR_U32(ctx, 31, 0x18F300u);
    ctx->pc = 0x18F2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2F8u;
    // 0x18f2fc: 0x24a53158  addiu       $a1, $a1, 0x3158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x18F2F8u, 0x18F300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F300u;
label_18f300:
    // 0x18f300: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x18f300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_18f304:
    // 0x18f304: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18f304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f308:
    // 0x18f308: 0x8c62b788  lw          $v0, -0x4878($v1)
    ctx->pc = 0x18f308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948744)));
label_18f30c:
    // 0x18f30c: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x18f30cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_18f310:
    // 0x18f310: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x18f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18f314:
    // 0x18f314: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x18f314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_18f318:
    // 0x18f318: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x18f318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_18f31c:
    // 0x18f31c: 0x40f809  jalr        $v0
label_18f320:
    if (ctx->pc == 0x18F320u) {
        ctx->pc = 0x18F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F31Cu;
        // 0x18f320: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F324u;
        goto label_18f324;
    }
    ctx->pc = 0x18F31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F324u);
        ctx->pc = 0x18F320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F31Cu;
        // 0x18f320: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F31Cu, 0x18F324u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F324u;
label_18f324:
    // 0x18f324: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_18f328:
    // 0x18f328: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f32c:
    // 0x18f32c: 0x8c64cd4c  lw          $a0, -0x32B4($v1)
    ctx->pc = 0x18f32cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954316)));
label_18f330:
    // 0x18f330: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x18f330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f334:
    // 0x18f334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18f334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f338:
    // 0x18f338: 0xc063a78  jal         func_18E9E0
label_18f33c:
    if (ctx->pc == 0x18F33Cu) {
        ctx->pc = 0x18F33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F338u;
        // 0x18f33c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F340u;
        goto label_18f340;
    }
    ctx->pc = 0x18F338u;
    SET_GPR_U32(ctx, 31, 0x18F340u);
    ctx->pc = 0x18F33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F338u;
    // 0x18f33c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E9E0u, 0x18F338u, 0x18F340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F340u;
label_18f340:
    // 0x18f340: 0xae4271b0  sw          $v0, 0x71B0($s2)
    ctx->pc = 0x18f340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 29104), GPR_U32(ctx, 2));
label_18f344:
    // 0x18f344: 0xc11a890  jal         func_46A240
label_18f348:
    if (ctx->pc == 0x18F348u) {
        ctx->pc = 0x18F34Cu;
        goto label_18f34c;
    }
    ctx->pc = 0x18F344u;
    SET_GPR_U32(ctx, 31, 0x18F34Cu);
    ctx->pc = 0x46A240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A240u, 0x18F344u, 0x18F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F34Cu;
label_18f34c:
    // 0x18f34c: 0xc12107a  jal         func_4841E8
label_18f350:
    if (ctx->pc == 0x18F350u) {
        ctx->pc = 0x18F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F34Cu;
        // 0x18f350: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F354u;
        goto label_18f354;
    }
    ctx->pc = 0x18F34Cu;
    SET_GPR_U32(ctx, 31, 0x18F354u);
    ctx->pc = 0x18F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F34Cu;
    // 0x18f350: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4841E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841E8u, 0x18F34Cu, 0x18F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F354u;
label_18f354:
    // 0x18f354: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x18f354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_18f358:
    // 0x18f358: 0xc11a4b6  jal         func_4692D8
label_18f35c:
    if (ctx->pc == 0x18F35Cu) {
        ctx->pc = 0x18F35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F358u;
        // 0x18f35c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F360u;
        goto label_18f360;
    }
    ctx->pc = 0x18F358u;
    SET_GPR_U32(ctx, 31, 0x18F360u);
    ctx->pc = 0x18F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F358u;
    // 0x18f35c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4692D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4692D8u, 0x18F358u, 0x18F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F360u;
label_18f360:
    // 0x18f360: 0xc12107a  jal         func_4841E8
label_18f364:
    if (ctx->pc == 0x18F364u) {
        ctx->pc = 0x18F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F360u;
        // 0x18f364: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F368u;
        goto label_18f368;
    }
    ctx->pc = 0x18F360u;
    SET_GPR_U32(ctx, 31, 0x18F368u);
    ctx->pc = 0x18F364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F360u;
    // 0x18f364: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4841E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4841E8u, 0x18F360u, 0x18F368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F368u;
label_18f368:
    // 0x18f368: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x18f368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_18f36c:
    // 0x18f36c: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x18f36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_18f370:
    // 0x18f370: 0xc11a830  jal         func_46A0C0
label_18f374:
    if (ctx->pc == 0x18F374u) {
        ctx->pc = 0x18F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F370u;
        // 0x18f374: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F378u;
        goto label_18f378;
    }
    ctx->pc = 0x18F370u;
    SET_GPR_U32(ctx, 31, 0x18F378u);
    ctx->pc = 0x18F374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F370u;
    // 0x18f374: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A0C0u, 0x18F370u, 0x18F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F378u;
label_18f378:
    // 0x18f378: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x18f378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_18f37c:
    // 0x18f37c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x18f37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_18f380:
    // 0x18f380: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x18f380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_18f384:
    // 0x18f384: 0xc11ac5c  jal         func_46B170
label_18f388:
    if (ctx->pc == 0x18F388u) {
        ctx->pc = 0x18F388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F384u;
        // 0x18f388: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F38Cu;
        goto label_18f38c;
    }
    ctx->pc = 0x18F384u;
    SET_GPR_U32(ctx, 31, 0x18F38Cu);
    ctx->pc = 0x18F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F384u;
    // 0x18f388: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46B170u, 0x18F384u, 0x18F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F38Cu;
label_18f38c:
    // 0x18f38c: 0xc11b3b6  jal         func_46CED8
label_18f390:
    if (ctx->pc == 0x18F390u) {
        ctx->pc = 0x18F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F38Cu;
        // 0x18f390: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F394u;
        goto label_18f394;
    }
    ctx->pc = 0x18F38Cu;
    SET_GPR_U32(ctx, 31, 0x18F394u);
    ctx->pc = 0x18F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F38Cu;
    // 0x18f390: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CED8u, 0x18F38Cu, 0x18F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F394u;
label_18f394:
    // 0x18f394: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18f394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_18f398:
    // 0x18f398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f39c:
    // 0x18f39c: 0xaee20008  sw          $v0, 0x8($s7)
    ctx->pc = 0x18f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 2));
label_18f3a0:
    // 0x18f3a0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x18f3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_18f3a4:
    // 0x18f3a4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x18f3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_18f3a8:
    // 0x18f3a8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x18f3a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_18f3ac:
    // 0x18f3ac: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x18f3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_18f3b0:
    // 0x18f3b0: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x18f3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_18f3b4:
    // 0x18f3b4: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x18f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_18f3b8:
    // 0x18f3b8: 0xb0430013  sdl         $v1, 0x13($v0)
    ctx->pc = 0x18f3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f3bc:
    // 0x18f3bc: 0xb443000c  sdr         $v1, 0xC($v0)
    ctx->pc = 0x18f3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f3c0:
    // 0x18f3c0: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x18f3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_18f3c4:
    // 0x18f3c4: 0x8e4271b0  lw          $v0, 0x71B0($s2)
    ctx->pc = 0x18f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 29104)));
label_18f3c8:
    // 0x18f3c8: 0x8ee40008  lw          $a0, 0x8($s7)
    ctx->pc = 0x18f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_18f3cc:
    // 0x18f3cc: 0xc11b404  jal         func_46D010
label_18f3d0:
    if (ctx->pc == 0x18F3D0u) {
        ctx->pc = 0x18F3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3CCu;
        // 0x18f3d0: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3D4u;
        goto label_18f3d4;
    }
    ctx->pc = 0x18F3CCu;
    SET_GPR_U32(ctx, 31, 0x18F3D4u);
    ctx->pc = 0x18F3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F3CCu;
    // 0x18f3d0: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46D010u, 0x18F3CCu, 0x18F3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F3D4u;
label_18f3d4:
    // 0x18f3d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f3d8:
    // 0x18f3d8: 0xc11affa  jal         func_46BFE8
label_18f3dc:
    if (ctx->pc == 0x18F3DCu) {
        ctx->pc = 0x18F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3D8u;
        // 0x18f3dc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F3E0u;
        goto label_18f3e0;
    }
    ctx->pc = 0x18F3D8u;
    SET_GPR_U32(ctx, 31, 0x18F3E0u);
    ctx->pc = 0x18F3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F3D8u;
    // 0x18f3dc: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BFE8u, 0x18F3D8u, 0x18F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F3E0u;
label_18f3e0:
    // 0x18f3e0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18f3e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f3e4:
    // 0x18f3e4: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x18f3e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_18f3e8:
    // 0x18f3e8: 0x8e87005c  lw          $a3, 0x5C($s4)
    ctx->pc = 0x18f3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_18f3ec:
    // 0x18f3ec: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x18f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_18f3f0:
    // 0x18f3f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18f3f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f3f4:
    // 0x18f3f4: 0xafa70114  sw          $a3, 0x114($sp)
    ctx->pc = 0x18f3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 7));
label_18f3f8:
    // 0x18f3f8: 0x8e9e002c  lw          $fp, 0x2C($s4)
    ctx->pc = 0x18f3f8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_18f3fc:
    // 0x18f3fc: 0x8ceb0014  lw          $t3, 0x14($a3)
    ctx->pc = 0x18f3fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_18f400:
    // 0x18f400: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x18f400u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_18f404:
    // 0x18f404: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x18f404u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18f408:
    // 0x18f408: 0x0  nop
    ctx->pc = 0x18f408u;
    // NOP
label_18f40c:
    // 0x18f40c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18f40cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18f410:
    // 0x18f410: 0x4a3018  mult        $a2, $v0, $t2
    ctx->pc = 0x18f410u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_18f414:
    // 0x18f414: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x18f414u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18f418:
    // 0x18f418: 0x24a9ffff  addiu       $t1, $a1, -0x1
    ctx->pc = 0x18f418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_18f41c:
    // 0x18f41c: 0x24680001  addiu       $t0, $v1, 0x1
    ctx->pc = 0x18f41cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18f420:
    // 0x18f420: 0xcb2021  addu        $a0, $a2, $t3
    ctx->pc = 0x18f420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
label_18f424:
    // 0x18f424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f428:
    // 0x18f428: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18f428u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_18f42c:
    // 0x18f42c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x18f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_18f430:
    // 0x18f430: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x18f430u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_18f434:
    // 0x18f434: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x18f434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_18f438:
    // 0x18f438: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
label_18f43c:
    if (ctx->pc == 0x18F43Cu) {
        ctx->pc = 0x18F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F438u;
        // 0x18f43c: 0x472821  addu        $a1, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F440u;
        goto label_18f440;
    }
    ctx->pc = 0x18F438u;
    {
        const bool branch_taken_0x18f438 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F438u;
        // 0x18f43c: 0x472821  addu        $a1, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f438) {
            ctx->pc = 0x18F454u;
            goto label_18f454;
        }
    }
    ctx->pc = 0x18F440u;
label_18f440:
    // 0x18f440: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x18f440u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f444:
    // 0x18f444: 0x0  nop
    ctx->pc = 0x18f444u;
    // NOP
label_18f448:
    // 0x18f448: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18f448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18f44c:
    // 0x18f44c: 0x10000009  b           . + 4 + (0x9 << 2)
label_18f450:
    if (ctx->pc == 0x18F450u) {
        ctx->pc = 0x18F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F44Cu;
        // 0x18f450: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F454u;
        goto label_18f454;
    }
    ctx->pc = 0x18F44Cu;
    {
        const bool branch_taken_0x18f44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F44Cu;
        // 0x18f450: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f44c) {
            ctx->pc = 0x18F474u;
            goto label_18f474;
        }
    }
    ctx->pc = 0x18F454u;
label_18f454:
    // 0x18f454: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x18f454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_18f458:
    // 0x18f458: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x18f458u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_18f45c:
    // 0x18f45c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18f45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18f460:
    // 0x18f460: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f460u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f464:
    // 0x18f464: 0x0  nop
    ctx->pc = 0x18f464u;
    // NOP
label_18f468:
    // 0x18f468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x18f468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_18f46c:
    // 0x18f46c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x18f46cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_18f470:
    // 0x18f470: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18f470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_18f474:
    // 0x18f474: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x18f474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_18f478:
    // 0x18f478: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x18f478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_18f47c:
    // 0x18f47c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x18f47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_18f480:
    // 0x18f480: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x18f480u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18f484:
    // 0x18f484: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_18f488:
    if (ctx->pc == 0x18F488u) {
        ctx->pc = 0x18F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F484u;
        // 0x18f488: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F48Cu;
        goto label_18f48c;
    }
    ctx->pc = 0x18F484u;
    {
        const bool branch_taken_0x18f484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F484u;
        // 0x18f488: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f484) {
            ctx->pc = 0x18F428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f428;
        }
    }
    ctx->pc = 0x18F48Cu;
label_18f48c:
    // 0x18f48c: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x18f48cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_18f490:
    // 0x18f490: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x18f490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_18f494:
    // 0x18f494: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_18f498:
    if (ctx->pc == 0x18F498u) {
        ctx->pc = 0x18F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F494u;
        // 0x18f498: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F49Cu;
        goto label_18f49c;
    }
    ctx->pc = 0x18F494u;
    {
        const bool branch_taken_0x18f494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F494u;
        // 0x18f498: 0x120282d  daddu       $a1, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f494) {
            ctx->pc = 0x18F400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f400;
        }
    }
    ctx->pc = 0x18F49Cu;
label_18f49c:
    // 0x18f49c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x18f49cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f4a0:
    // 0x18f4a0: 0x3b040  sll         $s6, $v1, 1
    ctx->pc = 0x18f4a0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_18f4a4:
    // 0x18f4a4: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x18f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_18f4a8:
    // 0x18f4a8: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x18f4a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_18f4ac:
    // 0x18f4ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18f4acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f4b0:
    // 0x18f4b0: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x18f4b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_18f4b4:
    // 0x18f4b4: 0x26d20002  addiu       $s2, $s6, 0x2
    ctx->pc = 0x18f4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_18f4b8:
    // 0x18f4b8: 0x26d10001  addiu       $s1, $s6, 0x1
    ctx->pc = 0x18f4b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18f4bc:
    // 0x18f4bc: 0x0  nop
    ctx->pc = 0x18f4bcu;
    // NOP
label_18f4c0:
    // 0x18f4c0: 0x2d33021  addu        $a2, $s6, $s3
    ctx->pc = 0x18f4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_18f4c4:
    // 0x18f4c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f4c8:
    // 0x18f4c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18f4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f4cc:
    // 0x18f4cc: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x18f4ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18f4d0:
    // 0x18f4d0: 0x3248ffff  andi        $t0, $s2, 0xFFFF
    ctx->pc = 0x18f4d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_18f4d4:
    // 0x18f4d4: 0xc11afb0  jal         func_46BEC0
label_18f4d8:
    if (ctx->pc == 0x18F4D8u) {
        ctx->pc = 0x18F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4D4u;
        // 0x18f4d8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4DCu;
        goto label_18f4dc;
    }
    ctx->pc = 0x18F4D4u;
    SET_GPR_U32(ctx, 31, 0x18F4DCu);
    ctx->pc = 0x18F4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F4D4u;
    // 0x18f4d8: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BEC0u, 0x18F4D4u, 0x18F4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4DCu;
label_18f4dc:
    // 0x18f4dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18f4dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18f4e0:
    // 0x18f4e0: 0x8ee60008  lw          $a2, 0x8($s7)
    ctx->pc = 0x18f4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_18f4e4:
    // 0x18f4e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f4e8:
    // 0x18f4e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18f4e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f4ec:
    // 0x18f4ec: 0xc11afb6  jal         func_46BED8
label_18f4f0:
    if (ctx->pc == 0x18F4F0u) {
        ctx->pc = 0x18F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F4ECu;
        // 0x18f4f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F4F4u;
        goto label_18f4f4;
    }
    ctx->pc = 0x18F4ECu;
    SET_GPR_U32(ctx, 31, 0x18F4F4u);
    ctx->pc = 0x18F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F4ECu;
    // 0x18f4f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BED8u, 0x18F4ECu, 0x18F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F4F4u;
label_18f4f4:
    // 0x18f4f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18f4f8:
    // 0x18f4f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18f4f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f4fc:
    // 0x18f4fc: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x18f4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18f500:
    // 0x18f500: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_18f504:
    if (ctx->pc == 0x18F504u) {
        ctx->pc = 0x18F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F500u;
        // 0x18f504: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F508u;
        goto label_18f508;
    }
    ctx->pc = 0x18F500u;
    {
        const bool branch_taken_0x18f500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F500u;
        // 0x18f504: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f500) {
            ctx->pc = 0x18F4C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f4c0;
        }
    }
    ctx->pc = 0x18F508u;
label_18f508:
    // 0x18f508: 0x2ea20010  sltiu       $v0, $s5, 0x10
    ctx->pc = 0x18f508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_18f50c:
    // 0x18f50c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_18f510:
    if (ctx->pc == 0x18F510u) {
        ctx->pc = 0x18F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F50Cu;
        // 0x18f510: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F514u;
        goto label_18f514;
    }
    ctx->pc = 0x18F50Cu;
    {
        const bool branch_taken_0x18f50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F50Cu;
        // 0x18f510: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f50c) {
            ctx->pc = 0x18F4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f4a0;
        }
    }
    ctx->pc = 0x18F514u;
label_18f514:
    // 0x18f514: 0x15b040  sll         $s6, $s5, 1
    ctx->pc = 0x18f514u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_18f518:
    // 0x18f518: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x18f518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
label_18f51c:
    // 0x18f51c: 0x5e8021  addu        $s0, $v0, $fp
    ctx->pc = 0x18f51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_18f520:
    // 0x18f520: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18f520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f524:
    // 0x18f524: 0x26d20002  addiu       $s2, $s6, 0x2
    ctx->pc = 0x18f524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_18f528:
    // 0x18f528: 0x26d10001  addiu       $s1, $s6, 0x1
    ctx->pc = 0x18f528u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_18f52c:
    // 0x18f52c: 0x0  nop
    ctx->pc = 0x18f52cu;
    // NOP
label_18f530:
    // 0x18f530: 0x2d33021  addu        $a2, $s6, $s3
    ctx->pc = 0x18f530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
label_18f534:
    // 0x18f534: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f538:
    // 0x18f538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18f538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f53c:
    // 0x18f53c: 0x3227ffff  andi        $a3, $s1, 0xFFFF
    ctx->pc = 0x18f53cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18f540:
    // 0x18f540: 0x3248ffff  andi        $t0, $s2, 0xFFFF
    ctx->pc = 0x18f540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
label_18f544:
    // 0x18f544: 0xc11afb0  jal         func_46BEC0
label_18f548:
    if (ctx->pc == 0x18F548u) {
        ctx->pc = 0x18F548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F544u;
        // 0x18f548: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F54Cu;
        goto label_18f54c;
    }
    ctx->pc = 0x18F544u;
    SET_GPR_U32(ctx, 31, 0x18F54Cu);
    ctx->pc = 0x18F548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F544u;
    // 0x18f548: 0x30c6ffff  andi        $a2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BEC0u, 0x18F544u, 0x18F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F54Cu;
label_18f54c:
    // 0x18f54c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18f54cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_18f550:
    // 0x18f550: 0x8ee60008  lw          $a2, 0x8($s7)
    ctx->pc = 0x18f550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_18f554:
    // 0x18f554: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18f558:
    // 0x18f558: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18f558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f55c:
    // 0x18f55c: 0xc11afb6  jal         func_46BED8
label_18f560:
    if (ctx->pc == 0x18F560u) {
        ctx->pc = 0x18F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F55Cu;
        // 0x18f560: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F564u;
        goto label_18f564;
    }
    ctx->pc = 0x18F55Cu;
    SET_GPR_U32(ctx, 31, 0x18F564u);
    ctx->pc = 0x18F560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F55Cu;
    // 0x18f560: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BED8u, 0x18F55Cu, 0x18F564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F564u;
label_18f564:
    // 0x18f564: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x18f564u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_18f568:
    // 0x18f568: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18f568u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f56c:
    // 0x18f56c: 0x2e620002  sltiu       $v0, $s3, 0x2
    ctx->pc = 0x18f56cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18f570:
    // 0x18f570: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_18f574:
    if (ctx->pc == 0x18F574u) {
        ctx->pc = 0x18F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F570u;
        // 0x18f574: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F578u;
        goto label_18f578;
    }
    ctx->pc = 0x18F570u;
    {
        const bool branch_taken_0x18f570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F570u;
        // 0x18f574: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f570) {
            ctx->pc = 0x18F530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f530;
        }
    }
    ctx->pc = 0x18F578u;
label_18f578:
    // 0x18f578: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x18f578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_18f57c:
    // 0x18f57c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f580:
    // 0x18f580: 0x8fa70114  lw          $a3, 0x114($sp)
    ctx->pc = 0x18f580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_18f584:
    // 0x18f584: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x18f584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_18f588:
    // 0x18f588: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x18f588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_18f58c:
    // 0x18f58c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x18f58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_18f590:
    // 0x18f590: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x18f590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_18f594:
    // 0x18f594: 0x6ba80017  ldl         $t0, 0x17($sp)
    ctx->pc = 0x18f594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_18f598:
    // 0x18f598: 0x6fa80010  ldr         $t0, 0x10($sp)
    ctx->pc = 0x18f598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_18f59c:
    // 0x18f59c: 0x6ba2001f  ldl         $v0, 0x1F($sp)
    ctx->pc = 0x18f59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_18f5a0:
    // 0x18f5a0: 0x6fa20018  ldr         $v0, 0x18($sp)
    ctx->pc = 0x18f5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_18f5a4:
    // 0x18f5a4: 0xb0e8000b  sdl         $t0, 0xB($a3)
    ctx->pc = 0x18f5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f5a8:
    // 0x18f5a8: 0xb4e80004  sdr         $t0, 0x4($a3)
    ctx->pc = 0x18f5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f5ac:
    // 0x18f5ac: 0xb0e20013  sdl         $v0, 0x13($a3)
    ctx->pc = 0x18f5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f5b0:
    // 0x18f5b0: 0xb4e2000c  sdr         $v0, 0xC($a3)
    ctx->pc = 0x18f5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18f5b4:
    // 0x18f5b4: 0xc11aba8  jal         func_46AEA0
label_18f5b8:
    if (ctx->pc == 0x18F5B8u) {
        ctx->pc = 0x18F5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5B4u;
        // 0x18f5b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5BCu;
        goto label_18f5bc;
    }
    ctx->pc = 0x18F5B4u;
    SET_GPR_U32(ctx, 31, 0x18F5BCu);
    ctx->pc = 0x18F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5B4u;
    // 0x18f5b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AEA0u, 0x18F5B4u, 0x18F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5BCu;
label_18f5bc:
    // 0x18f5bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18f5bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f5c0:
    // 0x18f5c0: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x18f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_18f5c4:
    // 0x18f5c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18f5c8:
    // 0x18f5c8: 0xc11a984  jal         func_46A610
label_18f5cc:
    if (ctx->pc == 0x18F5CCu) {
        ctx->pc = 0x18F5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5C8u;
        // 0x18f5cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5D0u;
        goto label_18f5d0;
    }
    ctx->pc = 0x18F5C8u;
    SET_GPR_U32(ctx, 31, 0x18F5D0u);
    ctx->pc = 0x18F5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5C8u;
    // 0x18f5cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A610u, 0x18F5C8u, 0x18F5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5D0u;
label_18f5d0:
    // 0x18f5d0: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x18f5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_18f5d4:
    // 0x18f5d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18f5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f5d8:
    // 0x18f5d8: 0xc11a864  jal         func_46A190
label_18f5dc:
    if (ctx->pc == 0x18F5DCu) {
        ctx->pc = 0x18F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5D8u;
        // 0x18f5dc: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5E0u;
        goto label_18f5e0;
    }
    ctx->pc = 0x18F5D8u;
    SET_GPR_U32(ctx, 31, 0x18F5E0u);
    ctx->pc = 0x18F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5D8u;
    // 0x18f5dc: 0xaee20004  sw          $v0, 0x4($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A190u, 0x18F5D8u, 0x18F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5E0u;
label_18f5e0:
    // 0x18f5e0: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x18f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_18f5e4:
    // 0x18f5e4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x18f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_18f5e8:
    // 0x18f5e8: 0xc120fde  jal         func_483F78
label_18f5ec:
    if (ctx->pc == 0x18F5ECu) {
        ctx->pc = 0x18F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5E8u;
        // 0x18f5ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5F0u;
        goto label_18f5f0;
    }
    ctx->pc = 0x18F5E8u;
    SET_GPR_U32(ctx, 31, 0x18F5F0u);
    ctx->pc = 0x18F5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5E8u;
    // 0x18f5ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x483F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483F78u, 0x18F5E8u, 0x18F5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5F0u;
label_18f5f0:
    // 0x18f5f0: 0xc11b010  jal         func_46C040
label_18f5f4:
    if (ctx->pc == 0x18F5F4u) {
        ctx->pc = 0x18F5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F5F0u;
        // 0x18f5f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F5F8u;
        goto label_18f5f8;
    }
    ctx->pc = 0x18F5F0u;
    SET_GPR_U32(ctx, 31, 0x18F5F8u);
    ctx->pc = 0x18F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F5F0u;
    // 0x18f5f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46C040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46C040u, 0x18F5F0u, 0x18F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F5F8u;
label_18f5f8:
    // 0x18f5f8: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x18f5f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_18f5fc:
    // 0x18f5fc: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x18f5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_18f600:
    // 0x18f600: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x18f600u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_18f604:
    // 0x18f604: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x18f604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_18f608:
    // 0x18f608: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x18f608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_18f60c:
    // 0x18f60c: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x18f60cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_18f610:
    // 0x18f610: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x18f610u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_18f614:
    // 0x18f614: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x18f614u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_18f618:
    // 0x18f618: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x18f618u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_18f61c:
    // 0x18f61c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x18f61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_18f620:
    // 0x18f620: 0x3e00008  jr          $ra
label_18f624:
    if (ctx->pc == 0x18F624u) {
        ctx->pc = 0x18F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F620u;
        // 0x18f624: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F628u;
        goto label_fallthrough_0x18f620;
    }
    ctx->pc = 0x18F620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F620u;
        // 0x18f624: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f620:
    ctx->pc = 0x18F628u;
}
