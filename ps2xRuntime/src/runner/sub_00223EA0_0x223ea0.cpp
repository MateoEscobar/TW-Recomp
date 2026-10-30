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

// Function: sub_00223EA0
// Address: 0x223ea0 - 0x223f58
void sub_00223EA0_0x223ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223EA0_0x223ea0");
#endif

    switch (ctx->pc) {
        case 0x223ebcu: goto label_223ebc;
        case 0x223ec4u: goto label_223ec4;
        case 0x223ee0u: goto label_223ee0;
        case 0x223f0cu: goto label_223f0c;
        default: break;
    }

    ctx->pc = 0x223ea0u;

    // 0x223ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x223ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x223ea4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x223ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x223ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x223ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x223eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x223eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223eb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223eb4: 0xc089bfc  jal         func_226FF0
    ctx->pc = 0x223EB4u;
    SET_GPR_U32(ctx, 31, 0x223EBCu);
    ctx->pc = 0x223EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EB4u;
    // 0x223eb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226FF0u, 0x223EB4u, 0x223EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223EBCu;
label_223ebc:
    // 0x223ebc: 0xc0e57ce  jal         func_395F38
    ctx->pc = 0x223EBCu;
    SET_GPR_U32(ctx, 31, 0x223EC4u);
    ctx->pc = 0x223EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EBCu;
    // 0x223ec0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x223EBCu, 0x223EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223EC4u;
label_223ec4:
    // 0x223ec4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x223ec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ec8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x223EC8u;
    {
        const bool branch_taken_0x223ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EC8u;
        // 0x223ecc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ec8) {
            ctx->pc = 0x223F40u;
            goto label_223f40;
        }
    }
    ctx->pc = 0x223ED0u;
    // 0x223ed0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x223ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x223ed4: 0x94650112  lhu         $a1, 0x112($v1)
    ctx->pc = 0x223ed4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 274)));
    // 0x223ed8: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x223ED8u;
    SET_GPR_U32(ctx, 31, 0x223EE0u);
    ctx->pc = 0x223EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223ED8u;
    // 0x223edc: 0x8c442c04  lw          $a0, 0x2C04($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x223ED8u, 0x223EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223EE0u;
label_223ee0:
    // 0x223ee0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x223ee0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ee4: 0x80640087  lb          $a0, 0x87($v1)
    ctx->pc = 0x223ee4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 135)));
    // 0x223ee8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x223ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223eec: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223EECu;
    {
        const bool branch_taken_0x223eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x223EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EECu;
        // 0x223ef0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223eec) {
            ctx->pc = 0x223F0Cu;
            goto label_223f0c;
        }
    }
    ctx->pc = 0x223EF4u;
    // 0x223ef4: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223EF4u;
    {
        const bool branch_taken_0x223ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x223ef4) {
            ctx->pc = 0x223EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223EF4u;
            // 0x223ef8: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223F14u;
            goto label_223f14;
        }
    }
    ctx->pc = 0x223EFCu;
    // 0x223efc: 0x80630086  lb          $v1, 0x86($v1)
    ctx->pc = 0x223efcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 134)));
    // 0x223f00: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x223f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x223f04: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223F04u;
    {
        const bool branch_taken_0x223f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x223f04) {
            ctx->pc = 0x223F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223F04u;
            // 0x223f08: 0x820201b0  lb          $v0, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223F14u;
            goto label_223f14;
        }
    }
    ctx->pc = 0x223F0Cu;
label_223f0c:
    // 0x223f0c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x223F0Cu;
    {
        const bool branch_taken_0x223f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F0Cu;
        // 0x223f10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f0c) {
            ctx->pc = 0x223F40u;
            goto label_223f40;
        }
    }
    ctx->pc = 0x223F14u;
label_223f14:
    // 0x223f14: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x223f14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x223f18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223F18u;
    {
        const bool branch_taken_0x223f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F18u;
        // 0x223f1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f18) {
            ctx->pc = 0x223F28u;
            goto label_223f28;
        }
    }
    ctx->pc = 0x223F20u;
    // 0x223f20: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x223F20u;
    {
        const bool branch_taken_0x223f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x223f20) {
            ctx->pc = 0x223F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223F20u;
            // 0x223f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223F40u;
            goto label_223f40;
        }
    }
    ctx->pc = 0x223F28u;
label_223f28:
    // 0x223f28: 0x1082fff8  beq         $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x223F28u;
    {
        const bool branch_taken_0x223f28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x223F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F28u;
        // 0x223f2c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f28) {
            ctx->pc = 0x223F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223f0c;
        }
    }
    ctx->pc = 0x223F30u;
    // 0x223f30: 0x1082fff6  beq         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x223F30u;
    {
        const bool branch_taken_0x223f30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x223F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F30u;
        // 0x223f34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f30) {
            ctx->pc = 0x223F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223f0c;
        }
    }
    ctx->pc = 0x223F38u;
    // 0x223f38: 0x1082fff4  beq         $a0, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x223F38u;
    {
        const bool branch_taken_0x223f38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x223F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F38u;
        // 0x223f3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223f38) {
            ctx->pc = 0x223F0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_223f0c;
        }
    }
    ctx->pc = 0x223F40u;
label_223f40:
    // 0x223f40: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x223f40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223f44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x223f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x223F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223F4Cu;
        // 0x223f50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223F4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223F54u;
    // 0x223f54: 0x0  nop
    ctx->pc = 0x223f54u;
    // NOP
    ctx->pc = 0x223f58u;
}
