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

// Function: sub_00488EA8
// Address: 0x488ea8 - 0x488f78
void sub_00488EA8_0x488ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488EA8_0x488ea8");
#endif

    switch (ctx->pc) {
        case 0x488ec0u: goto label_488ec0;
        case 0x488ed8u: goto label_488ed8;
        case 0x488f4cu: goto label_488f4c;
        default: break;
    }

    ctx->pc = 0x488ea8u;

    // 0x488ea8: 0x8c880008  lw          $t0, 0x8($a0)
    ctx->pc = 0x488ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x488eac: 0x248a0008  addiu       $t2, $a0, 0x8
    ctx->pc = 0x488eacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x488eb0: 0x110a002f  beq         $t0, $t2, . + 4 + (0x2F << 2)
    ctx->pc = 0x488EB0u;
    {
        const bool branch_taken_0x488eb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x488EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488EB0u;
        // 0x488eb4: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488eb0) {
            ctx->pc = 0x488F70u;
            goto label_488f70;
        }
    }
    ctx->pc = 0x488EB8u;
    // 0x488eb8: 0x25030008  addiu       $v1, $t0, 0x8
    ctx->pc = 0x488eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x488ebc: 0x0  nop
    ctx->pc = 0x488ebcu;
    // NOP
label_488ec0:
    // 0x488ec0: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x488EC0u;
    {
        const bool branch_taken_0x488ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x488EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488EC0u;
        // 0x488ec4: 0x2509fff8  addiu       $t1, $t0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488ec0) {
            ctx->pc = 0x488F64u;
            goto label_488f64;
        }
    }
    ctx->pc = 0x488EC8u;
    // 0x488ec8: 0x81020008  lb          $v0, 0x8($t0)
    ctx->pc = 0x488ec8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x488ecc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x488eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488ed0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x488ED0u;
    {
        const bool branch_taken_0x488ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488ED0u;
        // 0x488ed4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488ed0) {
            ctx->pc = 0x488F24u;
            goto label_488f24;
        }
    }
    ctx->pc = 0x488ED8u;
label_488ed8:
    // 0x488ed8: 0x80e40000  lb          $a0, 0x0($a3)
    ctx->pc = 0x488ed8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x488edc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x488edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x488ee0: 0x2482ff9f  addiu       $v0, $a0, -0x61
    ctx->pc = 0x488ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x488ee4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x488ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x488ee8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x488EE8u;
    {
        const bool branch_taken_0x488ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x488EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488EE8u;
        // 0x488eec: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488ee8) {
            ctx->pc = 0x488EFCu;
            goto label_488efc;
        }
    }
    ctx->pc = 0x488EF0u;
    // 0x488ef0: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x488ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x488ef4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x488ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x488ef8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x488ef8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_488efc:
    // 0x488efc: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x488efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
    // 0x488f00: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x488f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x488f04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x488F04u;
    {
        const bool branch_taken_0x488f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x488F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488F04u;
        // 0x488f08: 0x2462ffe0  addiu       $v0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488f04) {
            ctx->pc = 0x488F14u;
            goto label_488f14;
        }
    }
    ctx->pc = 0x488F0Cu;
    // 0x488f0c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x488f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x488f10: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x488f10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_488f14:
    // 0x488f14: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x488F14u;
    {
        const bool branch_taken_0x488f14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x488F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488F14u;
        // 0x488f18: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488f14) {
            ctx->pc = 0x488F5Cu;
            goto label_488f5c;
        }
    }
    ctx->pc = 0x488F1Cu;
    // 0x488f1c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x488f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x488f20: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x488f20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_488f24:
    // 0x488f24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x488F24u;
    {
        const bool branch_taken_0x488f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488f24) {
            ctx->pc = 0x488F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488F24u;
            // 0x488f28: 0x80e30000  lb          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488F3Cu;
            goto label_488f3c;
        }
    }
    ctx->pc = 0x488F2Cu;
    // 0x488f2c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x488f2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x488f30: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x488F30u;
    {
        const bool branch_taken_0x488f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x488F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488F30u;
        // 0x488f34: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488f30) {
            ctx->pc = 0x488ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488ed8;
        }
    }
    ctx->pc = 0x488F38u;
    // 0x488f38: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x488f38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_488f3c:
    // 0x488f3c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x488f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488f40: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x488f40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x488f44: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x488f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x488f48: 0x3200b  movn        $a0, $zero, $v1
    ctx->pc = 0x488f48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_488f4c:
    // 0x488f4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x488F4Cu;
    {
        const bool branch_taken_0x488f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x488f4c) {
            ctx->pc = 0x488F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x488F4Cu;
            // 0x488f50: 0x8d080000  lw          $t0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x488F68u;
            goto label_488f68;
        }
    }
    ctx->pc = 0x488F54u;
    // 0x488f54: 0x3e00008  jr          $ra
    ctx->pc = 0x488F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488F54u;
        // 0x488f58: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488F5Cu;
label_488f5c:
    // 0x488f5c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x488F5Cu;
    {
        const bool branch_taken_0x488f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x488F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488F5Cu;
        // 0x488f60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488f5c) {
            ctx->pc = 0x488F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488f4c;
        }
    }
    ctx->pc = 0x488F64u;
label_488f64:
    // 0x488f64: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x488f64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_488f68:
    // 0x488f68: 0x150affd5  bne         $t0, $t2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x488F68u;
    {
        const bool branch_taken_0x488f68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 10));
        ctx->pc = 0x488F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488F68u;
        // 0x488f6c: 0x25030008  addiu       $v1, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x488f68) {
            ctx->pc = 0x488EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488ec0;
        }
    }
    ctx->pc = 0x488F70u;
label_488f70:
    // 0x488f70: 0x3e00008  jr          $ra
    ctx->pc = 0x488F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x488F70u;
        // 0x488f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488F78u;
}
