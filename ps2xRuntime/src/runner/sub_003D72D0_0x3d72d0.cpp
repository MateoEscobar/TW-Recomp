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

// Function: sub_003D72D0
// Address: 0x3d72d0 - 0x3d74a0
void sub_003D72D0_0x3d72d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D72D0_0x3d72d0");
#endif

    switch (ctx->pc) {
        case 0x3d72d0u: goto label_3d72d0;
        case 0x3d72d4u: goto label_3d72d4;
        case 0x3d72d8u: goto label_3d72d8;
        case 0x3d72dcu: goto label_3d72dc;
        case 0x3d72e0u: goto label_3d72e0;
        case 0x3d72e4u: goto label_3d72e4;
        case 0x3d72e8u: goto label_3d72e8;
        case 0x3d72ecu: goto label_3d72ec;
        case 0x3d72f0u: goto label_3d72f0;
        case 0x3d72f4u: goto label_3d72f4;
        case 0x3d72f8u: goto label_3d72f8;
        case 0x3d72fcu: goto label_3d72fc;
        case 0x3d7300u: goto label_3d7300;
        case 0x3d7304u: goto label_3d7304;
        case 0x3d7308u: goto label_3d7308;
        case 0x3d730cu: goto label_3d730c;
        case 0x3d7310u: goto label_3d7310;
        case 0x3d7314u: goto label_3d7314;
        case 0x3d7318u: goto label_3d7318;
        case 0x3d731cu: goto label_3d731c;
        case 0x3d7320u: goto label_3d7320;
        case 0x3d7324u: goto label_3d7324;
        case 0x3d7328u: goto label_3d7328;
        case 0x3d732cu: goto label_3d732c;
        case 0x3d7330u: goto label_3d7330;
        case 0x3d7334u: goto label_3d7334;
        case 0x3d7338u: goto label_3d7338;
        case 0x3d733cu: goto label_3d733c;
        case 0x3d7340u: goto label_3d7340;
        case 0x3d7344u: goto label_3d7344;
        case 0x3d7348u: goto label_3d7348;
        case 0x3d734cu: goto label_3d734c;
        case 0x3d7350u: goto label_3d7350;
        case 0x3d7354u: goto label_3d7354;
        case 0x3d7358u: goto label_3d7358;
        case 0x3d735cu: goto label_3d735c;
        case 0x3d7360u: goto label_3d7360;
        case 0x3d7364u: goto label_3d7364;
        case 0x3d7368u: goto label_3d7368;
        case 0x3d736cu: goto label_3d736c;
        case 0x3d7370u: goto label_3d7370;
        case 0x3d7374u: goto label_3d7374;
        case 0x3d7378u: goto label_3d7378;
        case 0x3d737cu: goto label_3d737c;
        case 0x3d7380u: goto label_3d7380;
        case 0x3d7384u: goto label_3d7384;
        case 0x3d7388u: goto label_3d7388;
        case 0x3d738cu: goto label_3d738c;
        case 0x3d7390u: goto label_3d7390;
        case 0x3d7394u: goto label_3d7394;
        case 0x3d7398u: goto label_3d7398;
        case 0x3d739cu: goto label_3d739c;
        case 0x3d73a0u: goto label_3d73a0;
        case 0x3d73a4u: goto label_3d73a4;
        case 0x3d73a8u: goto label_3d73a8;
        case 0x3d73acu: goto label_3d73ac;
        case 0x3d73b0u: goto label_3d73b0;
        case 0x3d73b4u: goto label_3d73b4;
        case 0x3d73b8u: goto label_3d73b8;
        case 0x3d73bcu: goto label_3d73bc;
        case 0x3d73c0u: goto label_3d73c0;
        case 0x3d73c4u: goto label_3d73c4;
        case 0x3d73c8u: goto label_3d73c8;
        case 0x3d73ccu: goto label_3d73cc;
        case 0x3d73d0u: goto label_3d73d0;
        case 0x3d73d4u: goto label_3d73d4;
        case 0x3d73d8u: goto label_3d73d8;
        case 0x3d73dcu: goto label_3d73dc;
        case 0x3d73e0u: goto label_3d73e0;
        case 0x3d73e4u: goto label_3d73e4;
        case 0x3d73e8u: goto label_3d73e8;
        case 0x3d73ecu: goto label_3d73ec;
        case 0x3d73f0u: goto label_3d73f0;
        case 0x3d73f4u: goto label_3d73f4;
        case 0x3d73f8u: goto label_3d73f8;
        case 0x3d73fcu: goto label_3d73fc;
        case 0x3d7400u: goto label_3d7400;
        case 0x3d7404u: goto label_3d7404;
        case 0x3d7408u: goto label_3d7408;
        case 0x3d740cu: goto label_3d740c;
        case 0x3d7410u: goto label_3d7410;
        case 0x3d7414u: goto label_3d7414;
        case 0x3d7418u: goto label_3d7418;
        case 0x3d741cu: goto label_3d741c;
        case 0x3d7420u: goto label_3d7420;
        case 0x3d7424u: goto label_3d7424;
        case 0x3d7428u: goto label_3d7428;
        case 0x3d742cu: goto label_3d742c;
        case 0x3d7430u: goto label_3d7430;
        case 0x3d7434u: goto label_3d7434;
        case 0x3d7438u: goto label_3d7438;
        case 0x3d743cu: goto label_3d743c;
        case 0x3d7440u: goto label_3d7440;
        case 0x3d7444u: goto label_3d7444;
        case 0x3d7448u: goto label_3d7448;
        case 0x3d744cu: goto label_3d744c;
        case 0x3d7450u: goto label_3d7450;
        case 0x3d7454u: goto label_3d7454;
        case 0x3d7458u: goto label_3d7458;
        case 0x3d745cu: goto label_3d745c;
        case 0x3d7460u: goto label_3d7460;
        case 0x3d7464u: goto label_3d7464;
        case 0x3d7468u: goto label_3d7468;
        case 0x3d746cu: goto label_3d746c;
        case 0x3d7470u: goto label_3d7470;
        case 0x3d7474u: goto label_3d7474;
        case 0x3d7478u: goto label_3d7478;
        case 0x3d747cu: goto label_3d747c;
        case 0x3d7480u: goto label_3d7480;
        case 0x3d7484u: goto label_3d7484;
        case 0x3d7488u: goto label_3d7488;
        case 0x3d748cu: goto label_3d748c;
        case 0x3d7490u: goto label_3d7490;
        case 0x3d7494u: goto label_3d7494;
        case 0x3d7498u: goto label_3d7498;
        case 0x3d749cu: goto label_3d749c;
        default: break;
    }

    ctx->pc = 0x3d72d0u;

label_3d72d0:
    // 0x3d72d0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3d72d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_3d72d4:
    // 0x3d72d4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3d72d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3d72d8:
    // 0x3d72d8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3d72d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3d72dc:
    // 0x3d72dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d72dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d72e0:
    // 0x3d72e0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3d72e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3d72e4:
    // 0x3d72e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d72e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d72e8:
    // 0x3d72e8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3d72e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3d72ec:
    // 0x3d72ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3d72ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3d72f0:
    // 0x3d72f0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3d72f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3d72f4:
    // 0x3d72f4: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3d72f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3d72f8:
    // 0x3d72f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d72f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3d72fc:
    // 0x3d72fc: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x3d72fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3d7300:
    // 0x3d7300: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x3d7300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3d7304:
    // 0x3d7304: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x3d7304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3d7308:
    // 0x3d7308: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3d7308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3d730c:
    // 0x3d730c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3d730cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3d7310:
    // 0x3d7310: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d7310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d7314:
    // 0x3d7314: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3d7314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3d7318:
    // 0x3d7318: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3d7318u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3d731c:
    // 0x3d731c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d731cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d7320:
    // 0x3d7320: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d7320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d7324:
    // 0x3d7324: 0x40f809  jalr        $v0
label_3d7328:
    if (ctx->pc == 0x3D7328u) {
        ctx->pc = 0x3D7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7324u;
        // 0x3d7328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D732Cu;
        goto label_3d732c;
    }
    ctx->pc = 0x3D7324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D732Cu);
        ctx->pc = 0x3D7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7324u;
        // 0x3d7328: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7324u, 0x3D732Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D732Cu;
label_3d732c:
    // 0x3d732c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3d732cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3d7330:
    // 0x3d7330: 0xe636008c  swc1        $f22, 0x8C($s1)
    ctx->pc = 0x3d7330u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_3d7334:
    // 0x3d7334: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x3d7334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_3d7338:
    // 0x3d7338: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3d7338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d733c:
    // 0x3d733c: 0xc0ea146  jal         func_3A8518
label_3d7340:
    if (ctx->pc == 0x3D7340u) {
        ctx->pc = 0x3D7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D733Cu;
        // 0x3d7340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7344u;
        goto label_3d7344;
    }
    ctx->pc = 0x3D733Cu;
    SET_GPR_U32(ctx, 31, 0x3D7344u);
    ctx->pc = 0x3D7340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D733Cu;
    // 0x3d7340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D733Cu, 0x3D7344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7344u;
label_3d7344:
    // 0x3d7344: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d7344u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7348:
    // 0x3d7348: 0xc0ea146  jal         func_3A8518
label_3d734c:
    if (ctx->pc == 0x3D734Cu) {
        ctx->pc = 0x3D734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7348u;
        // 0x3d734c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7350u;
        goto label_3d7350;
    }
    ctx->pc = 0x3D7348u;
    SET_GPR_U32(ctx, 31, 0x3D7350u);
    ctx->pc = 0x3D734Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7348u;
    // 0x3d734c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D7348u, 0x3D7350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7350u;
label_3d7350:
    // 0x3d7350: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3d7350u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d7354:
    // 0x3d7354: 0xc0ea13a  jal         func_3A84E8
label_3d7358:
    if (ctx->pc == 0x3D7358u) {
        ctx->pc = 0x3D7358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7354u;
        // 0x3d7358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D735Cu;
        goto label_3d735c;
    }
    ctx->pc = 0x3D7354u;
    SET_GPR_U32(ctx, 31, 0x3D735Cu);
    ctx->pc = 0x3D7358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7354u;
    // 0x3d7358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3D7354u, 0x3D735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D735Cu;
label_3d735c:
    // 0x3d735c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3d735cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3d7360:
    // 0x3d7360: 0xc0ea146  jal         func_3A8518
label_3d7364:
    if (ctx->pc == 0x3D7364u) {
        ctx->pc = 0x3D7364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7360u;
        // 0x3d7364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7368u;
        goto label_3d7368;
    }
    ctx->pc = 0x3D7360u;
    SET_GPR_U32(ctx, 31, 0x3D7368u);
    ctx->pc = 0x3D7364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7360u;
    // 0x3d7364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3D7360u, 0x3D7368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7368u;
label_3d7368:
    // 0x3d7368: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3d7368u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d736c:
    // 0x3d736c: 0xc0ea14c  jal         func_3A8530
label_3d7370:
    if (ctx->pc == 0x3D7370u) {
        ctx->pc = 0x3D7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D736Cu;
        // 0x3d7370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7374u;
        goto label_3d7374;
    }
    ctx->pc = 0x3D736Cu;
    SET_GPR_U32(ctx, 31, 0x3D7374u);
    ctx->pc = 0x3D7370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D736Cu;
    // 0x3d7370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D736Cu, 0x3D7374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7374u;
label_3d7374:
    // 0x3d7374: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3d7374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3d7378:
    // 0x3d7378: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d7378u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d737c:
    // 0x3d737c: 0xc0ea12a  jal         func_3A84A8
label_3d7380:
    if (ctx->pc == 0x3D7380u) {
        ctx->pc = 0x3D7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D737Cu;
        // 0x3d7380: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7384u;
        goto label_3d7384;
    }
    ctx->pc = 0x3D737Cu;
    SET_GPR_U32(ctx, 31, 0x3D7384u);
    ctx->pc = 0x3D7380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D737Cu;
    // 0x3d7380: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D737Cu, 0x3D7384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7384u;
label_3d7384:
    // 0x3d7384: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d7384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d7388:
    // 0x3d7388: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x3d7388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d738c:
    // 0x3d738c: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x3d738cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_3d7390:
    // 0x3d7390: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x3d7390u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_3d7394:
    // 0x3d7394: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d7394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d7398:
    // 0x3d7398: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d7398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d739c:
    // 0x3d739c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3d739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3d73a0:
    // 0x3d73a0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3d73a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d73a4:
    // 0x3d73a4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3d73a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3d73a8:
    // 0x3d73a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3d73a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3d73ac:
    // 0x3d73ac: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x3d73acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_3d73b0:
    // 0x3d73b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3d73b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3d73b4:
    // 0x3d73b4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x3d73b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3d73b8:
    // 0x3d73b8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3d73b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d73bc:
    // 0x3d73bc: 0xc136b18  jal         func_4DAC60
label_3d73c0:
    if (ctx->pc == 0x3D73C0u) {
        ctx->pc = 0x3D73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73BCu;
        // 0x3d73c0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D73C4u;
        goto label_3d73c4;
    }
    ctx->pc = 0x3D73BCu;
    SET_GPR_U32(ctx, 31, 0x3D73C4u);
    ctx->pc = 0x3D73C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D73BCu;
    // 0x3d73c0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x3D73BCu, 0x3D73C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D73C4u;
label_3d73c4:
    // 0x3d73c4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3d73c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d73c8:
    // 0x3d73c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d73c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d73cc:
    // 0x3d73cc: 0x7e220010  sq          $v0, 0x10($s1)
    ctx->pc = 0x3d73ccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
label_3d73d0:
    // 0x3d73d0: 0xc0e896e  jal         func_3A25B8
label_3d73d4:
    if (ctx->pc == 0x3D73D4u) {
        ctx->pc = 0x3D73D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D73D0u;
        // 0x3d73d4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D73D8u;
        goto label_3d73d8;
    }
    ctx->pc = 0x3D73D0u;
    SET_GPR_U32(ctx, 31, 0x3D73D8u);
    ctx->pc = 0x3D73D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D73D0u;
    // 0x3d73d4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A25B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A25B8u, 0x3D73D0u, 0x3D73D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D73D8u;
label_3d73d8:
    // 0x3d73d8: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3d73d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
label_3d73dc:
    // 0x3d73dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d73dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d73e0:
    // 0x3d73e0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3d73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d73e4:
    // 0x3d73e4: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x3d73e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_3d73e8:
    // 0x3d73e8: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3d73e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3d73ec:
    // 0x3d73ec: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x3d73ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_3d73f0:
    // 0x3d73f0: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3d73f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3d73f4:
    // 0x3d73f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3d73f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3d73f8:
    // 0x3d73f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3d73f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d73fc:
    // 0x3d73fc: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x3d73fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_3d7400:
    // 0x3d7400: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d7400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7404:
    // 0x3d7404: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x3d7404u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_3d7408:
    // 0x3d7408: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x3d7408u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
label_3d740c:
    // 0x3d740c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x3d740cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_3d7410:
    // 0x3d7410: 0xc12e29c  jal         func_4B8A70
label_3d7414:
    if (ctx->pc == 0x3D7414u) {
        ctx->pc = 0x3D7414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7410u;
        // 0x3d7414: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7418u;
        goto label_3d7418;
    }
    ctx->pc = 0x3D7410u;
    SET_GPR_U32(ctx, 31, 0x3D7418u);
    ctx->pc = 0x3D7414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7410u;
    // 0x3d7414: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x3D7410u, 0x3D7418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7418u;
label_3d7418:
    // 0x3d7418: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3d7418u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3d741c:
    // 0x3d741c: 0xc12e310  jal         func_4B8C40
label_3d7420:
    if (ctx->pc == 0x3D7420u) {
        ctx->pc = 0x3D7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D741Cu;
        // 0x3d7420: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D7424u;
        goto label_3d7424;
    }
    ctx->pc = 0x3D741Cu;
    SET_GPR_U32(ctx, 31, 0x3D7424u);
    ctx->pc = 0x3D7420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D741Cu;
    // 0x3d7420: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x3D741Cu, 0x3D7424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7424u;
label_3d7424:
    // 0x3d7424: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3d7424u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3d7428:
    // 0x3d7428: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d7428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d742c:
    // 0x3d742c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x3d742cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_3d7430:
    // 0x3d7430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3d7430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3d7434:
    // 0x3d7434: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3d7434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_3d7438:
    // 0x3d7438: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x3d7438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_3d743c:
    // 0x3d743c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d743cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d7440:
    // 0x3d7440: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x3d7440u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
label_3d7444:
    // 0x3d7444: 0xc0e858c  jal         func_3A1630
label_3d7448:
    if (ctx->pc == 0x3D7448u) {
        ctx->pc = 0x3D7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7444u;
        // 0x3d7448: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D744Cu;
        goto label_3d744c;
    }
    ctx->pc = 0x3D7444u;
    SET_GPR_U32(ctx, 31, 0x3D744Cu);
    ctx->pc = 0x3D7448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7444u;
    // 0x3d7448: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3D7444u, 0x3D744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D744Cu;
label_3d744c:
    // 0x3d744c: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3d744cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3d7450:
    // 0x3d7450: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3d7450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3d7454:
    // 0x3d7454: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3d7454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3d7458:
    // 0x3d7458: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3d7458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3d745c:
    // 0x3d745c: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x3d745cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_3d7460:
    // 0x3d7460: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x3d7460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_3d7464:
    // 0x3d7464: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x3d7464u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_3d7468:
    // 0x3d7468: 0xe6360090  swc1        $f22, 0x90($s1)
    ctx->pc = 0x3d7468u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_3d746c:
    // 0x3d746c: 0xe636008c  swc1        $f22, 0x8C($s1)
    ctx->pc = 0x3d746cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 140), bits); }
label_3d7470:
    // 0x3d7470: 0xae760004  sw          $s6, 0x4($s3)
    ctx->pc = 0x3d7470u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 22));
label_3d7474:
    // 0x3d7474: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3d7474u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3d7478:
    // 0x3d7478: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3d7478u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3d747c:
    // 0x3d747c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3d747cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3d7480:
    // 0x3d7480: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3d7480u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d7484:
    // 0x3d7484: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3d7484u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d7488:
    // 0x3d7488: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d7488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3d748c:
    // 0x3d748c: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x3d748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d7490:
    // 0x3d7490: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x3d7490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d7494:
    // 0x3d7494: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x3d7494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d7498:
    // 0x3d7498: 0x3e00008  jr          $ra
label_3d749c:
    if (ctx->pc == 0x3D749Cu) {
        ctx->pc = 0x3D749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7498u;
        // 0x3d749c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D74A0u;
        goto label_fallthrough_0x3d7498;
    }
    ctx->pc = 0x3D7498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7498u;
        // 0x3d749c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d7498:
    ctx->pc = 0x3D74A0u;
}
