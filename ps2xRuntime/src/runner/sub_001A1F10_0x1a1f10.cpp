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

// Function: sub_001A1F10
// Address: 0x1a1f10 - 0x1a1fa0
void sub_001A1F10_0x1a1f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1F10_0x1a1f10");
#endif

    switch (ctx->pc) {
        case 0x1a1f50u: goto label_1a1f50;
        case 0x1a1f60u: goto label_1a1f60;
        case 0x1a1f84u: goto label_1a1f84;
        default: break;
    }

    ctx->pc = 0x1a1f10u;

    // 0x1a1f10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a1f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a1f14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a1f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1a1f18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a1f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1a1f1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1f20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1a1f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1a1f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1f28: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1a1f2c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A1F2Cu;
    {
        const bool branch_taken_0x1a1f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1f2c) {
            ctx->pc = 0x1A1F30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1F2Cu;
            // 0x1a1f30: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1F70u;
            goto label_1a1f70;
        }
    }
    ctx->pc = 0x1A1F34u;
    // 0x1a1f34: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x1a1f34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x1a1f38: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1a1f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1a1f3c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1a1f3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1a1f40: 0x10b1000a  beq         $a1, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1F40u;
    {
        const bool branch_taken_0x1a1f40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F40u;
        // 0x1a1f44: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f40) {
            ctx->pc = 0x1A1F6Cu;
            goto label_1a1f6c;
        }
    }
    ctx->pc = 0x1A1F48u;
    // 0x1a1f48: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x1A1F48u;
    SET_GPR_U32(ctx, 31, 0x1A1F50u);
    ctx->pc = 0x1A1F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F48u;
    // 0x1a1f4c: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x1A1F48u, 0x1A1F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F50u;
label_1a1f50:
    // 0x1a1f50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1F50u;
    {
        const bool branch_taken_0x1a1f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F50u;
        // 0x1a1f54: 0x8e44cd4c  lw          $a0, -0x32B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294954316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f50) {
            ctx->pc = 0x1A1F60u;
            goto label_1a1f60;
        }
    }
    ctx->pc = 0x1A1F58u;
    // 0x1a1f58: 0xc062be2  jal         func_18AF88
    ctx->pc = 0x1A1F58u;
    SET_GPR_U32(ctx, 31, 0x1A1F60u);
    ctx->pc = 0x1A1F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F58u;
    // 0x1a1f5c: 0x960500c4  lhu         $a1, 0xC4($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AF88u, 0x1A1F58u, 0x1A1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F60u;
label_1a1f60:
    // 0x1a1f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1f64: 0xae1100c4  sw          $s1, 0xC4($s0)
    ctx->pc = 0x1a1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 17));
    // 0x1a1f68: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1a1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1a1f6c:
    // 0x1a1f6c: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x1a1f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_1a1f70:
    // 0x1a1f70: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1F70u;
    {
        const bool branch_taken_0x1a1f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F70u;
        // 0x1a1f74: 0x24060066  addiu       $a2, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1f70) {
            ctx->pc = 0x1A1F88u;
            goto label_1a1f88;
        }
    }
    ctx->pc = 0x1A1F78u;
    // 0x1a1f78: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1a1f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x1a1f7c: 0xc138fce  jal         func_4E3F38
    ctx->pc = 0x1A1F7Cu;
    SET_GPR_U32(ctx, 31, 0x1A1F84u);
    ctx->pc = 0x1A1F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1F7Cu;
    // 0x1a1f80: 0x24a53da8  addiu       $a1, $a1, 0x3DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3F38u, 0x1A1F7Cu, 0x1A1F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F84u;
label_1a1f84:
    // 0x1a1f84: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x1a1f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_1a1f88:
    // 0x1a1f88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a1f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1f8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a1f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1f90: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1a1f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1f98: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1F98u;
        // 0x1a1f9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1FA0u;
}
