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

// Function: sub_00169EA0
// Address: 0x169ea0 - 0x169fe0
void sub_00169EA0_0x169ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169EA0_0x169ea0");
#endif

    switch (ctx->pc) {
        case 0x169ed8u: goto label_169ed8;
        case 0x169f0cu: goto label_169f0c;
        case 0x169f14u: goto label_169f14;
        case 0x169f30u: goto label_169f30;
        case 0x169f38u: goto label_169f38;
        case 0x169f40u: goto label_169f40;
        case 0x169f5cu: goto label_169f5c;
        case 0x169f6cu: goto label_169f6c;
        case 0x169f7cu: goto label_169f7c;
        case 0x169f98u: goto label_169f98;
        default: break;
    }

    ctx->pc = 0x169ea0u;

    // 0x169ea0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x169ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x169ea4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x169ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x169ea8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x169ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x169eac: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x169eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169eb0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x169eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x169eb4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x169eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x169eb8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x169eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x169ebc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x169ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x169ec0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x169ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x169ec4: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x169EC4u;
    {
        const bool branch_taken_0x169ec4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x169EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EC4u;
        // 0x169ec8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169ec4) {
            ctx->pc = 0x169FB0u;
            goto label_169fb0;
        }
    }
    ctx->pc = 0x169ECCu;
    // 0x169ecc: 0x24840048  addiu       $a0, $a0, 0x48
    ctx->pc = 0x169eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
    // 0x169ed0: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x169ED0u;
    SET_GPR_U32(ctx, 31, 0x169ED8u);
    ctx->pc = 0x169ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169ED0u;
    // 0x169ed4: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x169ED0u, 0x169ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169ED8u;
label_169ed8:
    // 0x169ed8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x169ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x169edc: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x169EDCu;
    {
        const bool branch_taken_0x169edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x169EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169EDCu;
        // 0x169ee0: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169edc) {
            ctx->pc = 0x169FB0u;
            goto label_169fb0;
        }
    }
    ctx->pc = 0x169EE4u;
    // 0x169ee4: 0x7a8202b0  lq          $v0, 0x2B0($s4)
    ctx->pc = 0x169ee4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 688)));
    // 0x169ee8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x169ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x169eec: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x169eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x169ef0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x169ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169ef4: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x169ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x169ef8: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x169ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x169efc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x169efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x169f00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x169f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f04: 0xc094904  jal         func_252410
    ctx->pc = 0x169F04u;
    SET_GPR_U32(ctx, 31, 0x169F0Cu);
    ctx->pc = 0x169F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F04u;
    // 0x169f08: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x169F04u, 0x169F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F0Cu;
label_169f0c:
    // 0x169f0c: 0xc0941c2  jal         func_250708
    ctx->pc = 0x169F0Cu;
    SET_GPR_U32(ctx, 31, 0x169F14u);
    ctx->pc = 0x169F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F0Cu;
    // 0x169f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250708u, 0x169F0Cu, 0x169F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F14u;
label_169f14:
    // 0x169f14: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x169f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f18: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x169F18u;
    {
        const bool branch_taken_0x169f18 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x169F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F18u;
        // 0x169f1c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f18) {
            ctx->pc = 0x169F28u;
            goto label_169f28;
        }
    }
    ctx->pc = 0x169F20u;
    // 0x169f20: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x169F20u;
    {
        const bool branch_taken_0x169f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F20u;
        // 0x169f24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f20) {
            ctx->pc = 0x169FB4u;
            goto label_169fb4;
        }
    }
    ctx->pc = 0x169F28u;
label_169f28:
    // 0x169f28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x169f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f2c: 0x0  nop
    ctx->pc = 0x169f2cu;
    // NOP
label_169f30:
    // 0x169f30: 0xc137866  jal         func_4DE198
    ctx->pc = 0x169F30u;
    SET_GPR_U32(ctx, 31, 0x169F38u);
    ctx->pc = 0x169F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F30u;
    // 0x169f34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x169F30u, 0x169F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F38u;
label_169f38:
    // 0x169f38: 0xc0e409a  jal         func_390268
    ctx->pc = 0x169F38u;
    SET_GPR_U32(ctx, 31, 0x169F40u);
    ctx->pc = 0x169F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F38u;
    // 0x169f3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x169F38u, 0x169F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F40u;
label_169f40:
    // 0x169f40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x169f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f44: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x169F44u;
    {
        const bool branch_taken_0x169f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x169f44) {
            ctx->pc = 0x169F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169F44u;
            // 0x169f48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169FA4u;
            goto label_169fa4;
        }
    }
    ctx->pc = 0x169F4Cu;
    // 0x169f4c: 0x12140014  beq         $s0, $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x169F4Cu;
    {
        const bool branch_taken_0x169f4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x169F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F4Cu;
        // 0x169f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f4c) {
            ctx->pc = 0x169FA0u;
            goto label_169fa0;
        }
    }
    ctx->pc = 0x169F54u;
    // 0x169f54: 0xc088edc  jal         func_223B70
    ctx->pc = 0x169F54u;
    SET_GPR_U32(ctx, 31, 0x169F5Cu);
    ctx->pc = 0x169F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F54u;
    // 0x169f58: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x169F54u, 0x169F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F5Cu;
label_169f5c:
    // 0x169f5c: 0x50510011  beql        $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x169F5Cu;
    {
        const bool branch_taken_0x169f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x169f5c) {
            ctx->pc = 0x169F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169F5Cu;
            // 0x169f60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169FA4u;
            goto label_169fa4;
        }
    }
    ctx->pc = 0x169F64u;
    // 0x169f64: 0xc089f98  jal         func_227E60
    ctx->pc = 0x169F64u;
    SET_GPR_U32(ctx, 31, 0x169F6Cu);
    ctx->pc = 0x169F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F64u;
    // 0x169f68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227E60u, 0x169F64u, 0x169F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F6Cu;
label_169f6c:
    // 0x169f6c: 0x5051000d  beql        $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x169F6Cu;
    {
        const bool branch_taken_0x169f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x169f6c) {
            ctx->pc = 0x169F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x169F6Cu;
            // 0x169f70: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x169FA4u;
            goto label_169fa4;
        }
    }
    ctx->pc = 0x169F74u;
    // 0x169f74: 0xc087420  jal         func_21D080
    ctx->pc = 0x169F74u;
    SET_GPR_U32(ctx, 31, 0x169F7Cu);
    ctx->pc = 0x169F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F74u;
    // 0x169f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D080u, 0x169F74u, 0x169F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F7Cu;
label_169f7c:
    // 0x169f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x169f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f80: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x169f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x169f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x169f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169f8c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x169f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169f90: 0xc09381e  jal         func_24E078
    ctx->pc = 0x169F90u;
    SET_GPR_U32(ctx, 31, 0x169F98u);
    ctx->pc = 0x169F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169F90u;
    // 0x169f94: 0x3409ffff  ori         $t1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E078u, 0x169F90u, 0x169F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169F98u;
label_169f98:
    // 0x169f98: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x169F98u;
    {
        const bool branch_taken_0x169f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x169F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169F98u;
        // 0x169f9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169f98) {
            ctx->pc = 0x169FB4u;
            goto label_169fb4;
        }
    }
    ctx->pc = 0x169FA0u;
label_169fa0:
    // 0x169fa0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x169fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_169fa4:
    // 0x169fa4: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x169fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x169fa8: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x169FA8u;
    {
        const bool branch_taken_0x169fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FA8u;
        // 0x169fac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169fa8) {
            ctx->pc = 0x169F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_169f30;
        }
    }
    ctx->pc = 0x169FB0u;
label_169fb0:
    // 0x169fb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_169fb4:
    // 0x169fb4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x169fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x169fb8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x169fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x169fbc: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x169fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x169fc0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x169fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x169fc4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x169fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x169fc8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x169fc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169fcc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x169fccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x169fd0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x169FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169FD4u;
        // 0x169fd8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169FDCu;
    // 0x169fdc: 0x0  nop
    ctx->pc = 0x169fdcu;
    // NOP
    ctx->pc = 0x169fe0u;
}
