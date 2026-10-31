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

// Function: sub_003A3BA0
// Address: 0x3a3ba0 - 0x3a3d70
void sub_003A3BA0_0x3a3ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3BA0_0x3a3ba0");
#endif

    switch (ctx->pc) {
        case 0x3a3bd4u: goto label_3a3bd4;
        case 0x3a3be0u: goto label_3a3be0;
        case 0x3a3bf0u: goto label_3a3bf0;
        case 0x3a3c24u: goto label_3a3c24;
        case 0x3a3c3cu: goto label_3a3c3c;
        case 0x3a3c4cu: goto label_3a3c4c;
        case 0x3a3c64u: goto label_3a3c64;
        case 0x3a3c74u: goto label_3a3c74;
        case 0x3a3c8cu: goto label_3a3c8c;
        case 0x3a3c98u: goto label_3a3c98;
        case 0x3a3cb4u: goto label_3a3cb4;
        case 0x3a3cccu: goto label_3a3ccc;
        case 0x3a3cdcu: goto label_3a3cdc;
        case 0x3a3cf4u: goto label_3a3cf4;
        case 0x3a3d04u: goto label_3a3d04;
        case 0x3a3d1cu: goto label_3a3d1c;
        case 0x3a3d28u: goto label_3a3d28;
        default: break;
    }

    ctx->pc = 0x3a3ba0u;

    // 0x3a3ba0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3a3ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3a3ba4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3a3ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x3a3ba8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3a3ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x3a3bac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3a3bacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3bb0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3a3bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3a3bb4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3a3bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3bb8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3a3bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x3a3bbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3a3bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3bc0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3a3bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x3a3bc4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3a3bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x3a3bc8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a3bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a3bcc: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x3A3BCCu;
    SET_GPR_U32(ctx, 31, 0x3A3BD4u);
    ctx->pc = 0x3A3BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3BCCu;
    // 0x3a3bd0: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x3A3BCCu, 0x3A3BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3BD4u;
label_3a3bd4:
    // 0x3a3bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3bd8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x3A3BD8u;
    SET_GPR_U32(ctx, 31, 0x3A3BE0u);
    ctx->pc = 0x3A3BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3BD8u;
    // 0x3a3bdc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3A3BD8u, 0x3A3BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3BE0u;
label_3a3be0:
    // 0x3a3be0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a3be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3be4: 0x8e5300cc  lw          $s3, 0xCC($s2)
    ctx->pc = 0x3a3be4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x3a3be8: 0xc08a200  jal         func_228800
    ctx->pc = 0x3A3BE8u;
    SET_GPR_U32(ctx, 31, 0x3A3BF0u);
    ctx->pc = 0x3A3BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3BE8u;
    // 0x3a3bec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x3A3BE8u, 0x3A3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3BF0u;
label_3a3bf0:
    // 0x3a3bf0: 0x9043011a  lbu         $v1, 0x11A($v0)
    ctx->pc = 0x3a3bf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 282)));
    // 0x3a3bf4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x3a3bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x3a3bf8: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A3BF8u;
    {
        const bool branch_taken_0x3a3bf8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3BF8u;
        // 0x3a3bfc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3bf8) {
            ctx->pc = 0x3A3C10u;
            goto label_3a3c10;
        }
    }
    ctx->pc = 0x3A3C00u;
    // 0x3a3c00: 0x12820027  beq         $s4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x3A3C00u;
    {
        const bool branch_taken_0x3a3c00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C00u;
        // 0x3a3c04: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c00) {
            ctx->pc = 0x3A3CA0u;
            goto label_3a3ca0;
        }
    }
    ctx->pc = 0x3A3C08u;
    // 0x3a3c08: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3A3C08u;
    {
        const bool branch_taken_0x3a3c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C08u;
        // 0x3a3c0c: 0x244216c0  addiu       $v0, $v0, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c08) {
            ctx->pc = 0x3A3D34u;
            goto label_3a3d34;
        }
    }
    ctx->pc = 0x3A3C10u;
label_3a3c10:
    // 0x3a3c10: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3c14: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A3C14u;
    {
        const bool branch_taken_0x3a3c14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C14u;
        // 0x3a3c18: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c14) {
            ctx->pc = 0x3A3C7Cu;
            goto label_3a3c7c;
        }
    }
    ctx->pc = 0x3A3C1Cu;
    // 0x3a3c1c: 0xc08a3c2  jal         func_228F08
    ctx->pc = 0x3A3C1Cu;
    SET_GPR_U32(ctx, 31, 0x3A3C24u);
    ctx->pc = 0x3A3C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C1Cu;
    // 0x3a3c20: 0x8e4400d0  lw          $a0, 0xD0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228F08u, 0x3A3C1Cu, 0x3A3C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C24u;
label_3a3c24:
    // 0x3a3c24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A3C24u;
    {
        const bool branch_taken_0x3a3c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C24u;
        // 0x3a3c28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c24) {
            ctx->pc = 0x3A3C54u;
            goto label_3a3c54;
        }
    }
    ctx->pc = 0x3A3C2Cu;
    // 0x3a3c2c: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x3a3c2cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    // 0x3a3c30: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3a3c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x3a3c34: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3C34u;
    SET_GPR_U32(ctx, 31, 0x3A3C3Cu);
    ctx->pc = 0x3A3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C34u;
    // 0x3a3c38: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3C34u, 0x3A3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C3Cu;
label_3a3c3c:
    // 0x3a3c3c: 0x8e4600d0  lw          $a2, 0xD0($s2)
    ctx->pc = 0x3a3c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x3a3c40: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x3a3c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a3c44: 0xc08a3d0  jal         func_228F40
    ctx->pc = 0x3A3C44u;
    SET_GPR_U32(ctx, 31, 0x3A3C4Cu);
    ctx->pc = 0x3A3C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C44u;
    // 0x3a3c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228F40u, 0x3A3C44u, 0x3A3C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C4Cu;
label_3a3c4c:
    // 0x3a3c4c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x3A3C4Cu;
    {
        const bool branch_taken_0x3a3c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C4Cu;
        // 0x3a3c50: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c4c) {
            ctx->pc = 0x3A3D2Cu;
            goto label_3a3d2c;
        }
    }
    ctx->pc = 0x3A3C54u;
label_3a3c54:
    // 0x3a3c54: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x3a3c54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    // 0x3a3c58: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3a3c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x3a3c5c: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3C5Cu;
    SET_GPR_U32(ctx, 31, 0x3A3C64u);
    ctx->pc = 0x3A3C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C5Cu;
    // 0x3a3c60: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3C5Cu, 0x3A3C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C64u;
label_3a3c64:
    // 0x3a3c64: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x3a3c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a3c68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c6c: 0xc08a3d0  jal         func_228F40
    ctx->pc = 0x3A3C6Cu;
    SET_GPR_U32(ctx, 31, 0x3A3C74u);
    ctx->pc = 0x3A3C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C6Cu;
    // 0x3a3c70: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228F40u, 0x3A3C6Cu, 0x3A3C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C74u;
label_3a3c74:
    // 0x3a3c74: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x3A3C74u;
    {
        const bool branch_taken_0x3a3c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C74u;
        // 0x3a3c78: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c74) {
            ctx->pc = 0x3A3D2Cu;
            goto label_3a3d2c;
        }
    }
    ctx->pc = 0x3A3C7Cu;
label_3a3c7c:
    // 0x3a3c7c: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x3a3c7cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    // 0x3a3c80: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3a3c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x3a3c84: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3C84u;
    SET_GPR_U32(ctx, 31, 0x3A3C8Cu);
    ctx->pc = 0x3A3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C84u;
    // 0x3a3c88: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3C84u, 0x3A3C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C8Cu;
label_3a3c8c:
    // 0x3a3c8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a3c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3c90: 0xc0e460a  jal         func_391828
    ctx->pc = 0x3A3C90u;
    SET_GPR_U32(ctx, 31, 0x3A3C98u);
    ctx->pc = 0x3A3C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3C90u;
    // 0x3a3c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391828u, 0x3A3C90u, 0x3A3C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3C98u;
label_3a3c98:
    // 0x3a3c98: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3A3C98u;
    {
        const bool branch_taken_0x3a3c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3C98u;
        // 0x3a3c9c: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3c98) {
            ctx->pc = 0x3A3D2Cu;
            goto label_3a3d2c;
        }
    }
    ctx->pc = 0x3A3CA0u;
label_3a3ca0:
    // 0x3a3ca0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3a3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3ca4: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3A3CA4u;
    {
        const bool branch_taken_0x3a3ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CA4u;
        // 0x3a3ca8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ca4) {
            ctx->pc = 0x3A3D0Cu;
            goto label_3a3d0c;
        }
    }
    ctx->pc = 0x3A3CACu;
    // 0x3a3cac: 0xc08a3c2  jal         func_228F08
    ctx->pc = 0x3A3CACu;
    SET_GPR_U32(ctx, 31, 0x3A3CB4u);
    ctx->pc = 0x3A3CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3CACu;
    // 0x3a3cb0: 0x8e4400d0  lw          $a0, 0xD0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228F08u, 0x3A3CACu, 0x3A3CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3CB4u;
label_3a3cb4:
    // 0x3a3cb4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A3CB4u;
    {
        const bool branch_taken_0x3a3cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CB4u;
        // 0x3a3cb8: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3cb4) {
            ctx->pc = 0x3A3CE4u;
            goto label_3a3ce4;
        }
    }
    ctx->pc = 0x3A3CBCu;
    // 0x3a3cbc: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x3a3cbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    // 0x3a3cc0: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3a3cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x3a3cc4: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3CC4u;
    SET_GPR_U32(ctx, 31, 0x3A3CCCu);
    ctx->pc = 0x3A3CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3CC4u;
    // 0x3a3cc8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3CC4u, 0x3A3CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3CCCu;
label_3a3ccc:
    // 0x3a3ccc: 0x8e4600d0  lw          $a2, 0xD0($s2)
    ctx->pc = 0x3a3cccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x3a3cd0: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x3a3cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a3cd4: 0xc08a40a  jal         func_229028
    ctx->pc = 0x3A3CD4u;
    SET_GPR_U32(ctx, 31, 0x3A3CDCu);
    ctx->pc = 0x3A3CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3CD4u;
    // 0x3a3cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229028u, 0x3A3CD4u, 0x3A3CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3CDCu;
label_3a3cdc:
    // 0x3a3cdc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3A3CDCu;
    {
        const bool branch_taken_0x3a3cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3CDCu;
        // 0x3a3ce0: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3cdc) {
            ctx->pc = 0x3A3D2Cu;
            goto label_3a3d2c;
        }
    }
    ctx->pc = 0x3A3CE4u;
label_3a3ce4:
    // 0x3a3ce4: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x3a3ce4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    // 0x3a3ce8: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3a3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x3a3cec: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3CECu;
    SET_GPR_U32(ctx, 31, 0x3A3CF4u);
    ctx->pc = 0x3A3CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3CECu;
    // 0x3a3cf0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3CECu, 0x3A3CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3CF4u;
label_3a3cf4:
    // 0x3a3cf4: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x3a3cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3a3cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3cfc: 0xc08a40a  jal         func_229028
    ctx->pc = 0x3A3CFCu;
    SET_GPR_U32(ctx, 31, 0x3A3D04u);
    ctx->pc = 0x3A3D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3CFCu;
    // 0x3a3d00: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229028u, 0x3A3CFCu, 0x3A3D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D04u;
label_3a3d04:
    // 0x3a3d04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3A3D04u;
    {
        const bool branch_taken_0x3a3d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D04u;
        // 0x3a3d08: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d04) {
            ctx->pc = 0x3A3D2Cu;
            goto label_3a3d2c;
        }
    }
    ctx->pc = 0x3A3D0Cu;
label_3a3d0c:
    // 0x3a3d0c: 0x96250112  lhu         $a1, 0x112($s1)
    ctx->pc = 0x3a3d0cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 274)));
    // 0x3a3d10: 0x8c442c04  lw          $a0, 0x2C04($v0)
    ctx->pc = 0x3a3d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    // 0x3a3d14: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x3A3D14u;
    SET_GPR_U32(ctx, 31, 0x3A3D1Cu);
    ctx->pc = 0x3A3D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D14u;
    // 0x3a3d18: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x3A3D14u, 0x3A3D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D1Cu;
label_3a3d1c:
    // 0x3a3d1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a3d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3d20: 0xc0e4620  jal         func_391880
    ctx->pc = 0x3A3D20u;
    SET_GPR_U32(ctx, 31, 0x3A3D28u);
    ctx->pc = 0x3A3D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3D20u;
    // 0x3a3d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391880u, 0x3A3D20u, 0x3A3D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3D28u;
label_3a3d28:
    // 0x3a3d28: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3a3d28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a3d2c:
    // 0x3a3d2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A3D2Cu;
    {
        const bool branch_taken_0x3a3d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D2Cu;
        // 0x3a3d30: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3d2c) {
            ctx->pc = 0x3A3D3Cu;
            goto label_3a3d3c;
        }
    }
    ctx->pc = 0x3A3D34u;
label_3a3d34:
    // 0x3a3d34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3a3d34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a3d38: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x3a3d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_3a3d3c:
    // 0x3a3d3c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3a3d3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3d40: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3a3d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3d44: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3a3d44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a3d48: 0x7ea30000  sq          $v1, 0x0($s5)
    ctx->pc = 0x3a3d48u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 3));
    // 0x3a3d4c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3a3d4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a3d50: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3a3d50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a3d54: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3a3d54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a3d58: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3a3d58u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a3d5c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3a3d5cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a3d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a3d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a3d64: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3D64u;
        // 0x3a3d68: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3D6Cu;
    // 0x3a3d6c: 0x0  nop
    ctx->pc = 0x3a3d6cu;
    // NOP
    ctx->pc = 0x3a3d70u;
}
