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

// Function: sub_002688D0
// Address: 0x2688d0 - 0x268ab0
void sub_002688D0_0x2688d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002688D0_0x2688d0");
#endif

    switch (ctx->pc) {
        case 0x2688f8u: goto label_2688f8;
        case 0x268918u: goto label_268918;
        case 0x268928u: goto label_268928;
        case 0x268958u: goto label_268958;
        case 0x268964u: goto label_268964;
        case 0x268984u: goto label_268984;
        case 0x26898cu: goto label_26898c;
        case 0x2689acu: goto label_2689ac;
        case 0x2689c0u: goto label_2689c0;
        case 0x2689ccu: goto label_2689cc;
        case 0x2689ecu: goto label_2689ec;
        case 0x2689f4u: goto label_2689f4;
        case 0x268a20u: goto label_268a20;
        case 0x268a54u: goto label_268a54;
        case 0x268a68u: goto label_268a68;
        case 0x268a74u: goto label_268a74;
        case 0x268a80u: goto label_268a80;
        case 0x268a90u: goto label_268a90;
        default: break;
    }

    ctx->pc = 0x2688d0u;

    // 0x2688d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2688d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2688d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2688d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2688d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2688d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2688dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2688dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2688e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2688e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2688e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2688e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2688e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2688ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2688ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2688f0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2688F0u;
    SET_GPR_U32(ctx, 31, 0x2688F8u);
    ctx->pc = 0x2688F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2688F0u;
    // 0x2688f4: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2688F0u, 0x2688F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2688F8u;
label_2688f8:
    // 0x2688f8: 0x8e1200d4  lw          $s2, 0xD4($s0)
    ctx->pc = 0x2688f8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2688fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2688fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268900: 0x12200063  beqz        $s1, . + 4 + (0x63 << 2)
    ctx->pc = 0x268900u;
    {
        const bool branch_taken_0x268900 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x268904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268900u;
        // 0x268904: 0xa6400118  sh          $zero, 0x118($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 280), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268900) {
            ctx->pc = 0x268A90u;
            goto label_268a90;
        }
    }
    ctx->pc = 0x268908u;
    // 0x268908: 0x12330061  beq         $s1, $s3, . + 4 + (0x61 << 2)
    ctx->pc = 0x268908u;
    {
        const bool branch_taken_0x268908 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x26890Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268908u;
        // 0x26890c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268908) {
            ctx->pc = 0x268A90u;
            goto label_268a90;
        }
    }
    ctx->pc = 0x268910u;
    // 0x268910: 0xc08997c  jal         func_2265F0
    ctx->pc = 0x268910u;
    SET_GPR_U32(ctx, 31, 0x268918u);
    ctx->pc = 0x268914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268910u;
    // 0x268914: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2265F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2265F0u, 0x268910u, 0x268918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268918u;
label_268918:
    // 0x268918: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x268918u;
    {
        const bool branch_taken_0x268918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268918u;
        // 0x26891c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268918) {
            ctx->pc = 0x2689A4u;
            goto label_2689a4;
        }
    }
    ctx->pc = 0x268920u;
    // 0x268920: 0xc089998  jal         func_226660
    ctx->pc = 0x268920u;
    SET_GPR_U32(ctx, 31, 0x268928u);
    ctx->pc = 0x268924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268920u;
    // 0x268924: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x268920u, 0x268928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268928u;
label_268928:
    // 0x268928: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x268928u;
    {
        const bool branch_taken_0x268928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268928) {
            ctx->pc = 0x26892Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268928u;
            // 0x26892c: 0x9642011a  lhu         $v0, 0x11A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 282)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268994u;
            goto label_268994;
        }
    }
    ctx->pc = 0x268930u;
    // 0x268930: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x268930u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x268934: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x268934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x268938: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x268938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26893c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26893cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x268940: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x268940u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x268944: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x268944u;
    {
        const bool branch_taken_0x268944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268944) {
            ctx->pc = 0x268948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268944u;
            // 0x268948: 0x9642011a  lhu         $v0, 0x11A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 282)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268994u;
            goto label_268994;
        }
    }
    ctx->pc = 0x26894Cu;
    // 0x26894c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26894cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268950: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x268950u;
    SET_GPR_U32(ctx, 31, 0x268958u);
    ctx->pc = 0x268954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268950u;
    // 0x268954: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x268950u, 0x268958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268958u;
label_268958:
    // 0x268958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26895c: 0xc0a0152  jal         func_280548
    ctx->pc = 0x26895Cu;
    SET_GPR_U32(ctx, 31, 0x268964u);
    ctx->pc = 0x268960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26895Cu;
    // 0x268960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x26895Cu, 0x268964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268964u;
label_268964:
    // 0x268964: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x268964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x268968: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x268968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
    // 0x26896c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26896cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268974: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x268974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268978: 0x24060089  addiu       $a2, $zero, 0x89
    ctx->pc = 0x268978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x26897c: 0xc09a9b4  jal         func_26A6D0
    ctx->pc = 0x26897Cu;
    SET_GPR_U32(ctx, 31, 0x268984u);
    ctx->pc = 0x268980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26897Cu;
    // 0x268980: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A6D0u, 0x26897Cu, 0x268984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268984u;
label_268984:
    // 0x268984: 0xc09a494  jal         func_269250
    ctx->pc = 0x268984u;
    SET_GPR_U32(ctx, 31, 0x26898Cu);
    ctx->pc = 0x268988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268984u;
    // 0x268988: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269250u, 0x268984u, 0x26898Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26898Cu;
label_26898c:
    // 0x26898c: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x26898Cu;
    {
        const bool branch_taken_0x26898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26898Cu;
        // 0x268990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26898c) {
            ctx->pc = 0x268A94u;
            goto label_268a94;
        }
    }
    ctx->pc = 0x268994u;
label_268994:
    // 0x268994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x268994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268998: 0x24120087  addiu       $s2, $zero, 0x87
    ctx->pc = 0x268998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x26899c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x26899Cu;
    {
        const bool branch_taken_0x26899c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2689A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26899Cu;
        // 0x2689a0: 0x24040085  addiu       $a0, $zero, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26899c) {
            ctx->pc = 0x268A08u;
            goto label_268a08;
        }
    }
    ctx->pc = 0x2689A4u;
label_2689a4:
    // 0x2689a4: 0xc089998  jal         func_226660
    ctx->pc = 0x2689A4u;
    SET_GPR_U32(ctx, 31, 0x2689ACu);
    ctx->pc = 0x2689A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689A4u;
    // 0x2689a8: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2689A4u, 0x2689ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689ACu;
label_2689ac:
    // 0x2689ac: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2689ACu;
    {
        const bool branch_taken_0x2689ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2689ac) {
            ctx->pc = 0x2689B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2689ACu;
            // 0x2689b0: 0x9642011a  lhu         $v0, 0x11A($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 282)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2689FCu;
            goto label_2689fc;
        }
    }
    ctx->pc = 0x2689B4u;
    // 0x2689b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2689b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689b8: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x2689B8u;
    SET_GPR_U32(ctx, 31, 0x2689C0u);
    ctx->pc = 0x2689BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689B8u;
    // 0x2689bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x2689B8u, 0x2689C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689C0u;
label_2689c0:
    // 0x2689c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2689c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689c4: 0xc0a0152  jal         func_280548
    ctx->pc = 0x2689C4u;
    SET_GPR_U32(ctx, 31, 0x2689CCu);
    ctx->pc = 0x2689C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689C4u;
    // 0x2689c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x2689C4u, 0x2689CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689CCu;
label_2689cc:
    // 0x2689cc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2689ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2689d0: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x2689d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
    // 0x2689d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2689d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2689d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2689d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2689dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2689e0: 0x24060085  addiu       $a2, $zero, 0x85
    ctx->pc = 0x2689e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x2689e4: 0xc09a9b4  jal         func_26A6D0
    ctx->pc = 0x2689E4u;
    SET_GPR_U32(ctx, 31, 0x2689ECu);
    ctx->pc = 0x2689E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689E4u;
    // 0x2689e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A6D0u, 0x2689E4u, 0x2689ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689ECu;
label_2689ec:
    // 0x2689ec: 0xc09a544  jal         func_269510
    ctx->pc = 0x2689ECu;
    SET_GPR_U32(ctx, 31, 0x2689F4u);
    ctx->pc = 0x2689F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2689ECu;
    // 0x2689f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269510u, 0x2689ECu, 0x2689F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2689F4u;
label_2689f4:
    // 0x2689f4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2689F4u;
    {
        const bool branch_taken_0x2689f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2689F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2689F4u;
        // 0x2689f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2689f4) {
            ctx->pc = 0x268A94u;
            goto label_268a94;
        }
    }
    ctx->pc = 0x2689FCu;
label_2689fc:
    // 0x2689fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2689fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268a00: 0x2412007d  addiu       $s2, $zero, 0x7D
    ctx->pc = 0x268a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x268a04: 0x2404007b  addiu       $a0, $zero, 0x7B
    ctx->pc = 0x268a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
label_268a08:
    // 0x268a08: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x268a08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x268a0c: 0x83900a  movz        $s2, $a0, $v1
    ctx->pc = 0x268a0cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x268a10: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x268a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x268a14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x268a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a18: 0xc095358  jal         func_254D60
    ctx->pc = 0x268A18u;
    SET_GPR_U32(ctx, 31, 0x268A20u);
    ctx->pc = 0x268A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A18u;
    // 0x268a1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x268A18u, 0x268A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A20u;
label_268a20:
    // 0x268a20: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x268a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x268a24: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x268a24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x268a28: 0x24840798  addiu       $a0, $a0, 0x798
    ctx->pc = 0x268a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1944));
    // 0x268a2c: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x268a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x268a30: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x268a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x268a34: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x268a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x268a38: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x268a38u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x268a3c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x268a3cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x268a40: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x268a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x268a44: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x268A44u;
    {
        const bool branch_taken_0x268a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268A44u;
        // 0x268a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268a44) {
            ctx->pc = 0x268A84u;
            goto label_268a84;
        }
    }
    ctx->pc = 0x268A4Cu;
    // 0x268a4c: 0xc089998  jal         func_226660
    ctx->pc = 0x268A4Cu;
    SET_GPR_U32(ctx, 31, 0x268A54u);
    ctx->pc = 0x268A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A4Cu;
    // 0x268a50: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x268A4Cu, 0x268A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A54u;
label_268a54:
    // 0x268a54: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x268A54u;
    {
        const bool branch_taken_0x268a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268a54) {
            ctx->pc = 0x268A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268A54u;
            // 0x268a58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268A84u;
            goto label_268a84;
        }
    }
    ctx->pc = 0x268A5Cu;
    // 0x268a5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a60: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x268A60u;
    SET_GPR_U32(ctx, 31, 0x268A68u);
    ctx->pc = 0x268A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A60u;
    // 0x268a64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22CB00u, 0x268A60u, 0x268A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A68u;
label_268a68:
    // 0x268a68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a6c: 0xc0a0152  jal         func_280548
    ctx->pc = 0x268A6Cu;
    SET_GPR_U32(ctx, 31, 0x268A74u);
    ctx->pc = 0x268A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A6Cu;
    // 0x268a70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280548u, 0x268A6Cu, 0x268A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A74u;
label_268a74:
    // 0x268a74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x268a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a78: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x268A78u;
    SET_GPR_U32(ctx, 31, 0x268A80u);
    ctx->pc = 0x268A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A78u;
    // 0x268a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x268A78u, 0x268A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A80u;
label_268a80:
    // 0x268a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x268a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_268a84:
    // 0x268a84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x268a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268a88: 0xc09a902  jal         func_26A408
    ctx->pc = 0x268A88u;
    SET_GPR_U32(ctx, 31, 0x268A90u);
    ctx->pc = 0x268A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268A88u;
    // 0x268a8c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26A408u, 0x268A88u, 0x268A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268A90u;
label_268a90:
    // 0x268a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x268a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_268a94:
    // 0x268a94: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x268a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x268a98: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x268a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x268a9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x268a9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x268aa0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x268aa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x268aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x268aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x268AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x268AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268AA8u;
        // 0x268aac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268AB0u;
}
