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

// Function: sub_001D60E8
// Address: 0x1d60e8 - 0x1d6160
void sub_001D60E8_0x1d60e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D60E8_0x1d60e8");
#endif

    switch (ctx->pc) {
        case 0x1d60e8u: goto label_1d60e8;
        case 0x1d60ecu: goto label_1d60ec;
        case 0x1d60f0u: goto label_1d60f0;
        case 0x1d60f4u: goto label_1d60f4;
        case 0x1d60f8u: goto label_1d60f8;
        case 0x1d60fcu: goto label_1d60fc;
        case 0x1d6100u: goto label_1d6100;
        case 0x1d6104u: goto label_1d6104;
        case 0x1d6108u: goto label_1d6108;
        case 0x1d610cu: goto label_1d610c;
        case 0x1d6110u: goto label_1d6110;
        case 0x1d6114u: goto label_1d6114;
        case 0x1d6118u: goto label_1d6118;
        case 0x1d611cu: goto label_1d611c;
        case 0x1d6120u: goto label_1d6120;
        case 0x1d6124u: goto label_1d6124;
        case 0x1d6128u: goto label_1d6128;
        case 0x1d612cu: goto label_1d612c;
        case 0x1d6130u: goto label_1d6130;
        case 0x1d6134u: goto label_1d6134;
        case 0x1d6138u: goto label_1d6138;
        case 0x1d613cu: goto label_1d613c;
        case 0x1d6140u: goto label_1d6140;
        case 0x1d6144u: goto label_1d6144;
        case 0x1d6148u: goto label_1d6148;
        case 0x1d614cu: goto label_1d614c;
        case 0x1d6150u: goto label_1d6150;
        case 0x1d6154u: goto label_1d6154;
        case 0x1d6158u: goto label_1d6158;
        case 0x1d615cu: goto label_1d615c;
        default: break;
    }

    ctx->pc = 0x1d60e8u;

label_1d60e8:
    // 0x1d60e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d60e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1d60ec:
    // 0x1d60ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d60ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d60f0:
    // 0x1d60f0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1d60f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1d60f4:
    // 0x1d60f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1d60f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1d60f8:
    // 0x1d60f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d60f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d60fc:
    // 0x1d60fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d60fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6100:
    // 0x1d6100: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d6100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d6104:
    // 0x1d6104: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1d6108:
    if (ctx->pc == 0x1D6108u) {
        ctx->pc = 0x1D6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6104u;
        // 0x1d6108: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D610Cu;
        goto label_1d610c;
    }
    ctx->pc = 0x1D6104u;
    {
        const bool branch_taken_0x1d6104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6104u;
        // 0x1d6108: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6104) {
            ctx->pc = 0x1D6144u;
            goto label_1d6144;
        }
    }
    ctx->pc = 0x1D610Cu;
label_1d610c:
    // 0x1d610c: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1d610cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1d6110:
    // 0x1d6110: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d6110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d6114:
    // 0x1d6114: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1d6118:
    if (ctx->pc == 0x1D6118u) {
        ctx->pc = 0x1D6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6114u;
        // 0x1d6118: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D611Cu;
        goto label_1d611c;
    }
    ctx->pc = 0x1D6114u;
    {
        const bool branch_taken_0x1d6114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6114) {
            ctx->pc = 0x1D6118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6114u;
            // 0x1d6118: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6134u;
            goto label_1d6134;
        }
    }
    ctx->pc = 0x1D611Cu;
label_1d611c:
    // 0x1d611c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d6120:
    // 0x1d6120: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1d6120u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1d6124:
    // 0x1d6124: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x1d6124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_1d6128:
    // 0x1d6128: 0x60f809  jalr        $v1
label_1d612c:
    if (ctx->pc == 0x1D612Cu) {
        ctx->pc = 0x1D612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6128u;
        // 0x1d612c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6130u;
        goto label_1d6130;
    }
    ctx->pc = 0x1D6128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6130u);
        ctx->pc = 0x1D612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6128u;
        // 0x1d612c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6128u, 0x1D6130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6130u;
label_1d6130:
    // 0x1d6130: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d6130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d6134:
    // 0x1d6134: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d6134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d6138:
    // 0x1d6138: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1d6138u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d613c:
    // 0x1d613c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1d6140:
    if (ctx->pc == 0x1D6140u) {
        ctx->pc = 0x1D6140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D613Cu;
        // 0x1d6140: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6144u;
        goto label_1d6144;
    }
    ctx->pc = 0x1D613Cu;
    {
        const bool branch_taken_0x1d613c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D613Cu;
        // 0x1d6140: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d613c) {
            ctx->pc = 0x1D6110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d6110;
        }
    }
    ctx->pc = 0x1D6144u;
label_1d6144:
    // 0x1d6144: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1d6144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d6148:
    // 0x1d6148: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d6148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d614c:
    // 0x1d614c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1d614cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6150:
    // 0x1d6150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6154:
    // 0x1d6154: 0x3e00008  jr          $ra
label_1d6158:
    if (ctx->pc == 0x1D6158u) {
        ctx->pc = 0x1D6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6154u;
        // 0x1d6158: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D615Cu;
        goto label_1d615c;
    }
    ctx->pc = 0x1D6154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6154u;
        // 0x1d6158: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D615Cu;
label_1d615c:
    // 0x1d615c: 0x0  nop
    ctx->pc = 0x1d615cu;
    // NOP
    ctx->pc = 0x1d6160u;
}
