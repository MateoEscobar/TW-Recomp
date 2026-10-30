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

// Function: sub_002B98F0
// Address: 0x2b98f0 - 0x2b9a90
void sub_002B98F0_0x2b98f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B98F0_0x2b98f0");
#endif

    switch (ctx->pc) {
        case 0x2b9928u: goto label_2b9928;
        case 0x2b9930u: goto label_2b9930;
        case 0x2b9940u: goto label_2b9940;
        case 0x2b9970u: goto label_2b9970;
        case 0x2b998cu: goto label_2b998c;
        case 0x2b999cu: goto label_2b999c;
        case 0x2b99acu: goto label_2b99ac;
        case 0x2b99bcu: goto label_2b99bc;
        case 0x2b99d8u: goto label_2b99d8;
        case 0x2b99e4u: goto label_2b99e4;
        case 0x2b99f4u: goto label_2b99f4;
        case 0x2b9a24u: goto label_2b9a24;
        case 0x2b9a34u: goto label_2b9a34;
        case 0x2b9a44u: goto label_2b9a44;
        case 0x2b9a64u: goto label_2b9a64;
        default: break;
    }

    ctx->pc = 0x2b98f0u;

    // 0x2b98f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b98f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b98f4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2b98f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2b98f8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2b98f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2b98fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b98fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9900: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2b9900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2b9904: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2b9904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2b9908: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2b9908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2b990c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b990cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9910: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b9910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2b9914: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2b9914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2b9918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b991c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b991cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9920: 0xc0e40a2  jal         func_390288
    ctx->pc = 0x2B9920u;
    SET_GPR_U32(ctx, 31, 0x2B9928u);
    ctx->pc = 0x2B9924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9920u;
    // 0x2b9924: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2B9920u, 0x2B9928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9928u;
label_2b9928:
    // 0x2b9928: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2B9928u;
    SET_GPR_U32(ctx, 31, 0x2B9930u);
    ctx->pc = 0x2B992Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9928u;
    // 0x2b992c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2B9928u, 0x2B9930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9930u;
label_2b9930:
    // 0x2b9930: 0x54550004  bnel        $v0, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B9930u;
    {
        const bool branch_taken_0x2b9930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2b9930) {
            ctx->pc = 0x2B9934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9930u;
            // 0x2b9934: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9944u;
            goto label_2b9944;
        }
    }
    ctx->pc = 0x2B9938u;
    // 0x2b9938: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B9938u;
    SET_GPR_U32(ctx, 31, 0x2B9940u);
    ctx->pc = 0x2B993Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9938u;
    // 0x2b993c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B9938u, 0x2B9940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9940u;
label_2b9940:
    // 0x2b9940: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b9940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9944:
    // 0x2b9944: 0x8062002e  lb          $v0, 0x2E($v1)
    ctx->pc = 0x2b9944u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x2b9948: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2b9948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b994c: 0x10550045  beq         $v0, $s5, . + 4 + (0x45 << 2)
    ctx->pc = 0x2B994Cu;
    {
        const bool branch_taken_0x2b994c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2B9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B994Cu;
        // 0x2b9950: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b994c) {
            ctx->pc = 0x2B9A64u;
            goto label_2b9a64;
        }
    }
    ctx->pc = 0x2B9954u;
    // 0x2b9954: 0x86630092  lh          $v1, 0x92($s3)
    ctx->pc = 0x2b9954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 146)));
    // 0x2b9958: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2b9958u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b995c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9960: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b9960u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2b9964: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2b9964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b9968: 0xc0a7c8c  jal         func_29F230
    ctx->pc = 0x2B9968u;
    SET_GPR_U32(ctx, 31, 0x2B9970u);
    ctx->pc = 0x2B996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9968u;
    // 0x2b996c: 0x749021  addu        $s2, $v1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F230u, 0x2B9968u, 0x2B9970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9970u;
label_2b9970:
    // 0x2b9970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9974: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B9974u;
    {
        const bool branch_taken_0x2b9974 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9974u;
        // 0x2b9978: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9974) {
            ctx->pc = 0x2B99ECu;
            goto label_2b99ec;
        }
    }
    ctx->pc = 0x2B997Cu;
    // 0x2b997c: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2b997cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2b9980: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b9980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b9984: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B9984u;
    SET_GPR_U32(ctx, 31, 0x2B998Cu);
    ctx->pc = 0x2B9988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9984u;
    // 0x2b9988: 0x942021  addu        $a0, $a0, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B9984u, 0x2B998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B998Cu;
label_2b998c:
    // 0x2b998c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b998cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9990: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b9990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9994: 0xc08886c  jal         func_2221B0
    ctx->pc = 0x2B9994u;
    SET_GPR_U32(ctx, 31, 0x2B999Cu);
    ctx->pc = 0x2B9998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9994u;
    // 0x2b9998: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2221B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2221B0u, 0x2B9994u, 0x2B999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B999Cu;
label_2b999c:
    // 0x2b999c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B999Cu;
    {
        const bool branch_taken_0x2b999c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b999c) {
            ctx->pc = 0x2B99B4u;
            goto label_2b99b4;
        }
    }
    ctx->pc = 0x2B99A4u;
    // 0x2b99a4: 0xc0ae5f0  jal         func_2B97C0
    ctx->pc = 0x2B99A4u;
    SET_GPR_U32(ctx, 31, 0x2B99ACu);
    ctx->pc = 0x2B99A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99A4u;
    // 0x2b99a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B97C0u, 0x2B99A4u, 0x2B99ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99ACu;
label_2b99ac:
    // 0x2b99ac: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x2B99ACu;
    {
        const bool branch_taken_0x2b99ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99ACu;
        // 0x2b99b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99ac) {
            ctx->pc = 0x2B9A68u;
            goto label_2b9a68;
        }
    }
    ctx->pc = 0x2B99B4u;
label_2b99b4:
    // 0x2b99b4: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2B99B4u;
    SET_GPR_U32(ctx, 31, 0x2B99BCu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2B99B4u, 0x2B99BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99BCu;
label_2b99bc:
    // 0x2b99bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b99bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b99c0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B99C0u;
    {
        const bool branch_taken_0x2b99c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99C0u;
        // 0x2b99c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99c0) {
            ctx->pc = 0x2B99D8u;
            goto label_2b99d8;
        }
    }
    ctx->pc = 0x2B99C8u;
    // 0x2b99c8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b99c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b99cc: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2b99ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2b99d0: 0xc0acb08  jal         func_2B2C20
    ctx->pc = 0x2B99D0u;
    SET_GPR_U32(ctx, 31, 0x2B99D8u);
    ctx->pc = 0x2B99D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99D0u;
    // 0x2b99d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2C20u, 0x2B99D0u, 0x2B99D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99D8u;
label_2b99d8:
    // 0x2b99d8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b99d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b99dc: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2B99DCu;
    SET_GPR_U32(ctx, 31, 0x2B99E4u);
    ctx->pc = 0x2B99E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99DCu;
    // 0x2b99e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2B99DCu, 0x2B99E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99E4u;
label_2b99e4:
    // 0x2b99e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2B99E4u;
    {
        const bool branch_taken_0x2b99e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B99E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99E4u;
        // 0x2b99e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99e4) {
            ctx->pc = 0x2B9A68u;
            goto label_2b9a68;
        }
    }
    ctx->pc = 0x2B99ECu;
label_2b99ec:
    // 0x2b99ec: 0xc0ae5f0  jal         func_2B97C0
    ctx->pc = 0x2B99ECu;
    SET_GPR_U32(ctx, 31, 0x2B99F4u);
    ctx->pc = 0x2B99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B99ECu;
    // 0x2b99f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B97C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B97C0u, 0x2B99ECu, 0x2B99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B99F4u;
label_2b99f4:
    // 0x2b99f4: 0x1055001b  beq         $v0, $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x2B99F4u;
    {
        const bool branch_taken_0x2b99f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x2B99F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99F4u;
        // 0x2b99f8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99f4) {
            ctx->pc = 0x2B9A64u;
            goto label_2b9a64;
        }
    }
    ctx->pc = 0x2B99FCu;
    // 0x2b99fc: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x2b99fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2b9a00: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x2b9a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x2b9a04: 0x8c900048  lw          $s0, 0x48($a0)
    ctx->pc = 0x2b9a04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2b9a08: 0x70182b  sltu        $v1, $v1, $s0
    ctx->pc = 0x2b9a08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2b9a0c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2B9A0Cu;
    {
        const bool branch_taken_0x2b9a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A0Cu;
        // 0x2b9a10: 0x3c04006f  lui         $a0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a0c) {
            ctx->pc = 0x2B9A64u;
            goto label_2b9a64;
        }
    }
    ctx->pc = 0x2B9A14u;
    // 0x2b9a14: 0x24050bb8  addiu       $a1, $zero, 0xBB8
    ctx->pc = 0x2b9a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x2b9a18: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2b9a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2b9a1c: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x2B9A1Cu;
    SET_GPR_U32(ctx, 31, 0x2B9A24u);
    ctx->pc = 0x2B9A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A1Cu;
    // 0x2b9a20: 0x24061770  addiu       $a2, $zero, 0x1770 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x2B9A1Cu, 0x2B9A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A24u;
label_2b9a24:
    // 0x2b9a24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b9a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2b9a28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b9a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9a2c: 0xc0a47b4  jal         func_291ED0
    ctx->pc = 0x2B9A2Cu;
    SET_GPR_U32(ctx, 31, 0x2B9A34u);
    ctx->pc = 0x2B9A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A2Cu;
    // 0x2b9a30: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2B9A2Cu, 0x2B9A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A34u;
label_2b9a34:
    // 0x2b9a34: 0x1455000c  bne         $v0, $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x2B9A34u;
    {
        const bool branch_taken_0x2b9a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x2B9A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A34u;
        // 0x2b9a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a34) {
            ctx->pc = 0x2B9A68u;
            goto label_2b9a68;
        }
    }
    ctx->pc = 0x2B9A3Cu;
    // 0x2b9a3c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B9A3Cu;
    SET_GPR_U32(ctx, 31, 0x2B9A44u);
    ctx->pc = 0x2B9A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A3Cu;
    // 0x2b9a40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B9A3Cu, 0x2B9A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A44u;
label_2b9a44:
    // 0x2b9a44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B9A44u;
    {
        const bool branch_taken_0x2b9a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A44u;
        // 0x2b9a48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9a44) {
            ctx->pc = 0x2B9A64u;
            goto label_2b9a64;
        }
    }
    ctx->pc = 0x2B9A4Cu;
    // 0x2b9a4c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2b9a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b9a50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2b9a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b9a54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b9a54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9a58: 0x24080057  addiu       $t0, $zero, 0x57
    ctx->pc = 0x2b9a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x2b9a5c: 0xc0bec3c  jal         func_2FB0F0
    ctx->pc = 0x2B9A5Cu;
    SET_GPR_U32(ctx, 31, 0x2B9A64u);
    ctx->pc = 0x2B9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9A5Cu;
    // 0x2b9a60: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F0u, 0x2B9A5Cu, 0x2B9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9A64u;
label_2b9a64:
    // 0x2b9a64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b9a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9a68:
    // 0x2b9a68: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2b9a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b9a6c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2b9a6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b9a70: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2b9a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b9a74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b9a74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b9a78: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2b9a78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b9a7c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2b9a7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9a84: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9A84u;
        // 0x2b9a88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9A8Cu;
    // 0x2b9a8c: 0x0  nop
    ctx->pc = 0x2b9a8cu;
    // NOP
    ctx->pc = 0x2b9a90u;
}
