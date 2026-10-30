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

// Function: sub_00197EC0
// Address: 0x197ec0 - 0x197f70
void sub_00197EC0_0x197ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197EC0_0x197ec0");
#endif

    switch (ctx->pc) {
        case 0x197ec0u: goto label_197ec0;
        case 0x197ec4u: goto label_197ec4;
        case 0x197ec8u: goto label_197ec8;
        case 0x197eccu: goto label_197ecc;
        case 0x197ed0u: goto label_197ed0;
        case 0x197ed4u: goto label_197ed4;
        case 0x197ed8u: goto label_197ed8;
        case 0x197edcu: goto label_197edc;
        case 0x197ee0u: goto label_197ee0;
        case 0x197ee4u: goto label_197ee4;
        case 0x197ee8u: goto label_197ee8;
        case 0x197eecu: goto label_197eec;
        case 0x197ef0u: goto label_197ef0;
        case 0x197ef4u: goto label_197ef4;
        case 0x197ef8u: goto label_197ef8;
        case 0x197efcu: goto label_197efc;
        case 0x197f00u: goto label_197f00;
        case 0x197f04u: goto label_197f04;
        case 0x197f08u: goto label_197f08;
        case 0x197f0cu: goto label_197f0c;
        case 0x197f10u: goto label_197f10;
        case 0x197f14u: goto label_197f14;
        case 0x197f18u: goto label_197f18;
        case 0x197f1cu: goto label_197f1c;
        case 0x197f20u: goto label_197f20;
        case 0x197f24u: goto label_197f24;
        case 0x197f28u: goto label_197f28;
        case 0x197f2cu: goto label_197f2c;
        case 0x197f30u: goto label_197f30;
        case 0x197f34u: goto label_197f34;
        case 0x197f38u: goto label_197f38;
        case 0x197f3cu: goto label_197f3c;
        case 0x197f40u: goto label_197f40;
        case 0x197f44u: goto label_197f44;
        case 0x197f48u: goto label_197f48;
        case 0x197f4cu: goto label_197f4c;
        case 0x197f50u: goto label_197f50;
        case 0x197f54u: goto label_197f54;
        case 0x197f58u: goto label_197f58;
        case 0x197f5cu: goto label_197f5c;
        case 0x197f60u: goto label_197f60;
        case 0x197f64u: goto label_197f64;
        case 0x197f68u: goto label_197f68;
        case 0x197f6cu: goto label_197f6c;
        default: break;
    }

    ctx->pc = 0x197ec0u;

label_197ec0:
    // 0x197ec0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_197ec4:
    // 0x197ec4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x197ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_197ec8:
    // 0x197ec8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x197ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_197ecc:
    // 0x197ecc: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x197eccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
label_197ed0:
    // 0x197ed0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x197ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_197ed4:
    // 0x197ed4: 0x2610ad28  addiu       $s0, $s0, -0x52D8
    ctx->pc = 0x197ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946088));
label_197ed8:
    // 0x197ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_197edc:
    // 0x197edc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197ee0:
    // 0x197ee0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x197ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_197ee4:
    // 0x197ee4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x197ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_197ee8:
    // 0x197ee8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x197ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_197eec:
    // 0x197eec: 0x40f809  jalr        $v0
label_197ef0:
    if (ctx->pc == 0x197EF0u) {
        ctx->pc = 0x197EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EECu;
        // 0x197ef0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197EF4u;
        goto label_197ef4;
    }
    ctx->pc = 0x197EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197EF4u);
        ctx->pc = 0x197EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EECu;
        // 0x197ef0: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197EECu, 0x197EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197EF4u;
label_197ef4:
    // 0x197ef4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x197ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_197ef8:
    // 0x197ef8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x197ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_197efc:
    // 0x197efc: 0x40f809  jalr        $v0
label_197f00:
    if (ctx->pc == 0x197F00u) {
        ctx->pc = 0x197F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EFCu;
        // 0x197f00: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F04u;
        goto label_197f04;
    }
    ctx->pc = 0x197EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197F04u);
        ctx->pc = 0x197F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197EFCu;
        // 0x197f00: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197EFCu, 0x197F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197F04u;
label_197f04:
    // 0x197f04: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x197f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_197f08:
    // 0x197f08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x197f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_197f0c:
    // 0x197f0c: 0x40f809  jalr        $v0
label_197f10:
    if (ctx->pc == 0x197F10u) {
        ctx->pc = 0x197F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F0Cu;
        // 0x197f10: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F14u;
        goto label_197f14;
    }
    ctx->pc = 0x197F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197F14u);
        ctx->pc = 0x197F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F0Cu;
        // 0x197f10: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F0Cu, 0x197F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197F14u;
label_197f14:
    // 0x197f14: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x197f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_197f18:
    // 0x197f18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x197f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_197f1c:
    // 0x197f1c: 0x40f809  jalr        $v0
label_197f20:
    if (ctx->pc == 0x197F20u) {
        ctx->pc = 0x197F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F1Cu;
        // 0x197f20: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F24u;
        goto label_197f24;
    }
    ctx->pc = 0x197F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197F24u);
        ctx->pc = 0x197F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F1Cu;
        // 0x197f20: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F1Cu, 0x197F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197F24u;
label_197f24:
    // 0x197f24: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x197f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_197f28:
    // 0x197f28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x197f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_197f2c:
    // 0x197f2c: 0x40f809  jalr        $v0
label_197f30:
    if (ctx->pc == 0x197F30u) {
        ctx->pc = 0x197F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F2Cu;
        // 0x197f30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F34u;
        goto label_197f34;
    }
    ctx->pc = 0x197F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197F34u);
        ctx->pc = 0x197F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F2Cu;
        // 0x197f30: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F2Cu, 0x197F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197F34u;
label_197f34:
    // 0x197f34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x197f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_197f38:
    // 0x197f38: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x197f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_197f3c:
    // 0x197f3c: 0x40f809  jalr        $v0
label_197f40:
    if (ctx->pc == 0x197F40u) {
        ctx->pc = 0x197F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F3Cu;
        // 0x197f40: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F44u;
        goto label_197f44;
    }
    ctx->pc = 0x197F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197F44u);
        ctx->pc = 0x197F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F3Cu;
        // 0x197f40: 0x8e450014  lw          $a1, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F3Cu, 0x197F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x197F44u;
label_197f44:
    // 0x197f44: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x197f44u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_197f48:
    // 0x197f48: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_197f4c:
    if (ctx->pc == 0x197F4Cu) {
        ctx->pc = 0x197F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F48u;
        // 0x197f4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F50u;
        goto label_197f50;
    }
    ctx->pc = 0x197F48u;
    {
        const bool branch_taken_0x197f48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F48u;
        // 0x197f4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f48) {
            ctx->pc = 0x197F5Cu;
            goto label_197f5c;
        }
    }
    ctx->pc = 0x197F50u;
label_197f50:
    // 0x197f50: 0xc10b208  jal         func_42C820
label_197f54:
    if (ctx->pc == 0x197F54u) {
        ctx->pc = 0x197F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F50u;
        // 0x197f54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F58u;
        goto label_197f58;
    }
    ctx->pc = 0x197F50u;
    SET_GPR_U32(ctx, 31, 0x197F58u);
    ctx->pc = 0x197F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197F50u;
    // 0x197f54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x197F50u, 0x197F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197F58u;
label_197f58:
    // 0x197f58: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x197f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_197f5c:
    // 0x197f5c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x197f5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_197f60:
    // 0x197f60: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x197f60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_197f64:
    // 0x197f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_197f68:
    // 0x197f68: 0x3e00008  jr          $ra
label_197f6c:
    if (ctx->pc == 0x197F6Cu) {
        ctx->pc = 0x197F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F68u;
        // 0x197f6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x197F70u;
        goto label_fallthrough_0x197f68;
    }
    ctx->pc = 0x197F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197F68u;
        // 0x197f6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x197f68:
    ctx->pc = 0x197F70u;
}
