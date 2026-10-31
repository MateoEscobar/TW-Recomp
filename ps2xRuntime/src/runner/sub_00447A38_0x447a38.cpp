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

// Function: sub_00447A38
// Address: 0x447a38 - 0x447b80
void sub_00447A38_0x447a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447A38_0x447a38");
#endif

    ctx->pc = 0x447a38u;

    // 0x447a38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x447a3c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x447a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x447a40: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x447a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x447a44: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x447a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447a48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x447a48u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x447a4c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x447a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x447a50: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x447a50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x447a54: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x447a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x447a58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x447a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x447a5c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x447a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x447a60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x447a60u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x10000000
    // 0x447a64: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x447A64u;
    {
        const bool branch_taken_0x447a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x447A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A64u;
        // 0x447a68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447a64) {
            ctx->pc = 0x447A84u;
            goto label_447a84;
        }
    }
    ctx->pc = 0x447A6Cu;
    // 0x447a6c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x447a70: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x447a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x447a74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x447a74u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u)); // MMIO: 0x10000000
    // 0x447a78: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x447a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x447a7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x447A7Cu;
    {
        const bool branch_taken_0x447a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x447A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A7Cu;
        // 0x447a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447a7c) {
            ctx->pc = 0x447A98u;
            goto label_447a98;
        }
    }
    ctx->pc = 0x447A84u;
label_447a84:
    // 0x447a84: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x447a84u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x447a88: 0xf  sync
    ctx->pc = 0x447a88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x447a8c: 0x42000038  ei
    ctx->pc = 0x447a8cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x447a90: 0x3e00008  jr          $ra
    ctx->pc = 0x447A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447A90u;
        // 0x447a94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447A98u;
label_447a98:
    // 0x447a98: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x447a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x447a9c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x447a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x447aa0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x447aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x447aa4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x447aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x447aa8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x447AA8u;
    {
        const bool branch_taken_0x447aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447AA8u;
        // 0x447aac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447aa8) {
            ctx->pc = 0x447B0Cu;
            goto label_447b0c;
        }
    }
    ctx->pc = 0x447AB0u;
    // 0x447ab0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x447ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x447ab4: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x447ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x447ab8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x447ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x447abc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x447abcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x447ac0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x447ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x447ac4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x447ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x447ac8: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x447ac8u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x447acc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x447accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x447ad0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x447ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x447ad4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x447ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x447ad8: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x447ad8u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 5)); // MMIO: 0x1000b000
    // 0x447adc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x447adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x447ae0: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x447ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1023);
    // 0x447ae4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x447ae4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2));
    // 0x447ae8: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x447ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x447aec: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x447aecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64512);
    // 0x447af0: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x447af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x447af4: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x447af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x447af8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x447af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x447afc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x447afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x447b00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x447b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x447b04: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x447B04u;
    {
        const bool branch_taken_0x447b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447B04u;
        // 0x447b08: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447b04) {
            ctx->pc = 0x447B70u;
            goto label_447b70;
        }
    }
    ctx->pc = 0x447B0Cu;
label_447b0c:
    // 0x447b0c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x447b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x447b10: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x447B10u;
    {
        const bool branch_taken_0x447b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x447B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447B10u;
        // 0x447b14: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447b10) {
            ctx->pc = 0x447B70u;
            goto label_447b70;
        }
    }
    ctx->pc = 0x447B18u;
    // 0x447b18: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x447b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x447b1c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x447b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x447b20: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x447b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x447b24: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x447b24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45072);
    // 0x447b28: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x447b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x447b2c: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x447b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x447b30: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x447b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x447b34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x447b34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x447b38: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x447b38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x447b3c: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x447b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x447b40: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x447b40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x447b44: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x447b44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x447b48: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x447b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x447b4c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x447b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x447b50: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x447b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x447b54: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x447b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x447b58: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x447b58u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 2)); // MMIO: 0x1000b020
    // 0x447b5c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x447b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x447b60: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x447b60u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 8)); // MMIO: 0x1000b000
    // 0x447b64: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x447b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x447b68: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x447b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x447b6c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x447b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_447b70:
    // 0x447b70: 0xf  sync
    ctx->pc = 0x447b70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x447b74: 0x42000038  ei
    ctx->pc = 0x447b74u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x447b78: 0x3e00008  jr          $ra
    ctx->pc = 0x447B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447B78u;
        // 0x447b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447B80u;
}
