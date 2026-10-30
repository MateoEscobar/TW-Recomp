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

// Function: sub_004E4CA0
// Address: 0x4e4ca0 - 0x4e4d58
void sub_004E4CA0_0x4e4ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4CA0_0x4e4ca0");
#endif

    switch (ctx->pc) {
        case 0x4e4ca0u: goto label_4e4ca0;
        case 0x4e4ca4u: goto label_4e4ca4;
        case 0x4e4ca8u: goto label_4e4ca8;
        case 0x4e4cacu: goto label_4e4cac;
        case 0x4e4cb0u: goto label_4e4cb0;
        case 0x4e4cb4u: goto label_4e4cb4;
        case 0x4e4cb8u: goto label_4e4cb8;
        case 0x4e4cbcu: goto label_4e4cbc;
        case 0x4e4cc0u: goto label_4e4cc0;
        case 0x4e4cc4u: goto label_4e4cc4;
        case 0x4e4cc8u: goto label_4e4cc8;
        case 0x4e4cccu: goto label_4e4ccc;
        case 0x4e4cd0u: goto label_4e4cd0;
        case 0x4e4cd4u: goto label_4e4cd4;
        case 0x4e4cd8u: goto label_4e4cd8;
        case 0x4e4cdcu: goto label_4e4cdc;
        case 0x4e4ce0u: goto label_4e4ce0;
        case 0x4e4ce4u: goto label_4e4ce4;
        case 0x4e4ce8u: goto label_4e4ce8;
        case 0x4e4cecu: goto label_4e4cec;
        case 0x4e4cf0u: goto label_4e4cf0;
        case 0x4e4cf4u: goto label_4e4cf4;
        case 0x4e4cf8u: goto label_4e4cf8;
        case 0x4e4cfcu: goto label_4e4cfc;
        case 0x4e4d00u: goto label_4e4d00;
        case 0x4e4d04u: goto label_4e4d04;
        case 0x4e4d08u: goto label_4e4d08;
        case 0x4e4d0cu: goto label_4e4d0c;
        case 0x4e4d10u: goto label_4e4d10;
        case 0x4e4d14u: goto label_4e4d14;
        case 0x4e4d18u: goto label_4e4d18;
        case 0x4e4d1cu: goto label_4e4d1c;
        case 0x4e4d20u: goto label_4e4d20;
        case 0x4e4d24u: goto label_4e4d24;
        case 0x4e4d28u: goto label_4e4d28;
        case 0x4e4d2cu: goto label_4e4d2c;
        case 0x4e4d30u: goto label_4e4d30;
        case 0x4e4d34u: goto label_4e4d34;
        case 0x4e4d38u: goto label_4e4d38;
        case 0x4e4d3cu: goto label_4e4d3c;
        case 0x4e4d40u: goto label_4e4d40;
        case 0x4e4d44u: goto label_4e4d44;
        case 0x4e4d48u: goto label_4e4d48;
        case 0x4e4d4cu: goto label_4e4d4c;
        case 0x4e4d50u: goto label_4e4d50;
        case 0x4e4d54u: goto label_4e4d54;
        default: break;
    }

    ctx->pc = 0x4e4ca0u;

label_4e4ca0:
    // 0x4e4ca0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4e4ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4e4ca4:
    // 0x4e4ca4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e4ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e4ca8:
    // 0x4e4ca8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4e4ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4e4cac:
    // 0x4e4cac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4e4cacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4cb0:
    // 0x4e4cb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4e4cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4e4cb4:
    // 0x4e4cb4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4e4cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e4cb8:
    // 0x4e4cb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4e4cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4e4cbc:
    // 0x4e4cbc: 0x26421100  addiu       $v0, $s2, 0x1100
    ctx->pc = 0x4e4cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4352));
label_4e4cc0:
    // 0x4e4cc0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4e4cc4:
    if (ctx->pc == 0x4E4CC4u) {
        ctx->pc = 0x4E4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CC0u;
        // 0x4e4cc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4CC8u;
        goto label_4e4cc8;
    }
    ctx->pc = 0x4E4CC0u;
    {
        const bool branch_taken_0x4e4cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CC0u;
        // 0x4e4cc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4cc0) {
            ctx->pc = 0x4E4CF8u;
            goto label_4e4cf8;
        }
    }
    ctx->pc = 0x4E4CC8u;
label_4e4cc8:
    // 0x4e4cc8: 0x26501300  addiu       $s0, $s2, 0x1300
    ctx->pc = 0x4e4cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4864));
label_4e4ccc:
    // 0x4e4ccc: 0x1050000a  beq         $v0, $s0, . + 4 + (0xA << 2)
label_4e4cd0:
    if (ctx->pc == 0x4E4CD0u) {
        ctx->pc = 0x4E4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CCCu;
        // 0x4e4cd0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4CD4u;
        goto label_4e4cd4;
    }
    ctx->pc = 0x4E4CCCu;
    {
        const bool branch_taken_0x4e4ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x4E4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CCCu;
        // 0x4e4cd0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4ccc) {
            ctx->pc = 0x4E4CF8u;
            goto label_4e4cf8;
        }
    }
    ctx->pc = 0x4E4CD4u;
label_4e4cd4:
    // 0x4e4cd4: 0x2610ff00  addiu       $s0, $s0, -0x100
    ctx->pc = 0x4e4cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
label_4e4cd8:
    // 0x4e4cd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e4cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4cdc:
    // 0x4e4cdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e4ce0:
    // 0x4e4ce0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e4ce0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e4ce4:
    // 0x4e4ce4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e4ce8:
    // 0x4e4ce8: 0x60f809  jalr        $v1
label_4e4cec:
    if (ctx->pc == 0x4E4CECu) {
        ctx->pc = 0x4E4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CE8u;
        // 0x4e4cec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4CF0u;
        goto label_4e4cf0;
    }
    ctx->pc = 0x4E4CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4CF0u);
        ctx->pc = 0x4E4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CE8u;
        // 0x4e4cec: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4CE8u, 0x4E4CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4CF0u;
label_4e4cf0:
    // 0x4e4cf0: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_4e4cf4:
    if (ctx->pc == 0x4E4CF4u) {
        ctx->pc = 0x4E4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CF0u;
        // 0x4e4cf4: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4CF8u;
        goto label_4e4cf8;
    }
    ctx->pc = 0x4E4CF0u;
    {
        const bool branch_taken_0x4e4cf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E4CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CF0u;
        // 0x4e4cf4: 0x2610ff00  addiu       $s0, $s0, -0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4cf0) {
            ctx->pc = 0x4E4CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e4cd8;
        }
    }
    ctx->pc = 0x4E4CF8u;
label_4e4cf8:
    // 0x4e4cf8: 0x26510040  addiu       $s1, $s2, 0x40
    ctx->pc = 0x4e4cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_4e4cfc:
    // 0x4e4cfc: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4e4d00:
    if (ctx->pc == 0x4E4D00u) {
        ctx->pc = 0x4E4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CFCu;
        // 0x4e4d00: 0x26501100  addiu       $s0, $s2, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4D04u;
        goto label_4e4d04;
    }
    ctx->pc = 0x4E4CFCu;
    {
        const bool branch_taken_0x4e4cfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4CFCu;
        // 0x4e4d00: 0x26501100  addiu       $s0, $s2, 0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4cfc) {
            ctx->pc = 0x4E4D30u;
            goto label_4e4d30;
        }
    }
    ctx->pc = 0x4E4D04u;
label_4e4d04:
    // 0x4e4d04: 0x5230000b  beql        $s1, $s0, . + 4 + (0xB << 2)
label_4e4d08:
    if (ctx->pc == 0x4E4D08u) {
        ctx->pc = 0x4E4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D04u;
        // 0x4e4d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4D0Cu;
        goto label_4e4d0c;
    }
    ctx->pc = 0x4E4D04u;
    {
        const bool branch_taken_0x4e4d04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        if (branch_taken_0x4e4d04) {
            ctx->pc = 0x4E4D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4D04u;
            // 0x4e4d08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E4D34u;
            goto label_4e4d34;
        }
    }
    ctx->pc = 0x4E4D0Cu;
label_4e4d0c:
    // 0x4e4d0c: 0x2610fbd0  addiu       $s0, $s0, -0x430
    ctx->pc = 0x4e4d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966224));
label_4e4d10:
    // 0x4e4d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e4d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e4d14:
    // 0x4e4d14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e4d18:
    // 0x4e4d18: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e4d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e4d1c:
    // 0x4e4d1c: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e4d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e4d20:
    // 0x4e4d20: 0x60f809  jalr        $v1
label_4e4d24:
    if (ctx->pc == 0x4E4D24u) {
        ctx->pc = 0x4E4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D20u;
        // 0x4e4d24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4D28u;
        goto label_4e4d28;
    }
    ctx->pc = 0x4E4D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E4D28u);
        ctx->pc = 0x4E4D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D20u;
        // 0x4e4d24: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4D20u, 0x4E4D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E4D28u;
label_4e4d28:
    // 0x4e4d28: 0x1630fff9  bne         $s1, $s0, . + 4 + (-0x7 << 2)
label_4e4d2c:
    if (ctx->pc == 0x4E4D2Cu) {
        ctx->pc = 0x4E4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D28u;
        // 0x4e4d2c: 0x2610fbd0  addiu       $s0, $s0, -0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4D30u;
        goto label_4e4d30;
    }
    ctx->pc = 0x4E4D28u;
    {
        const bool branch_taken_0x4e4d28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        ctx->pc = 0x4E4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D28u;
        // 0x4e4d2c: 0x2610fbd0  addiu       $s0, $s0, -0x430 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4d28) {
            ctx->pc = 0x4E4D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e4d10;
        }
    }
    ctx->pc = 0x4E4D30u;
label_4e4d30:
    // 0x4e4d30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e4d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e4d34:
    // 0x4e4d34: 0xc06a39e  jal         func_1A8E78
label_4e4d38:
    if (ctx->pc == 0x4E4D38u) {
        ctx->pc = 0x4E4D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D34u;
        // 0x4e4d38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4D3Cu;
        goto label_4e4d3c;
    }
    ctx->pc = 0x4E4D34u;
    SET_GPR_U32(ctx, 31, 0x4E4D3Cu);
    ctx->pc = 0x4E4D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4D34u;
    // 0x4e4d38: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x4E4D34u, 0x4E4D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4D3Cu;
label_4e4d3c:
    // 0x4e4d3c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4e4d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e4d40:
    // 0x4e4d40: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4e4d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e4d44:
    // 0x4e4d44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e4d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e4d48:
    // 0x4e4d48: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4e4d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e4d4c:
    // 0x4e4d4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e4d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e4d50:
    // 0x4e4d50: 0x3e00008  jr          $ra
label_4e4d54:
    if (ctx->pc == 0x4E4D54u) {
        ctx->pc = 0x4E4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D50u;
        // 0x4e4d54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4D58u;
        goto label_fallthrough_0x4e4d50;
    }
    ctx->pc = 0x4E4D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4D50u;
        // 0x4e4d54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E4D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e4d50:
    ctx->pc = 0x4E4D58u;
}
