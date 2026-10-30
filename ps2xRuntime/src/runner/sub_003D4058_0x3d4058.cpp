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

// Function: sub_003D4058
// Address: 0x3d4058 - 0x3d4100
void sub_003D4058_0x3d4058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4058_0x3d4058");
#endif

    switch (ctx->pc) {
        case 0x3d4058u: goto label_3d4058;
        case 0x3d405cu: goto label_3d405c;
        case 0x3d4060u: goto label_3d4060;
        case 0x3d4064u: goto label_3d4064;
        case 0x3d4068u: goto label_3d4068;
        case 0x3d406cu: goto label_3d406c;
        case 0x3d4070u: goto label_3d4070;
        case 0x3d4074u: goto label_3d4074;
        case 0x3d4078u: goto label_3d4078;
        case 0x3d407cu: goto label_3d407c;
        case 0x3d4080u: goto label_3d4080;
        case 0x3d4084u: goto label_3d4084;
        case 0x3d4088u: goto label_3d4088;
        case 0x3d408cu: goto label_3d408c;
        case 0x3d4090u: goto label_3d4090;
        case 0x3d4094u: goto label_3d4094;
        case 0x3d4098u: goto label_3d4098;
        case 0x3d409cu: goto label_3d409c;
        case 0x3d40a0u: goto label_3d40a0;
        case 0x3d40a4u: goto label_3d40a4;
        case 0x3d40a8u: goto label_3d40a8;
        case 0x3d40acu: goto label_3d40ac;
        case 0x3d40b0u: goto label_3d40b0;
        case 0x3d40b4u: goto label_3d40b4;
        case 0x3d40b8u: goto label_3d40b8;
        case 0x3d40bcu: goto label_3d40bc;
        case 0x3d40c0u: goto label_3d40c0;
        case 0x3d40c4u: goto label_3d40c4;
        case 0x3d40c8u: goto label_3d40c8;
        case 0x3d40ccu: goto label_3d40cc;
        case 0x3d40d0u: goto label_3d40d0;
        case 0x3d40d4u: goto label_3d40d4;
        case 0x3d40d8u: goto label_3d40d8;
        case 0x3d40dcu: goto label_3d40dc;
        case 0x3d40e0u: goto label_3d40e0;
        case 0x3d40e4u: goto label_3d40e4;
        case 0x3d40e8u: goto label_3d40e8;
        case 0x3d40ecu: goto label_3d40ec;
        case 0x3d40f0u: goto label_3d40f0;
        case 0x3d40f4u: goto label_3d40f4;
        case 0x3d40f8u: goto label_3d40f8;
        case 0x3d40fcu: goto label_3d40fc;
        default: break;
    }

    ctx->pc = 0x3d4058u;

label_3d4058:
    // 0x3d4058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d4058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3d405c:
    // 0x3d405c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3d405cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3d4060:
    // 0x3d4060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d4060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d4064:
    // 0x3d4064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d4064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4068:
    // 0x3d4068: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3d4068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3d406c:
    // 0x3d406c: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d406cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d4070:
    // 0x3d4070: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d4070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d4074:
    // 0x3d4074: 0x40f809  jalr        $v0
label_3d4078:
    if (ctx->pc == 0x3D4078u) {
        ctx->pc = 0x3D4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4074u;
        // 0x3d4078: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D407Cu;
        goto label_3d407c;
    }
    ctx->pc = 0x3D4074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D407Cu);
        ctx->pc = 0x3D4078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4074u;
        // 0x3d4078: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4074u, 0x3D407Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D407Cu;
label_3d407c:
    // 0x3d407c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3d407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3d4080:
    // 0x3d4080: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3d4080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3d4084:
    // 0x3d4084: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_3d4088:
    if (ctx->pc == 0x3D4088u) {
        ctx->pc = 0x3D4088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4084u;
        // 0x3d4088: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D408Cu;
        goto label_3d408c;
    }
    ctx->pc = 0x3D4084u;
    {
        const bool branch_taken_0x3d4084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d4084) {
            ctx->pc = 0x3D4088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4084u;
            // 0x3d4088: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D40A4u;
            goto label_3d40a4;
        }
    }
    ctx->pc = 0x3D408Cu;
label_3d408c:
    // 0x3d408c: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x3d408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3d4090:
    // 0x3d4090: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3d4094:
    if (ctx->pc == 0x3D4094u) {
        ctx->pc = 0x3D4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4090u;
        // 0x3d4094: 0xae0000cc  sw          $zero, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D4098u;
        goto label_3d4098;
    }
    ctx->pc = 0x3D4090u;
    {
        const bool branch_taken_0x3d4090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4090) {
            ctx->pc = 0x3D4094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4090u;
            // 0x3d4094: 0xae0000cc  sw          $zero, 0xCC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D40A0u;
            goto label_3d40a0;
        }
    }
    ctx->pc = 0x3D4098u;
label_3d4098:
    // 0x3d4098: 0x10000014  b           . + 4 + (0x14 << 2)
label_3d409c:
    if (ctx->pc == 0x3D409Cu) {
        ctx->pc = 0x3D409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4098u;
        // 0x3d409c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D40A0u;
        goto label_3d40a0;
    }
    ctx->pc = 0x3D4098u;
    {
        const bool branch_taken_0x3d4098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D409Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4098u;
        // 0x3d409c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4098) {
            ctx->pc = 0x3D40ECu;
            goto label_3d40ec;
        }
    }
    ctx->pc = 0x3D40A0u;
label_3d40a0:
    // 0x3d40a0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3d40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3d40a4:
    // 0x3d40a4: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x3d40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_3d40a8:
    // 0x3d40a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3d40a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3d40ac:
    // 0x3d40ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3d40b0:
    if (ctx->pc == 0x3D40B0u) {
        ctx->pc = 0x3D40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40ACu;
        // 0x3d40b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D40B4u;
        goto label_3d40b4;
    }
    ctx->pc = 0x3D40ACu;
    {
        const bool branch_taken_0x3d40ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D40B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40ACu;
        // 0x3d40b0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d40ac) {
            ctx->pc = 0x3D40E8u;
            goto label_3d40e8;
        }
    }
    ctx->pc = 0x3D40B4u;
label_3d40b4:
    // 0x3d40b4: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x3d40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_3d40b8:
    // 0x3d40b8: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x3d40b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
label_3d40bc:
    // 0x3d40bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d40bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d40c0:
    // 0x3d40c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x3d40c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_3d40c4:
    // 0x3d40c4: 0xc0f3222  jal         func_3CC888
label_3d40c8:
    if (ctx->pc == 0x3D40C8u) {
        ctx->pc = 0x3D40C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40C4u;
        // 0x3d40c8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D40CCu;
        goto label_3d40cc;
    }
    ctx->pc = 0x3D40C4u;
    SET_GPR_U32(ctx, 31, 0x3D40CCu);
    ctx->pc = 0x3D40C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D40C4u;
    // 0x3d40c8: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC888u, 0x3D40C4u, 0x3D40CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D40CCu;
label_3d40cc:
    // 0x3d40cc: 0x3c01c3fa  lui         $at, 0xC3FA
    ctx->pc = 0x3d40ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50170 << 16));
label_3d40d0:
    // 0x3d40d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3d40d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d40d4:
    // 0x3d40d4: 0x0  nop
    ctx->pc = 0x3d40d4u;
    // NOP
label_3d40d8:
    // 0x3d40d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d40d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d40dc:
    // 0x3d40dc: 0x0  nop
    ctx->pc = 0x3d40dcu;
    // NOP
label_3d40e0:
    // 0x3d40e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3d40e4:
    if (ctx->pc == 0x3D40E4u) {
        ctx->pc = 0x3D40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40E0u;
        // 0x3d40e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D40E8u;
        goto label_3d40e8;
    }
    ctx->pc = 0x3D40E0u;
    {
        const bool branch_taken_0x3d40e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3D40E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40E0u;
        // 0x3d40e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d40e0) {
            ctx->pc = 0x3D40ECu;
            goto label_3d40ec;
        }
    }
    ctx->pc = 0x3D40E8u;
label_3d40e8:
    // 0x3d40e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d40e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d40ec:
    // 0x3d40ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3d40ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d40f0:
    // 0x3d40f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d40f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d40f4:
    // 0x3d40f4: 0x3e00008  jr          $ra
label_3d40f8:
    if (ctx->pc == 0x3D40F8u) {
        ctx->pc = 0x3D40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40F4u;
        // 0x3d40f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D40FCu;
        goto label_3d40fc;
    }
    ctx->pc = 0x3D40F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40F4u;
        // 0x3d40f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D40F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D40FCu;
label_3d40fc:
    // 0x3d40fc: 0x0  nop
    ctx->pc = 0x3d40fcu;
    // NOP
    ctx->pc = 0x3d4100u;
}
