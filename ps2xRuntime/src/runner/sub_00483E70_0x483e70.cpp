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

// Function: sub_00483E70
// Address: 0x483e70 - 0x483f78
void sub_00483E70_0x483e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483E70_0x483e70");
#endif

    switch (ctx->pc) {
        case 0x483eb0u: goto label_483eb0;
        case 0x483ee8u: goto label_483ee8;
        case 0x483ef0u: goto label_483ef0;
        default: break;
    }

    ctx->pc = 0x483e70u;

    // 0x483e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x483e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x483e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x483e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x483e78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x483e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x483e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x483e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483e80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x483e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x483e84: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x483e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x483e88: 0x8c830098  lw          $v1, 0x98($a0)
    ctx->pc = 0x483e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 152)));
    // 0x483e8c: 0x54710004  bnel        $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x483E8Cu;
    {
        const bool branch_taken_0x483e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x483e8c) {
            ctx->pc = 0x483E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x483E8Cu;
            // 0x483e90: 0x8c62009c  lw          $v0, 0x9C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483EA0u;
            goto label_483ea0;
        }
    }
    ctx->pc = 0x483E94u;
    // 0x483e94: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x483e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x483e98: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x483E98u;
    {
        const bool branch_taken_0x483e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x483E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483E98u;
        // 0x483e9c: 0xac820098  sw          $v0, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483e98) {
            ctx->pc = 0x483ED0u;
            goto label_483ed0;
        }
    }
    ctx->pc = 0x483EA0u;
label_483ea0:
    // 0x483ea0: 0x1051000a  beq         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x483EA0u;
    {
        const bool branch_taken_0x483ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x483EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483EA0u;
        // 0x483ea4: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483ea0) {
            ctx->pc = 0x483ECCu;
            goto label_483ecc;
        }
    }
    ctx->pc = 0x483EA8u;
    // 0x483ea8: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x483ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x483eac: 0x0  nop
    ctx->pc = 0x483eacu;
    // NOP
label_483eb0:
    // 0x483eb0: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x483eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x483eb4: 0x0  nop
    ctx->pc = 0x483eb4u;
    // NOP
    // 0x483eb8: 0x0  nop
    ctx->pc = 0x483eb8u;
    // NOP
    // 0x483ebc: 0x0  nop
    ctx->pc = 0x483ebcu;
    // NOP
    // 0x483ec0: 0x0  nop
    ctx->pc = 0x483ec0u;
    // NOP
    // 0x483ec4: 0x5451fffa  bnel        $v0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x483EC4u;
    {
        const bool branch_taken_0x483ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x483ec4) {
            ctx->pc = 0x483EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x483EC4u;
            // 0x483ec8: 0x8c63009c  lw          $v1, 0x9C($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483eb0;
        }
    }
    ctx->pc = 0x483ECCu;
label_483ecc:
    // 0x483ecc: 0xac64009c  sw          $a0, 0x9C($v1)
    ctx->pc = 0x483eccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 156), GPR_U32(ctx, 4));
label_483ed0:
    // 0x483ed0: 0x8e300098  lw          $s0, 0x98($s1)
    ctx->pc = 0x483ed0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x483ed4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x483ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x483ed8: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x483ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
    // 0x483edc: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x483EDCu;
    {
        const bool branch_taken_0x483edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x483EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483EDCu;
        // 0x483ee0: 0xae3100a0  sw          $s1, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483edc) {
            ctx->pc = 0x483EFCu;
            goto label_483efc;
        }
    }
    ctx->pc = 0x483EE4u;
    // 0x483ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483ee8:
    // 0x483ee8: 0xc12114e  jal         func_484538
    ctx->pc = 0x483EE8u;
    SET_GPR_U32(ctx, 31, 0x483EF0u);
    ctx->pc = 0x483EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x483EE8u;
    // 0x483eec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x484538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484538u, 0x483EE8u, 0x483EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483EF0u;
label_483ef0:
    // 0x483ef0: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x483ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x483ef4: 0x1600fffc  bnez        $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x483EF4u;
    {
        const bool branch_taken_0x483ef4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x483EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483EF4u;
        // 0x483ef8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x483ef4) {
            ctx->pc = 0x483EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483ee8;
        }
    }
    ctx->pc = 0x483EFCu;
label_483efc:
    // 0x483efc: 0x8e2600a0  lw          $a2, 0xA0($s1)
    ctx->pc = 0x483efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x483f00: 0x90c70003  lbu         $a3, 0x3($a2)
    ctx->pc = 0x483f00u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x483f04: 0x30e20003  andi        $v0, $a3, 0x3
    ctx->pc = 0x483f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x483f08: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x483F08u;
    {
        const bool branch_taken_0x483f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x483f08) {
            ctx->pc = 0x483F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x483F08u;
            // 0x483f0c: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x483F48u;
            goto label_483f48;
        }
    }
    ctx->pc = 0x483F10u;
    // 0x483f10: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x483f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x483f14: 0x8ca3add4  lw          $v1, -0x522C($a1)
    ctx->pc = 0x483f14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x483f18: 0x24a4add4  addiu       $a0, $a1, -0x522C
    ctx->pc = 0x483f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946260));
    // 0x483f1c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x483f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x483f20: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x483f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x483f24: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x483f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x483f28: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x483f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x483f2c: 0x8ca4add4  lw          $a0, -0x522C($a1)
    ctx->pc = 0x483f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x70ADD4u));
    // 0x483f30: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x483f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x483f34: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x483f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x483f38: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x483f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x483f3c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x483f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x483f40: 0xaca2add4  sw          $v0, -0x522C($a1)
    ctx->pc = 0x483f40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x70ADD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x70ADD4u, _value); } while (0);
    // 0x483f44: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x483f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_483f48:
    // 0x483f48: 0x34e40003  ori         $a0, $a3, 0x3
    ctx->pc = 0x483f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)3);
    // 0x483f4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x483f4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483f50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x483f50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483f54: 0xa0a40003  sb          $a0, 0x3($a1)
    ctx->pc = 0x483f54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x483f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x483f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483f5c: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x483f5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x483f60: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x483f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x483f64: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x483f64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x483f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x483f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x483F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x483F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x483F6Cu;
        // 0x483f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483F74u;
    // 0x483f74: 0x0  nop
    ctx->pc = 0x483f74u;
    // NOP
    ctx->pc = 0x483f78u;
}
