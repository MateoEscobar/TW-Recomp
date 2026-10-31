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

// Function: sub_00472EC0
// Address: 0x472ec0 - 0x472fb0
void sub_00472EC0_0x472ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472EC0_0x472ec0");
#endif

    switch (ctx->pc) {
        case 0x472f40u: goto label_472f40;
        case 0x472f54u: goto label_472f54;
        case 0x472f68u: goto label_472f68;
        case 0x472f84u: goto label_472f84;
        case 0x472f90u: goto label_472f90;
        default: break;
    }

    ctx->pc = 0x472ec0u;

    // 0x472ec0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x472ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x472ec4: 0x8f828520  lw          $v0, -0x7AE0($gp)
    ctx->pc = 0x472ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935840)));
    // 0x472ec8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x472ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x472ecc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x472eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x472ed0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x472ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472ed4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x472ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x472ed8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x472ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472edc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x472edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x472ee0: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x472ee0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x472ee4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x472ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x472ee8: 0x10800022  beqz        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x472EE8u;
    {
        const bool branch_taken_0x472ee8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x472EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472EE8u;
        // 0x472eec: 0x26030020  addiu       $v1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472ee8) {
            ctx->pc = 0x472F74u;
            goto label_472f74;
        }
    }
    ctx->pc = 0x472EF0u;
    // 0x472ef0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x472ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x472ef4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x472ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x472ef8: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x472ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x472efc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x472efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x472f00: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x472f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x472f04: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x472F04u;
    {
        const bool branch_taken_0x472f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x472f04) {
            ctx->pc = 0x472F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x472F04u;
            // 0x472f08: 0x8e070024  lw          $a3, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x472F18u;
            goto label_472f18;
        }
    }
    ctx->pc = 0x472F0Cu;
    // 0x472f0c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x472f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x472f10: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x472f10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x472f14: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x472f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_472f18:
    // 0x472f18: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472f18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472f1c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x472f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x472f20: 0x24a53808  addiu       $a1, $a1, 0x3808
    ctx->pc = 0x472f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14344));
    // 0x472f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x472f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472f28: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x472f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472f2c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x472f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x472f30: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x472f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x472f34: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x472f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x472f38: 0xc11a7d2  jal         func_469F48
    ctx->pc = 0x472F38u;
    SET_GPR_U32(ctx, 31, 0x472F40u);
    ctx->pc = 0x472F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472F38u;
    // 0x472f3c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469F48u, 0x472F38u, 0x472F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472F40u;
label_472f40:
    // 0x472f40: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x472f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472f48: 0x24a53880  addiu       $a1, $a1, 0x3880
    ctx->pc = 0x472f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14464));
    // 0x472f4c: 0xc11a7f0  jal         func_469FC0
    ctx->pc = 0x472F4Cu;
    SET_GPR_U32(ctx, 31, 0x472F54u);
    ctx->pc = 0x472F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472F4Cu;
    // 0x472f50: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469FC0u, 0x472F4Cu, 0x472F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472F54u;
label_472f54:
    // 0x472f54: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x472f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x472f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x472f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472f5c: 0x24a538f8  addiu       $a1, $a1, 0x38F8
    ctx->pc = 0x472f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14584));
    // 0x472f60: 0xc11a810  jal         func_46A040
    ctx->pc = 0x472F60u;
    SET_GPR_U32(ctx, 31, 0x472F68u);
    ctx->pc = 0x472F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472F60u;
    // 0x472f64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46A040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46A040u, 0x472F60u, 0x472F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472F68u;
label_472f68:
    // 0x472f68: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x472f68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x472f6c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x472F6Cu;
    {
        const bool branch_taken_0x472f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x472F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472F6Cu;
        // 0x472f70: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472f6c) {
            ctx->pc = 0x472F98u;
            goto label_472f98;
        }
    }
    ctx->pc = 0x472F74u;
label_472f74:
    // 0x472f74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x472f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x472f78: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x472f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x472f7c: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x472F7Cu;
    SET_GPR_U32(ctx, 31, 0x472F84u);
    ctx->pc = 0x472F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472F7Cu;
    // 0x472f80: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x472F7Cu, 0x472F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472F84u;
label_472f84:
    // 0x472f84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x472f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472f88: 0xc11f024  jal         func_47C090
    ctx->pc = 0x472F88u;
    SET_GPR_U32(ctx, 31, 0x472F90u);
    ctx->pc = 0x472F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x472F88u;
    // 0x472f8c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x472F88u, 0x472F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472F90u;
label_472f90:
    // 0x472f90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x472f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x472f94: 0x0  nop
    ctx->pc = 0x472f94u;
    // NOP
label_472f98:
    // 0x472f98: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x472f98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x472f9c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x472f9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x472fa0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x472fa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x472fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x472fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x472fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x472FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x472FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x472FA8u;
        // 0x472fac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472FB0u;
}
