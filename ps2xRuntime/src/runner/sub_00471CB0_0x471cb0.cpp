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

// Function: sub_00471CB0
// Address: 0x471cb0 - 0x471d50
void sub_00471CB0_0x471cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471CB0_0x471cb0");
#endif

    switch (ctx->pc) {
        case 0x471cb0u: goto label_471cb0;
        case 0x471cb4u: goto label_471cb4;
        case 0x471cb8u: goto label_471cb8;
        case 0x471cbcu: goto label_471cbc;
        case 0x471cc0u: goto label_471cc0;
        case 0x471cc4u: goto label_471cc4;
        case 0x471cc8u: goto label_471cc8;
        case 0x471cccu: goto label_471ccc;
        case 0x471cd0u: goto label_471cd0;
        case 0x471cd4u: goto label_471cd4;
        case 0x471cd8u: goto label_471cd8;
        case 0x471cdcu: goto label_471cdc;
        case 0x471ce0u: goto label_471ce0;
        case 0x471ce4u: goto label_471ce4;
        case 0x471ce8u: goto label_471ce8;
        case 0x471cecu: goto label_471cec;
        case 0x471cf0u: goto label_471cf0;
        case 0x471cf4u: goto label_471cf4;
        case 0x471cf8u: goto label_471cf8;
        case 0x471cfcu: goto label_471cfc;
        case 0x471d00u: goto label_471d00;
        case 0x471d04u: goto label_471d04;
        case 0x471d08u: goto label_471d08;
        case 0x471d0cu: goto label_471d0c;
        case 0x471d10u: goto label_471d10;
        case 0x471d14u: goto label_471d14;
        case 0x471d18u: goto label_471d18;
        case 0x471d1cu: goto label_471d1c;
        case 0x471d20u: goto label_471d20;
        case 0x471d24u: goto label_471d24;
        case 0x471d28u: goto label_471d28;
        case 0x471d2cu: goto label_471d2c;
        case 0x471d30u: goto label_471d30;
        case 0x471d34u: goto label_471d34;
        case 0x471d38u: goto label_471d38;
        case 0x471d3cu: goto label_471d3c;
        case 0x471d40u: goto label_471d40;
        case 0x471d44u: goto label_471d44;
        case 0x471d48u: goto label_471d48;
        case 0x471d4cu: goto label_471d4c;
        default: break;
    }

    ctx->pc = 0x471cb0u;

label_471cb0:
    // 0x471cb0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x471cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_471cb4:
    // 0x471cb4: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x471cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
label_471cb8:
    // 0x471cb8: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x471cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
label_471cbc:
    // 0x471cbc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x471cbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_471cc0:
    // 0x471cc0: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x471cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
label_471cc4:
    // 0x471cc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x471cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_471cc8:
    // 0x471cc8: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x471cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
label_471ccc:
    // 0x471ccc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x471cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_471cd0:
    // 0x471cd0: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x471cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
label_471cd4:
    // 0x471cd4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x471cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_471cd8:
    // 0x471cd8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x471cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_471cdc:
    // 0x471cdc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x471cdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_471ce0:
    // 0x471ce0: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x471ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_471ce4:
    // 0x471ce4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x471ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_471ce8:
    // 0x471ce8: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_471cec:
    if (ctx->pc == 0x471CECu) {
        ctx->pc = 0x471CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471CE8u;
        // 0x471cec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471CF0u;
        goto label_471cf0;
    }
    ctx->pc = 0x471CE8u;
    {
        const bool branch_taken_0x471ce8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x471CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471CE8u;
        // 0x471cec: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471ce8) {
            ctx->pc = 0x471D0Cu;
            goto label_471d0c;
        }
    }
    ctx->pc = 0x471CF0u;
label_471cf0:
    // 0x471cf0: 0x280f809  jalr        $s4
label_471cf4:
    if (ctx->pc == 0x471CF4u) {
        ctx->pc = 0x471CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471CF0u;
        // 0x471cf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471CF8u;
        goto label_471cf8;
    }
    ctx->pc = 0x471CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x471CF8u);
        ctx->pc = 0x471CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471CF0u;
        // 0x471cf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471CF0u, 0x471CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471CF8u;
label_471cf8:
    // 0x471cf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_471cfc:
    if (ctx->pc == 0x471CFCu) {
        ctx->pc = 0x471CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471CF8u;
        // 0x471cfc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471D00u;
        goto label_471d00;
    }
    ctx->pc = 0x471CF8u;
    {
        const bool branch_taken_0x471cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x471CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471CF8u;
        // 0x471cfc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471cf8) {
            ctx->pc = 0x471D28u;
            goto label_471d28;
        }
    }
    ctx->pc = 0x471D00u;
label_471d00:
    // 0x471d00: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x471d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_471d04:
    // 0x471d04: 0x10000006  b           . + 4 + (0x6 << 2)
label_471d08:
    if (ctx->pc == 0x471D08u) {
        ctx->pc = 0x471D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471D04u;
        // 0x471d08: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471D0Cu;
        goto label_471d0c;
    }
    ctx->pc = 0x471D04u;
    {
        const bool branch_taken_0x471d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x471D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471D04u;
        // 0x471d08: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x471d04) {
            ctx->pc = 0x471D20u;
            goto label_471d20;
        }
    }
    ctx->pc = 0x471D0Cu;
label_471d0c:
    // 0x471d0c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x471d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_471d10:
    // 0x471d10: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x471d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_471d14:
    // 0x471d14: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x471d14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_471d18:
    // 0x471d18: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x471d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_471d1c:
    // 0x471d1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x471d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_471d20:
    // 0x471d20: 0x623fff1  bgezl       $s1, . + 4 + (-0xF << 2)
label_471d24:
    if (ctx->pc == 0x471D24u) {
        ctx->pc = 0x471D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471D20u;
        // 0x471d24: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471D28u;
        goto label_471d28;
    }
    ctx->pc = 0x471D20u;
    {
        const bool branch_taken_0x471d20 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x471d20) {
            ctx->pc = 0x471D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x471D20u;
            // 0x471d24: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x471CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_471ce8;
        }
    }
    ctx->pc = 0x471D28u;
label_471d28:
    // 0x471d28: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x471d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_471d2c:
    // 0x471d2c: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x471d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_471d30:
    // 0x471d30: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x471d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_471d34:
    // 0x471d34: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x471d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_471d38:
    // 0x471d38: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x471d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_471d3c:
    // 0x471d3c: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x471d3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_471d40:
    // 0x471d40: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x471d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_471d44:
    // 0x471d44: 0x3e00008  jr          $ra
label_471d48:
    if (ctx->pc == 0x471D48u) {
        ctx->pc = 0x471D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471D44u;
        // 0x471d48: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x471D4Cu;
        goto label_471d4c;
    }
    ctx->pc = 0x471D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x471D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x471D44u;
        // 0x471d48: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x471D4Cu;
label_471d4c:
    // 0x471d4c: 0x0  nop
    ctx->pc = 0x471d4cu;
    // NOP
    ctx->pc = 0x471d50u;
}
