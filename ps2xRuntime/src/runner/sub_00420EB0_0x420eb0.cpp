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

// Function: sub_00420EB0
// Address: 0x420eb0 - 0x420fb0
void sub_00420EB0_0x420eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420EB0_0x420eb0");
#endif

    switch (ctx->pc) {
        case 0x420f64u: goto label_420f64;
        default: break;
    }

    ctx->pc = 0x420eb0u;

    // 0x420eb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x420eb4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x420eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420eb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x420ebc: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x420ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x420ec0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x420ec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ec4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x420ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x420ec8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x420ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x420ecc: 0x26470014  addiu       $a3, $s2, 0x14
    ctx->pc = 0x420eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x420ed0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x420ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x420ed4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x420ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x420ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420edc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x420edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x420ee0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x420ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ee4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x420ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x420ee8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x420ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x420eec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x420eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ef0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x420ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x420ef4: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x420ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x420ef8: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x420ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x420efc: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x420efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x420f00: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x420f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x420f04: 0xa2200a  movz        $a0, $a1, $v0
    ctx->pc = 0x420f04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x420f08: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x420f08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x420f0c: 0xa24600bd  sb          $a2, 0xBD($s2)
    ctx->pc = 0x420f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 189), (uint8_t)GPR_U32(ctx, 6));
    // 0x420f10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x420f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x420f14: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x420f14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x420f18: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x420F18u;
    {
        const bool branch_taken_0x420f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x420F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F18u;
        // 0x420f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f18) {
            ctx->pc = 0x420F90u;
            goto label_420f90;
        }
    }
    ctx->pc = 0x420F20u;
    // 0x420f20: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x420f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x420f24: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x420f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x420f28: 0x244271c0  addiu       $v0, $v0, 0x71C0
    ctx->pc = 0x420f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29120));
    // 0x420f2c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x420f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x420f30: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x420f30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x420f34: 0x3c100098  lui         $s0, 0x98
    ctx->pc = 0x420f34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)152 << 16));
    // 0x420f38: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x420f38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x420f3c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x420f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x420f40: 0x3610967f  ori         $s0, $s0, 0x967F
    ctx->pc = 0x420f40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)38527);
    // 0x420f44: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x420f44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x420f48: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x420f48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x420f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x420f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420f50: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x420f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x420f54: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x420f54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x420f58: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x420f58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x420f5c: 0xc107444  jal         func_41D110
    ctx->pc = 0x420F5Cu;
    SET_GPR_U32(ctx, 31, 0x420F64u);
    ctx->pc = 0x420F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420F5Cu;
    // 0x420f60: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x420F5Cu, 0x420F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420F64u;
label_420f64:
    // 0x420f64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x420F64u;
    {
        const bool branch_taken_0x420f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420F64u;
        // 0x420f68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420f64) {
            ctx->pc = 0x420F88u;
            goto label_420f88;
        }
    }
    ctx->pc = 0x420F6Cu;
    // 0x420f6c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x420f6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x420f70: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x420f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x420f74: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x420f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x420f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x420f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x420f7c: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x420f7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x420f80: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x420f80u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x420f84: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x420f84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_420f88:
    // 0x420f88: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x420f88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x420f8c: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x420f8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_420f90:
    // 0x420f90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x420f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x420f94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x420f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x420f98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x420f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x420f9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x420f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420fa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x420FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420FA4u;
        // 0x420fa8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420FACu;
    // 0x420fac: 0x0  nop
    ctx->pc = 0x420facu;
    // NOP
    ctx->pc = 0x420fb0u;
}
