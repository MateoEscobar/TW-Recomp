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

// Function: sub_00257E38
// Address: 0x257e38 - 0x257ef0
void sub_00257E38_0x257e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257E38_0x257e38");
#endif

    switch (ctx->pc) {
        case 0x257e50u: goto label_257e50;
        case 0x257e58u: goto label_257e58;
        case 0x257e68u: goto label_257e68;
        case 0x257e70u: goto label_257e70;
        case 0x257e9cu: goto label_257e9c;
        case 0x257eb4u: goto label_257eb4;
        case 0x257ec8u: goto label_257ec8;
        case 0x257ed8u: goto label_257ed8;
        default: break;
    }

    ctx->pc = 0x257e38u;

    // 0x257e38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257e3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x257e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x257e40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x257e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257e48: 0xc08cade  jal         func_232B78
    ctx->pc = 0x257E48u;
    SET_GPR_U32(ctx, 31, 0x257E50u);
    ctx->pc = 0x257E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E48u;
    // 0x257e4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B78u, 0x257E48u, 0x257E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E50u;
label_257e50:
    // 0x257e50: 0xc089000  jal         func_224000
    ctx->pc = 0x257E50u;
    SET_GPR_U32(ctx, 31, 0x257E58u);
    ctx->pc = 0x257E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E50u;
    // 0x257e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224000u, 0x257E50u, 0x257E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E58u;
label_257e58:
    // 0x257e58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x257E58u;
    {
        const bool branch_taken_0x257e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257e58) {
            ctx->pc = 0x257E68u;
            goto label_257e68;
        }
    }
    ctx->pc = 0x257E60u;
    // 0x257e60: 0xc095fce  jal         func_257F38
    ctx->pc = 0x257E60u;
    SET_GPR_U32(ctx, 31, 0x257E68u);
    ctx->pc = 0x257E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E60u;
    // 0x257e64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x257E60u, 0x257E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E68u;
label_257e68:
    // 0x257e68: 0xc088bfe  jal         func_222FF8
    ctx->pc = 0x257E68u;
    SET_GPR_U32(ctx, 31, 0x257E70u);
    ctx->pc = 0x257E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E68u;
    // 0x257e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222FF8u, 0x257E68u, 0x257E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E70u;
label_257e70:
    // 0x257e70: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x257E70u;
    {
        const bool branch_taken_0x257e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257e70) {
            ctx->pc = 0x257E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E70u;
            // 0x257e74: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257EDCu;
            goto label_257edc;
        }
    }
    ctx->pc = 0x257E78u;
    // 0x257e78: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x257e78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x257e7c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x257e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x257e80: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x257e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x257e84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x257e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x257e88: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x257e88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x257e8c: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x257E8Cu;
    {
        const bool branch_taken_0x257e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x257e8c) {
            ctx->pc = 0x257E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257E8Cu;
            // 0x257e90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257EDCu;
            goto label_257edc;
        }
    }
    ctx->pc = 0x257E94u;
    // 0x257e94: 0xc087502  jal         func_21D408
    ctx->pc = 0x257E94u;
    SET_GPR_U32(ctx, 31, 0x257E9Cu);
    ctx->pc = 0x257E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257E94u;
    // 0x257e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x257E94u, 0x257E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257E9Cu;
label_257e9c:
    // 0x257e9c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x257e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x257ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257ea4: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x257EA4u;
    {
        const bool branch_taken_0x257ea4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x257ea4) {
            ctx->pc = 0x257ED0u;
            goto label_257ed0;
        }
    }
    ctx->pc = 0x257EACu;
    // 0x257eac: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x257EACu;
    SET_GPR_U32(ctx, 31, 0x257EB4u);
    ctx->pc = 0x257EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257EACu;
    // 0x257eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x257EACu, 0x257EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257EB4u;
label_257eb4:
    // 0x257eb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x257eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x257eb8: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x257EB8u;
    {
        const bool branch_taken_0x257eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x257eb8) {
            ctx->pc = 0x257EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257EB8u;
            // 0x257ebc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257EDCu;
            goto label_257edc;
        }
    }
    ctx->pc = 0x257EC0u;
    // 0x257ec0: 0xc08c6a0  jal         func_231A80
    ctx->pc = 0x257EC0u;
    SET_GPR_U32(ctx, 31, 0x257EC8u);
    ctx->pc = 0x257EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257EC0u;
    // 0x257ec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A80u, 0x257EC0u, 0x257EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257EC8u;
label_257ec8:
    // 0x257ec8: 0x50510004  beql        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x257EC8u;
    {
        const bool branch_taken_0x257ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x257ec8) {
            ctx->pc = 0x257ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257EC8u;
            // 0x257ecc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257EDCu;
            goto label_257edc;
        }
    }
    ctx->pc = 0x257ED0u;
label_257ed0:
    // 0x257ed0: 0xc095fce  jal         func_257F38
    ctx->pc = 0x257ED0u;
    SET_GPR_U32(ctx, 31, 0x257ED8u);
    ctx->pc = 0x257ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257ED0u;
    // 0x257ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257F38u, 0x257ED0u, 0x257ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257ED8u;
label_257ed8:
    // 0x257ed8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x257ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_257edc:
    // 0x257edc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257edcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x257EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257EE4u;
        // 0x257ee8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257EECu;
    // 0x257eec: 0x0  nop
    ctx->pc = 0x257eecu;
    // NOP
    ctx->pc = 0x257ef0u;
}
