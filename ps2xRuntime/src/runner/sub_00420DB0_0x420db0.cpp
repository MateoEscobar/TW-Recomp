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

// Function: sub_00420DB0
// Address: 0x420db0 - 0x420eb0
void sub_00420DB0_0x420db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420DB0_0x420db0");
#endif

    switch (ctx->pc) {
        case 0x420e64u: goto label_420e64;
        default: break;
    }

    ctx->pc = 0x420db0u;

    // 0x420db0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x420db4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x420db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420db8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x420dbc: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x420dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x420dc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x420dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420dc4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x420dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x420dc8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x420dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x420dcc: 0x26470024  addiu       $a3, $s2, 0x24
    ctx->pc = 0x420dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x420dd0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x420dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x420dd4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x420dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x420dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420ddc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x420ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x420de0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x420de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420de4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x420de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x420de8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x420de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x420dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x420decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420df0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x420df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x420df4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x420df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x420df8: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x420df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x420dfc: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x420dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x420e00: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x420e00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x420e04: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x420e04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x420e08: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x420e08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x420e0c: 0xa24600bc  sb          $a2, 0xBC($s2)
    ctx->pc = 0x420e0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 188), (uint8_t)GPR_U32(ctx, 6));
    // 0x420e10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x420e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x420e14: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x420e14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x420e18: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x420E18u;
    {
        const bool branch_taken_0x420e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x420E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420E18u;
        // 0x420e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420e18) {
            ctx->pc = 0x420E90u;
            goto label_420e90;
        }
    }
    ctx->pc = 0x420E20u;
    // 0x420e20: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x420e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x420e24: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x420e24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x420e28: 0x24425510  addiu       $v0, $v0, 0x5510
    ctx->pc = 0x420e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21776));
    // 0x420e2c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x420e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x420e30: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x420e30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x420e34: 0x3c100098  lui         $s0, 0x98
    ctx->pc = 0x420e34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)152 << 16));
    // 0x420e38: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x420e38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x420e3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x420e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x420e40: 0x3610967f  ori         $s0, $s0, 0x967F
    ctx->pc = 0x420e40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)38527);
    // 0x420e44: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x420e44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x420e48: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x420e48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x420e4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x420e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420e50: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x420e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x420e54: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x420e54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x420e58: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x420e58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x420e5c: 0xc107444  jal         func_41D110
    ctx->pc = 0x420E5Cu;
    SET_GPR_U32(ctx, 31, 0x420E64u);
    ctx->pc = 0x420E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420E5Cu;
    // 0x420e60: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x420E5Cu, 0x420E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420E64u;
label_420e64:
    // 0x420e64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x420E64u;
    {
        const bool branch_taken_0x420e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420E64u;
        // 0x420e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420e64) {
            ctx->pc = 0x420E88u;
            goto label_420e88;
        }
    }
    ctx->pc = 0x420E6Cu;
    // 0x420e6c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x420e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x420e70: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x420e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x420e74: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x420e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x420e78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x420e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x420e7c: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x420e7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x420e80: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x420e80u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x420e84: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x420e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_420e88:
    // 0x420e88: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x420e88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x420e8c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x420e8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_420e90:
    // 0x420e90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x420e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x420e94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x420e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x420e98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x420e98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x420e9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x420e9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x420EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420EA4u;
        // 0x420ea8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420EACu;
    // 0x420eac: 0x0  nop
    ctx->pc = 0x420eacu;
    // NOP
    ctx->pc = 0x420eb0u;
}
