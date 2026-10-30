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

// Function: sub_00420FB0
// Address: 0x420fb0 - 0x4210a8
void sub_00420FB0_0x420fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00420FB0_0x420fb0");
#endif

    switch (ctx->pc) {
        case 0x421054u: goto label_421054;
        default: break;
    }

    ctx->pc = 0x420fb0u;

    // 0x420fb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x420fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x420fb4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x420fb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420fb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x420fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x420fbc: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x420fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x420fc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x420fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420fc4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x420fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x420fc8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x420fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x420fcc: 0x26470058  addiu       $a3, $s2, 0x58
    ctx->pc = 0x420fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x420fd0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x420fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x420fd4: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x420fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x420fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x420fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x420fdc: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x420fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x420fe0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x420fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x420fe4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x420fe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420fe8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x420fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x420fec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x420fecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x420ff0: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x420ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x420ff4: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x420ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x420ff8: 0x3484fffe  ori         $a0, $a0, 0xFFFE
    ctx->pc = 0x420ff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65534);
    // 0x420ffc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x420ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x421000: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x421000u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x421004: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x421004u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x421008: 0x1480001e  bnez        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x421008u;
    {
        const bool branch_taken_0x421008 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x42100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421008u;
        // 0x42100c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421008) {
            ctx->pc = 0x421084u;
            goto label_421084;
        }
    }
    ctx->pc = 0x421010u;
    // 0x421010: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x421010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x421014: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x421014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x421018: 0x24425500  addiu       $v0, $v0, 0x5500
    ctx->pc = 0x421018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21760));
    // 0x42101c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x42101cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x421020: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x421020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x421024: 0x3c100098  lui         $s0, 0x98
    ctx->pc = 0x421024u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)152 << 16));
    // 0x421028: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x421028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42102c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x42102cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x421030: 0x3610967f  ori         $s0, $s0, 0x967F
    ctx->pc = 0x421030u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)38527);
    // 0x421034: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x421034u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x421038: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x421038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x42103c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42103cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x421040: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x421040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x421044: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x421044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x421048: 0xc2280a  movz        $a1, $a2, $v0
    ctx->pc = 0x421048u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x42104c: 0xc107444  jal         func_41D110
    ctx->pc = 0x42104Cu;
    SET_GPR_U32(ctx, 31, 0x421054u);
    ctx->pc = 0x421050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42104Cu;
    // 0x421050: 0xae450000  sw          $a1, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41D110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41D110u, 0x42104Cu, 0x421054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421054u;
label_421054:
    // 0x421054: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x421054u;
    {
        const bool branch_taken_0x421054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x421058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421054u;
        // 0x421058: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x421054) {
            ctx->pc = 0x421078u;
            goto label_421078;
        }
    }
    ctx->pc = 0x42105Cu;
    // 0x42105c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x42105cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x421060: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x421060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x421064: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x421064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x421068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x421068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x42106c: 0x202202b  sltu        $a0, $s0, $v0
    ctx->pc = 0x42106cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x421070: 0x44280a  movz        $a1, $v0, $a0
    ctx->pc = 0x421070u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x421074: 0xae450004  sw          $a1, 0x4($s2)
    ctx->pc = 0x421074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 5));
label_421078:
    // 0x421078: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x421078u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x42107c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42107Cu;
    {
        const bool branch_taken_0x42107c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x421080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42107Cu;
        // 0x421080: 0x2621018  mult        $v0, $s3, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x42107c) {
            ctx->pc = 0x421088u;
            goto label_421088;
        }
    }
    ctx->pc = 0x421084u;
label_421084:
    // 0x421084: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x421084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_421088:
    // 0x421088: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x421088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42108c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x42108cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x421090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x421090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x421094: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x421094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x421098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x421098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42109c: 0x3e00008  jr          $ra
    ctx->pc = 0x42109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4210A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42109Cu;
        // 0x4210a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42109Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4210A4u;
    // 0x4210a4: 0x0  nop
    ctx->pc = 0x4210a4u;
    // NOP
    ctx->pc = 0x4210a8u;
}
