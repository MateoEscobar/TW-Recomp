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

// Function: sub_00178C48
// Address: 0x178c48 - 0x178d48
void sub_00178C48_0x178c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178C48_0x178c48");
#endif

    switch (ctx->pc) {
        case 0x178c80u: goto label_178c80;
        case 0x178cb8u: goto label_178cb8;
        case 0x178d10u: goto label_178d10;
        default: break;
    }

    ctx->pc = 0x178c48u;

    // 0x178c48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x178c4c: 0x3c080018  lui         $t0, 0x18
    ctx->pc = 0x178c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)24 << 16));
    // 0x178c50: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x178c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x178c54: 0x25088b08  addiu       $t0, $t0, -0x74F8
    ctx->pc = 0x178c54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937352));
    // 0x178c58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x178c5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x178c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x178c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x178c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c6c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x178c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x178c70: 0x8e2500ac  lw          $a1, 0xAC($s1)
    ctx->pc = 0x178c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x178c74: 0x8e2600a8  lw          $a2, 0xA8($s1)
    ctx->pc = 0x178c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x178c78: 0xc10cea2  jal         func_433A88
    ctx->pc = 0x178C78u;
    SET_GPR_U32(ctx, 31, 0x178C80u);
    ctx->pc = 0x178C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178C78u;
    // 0x178c7c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A88u, 0x178C78u, 0x178C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178C80u;
label_178c80:
    // 0x178c80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x178c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c84: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x178C84u;
    {
        const bool branch_taken_0x178c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C84u;
        // 0x178c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c84) {
            ctx->pc = 0x178D34u;
            goto label_178d34;
        }
    }
    ctx->pc = 0x178C8Cu;
    // 0x178c8c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178c90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178c94: 0x54500012  bnel        $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x178C94u;
    {
        const bool branch_taken_0x178c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x178c94) {
            ctx->pc = 0x178C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178C94u;
            // 0x178c98: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178CE0u;
            goto label_178ce0;
        }
    }
    ctx->pc = 0x178C9Cu;
    // 0x178c9c: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x178c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x178ca0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x178ca0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ca4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x178ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x178ca8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x178CA8u;
    {
        const bool branch_taken_0x178ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178ca8) {
            ctx->pc = 0x178CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178CA8u;
            // 0x178cac: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178CE0u;
            goto label_178ce0;
        }
    }
    ctx->pc = 0x178CB0u;
    // 0x178cb0: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x178cb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x178cb4: 0x0  nop
    ctx->pc = 0x178cb4u;
    // NOP
label_178cb8:
    // 0x178cb8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x178CB8u;
    {
        const bool branch_taken_0x178cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CB8u;
        // 0x178cbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cb8) {
            ctx->pc = 0x178D34u;
            goto label_178d34;
        }
    }
    ctx->pc = 0x178CC0u;
    // 0x178cc0: 0x24a5fff4  addiu       $a1, $a1, -0xC
    ctx->pc = 0x178cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
    // 0x178cc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x178cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178cc8: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178CC8u;
    {
        const bool branch_taken_0x178cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x178CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CC8u;
        // 0x178ccc: 0x65102b  sltu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178cc8) {
            ctx->pc = 0x178CD8u;
            goto label_178cd8;
        }
    }
    ctx->pc = 0x178CD0u;
    // 0x178cd0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178CD0u;
    {
        const bool branch_taken_0x178cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178cd0) {
            ctx->pc = 0x178CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178CD0u;
            // 0x178cd4: 0x94a2000a  lhu         $v0, 0xA($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178cb8;
        }
    }
    ctx->pc = 0x178CD8u;
label_178cd8:
    // 0x178cd8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x178cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178cdc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x178cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_178ce0:
    // 0x178ce0: 0x14500014  bne         $v0, $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x178CE0u;
    {
        const bool branch_taken_0x178ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x178CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178CE0u;
        // 0x178ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ce0) {
            ctx->pc = 0x178D34u;
            goto label_178d34;
        }
    }
    ctx->pc = 0x178CE8u;
    // 0x178ce8: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x178ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x178cec: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x178cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x178cf0: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x178cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
    // 0x178cf4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x178cf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x178cf8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x178cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x178cfc: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x178cfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x178d00: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x178D00u;
    {
        const bool branch_taken_0x178d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D00u;
        // 0x178d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d00) {
            ctx->pc = 0x178D34u;
            goto label_178d34;
        }
    }
    ctx->pc = 0x178D08u;
    // 0x178d08: 0x94a2000a  lhu         $v0, 0xA($a1)
    ctx->pc = 0x178d08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
    // 0x178d0c: 0x0  nop
    ctx->pc = 0x178d0cu;
    // NOP
label_178d10:
    // 0x178d10: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x178D10u;
    {
        const bool branch_taken_0x178d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D10u;
        // 0x178d14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d10) {
            ctx->pc = 0x178D34u;
            goto label_178d34;
        }
    }
    ctx->pc = 0x178D18u;
    // 0x178d18: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x178d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x178d1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x178d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x178d20: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178D20u;
    {
        const bool branch_taken_0x178d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x178D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D20u;
        // 0x178d24: 0xa4102b  sltu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x178d20) {
            ctx->pc = 0x178D30u;
            goto label_178d30;
        }
    }
    ctx->pc = 0x178D28u;
    // 0x178d28: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x178D28u;
    {
        const bool branch_taken_0x178d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178d28) {
            ctx->pc = 0x178D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178D28u;
            // 0x178d2c: 0x94a2000a  lhu         $v0, 0xA($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 10)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178d10;
        }
    }
    ctx->pc = 0x178D30u;
label_178d30:
    // 0x178d30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x178d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178d34:
    // 0x178d34: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x178d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x178d38: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x178d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178d3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178d40: 0x3e00008  jr          $ra
    ctx->pc = 0x178D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178D40u;
        // 0x178d44: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178D48u;
}
