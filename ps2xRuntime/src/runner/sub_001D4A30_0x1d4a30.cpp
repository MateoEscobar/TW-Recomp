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

// Function: sub_001D4A30
// Address: 0x1d4a30 - 0x1d4b88
void sub_001D4A30_0x1d4a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4A30_0x1d4a30");
#endif

    switch (ctx->pc) {
        case 0x1d4a80u: goto label_1d4a80;
        case 0x1d4a94u: goto label_1d4a94;
        case 0x1d4aa0u: goto label_1d4aa0;
        case 0x1d4ab8u: goto label_1d4ab8;
        case 0x1d4ac4u: goto label_1d4ac4;
        case 0x1d4b08u: goto label_1d4b08;
        case 0x1d4b18u: goto label_1d4b18;
        case 0x1d4b38u: goto label_1d4b38;
        case 0x1d4b58u: goto label_1d4b58;
        default: break;
    }

    ctx->pc = 0x1d4a30u;

    // 0x1d4a30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1d4a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1d4a34: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1d4a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1d4a38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d4a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d4a3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a40: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1d4a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1d4a44: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x1d4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1d4a48: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1d4a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1d4a4c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d4a4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1d4a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1d4a54: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1d4a54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1d4a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1d4a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d4a60: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d4a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d4a64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1d4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d4a68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4a6c: 0x29883  sra         $s3, $v0, 2
    ctx->pc = 0x1d4a6cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1d4a70: 0x12600029  beqz        $s3, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D4A70u;
    {
        const bool branch_taken_0x1d4a70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A70u;
        // 0x1d4a74: 0x8e3000a4  lw          $s0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a70) {
            ctx->pc = 0x1D4B18u;
            goto label_1d4b18;
        }
    }
    ctx->pc = 0x1D4A78u;
    // 0x1d4a78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d4a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a7c: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1d4a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1d4a80:
    // 0x1d4a80: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D4A80u;
    {
        const bool branch_taken_0x1d4a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A80u;
        // 0x1d4a84: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a80) {
            ctx->pc = 0x1D4ACCu;
            goto label_1d4acc;
        }
    }
    ctx->pc = 0x1D4A88u;
    // 0x1d4a88: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x1d4a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1d4a8c: 0xc075164  jal         func_1D4590
    ctx->pc = 0x1D4A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D4A94u);
    ctx->pc = 0x1D4A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A8Cu;
    // 0x1d4a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x1D4A8Cu, 0x1D4A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4A94u;
label_1d4a94:
    // 0x1d4a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4a98: 0xc075172  jal         func_1D45C8
    ctx->pc = 0x1D4A98u;
    SET_GPR_U32(ctx, 31, 0x1D4AA0u);
    ctx->pc = 0x1D4A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4A98u;
    // 0x1d4a9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45C8u, 0x1D4A98u, 0x1D4AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AA0u;
label_1d4aa0:
    // 0x1d4aa0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x1d4aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d4aa4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D4AA4u;
    {
        const bool branch_taken_0x1d4aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4aa4) {
            ctx->pc = 0x1D4AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4AA4u;
            // 0x1d4aa8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4AFCu;
            goto label_1d4afc;
        }
    }
    ctx->pc = 0x1D4AACu;
    // 0x1d4aac: 0x8e2500a4  lw          $a1, 0xA4($s1)
    ctx->pc = 0x1d4aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1d4ab0: 0xc075164  jal         func_1D4590
    ctx->pc = 0x1D4AB0u;
    SET_GPR_U32(ctx, 31, 0x1D4AB8u);
    ctx->pc = 0x1D4AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4AB0u;
    // 0x1d4ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4590u, 0x1D4AB0u, 0x1D4AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AB8u;
label_1d4ab8:
    // 0x1d4ab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4abc: 0xc07517e  jal         func_1D45F8
    ctx->pc = 0x1D4ABCu;
    SET_GPR_U32(ctx, 31, 0x1D4AC4u);
    ctx->pc = 0x1D4AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4ABCu;
    // 0x1d4ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45F8u, 0x1D4ABCu, 0x1D4AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4AC4u;
label_1d4ac4:
    // 0x1d4ac4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D4AC4u;
    {
        const bool branch_taken_0x1d4ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AC4u;
        // 0x1d4ac8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ac4) {
            ctx->pc = 0x1D4AF8u;
            goto label_1d4af8;
        }
    }
    ctx->pc = 0x1D4ACCu;
label_1d4acc:
    // 0x1d4acc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d4ad0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1d4ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d4ad4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4ad8: 0x22083  sra         $a0, $v0, 2
    ctx->pc = 0x1d4ad8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1d4adc: 0x204182b  sltu        $v1, $s0, $a0
    ctx->pc = 0x1d4adcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d4ae0: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4AE0u;
    {
        const bool branch_taken_0x1d4ae0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4ae0) {
            ctx->pc = 0x1D4AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4AE0u;
            // 0x1d4ae4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4AFCu;
            goto label_1d4afc;
        }
    }
    ctx->pc = 0x1D4AE8u;
    // 0x1d4ae8: 0x8e230098  lw          $v1, 0x98($s1)
    ctx->pc = 0x1d4ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1d4aec: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x1d4aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1d4af0: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x1d4af0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1d4af4: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1d4af4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1d4af8:
    // 0x1d4af8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1d4af8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1d4afc:
    // 0x1d4afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d4afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b00: 0xc07512e  jal         func_1D44B8
    ctx->pc = 0x1D4B00u;
    SET_GPR_U32(ctx, 31, 0x1D4B08u);
    ctx->pc = 0x1D4B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B00u;
    // 0x1d4b04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D44B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D44B8u, 0x1D4B00u, 0x1D4B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B08u;
label_1d4b08:
    // 0x1d4b08: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4B08u;
    {
        const bool branch_taken_0x1d4b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B08u;
        // 0x1d4b0c: 0x293102b  sltu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b08) {
            ctx->pc = 0x1D4B40u;
            goto label_1d4b40;
        }
    }
    ctx->pc = 0x1D4B10u;
    // 0x1d4b10: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1D4B10u;
    {
        const bool branch_taken_0x1d4b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4b10) {
            ctx->pc = 0x1D4B14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4B10u;
            // 0x1d4b14: 0x8e22009c  lw          $v0, 0x9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4A80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4a80;
        }
    }
    ctx->pc = 0x1D4B18u;
label_1d4b18:
    // 0x1d4b18: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x1D4B18u;
    {
        const bool branch_taken_0x1d4b18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B18u;
        // 0x1d4b1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b18) {
            ctx->pc = 0x1D4B4Cu;
            goto label_1d4b4c;
        }
    }
    ctx->pc = 0x1D4B20u;
    // 0x1d4b20: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1d4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1d4b24: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4B24u;
    {
        const bool branch_taken_0x1d4b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D4B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B24u;
        // 0x1d4b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b24) {
            ctx->pc = 0x1D4B48u;
            goto label_1d4b48;
        }
    }
    ctx->pc = 0x1D4B2Cu;
    // 0x1d4b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d4b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4b30: 0xc0752e2  jal         func_1D4B88
    ctx->pc = 0x1D4B30u;
    SET_GPR_U32(ctx, 31, 0x1D4B38u);
    ctx->pc = 0x1D4B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B30u;
    // 0x1d4b34: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4B88u, 0x1D4B30u, 0x1D4B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B38u;
label_1d4b38:
    // 0x1d4b38: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D4B38u;
    {
        const bool branch_taken_0x1d4b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B38u;
        // 0x1d4b3c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b38) {
            ctx->pc = 0x1D4B64u;
            goto label_1d4b64;
        }
    }
    ctx->pc = 0x1D4B40u;
label_1d4b40:
    // 0x1d4b40: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x1D4B40u;
    {
        const bool branch_taken_0x1d4b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B40u;
        // 0x1d4b44: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4b40) {
            ctx->pc = 0x1D4B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4b18;
        }
    }
    ctx->pc = 0x1D4B48u;
label_1d4b48:
    // 0x1d4b48: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d4b4c:
    // 0x1d4b4c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d4b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1d4b50: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1D4B50u;
    SET_GPR_U32(ctx, 31, 0x1D4B58u);
    ctx->pc = 0x1D4B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B50u;
    // 0x1d4b54: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1D4B50u, 0x1D4B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B58u;
label_1d4b58:
    // 0x1d4b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4b5c: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x1d4b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    // 0x1d4b60: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1d4b60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d4b64:
    // 0x1d4b64: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1d4b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d4b68: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1d4b68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d4b6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d4b6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d4b70: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1d4b70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d4b74: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1d4b74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d4b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d4b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4B7Cu;
        // 0x1d4b80: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D4B84u;
    // 0x1d4b84: 0x0  nop
    ctx->pc = 0x1d4b84u;
    // NOP
    ctx->pc = 0x1d4b88u;
}
