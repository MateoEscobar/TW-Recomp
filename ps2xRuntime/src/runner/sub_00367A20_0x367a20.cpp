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

// Function: sub_00367A20
// Address: 0x367a20 - 0x367cd8
void sub_00367A20_0x367a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367A20_0x367a20");
#endif

    switch (ctx->pc) {
        case 0x367a64u: goto label_367a64;
        case 0x367a7cu: goto label_367a7c;
        case 0x367a94u: goto label_367a94;
        case 0x367aacu: goto label_367aac;
        case 0x367ac4u: goto label_367ac4;
        case 0x367adcu: goto label_367adc;
        case 0x367af0u: goto label_367af0;
        case 0x367b00u: goto label_367b00;
        case 0x367b14u: goto label_367b14;
        case 0x367b2cu: goto label_367b2c;
        case 0x367b3cu: goto label_367b3c;
        case 0x367b54u: goto label_367b54;
        case 0x367b5cu: goto label_367b5c;
        case 0x367b70u: goto label_367b70;
        case 0x367b78u: goto label_367b78;
        case 0x367b8cu: goto label_367b8c;
        case 0x367b94u: goto label_367b94;
        case 0x367ba8u: goto label_367ba8;
        case 0x367bbcu: goto label_367bbc;
        case 0x367bd0u: goto label_367bd0;
        case 0x367be4u: goto label_367be4;
        case 0x367becu: goto label_367bec;
        case 0x367bf8u: goto label_367bf8;
        case 0x367c10u: goto label_367c10;
        case 0x367c18u: goto label_367c18;
        case 0x367c4cu: goto label_367c4c;
        case 0x367c58u: goto label_367c58;
        case 0x367c60u: goto label_367c60;
        case 0x367c70u: goto label_367c70;
        case 0x367c84u: goto label_367c84;
        case 0x367ca0u: goto label_367ca0;
        default: break;
    }

    ctx->pc = 0x367a20u;

    // 0x367a20: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x367a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x367a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367a28: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x367a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x367a2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x367a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367a30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x367a30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a34: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x367a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x367a38: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x367a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x367a3c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x367a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x367a40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367a44: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x367a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x367a48: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x367a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x367a4c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x367a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x367a50: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x367a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x367a54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x367a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x367a58: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x367a58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x367a5c: 0xc10311e  jal         func_40C478
    ctx->pc = 0x367A5Cu;
    SET_GPR_U32(ctx, 31, 0x367A64u);
    ctx->pc = 0x367A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367A5Cu;
    // 0x367a60: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x367A5Cu, 0x367A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A64u;
label_367a64:
    // 0x367a64: 0x1040008c  beqz        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x367A64u;
    {
        const bool branch_taken_0x367a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A64u;
        // 0x367a68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a64) {
            ctx->pc = 0x367C98u;
            goto label_367c98;
        }
    }
    ctx->pc = 0x367A6Cu;
    // 0x367a6c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367a70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x367a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367a74: 0xc10311e  jal         func_40C478
    ctx->pc = 0x367A74u;
    SET_GPR_U32(ctx, 31, 0x367A7Cu);
    ctx->pc = 0x367A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367A74u;
    // 0x367a78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x367A74u, 0x367A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A7Cu;
label_367a7c:
    // 0x367a7c: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x367A7Cu;
    {
        const bool branch_taken_0x367a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A7Cu;
        // 0x367a80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a7c) {
            ctx->pc = 0x367C98u;
            goto label_367c98;
        }
    }
    ctx->pc = 0x367A84u;
    // 0x367a84: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x367a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x367a88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x367a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367a8c: 0xc10311e  jal         func_40C478
    ctx->pc = 0x367A8Cu;
    SET_GPR_U32(ctx, 31, 0x367A94u);
    ctx->pc = 0x367A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367A8Cu;
    // 0x367a90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x367A8Cu, 0x367A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367A94u;
label_367a94:
    // 0x367a94: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x367A94u;
    {
        const bool branch_taken_0x367a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367A94u;
        // 0x367a98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367a94) {
            ctx->pc = 0x367C98u;
            goto label_367c98;
        }
    }
    ctx->pc = 0x367A9Cu;
    // 0x367a9c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x367a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367aa0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x367aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367aa4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x367AA4u;
    SET_GPR_U32(ctx, 31, 0x367AACu);
    ctx->pc = 0x367AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AA4u;
    // 0x367aa8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x367AA4u, 0x367AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AACu;
label_367aac:
    // 0x367aac: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x367AACu;
    {
        const bool branch_taken_0x367aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AACu;
        // 0x367ab0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367aac) {
            ctx->pc = 0x367C98u;
            goto label_367c98;
        }
    }
    ctx->pc = 0x367AB4u;
    // 0x367ab4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x367ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x367ab8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x367ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x367abc: 0xc10311e  jal         func_40C478
    ctx->pc = 0x367ABCu;
    SET_GPR_U32(ctx, 31, 0x367AC4u);
    ctx->pc = 0x367AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367ABCu;
    // 0x367ac0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x367ABCu, 0x367AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AC4u;
label_367ac4:
    // 0x367ac4: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x367AC4u;
    {
        const bool branch_taken_0x367ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AC4u;
        // 0x367ac8: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ac4) {
            ctx->pc = 0x367C98u;
            goto label_367c98;
        }
    }
    ctx->pc = 0x367ACCu;
    // 0x367acc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ad0: 0x24509290  addiu       $s0, $v0, -0x6D70
    ctx->pc = 0x367ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939280));
    // 0x367ad4: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x367AD4u;
    SET_GPR_U32(ctx, 31, 0x367ADCu);
    ctx->pc = 0x367AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AD4u;
    // 0x367ad8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x367AD4u, 0x367ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367ADCu;
label_367adc:
    // 0x367adc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x367adcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ae0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ae4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x367ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367ae8: 0xc10311e  jal         func_40C478
    ctx->pc = 0x367AE8u;
    SET_GPR_U32(ctx, 31, 0x367AF0u);
    ctx->pc = 0x367AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AE8u;
    // 0x367aec: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x367AE8u, 0x367AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AF0u;
label_367af0:
    // 0x367af0: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x367AF0u;
    {
        const bool branch_taken_0x367af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367AF0u;
        // 0x367af4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367af0) {
            ctx->pc = 0x367C98u;
            goto label_367c98;
        }
    }
    ctx->pc = 0x367AF8u;
    // 0x367af8: 0xc1026b2  jal         func_409AC8
    ctx->pc = 0x367AF8u;
    SET_GPR_U32(ctx, 31, 0x367B00u);
    ctx->pc = 0x367AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AF8u;
    // 0x367afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409AC8u, 0x367AF8u, 0x367B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B00u;
label_367b00:
    // 0x367b00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x367b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b08: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367b0c: 0xc10311e  jal         func_40C478
    ctx->pc = 0x367B0Cu;
    SET_GPR_U32(ctx, 31, 0x367B14u);
    ctx->pc = 0x367B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B0Cu;
    // 0x367b10: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x367B0Cu, 0x367B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B14u;
label_367b14:
    // 0x367b14: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x367B14u;
    {
        const bool branch_taken_0x367b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B14u;
        // 0x367b18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b14) {
            ctx->pc = 0x367C98u;
            goto label_367c98;
        }
    }
    ctx->pc = 0x367B1Cu;
    // 0x367b1c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x367b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x367b20: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x367b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367b24: 0xc10311e  jal         func_40C478
    ctx->pc = 0x367B24u;
    SET_GPR_U32(ctx, 31, 0x367B2Cu);
    ctx->pc = 0x367B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B24u;
    // 0x367b28: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x367B24u, 0x367B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B2Cu;
label_367b2c:
    // 0x367b2c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x367B2Cu;
    {
        const bool branch_taken_0x367b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B2Cu;
        // 0x367b30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b2c) {
            ctx->pc = 0x367C98u;
            goto label_367c98;
        }
    }
    ctx->pc = 0x367B34u;
    // 0x367b34: 0xc10314e  jal         func_40C538
    ctx->pc = 0x367B34u;
    SET_GPR_U32(ctx, 31, 0x367B3Cu);
    ctx->pc = 0x367B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B34u;
    // 0x367b38: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C538u, 0x367B34u, 0x367B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B3Cu;
label_367b3c:
    // 0x367b3c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x367B3Cu;
    {
        const bool branch_taken_0x367b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B3Cu;
        // 0x367b40: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b3c) {
            ctx->pc = 0x367C98u;
            goto label_367c98;
        }
    }
    ctx->pc = 0x367B44u;
    // 0x367b44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x367b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367b48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367b48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b4c: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367B4Cu;
    SET_GPR_U32(ctx, 31, 0x367B54u);
    ctx->pc = 0x367B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B4Cu;
    // 0x367b50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367B4Cu, 0x367B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B54u;
label_367b54:
    // 0x367b54: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367B54u;
    SET_GPR_U32(ctx, 31, 0x367B5Cu);
    ctx->pc = 0x367B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B54u;
    // 0x367b58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367B54u, 0x367B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B5Cu;
label_367b5c:
    // 0x367b5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b60: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x367b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x367b64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b68: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367B68u;
    SET_GPR_U32(ctx, 31, 0x367B70u);
    ctx->pc = 0x367B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B68u;
    // 0x367b6c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367B68u, 0x367B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B70u;
label_367b70:
    // 0x367b70: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x367B70u;
    SET_GPR_U32(ctx, 31, 0x367B78u);
    ctx->pc = 0x367B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B70u;
    // 0x367b74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x367B70u, 0x367B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B78u;
label_367b78:
    // 0x367b78: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x367b78u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x367b7c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x367b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367b84: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367B84u;
    SET_GPR_U32(ctx, 31, 0x367B8Cu);
    ctx->pc = 0x367B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B84u;
    // 0x367b88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367B84u, 0x367B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B8Cu;
label_367b8c:
    // 0x367b8c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x367B8Cu;
    SET_GPR_U32(ctx, 31, 0x367B94u);
    ctx->pc = 0x367B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B8Cu;
    // 0x367b90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x367B8Cu, 0x367B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B94u;
label_367b94:
    // 0x367b94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b98: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x367b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x367b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ba0: 0xc102488  jal         func_409220
    ctx->pc = 0x367BA0u;
    SET_GPR_U32(ctx, 31, 0x367BA8u);
    ctx->pc = 0x367BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367BA0u;
    // 0x367ba4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x367BA0u, 0x367BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BA8u;
label_367ba8:
    // 0x367ba8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x367bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x367bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bb4: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367BB4u;
    SET_GPR_U32(ctx, 31, 0x367BBCu);
    ctx->pc = 0x367BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367BB4u;
    // 0x367bb8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367BB4u, 0x367BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BBCu;
label_367bbc:
    // 0x367bbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bc0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x367bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x367bc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x367bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367bc8: 0xc1024c6  jal         func_409318
    ctx->pc = 0x367BC8u;
    SET_GPR_U32(ctx, 31, 0x367BD0u);
    ctx->pc = 0x367BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367BC8u;
    // 0x367bcc: 0x2a02b  sltu        $s4, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x409318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409318u, 0x367BC8u, 0x367BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BD0u;
label_367bd0:
    // 0x367bd0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bd8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x367bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x367bdc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x367BDCu;
    SET_GPR_U32(ctx, 31, 0x367BE4u);
    ctx->pc = 0x367BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367BDCu;
    // 0x367be0: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x367BDCu, 0x367BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BE4u;
label_367be4:
    // 0x367be4: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x367BE4u;
    SET_GPR_U32(ctx, 31, 0x367BECu);
    ctx->pc = 0x367BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367BE4u;
    // 0x367be8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x367BE4u, 0x367BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BECu;
label_367bec:
    // 0x367bec: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x367becu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x367bf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x367bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367bf4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x367bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_367bf8:
    // 0x367bf8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x367bf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x367bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367c04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x367c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c08: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x367C08u;
    SET_GPR_U32(ctx, 31, 0x367C10u);
    ctx->pc = 0x367C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C08u;
    // 0x367c0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x367C08u, 0x367C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C10u;
label_367c10:
    // 0x367c10: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x367C10u;
    SET_GPR_U32(ctx, 31, 0x367C18u);
    ctx->pc = 0x367C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C10u;
    // 0x367c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x367C10u, 0x367C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C18u;
label_367c18:
    // 0x367c18: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x367c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x367c1c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x367c1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x367c20: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x367C20u;
    {
        const bool branch_taken_0x367c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C20u;
        // 0x367c24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367c20) {
            ctx->pc = 0x367BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367bf8;
        }
    }
    ctx->pc = 0x367C28u;
    // 0x367c28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x367c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c2c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x367c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c30: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x367c30u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x367c34: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x367c34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c38: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x367c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c3c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x367c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c40: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x367c40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c44: 0xc0d4f9c  jal         func_353E70
    ctx->pc = 0x367C44u;
    SET_GPR_U32(ctx, 31, 0x367C4Cu);
    ctx->pc = 0x367C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C44u;
    // 0x367c48: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x353E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353E70u, 0x367C44u, 0x367C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C4Cu;
label_367c4c:
    // 0x367c4c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x367c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c50: 0xc102562  jal         func_409588
    ctx->pc = 0x367C50u;
    SET_GPR_U32(ctx, 31, 0x367C58u);
    ctx->pc = 0x367C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C50u;
    // 0x367c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409588u, 0x367C50u, 0x367C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C58u;
label_367c58:
    // 0x367c58: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x367c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c5c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x367c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_367c60:
    // 0x367c60: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x367c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x367c64: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x367c64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x367c68: 0xc10b1f8  jal         func_42C7E0
    ctx->pc = 0x367C68u;
    SET_GPR_U32(ctx, 31, 0x367C70u);
    ctx->pc = 0x367C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C68u;
    // 0x367c6c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C7E0u, 0x367C68u, 0x367C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C70u;
label_367c70:
    // 0x367c70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x367c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x367c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x367c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367c7c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x367C7Cu;
    SET_GPR_U32(ctx, 31, 0x367C84u);
    ctx->pc = 0x367C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C7Cu;
    // 0x367c80: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x367C7Cu, 0x367C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C84u;
label_367c84:
    // 0x367c84: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x367c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x367c88: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x367C88u;
    {
        const bool branch_taken_0x367c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C88u;
        // 0x367c8c: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367c88) {
            ctx->pc = 0x367C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367c60;
        }
    }
    ctx->pc = 0x367C90u;
    // 0x367c90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x367C90u;
    {
        const bool branch_taken_0x367c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367C90u;
        // 0x367c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367c90) {
            ctx->pc = 0x367CA0u;
            goto label_367ca0;
        }
    }
    ctx->pc = 0x367C98u;
label_367c98:
    // 0x367c98: 0xc0d9e04  jal         func_367810
    ctx->pc = 0x367C98u;
    SET_GPR_U32(ctx, 31, 0x367CA0u);
    ctx->pc = 0x367C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C98u;
    // 0x367c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367810u, 0x367C98u, 0x367CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CA0u;
label_367ca0:
    // 0x367ca0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x367ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x367ca4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x367ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x367ca8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x367ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x367cac: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x367cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x367cb0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x367cb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x367cb4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x367cb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x367cb8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x367cb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x367cbc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x367cbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x367cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367cc4: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x367cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x367cc8: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x367cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x367ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x367CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x367CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367CCCu;
        // 0x367cd0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367CD4u;
    // 0x367cd4: 0x0  nop
    ctx->pc = 0x367cd4u;
    // NOP
    ctx->pc = 0x367cd8u;
}
