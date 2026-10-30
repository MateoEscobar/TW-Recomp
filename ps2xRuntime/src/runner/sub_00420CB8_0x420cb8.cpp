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

// Function: sub_00420CB8
// Address: 0x420cb8 - 0x420db0
void sub_00420CB8_0x420cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420CB8_0x420cb8");
#endif

    switch (ctx->pc) {
        case 0x420d5cu: goto label_420d5c;
        default: break;
    }

    ctx->pc = 0x420cb8u;

    // 0x420cb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x420cbc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x420cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420cc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x420cc4: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x420cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x420cc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x420cc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ccc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x420cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x420cd0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x420cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x420cd4: 0x26470008  addiu       $a3, $s2, 0x8
    ctx->pc = 0x420cd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x420cd8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x420cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x420cdc: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x420cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x420ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420ce4: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x420ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x420ce8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x420ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x420cec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x420cecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420cf0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x420cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x420cf4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x420cf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420cf8: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x420cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x420cfc: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x420cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x420d00: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x420d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x420d04: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x420d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x420d08: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x420d08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x420d0c: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x420d0cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x420d10: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x420D10u;
    {
        const bool branch_taken_0x420d10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x420D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D10u;
        // 0x420d14: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420d10) {
            ctx->pc = 0x420D8Cu;
            goto label_420d8c;
        }
    }
    ctx->pc = 0x420D18u;
    // 0x420d18: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x420d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x420d1c: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x420d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x420d20: 0x244271b8  addiu       $v0, $v0, 0x71B8
    ctx->pc = 0x420d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29112));
    // 0x420d24: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x420d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x420d28: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x420d28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x420d2c: 0x3c100098  lui         $s0, 0x98
    ctx->pc = 0x420d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)152 << 16));
    // 0x420d30: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x420d30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x420d34: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x420d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x420d38: 0x3610967f  ori         $s0, $s0, 0x967F
    ctx->pc = 0x420d38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)38527);
    // 0x420d3c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x420d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x420d40: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x420d40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x420d44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x420d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420d48: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x420d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x420d4c: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x420d4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x420d50: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x420d50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x420d54: 0xc107444  jal         func_41D110
    ctx->pc = 0x420D54u;
    SET_GPR_U32(ctx, 31, 0x420D5Cu);
    ctx->pc = 0x420D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x420D54u;
    // 0x420d58: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x420D54u, 0x420D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x420D5Cu;
label_420d5c:
    // 0x420d5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x420D5Cu;
    {
        const bool branch_taken_0x420d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x420D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D5Cu;
        // 0x420d60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x420d5c) {
            ctx->pc = 0x420D80u;
            goto label_420d80;
        }
    }
    ctx->pc = 0x420D64u;
    // 0x420d64: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x420d64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x420d68: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x420d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x420d6c: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x420d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x420d70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x420d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x420d74: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x420d74u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x420d78: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x420d78u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x420d7c: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x420d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_420d80:
    // 0x420d80: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x420d80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x420d84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x420D84u;
    {
        const bool branch_taken_0x420d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x420D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420D84u;
        // 0x420d88: 0x2621018  mult        $v0, $s3, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x420d84) {
            ctx->pc = 0x420D90u;
            goto label_420d90;
        }
    }
    ctx->pc = 0x420D8Cu;
label_420d8c:
    // 0x420d8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x420d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_420d90:
    // 0x420d90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x420d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x420d94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x420d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x420d98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x420d98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x420d9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x420d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x420da0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x420da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x420da4: 0x3e00008  jr          $ra
    ctx->pc = 0x420DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x420DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x420DA4u;
        // 0x420da8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x420DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x420DACu;
    // 0x420dac: 0x0  nop
    ctx->pc = 0x420dacu;
    // NOP
    ctx->pc = 0x420db0u;
}
