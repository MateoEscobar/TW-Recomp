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

// Function: sub_003E3058
// Address: 0x3e3058 - 0x3e30e0
void sub_003E3058_0x3e3058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3058_0x3e3058");
#endif

    switch (ctx->pc) {
        case 0x3e3058u: goto label_3e3058;
        case 0x3e305cu: goto label_3e305c;
        case 0x3e3060u: goto label_3e3060;
        case 0x3e3064u: goto label_3e3064;
        case 0x3e3068u: goto label_3e3068;
        case 0x3e306cu: goto label_3e306c;
        case 0x3e3070u: goto label_3e3070;
        case 0x3e3074u: goto label_3e3074;
        case 0x3e3078u: goto label_3e3078;
        case 0x3e307cu: goto label_3e307c;
        case 0x3e3080u: goto label_3e3080;
        case 0x3e3084u: goto label_3e3084;
        case 0x3e3088u: goto label_3e3088;
        case 0x3e308cu: goto label_3e308c;
        case 0x3e3090u: goto label_3e3090;
        case 0x3e3094u: goto label_3e3094;
        case 0x3e3098u: goto label_3e3098;
        case 0x3e309cu: goto label_3e309c;
        case 0x3e30a0u: goto label_3e30a0;
        case 0x3e30a4u: goto label_3e30a4;
        case 0x3e30a8u: goto label_3e30a8;
        case 0x3e30acu: goto label_3e30ac;
        case 0x3e30b0u: goto label_3e30b0;
        case 0x3e30b4u: goto label_3e30b4;
        case 0x3e30b8u: goto label_3e30b8;
        case 0x3e30bcu: goto label_3e30bc;
        case 0x3e30c0u: goto label_3e30c0;
        case 0x3e30c4u: goto label_3e30c4;
        case 0x3e30c8u: goto label_3e30c8;
        case 0x3e30ccu: goto label_3e30cc;
        case 0x3e30d0u: goto label_3e30d0;
        case 0x3e30d4u: goto label_3e30d4;
        case 0x3e30d8u: goto label_3e30d8;
        case 0x3e30dcu: goto label_3e30dc;
        default: break;
    }

    ctx->pc = 0x3e3058u;

label_3e3058:
    // 0x3e3058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e3058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e305c:
    // 0x3e305c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e305cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3e3060:
    // 0x3e3060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e3060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e3064:
    // 0x3e3064: 0xc0e933a  jal         func_3A4CE8
label_3e3068:
    if (ctx->pc == 0x3E3068u) {
        ctx->pc = 0x3E3068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3064u;
        // 0x3e3068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E306Cu;
        goto label_3e306c;
    }
    ctx->pc = 0x3E3064u;
    SET_GPR_U32(ctx, 31, 0x3E306Cu);
    ctx->pc = 0x3E3068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3064u;
    // 0x3e3068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CE8u, 0x3E3064u, 0x3E306Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E306Cu;
label_3e306c:
    // 0x3e306c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e3070:
    // 0x3e3070: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
label_3e3074:
    if (ctx->pc == 0x3E3074u) {
        ctx->pc = 0x3E3074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3070u;
        // 0x3e3074: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E3078u;
        goto label_3e3078;
    }
    ctx->pc = 0x3E3070u;
    {
        const bool branch_taken_0x3e3070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e3070) {
            ctx->pc = 0x3E3074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3070u;
            // 0x3e3074: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E30D0u;
            goto label_3e30d0;
        }
    }
    ctx->pc = 0x3E3078u;
label_3e3078:
    // 0x3e3078: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3e3078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3e307c:
    // 0x3e307c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3e307cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3e3080:
    // 0x3e3080: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3e3080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3e3084:
    // 0x3e3084: 0x40f809  jalr        $v0
label_3e3088:
    if (ctx->pc == 0x3E3088u) {
        ctx->pc = 0x3E3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3084u;
        // 0x3e3088: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E308Cu;
        goto label_3e308c;
    }
    ctx->pc = 0x3E3084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E308Cu);
        ctx->pc = 0x3E3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3084u;
        // 0x3e3088: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3084u, 0x3E308Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E308Cu;
label_3e308c:
    // 0x3e308c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3e308cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
label_3e3090:
    // 0x3e3090: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e3090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3e3094:
    // 0x3e3094: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_3e3098:
    if (ctx->pc == 0x3E3098u) {
        ctx->pc = 0x3E3098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3094u;
        // 0x3e3098: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E309Cu;
        goto label_3e309c;
    }
    ctx->pc = 0x3E3094u;
    {
        const bool branch_taken_0x3e3094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e3094) {
            ctx->pc = 0x3E3098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E3094u;
            // 0x3e3098: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E30D0u;
            goto label_3e30d0;
        }
    }
    ctx->pc = 0x3E309Cu;
label_3e309c:
    // 0x3e309c: 0xc04808c  jal         func_120230
label_3e30a0:
    if (ctx->pc == 0x3E30A0u) {
        ctx->pc = 0x3E30A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E309Cu;
        // 0x3e30a0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E30A4u;
        goto label_3e30a4;
    }
    ctx->pc = 0x3E309Cu;
    SET_GPR_U32(ctx, 31, 0x3E30A4u);
    ctx->pc = 0x3E30A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E309Cu;
    // 0x3e30a0: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120230u, 0x3E309Cu, 0x3E30A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E30A4u;
label_3e30a4:
    // 0x3e30a4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3e30a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_3e30a8:
    // 0x3e30a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3e30a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3e30ac:
    // 0x3e30ac: 0x0  nop
    ctx->pc = 0x3e30acu;
    // NOP
label_3e30b0:
    // 0x3e30b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e30b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3e30b4:
    // 0x3e30b4: 0x0  nop
    ctx->pc = 0x3e30b4u;
    // NOP
label_3e30b8:
    // 0x3e30b8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_3e30bc:
    if (ctx->pc == 0x3E30BCu) {
        ctx->pc = 0x3E30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30B8u;
        // 0x3e30bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E30C0u;
        goto label_3e30c0;
    }
    ctx->pc = 0x3E30B8u;
    {
        const bool branch_taken_0x3e30b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E30BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30B8u;
        // 0x3e30bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e30b8) {
            ctx->pc = 0x3E30CCu;
            goto label_3e30cc;
        }
    }
    ctx->pc = 0x3E30C0u;
label_3e30c0:
    // 0x3e30c0: 0x8e0500dc  lw          $a1, 0xDC($s0)
    ctx->pc = 0x3e30c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_3e30c4:
    // 0x3e30c4: 0xc0e92b6  jal         func_3A4AD8
label_3e30c8:
    if (ctx->pc == 0x3E30C8u) {
        ctx->pc = 0x3E30C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30C4u;
        // 0x3e30c8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E30CCu;
        goto label_3e30cc;
    }
    ctx->pc = 0x3E30C4u;
    SET_GPR_U32(ctx, 31, 0x3E30CCu);
    ctx->pc = 0x3E30C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E30C4u;
    // 0x3e30c8: 0x8e0400d8  lw          $a0, 0xD8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AD8u, 0x3E30C4u, 0x3E30CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E30CCu;
label_3e30cc:
    // 0x3e30cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e30ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e30d0:
    // 0x3e30d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e30d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e30d4:
    // 0x3e30d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e30d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e30d8:
    // 0x3e30d8: 0x3e00008  jr          $ra
label_3e30dc:
    if (ctx->pc == 0x3E30DCu) {
        ctx->pc = 0x3E30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30D8u;
        // 0x3e30dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E30E0u;
        goto label_fallthrough_0x3e30d8;
    }
    ctx->pc = 0x3E30D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E30D8u;
        // 0x3e30dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E30D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e30d8:
    ctx->pc = 0x3E30E0u;
}
