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

// Function: sub_002AAE30
// Address: 0x2aae30 - 0x2aaf18
void sub_002AAE30_0x2aae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAE30_0x2aae30");
#endif

    switch (ctx->pc) {
        case 0x2aaee8u: goto label_2aaee8;
        default: break;
    }

    ctx->pc = 0x2aae30u;

    // 0x2aae30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aae34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2aae34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2aae38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aae3c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2aae3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2aae40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2aae40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2aae44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aae44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aae4c: 0x2463f670  addiu       $v1, $v1, -0x990
    ctx->pc = 0x2aae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964848));
    // 0x2aae50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2aae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2aae54: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x2aae54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x2aae58: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2aae58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2aae5c: 0x26290010  addiu       $t1, $s1, 0x10
    ctx->pc = 0x2aae5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2aae60: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2aae60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x2aae64: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x2aae64u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x2aae68: 0xa2200004  sb          $zero, 0x4($s1)
    ctx->pc = 0x2aae68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aae6c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2aae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2aae70: 0xa2200005  sb          $zero, 0x5($s1)
    ctx->pc = 0x2aae70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aae74: 0x24a516c0  addiu       $a1, $a1, 0x16C0
    ctx->pc = 0x2aae74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    // 0x2aae78: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2aae78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x2aae7c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2aae7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae80: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x2aae80u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x2aae84: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2aae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aae88: 0x8d42bd30  lw          $v0, -0x42D0($t2)
    ctx->pc = 0x2aae88u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2aae8c: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x2aae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x2aae90: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2aae90u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2aae94: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2aae94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2aae98: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x2aae98u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x2aae9c: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x2aae9cu;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x5116C0u));
    // 0x2aaea0: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x2aaea0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x2aaea4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2aaea4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2aaea8: 0xae260058  sw          $a2, 0x58($s1)
    ctx->pc = 0x2aaea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 6));
    // 0x2aaeac: 0x7e230040  sq          $v1, 0x40($s1)
    ctx->pc = 0x2aaeacu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 3));
    // 0x2aaeb0: 0xe62c005c  swc1        $f12, 0x5C($s1)
    ctx->pc = 0x2aaeb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
    // 0x2aaeb4: 0xa2280073  sb          $t0, 0x73($s1)
    ctx->pc = 0x2aaeb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 8));
    // 0x2aaeb8: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2aaeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
    // 0x2aaebc: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2aaebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
    // 0x2aaec0: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x2aaec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x2aaec4: 0xae200064  sw          $zero, 0x64($s1)
    ctx->pc = 0x2aaec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x2aaec8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2aaec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x2aaecc: 0xae20006c  sw          $zero, 0x6C($s1)
    ctx->pc = 0x2aaeccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 0));
    // 0x2aaed0: 0xa2200070  sb          $zero, 0x70($s1)
    ctx->pc = 0x2aaed0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aaed4: 0xa2200071  sb          $zero, 0x71($s1)
    ctx->pc = 0x2aaed4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aaed8: 0xa2200072  sb          $zero, 0x72($s1)
    ctx->pc = 0x2aaed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aaedc: 0xa2200074  sb          $zero, 0x74($s1)
    ctx->pc = 0x2aaedcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x2aaee0: 0xc0a682c  jal         func_29A0B0
    ctx->pc = 0x2AAEE0u;
    SET_GPR_U32(ctx, 31, 0x2AAEE8u);
    ctx->pc = 0x2AAEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AAEE0u;
    // 0x2aaee4: 0x8ce50000  lw          $a1, 0x0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A0B0u, 0x2AAEE0u, 0x2AAEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AAEE8u;
label_2aaee8:
    // 0x2aaee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aaee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2aaeec: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AAEECu;
    {
        const bool branch_taken_0x2aaeec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAEECu;
        // 0x2aaef0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aaeec) {
            ctx->pc = 0x2AAF04u;
            goto label_2aaf04;
        }
    }
    ctx->pc = 0x2AAEF4u;
    // 0x2aaef4: 0x3c014361  lui         $at, 0x4361
    ctx->pc = 0x2aaef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17249 << 16));
    // 0x2aaef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aaef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aaefc: 0x0  nop
    ctx->pc = 0x2aaefcu;
    // NOP
    // 0x2aaf00: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x2aaf00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
label_2aaf04:
    // 0x2aaf04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2aaf04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aaf08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aaf08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aaf0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aaf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aaf10: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAF10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAF10u;
        // 0x2aaf14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAF10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAF18u;
}
