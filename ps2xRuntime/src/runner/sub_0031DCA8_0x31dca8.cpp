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

// Function: sub_0031DCA8
// Address: 0x31dca8 - 0x31dd60
void sub_0031DCA8_0x31dca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DCA8_0x31dca8");
#endif

    switch (ctx->pc) {
        case 0x31dd00u: goto label_31dd00;
        case 0x31dd10u: goto label_31dd10;
        case 0x31dd18u: goto label_31dd18;
        case 0x31dd24u: goto label_31dd24;
        case 0x31dd34u: goto label_31dd34;
        default: break;
    }

    ctx->pc = 0x31dca8u;

    // 0x31dca8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31dca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31dcac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31dcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31dcb0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31dcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x31dcb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31dcb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dcb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x31dcbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31dcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31dcc0: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x31dcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x31dcc4: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x31DCC4u;
    {
        const bool branch_taken_0x31dcc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DCC4u;
        // 0x31dcc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dcc4) {
            ctx->pc = 0x31DD00u;
            goto label_31dd00;
        }
    }
    ctx->pc = 0x31DCCCu;
    // 0x31dccc: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x31dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x31dcd0: 0x5462000c  bnel        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x31DCD0u;
    {
        const bool branch_taken_0x31dcd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31dcd0) {
            ctx->pc = 0x31DCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31DCD0u;
            // 0x31dcd4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31DD04u;
            goto label_31dd04;
        }
    }
    ctx->pc = 0x31DCD8u;
    // 0x31dcd8: 0x8c8303b4  lw          $v1, 0x3B4($a0)
    ctx->pc = 0x31dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 948)));
    // 0x31dcdc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x31dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x31dce0: 0x2404026d  addiu       $a0, $zero, 0x26D
    ctx->pc = 0x31dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x31dce4: 0x8c45aa84  lw          $a1, -0x557C($v0)
    ctx->pc = 0x31dce4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x50AA84u));
    // 0x31dce8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x31dce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31dcec: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x31dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
    // 0x31dcf0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x31dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x31dcf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31dcf8: 0xc05a582  jal         func_169608
    ctx->pc = 0x31DCF8u;
    SET_GPR_U32(ctx, 31, 0x31DD00u);
    ctx->pc = 0x31DCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DCF8u;
    // 0x31dcfc: 0x90650040  lbu         $a1, 0x40($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169608u, 0x31DCF8u, 0x31DD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD00u;
label_31dd00:
    // 0x31dd00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x31dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_31dd04:
    // 0x31dd04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31dd04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31dd08: 0x24520048  addiu       $s2, $v0, 0x48
    ctx->pc = 0x31dd08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x31dd0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x31dd0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31dd10:
    // 0x31dd10: 0xc137826  jal         func_4DE098
    ctx->pc = 0x31DD10u;
    SET_GPR_U32(ctx, 31, 0x31DD18u);
    ctx->pc = 0x31DD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DD10u;
    // 0x31dd14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x31DD10u, 0x31DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD18u;
label_31dd18:
    // 0x31dd18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31dd18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x31dd1c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x31DD1Cu;
    SET_GPR_U32(ctx, 31, 0x31DD24u);
    ctx->pc = 0x31DD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31DD1Cu;
    // 0x31dd20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31DD1Cu, 0x31DD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD24u;
label_31dd24:
    // 0x31dd24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31DD24u;
    {
        const bool branch_taken_0x31dd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD24u;
        // 0x31dd28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd24) {
            ctx->pc = 0x31DD3Cu;
            goto label_31dd3c;
        }
    }
    ctx->pc = 0x31DD2Cu;
    // 0x31dd2c: 0xc087502  jal         func_21D408
    ctx->pc = 0x31DD2Cu;
    SET_GPR_U32(ctx, 31, 0x31DD34u);
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31DD2Cu, 0x31DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31DD34u;
label_31dd34:
    // 0x31dd34: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x31dd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31dd38: 0xe4400130  swc1        $f0, 0x130($v0)
    ctx->pc = 0x31dd38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 304), bits); }
label_31dd3c:
    // 0x31dd3c: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x31dd3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x31dd40: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x31DD40u;
    {
        const bool branch_taken_0x31dd40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD40u;
        // 0x31dd44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31dd40) {
            ctx->pc = 0x31DD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31dd10;
        }
    }
    ctx->pc = 0x31DD48u;
    // 0x31dd48: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31dd48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31dd4c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31dd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31dd50: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x31dd50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31dd54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31dd54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31dd58: 0x3e00008  jr          $ra
    ctx->pc = 0x31DD58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DD58u;
        // 0x31dd5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DD58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DD60u;
}
