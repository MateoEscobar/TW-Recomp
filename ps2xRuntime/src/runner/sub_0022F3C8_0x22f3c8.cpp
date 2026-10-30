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

// Function: sub_0022F3C8
// Address: 0x22f3c8 - 0x22f4f8
void sub_0022F3C8_0x22f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F3C8_0x22f3c8");
#endif

    switch (ctx->pc) {
        case 0x22f3c8u: goto label_22f3c8;
        case 0x22f3ccu: goto label_22f3cc;
        case 0x22f3d0u: goto label_22f3d0;
        case 0x22f3d4u: goto label_22f3d4;
        case 0x22f3d8u: goto label_22f3d8;
        case 0x22f3dcu: goto label_22f3dc;
        case 0x22f3e0u: goto label_22f3e0;
        case 0x22f3e4u: goto label_22f3e4;
        case 0x22f3e8u: goto label_22f3e8;
        case 0x22f3ecu: goto label_22f3ec;
        case 0x22f3f0u: goto label_22f3f0;
        case 0x22f3f4u: goto label_22f3f4;
        case 0x22f3f8u: goto label_22f3f8;
        case 0x22f3fcu: goto label_22f3fc;
        case 0x22f400u: goto label_22f400;
        case 0x22f404u: goto label_22f404;
        case 0x22f408u: goto label_22f408;
        case 0x22f40cu: goto label_22f40c;
        case 0x22f410u: goto label_22f410;
        case 0x22f414u: goto label_22f414;
        case 0x22f418u: goto label_22f418;
        case 0x22f41cu: goto label_22f41c;
        case 0x22f420u: goto label_22f420;
        case 0x22f424u: goto label_22f424;
        case 0x22f428u: goto label_22f428;
        case 0x22f42cu: goto label_22f42c;
        case 0x22f430u: goto label_22f430;
        case 0x22f434u: goto label_22f434;
        case 0x22f438u: goto label_22f438;
        case 0x22f43cu: goto label_22f43c;
        case 0x22f440u: goto label_22f440;
        case 0x22f444u: goto label_22f444;
        case 0x22f448u: goto label_22f448;
        case 0x22f44cu: goto label_22f44c;
        case 0x22f450u: goto label_22f450;
        case 0x22f454u: goto label_22f454;
        case 0x22f458u: goto label_22f458;
        case 0x22f45cu: goto label_22f45c;
        case 0x22f460u: goto label_22f460;
        case 0x22f464u: goto label_22f464;
        case 0x22f468u: goto label_22f468;
        case 0x22f46cu: goto label_22f46c;
        case 0x22f470u: goto label_22f470;
        case 0x22f474u: goto label_22f474;
        case 0x22f478u: goto label_22f478;
        case 0x22f47cu: goto label_22f47c;
        case 0x22f480u: goto label_22f480;
        case 0x22f484u: goto label_22f484;
        case 0x22f488u: goto label_22f488;
        case 0x22f48cu: goto label_22f48c;
        case 0x22f490u: goto label_22f490;
        case 0x22f494u: goto label_22f494;
        case 0x22f498u: goto label_22f498;
        case 0x22f49cu: goto label_22f49c;
        case 0x22f4a0u: goto label_22f4a0;
        case 0x22f4a4u: goto label_22f4a4;
        case 0x22f4a8u: goto label_22f4a8;
        case 0x22f4acu: goto label_22f4ac;
        case 0x22f4b0u: goto label_22f4b0;
        case 0x22f4b4u: goto label_22f4b4;
        case 0x22f4b8u: goto label_22f4b8;
        case 0x22f4bcu: goto label_22f4bc;
        case 0x22f4c0u: goto label_22f4c0;
        case 0x22f4c4u: goto label_22f4c4;
        case 0x22f4c8u: goto label_22f4c8;
        case 0x22f4ccu: goto label_22f4cc;
        case 0x22f4d0u: goto label_22f4d0;
        case 0x22f4d4u: goto label_22f4d4;
        case 0x22f4d8u: goto label_22f4d8;
        case 0x22f4dcu: goto label_22f4dc;
        case 0x22f4e0u: goto label_22f4e0;
        case 0x22f4e4u: goto label_22f4e4;
        case 0x22f4e8u: goto label_22f4e8;
        case 0x22f4ecu: goto label_22f4ec;
        case 0x22f4f0u: goto label_22f4f0;
        case 0x22f4f4u: goto label_22f4f4;
        default: break;
    }

    ctx->pc = 0x22f3c8u;

label_22f3c8:
    // 0x22f3c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22f3cc:
    // 0x22f3cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22f3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22f3d0:
    // 0x22f3d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_22f3d4:
    // 0x22f3d4: 0xc089fac  jal         func_227EB0
label_22f3d8:
    if (ctx->pc == 0x22F3D8u) {
        ctx->pc = 0x22F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3D4u;
        // 0x22f3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3DCu;
        goto label_22f3dc;
    }
    ctx->pc = 0x22F3D4u;
    SET_GPR_U32(ctx, 31, 0x22F3DCu);
    ctx->pc = 0x22F3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3D4u;
    // 0x22f3d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x22F3D4u, 0x22F3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3DCu;
label_22f3dc:
    // 0x22f3dc: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_22f3e0:
    if (ctx->pc == 0x22F3E0u) {
        ctx->pc = 0x22F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3DCu;
        // 0x22f3e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3E4u;
        goto label_22f3e4;
    }
    ctx->pc = 0x22F3DCu;
    {
        const bool branch_taken_0x22f3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f3dc) {
            ctx->pc = 0x22F3E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F3DCu;
            // 0x22f3e0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F4E8u;
            goto label_22f4e8;
        }
    }
    ctx->pc = 0x22F3E4u;
label_22f3e4:
    // 0x22f3e4: 0xc089f86  jal         func_227E18
label_22f3e8:
    if (ctx->pc == 0x22F3E8u) {
        ctx->pc = 0x22F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3E4u;
        // 0x22f3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3ECu;
        goto label_22f3ec;
    }
    ctx->pc = 0x22F3E4u;
    SET_GPR_U32(ctx, 31, 0x22F3ECu);
    ctx->pc = 0x22F3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3E4u;
    // 0x22f3e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E18u, 0x22F3E4u, 0x22F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3ECu;
label_22f3ec:
    // 0x22f3ec: 0x5440003e  bnel        $v0, $zero, . + 4 + (0x3E << 2)
label_22f3f0:
    if (ctx->pc == 0x22F3F0u) {
        ctx->pc = 0x22F3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3ECu;
        // 0x22f3f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3F4u;
        goto label_22f3f4;
    }
    ctx->pc = 0x22F3ECu;
    {
        const bool branch_taken_0x22f3ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f3ec) {
            ctx->pc = 0x22F3F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F3ECu;
            // 0x22f3f0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F4E8u;
            goto label_22f4e8;
        }
    }
    ctx->pc = 0x22F3F4u;
label_22f3f4:
    // 0x22f3f4: 0xc089f76  jal         func_227DD8
label_22f3f8:
    if (ctx->pc == 0x22F3F8u) {
        ctx->pc = 0x22F3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3F4u;
        // 0x22f3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F3FCu;
        goto label_22f3fc;
    }
    ctx->pc = 0x22F3F4u;
    SET_GPR_U32(ctx, 31, 0x22F3FCu);
    ctx->pc = 0x22F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F3F4u;
    // 0x22f3f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x22F3F4u, 0x22F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F3FCu;
label_22f3fc:
    // 0x22f3fc: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
label_22f400:
    if (ctx->pc == 0x22F400u) {
        ctx->pc = 0x22F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F3FCu;
        // 0x22f400: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F404u;
        goto label_22f404;
    }
    ctx->pc = 0x22F3FCu;
    {
        const bool branch_taken_0x22f3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f3fc) {
            ctx->pc = 0x22F400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F3FCu;
            // 0x22f400: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F4E8u;
            goto label_22f4e8;
        }
    }
    ctx->pc = 0x22F404u;
label_22f404:
    // 0x22f404: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22f404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22f408:
    // 0x22f408: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x22f408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22f40c:
    // 0x22f40c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f40cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22f410:
    // 0x22f410: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f410u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22f414:
    // 0x22f414: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x22f414u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_22f418:
    // 0x22f418: 0x8c4300e4  lw          $v1, 0xE4($v0)
    ctx->pc = 0x22f418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_22f41c:
    // 0x22f41c: 0x60f809  jalr        $v1
label_22f420:
    if (ctx->pc == 0x22F420u) {
        ctx->pc = 0x22F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F41Cu;
        // 0x22f420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F424u;
        goto label_22f424;
    }
    ctx->pc = 0x22F41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x22F424u);
        ctx->pc = 0x22F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F41Cu;
        // 0x22f420: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F41Cu, 0x22F424u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F424u;
label_22f424:
    // 0x22f424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f428:
    // 0x22f428: 0xc08997c  jal         func_2265F0
label_22f42c:
    if (ctx->pc == 0x22F42Cu) {
        ctx->pc = 0x22F42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F428u;
        // 0x22f42c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F430u;
        goto label_22f430;
    }
    ctx->pc = 0x22F428u;
    SET_GPR_U32(ctx, 31, 0x22F430u);
    ctx->pc = 0x22F42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F428u;
    // 0x22f42c: 0x3c050008  lui         $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F428u, 0x22F430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F430u;
label_22f430:
    // 0x22f430: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_22f434:
    if (ctx->pc == 0x22F434u) {
        ctx->pc = 0x22F438u;
        goto label_22f438;
    }
    ctx->pc = 0x22F430u;
    {
        const bool branch_taken_0x22f430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f430) {
            ctx->pc = 0x22F468u;
            goto label_22f468;
        }
    }
    ctx->pc = 0x22F438u;
label_22f438:
    // 0x22f438: 0xc095018  jal         func_254060
label_22f43c:
    if (ctx->pc == 0x22F43Cu) {
        ctx->pc = 0x22F43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F438u;
        // 0x22f43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F440u;
        goto label_22f440;
    }
    ctx->pc = 0x22F438u;
    SET_GPR_U32(ctx, 31, 0x22F440u);
    ctx->pc = 0x22F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F438u;
    // 0x22f43c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22F438u, 0x22F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F440u;
label_22f440:
    // 0x22f440: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x22f440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_22f444:
    // 0x22f444: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22f448:
    if (ctx->pc == 0x22F448u) {
        ctx->pc = 0x22F44Cu;
        goto label_22f44c;
    }
    ctx->pc = 0x22F444u;
    {
        const bool branch_taken_0x22f444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f444) {
            ctx->pc = 0x22F468u;
            goto label_22f468;
        }
    }
    ctx->pc = 0x22F44Cu;
label_22f44c:
    // 0x22f44c: 0xc095018  jal         func_254060
label_22f450:
    if (ctx->pc == 0x22F450u) {
        ctx->pc = 0x22F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F44Cu;
        // 0x22f450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F454u;
        goto label_22f454;
    }
    ctx->pc = 0x22F44Cu;
    SET_GPR_U32(ctx, 31, 0x22F454u);
    ctx->pc = 0x22F450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F44Cu;
    // 0x22f450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22F44Cu, 0x22F454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F454u;
label_22f454:
    // 0x22f454: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x22f454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_22f458:
    // 0x22f458: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_22f45c:
    if (ctx->pc == 0x22F45Cu) {
        ctx->pc = 0x22F460u;
        goto label_22f460;
    }
    ctx->pc = 0x22F458u;
    {
        const bool branch_taken_0x22f458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22f458) {
            ctx->pc = 0x22F468u;
            goto label_22f468;
        }
    }
    ctx->pc = 0x22F460u;
label_22f460:
    // 0x22f460: 0xc094fca  jal         func_253F28
label_22f464:
    if (ctx->pc == 0x22F464u) {
        ctx->pc = 0x22F464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F460u;
        // 0x22f464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F468u;
        goto label_22f468;
    }
    ctx->pc = 0x22F460u;
    SET_GPR_U32(ctx, 31, 0x22F468u);
    ctx->pc = 0x22F464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F460u;
    // 0x22f464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22F460u, 0x22F468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F468u;
label_22f468:
    // 0x22f468: 0xc095018  jal         func_254060
label_22f46c:
    if (ctx->pc == 0x22F46Cu) {
        ctx->pc = 0x22F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F468u;
        // 0x22f46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F470u;
        goto label_22f470;
    }
    ctx->pc = 0x22F468u;
    SET_GPR_U32(ctx, 31, 0x22F470u);
    ctx->pc = 0x22F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F468u;
    // 0x22f46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254060u, 0x22F468u, 0x22F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F470u;
label_22f470:
    // 0x22f470: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x22f470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22f474:
    // 0x22f474: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_22f478:
    if (ctx->pc == 0x22F478u) {
        ctx->pc = 0x22F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F474u;
        // 0x22f478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F47Cu;
        goto label_22f47c;
    }
    ctx->pc = 0x22F474u;
    {
        const bool branch_taken_0x22f474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22F478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F474u;
        // 0x22f478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f474) {
            ctx->pc = 0x22F48Cu;
            goto label_22f48c;
        }
    }
    ctx->pc = 0x22F47Cu;
label_22f47c:
    // 0x22f47c: 0xc094fca  jal         func_253F28
label_22f480:
    if (ctx->pc == 0x22F480u) {
        ctx->pc = 0x22F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F47Cu;
        // 0x22f480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F484u;
        goto label_22f484;
    }
    ctx->pc = 0x22F47Cu;
    SET_GPR_U32(ctx, 31, 0x22F484u);
    ctx->pc = 0x22F480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F47Cu;
    // 0x22f480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F28u, 0x22F47Cu, 0x22F484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F484u;
label_22f484:
    // 0x22f484: 0x10000004  b           . + 4 + (0x4 << 2)
label_22f488:
    if (ctx->pc == 0x22F488u) {
        ctx->pc = 0x22F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F484u;
        // 0x22f488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F48Cu;
        goto label_22f48c;
    }
    ctx->pc = 0x22F484u;
    {
        const bool branch_taken_0x22f484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F484u;
        // 0x22f488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f484) {
            ctx->pc = 0x22F498u;
            goto label_22f498;
        }
    }
    ctx->pc = 0x22F48Cu;
label_22f48c:
    // 0x22f48c: 0xc094fde  jal         func_253F78
label_22f490:
    if (ctx->pc == 0x22F490u) {
        ctx->pc = 0x22F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F48Cu;
        // 0x22f490: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F494u;
        goto label_22f494;
    }
    ctx->pc = 0x22F48Cu;
    SET_GPR_U32(ctx, 31, 0x22F494u);
    ctx->pc = 0x22F490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F48Cu;
    // 0x22f490: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F78u, 0x22F48Cu, 0x22F494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F494u;
label_22f494:
    // 0x22f494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f498:
    // 0x22f498: 0xc08997c  jal         func_2265F0
label_22f49c:
    if (ctx->pc == 0x22F49Cu) {
        ctx->pc = 0x22F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F498u;
        // 0x22f49c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4A0u;
        goto label_22f4a0;
    }
    ctx->pc = 0x22F498u;
    SET_GPR_U32(ctx, 31, 0x22F4A0u);
    ctx->pc = 0x22F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F498u;
    // 0x22f49c: 0x3c050010  lui         $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x22F498u, 0x22F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4A0u;
label_22f4a0:
    // 0x22f4a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22f4a4:
    if (ctx->pc == 0x22F4A4u) {
        ctx->pc = 0x22F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4A0u;
        // 0x22f4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4A8u;
        goto label_22f4a8;
    }
    ctx->pc = 0x22F4A0u;
    {
        const bool branch_taken_0x22f4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4A0u;
        // 0x22f4a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f4a0) {
            ctx->pc = 0x22F4C4u;
            goto label_22f4c4;
        }
    }
    ctx->pc = 0x22F4A8u;
label_22f4a8:
    // 0x22f4a8: 0xc094fb4  jal         func_253ED0
label_22f4ac:
    if (ctx->pc == 0x22F4ACu) {
        ctx->pc = 0x22F4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4A8u;
        // 0x22f4ac: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4B0u;
        goto label_22f4b0;
    }
    ctx->pc = 0x22F4A8u;
    SET_GPR_U32(ctx, 31, 0x22F4B0u);
    ctx->pc = 0x22F4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4A8u;
    // 0x22f4ac: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253ED0u, 0x22F4A8u, 0x22F4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4B0u;
label_22f4b0:
    // 0x22f4b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22f4b4:
    // 0x22f4b4: 0xc08be78  jal         func_22F9E0
label_22f4b8:
    if (ctx->pc == 0x22F4B8u) {
        ctx->pc = 0x22F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4B4u;
        // 0x22f4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4BCu;
        goto label_22f4bc;
    }
    ctx->pc = 0x22F4B4u;
    SET_GPR_U32(ctx, 31, 0x22F4BCu);
    ctx->pc = 0x22F4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4B4u;
    // 0x22f4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F9E0u, 0x22F4B4u, 0x22F4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4BCu;
label_22f4bc:
    // 0x22f4bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_22f4c0:
    if (ctx->pc == 0x22F4C0u) {
        ctx->pc = 0x22F4C4u;
        goto label_22f4c4;
    }
    ctx->pc = 0x22F4BCu;
    {
        const bool branch_taken_0x22f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f4bc) {
            ctx->pc = 0x22F4CCu;
            goto label_22f4cc;
        }
    }
    ctx->pc = 0x22F4C4u;
label_22f4c4:
    // 0x22f4c4: 0xc08bf92  jal         func_22FE48
label_22f4c8:
    if (ctx->pc == 0x22F4C8u) {
        ctx->pc = 0x22F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4C4u;
        // 0x22f4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4CCu;
        goto label_22f4cc;
    }
    ctx->pc = 0x22F4C4u;
    SET_GPR_U32(ctx, 31, 0x22F4CCu);
    ctx->pc = 0x22F4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4C4u;
    // 0x22f4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FE48u, 0x22F4C4u, 0x22F4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4CCu;
label_22f4cc:
    // 0x22f4cc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x22f4ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_22f4d0:
    // 0x22f4d0: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x22f4d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
label_22f4d4:
    // 0x22f4d4: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x22f4d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_22f4d8:
    // 0x22f4d8: 0x52938  dsll        $a1, $a1, 4
    ctx->pc = 0x22f4d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
label_22f4dc:
    // 0x22f4dc: 0xc089988  jal         func_226620
label_22f4e0:
    if (ctx->pc == 0x22F4E0u) {
        ctx->pc = 0x22F4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4DCu;
        // 0x22f4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4E4u;
        goto label_22f4e4;
    }
    ctx->pc = 0x22F4DCu;
    SET_GPR_U32(ctx, 31, 0x22F4E4u);
    ctx->pc = 0x22F4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F4DCu;
    // 0x22f4e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x22F4DCu, 0x22F4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F4E4u;
label_22f4e4:
    // 0x22f4e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22f4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22f4e8:
    // 0x22f4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f4ec:
    // 0x22f4ec: 0x3e00008  jr          $ra
label_22f4f0:
    if (ctx->pc == 0x22F4F0u) {
        ctx->pc = 0x22F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4ECu;
        // 0x22f4f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F4F4u;
        goto label_22f4f4;
    }
    ctx->pc = 0x22F4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F4ECu;
        // 0x22f4f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F4F4u;
label_22f4f4:
    // 0x22f4f4: 0x0  nop
    ctx->pc = 0x22f4f4u;
    // NOP
    ctx->pc = 0x22f4f8u;
}
