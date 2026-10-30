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

// Function: sub_002CFB90
// Address: 0x2cfb90 - 0x2cfc40
void sub_002CFB90_0x2cfb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFB90_0x2cfb90");
#endif

    switch (ctx->pc) {
        case 0x2cfb90u: goto label_2cfb90;
        case 0x2cfb94u: goto label_2cfb94;
        case 0x2cfb98u: goto label_2cfb98;
        case 0x2cfb9cu: goto label_2cfb9c;
        case 0x2cfba0u: goto label_2cfba0;
        case 0x2cfba4u: goto label_2cfba4;
        case 0x2cfba8u: goto label_2cfba8;
        case 0x2cfbacu: goto label_2cfbac;
        case 0x2cfbb0u: goto label_2cfbb0;
        case 0x2cfbb4u: goto label_2cfbb4;
        case 0x2cfbb8u: goto label_2cfbb8;
        case 0x2cfbbcu: goto label_2cfbbc;
        case 0x2cfbc0u: goto label_2cfbc0;
        case 0x2cfbc4u: goto label_2cfbc4;
        case 0x2cfbc8u: goto label_2cfbc8;
        case 0x2cfbccu: goto label_2cfbcc;
        case 0x2cfbd0u: goto label_2cfbd0;
        case 0x2cfbd4u: goto label_2cfbd4;
        case 0x2cfbd8u: goto label_2cfbd8;
        case 0x2cfbdcu: goto label_2cfbdc;
        case 0x2cfbe0u: goto label_2cfbe0;
        case 0x2cfbe4u: goto label_2cfbe4;
        case 0x2cfbe8u: goto label_2cfbe8;
        case 0x2cfbecu: goto label_2cfbec;
        case 0x2cfbf0u: goto label_2cfbf0;
        case 0x2cfbf4u: goto label_2cfbf4;
        case 0x2cfbf8u: goto label_2cfbf8;
        case 0x2cfbfcu: goto label_2cfbfc;
        case 0x2cfc00u: goto label_2cfc00;
        case 0x2cfc04u: goto label_2cfc04;
        case 0x2cfc08u: goto label_2cfc08;
        case 0x2cfc0cu: goto label_2cfc0c;
        case 0x2cfc10u: goto label_2cfc10;
        case 0x2cfc14u: goto label_2cfc14;
        case 0x2cfc18u: goto label_2cfc18;
        case 0x2cfc1cu: goto label_2cfc1c;
        case 0x2cfc20u: goto label_2cfc20;
        case 0x2cfc24u: goto label_2cfc24;
        case 0x2cfc28u: goto label_2cfc28;
        case 0x2cfc2cu: goto label_2cfc2c;
        case 0x2cfc30u: goto label_2cfc30;
        case 0x2cfc34u: goto label_2cfc34;
        case 0x2cfc38u: goto label_2cfc38;
        case 0x2cfc3cu: goto label_2cfc3c;
        default: break;
    }

    ctx->pc = 0x2cfb90u;

label_2cfb90:
    // 0x2cfb90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cfb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2cfb94:
    // 0x2cfb94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cfb94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2cfb98:
    // 0x2cfb98: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cfb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2cfb9c:
    // 0x2cfb9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2cfba0:
    // 0x2cfba0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cfba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2cfba4:
    // 0x2cfba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2cfba8:
    // 0x2cfba8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2cfba8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfbac:
    // 0x2cfbac: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2cfbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2cfbb0:
    // 0x2cfbb0: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x2cfbb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_2cfbb4:
    // 0x2cfbb4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2cfbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2cfbb8:
    // 0x2cfbb8: 0x60f809  jalr        $v1
label_2cfbbc:
    if (ctx->pc == 0x2CFBBCu) {
        ctx->pc = 0x2CFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBB8u;
        // 0x2cfbbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFBC0u;
        goto label_2cfbc0;
    }
    ctx->pc = 0x2CFBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CFBC0u);
        ctx->pc = 0x2CFBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBB8u;
        // 0x2cfbbc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFBB8u, 0x2CFBC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CFBC0u;
label_2cfbc0:
    // 0x2cfbc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2cfbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2cfbc4:
    // 0x2cfbc4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2cfbc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2cfbc8:
    // 0x2cfbc8: 0xa2320284  sb          $s2, 0x284($s1)
    ctx->pc = 0x2cfbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 644), (uint8_t)GPR_U32(ctx, 18));
label_2cfbcc:
    // 0x2cfbcc: 0xc0a40ec  jal         func_2903B0
label_2cfbd0:
    if (ctx->pc == 0x2CFBD0u) {
        ctx->pc = 0x2CFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBCCu;
        // 0x2cfbd0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFBD4u;
        goto label_2cfbd4;
    }
    ctx->pc = 0x2CFBCCu;
    SET_GPR_U32(ctx, 31, 0x2CFBD4u);
    ctx->pc = 0x2CFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBCCu;
    // 0x2cfbd0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2903B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2903B0u, 0x2CFBCCu, 0x2CFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBD4u;
label_2cfbd4:
    // 0x2cfbd4: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_2cfbd8:
    if (ctx->pc == 0x2CFBD8u) {
        ctx->pc = 0x2CFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBD4u;
        // 0x2cfbd8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFBDCu;
        goto label_2cfbdc;
    }
    ctx->pc = 0x2CFBD4u;
    {
        const bool branch_taken_0x2cfbd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfbd4) {
            ctx->pc = 0x2CFBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFBD4u;
            // 0x2cfbd8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC2Cu;
            goto label_2cfc2c;
        }
    }
    ctx->pc = 0x2CFBDCu;
label_2cfbdc:
    // 0x2cfbdc: 0xc0a47b4  jal         func_291ED0
label_2cfbe0:
    if (ctx->pc == 0x2CFBE0u) {
        ctx->pc = 0x2CFBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBDCu;
        // 0x2cfbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFBE4u;
        goto label_2cfbe4;
    }
    ctx->pc = 0x2CFBDCu;
    SET_GPR_U32(ctx, 31, 0x2CFBE4u);
    ctx->pc = 0x2CFBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFBDCu;
    // 0x2cfbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291ED0u, 0x2CFBDCu, 0x2CFBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFBE4u;
label_2cfbe4:
    // 0x2cfbe4: 0x54520011  bnel        $v0, $s2, . + 4 + (0x11 << 2)
label_2cfbe8:
    if (ctx->pc == 0x2CFBE8u) {
        ctx->pc = 0x2CFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFBE4u;
        // 0x2cfbe8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFBECu;
        goto label_2cfbec;
    }
    ctx->pc = 0x2CFBE4u;
    {
        const bool branch_taken_0x2cfbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2cfbe4) {
            ctx->pc = 0x2CFBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFBE4u;
            // 0x2cfbe8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFC2Cu;
            goto label_2cfc2c;
        }
    }
    ctx->pc = 0x2CFBECu;
label_2cfbec:
    // 0x2cfbec: 0x92030036  lbu         $v1, 0x36($s0)
    ctx->pc = 0x2cfbecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
label_2cfbf0:
    // 0x2cfbf0: 0x240400b8  addiu       $a0, $zero, 0xB8
    ctx->pc = 0x2cfbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_2cfbf4:
    // 0x2cfbf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2cfbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2cfbf8:
    // 0x2cfbf8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2cfbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2cfbfc:
    // 0x2cfbfc: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2cfbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2cfc00:
    // 0x2cfc00: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2cfc00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2cfc04:
    // 0x2cfc04: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x2cfc04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2cfc08:
    // 0x2cfc08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cfc08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2cfc0c:
    // 0x2cfc0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2cfc0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2cfc10:
    // 0x2cfc10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cfc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc14:
    // 0x2cfc14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cfc14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc18:
    // 0x2cfc18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cfc18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cfc1c:
    // 0x2cfc1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2cfc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfc20:
    // 0x2cfc20: 0xc088178  jal         func_2205E0
label_2cfc24:
    if (ctx->pc == 0x2CFC24u) {
        ctx->pc = 0x2CFC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC20u;
        // 0x2cfc24: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFC28u;
        goto label_2cfc28;
    }
    ctx->pc = 0x2CFC20u;
    SET_GPR_U32(ctx, 31, 0x2CFC28u);
    ctx->pc = 0x2CFC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFC20u;
    // 0x2cfc24: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2CFC20u, 0x2CFC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFC28u;
label_2cfc28:
    // 0x2cfc28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cfc28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cfc2c:
    // 0x2cfc2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cfc2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2cfc30:
    // 0x2cfc30: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cfc30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cfc34:
    // 0x2cfc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2cfc38:
    // 0x2cfc38: 0x3e00008  jr          $ra
label_2cfc3c:
    if (ctx->pc == 0x2CFC3Cu) {
        ctx->pc = 0x2CFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC38u;
        // 0x2cfc3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CFC40u;
        goto label_fallthrough_0x2cfc38;
    }
    ctx->pc = 0x2CFC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFC38u;
        // 0x2cfc3c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2cfc38:
    ctx->pc = 0x2CFC40u;
}
