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

// Function: sub_0037CE78
// Address: 0x37ce78 - 0x37cf78
void sub_0037CE78_0x37ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CE78_0x37ce78");
#endif

    switch (ctx->pc) {
        case 0x37cea8u: goto label_37cea8;
        case 0x37ceb0u: goto label_37ceb0;
        case 0x37cec4u: goto label_37cec4;
        case 0x37ceccu: goto label_37cecc;
        case 0x37ced8u: goto label_37ced8;
        case 0x37cef0u: goto label_37cef0;
        case 0x37cef8u: goto label_37cef8;
        case 0x37cf18u: goto label_37cf18;
        case 0x37cf20u: goto label_37cf20;
        case 0x37cf30u: goto label_37cf30;
        case 0x37cf44u: goto label_37cf44;
        default: break;
    }

    ctx->pc = 0x37ce78u;

    // 0x37ce78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37ce78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x37ce7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ce80: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x37ce80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x37ce84: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x37ce84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x37ce88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37ce88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37ce8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ce90: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x37ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x37ce94: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x37ce94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x37ce98: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x37ce9c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37ce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x37cea0: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CEA0u;
    SET_GPR_U32(ctx, 31, 0x37CEA8u);
    ctx->pc = 0x37CEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEA0u;
    // 0x37cea4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CEA0u, 0x37CEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEA8u;
label_37cea8:
    // 0x37cea8: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CEA8u;
    SET_GPR_U32(ctx, 31, 0x37CEB0u);
    ctx->pc = 0x37CEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEA8u;
    // 0x37ceac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CEA8u, 0x37CEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEB0u;
label_37ceb0:
    // 0x37ceb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37ceb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ceb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37ceb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ceb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x37ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37cebc: 0xc102472  jal         func_4091C8
    ctx->pc = 0x37CEBCu;
    SET_GPR_U32(ctx, 31, 0x37CEC4u);
    ctx->pc = 0x37CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEBCu;
    // 0x37cec0: 0x305400ff  andi        $s4, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x37CEBCu, 0x37CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEC4u;
label_37cec4:
    // 0x37cec4: 0xc10b108  jal         func_42C420
    ctx->pc = 0x37CEC4u;
    SET_GPR_U32(ctx, 31, 0x37CECCu);
    ctx->pc = 0x37CEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEC4u;
    // 0x37cec8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x37CEC4u, 0x37CECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CECCu;
label_37cecc:
    // 0x37cecc: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x37ceccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x37ced0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37ced0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ced4: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x37ced4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_37ced8:
    // 0x37ced8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37ced8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37cedc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37cedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cee0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37cee4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x37cee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cee8: 0xc1024e8  jal         func_4093A0
    ctx->pc = 0x37CEE8u;
    SET_GPR_U32(ctx, 31, 0x37CEF0u);
    ctx->pc = 0x37CEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEE8u;
    // 0x37ceec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4093A0u, 0x37CEE8u, 0x37CEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEF0u;
label_37cef0:
    // 0x37cef0: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x37CEF0u;
    SET_GPR_U32(ctx, 31, 0x37CEF8u);
    ctx->pc = 0x37CEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CEF0u;
    // 0x37cef4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x37CEF0u, 0x37CEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CEF8u;
label_37cef8:
    // 0x37cef8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x37cef8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x37cefc: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x37cefcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x37cf00: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37CF00u;
    {
        const bool branch_taken_0x37cf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF00u;
        // 0x37cf04: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf00) {
            ctx->pc = 0x37CED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37ced8;
        }
    }
    ctx->pc = 0x37CF08u;
    // 0x37cf08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37cf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x37cf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf10: 0xc108dda  jal         func_423768
    ctx->pc = 0x37CF10u;
    SET_GPR_U32(ctx, 31, 0x37CF18u);
    ctx->pc = 0x37CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF10u;
    // 0x37cf14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423768u, 0x37CF10u, 0x37CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF18u;
label_37cf18:
    // 0x37cf18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x37cf18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf1c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x37cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_37cf20:
    // 0x37cf20: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x37cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x37cf24: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x37cf24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x37cf28: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x37CF28u;
    SET_GPR_U32(ctx, 31, 0x37CF30u);
    ctx->pc = 0x37CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF28u;
    // 0x37cf2c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x37CF28u, 0x37CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF30u;
label_37cf30:
    // 0x37cf30: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x37cf30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37cf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf38: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37cf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37cf3c: 0xc102576  jal         func_4095D8
    ctx->pc = 0x37CF3Cu;
    SET_GPR_U32(ctx, 31, 0x37CF44u);
    ctx->pc = 0x37CF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CF3Cu;
    // 0x37cf40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4095D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4095D8u, 0x37CF3Cu, 0x37CF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CF44u;
label_37cf44:
    // 0x37cf44: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x37cf44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x37cf48: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x37CF48u;
    {
        const bool branch_taken_0x37cf48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF48u;
        // 0x37cf4c: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf48) {
            ctx->pc = 0x37CF20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37cf20;
        }
    }
    ctx->pc = 0x37CF50u;
    // 0x37cf50: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x37cf50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37cf54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x37cf54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cf58: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x37cf58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37cf5c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x37cf5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37cf60: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x37cf60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37cf64: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37cf64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37cf68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37cf68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37cf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x37CF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CF6Cu;
        // 0x37cf70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CF74u;
    // 0x37cf74: 0x0  nop
    ctx->pc = 0x37cf74u;
    // NOP
    ctx->pc = 0x37cf78u;
}
