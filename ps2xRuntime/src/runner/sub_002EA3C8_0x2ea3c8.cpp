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

// Function: sub_002EA3C8
// Address: 0x2ea3c8 - 0x2ea6f0
void sub_002EA3C8_0x2ea3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA3C8_0x2ea3c8");
#endif

    switch (ctx->pc) {
        case 0x2ea430u: goto label_2ea430;
        case 0x2ea440u: goto label_2ea440;
        case 0x2ea44cu: goto label_2ea44c;
        case 0x2ea454u: goto label_2ea454;
        case 0x2ea464u: goto label_2ea464;
        case 0x2ea494u: goto label_2ea494;
        case 0x2ea4a0u: goto label_2ea4a0;
        case 0x2ea4b0u: goto label_2ea4b0;
        case 0x2ea4bcu: goto label_2ea4bc;
        case 0x2ea4c4u: goto label_2ea4c4;
        case 0x2ea50cu: goto label_2ea50c;
        case 0x2ea524u: goto label_2ea524;
        case 0x2ea54cu: goto label_2ea54c;
        case 0x2ea59cu: goto label_2ea59c;
        case 0x2ea5a8u: goto label_2ea5a8;
        case 0x2ea5b0u: goto label_2ea5b0;
        case 0x2ea5dcu: goto label_2ea5dc;
        case 0x2ea5e8u: goto label_2ea5e8;
        case 0x2ea5f4u: goto label_2ea5f4;
        case 0x2ea604u: goto label_2ea604;
        case 0x2ea610u: goto label_2ea610;
        case 0x2ea644u: goto label_2ea644;
        case 0x2ea650u: goto label_2ea650;
        case 0x2ea67cu: goto label_2ea67c;
        case 0x2ea6b8u: goto label_2ea6b8;
        case 0x2ea6d8u: goto label_2ea6d8;
        default: break;
    }

    ctx->pc = 0x2ea3c8u;

    // 0x2ea3c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ea3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ea3cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea3d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ea3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ea3d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ea3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2ea3d8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x2ea3d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2ea3dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2ea3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2ea3e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea3e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea3e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea3e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ea3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea3ec: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x2ea3ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ea3f0: 0x1602004e  bne         $s0, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2EA3F0u;
    {
        const bool branch_taken_0x2ea3f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA3F0u;
        // 0x2ea3f4: 0xa2250024  sb          $a1, 0x24($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 36), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea3f0) {
            ctx->pc = 0x2EA52Cu;
            goto label_2ea52c;
        }
    }
    ctx->pc = 0x2EA3F8u;
    // 0x2ea3f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2ea3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2ea3fc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2ea3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2ea400: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2ea400u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2ea404: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2ea404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2ea408: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2ea408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2ea40c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2ea40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2ea410: 0xa2200027  sb          $zero, 0x27($s1)
    ctx->pc = 0x2ea410u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea414: 0x244204e2  addiu       $v0, $v0, 0x4E2
    ctx->pc = 0x2ea414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1250));
    // 0x2ea418: 0xa2200026  sb          $zero, 0x26($s1)
    ctx->pc = 0x2ea418u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea41c: 0xa2300028  sb          $s0, 0x28($s1)
    ctx->pc = 0x2ea41cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 16));
    // 0x2ea420: 0xa2200029  sb          $zero, 0x29($s1)
    ctx->pc = 0x2ea420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea424: 0xa220002b  sb          $zero, 0x2B($s1)
    ctx->pc = 0x2ea424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea428: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2EA428u;
    SET_GPR_U32(ctx, 31, 0x2EA430u);
    ctx->pc = 0x2EA42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA428u;
    // 0x2ea42c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2EA428u, 0x2EA430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA430u;
label_2ea430:
    // 0x2ea430: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2ea430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x2ea434: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ea434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea438: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2EA438u;
    SET_GPR_U32(ctx, 31, 0x2EA440u);
    ctx->pc = 0x2EA43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA438u;
    // 0x2ea43c: 0xa222002a  sb          $v0, 0x2A($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EA438u, 0x2EA440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA440u;
label_2ea440:
    // 0x2ea440: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ea440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea444: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2EA444u;
    SET_GPR_U32(ctx, 31, 0x2EA44Cu);
    ctx->pc = 0x2EA448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA444u;
    // 0x2ea448: 0x8225002f  lb          $a1, 0x2F($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2EA444u, 0x2EA44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA44Cu;
label_2ea44c:
    // 0x2ea44c: 0xc088ef0  jal         func_223BC0
    ctx->pc = 0x2EA44Cu;
    SET_GPR_U32(ctx, 31, 0x2EA454u);
    ctx->pc = 0x2EA450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA44Cu;
    // 0x2ea450: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223BC0u, 0x2EA44Cu, 0x2EA454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA454u;
label_2ea454:
    // 0x2ea454: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA454u;
    {
        const bool branch_taken_0x2ea454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ea454) {
            ctx->pc = 0x2EA458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EA454u;
            // 0x2ea458: 0xde4200e0  ld          $v0, 0xE0($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EA468u;
            goto label_2ea468;
        }
    }
    ctx->pc = 0x2EA45Cu;
    // 0x2ea45c: 0xc08be36  jal         func_22F8D8
    ctx->pc = 0x2EA45Cu;
    SET_GPR_U32(ctx, 31, 0x2EA464u);
    ctx->pc = 0x2EA460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA45Cu;
    // 0x2ea460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F8D8u, 0x2EA45Cu, 0x2EA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA464u;
label_2ea464:
    // 0x2ea464: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ea464u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2ea468:
    // 0x2ea468: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2ea468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ea46c: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x2ea46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x2ea470: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2ea470u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2ea474: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x2ea474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2ea478: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ea47c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ea47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ea480: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ea480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ea484: 0xfe4200e0  sd          $v0, 0xE0($s2)
    ctx->pc = 0x2ea484u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    // 0x2ea488: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ea488u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea48c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2EA48Cu;
    SET_GPR_U32(ctx, 31, 0x2EA494u);
    ctx->pc = 0x2EA490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA48Cu;
    // 0x2ea490: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EA48Cu, 0x2EA494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA494u;
label_2ea494:
    // 0x2ea494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea498: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2EA498u;
    SET_GPR_U32(ctx, 31, 0x2EA4A0u);
    ctx->pc = 0x2EA49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA498u;
    // 0x2ea49c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2EA498u, 0x2EA4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4A0u;
label_2ea4a0:
    // 0x2ea4a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EA4A0u;
    {
        const bool branch_taken_0x2ea4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ea4a0) {
            ctx->pc = 0x2EA4BCu;
            goto label_2ea4bc;
        }
    }
    ctx->pc = 0x2EA4A8u;
    // 0x2ea4a8: 0xc087502  jal         func_21D408
    ctx->pc = 0x2EA4A8u;
    SET_GPR_U32(ctx, 31, 0x2EA4B0u);
    ctx->pc = 0x2EA4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA4A8u;
    // 0x2ea4ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EA4A8u, 0x2EA4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4B0u;
label_2ea4b0:
    // 0x2ea4b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea4b4: 0xc0a445e  jal         func_291178
    ctx->pc = 0x2EA4B4u;
    SET_GPR_U32(ctx, 31, 0x2EA4BCu);
    ctx->pc = 0x2EA4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA4B4u;
    // 0x2ea4b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2EA4B4u, 0x2EA4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4BCu;
label_2ea4bc:
    // 0x2ea4bc: 0xc0baac2  jal         func_2EAB08
    ctx->pc = 0x2EA4BCu;
    SET_GPR_U32(ctx, 31, 0x2EA4C4u);
    ctx->pc = 0x2EA4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA4BCu;
    // 0x2ea4c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2EA4BCu, 0x2EA4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA4C4u;
label_2ea4c4:
    // 0x2ea4c4: 0x14400085  bnez        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2EA4C4u;
    {
        const bool branch_taken_0x2ea4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA4C4u;
        // 0x2ea4c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea4c4) {
            ctx->pc = 0x2EA6DCu;
            goto label_2ea6dc;
        }
    }
    ctx->pc = 0x2EA4CCu;
    // 0x2ea4cc: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ea4ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2ea4d0: 0x3c03fffd  lui         $v1, 0xFFFD
    ctx->pc = 0x2ea4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65533 << 16));
    // 0x2ea4d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ea4d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ea4d8: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x2ea4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x2ea4dc: 0x3c06bfff  lui         $a2, 0xBFFF
    ctx->pc = 0x2ea4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49151 << 16));
    // 0x2ea4e0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2ea4e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2ea4e4: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x2ea4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x2ea4e8: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x2ea4e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x2ea4ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ea4f0: 0x2405fdff  addiu       $a1, $zero, -0x201
    ctx->pc = 0x2ea4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966783));
    // 0x2ea4f4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ea4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ea4f8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ea4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ea4fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ea4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea500: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ea500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ea504: 0xc088ade  jal         func_222B78
    ctx->pc = 0x2EA504u;
    SET_GPR_U32(ctx, 31, 0x2EA50Cu);
    ctx->pc = 0x2EA508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA504u;
    // 0x2ea508: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2EA504u, 0x2EA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA50Cu;
label_2ea50c:
    // 0x2ea50c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2ea50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea510: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ea510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ea514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ea514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea518: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2ea518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2ea51c: 0xc0a447a  jal         func_2911E8
    ctx->pc = 0x2EA51Cu;
    SET_GPR_U32(ctx, 31, 0x2EA524u);
    ctx->pc = 0x2EA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA51Cu;
    // 0x2ea520: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E8u, 0x2EA51Cu, 0x2EA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA524u;
label_2ea524:
    // 0x2ea524: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x2EA524u;
    {
        const bool branch_taken_0x2ea524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA524u;
        // 0x2ea528: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea524) {
            ctx->pc = 0x2EA6DCu;
            goto label_2ea6dc;
        }
    }
    ctx->pc = 0x2EA52Cu;
label_2ea52c:
    // 0x2ea52c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ea52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ea530: 0x16020010  bne         $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EA530u;
    {
        const bool branch_taken_0x2ea530 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA530u;
        // 0x2ea534: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea530) {
            ctx->pc = 0x2EA574u;
            goto label_2ea574;
        }
    }
    ctx->pc = 0x2EA538u;
    // 0x2ea538: 0x8225002f  lb          $a1, 0x2F($s1)
    ctx->pc = 0x2ea538u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
    // 0x2ea53c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2ea53cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2ea540: 0xa220002c  sb          $zero, 0x2C($s1)
    ctx->pc = 0x2ea540u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea544: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2EA544u;
    SET_GPR_U32(ctx, 31, 0x2EA54Cu);
    ctx->pc = 0x2EA548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA544u;
    // 0x2ea548: 0xa2200030  sb          $zero, 0x30($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2EA544u, 0x2EA54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA54Cu;
label_2ea54c:
    // 0x2ea54c: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ea54cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2ea550: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x2ea550u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x2ea554: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ea554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ea558: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x2ea558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2ea55c: 0x2405ffef  addiu       $a1, $zero, -0x11
    ctx->pc = 0x2ea55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2ea560: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ea564: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ea564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ea568: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ea568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ea56c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2EA56Cu;
    {
        const bool branch_taken_0x2ea56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA56Cu;
        // 0x2ea570: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea56c) {
            ctx->pc = 0x2EA6D8u;
            goto label_2ea6d8;
        }
    }
    ctx->pc = 0x2EA574u;
label_2ea574:
    // 0x2ea574: 0x16020028  bne         $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2EA574u;
    {
        const bool branch_taken_0x2ea574 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA574u;
        // 0x2ea578: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea574) {
            ctx->pc = 0x2EA618u;
            goto label_2ea618;
        }
    }
    ctx->pc = 0x2EA57Cu;
    // 0x2ea57c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2ea57cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2ea580: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x2ea580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x2ea584: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x2ea584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2ea588: 0xa2200027  sb          $zero, 0x27($s1)
    ctx->pc = 0x2ea588u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea58c: 0x246307d0  addiu       $v1, $v1, 0x7D0
    ctx->pc = 0x2ea58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2000));
    // 0x2ea590: 0xa2200026  sb          $zero, 0x26($s1)
    ctx->pc = 0x2ea590u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea594: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2EA594u;
    SET_GPR_U32(ctx, 31, 0x2EA59Cu);
    ctx->pc = 0x2EA598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA594u;
    // 0x2ea598: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EA594u, 0x2EA59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA59Cu;
label_2ea59c:
    // 0x2ea59c: 0x8225002f  lb          $a1, 0x2F($s1)
    ctx->pc = 0x2ea59cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
    // 0x2ea5a0: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2EA5A0u;
    SET_GPR_U32(ctx, 31, 0x2EA5A8u);
    ctx->pc = 0x2EA5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5A0u;
    // 0x2ea5a4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2EA5A0u, 0x2EA5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5A8u;
label_2ea5a8:
    // 0x2ea5a8: 0xc089bdc  jal         func_226F70
    ctx->pc = 0x2EA5A8u;
    SET_GPR_U32(ctx, 31, 0x2EA5B0u);
    ctx->pc = 0x2EA5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5A8u;
    // 0x2ea5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226F70u, 0x2EA5A8u, 0x2EA5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5B0u;
label_2ea5b0:
    // 0x2ea5b0: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ea5b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2ea5b4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2ea5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2ea5b8: 0x2404f7ff  addiu       $a0, $zero, -0x801
    ctx->pc = 0x2ea5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x2ea5bc: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x2ea5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2ea5c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ea5c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ea5c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5c8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2ea5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2ea5cc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ea5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ea5d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ea5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5d4: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x2EA5D4u;
    SET_GPR_U32(ctx, 31, 0x2EA5DCu);
    ctx->pc = 0x2EA5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5D4u;
    // 0x2ea5d8: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x2EA5D4u, 0x2EA5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5DCu;
label_2ea5dc:
    // 0x2ea5dc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2ea5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea5e0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2EA5E0u;
    SET_GPR_U32(ctx, 31, 0x2EA5E8u);
    ctx->pc = 0x2EA5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5E0u;
    // 0x2ea5e4: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2EA5E0u, 0x2EA5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5E8u;
label_2ea5e8:
    // 0x2ea5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea5ec: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2EA5ECu;
    SET_GPR_U32(ctx, 31, 0x2EA5F4u);
    ctx->pc = 0x2EA5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5ECu;
    // 0x2ea5f0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2EA5ECu, 0x2EA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA5F4u;
label_2ea5f4:
    // 0x2ea5f4: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x2EA5F4u;
    {
        const bool branch_taken_0x2ea5f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA5F4u;
        // 0x2ea5f8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea5f4) {
            ctx->pc = 0x2EA6DCu;
            goto label_2ea6dc;
        }
    }
    ctx->pc = 0x2EA5FCu;
    // 0x2ea5fc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2EA5FCu;
    SET_GPR_U32(ctx, 31, 0x2EA604u);
    ctx->pc = 0x2EA600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA5FCu;
    // 0x2ea600: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2EA5FCu, 0x2EA604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA604u;
label_2ea604:
    // 0x2ea604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ea604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea608: 0xc0a445e  jal         func_291178
    ctx->pc = 0x2EA608u;
    SET_GPR_U32(ctx, 31, 0x2EA610u);
    ctx->pc = 0x2EA60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA608u;
    // 0x2ea60c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291178u, 0x2EA608u, 0x2EA610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA610u;
label_2ea610:
    // 0x2ea610: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2EA610u;
    {
        const bool branch_taken_0x2ea610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA610u;
        // 0x2ea614: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea610) {
            ctx->pc = 0x2EA6DCu;
            goto label_2ea6dc;
        }
    }
    ctx->pc = 0x2EA618u;
label_2ea618:
    // 0x2ea618: 0x16020030  bne         $s0, $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2EA618u;
    {
        const bool branch_taken_0x2ea618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2EA61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA618u;
        // 0x2ea61c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea618) {
            ctx->pc = 0x2EA6DCu;
            goto label_2ea6dc;
        }
    }
    ctx->pc = 0x2EA620u;
    // 0x2ea620: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2ea620u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x2ea624: 0xa2200027  sb          $zero, 0x27($s1)
    ctx->pc = 0x2ea624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 39), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea628: 0xa2200026  sb          $zero, 0x26($s1)
    ctx->pc = 0x2ea628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 38), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea62c: 0xa2200028  sb          $zero, 0x28($s1)
    ctx->pc = 0x2ea62cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea630: 0xa2200029  sb          $zero, 0x29($s1)
    ctx->pc = 0x2ea630u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea634: 0xa220002b  sb          $zero, 0x2B($s1)
    ctx->pc = 0x2ea634u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 43), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea638: 0xa220002a  sb          $zero, 0x2A($s1)
    ctx->pc = 0x2ea638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 42), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ea63c: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2EA63Cu;
    SET_GPR_U32(ctx, 31, 0x2EA644u);
    ctx->pc = 0x2EA640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA63Cu;
    // 0x2ea640: 0xa2200031  sb          $zero, 0x31($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 49), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2EA63Cu, 0x2EA644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA644u;
label_2ea644:
    // 0x2ea644: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ea644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea648: 0xc0a337e  jal         func_28CDF8
    ctx->pc = 0x2EA648u;
    SET_GPR_U32(ctx, 31, 0x2EA650u);
    ctx->pc = 0x2EA64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA648u;
    // 0x2ea64c: 0x8225002f  lb          $a1, 0x2F($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 47)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CDF8u, 0x2EA648u, 0x2EA650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA650u;
label_2ea650:
    // 0x2ea650: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ea650u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2ea654: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x2ea654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2ea658: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x2ea658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x2ea65c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2ea65cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x2ea660: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x2ea660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2ea664: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ea668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ea668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea66c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2ea66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2ea670: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2ea670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2ea674: 0xc0baac2  jal         func_2EAB08
    ctx->pc = 0x2EA674u;
    SET_GPR_U32(ctx, 31, 0x2EA67Cu);
    ctx->pc = 0x2EA678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA674u;
    // 0x2ea678: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EAB08u, 0x2EA674u, 0x2EA67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA67Cu;
label_2ea67c:
    // 0x2ea67c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EA67Cu;
    {
        const bool branch_taken_0x2ea67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA67Cu;
        // 0x2ea680: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea67c) {
            ctx->pc = 0x2EA6DCu;
            goto label_2ea6dc;
        }
    }
    ctx->pc = 0x2EA684u;
    // 0x2ea684: 0xde4200e0  ld          $v0, 0xE0($s2)
    ctx->pc = 0x2ea684u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 224)));
    // 0x2ea688: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2ea688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x2ea68c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x2ea68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2ea690: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2ea690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2ea694: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2ea694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2ea698: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ea698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ea69c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x2ea69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x2ea6a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ea6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2ea6a4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ea6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2ea6a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ea6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea6ac: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ea6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ea6b0: 0xc088ade  jal         func_222B78
    ctx->pc = 0x2EA6B0u;
    SET_GPR_U32(ctx, 31, 0x2EA6B8u);
    ctx->pc = 0x2EA6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6B0u;
    // 0x2ea6b4: 0xfe4200e0  sd          $v0, 0xE0($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 224), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B78u, 0x2EA6B0u, 0x2EA6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6B8u;
label_2ea6b8:
    // 0x2ea6b8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2ea6b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2ea6bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ea6bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ea6c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ea6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ea6c4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ea6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ea6c8: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x2ea6c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ea6cc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x2ea6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x2ea6d0: 0xc0a447a  jal         func_2911E8
    ctx->pc = 0x2EA6D0u;
    SET_GPR_U32(ctx, 31, 0x2EA6D8u);
    ctx->pc = 0x2EA6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA6D0u;
    // 0x2ea6d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2911E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2911E8u, 0x2EA6D0u, 0x2EA6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA6D8u;
label_2ea6d8:
    // 0x2ea6d8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ea6d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ea6dc:
    // 0x2ea6dc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ea6dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea6e0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ea6e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea6e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea6e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA6E8u;
        // 0x2ea6ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA6F0u;
}
