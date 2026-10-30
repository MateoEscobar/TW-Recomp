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

// Function: sub_004E9CA8
// Address: 0x4e9ca8 - 0x4e9d28
void sub_004E9CA8_0x4e9ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9CA8_0x4e9ca8");
#endif

    switch (ctx->pc) {
        case 0x4e9ca8u: goto label_4e9ca8;
        case 0x4e9cacu: goto label_4e9cac;
        case 0x4e9cb0u: goto label_4e9cb0;
        case 0x4e9cb4u: goto label_4e9cb4;
        case 0x4e9cb8u: goto label_4e9cb8;
        case 0x4e9cbcu: goto label_4e9cbc;
        case 0x4e9cc0u: goto label_4e9cc0;
        case 0x4e9cc4u: goto label_4e9cc4;
        case 0x4e9cc8u: goto label_4e9cc8;
        case 0x4e9cccu: goto label_4e9ccc;
        case 0x4e9cd0u: goto label_4e9cd0;
        case 0x4e9cd4u: goto label_4e9cd4;
        case 0x4e9cd8u: goto label_4e9cd8;
        case 0x4e9cdcu: goto label_4e9cdc;
        case 0x4e9ce0u: goto label_4e9ce0;
        case 0x4e9ce4u: goto label_4e9ce4;
        case 0x4e9ce8u: goto label_4e9ce8;
        case 0x4e9cecu: goto label_4e9cec;
        case 0x4e9cf0u: goto label_4e9cf0;
        case 0x4e9cf4u: goto label_4e9cf4;
        case 0x4e9cf8u: goto label_4e9cf8;
        case 0x4e9cfcu: goto label_4e9cfc;
        case 0x4e9d00u: goto label_4e9d00;
        case 0x4e9d04u: goto label_4e9d04;
        case 0x4e9d08u: goto label_4e9d08;
        case 0x4e9d0cu: goto label_4e9d0c;
        case 0x4e9d10u: goto label_4e9d10;
        case 0x4e9d14u: goto label_4e9d14;
        case 0x4e9d18u: goto label_4e9d18;
        case 0x4e9d1cu: goto label_4e9d1c;
        case 0x4e9d20u: goto label_4e9d20;
        case 0x4e9d24u: goto label_4e9d24;
        default: break;
    }

    ctx->pc = 0x4e9ca8u;

label_4e9ca8:
    // 0x4e9ca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e9ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e9cac:
    // 0x4e9cac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e9cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e9cb0:
    // 0x4e9cb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e9cb4:
    // 0x4e9cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e9cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9cb8:
    // 0x4e9cb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e9cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e9cbc:
    // 0x4e9cbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e9cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9cc0:
    // 0x4e9cc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e9cc4:
    // 0x4e9cc4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e9cc8:
    if (ctx->pc == 0x4E9CC8u) {
        ctx->pc = 0x4E9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9CC4u;
        // 0x4e9cc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9CCCu;
        goto label_4e9ccc;
    }
    ctx->pc = 0x4E9CC4u;
    {
        const bool branch_taken_0x4e9cc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9CC4u;
        // 0x4e9cc8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e9cc4) {
            ctx->pc = 0x4E9D0Cu;
            goto label_4e9d0c;
        }
    }
    ctx->pc = 0x4E9CCCu;
label_4e9ccc:
    // 0x4e9ccc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e9cd0:
    // 0x4e9cd0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e9cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e9cd4:
    // 0x4e9cd4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e9cd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e9cd8:
    // 0x4e9cd8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e9cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e9cdc:
    // 0x4e9cdc: 0x60f809  jalr        $v1
label_4e9ce0:
    if (ctx->pc == 0x4E9CE0u) {
        ctx->pc = 0x4E9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9CDCu;
        // 0x4e9ce0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9CE4u;
        goto label_4e9ce4;
    }
    ctx->pc = 0x4E9CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9CE4u);
        ctx->pc = 0x4E9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9CDCu;
        // 0x4e9ce0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9CDCu, 0x4E9CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9CE4u;
label_4e9ce4:
    // 0x4e9ce4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e9ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e9ce8:
    // 0x4e9ce8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e9ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e9cec:
    // 0x4e9cec: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e9cecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e9cf0:
    // 0x4e9cf0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e9cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e9cf4:
    // 0x4e9cf4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e9cf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e9cf8:
    // 0x4e9cf8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e9cfc:
    // 0x4e9cfc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e9cfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e9d00:
    // 0x4e9d00: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e9d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e9d04:
    // 0x4e9d04: 0x60f809  jalr        $v1
label_4e9d08:
    if (ctx->pc == 0x4E9D08u) {
        ctx->pc = 0x4E9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D04u;
        // 0x4e9d08: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D0Cu;
        goto label_4e9d0c;
    }
    ctx->pc = 0x4E9D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E9D0Cu);
        ctx->pc = 0x4E9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D04u;
        // 0x4e9d08: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9D04u, 0x4E9D0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E9D0Cu;
label_4e9d0c:
    // 0x4e9d0c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e9d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e9d10:
    // 0x4e9d10: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e9d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e9d14:
    // 0x4e9d14: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e9d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e9d18:
    // 0x4e9d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e9d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e9d1c:
    // 0x4e9d1c: 0x3e00008  jr          $ra
label_4e9d20:
    if (ctx->pc == 0x4E9D20u) {
        ctx->pc = 0x4E9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D1Cu;
        // 0x4e9d20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E9D24u;
        goto label_4e9d24;
    }
    ctx->pc = 0x4E9D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E9D1Cu;
        // 0x4e9d20: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E9D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E9D24u;
label_4e9d24:
    // 0x4e9d24: 0x0  nop
    ctx->pc = 0x4e9d24u;
    // NOP
    ctx->pc = 0x4e9d28u;
}
