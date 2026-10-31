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

// Function: sub_00447B80
// Address: 0x447b80 - 0x447c60
void sub_00447B80_0x447b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00447B80_0x447b80");
#endif

    ctx->pc = 0x447b80u;

    // 0x447b80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x447b84: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x447b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x447b88: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x447b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x447b8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x447b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x447b90: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x447b90u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x447b94: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x447b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x447b98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x447B98u;
    {
        const bool branch_taken_0x447b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x447B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447B98u;
        // 0x447b9c: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x447b98) {
            ctx->pc = 0x447BB0u;
            goto label_447bb0;
        }
    }
    ctx->pc = 0x447BA0u;
    // 0x447ba0: 0xf  sync
    ctx->pc = 0x447ba0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x447ba4: 0x42000038  ei
    ctx->pc = 0x447ba4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x447ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x447BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447BA8u;
        // 0x447bac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447BB0u;
label_447bb0:
    // 0x447bb0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x447bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x447bb4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x447BB4u;
    {
        const bool branch_taken_0x447bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x447BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447BB4u;
        // 0x447bb8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447bb4) {
            ctx->pc = 0x447C14u;
            goto label_447c14;
        }
    }
    ctx->pc = 0x447BBCu;
    // 0x447bbc: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x447bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x447bc0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x447bc4: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x447bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x447bc8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x447bc8u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x447bcc: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x447bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x447bd0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x447bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x447bd4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x447bd8: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x447bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x447bdc: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x447bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x447be0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x447be0u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x447be4: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x447be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x447be8: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x447be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x447bec: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x447becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x447bf0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x447bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x447bf4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x447bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x447bf8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x447bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x447bfc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x447bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x447c00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x447c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x447c04: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x447c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x447c08: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x447c08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x447c0c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x447C0Cu;
    {
        const bool branch_taken_0x447c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x447C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C0Cu;
        // 0x447c10: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x447c0c) {
            ctx->pc = 0x447C44u;
            goto label_447c44;
        }
    }
    ctx->pc = 0x447C14u;
label_447c14:
    // 0x447c14: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x447c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x447c18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x447c1c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x447c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x447c20: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x447c20u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x447c24: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x447c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x447c28: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x447c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x447c2c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x447c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x447c30: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x447c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x447c34: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x447c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x447c38: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x447c38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x447c3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x447c3cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x447c40: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x447c40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_447c44:
    // 0x447c44: 0xf  sync
    ctx->pc = 0x447c44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x447c48: 0x42000038  ei
    ctx->pc = 0x447c48u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x447c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x447C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x447C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x447C4Cu;
        // 0x447c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x447C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x447C54u;
    // 0x447c54: 0x0  nop
    ctx->pc = 0x447c54u;
    // NOP
    // 0x447c58: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x447c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x447c5c: 0x0  nop
    ctx->pc = 0x447c5cu;
    // NOP
    ctx->pc = 0x447c60u;
}
