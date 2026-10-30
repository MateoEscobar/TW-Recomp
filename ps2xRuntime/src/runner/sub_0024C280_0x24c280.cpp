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

// Function: sub_0024C280
// Address: 0x24c280 - 0x24c560
void sub_0024C280_0x24c280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C280_0x24c280");
#endif

    switch (ctx->pc) {
        case 0x24c280u: goto label_24c280;
        case 0x24c284u: goto label_24c284;
        case 0x24c288u: goto label_24c288;
        case 0x24c28cu: goto label_24c28c;
        case 0x24c290u: goto label_24c290;
        case 0x24c294u: goto label_24c294;
        case 0x24c298u: goto label_24c298;
        case 0x24c29cu: goto label_24c29c;
        case 0x24c2a0u: goto label_24c2a0;
        case 0x24c2a4u: goto label_24c2a4;
        case 0x24c2a8u: goto label_24c2a8;
        case 0x24c2acu: goto label_24c2ac;
        case 0x24c2b0u: goto label_24c2b0;
        case 0x24c2b4u: goto label_24c2b4;
        case 0x24c2b8u: goto label_24c2b8;
        case 0x24c2bcu: goto label_24c2bc;
        case 0x24c2c0u: goto label_24c2c0;
        case 0x24c2c4u: goto label_24c2c4;
        case 0x24c2c8u: goto label_24c2c8;
        case 0x24c2ccu: goto label_24c2cc;
        case 0x24c2d0u: goto label_24c2d0;
        case 0x24c2d4u: goto label_24c2d4;
        case 0x24c2d8u: goto label_24c2d8;
        case 0x24c2dcu: goto label_24c2dc;
        case 0x24c2e0u: goto label_24c2e0;
        case 0x24c2e4u: goto label_24c2e4;
        case 0x24c2e8u: goto label_24c2e8;
        case 0x24c2ecu: goto label_24c2ec;
        case 0x24c2f0u: goto label_24c2f0;
        case 0x24c2f4u: goto label_24c2f4;
        case 0x24c2f8u: goto label_24c2f8;
        case 0x24c2fcu: goto label_24c2fc;
        case 0x24c300u: goto label_24c300;
        case 0x24c304u: goto label_24c304;
        case 0x24c308u: goto label_24c308;
        case 0x24c30cu: goto label_24c30c;
        case 0x24c310u: goto label_24c310;
        case 0x24c314u: goto label_24c314;
        case 0x24c318u: goto label_24c318;
        case 0x24c31cu: goto label_24c31c;
        case 0x24c320u: goto label_24c320;
        case 0x24c324u: goto label_24c324;
        case 0x24c328u: goto label_24c328;
        case 0x24c32cu: goto label_24c32c;
        case 0x24c330u: goto label_24c330;
        case 0x24c334u: goto label_24c334;
        case 0x24c338u: goto label_24c338;
        case 0x24c33cu: goto label_24c33c;
        case 0x24c340u: goto label_24c340;
        case 0x24c344u: goto label_24c344;
        case 0x24c348u: goto label_24c348;
        case 0x24c34cu: goto label_24c34c;
        case 0x24c350u: goto label_24c350;
        case 0x24c354u: goto label_24c354;
        case 0x24c358u: goto label_24c358;
        case 0x24c35cu: goto label_24c35c;
        case 0x24c360u: goto label_24c360;
        case 0x24c364u: goto label_24c364;
        case 0x24c368u: goto label_24c368;
        case 0x24c36cu: goto label_24c36c;
        case 0x24c370u: goto label_24c370;
        case 0x24c374u: goto label_24c374;
        case 0x24c378u: goto label_24c378;
        case 0x24c37cu: goto label_24c37c;
        case 0x24c380u: goto label_24c380;
        case 0x24c384u: goto label_24c384;
        case 0x24c388u: goto label_24c388;
        case 0x24c38cu: goto label_24c38c;
        case 0x24c390u: goto label_24c390;
        case 0x24c394u: goto label_24c394;
        case 0x24c398u: goto label_24c398;
        case 0x24c39cu: goto label_24c39c;
        case 0x24c3a0u: goto label_24c3a0;
        case 0x24c3a4u: goto label_24c3a4;
        case 0x24c3a8u: goto label_24c3a8;
        case 0x24c3acu: goto label_24c3ac;
        case 0x24c3b0u: goto label_24c3b0;
        case 0x24c3b4u: goto label_24c3b4;
        case 0x24c3b8u: goto label_24c3b8;
        case 0x24c3bcu: goto label_24c3bc;
        case 0x24c3c0u: goto label_24c3c0;
        case 0x24c3c4u: goto label_24c3c4;
        case 0x24c3c8u: goto label_24c3c8;
        case 0x24c3ccu: goto label_24c3cc;
        case 0x24c3d0u: goto label_24c3d0;
        case 0x24c3d4u: goto label_24c3d4;
        case 0x24c3d8u: goto label_24c3d8;
        case 0x24c3dcu: goto label_24c3dc;
        case 0x24c3e0u: goto label_24c3e0;
        case 0x24c3e4u: goto label_24c3e4;
        case 0x24c3e8u: goto label_24c3e8;
        case 0x24c3ecu: goto label_24c3ec;
        case 0x24c3f0u: goto label_24c3f0;
        case 0x24c3f4u: goto label_24c3f4;
        case 0x24c3f8u: goto label_24c3f8;
        case 0x24c3fcu: goto label_24c3fc;
        case 0x24c400u: goto label_24c400;
        case 0x24c404u: goto label_24c404;
        case 0x24c408u: goto label_24c408;
        case 0x24c40cu: goto label_24c40c;
        case 0x24c410u: goto label_24c410;
        case 0x24c414u: goto label_24c414;
        case 0x24c418u: goto label_24c418;
        case 0x24c41cu: goto label_24c41c;
        case 0x24c420u: goto label_24c420;
        case 0x24c424u: goto label_24c424;
        case 0x24c428u: goto label_24c428;
        case 0x24c42cu: goto label_24c42c;
        case 0x24c430u: goto label_24c430;
        case 0x24c434u: goto label_24c434;
        case 0x24c438u: goto label_24c438;
        case 0x24c43cu: goto label_24c43c;
        case 0x24c440u: goto label_24c440;
        case 0x24c444u: goto label_24c444;
        case 0x24c448u: goto label_24c448;
        case 0x24c44cu: goto label_24c44c;
        case 0x24c450u: goto label_24c450;
        case 0x24c454u: goto label_24c454;
        case 0x24c458u: goto label_24c458;
        case 0x24c45cu: goto label_24c45c;
        case 0x24c460u: goto label_24c460;
        case 0x24c464u: goto label_24c464;
        case 0x24c468u: goto label_24c468;
        case 0x24c46cu: goto label_24c46c;
        case 0x24c470u: goto label_24c470;
        case 0x24c474u: goto label_24c474;
        case 0x24c478u: goto label_24c478;
        case 0x24c47cu: goto label_24c47c;
        case 0x24c480u: goto label_24c480;
        case 0x24c484u: goto label_24c484;
        case 0x24c488u: goto label_24c488;
        case 0x24c48cu: goto label_24c48c;
        case 0x24c490u: goto label_24c490;
        case 0x24c494u: goto label_24c494;
        case 0x24c498u: goto label_24c498;
        case 0x24c49cu: goto label_24c49c;
        case 0x24c4a0u: goto label_24c4a0;
        case 0x24c4a4u: goto label_24c4a4;
        case 0x24c4a8u: goto label_24c4a8;
        case 0x24c4acu: goto label_24c4ac;
        case 0x24c4b0u: goto label_24c4b0;
        case 0x24c4b4u: goto label_24c4b4;
        case 0x24c4b8u: goto label_24c4b8;
        case 0x24c4bcu: goto label_24c4bc;
        case 0x24c4c0u: goto label_24c4c0;
        case 0x24c4c4u: goto label_24c4c4;
        case 0x24c4c8u: goto label_24c4c8;
        case 0x24c4ccu: goto label_24c4cc;
        case 0x24c4d0u: goto label_24c4d0;
        case 0x24c4d4u: goto label_24c4d4;
        case 0x24c4d8u: goto label_24c4d8;
        case 0x24c4dcu: goto label_24c4dc;
        case 0x24c4e0u: goto label_24c4e0;
        case 0x24c4e4u: goto label_24c4e4;
        case 0x24c4e8u: goto label_24c4e8;
        case 0x24c4ecu: goto label_24c4ec;
        case 0x24c4f0u: goto label_24c4f0;
        case 0x24c4f4u: goto label_24c4f4;
        case 0x24c4f8u: goto label_24c4f8;
        case 0x24c4fcu: goto label_24c4fc;
        case 0x24c500u: goto label_24c500;
        case 0x24c504u: goto label_24c504;
        case 0x24c508u: goto label_24c508;
        case 0x24c50cu: goto label_24c50c;
        case 0x24c510u: goto label_24c510;
        case 0x24c514u: goto label_24c514;
        case 0x24c518u: goto label_24c518;
        case 0x24c51cu: goto label_24c51c;
        case 0x24c520u: goto label_24c520;
        case 0x24c524u: goto label_24c524;
        case 0x24c528u: goto label_24c528;
        case 0x24c52cu: goto label_24c52c;
        case 0x24c530u: goto label_24c530;
        case 0x24c534u: goto label_24c534;
        case 0x24c538u: goto label_24c538;
        case 0x24c53cu: goto label_24c53c;
        case 0x24c540u: goto label_24c540;
        case 0x24c544u: goto label_24c544;
        case 0x24c548u: goto label_24c548;
        case 0x24c54cu: goto label_24c54c;
        case 0x24c550u: goto label_24c550;
        case 0x24c554u: goto label_24c554;
        case 0x24c558u: goto label_24c558;
        case 0x24c55cu: goto label_24c55c;
        default: break;
    }

    ctx->pc = 0x24c280u;

label_24c280:
    // 0x24c280: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x24c280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
label_24c284:
    // 0x24c284: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24c284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24c288:
    // 0x24c288: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x24c288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
label_24c28c:
    // 0x24c28c: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x24c28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
label_24c290:
    // 0x24c290: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24c290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24c294:
    // 0x24c294: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x24c294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
label_24c298:
    // 0x24c298: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24c298u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24c29c:
    // 0x24c29c: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x24c29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
label_24c2a0:
    // 0x24c2a0: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x24c2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24c2a4:
    // 0x24c2a4: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x24c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
label_24c2a8:
    // 0x24c2a8: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x24c2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
label_24c2ac:
    // 0x24c2ac: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x24c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
label_24c2b0:
    // 0x24c2b0: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x24c2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
label_24c2b4:
    // 0x24c2b4: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x24c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
label_24c2b8:
    // 0x24c2b8: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x24c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
label_24c2bc:
    // 0x24c2bc: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x24c2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_24c2c0:
    // 0x24c2c0: 0xc0e4558  jal         func_391560
label_24c2c4:
    if (ctx->pc == 0x24C2C4u) {
        ctx->pc = 0x24C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2C0u;
        // 0x24c2c4: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2C8u;
        goto label_24c2c8;
    }
    ctx->pc = 0x24C2C0u;
    SET_GPR_U32(ctx, 31, 0x24C2C8u);
    ctx->pc = 0x24C2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C2C0u;
    // 0x24c2c4: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391560u, 0x24C2C0u, 0x24C2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C2C8u;
label_24c2c8:
    // 0x24c2c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24c2c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24c2cc:
    // 0x24c2cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x24c2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_24c2d0:
    // 0x24c2d0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x24c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_24c2d4:
    // 0x24c2d4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_24c2d8:
    if (ctx->pc == 0x24C2D8u) {
        ctx->pc = 0x24C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2D4u;
        // 0x24c2d8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C2DCu;
        goto label_24c2dc;
    }
    ctx->pc = 0x24C2D4u;
    {
        const bool branch_taken_0x24c2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C2D4u;
        // 0x24c2d8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c2d4) {
            ctx->pc = 0x24C334u;
            goto label_24c334;
        }
    }
    ctx->pc = 0x24C2DCu;
label_24c2dc:
    // 0x24c2dc: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x24c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_24c2e0:
    // 0x24c2e0: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x24c2e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_24c2e4:
    // 0x24c2e4: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x24c2e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_24c2e8:
    // 0x24c2e8: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x24c2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_24c2ec:
    // 0x24c2ec: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x24c2ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_24c2f0:
    // 0x24c2f0: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x24c2f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_24c2f4:
    // 0x24c2f4: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x24c2f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_24c2f8:
    // 0x24c2f8: 0x6869001f  ldl         $t1, 0x1F($v1)
    ctx->pc = 0x24c2f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_24c2fc:
    // 0x24c2fc: 0x6c690018  ldr         $t1, 0x18($v1)
    ctx->pc = 0x24c2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_24c300:
    // 0x24c300: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x24c300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c304:
    // 0x24c304: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x24c304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c308:
    // 0x24c308: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x24c308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c30c:
    // 0x24c30c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x24c30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c310:
    // 0x24c310: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x24c310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c314:
    // 0x24c314: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x24c314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c318:
    // 0x24c318: 0xb089001f  sdl         $t1, 0x1F($a0)
    ctx->pc = 0x24c318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c31c:
    // 0x24c31c: 0xb4890018  sdr         $t1, 0x18($a0)
    ctx->pc = 0x24c31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c320:
    // 0x24c320: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x24c320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_24c324:
    // 0x24c324: 0x1462ffee  bne         $v1, $v0, . + 4 + (-0x12 << 2)
label_24c328:
    if (ctx->pc == 0x24C328u) {
        ctx->pc = 0x24C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C324u;
        // 0x24c328: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C32Cu;
        goto label_24c32c;
    }
    ctx->pc = 0x24C324u;
    {
        const bool branch_taken_0x24c324 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C324u;
        // 0x24c328: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c324) {
            ctx->pc = 0x24C2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c2e0;
        }
    }
    ctx->pc = 0x24C32Cu;
label_24c32c:
    // 0x24c32c: 0x1000000d  b           . + 4 + (0xD << 2)
label_24c330:
    if (ctx->pc == 0x24C330u) {
        ctx->pc = 0x24C334u;
        goto label_24c334;
    }
    ctx->pc = 0x24C32Cu;
    {
        const bool branch_taken_0x24c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c32c) {
            ctx->pc = 0x24C364u;
            goto label_24c364;
        }
    }
    ctx->pc = 0x24C334u;
label_24c334:
    // 0x24c334: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x24c334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_24c338:
    // 0x24c338: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x24c338u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_24c33c:
    // 0x24c33c: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x24c33cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_24c340:
    // 0x24c340: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x24c340u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_24c344:
    // 0x24c344: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x24c344u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_24c348:
    // 0x24c348: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x24c348u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
label_24c34c:
    // 0x24c34c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x24c34cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_24c350:
    // 0x24c350: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x24c350u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_24c354:
    // 0x24c354: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x24c354u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
label_24c358:
    // 0x24c358: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x24c358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_24c35c:
    // 0x24c35c: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_24c360:
    if (ctx->pc == 0x24C360u) {
        ctx->pc = 0x24C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C35Cu;
        // 0x24c360: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C364u;
        goto label_24c364;
    }
    ctx->pc = 0x24C35Cu;
    {
        const bool branch_taken_0x24c35c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C35Cu;
        // 0x24c360: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c35c) {
            ctx->pc = 0x24C338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c338;
        }
    }
    ctx->pc = 0x24C364u;
label_24c364:
    // 0x24c364: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x24c364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_24c368:
    // 0x24c368: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x24c368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_24c36c:
    // 0x24c36c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x24c36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_24c370:
    // 0x24c370: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x24c370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_24c374:
    // 0x24c374: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x24c374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c378:
    // 0x24c378: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x24c378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c37c:
    // 0x24c37c: 0xb085000f  sdl         $a1, 0xF($a0)
    ctx->pc = 0x24c37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c380:
    // 0x24c380: 0xb4850008  sdr         $a1, 0x8($a0)
    ctx->pc = 0x24c380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_24c384:
    // 0x24c384: 0x811e0086  lb          $fp, 0x86($t0)
    ctx->pc = 0x24c384u;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 134)));
label_24c388:
    // 0x24c388: 0x81150065  lb          $s5, 0x65($t0)
    ctx->pc = 0x24c388u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 101)));
label_24c38c:
    // 0x24c38c: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_24c390:
    if (ctx->pc == 0x24C390u) {
        ctx->pc = 0x24C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C38Cu;
        // 0x24c390: 0x81170087  lb          $s7, 0x87($t0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 135)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C394u;
        goto label_24c394;
    }
    ctx->pc = 0x24C38Cu;
    {
        const bool branch_taken_0x24c38c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C38Cu;
        // 0x24c390: 0x81170087  lb          $s7, 0x87($t0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 135)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c38c) {
            ctx->pc = 0x24C3A4u;
            goto label_24c3a4;
        }
    }
    ctx->pc = 0x24C394u;
label_24c394:
    // 0x24c394: 0xc08a102  jal         func_228408
label_24c398:
    if (ctx->pc == 0x24C398u) {
        ctx->pc = 0x24C398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C394u;
        // 0x24c398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C39Cu;
        goto label_24c39c;
    }
    ctx->pc = 0x24C394u;
    SET_GPR_U32(ctx, 31, 0x24C39Cu);
    ctx->pc = 0x24C398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C394u;
    // 0x24c398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228408u, 0x24C394u, 0x24C39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C39Cu;
label_24c39c:
    // 0x24c39c: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_24c3a0:
    if (ctx->pc == 0x24C3A0u) {
        ctx->pc = 0x24C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C39Cu;
        // 0x24c3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3A4u;
        goto label_24c3a4;
    }
    ctx->pc = 0x24C39Cu;
    {
        const bool branch_taken_0x24c39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C39Cu;
        // 0x24c3a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c39c) {
            ctx->pc = 0x24C52Cu;
            goto label_24c52c;
        }
    }
    ctx->pc = 0x24C3A4u;
label_24c3a4:
    // 0x24c3a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x24c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24c3a8:
    // 0x24c3a8: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
label_24c3ac:
    if (ctx->pc == 0x24C3ACu) {
        ctx->pc = 0x24C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3A8u;
        // 0x24c3ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3B0u;
        goto label_24c3b0;
    }
    ctx->pc = 0x24C3A8u;
    {
        const bool branch_taken_0x24c3a8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x24C3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3A8u;
        // 0x24c3ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3a8) {
            ctx->pc = 0x24C3C0u;
            goto label_24c3c0;
        }
    }
    ctx->pc = 0x24C3B0u;
label_24c3b0:
    // 0x24c3b0: 0xc0932ec  jal         func_24CBB0
label_24c3b4:
    if (ctx->pc == 0x24C3B4u) {
        ctx->pc = 0x24C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3B0u;
        // 0x24c3b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3B8u;
        goto label_24c3b8;
    }
    ctx->pc = 0x24C3B0u;
    SET_GPR_U32(ctx, 31, 0x24C3B8u);
    ctx->pc = 0x24C3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C3B0u;
    // 0x24c3b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24CBB0u, 0x24C3B0u, 0x24C3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3B8u;
label_24c3b8:
    // 0x24c3b8: 0x1000005d  b           . + 4 + (0x5D << 2)
label_24c3bc:
    if (ctx->pc == 0x24C3BCu) {
        ctx->pc = 0x24C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3B8u;
        // 0x24c3bc: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3C0u;
        goto label_24c3c0;
    }
    ctx->pc = 0x24C3B8u;
    {
        const bool branch_taken_0x24c3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3B8u;
        // 0x24c3bc: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c3b8) {
            ctx->pc = 0x24C530u;
            goto label_24c530;
        }
    }
    ctx->pc = 0x24C3C0u;
label_24c3c0:
    // 0x24c3c0: 0xc089bfc  jal         func_226FF0
label_24c3c4:
    if (ctx->pc == 0x24C3C4u) {
        ctx->pc = 0x24C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3C0u;
        // 0x24c3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3C8u;
        goto label_24c3c8;
    }
    ctx->pc = 0x24C3C0u;
    SET_GPR_U32(ctx, 31, 0x24C3C8u);
    ctx->pc = 0x24C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C3C0u;
    // 0x24c3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x24C3C0u, 0x24C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3C8u;
label_24c3c8:
    // 0x24c3c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_24c3cc:
    if (ctx->pc == 0x24C3CCu) {
        ctx->pc = 0x24C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3C8u;
        // 0x24c3cc: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3D0u;
        goto label_24c3d0;
    }
    ctx->pc = 0x24C3C8u;
    {
        const bool branch_taken_0x24c3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c3c8) {
            ctx->pc = 0x24C3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C3C8u;
            // 0x24c3cc: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C3DCu;
            goto label_24c3dc;
        }
    }
    ctx->pc = 0x24C3D0u;
label_24c3d0:
    // 0x24c3d0: 0xc095fce  jal         func_257F38
label_24c3d4:
    if (ctx->pc == 0x24C3D4u) {
        ctx->pc = 0x24C3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C3D0u;
        // 0x24c3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C3D8u;
        goto label_24c3d8;
    }
    ctx->pc = 0x24C3D0u;
    SET_GPR_U32(ctx, 31, 0x24C3D8u);
    ctx->pc = 0x24C3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C3D0u;
    // 0x24c3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x24C3D0u, 0x24C3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C3D8u;
label_24c3d8:
    // 0x24c3d8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x24c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_24c3dc:
    // 0x24c3dc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x24c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_24c3e0:
    // 0x24c3e0: 0x24421790  addiu       $v0, $v0, 0x1790
    ctx->pc = 0x24c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6032));
label_24c3e4:
    // 0x24c3e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_24c3e8:
    // 0x24c3e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24c3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24c3ec:
    // 0x24c3ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x24c3ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_24c3f0:
    // 0x24c3f0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x24c3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_24c3f4:
    // 0x24c3f4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x24c3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_24c3f8:
    // 0x24c3f8: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x24c3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_24c3fc:
    // 0x24c3fc: 0x7fa300d0  sq          $v1, 0xD0($sp)
    ctx->pc = 0x24c3fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
label_24c400:
    // 0x24c400: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x24c400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_24c404:
    // 0x24c404: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x24c404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_24c408:
    // 0x24c408: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x24c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_24c40c:
    // 0x24c40c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x24c40cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_24c410:
    // 0x24c410: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x24c410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_24c414:
    // 0x24c414: 0xc0f809  jalr        $a2
label_24c418:
    if (ctx->pc == 0x24C418u) {
        ctx->pc = 0x24C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C414u;
        // 0x24c418: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C41Cu;
        goto label_24c41c;
    }
    ctx->pc = 0x24C414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x24C41Cu);
        ctx->pc = 0x24C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C414u;
        // 0x24c418: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C414u, 0x24C41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C41Cu;
label_24c41c:
    // 0x24c41c: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x24c41cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_24c420:
    // 0x24c420: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x24c420u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_24c424:
    // 0x24c424: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x24c424u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_24c428:
    // 0x24c428: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x24c428u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_24c42c:
    // 0x24c42c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x24c42cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_24c430:
    // 0x24c430: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x24c430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_24c434:
    // 0x24c434: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x24c434u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_24c438:
    // 0x24c438: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x24c438u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_24c43c:
    // 0x24c43c: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x24c43cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_24c440:
    // 0x24c440: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24c440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_24c444:
    // 0x24c444: 0x7fa500e0  sq          $a1, 0xE0($sp)
    ctx->pc = 0x24c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 5));
label_24c448:
    // 0x24c448: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x24c448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_24c44c:
    // 0x24c44c: 0xc0e8b48  jal         func_3A2D20
label_24c450:
    if (ctx->pc == 0x24C450u) {
        ctx->pc = 0x24C450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C44Cu;
        // 0x24c450: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C454u;
        goto label_24c454;
    }
    ctx->pc = 0x24C44Cu;
    SET_GPR_U32(ctx, 31, 0x24C454u);
    ctx->pc = 0x24C450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C44Cu;
    // 0x24c450: 0x7fa20110  sq          $v0, 0x110($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x24C44Cu, 0x24C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C454u;
label_24c454:
    // 0x24c454: 0x27b400b0  addiu       $s4, $sp, 0xB0
    ctx->pc = 0x24c454u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_24c458:
    // 0x24c458: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24c458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_24c45c:
    // 0x24c45c: 0xc0e8b58  jal         func_3A2D60
label_24c460:
    if (ctx->pc == 0x24C460u) {
        ctx->pc = 0x24C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C45Cu;
        // 0x24c460: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C464u;
        goto label_24c464;
    }
    ctx->pc = 0x24C45Cu;
    SET_GPR_U32(ctx, 31, 0x24C464u);
    ctx->pc = 0x24C460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C45Cu;
    // 0x24c460: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24C45Cu, 0x24C464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C464u;
label_24c464:
    // 0x24c464: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24c464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_24c468:
    // 0x24c468: 0xc0e8b58  jal         func_3A2D60
label_24c46c:
    if (ctx->pc == 0x24C46Cu) {
        ctx->pc = 0x24C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C468u;
        // 0x24c46c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C470u;
        goto label_24c470;
    }
    ctx->pc = 0x24C468u;
    SET_GPR_U32(ctx, 31, 0x24C470u);
    ctx->pc = 0x24C46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C468u;
    // 0x24c46c: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x24C468u, 0x24C470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C470u;
label_24c470:
    // 0x24c470: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24c470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_24c474:
    // 0x24c474: 0xc0e8b70  jal         func_3A2DC0
label_24c478:
    if (ctx->pc == 0x24C478u) {
        ctx->pc = 0x24C478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C474u;
        // 0x24c478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C47Cu;
        goto label_24c47c;
    }
    ctx->pc = 0x24C474u;
    SET_GPR_U32(ctx, 31, 0x24C47Cu);
    ctx->pc = 0x24C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C474u;
    // 0x24c478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x24C474u, 0x24C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C47Cu;
label_24c47c:
    // 0x24c47c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_24c480:
    // 0x24c480: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24c480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24c484:
    // 0x24c484: 0xc0e8b98  jal         func_3A2E60
label_24c488:
    if (ctx->pc == 0x24C488u) {
        ctx->pc = 0x24C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C484u;
        // 0x24c488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C48Cu;
        goto label_24c48c;
    }
    ctx->pc = 0x24C484u;
    SET_GPR_U32(ctx, 31, 0x24C48Cu);
    ctx->pc = 0x24C488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C484u;
    // 0x24c488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E60u, 0x24C484u, 0x24C48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C48Cu;
label_24c48c:
    // 0x24c48c: 0x8e242c7c  lw          $a0, 0x2C7C($s1)
    ctx->pc = 0x24c48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_24c490:
    // 0x24c490: 0xc0e8b50  jal         func_3A2D40
label_24c494:
    if (ctx->pc == 0x24C494u) {
        ctx->pc = 0x24C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C490u;
        // 0x24c494: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C498u;
        goto label_24c498;
    }
    ctx->pc = 0x24C490u;
    SET_GPR_U32(ctx, 31, 0x24C498u);
    ctx->pc = 0x24C494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C490u;
    // 0x24c494: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x24C490u, 0x24C498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C498u;
label_24c498:
    // 0x24c498: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_24c49c:
    if (ctx->pc == 0x24C49Cu) {
        ctx->pc = 0x24C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C498u;
        // 0x24c49c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4A0u;
        goto label_24c4a0;
    }
    ctx->pc = 0x24C498u;
    {
        const bool branch_taken_0x24c498 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c498) {
            ctx->pc = 0x24C49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C498u;
            // 0x24c49c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C4A8u;
            goto label_24c4a8;
        }
    }
    ctx->pc = 0x24C4A0u;
label_24c4a0:
    // 0x24c4a0: 0x10000022  b           . + 4 + (0x22 << 2)
label_24c4a4:
    if (ctx->pc == 0x24C4A4u) {
        ctx->pc = 0x24C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4A0u;
        // 0x24c4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4A8u;
        goto label_24c4a8;
    }
    ctx->pc = 0x24C4A0u;
    {
        const bool branch_taken_0x24c4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4A0u;
        // 0x24c4a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4a0) {
            ctx->pc = 0x24C52Cu;
            goto label_24c52c;
        }
    }
    ctx->pc = 0x24C4A8u;
label_24c4a8:
    // 0x24c4a8: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x24c4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_24c4ac:
    // 0x24c4ac: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x24c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_24c4b0:
    // 0x24c4b0: 0x40f809  jalr        $v0
label_24c4b4:
    if (ctx->pc == 0x24C4B4u) {
        ctx->pc = 0x24C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4B0u;
        // 0x24c4b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4B8u;
        goto label_24c4b8;
    }
    ctx->pc = 0x24C4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24C4B8u);
        ctx->pc = 0x24C4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4B0u;
        // 0x24c4b4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C4B0u, 0x24C4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24C4B8u;
label_24c4b8:
    // 0x24c4b8: 0x12c00015  beqz        $s6, . + 4 + (0x15 << 2)
label_24c4bc:
    if (ctx->pc == 0x24C4BCu) {
        ctx->pc = 0x24C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4B8u;
        // 0x24c4bc: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4C0u;
        goto label_24c4c0;
    }
    ctx->pc = 0x24C4B8u;
    {
        const bool branch_taken_0x24c4b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4B8u;
        // 0x24c4bc: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c4b8) {
            ctx->pc = 0x24C510u;
            goto label_24c510;
        }
    }
    ctx->pc = 0x24C4C0u;
label_24c4c0:
    // 0x24c4c0: 0x8e252c7c  lw          $a1, 0x2C7C($s1)
    ctx->pc = 0x24c4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_24c4c4:
    // 0x24c4c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x24c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_24c4c8:
    // 0x24c4c8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_24c4cc:
    // 0x24c4cc: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x24c4ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_24c4d0:
    // 0x24c4d0: 0x8ca40840  lw          $a0, 0x840($a1)
    ctx->pc = 0x24c4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2112)));
label_24c4d4:
    // 0x24c4d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24c4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_24c4d8:
    // 0x24c4d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24c4d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24c4dc:
    // 0x24c4dc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x24c4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_24c4e0:
    // 0x24c4e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24c4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24c4e4:
    // 0x24c4e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x24c4e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24c4e8:
    // 0x24c4e8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x24c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_24c4ec:
    // 0x24c4ec: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x24c4ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_24c4f0:
    // 0x24c4f0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x24c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_24c4f4:
    // 0x24c4f4: 0xc0e6250  jal         func_398940
label_24c4f8:
    if (ctx->pc == 0x24C4F8u) {
        ctx->pc = 0x24C4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C4F4u;
        // 0x24c4f8: 0x240a0041  addiu       $t2, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C4FCu;
        goto label_24c4fc;
    }
    ctx->pc = 0x24C4F4u;
    SET_GPR_U32(ctx, 31, 0x24C4FCu);
    ctx->pc = 0x24C4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C4F4u;
    // 0x24c4f8: 0x240a0041  addiu       $t2, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398940u, 0x24C4F4u, 0x24C4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C4FCu;
label_24c4fc:
    // 0x24c4fc: 0x8e232c7c  lw          $v1, 0x2C7C($s1)
    ctx->pc = 0x24c4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11388)));
label_24c500:
    // 0x24c500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24c500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c504:
    // 0x24c504: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24c504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24c508:
    // 0x24c508: 0xc0e637e  jal         func_398DF8
label_24c50c:
    if (ctx->pc == 0x24C50Cu) {
        ctx->pc = 0x24C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C508u;
        // 0x24c50c: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C510u;
        goto label_24c510;
    }
    ctx->pc = 0x24C508u;
    SET_GPR_U32(ctx, 31, 0x24C510u);
    ctx->pc = 0x24C50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C508u;
    // 0x24c50c: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398DF8u, 0x24C508u, 0x24C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C510u;
label_24c510:
    // 0x24c510: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24c510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24c514:
    // 0x24c514: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x24c514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24c518:
    // 0x24c518: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x24c518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_24c51c:
    // 0x24c51c: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x24c51cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_24c520:
    // 0x24c520: 0xc0931b6  jal         func_24C6D8
label_24c524:
    if (ctx->pc == 0x24C524u) {
        ctx->pc = 0x24C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C520u;
        // 0x24c524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C528u;
        goto label_24c528;
    }
    ctx->pc = 0x24C520u;
    SET_GPR_U32(ctx, 31, 0x24C528u);
    ctx->pc = 0x24C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C520u;
    // 0x24c524: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C6D8u, 0x24C520u, 0x24C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C528u;
label_24c528:
    // 0x24c528: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x24c528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24c52c:
    // 0x24c52c: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x24c52cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_24c530:
    // 0x24c530: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x24c530u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_24c534:
    // 0x24c534: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x24c534u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_24c538:
    // 0x24c538: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x24c538u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_24c53c:
    // 0x24c53c: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x24c53cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_24c540:
    // 0x24c540: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x24c540u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_24c544:
    // 0x24c544: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x24c544u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_24c548:
    // 0x24c548: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x24c548u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_24c54c:
    // 0x24c54c: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x24c54cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_24c550:
    // 0x24c550: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x24c550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_24c554:
    // 0x24c554: 0x3e00008  jr          $ra
label_24c558:
    if (ctx->pc == 0x24C558u) {
        ctx->pc = 0x24C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C554u;
        // 0x24c558: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24C55Cu;
        goto label_24c55c;
    }
    ctx->pc = 0x24C554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C554u;
        // 0x24c558: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C55Cu;
label_24c55c:
    // 0x24c55c: 0x0  nop
    ctx->pc = 0x24c55cu;
    // NOP
    ctx->pc = 0x24c560u;
}
