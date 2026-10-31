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

// Function: sub_002B6EB0
// Address: 0x2b6eb0 - 0x2b6fa0
void sub_002B6EB0_0x2b6eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6EB0_0x2b6eb0");
#endif

    switch (ctx->pc) {
        case 0x2b6eb0u: goto label_2b6eb0;
        case 0x2b6eb4u: goto label_2b6eb4;
        case 0x2b6eb8u: goto label_2b6eb8;
        case 0x2b6ebcu: goto label_2b6ebc;
        case 0x2b6ec0u: goto label_2b6ec0;
        case 0x2b6ec4u: goto label_2b6ec4;
        case 0x2b6ec8u: goto label_2b6ec8;
        case 0x2b6eccu: goto label_2b6ecc;
        case 0x2b6ed0u: goto label_2b6ed0;
        case 0x2b6ed4u: goto label_2b6ed4;
        case 0x2b6ed8u: goto label_2b6ed8;
        case 0x2b6edcu: goto label_2b6edc;
        case 0x2b6ee0u: goto label_2b6ee0;
        case 0x2b6ee4u: goto label_2b6ee4;
        case 0x2b6ee8u: goto label_2b6ee8;
        case 0x2b6eecu: goto label_2b6eec;
        case 0x2b6ef0u: goto label_2b6ef0;
        case 0x2b6ef4u: goto label_2b6ef4;
        case 0x2b6ef8u: goto label_2b6ef8;
        case 0x2b6efcu: goto label_2b6efc;
        case 0x2b6f00u: goto label_2b6f00;
        case 0x2b6f04u: goto label_2b6f04;
        case 0x2b6f08u: goto label_2b6f08;
        case 0x2b6f0cu: goto label_2b6f0c;
        case 0x2b6f10u: goto label_2b6f10;
        case 0x2b6f14u: goto label_2b6f14;
        case 0x2b6f18u: goto label_2b6f18;
        case 0x2b6f1cu: goto label_2b6f1c;
        case 0x2b6f20u: goto label_2b6f20;
        case 0x2b6f24u: goto label_2b6f24;
        case 0x2b6f28u: goto label_2b6f28;
        case 0x2b6f2cu: goto label_2b6f2c;
        case 0x2b6f30u: goto label_2b6f30;
        case 0x2b6f34u: goto label_2b6f34;
        case 0x2b6f38u: goto label_2b6f38;
        case 0x2b6f3cu: goto label_2b6f3c;
        case 0x2b6f40u: goto label_2b6f40;
        case 0x2b6f44u: goto label_2b6f44;
        case 0x2b6f48u: goto label_2b6f48;
        case 0x2b6f4cu: goto label_2b6f4c;
        case 0x2b6f50u: goto label_2b6f50;
        case 0x2b6f54u: goto label_2b6f54;
        case 0x2b6f58u: goto label_2b6f58;
        case 0x2b6f5cu: goto label_2b6f5c;
        case 0x2b6f60u: goto label_2b6f60;
        case 0x2b6f64u: goto label_2b6f64;
        case 0x2b6f68u: goto label_2b6f68;
        case 0x2b6f6cu: goto label_2b6f6c;
        case 0x2b6f70u: goto label_2b6f70;
        case 0x2b6f74u: goto label_2b6f74;
        case 0x2b6f78u: goto label_2b6f78;
        case 0x2b6f7cu: goto label_2b6f7c;
        case 0x2b6f80u: goto label_2b6f80;
        case 0x2b6f84u: goto label_2b6f84;
        case 0x2b6f88u: goto label_2b6f88;
        case 0x2b6f8cu: goto label_2b6f8c;
        case 0x2b6f90u: goto label_2b6f90;
        case 0x2b6f94u: goto label_2b6f94;
        case 0x2b6f98u: goto label_2b6f98;
        case 0x2b6f9cu: goto label_2b6f9c;
        default: break;
    }

    ctx->pc = 0x2b6eb0u;

label_2b6eb0:
    // 0x2b6eb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b6eb4:
    // 0x2b6eb4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b6eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2b6eb8:
    // 0x2b6eb8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b6eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2b6ebc:
    // 0x2b6ebc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b6ebcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b6ec0:
    // 0x2b6ec0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b6ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2b6ec4:
    // 0x2b6ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b6ec8:
    // 0x2b6ec8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2b6ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b6ecc:
    // 0x2b6ecc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b6ed0:
    // 0x2b6ed0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2b6ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2b6ed4:
    // 0x2b6ed4: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2b6ed8:
    if (ctx->pc == 0x2B6ED8u) {
        ctx->pc = 0x2B6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6ED4u;
        // 0x2b6ed8: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6EDCu;
        goto label_2b6edc;
    }
    ctx->pc = 0x2B6ED4u;
    {
        const bool branch_taken_0x2b6ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6ED4u;
        // 0x2b6ed8: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ed4) {
            ctx->pc = 0x2B6F84u;
            goto label_2b6f84;
        }
    }
    ctx->pc = 0x2B6EDCu;
label_2b6edc:
    // 0x2b6edc: 0x8c620204  lw          $v0, 0x204($v1)
    ctx->pc = 0x2b6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 516)));
label_2b6ee0:
    // 0x2b6ee0: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_2b6ee4:
    if (ctx->pc == 0x2B6EE4u) {
        ctx->pc = 0x2B6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EE0u;
        // 0x2b6ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6EE8u;
        goto label_2b6ee8;
    }
    ctx->pc = 0x2B6EE0u;
    {
        const bool branch_taken_0x2b6ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EE0u;
        // 0x2b6ee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ee0) {
            ctx->pc = 0x2B6F88u;
            goto label_2b6f88;
        }
    }
    ctx->pc = 0x2B6EE8u;
label_2b6ee8:
    // 0x2b6ee8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x2b6ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b6eec:
    // 0x2b6eec: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_2b6ef0:
    // 0x2b6ef0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2b6ef4:
    if (ctx->pc == 0x2B6EF4u) {
        ctx->pc = 0x2B6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EF0u;
        // 0x2b6ef4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6EF8u;
        goto label_2b6ef8;
    }
    ctx->pc = 0x2B6EF0u;
    {
        const bool branch_taken_0x2b6ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6ef0) {
            ctx->pc = 0x2B6EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6EF0u;
            // 0x2b6ef4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6EF8u;
            goto label_2b6ef8;
        }
    }
    ctx->pc = 0x2B6EF8u;
label_2b6ef8:
    // 0x2b6ef8: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x2b6ef8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_2b6efc:
    // 0x2b6efc: 0x1810  mfhi        $v1
    ctx->pc = 0x2b6efcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2b6f00:
    // 0x2b6f00: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_2b6f04:
    if (ctx->pc == 0x2B6F04u) {
        ctx->pc = 0x2B6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F00u;
        // 0x2b6f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F08u;
        goto label_2b6f08;
    }
    ctx->pc = 0x2B6F00u;
    {
        const bool branch_taken_0x2b6f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F00u;
        // 0x2b6f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f00) {
            ctx->pc = 0x2B6F88u;
            goto label_2b6f88;
        }
    }
    ctx->pc = 0x2B6F08u;
label_2b6f08:
    // 0x2b6f08: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2b6f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_2b6f0c:
    // 0x2b6f0c: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x2b6f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_2b6f10:
    // 0x2b6f10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b6f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b6f14:
    // 0x2b6f14: 0x24a5c570  addiu       $a1, $a1, -0x3A90
    ctx->pc = 0x2b6f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952304));
label_2b6f18:
    // 0x2b6f18: 0xc0a72ee  jal         func_29CBB8
label_2b6f1c:
    if (ctx->pc == 0x2B6F1Cu) {
        ctx->pc = 0x2B6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F18u;
        // 0x2b6f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F20u;
        goto label_2b6f20;
    }
    ctx->pc = 0x2B6F18u;
    SET_GPR_U32(ctx, 31, 0x2B6F20u);
    ctx->pc = 0x2B6F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F18u;
    // 0x2b6f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29CBB8u, 0x2B6F18u, 0x2B6F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F20u;
label_2b6f20:
    // 0x2b6f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f24:
    // 0x2b6f24: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_2b6f28:
    if (ctx->pc == 0x2B6F28u) {
        ctx->pc = 0x2B6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F24u;
        // 0x2b6f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F2Cu;
        goto label_2b6f2c;
    }
    ctx->pc = 0x2B6F24u;
    {
        const bool branch_taken_0x2b6f24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F24u;
        // 0x2b6f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f24) {
            ctx->pc = 0x2B6F88u;
            goto label_2b6f88;
        }
    }
    ctx->pc = 0x2B6F2Cu;
label_2b6f2c:
    // 0x2b6f2c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b6f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b6f30:
    // 0x2b6f30: 0xc0a43f4  jal         func_290FD0
label_2b6f34:
    if (ctx->pc == 0x2B6F34u) {
        ctx->pc = 0x2B6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F30u;
        // 0x2b6f34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F38u;
        goto label_2b6f38;
    }
    ctx->pc = 0x2B6F30u;
    SET_GPR_U32(ctx, 31, 0x2B6F38u);
    ctx->pc = 0x2B6F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F30u;
    // 0x2b6f34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FD0u, 0x2B6F30u, 0x2B6F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F38u;
label_2b6f38:
    // 0x2b6f38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b6f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6f3c:
    // 0x2b6f3c: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
label_2b6f40:
    if (ctx->pc == 0x2B6F40u) {
        ctx->pc = 0x2B6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F3Cu;
        // 0x2b6f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F44u;
        goto label_2b6f44;
    }
    ctx->pc = 0x2B6F3Cu;
    {
        const bool branch_taken_0x2b6f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b6f3c) {
            ctx->pc = 0x2B6F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6F3Cu;
            // 0x2b6f40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6F88u;
            goto label_2b6f88;
        }
    }
    ctx->pc = 0x2B6F44u;
label_2b6f44:
    // 0x2b6f44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b6f48:
    // 0x2b6f48: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b6f48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b6f4c:
    // 0x2b6f4c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b6f50:
    // 0x2b6f50: 0x40f809  jalr        $v0
label_2b6f54:
    if (ctx->pc == 0x2B6F54u) {
        ctx->pc = 0x2B6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F50u;
        // 0x2b6f54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F58u;
        goto label_2b6f58;
    }
    ctx->pc = 0x2B6F50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6F58u);
        ctx->pc = 0x2B6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F50u;
        // 0x2b6f54: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6F50u, 0x2B6F58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6F58u;
label_2b6f58:
    // 0x2b6f58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b6f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b6f5c:
    // 0x2b6f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b6f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f60:
    // 0x2b6f60: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2b6f60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2b6f64:
    // 0x2b6f64: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2b6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2b6f68:
    // 0x2b6f68: 0x40f809  jalr        $v0
label_2b6f6c:
    if (ctx->pc == 0x2B6F6Cu) {
        ctx->pc = 0x2B6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F68u;
        // 0x2b6f6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F70u;
        goto label_2b6f70;
    }
    ctx->pc = 0x2B6F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B6F70u);
        ctx->pc = 0x2B6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F68u;
        // 0x2b6f6c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6F68u, 0x2B6F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B6F70u;
label_2b6f70:
    // 0x2b6f70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f74:
    // 0x2b6f74: 0xc0adf60  jal         func_2B7D80
label_2b6f78:
    if (ctx->pc == 0x2B6F78u) {
        ctx->pc = 0x2B6F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F74u;
        // 0x2b6f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F7Cu;
        goto label_2b6f7c;
    }
    ctx->pc = 0x2B6F74u;
    SET_GPR_U32(ctx, 31, 0x2B6F7Cu);
    ctx->pc = 0x2B6F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F74u;
    // 0x2b6f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7D80u, 0x2B6F74u, 0x2B6F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F7Cu;
label_2b6f7c:
    // 0x2b6f7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b6f80:
    if (ctx->pc == 0x2B6F80u) {
        ctx->pc = 0x2B6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F7Cu;
        // 0x2b6f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6F84u;
        goto label_2b6f84;
    }
    ctx->pc = 0x2B6F7Cu;
    {
        const bool branch_taken_0x2b6f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F7Cu;
        // 0x2b6f80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f7c) {
            ctx->pc = 0x2B6F88u;
            goto label_2b6f88;
        }
    }
    ctx->pc = 0x2B6F84u;
label_2b6f84:
    // 0x2b6f84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b6f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6f88:
    // 0x2b6f88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2b6f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b6f8c:
    // 0x2b6f8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2b6f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b6f90:
    // 0x2b6f90: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2b6f90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b6f94:
    // 0x2b6f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6f98:
    // 0x2b6f98: 0x3e00008  jr          $ra
label_2b6f9c:
    if (ctx->pc == 0x2B6F9Cu) {
        ctx->pc = 0x2B6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F98u;
        // 0x2b6f9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B6FA0u;
        goto label_fallthrough_0x2b6f98;
    }
    ctx->pc = 0x2B6F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F98u;
        // 0x2b6f9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b6f98:
    ctx->pc = 0x2B6FA0u;
}
