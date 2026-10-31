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

// Function: sub_0015F308
// Address: 0x15f308 - 0x15f4f8
void sub_0015F308_0x15f308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F308_0x15f308");
#endif

    switch (ctx->pc) {
        case 0x15f308u: goto label_15f308;
        case 0x15f30cu: goto label_15f30c;
        case 0x15f310u: goto label_15f310;
        case 0x15f314u: goto label_15f314;
        case 0x15f318u: goto label_15f318;
        case 0x15f31cu: goto label_15f31c;
        case 0x15f320u: goto label_15f320;
        case 0x15f324u: goto label_15f324;
        case 0x15f328u: goto label_15f328;
        case 0x15f32cu: goto label_15f32c;
        case 0x15f330u: goto label_15f330;
        case 0x15f334u: goto label_15f334;
        case 0x15f338u: goto label_15f338;
        case 0x15f33cu: goto label_15f33c;
        case 0x15f340u: goto label_15f340;
        case 0x15f344u: goto label_15f344;
        case 0x15f348u: goto label_15f348;
        case 0x15f34cu: goto label_15f34c;
        case 0x15f350u: goto label_15f350;
        case 0x15f354u: goto label_15f354;
        case 0x15f358u: goto label_15f358;
        case 0x15f35cu: goto label_15f35c;
        case 0x15f360u: goto label_15f360;
        case 0x15f364u: goto label_15f364;
        case 0x15f368u: goto label_15f368;
        case 0x15f36cu: goto label_15f36c;
        case 0x15f370u: goto label_15f370;
        case 0x15f374u: goto label_15f374;
        case 0x15f378u: goto label_15f378;
        case 0x15f37cu: goto label_15f37c;
        case 0x15f380u: goto label_15f380;
        case 0x15f384u: goto label_15f384;
        case 0x15f388u: goto label_15f388;
        case 0x15f38cu: goto label_15f38c;
        case 0x15f390u: goto label_15f390;
        case 0x15f394u: goto label_15f394;
        case 0x15f398u: goto label_15f398;
        case 0x15f39cu: goto label_15f39c;
        case 0x15f3a0u: goto label_15f3a0;
        case 0x15f3a4u: goto label_15f3a4;
        case 0x15f3a8u: goto label_15f3a8;
        case 0x15f3acu: goto label_15f3ac;
        case 0x15f3b0u: goto label_15f3b0;
        case 0x15f3b4u: goto label_15f3b4;
        case 0x15f3b8u: goto label_15f3b8;
        case 0x15f3bcu: goto label_15f3bc;
        case 0x15f3c0u: goto label_15f3c0;
        case 0x15f3c4u: goto label_15f3c4;
        case 0x15f3c8u: goto label_15f3c8;
        case 0x15f3ccu: goto label_15f3cc;
        case 0x15f3d0u: goto label_15f3d0;
        case 0x15f3d4u: goto label_15f3d4;
        case 0x15f3d8u: goto label_15f3d8;
        case 0x15f3dcu: goto label_15f3dc;
        case 0x15f3e0u: goto label_15f3e0;
        case 0x15f3e4u: goto label_15f3e4;
        case 0x15f3e8u: goto label_15f3e8;
        case 0x15f3ecu: goto label_15f3ec;
        case 0x15f3f0u: goto label_15f3f0;
        case 0x15f3f4u: goto label_15f3f4;
        case 0x15f3f8u: goto label_15f3f8;
        case 0x15f3fcu: goto label_15f3fc;
        case 0x15f400u: goto label_15f400;
        case 0x15f404u: goto label_15f404;
        case 0x15f408u: goto label_15f408;
        case 0x15f40cu: goto label_15f40c;
        case 0x15f410u: goto label_15f410;
        case 0x15f414u: goto label_15f414;
        case 0x15f418u: goto label_15f418;
        case 0x15f41cu: goto label_15f41c;
        case 0x15f420u: goto label_15f420;
        case 0x15f424u: goto label_15f424;
        case 0x15f428u: goto label_15f428;
        case 0x15f42cu: goto label_15f42c;
        case 0x15f430u: goto label_15f430;
        case 0x15f434u: goto label_15f434;
        case 0x15f438u: goto label_15f438;
        case 0x15f43cu: goto label_15f43c;
        case 0x15f440u: goto label_15f440;
        case 0x15f444u: goto label_15f444;
        case 0x15f448u: goto label_15f448;
        case 0x15f44cu: goto label_15f44c;
        case 0x15f450u: goto label_15f450;
        case 0x15f454u: goto label_15f454;
        case 0x15f458u: goto label_15f458;
        case 0x15f45cu: goto label_15f45c;
        case 0x15f460u: goto label_15f460;
        case 0x15f464u: goto label_15f464;
        case 0x15f468u: goto label_15f468;
        case 0x15f46cu: goto label_15f46c;
        case 0x15f470u: goto label_15f470;
        case 0x15f474u: goto label_15f474;
        case 0x15f478u: goto label_15f478;
        case 0x15f47cu: goto label_15f47c;
        case 0x15f480u: goto label_15f480;
        case 0x15f484u: goto label_15f484;
        case 0x15f488u: goto label_15f488;
        case 0x15f48cu: goto label_15f48c;
        case 0x15f490u: goto label_15f490;
        case 0x15f494u: goto label_15f494;
        case 0x15f498u: goto label_15f498;
        case 0x15f49cu: goto label_15f49c;
        case 0x15f4a0u: goto label_15f4a0;
        case 0x15f4a4u: goto label_15f4a4;
        case 0x15f4a8u: goto label_15f4a8;
        case 0x15f4acu: goto label_15f4ac;
        case 0x15f4b0u: goto label_15f4b0;
        case 0x15f4b4u: goto label_15f4b4;
        case 0x15f4b8u: goto label_15f4b8;
        case 0x15f4bcu: goto label_15f4bc;
        case 0x15f4c0u: goto label_15f4c0;
        case 0x15f4c4u: goto label_15f4c4;
        case 0x15f4c8u: goto label_15f4c8;
        case 0x15f4ccu: goto label_15f4cc;
        case 0x15f4d0u: goto label_15f4d0;
        case 0x15f4d4u: goto label_15f4d4;
        case 0x15f4d8u: goto label_15f4d8;
        case 0x15f4dcu: goto label_15f4dc;
        case 0x15f4e0u: goto label_15f4e0;
        case 0x15f4e4u: goto label_15f4e4;
        case 0x15f4e8u: goto label_15f4e8;
        case 0x15f4ecu: goto label_15f4ec;
        case 0x15f4f0u: goto label_15f4f0;
        case 0x15f4f4u: goto label_15f4f4;
        default: break;
    }

    ctx->pc = 0x15f308u;

label_15f308:
    // 0x15f308: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x15f308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_15f30c:
    // 0x15f30c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x15f30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_15f310:
    // 0x15f310: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15f310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15f314:
    // 0x15f314: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x15f314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_15f318:
    // 0x15f318: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x15f318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_15f31c:
    // 0x15f31c: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x15f31cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_15f320:
    // 0x15f320: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x15f320u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_15f324:
    // 0x15f324: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x15f324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_15f328:
    // 0x15f328: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x15f328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_15f32c:
    // 0x15f32c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x15f32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_15f330:
    // 0x15f330: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x15f330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_15f334:
    // 0x15f334: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x15f334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_15f338:
    // 0x15f338: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15f338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15f33c:
    // 0x15f33c: 0xc05587e  jal         func_1561F8
label_15f340:
    if (ctx->pc == 0x15F340u) {
        ctx->pc = 0x15F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F33Cu;
        // 0x15f340: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F344u;
        goto label_15f344;
    }
    ctx->pc = 0x15F33Cu;
    SET_GPR_U32(ctx, 31, 0x15F344u);
    ctx->pc = 0x15F340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F33Cu;
    // 0x15f340: 0x3c140051  lui         $s4, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1561F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1561F8u, 0x15F33Cu, 0x15F344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F344u;
label_15f344:
    // 0x15f344: 0xc055888  jal         func_156220
label_15f348:
    if (ctx->pc == 0x15F348u) {
        ctx->pc = 0x15F348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F344u;
        // 0x15f348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F34Cu;
        goto label_15f34c;
    }
    ctx->pc = 0x15F344u;
    SET_GPR_U32(ctx, 31, 0x15F34Cu);
    ctx->pc = 0x15F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F344u;
    // 0x15f348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156220u, 0x15F344u, 0x15F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F34Cu;
label_15f34c:
    // 0x15f34c: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15f350:
    // 0x15f350: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x15f350u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_15f354:
    // 0x15f354: 0xc0e8c52  jal         func_3A3148
label_15f358:
    if (ctx->pc == 0x15F358u) {
        ctx->pc = 0x15F358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F354u;
        // 0x15f358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F35Cu;
        goto label_15f35c;
    }
    ctx->pc = 0x15F354u;
    SET_GPR_U32(ctx, 31, 0x15F35Cu);
    ctx->pc = 0x15F358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F354u;
    // 0x15f358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3148u, 0x15F354u, 0x15F35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F35Cu;
label_15f35c:
    // 0x15f35c: 0xc0558b2  jal         func_1562C8
label_15f360:
    if (ctx->pc == 0x15F360u) {
        ctx->pc = 0x15F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F35Cu;
        // 0x15f360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F364u;
        goto label_15f364;
    }
    ctx->pc = 0x15F35Cu;
    SET_GPR_U32(ctx, 31, 0x15F364u);
    ctx->pc = 0x15F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F35Cu;
    // 0x15f360: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1562C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1562C8u, 0x15F35Cu, 0x15F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F364u;
label_15f364:
    // 0x15f364: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15f364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15f368:
    // 0x15f368: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15f368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f36c:
    // 0x15f36c: 0x8c43536c  lw          $v1, 0x536C($v0)
    ctx->pc = 0x15f36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21356)));
label_15f370:
    // 0x15f370: 0x5464000a  bnel        $v1, $a0, . + 4 + (0xA << 2)
label_15f374:
    if (ctx->pc == 0x15F374u) {
        ctx->pc = 0x15F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F370u;
        // 0x15f374: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F378u;
        goto label_15f378;
    }
    ctx->pc = 0x15F370u;
    {
        const bool branch_taken_0x15f370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x15f370) {
            ctx->pc = 0x15F374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F370u;
            // 0x15f374: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F39Cu;
            goto label_15f39c;
        }
    }
    ctx->pc = 0x15F378u;
label_15f378:
    // 0x15f378: 0x8e8347c4  lw          $v1, 0x47C4($s4)
    ctx->pc = 0x15f378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
label_15f37c:
    // 0x15f37c: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_15f380:
    // 0x15f380: 0xc0d4456  jal         func_351158
label_15f384:
    if (ctx->pc == 0x15F384u) {
        ctx->pc = 0x15F384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F380u;
        // 0x15f384: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F388u;
        goto label_15f388;
    }
    ctx->pc = 0x15F380u;
    SET_GPR_U32(ctx, 31, 0x15F388u);
    ctx->pc = 0x15F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F380u;
    // 0x15f384: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351158u, 0x15F380u, 0x15F388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F388u;
label_15f388:
    // 0x15f388: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x15f388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_15f38c:
    // 0x15f38c: 0xc0e8c6a  jal         func_3A31A8
label_15f390:
    if (ctx->pc == 0x15F390u) {
        ctx->pc = 0x15F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F38Cu;
        // 0x15f390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F394u;
        goto label_15f394;
    }
    ctx->pc = 0x15F38Cu;
    SET_GPR_U32(ctx, 31, 0x15F394u);
    ctx->pc = 0x15F390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F38Cu;
    // 0x15f390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A31A8u, 0x15F38Cu, 0x15F394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F394u;
label_15f394:
    // 0x15f394: 0xc0926e6  jal         func_249B98
label_15f398:
    if (ctx->pc == 0x15F398u) {
        ctx->pc = 0x15F398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F394u;
        // 0x15f398: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F39Cu;
        goto label_15f39c;
    }
    ctx->pc = 0x15F394u;
    SET_GPR_U32(ctx, 31, 0x15F39Cu);
    ctx->pc = 0x15F398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F394u;
    // 0x15f398: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249B98u, 0x15F394u, 0x15F39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F39Cu;
label_15f39c:
    // 0x15f39c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x15f39cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_15f3a0:
    // 0x15f3a0: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x15f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
label_15f3a4:
    // 0x15f3a4: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x15f3a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15f3a8:
    // 0x15f3a8: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x15f3a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f3ac:
    // 0x15f3ac: 0xc062a60  jal         func_18A980
label_15f3b0:
    if (ctx->pc == 0x15F3B0u) {
        ctx->pc = 0x15F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3ACu;
        // 0x15f3b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3B4u;
        goto label_15f3b4;
    }
    ctx->pc = 0x15F3ACu;
    SET_GPR_U32(ctx, 31, 0x15F3B4u);
    ctx->pc = 0x15F3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F3ACu;
    // 0x15f3b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A980u, 0x15F3ACu, 0x15F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3B4u;
label_15f3b4:
    // 0x15f3b4: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x15f3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
label_15f3b8:
    // 0x15f3b8: 0x8e25cdb4  lw          $a1, -0x324C($s1)
    ctx->pc = 0x15f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954420)));
label_15f3bc:
    // 0x15f3bc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15f3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15f3c0:
    // 0x15f3c0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x15f3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_15f3c4:
    // 0x15f3c4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x15f3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_15f3c8:
    // 0x15f3c8: 0x60f809  jalr        $v1
label_15f3cc:
    if (ctx->pc == 0x15F3CCu) {
        ctx->pc = 0x15F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3C8u;
        // 0x15f3cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3D0u;
        goto label_15f3d0;
    }
    ctx->pc = 0x15F3C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F3D0u);
        ctx->pc = 0x15F3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3C8u;
        // 0x15f3cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F3C8u, 0x15F3D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F3D0u;
label_15f3d0:
    // 0x15f3d0: 0xc103e28  jal         func_40F8A0
label_15f3d4:
    if (ctx->pc == 0x15F3D4u) {
        ctx->pc = 0x15F3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3D0u;
        // 0x15f3d4: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3D8u;
        goto label_15f3d8;
    }
    ctx->pc = 0x15F3D0u;
    SET_GPR_U32(ctx, 31, 0x15F3D8u);
    ctx->pc = 0x15F3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F3D0u;
    // 0x15f3d4: 0x8e8447c4  lw          $a0, 0x47C4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F8A0u, 0x15F3D0u, 0x15F3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3D8u;
label_15f3d8:
    // 0x15f3d8: 0xc06181a  jal         func_186068
label_15f3dc:
    if (ctx->pc == 0x15F3DCu) {
        ctx->pc = 0x15F3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3D8u;
        // 0x15f3dc: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3E0u;
        goto label_15f3e0;
    }
    ctx->pc = 0x15F3D8u;
    SET_GPR_U32(ctx, 31, 0x15F3E0u);
    ctx->pc = 0x15F3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F3D8u;
    // 0x15f3dc: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186068u, 0x15F3D8u, 0x15F3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3E0u;
label_15f3e0:
    // 0x15f3e0: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x15f3e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_15f3e4:
    // 0x15f3e4: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x15f3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15f3e8:
    // 0x15f3e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15f3e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f3ec:
    // 0x15f3ec: 0xc047e6c  jal         func_11F9B0
label_15f3f0:
    if (ctx->pc == 0x15F3F0u) {
        ctx->pc = 0x15F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F3ECu;
        // 0x15f3f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F3F4u;
        goto label_15f3f4;
    }
    ctx->pc = 0x15F3ECu;
    SET_GPR_U32(ctx, 31, 0x15F3F4u);
    ctx->pc = 0x15F3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F3ECu;
    // 0x15f3f0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x15F3ECu, 0x15F3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F3F4u;
label_15f3f4:
    // 0x15f3f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_15f3f8:
    // 0x15f3f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15f3fc:
    // 0x15f3fc: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x15f3fcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_15f400:
    // 0x15f400: 0x8c6600ac  lw          $a2, 0xAC($v1)
    ctx->pc = 0x15f400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_15f404:
    // 0x15f404: 0xc0f809  jalr        $a2
label_15f408:
    if (ctx->pc == 0x15F408u) {
        ctx->pc = 0x15F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F404u;
        // 0x15f408: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F40Cu;
        goto label_15f40c;
    }
    ctx->pc = 0x15F404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x15F40Cu);
        ctx->pc = 0x15F408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F404u;
        // 0x15f408: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F404u, 0x15F40Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F40Cu;
label_15f40c:
    // 0x15f40c: 0x7ba30040  lq          $v1, 0x40($sp)
    ctx->pc = 0x15f40cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_15f410:
    // 0x15f410: 0x2e440002  sltiu       $a0, $s2, 0x2
    ctx->pc = 0x15f410u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_15f414:
    // 0x15f414: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x15f414u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
label_15f418:
    // 0x15f418: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x15f418u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_15f41c:
    // 0x15f41c: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x15f41cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
label_15f420:
    // 0x15f420: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
label_15f424:
    if (ctx->pc == 0x15F424u) {
        ctx->pc = 0x15F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F420u;
        // 0x15f424: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F428u;
        goto label_15f428;
    }
    ctx->pc = 0x15F420u;
    {
        const bool branch_taken_0x15f420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F420u;
        // 0x15f424: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f420) {
            ctx->pc = 0x15F3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f3e8;
        }
    }
    ctx->pc = 0x15F428u;
label_15f428:
    // 0x15f428: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15f428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_15f42c:
    // 0x15f42c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15f42cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15f430:
    // 0x15f430: 0xc043e04  jal         func_10F810
label_15f434:
    if (ctx->pc == 0x15F434u) {
        ctx->pc = 0x15F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F430u;
        // 0x15f434: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F438u;
        goto label_15f438;
    }
    ctx->pc = 0x15F430u;
    SET_GPR_U32(ctx, 31, 0x15F438u);
    ctx->pc = 0x15F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F430u;
    // 0x15f434: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F810u, 0x15F430u, 0x15F438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F438u;
label_15f438:
    // 0x15f438: 0xc055950  jal         func_156540
label_15f43c:
    if (ctx->pc == 0x15F43Cu) {
        ctx->pc = 0x15F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F438u;
        // 0x15f43c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F440u;
        goto label_15f440;
    }
    ctx->pc = 0x15F438u;
    SET_GPR_U32(ctx, 31, 0x15F440u);
    ctx->pc = 0x15F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F438u;
    // 0x15f43c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x15F438u, 0x15F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F440u;
label_15f440:
    // 0x15f440: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x15f440u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_15f444:
    // 0x15f444: 0xc055996  jal         func_156658
label_15f448:
    if (ctx->pc == 0x15F448u) {
        ctx->pc = 0x15F448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F444u;
        // 0x15f448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F44Cu;
        goto label_15f44c;
    }
    ctx->pc = 0x15F444u;
    SET_GPR_U32(ctx, 31, 0x15F44Cu);
    ctx->pc = 0x15F448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F444u;
    // 0x15f448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156658u, 0x15F444u, 0x15F44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F44Cu;
label_15f44c:
    // 0x15f44c: 0x8ea5ee94  lw          $a1, -0x116C($s5)
    ctx->pc = 0x15f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962836)));
label_15f450:
    // 0x15f450: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15f450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15f454:
    // 0x15f454: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x15f454u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_15f458:
    // 0x15f458: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x15f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_15f45c:
    // 0x15f45c: 0x60f809  jalr        $v1
label_15f460:
    if (ctx->pc == 0x15F460u) {
        ctx->pc = 0x15F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F45Cu;
        // 0x15f460: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F464u;
        goto label_15f464;
    }
    ctx->pc = 0x15F45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F464u);
        ctx->pc = 0x15F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F45Cu;
        // 0x15f460: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F45Cu, 0x15F464u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F464u;
label_15f464:
    // 0x15f464: 0xc061748  jal         func_185D20
label_15f468:
    if (ctx->pc == 0x15F468u) {
        ctx->pc = 0x15F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F464u;
        // 0x15f468: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F46Cu;
        goto label_15f46c;
    }
    ctx->pc = 0x15F464u;
    SET_GPR_U32(ctx, 31, 0x15F46Cu);
    ctx->pc = 0x15F468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F464u;
    // 0x15f468: 0x8ec4cd4c  lw          $a0, -0x32B4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185D20u, 0x15F464u, 0x15F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F46Cu;
label_15f46c:
    // 0x15f46c: 0x8ee5cdb4  lw          $a1, -0x324C($s7)
    ctx->pc = 0x15f46cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294954420)));
label_15f470:
    // 0x15f470: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x15f470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_15f474:
    // 0x15f474: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15f474u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15f478:
    // 0x15f478: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15f47c:
    // 0x15f47c: 0x60f809  jalr        $v1
label_15f480:
    if (ctx->pc == 0x15F480u) {
        ctx->pc = 0x15F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F47Cu;
        // 0x15f480: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F484u;
        goto label_15f484;
    }
    ctx->pc = 0x15F47Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F484u);
        ctx->pc = 0x15F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F47Cu;
        // 0x15f480: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F47Cu, 0x15F484u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F484u;
label_15f484:
    // 0x15f484: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_15f488:
    // 0x15f488: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15f488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f48c:
    // 0x15f48c: 0xc0552b8  jal         func_154AE0
label_15f490:
    if (ctx->pc == 0x15F490u) {
        ctx->pc = 0x15F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F48Cu;
        // 0x15f490: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F494u;
        goto label_15f494;
    }
    ctx->pc = 0x15F48Cu;
    SET_GPR_U32(ctx, 31, 0x15F494u);
    ctx->pc = 0x15F490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F48Cu;
    // 0x15f490: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154AE0u, 0x15F48Cu, 0x15F494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F494u;
label_15f494:
    // 0x15f494: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x15f494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_15f498:
    // 0x15f498: 0xc06ba0a  jal         func_1AE828
label_15f49c:
    if (ctx->pc == 0x15F49Cu) {
        ctx->pc = 0x15F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F498u;
        // 0x15f49c: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4A0u;
        goto label_15f4a0;
    }
    ctx->pc = 0x15F498u;
    SET_GPR_U32(ctx, 31, 0x15F4A0u);
    ctx->pc = 0x15F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F498u;
    // 0x15f49c: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE828u, 0x15F498u, 0x15F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F4A0u;
label_15f4a0:
    // 0x15f4a0: 0x8ea5ee94  lw          $a1, -0x116C($s5)
    ctx->pc = 0x15f4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294962836)));
label_15f4a4:
    // 0x15f4a4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x15f4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_15f4a8:
    // 0x15f4a8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15f4a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_15f4ac:
    // 0x15f4ac: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15f4b0:
    // 0x15f4b0: 0x60f809  jalr        $v1
label_15f4b4:
    if (ctx->pc == 0x15F4B4u) {
        ctx->pc = 0x15F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4B0u;
        // 0x15f4b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4B8u;
        goto label_15f4b8;
    }
    ctx->pc = 0x15F4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15F4B8u);
        ctx->pc = 0x15F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4B0u;
        // 0x15f4b4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4B0u, 0x15F4B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15F4B8u;
label_15f4b8:
    // 0x15f4b8: 0xc055880  jal         func_156200
label_15f4bc:
    if (ctx->pc == 0x15F4BCu) {
        ctx->pc = 0x15F4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4B8u;
        // 0x15f4bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4C0u;
        goto label_15f4c0;
    }
    ctx->pc = 0x15F4B8u;
    SET_GPR_U32(ctx, 31, 0x15F4C0u);
    ctx->pc = 0x15F4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F4B8u;
    // 0x15f4bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156200u, 0x15F4B8u, 0x15F4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F4C0u;
label_15f4c0:
    // 0x15f4c0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x15f4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_15f4c4:
    // 0x15f4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15f4c8:
    // 0x15f4c8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x15f4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_15f4cc:
    // 0x15f4cc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x15f4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_15f4d0:
    // 0x15f4d0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x15f4d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_15f4d4:
    // 0x15f4d4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x15f4d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_15f4d8:
    // 0x15f4d8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x15f4d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_15f4dc:
    // 0x15f4dc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x15f4dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_15f4e0:
    // 0x15f4e0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x15f4e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_15f4e4:
    // 0x15f4e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15f4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15f4e8:
    // 0x15f4e8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x15f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_15f4ec:
    // 0x15f4ec: 0x3e00008  jr          $ra
label_15f4f0:
    if (ctx->pc == 0x15F4F0u) {
        ctx->pc = 0x15F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4ECu;
        // 0x15f4f0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15F4F4u;
        goto label_15f4f4;
    }
    ctx->pc = 0x15F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F4ECu;
        // 0x15f4f0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F4F4u;
label_15f4f4:
    // 0x15f4f4: 0x0  nop
    ctx->pc = 0x15f4f4u;
    // NOP
    ctx->pc = 0x15f4f8u;
}
