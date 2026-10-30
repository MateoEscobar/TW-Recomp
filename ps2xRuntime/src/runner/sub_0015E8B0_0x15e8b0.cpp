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

// Function: sub_0015E8B0
// Address: 0x15e8b0 - 0x15ea08
void sub_0015E8B0_0x15e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E8B0_0x15e8b0");
#endif

    switch (ctx->pc) {
        case 0x15e8e4u: goto label_15e8e4;
        case 0x15e8f4u: goto label_15e8f4;
        case 0x15e90cu: goto label_15e90c;
        case 0x15e914u: goto label_15e914;
        case 0x15e924u: goto label_15e924;
        case 0x15e938u: goto label_15e938;
        case 0x15e94cu: goto label_15e94c;
        case 0x15e970u: goto label_15e970;
        case 0x15e97cu: goto label_15e97c;
        case 0x15e988u: goto label_15e988;
        case 0x15e994u: goto label_15e994;
        case 0x15e9bcu: goto label_15e9bc;
        case 0x15e9d8u: goto label_15e9d8;
        case 0x15e9e0u: goto label_15e9e0;
        default: break;
    }

    ctx->pc = 0x15e8b0u;

    // 0x15e8b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15e8b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15e8b8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x15e8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x15e8bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e8bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15e8c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8c4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x15e8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x15e8c8: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x15e8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x15e8cc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x15e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x15e8d0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x15e8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x15e8d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15e8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15e8d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15e8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15e8dc: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15E8DCu;
    SET_GPR_U32(ctx, 31, 0x15E8E4u);
    ctx->pc = 0x15E8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E8DCu;
    // 0x15e8e0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15E8DCu, 0x15E8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E8E4u;
label_15e8e4:
    // 0x15e8e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15e8e8: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x15e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x15e8ec: 0xc0579e4  jal         func_15E790
    ctx->pc = 0x15E8ECu;
    SET_GPR_U32(ctx, 31, 0x15E8F4u);
    ctx->pc = 0x15E8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E8ECu;
    // 0x15e8f0: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E790u, 0x15E8ECu, 0x15E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E8F4u;
label_15e8f4:
    // 0x15e8f4: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x15e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x15e8f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15e8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e8fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15e8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e900: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15e900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15e904: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x15E904u;
    SET_GPR_U32(ctx, 31, 0x15E90Cu);
    ctx->pc = 0x15E908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E904u;
    // 0x15e908: 0xae4200e0  sw          $v0, 0xE0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x15E904u, 0x15E90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E90Cu;
label_15e90c:
    // 0x15e90c: 0xc0639ae  jal         func_18E6B8
    ctx->pc = 0x15E90Cu;
    SET_GPR_U32(ctx, 31, 0x15E914u);
    ctx->pc = 0x15E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E90Cu;
    // 0x15e910: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6B8u, 0x15E90Cu, 0x15E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E914u;
label_15e914:
    // 0x15e914: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x15e914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x15e918: 0x8e24aa84  lw          $a0, -0x557C($s1)
    ctx->pc = 0x15e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
    // 0x15e91c: 0xc04456a  jal         func_1115A8
    ctx->pc = 0x15E91Cu;
    SET_GPR_U32(ctx, 31, 0x15E924u);
    ctx->pc = 0x15E920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E91Cu;
    // 0x15e920: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A8u, 0x15E91Cu, 0x15E924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E924u;
label_15e924:
    // 0x15e924: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x15e924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x15e928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15e928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e92c: 0x2450fab8  addiu       $s0, $v0, -0x548
    ctx->pc = 0x15e92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965944));
    // 0x15e930: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x15E930u;
    SET_GPR_U32(ctx, 31, 0x15E938u);
    ctx->pc = 0x15E934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E930u;
    // 0x15e934: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x15E930u, 0x15E938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E938u;
label_15e938:
    // 0x15e938: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15E938u;
    {
        const bool branch_taken_0x15e938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E938u;
        // 0x15e93c: 0x8e24aa84  lw          $a0, -0x557C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e938) {
            ctx->pc = 0x15E94Cu;
            goto label_15e94c;
        }
    }
    ctx->pc = 0x15E940u;
    // 0x15e940: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15e940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e944: 0xc043e94  jal         func_10FA50
    ctx->pc = 0x15E944u;
    SET_GPR_U32(ctx, 31, 0x15E94Cu);
    ctx->pc = 0x15E948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E944u;
    // 0x15e948: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x15E944u, 0x15E94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E94Cu;
label_15e94c:
    // 0x15e94c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x15e94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x15e950: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15e950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e954: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x15e954u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x15e958: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x15e958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x15e95c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x15E95Cu;
    {
        const bool branch_taken_0x15e95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E95Cu;
        // 0x15e960: 0x26540020  addiu       $s4, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e95c) {
            ctx->pc = 0x15E9A8u;
            goto label_15e9a8;
        }
    }
    ctx->pc = 0x15E964u;
    // 0x15e964: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15e964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e968: 0x24110228  addiu       $s1, $zero, 0x228
    ctx->pc = 0x15e968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x15e96c: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x15e96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_15e970:
    // 0x15e970: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x15e970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15e974: 0xc0e409a  jal         func_390268
    ctx->pc = 0x15E974u;
    SET_GPR_U32(ctx, 31, 0x15E97Cu);
    ctx->pc = 0x15E978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E974u;
    // 0x15e978: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x15E974u, 0x15E97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E97Cu;
label_15e97c:
    // 0x15e97c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x15e97cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x15e980: 0xc087502  jal         func_21D408
    ctx->pc = 0x15E980u;
    SET_GPR_U32(ctx, 31, 0x15E988u);
    ctx->pc = 0x15E984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E980u;
    // 0x15e984: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x15E980u, 0x15E988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E988u;
label_15e988:
    // 0x15e988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15e988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e98c: 0xc0a33b6  jal         func_28CED8
    ctx->pc = 0x15E98Cu;
    SET_GPR_U32(ctx, 31, 0x15E994u);
    ctx->pc = 0x15E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E98Cu;
    // 0x15e990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CED8u, 0x15E98Cu, 0x15E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E994u;
label_15e994:
    // 0x15e994: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x15e994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x15e998: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x15e998u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x15e99c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x15e99cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15e9a0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x15E9A0u;
    {
        const bool branch_taken_0x15e9a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15e9a0) {
            ctx->pc = 0x15E9A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E9A0u;
            // 0x15e9a4: 0x8e64489c  lw          $a0, 0x489C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15e970;
        }
    }
    ctx->pc = 0x15E9A8u;
label_15e9a8:
    // 0x15e9a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x15e9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x15e9ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15e9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e9b0: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x15e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x15e9b4: 0xc046e0e  jal         func_11B838
    ctx->pc = 0x15E9B4u;
    SET_GPR_U32(ctx, 31, 0x15E9BCu);
    ctx->pc = 0x15E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E9B4u;
    // 0x15e9b8: 0xae4300d4  sw          $v1, 0xD4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B838u, 0x15E9B4u, 0x15E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E9BCu;
label_15e9bc:
    // 0x15e9bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15e9c0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x15e9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x15e9c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x15e9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x15e9c8: 0xc46047cc  lwc1        $f0, 0x47CC($v1)
    ctx->pc = 0x15e9c8u;
    { uint32_t bits = FAST_READ32(0x5147CCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e9cc: 0xae4200d0  sw          $v0, 0xD0($s2)
    ctx->pc = 0x15e9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 2));
    // 0x15e9d0: 0xc10324e  jal         func_40C938
    ctx->pc = 0x15E9D0u;
    SET_GPR_U32(ctx, 31, 0x15E9D8u);
    ctx->pc = 0x15E9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E9D0u;
    // 0x15e9d4: 0xe64000e4  swc1        $f0, 0xE4($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C938u, 0x15E9D0u, 0x15E9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E9D8u;
label_15e9d8:
    // 0x15e9d8: 0xc07c5d2  jal         func_1F1748
    ctx->pc = 0x15E9D8u;
    SET_GPR_U32(ctx, 31, 0x15E9E0u);
    ctx->pc = 0x15E9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E9D8u;
    // 0x15e9dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1748u, 0x15E9D8u, 0x15E9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E9E0u;
label_15e9e0:
    // 0x15e9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e9e4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x15e9e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15e9e8: 0xae4200d8  sw          $v0, 0xD8($s2)
    ctx->pc = 0x15e9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 2));
    // 0x15e9ec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x15e9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15e9f0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x15e9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15e9f4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x15e9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15e9f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15e9f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15e9fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15e9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ea00: 0x3e00008  jr          $ra
    ctx->pc = 0x15EA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EA00u;
        // 0x15ea04: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EA08u;
}
