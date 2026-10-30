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

// Function: sub_00461A68
// Address: 0x461a68 - 0x461c98
void sub_00461A68_0x461a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00461A68_0x461a68");
#endif

    switch (ctx->pc) {
        case 0x461a9cu: goto label_461a9c;
        case 0x461ab8u: goto label_461ab8;
        case 0x461ac0u: goto label_461ac0;
        case 0x461ad8u: goto label_461ad8;
        case 0x461af0u: goto label_461af0;
        case 0x461b10u: goto label_461b10;
        case 0x461b28u: goto label_461b28;
        case 0x461b7cu: goto label_461b7c;
        case 0x461b98u: goto label_461b98;
        case 0x461bb0u: goto label_461bb0;
        case 0x461bc8u: goto label_461bc8;
        case 0x461bd4u: goto label_461bd4;
        case 0x461be0u: goto label_461be0;
        case 0x461bf4u: goto label_461bf4;
        case 0x461c00u: goto label_461c00;
        case 0x461c18u: goto label_461c18;
        case 0x461c28u: goto label_461c28;
        case 0x461c38u: goto label_461c38;
        case 0x461c48u: goto label_461c48;
        case 0x461c58u: goto label_461c58;
        case 0x461c68u: goto label_461c68;
        default: break;
    }

    ctx->pc = 0x461a68u;

    // 0x461a68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x461a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x461a6c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x461a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x461a70: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x461a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x461a74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x461a74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461a78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x461a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x461a7c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x461a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x461a80: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x461a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x461a84: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x461a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x461a88: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x461a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x461a8c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x461a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x461a90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x461a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x461a94: 0xc1295ce  jal         func_4A5738
    ctx->pc = 0x461A94u;
    SET_GPR_U32(ctx, 31, 0x461A9Cu);
    ctx->pc = 0x461A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461A94u;
    // 0x461a98: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5738u, 0x461A94u, 0x461A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461A9Cu;
label_461a9c:
    // 0x461a9c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x461a9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461aa0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x461aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x461aa4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x461aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461aa8: 0xaee2002c  sw          $v0, 0x2C($s7)
    ctx->pc = 0x461aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 44), GPR_U32(ctx, 2));
    // 0x461aac: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x461aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x461ab0: 0xc129ae6  jal         func_4A6B98
    ctx->pc = 0x461AB0u;
    SET_GPR_U32(ctx, 31, 0x461AB8u);
    ctx->pc = 0x461AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461AB0u;
    // 0x461ab4: 0xaee30030  sw          $v1, 0x30($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 48), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6B98u, 0x461AB0u, 0x461AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461AB8u;
label_461ab8:
    // 0x461ab8: 0xc11e8a0  jal         func_47A280
    ctx->pc = 0x461AB8u;
    SET_GPR_U32(ctx, 31, 0x461AC0u);
    ctx->pc = 0x461ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461AB8u;
    // 0x461abc: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A280u, 0x461AB8u, 0x461AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461AC0u;
label_461ac0:
    // 0x461ac0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x461ac0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461ac4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x461ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x461ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461acc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x461accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461ad0: 0xc129b4a  jal         func_4A6D28
    ctx->pc = 0x461AD0u;
    SET_GPR_U32(ctx, 31, 0x461AD8u);
    ctx->pc = 0x461AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461AD0u;
    // 0x461ad4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6D28u, 0x461AD0u, 0x461AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461AD8u;
label_461ad8:
    // 0x461ad8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x461ad8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461adc: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x461adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x461ae0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x461ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461ae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x461ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461ae8: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x461AE8u;
    SET_GPR_U32(ctx, 31, 0x461AF0u);
    ctx->pc = 0x461AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461AE8u;
    // 0x461aec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x461AE8u, 0x461AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461AF0u;
label_461af0:
    // 0x461af0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x461af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x461af4: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x461af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x461af8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x461AF8u;
    {
        const bool branch_taken_0x461af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x461AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461AF8u;
        // 0x461afc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461af8) {
            ctx->pc = 0x461B40u;
            goto label_461b40;
        }
    }
    ctx->pc = 0x461B00u;
    // 0x461b00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x461b00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461b04: 0x2651000c  addiu       $s1, $s2, 0xC
    ctx->pc = 0x461b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x461b08: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x461b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x461b0c: 0x0  nop
    ctx->pc = 0x461b0cu;
    // NOP
label_461b10:
    // 0x461b10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x461b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461b14: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x461b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x461b18: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x461b18u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x461b1c: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x461b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x461b20: 0xc11e802  jal         func_47A008
    ctx->pc = 0x461B20u;
    SET_GPR_U32(ctx, 31, 0x461B28u);
    ctx->pc = 0x461B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461B20u;
    // 0x461b24: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A008u, 0x461B20u, 0x461B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461B28u;
label_461b28:
    // 0x461b28: 0x2e83000b  sltiu       $v1, $s4, 0xB
    ctx->pc = 0x461b28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x461b2c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x461B2Cu;
    {
        const bool branch_taken_0x461b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x461b2c) {
            ctx->pc = 0x461B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x461B2Cu;
            // 0x461b30: 0x8e430060  lw          $v1, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x461B44u;
            goto label_461b44;
        }
    }
    ctx->pc = 0x461B34u;
    // 0x461b34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x461b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x461b38: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x461B38u;
    {
        const bool branch_taken_0x461b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x461b38) {
            ctx->pc = 0x461B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x461B38u;
            // 0x461b3c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x461B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_461b10;
        }
    }
    ctx->pc = 0x461B40u;
label_461b40:
    // 0x461b40: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x461b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_461b44:
    // 0x461b44: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x461b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x461b48: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x461B48u;
    {
        const bool branch_taken_0x461b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x461B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461B48u;
        // 0x461b4c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x461b48) {
            ctx->pc = 0x461BB8u;
            goto label_461bb8;
        }
    }
    ctx->pc = 0x461B50u;
    // 0x461b50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x461b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x461b54: 0x2442e820  addiu       $v0, $v0, -0x17E0
    ctx->pc = 0x461b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961184));
    // 0x461b58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x461b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x461b5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x461b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x461b60: 0x800008  jr          $a0
    ctx->pc = 0x461B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x461B68u: goto label_461b68;
            case 0x461B84u: goto label_461b84;
            case 0x461BA0u: goto label_461ba0;
            case 0x461BB8u: goto label_461bb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461B60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x461B68u;
label_461b68:
    // 0x461b68: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x461b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x461b6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x461b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461b70: 0x8e460068  lw          $a2, 0x68($s2)
    ctx->pc = 0x461b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x461b74: 0xc11e8ec  jal         func_47A3B0
    ctx->pc = 0x461B74u;
    SET_GPR_U32(ctx, 31, 0x461B7Cu);
    ctx->pc = 0x461B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461B74u;
    // 0x461b78: 0x8e47006c  lw          $a3, 0x6C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A3B0u, 0x461B74u, 0x461B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461B7Cu;
label_461b7c:
    // 0x461b7c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x461B7Cu;
    {
        const bool branch_taken_0x461b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461b7c) {
            ctx->pc = 0x461BD8u;
            goto label_461bd8;
        }
    }
    ctx->pc = 0x461B84u;
label_461b84:
    // 0x461b84: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x461b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x461b88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x461b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461b8c: 0x8e460068  lw          $a2, 0x68($s2)
    ctx->pc = 0x461b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x461b90: 0xc11e8a4  jal         func_47A290
    ctx->pc = 0x461B90u;
    SET_GPR_U32(ctx, 31, 0x461B98u);
    ctx->pc = 0x461B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461B90u;
    // 0x461b94: 0x8e47006c  lw          $a3, 0x6C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A290u, 0x461B90u, 0x461B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461B98u;
label_461b98:
    // 0x461b98: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x461B98u;
    {
        const bool branch_taken_0x461b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461b98) {
            ctx->pc = 0x461BD8u;
            goto label_461bd8;
        }
    }
    ctx->pc = 0x461BA0u;
label_461ba0:
    // 0x461ba0: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x461ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x461ba4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x461ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461ba8: 0xc11e934  jal         func_47A4D0
    ctx->pc = 0x461BA8u;
    SET_GPR_U32(ctx, 31, 0x461BB0u);
    ctx->pc = 0x461BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461BA8u;
    // 0x461bac: 0x8e460068  lw          $a2, 0x68($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A4D0u, 0x461BA8u, 0x461BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461BB0u;
label_461bb0:
    // 0x461bb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x461BB0u;
    {
        const bool branch_taken_0x461bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x461bb0) {
            ctx->pc = 0x461BD8u;
            goto label_461bd8;
        }
    }
    ctx->pc = 0x461BB8u;
label_461bb8:
    // 0x461bb8: 0x24020131  addiu       $v0, $zero, 0x131
    ctx->pc = 0x461bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
    // 0x461bbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x461bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461bc0: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x461BC0u;
    SET_GPR_U32(ctx, 31, 0x461BC8u);
    ctx->pc = 0x461BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461BC0u;
    // 0x461bc4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x461BC0u, 0x461BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461BC8u;
label_461bc8:
    // 0x461bc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x461bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461bcc: 0xc11f024  jal         func_47C090
    ctx->pc = 0x461BCCu;
    SET_GPR_U32(ctx, 31, 0x461BD4u);
    ctx->pc = 0x461BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461BCCu;
    // 0x461bd0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x461BCCu, 0x461BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461BD4u;
label_461bd4:
    // 0x461bd4: 0x0  nop
    ctx->pc = 0x461bd4u;
    // NOP
label_461bd8:
    // 0x461bd8: 0xc12995a  jal         func_4A6568
    ctx->pc = 0x461BD8u;
    SET_GPR_U32(ctx, 31, 0x461BE0u);
    ctx->pc = 0x461BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461BD8u;
    // 0x461bdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A6568u, 0x461BD8u, 0x461BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461BE0u;
label_461be0:
    // 0x461be0: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x461be0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x461be4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x461be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461be8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x461be8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461bec: 0xc129c7a  jal         func_4A71E8
    ctx->pc = 0x461BECu;
    SET_GPR_U32(ctx, 31, 0x461BF4u);
    ctx->pc = 0x461BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461BECu;
    // 0x461bf0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A71E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A71E8u, 0x461BECu, 0x461BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461BF4u;
label_461bf4:
    // 0x461bf4: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x461bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x461bf8: 0xc11e974  jal         func_47A5D0
    ctx->pc = 0x461BF8u;
    SET_GPR_U32(ctx, 31, 0x461C00u);
    ctx->pc = 0x461BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461BF8u;
    // 0x461bfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A5D0u, 0x461BF8u, 0x461C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C00u;
label_461c00:
    // 0x461c00: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x461c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x461c04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x461c04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461c08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x461c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461c0c: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x461c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x461c10: 0xc11e980  jal         func_47A600
    ctx->pc = 0x461C10u;
    SET_GPR_U32(ctx, 31, 0x461C18u);
    ctx->pc = 0x461C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461C10u;
    // 0x461c14: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A600u, 0x461C10u, 0x461C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C18u;
label_461c18:
    // 0x461c18: 0x8e460078  lw          $a2, 0x78($s2)
    ctx->pc = 0x461c18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x461c1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x461c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461c20: 0xc11e996  jal         func_47A658
    ctx->pc = 0x461C20u;
    SET_GPR_U32(ctx, 31, 0x461C28u);
    ctx->pc = 0x461C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461C20u;
    // 0x461c24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x461C20u, 0x461C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C28u;
label_461c28:
    // 0x461c28: 0x8e46007c  lw          $a2, 0x7C($s2)
    ctx->pc = 0x461c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x461c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x461c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461c30: 0xc11e996  jal         func_47A658
    ctx->pc = 0x461C30u;
    SET_GPR_U32(ctx, 31, 0x461C38u);
    ctx->pc = 0x461C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461C30u;
    // 0x461c34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x461C30u, 0x461C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C38u;
label_461c38:
    // 0x461c38: 0x8e460080  lw          $a2, 0x80($s2)
    ctx->pc = 0x461c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x461c3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x461c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461c40: 0xc11e996  jal         func_47A658
    ctx->pc = 0x461C40u;
    SET_GPR_U32(ctx, 31, 0x461C48u);
    ctx->pc = 0x461C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461C40u;
    // 0x461c44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x461C40u, 0x461C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C48u;
label_461c48:
    // 0x461c48: 0x8e460084  lw          $a2, 0x84($s2)
    ctx->pc = 0x461c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x461c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x461c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461c50: 0xc11e996  jal         func_47A658
    ctx->pc = 0x461C50u;
    SET_GPR_U32(ctx, 31, 0x461C58u);
    ctx->pc = 0x461C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461C50u;
    // 0x461c54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x461C50u, 0x461C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C58u;
label_461c58:
    // 0x461c58: 0x8e460088  lw          $a2, 0x88($s2)
    ctx->pc = 0x461c58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x461c5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x461c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461c60: 0xc11e996  jal         func_47A658
    ctx->pc = 0x461C60u;
    SET_GPR_U32(ctx, 31, 0x461C68u);
    ctx->pc = 0x461C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x461C60u;
    // 0x461c64: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47A658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47A658u, 0x461C60u, 0x461C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x461C68u;
label_461c68:
    // 0x461c68: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x461c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x461c6c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x461c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x461c70: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x461c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x461c74: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x461c74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x461c78: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x461c78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x461c7c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x461c7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x461c80: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x461c80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x461c84: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x461c84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x461c88: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x461c88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x461c8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x461c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x461c90: 0x3e00008  jr          $ra
    ctx->pc = 0x461C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x461C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x461C90u;
        // 0x461c94: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x461C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x461C98u;
}
