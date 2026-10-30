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

// Function: sub_004EAEB8
// Address: 0x4eaeb8 - 0x4eaf38
void sub_004EAEB8_0x4eaeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAEB8_0x4eaeb8");
#endif

    switch (ctx->pc) {
        case 0x4eaeb8u: goto label_4eaeb8;
        case 0x4eaebcu: goto label_4eaebc;
        case 0x4eaec0u: goto label_4eaec0;
        case 0x4eaec4u: goto label_4eaec4;
        case 0x4eaec8u: goto label_4eaec8;
        case 0x4eaeccu: goto label_4eaecc;
        case 0x4eaed0u: goto label_4eaed0;
        case 0x4eaed4u: goto label_4eaed4;
        case 0x4eaed8u: goto label_4eaed8;
        case 0x4eaedcu: goto label_4eaedc;
        case 0x4eaee0u: goto label_4eaee0;
        case 0x4eaee4u: goto label_4eaee4;
        case 0x4eaee8u: goto label_4eaee8;
        case 0x4eaeecu: goto label_4eaeec;
        case 0x4eaef0u: goto label_4eaef0;
        case 0x4eaef4u: goto label_4eaef4;
        case 0x4eaef8u: goto label_4eaef8;
        case 0x4eaefcu: goto label_4eaefc;
        case 0x4eaf00u: goto label_4eaf00;
        case 0x4eaf04u: goto label_4eaf04;
        case 0x4eaf08u: goto label_4eaf08;
        case 0x4eaf0cu: goto label_4eaf0c;
        case 0x4eaf10u: goto label_4eaf10;
        case 0x4eaf14u: goto label_4eaf14;
        case 0x4eaf18u: goto label_4eaf18;
        case 0x4eaf1cu: goto label_4eaf1c;
        case 0x4eaf20u: goto label_4eaf20;
        case 0x4eaf24u: goto label_4eaf24;
        case 0x4eaf28u: goto label_4eaf28;
        case 0x4eaf2cu: goto label_4eaf2c;
        case 0x4eaf30u: goto label_4eaf30;
        case 0x4eaf34u: goto label_4eaf34;
        default: break;
    }

    ctx->pc = 0x4eaeb8u;

label_4eaeb8:
    // 0x4eaeb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eaeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eaebc:
    // 0x4eaebc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eaebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eaec0:
    // 0x4eaec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eaec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eaec4:
    // 0x4eaec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eaec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eaec8:
    // 0x4eaec8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eaec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eaecc:
    // 0x4eaecc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eaeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eaed0:
    // 0x4eaed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eaed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eaed4:
    // 0x4eaed4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4eaed8:
    if (ctx->pc == 0x4EAED8u) {
        ctx->pc = 0x4EAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAED4u;
        // 0x4eaed8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAEDCu;
        goto label_4eaedc;
    }
    ctx->pc = 0x4EAED4u;
    {
        const bool branch_taken_0x4eaed4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAED4u;
        // 0x4eaed8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eaed4) {
            ctx->pc = 0x4EAF1Cu;
            goto label_4eaf1c;
        }
    }
    ctx->pc = 0x4EAEDCu;
label_4eaedc:
    // 0x4eaedc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4eaedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4eaee0:
    // 0x4eaee0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4eaee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eaee4:
    // 0x4eaee4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4eaee4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4eaee8:
    // 0x4eaee8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4eaee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4eaeec:
    // 0x4eaeec: 0x60f809  jalr        $v1
label_4eaef0:
    if (ctx->pc == 0x4EAEF0u) {
        ctx->pc = 0x4EAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAEECu;
        // 0x4eaef0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAEF4u;
        goto label_4eaef4;
    }
    ctx->pc = 0x4EAEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAEF4u);
        ctx->pc = 0x4EAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAEECu;
        // 0x4eaef0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAEECu, 0x4EAEF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAEF4u;
label_4eaef4:
    // 0x4eaef4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eaef8:
    // 0x4eaef8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eaef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eaefc:
    // 0x4eaefc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eaefcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eaf00:
    // 0x4eaf00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eaf00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf04:
    // 0x4eaf04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eaf04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eaf08:
    // 0x4eaf08: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eaf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eaf0c:
    // 0x4eaf0c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eaf0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eaf10:
    // 0x4eaf10: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eaf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eaf14:
    // 0x4eaf14: 0x60f809  jalr        $v1
label_4eaf18:
    if (ctx->pc == 0x4EAF18u) {
        ctx->pc = 0x4EAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF14u;
        // 0x4eaf18: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAF1Cu;
        goto label_4eaf1c;
    }
    ctx->pc = 0x4EAF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAF1Cu);
        ctx->pc = 0x4EAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF14u;
        // 0x4eaf18: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAF14u, 0x4EAF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAF1Cu;
label_4eaf1c:
    // 0x4eaf1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eaf1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eaf20:
    // 0x4eaf20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4eaf20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eaf24:
    // 0x4eaf24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4eaf24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eaf28:
    // 0x4eaf28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eaf28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eaf2c:
    // 0x4eaf2c: 0x3e00008  jr          $ra
label_4eaf30:
    if (ctx->pc == 0x4EAF30u) {
        ctx->pc = 0x4EAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF2Cu;
        // 0x4eaf30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAF34u;
        goto label_4eaf34;
    }
    ctx->pc = 0x4EAF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAF2Cu;
        // 0x4eaf30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EAF34u;
label_4eaf34:
    // 0x4eaf34: 0x0  nop
    ctx->pc = 0x4eaf34u;
    // NOP
    ctx->pc = 0x4eaf38u;
}
