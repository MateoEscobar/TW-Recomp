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

// Function: sub_002B9E90
// Address: 0x2b9e90 - 0x2b9fb0
void sub_002B9E90_0x2b9e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9E90_0x2b9e90");
#endif

    switch (ctx->pc) {
        case 0x2b9e90u: goto label_2b9e90;
        case 0x2b9e94u: goto label_2b9e94;
        case 0x2b9e98u: goto label_2b9e98;
        case 0x2b9e9cu: goto label_2b9e9c;
        case 0x2b9ea0u: goto label_2b9ea0;
        case 0x2b9ea4u: goto label_2b9ea4;
        case 0x2b9ea8u: goto label_2b9ea8;
        case 0x2b9eacu: goto label_2b9eac;
        case 0x2b9eb0u: goto label_2b9eb0;
        case 0x2b9eb4u: goto label_2b9eb4;
        case 0x2b9eb8u: goto label_2b9eb8;
        case 0x2b9ebcu: goto label_2b9ebc;
        case 0x2b9ec0u: goto label_2b9ec0;
        case 0x2b9ec4u: goto label_2b9ec4;
        case 0x2b9ec8u: goto label_2b9ec8;
        case 0x2b9eccu: goto label_2b9ecc;
        case 0x2b9ed0u: goto label_2b9ed0;
        case 0x2b9ed4u: goto label_2b9ed4;
        case 0x2b9ed8u: goto label_2b9ed8;
        case 0x2b9edcu: goto label_2b9edc;
        case 0x2b9ee0u: goto label_2b9ee0;
        case 0x2b9ee4u: goto label_2b9ee4;
        case 0x2b9ee8u: goto label_2b9ee8;
        case 0x2b9eecu: goto label_2b9eec;
        case 0x2b9ef0u: goto label_2b9ef0;
        case 0x2b9ef4u: goto label_2b9ef4;
        case 0x2b9ef8u: goto label_2b9ef8;
        case 0x2b9efcu: goto label_2b9efc;
        case 0x2b9f00u: goto label_2b9f00;
        case 0x2b9f04u: goto label_2b9f04;
        case 0x2b9f08u: goto label_2b9f08;
        case 0x2b9f0cu: goto label_2b9f0c;
        case 0x2b9f10u: goto label_2b9f10;
        case 0x2b9f14u: goto label_2b9f14;
        case 0x2b9f18u: goto label_2b9f18;
        case 0x2b9f1cu: goto label_2b9f1c;
        case 0x2b9f20u: goto label_2b9f20;
        case 0x2b9f24u: goto label_2b9f24;
        case 0x2b9f28u: goto label_2b9f28;
        case 0x2b9f2cu: goto label_2b9f2c;
        case 0x2b9f30u: goto label_2b9f30;
        case 0x2b9f34u: goto label_2b9f34;
        case 0x2b9f38u: goto label_2b9f38;
        case 0x2b9f3cu: goto label_2b9f3c;
        case 0x2b9f40u: goto label_2b9f40;
        case 0x2b9f44u: goto label_2b9f44;
        case 0x2b9f48u: goto label_2b9f48;
        case 0x2b9f4cu: goto label_2b9f4c;
        case 0x2b9f50u: goto label_2b9f50;
        case 0x2b9f54u: goto label_2b9f54;
        case 0x2b9f58u: goto label_2b9f58;
        case 0x2b9f5cu: goto label_2b9f5c;
        case 0x2b9f60u: goto label_2b9f60;
        case 0x2b9f64u: goto label_2b9f64;
        case 0x2b9f68u: goto label_2b9f68;
        case 0x2b9f6cu: goto label_2b9f6c;
        case 0x2b9f70u: goto label_2b9f70;
        case 0x2b9f74u: goto label_2b9f74;
        case 0x2b9f78u: goto label_2b9f78;
        case 0x2b9f7cu: goto label_2b9f7c;
        case 0x2b9f80u: goto label_2b9f80;
        case 0x2b9f84u: goto label_2b9f84;
        case 0x2b9f88u: goto label_2b9f88;
        case 0x2b9f8cu: goto label_2b9f8c;
        case 0x2b9f90u: goto label_2b9f90;
        case 0x2b9f94u: goto label_2b9f94;
        case 0x2b9f98u: goto label_2b9f98;
        case 0x2b9f9cu: goto label_2b9f9c;
        case 0x2b9fa0u: goto label_2b9fa0;
        case 0x2b9fa4u: goto label_2b9fa4;
        case 0x2b9fa8u: goto label_2b9fa8;
        case 0x2b9facu: goto label_2b9fac;
        default: break;
    }

    ctx->pc = 0x2b9e90u;

label_2b9e90:
    // 0x2b9e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b9e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b9e94:
    // 0x2b9e94: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b9e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2b9e98:
    // 0x2b9e98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b9e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2b9e9c:
    // 0x2b9e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ea0:
    // 0x2b9ea0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b9ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_2b9ea4:
    // 0x2b9ea4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b9ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9ea8:
    // 0x2b9ea8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b9ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2b9eac:
    // 0x2b9eac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2b9eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b9eb0:
    // 0x2b9eb0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b9eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_2b9eb4:
    // 0x2b9eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9eb8:
    // 0x2b9eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b9eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2b9ebc:
    // 0x2b9ebc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b9ec0:
    // 0x2b9ec0: 0xc087502  jal         func_21D408
label_2b9ec4:
    if (ctx->pc == 0x2B9EC4u) {
        ctx->pc = 0x2B9EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EC0u;
        // 0x2b9ec4: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EC8u;
        goto label_2b9ec8;
    }
    ctx->pc = 0x2B9EC0u;
    SET_GPR_U32(ctx, 31, 0x2B9EC8u);
    ctx->pc = 0x2B9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9EC0u;
    // 0x2b9ec4: 0x8c540000  lw          $s4, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B9EC0u, 0x2B9EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9EC8u;
label_2b9ec8:
    // 0x2b9ec8: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x2b9ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_2b9ecc:
    // 0x2b9ecc: 0x8c650040  lw          $a1, 0x40($v1)
    ctx->pc = 0x2b9eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2b9ed0:
    // 0x2b9ed0: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
label_2b9ed4:
    if (ctx->pc == 0x2B9ED4u) {
        ctx->pc = 0x2B9ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9ED0u;
        // 0x2b9ed4: 0x86420092  lh          $v0, 0x92($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9ED8u;
        goto label_2b9ed8;
    }
    ctx->pc = 0x2B9ED0u;
    {
        const bool branch_taken_0x2b9ed0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9ed0) {
            ctx->pc = 0x2B9ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9ED0u;
            // 0x2b9ed4: 0x86420092  lh          $v0, 0x92($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9EFCu;
            goto label_2b9efc;
        }
    }
    ctx->pc = 0x2B9ED8u;
label_2b9ed8:
    // 0x2b9ed8: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x2b9ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2b9edc:
    // 0x2b9edc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x2b9edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2b9ee0:
    // 0x2b9ee0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2b9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_2b9ee4:
    // 0x2b9ee4: 0x40f809  jalr        $v0
label_2b9ee8:
    if (ctx->pc == 0x2B9EE8u) {
        ctx->pc = 0x2B9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EE4u;
        // 0x2b9ee8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EECu;
        goto label_2b9eec;
    }
    ctx->pc = 0x2B9EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9EECu);
        ctx->pc = 0x2B9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EE4u;
        // 0x2b9ee8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9EE4u, 0x2B9EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9EECu;
label_2b9eec:
    // 0x2b9eec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2b9eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2b9ef0:
    // 0x2b9ef0: 0x10430025  beq         $v0, $v1, . + 4 + (0x25 << 2)
label_2b9ef4:
    if (ctx->pc == 0x2B9EF4u) {
        ctx->pc = 0x2B9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EF0u;
        // 0x2b9ef4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EF8u;
        goto label_2b9ef8;
    }
    ctx->pc = 0x2B9EF0u;
    {
        const bool branch_taken_0x2b9ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EF0u;
        // 0x2b9ef4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ef0) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9EF8u;
label_2b9ef8:
    // 0x2b9ef8: 0x86420092  lh          $v0, 0x92($s2)
    ctx->pc = 0x2b9ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_2b9efc:
    // 0x2b9efc: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2b9efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
label_2b9f00:
    // 0x2b9f00: 0x86830092  lh          $v1, 0x92($s4)
    ctx->pc = 0x2b9f00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 146)));
label_2b9f04:
    // 0x2b9f04: 0x24844b00  addiu       $a0, $a0, 0x4B00
    ctx->pc = 0x2b9f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19200));
label_2b9f08:
    // 0x2b9f08: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b9f0c:
    // 0x2b9f0c: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x2b9f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2b9f10:
    // 0x2b9f10: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2b9f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2b9f14:
    // 0x2b9f14: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2b9f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2b9f18:
    // 0x2b9f18: 0xc0cdb38  jal         func_336CE0
label_2b9f1c:
    if (ctx->pc == 0x2B9F1Cu) {
        ctx->pc = 0x2B9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F18u;
        // 0x2b9f1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F20u;
        goto label_2b9f20;
    }
    ctx->pc = 0x2B9F18u;
    SET_GPR_U32(ctx, 31, 0x2B9F20u);
    ctx->pc = 0x2B9F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F18u;
    // 0x2b9f1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B9F18u, 0x2B9F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F20u;
label_2b9f20:
    // 0x2b9f20: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x2b9f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_2b9f24:
    // 0x2b9f24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b9f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2b9f28:
    // 0x2b9f28: 0x0  nop
    ctx->pc = 0x2b9f28u;
    // NOP
label_2b9f2c:
    // 0x2b9f2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b9f30:
    // 0x2b9f30: 0x0  nop
    ctx->pc = 0x2b9f30u;
    // NOP
label_2b9f34:
    // 0x2b9f34: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_2b9f38:
    if (ctx->pc == 0x2B9F38u) {
        ctx->pc = 0x2B9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F34u;
        // 0x2b9f38: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F3Cu;
        goto label_2b9f3c;
    }
    ctx->pc = 0x2B9F34u;
    {
        const bool branch_taken_0x2b9f34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F34u;
        // 0x2b9f38: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f34) {
            ctx->pc = 0x2B9F88u;
            goto label_2b9f88;
        }
    }
    ctx->pc = 0x2B9F3Cu;
label_2b9f3c:
    // 0x2b9f3c: 0x92030054  lbu         $v1, 0x54($s0)
    ctx->pc = 0x2b9f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 84)));
label_2b9f40:
    // 0x2b9f40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9f44:
    // 0x2b9f44: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
label_2b9f48:
    if (ctx->pc == 0x2B9F48u) {
        ctx->pc = 0x2B9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F44u;
        // 0x2b9f48: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F4Cu;
        goto label_2b9f4c;
    }
    ctx->pc = 0x2B9F44u;
    {
        const bool branch_taken_0x2b9f44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9f44) {
            ctx->pc = 0x2B9F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9F44u;
            // 0x2b9f48: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9F94u;
            goto label_2b9f94;
        }
    }
    ctx->pc = 0x2B9F4Cu;
label_2b9f4c:
    // 0x2b9f4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f50:
    // 0x2b9f50: 0xc0cdb38  jal         func_336CE0
label_2b9f54:
    if (ctx->pc == 0x2B9F54u) {
        ctx->pc = 0x2B9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F50u;
        // 0x2b9f54: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F58u;
        goto label_2b9f58;
    }
    ctx->pc = 0x2B9F50u;
    SET_GPR_U32(ctx, 31, 0x2B9F58u);
    ctx->pc = 0x2B9F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F50u;
    // 0x2b9f54: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B9F50u, 0x2B9F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F58u;
label_2b9f58:
    // 0x2b9f58: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2b9f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b9f5c:
    // 0x2b9f5c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b9f5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2b9f60:
    // 0x2b9f60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b9f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b9f64:
    // 0x2b9f64: 0x0  nop
    ctx->pc = 0x2b9f64u;
    // NOP
label_2b9f68:
    // 0x2b9f68: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_2b9f6c:
    if (ctx->pc == 0x2B9F6Cu) {
        ctx->pc = 0x2B9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F68u;
        // 0x2b9f6c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F70u;
        goto label_2b9f70;
    }
    ctx->pc = 0x2B9F68u;
    {
        const bool branch_taken_0x2b9f68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F68u;
        // 0x2b9f6c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f68) {
            ctx->pc = 0x2B9F94u;
            goto label_2b9f94;
        }
    }
    ctx->pc = 0x2B9F70u;
label_2b9f70:
    // 0x2b9f70: 0xc087502  jal         func_21D408
label_2b9f74:
    if (ctx->pc == 0x2B9F74u) {
        ctx->pc = 0x2B9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F70u;
        // 0x2b9f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F78u;
        goto label_2b9f78;
    }
    ctx->pc = 0x2B9F70u;
    SET_GPR_U32(ctx, 31, 0x2B9F78u);
    ctx->pc = 0x2B9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F70u;
    // 0x2b9f74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B9F70u, 0x2B9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F78u;
label_2b9f78:
    // 0x2b9f78: 0xc0e409a  jal         func_390268
label_2b9f7c:
    if (ctx->pc == 0x2B9F7Cu) {
        ctx->pc = 0x2B9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F78u;
        // 0x2b9f7c: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F80u;
        goto label_2b9f80;
    }
    ctx->pc = 0x2B9F78u;
    SET_GPR_U32(ctx, 31, 0x2B9F80u);
    ctx->pc = 0x2B9F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F78u;
    // 0x2b9f7c: 0x24440124  addiu       $a0, $v0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B9F78u, 0x2B9F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F80u;
label_2b9f80:
    // 0x2b9f80: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
label_2b9f84:
    if (ctx->pc == 0x2B9F84u) {
        ctx->pc = 0x2B9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F80u;
        // 0x2b9f84: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F88u;
        goto label_2b9f88;
    }
    ctx->pc = 0x2B9F80u;
    {
        const bool branch_taken_0x2b9f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2B9F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F80u;
        // 0x2b9f84: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f80) {
            ctx->pc = 0x2B9F90u;
            goto label_2b9f90;
        }
    }
    ctx->pc = 0x2B9F88u;
label_2b9f88:
    // 0x2b9f88: 0x8c4319e8  lw          $v1, 0x19E8($v0)
    ctx->pc = 0x2b9f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6632)));
label_2b9f8c:
    // 0x2b9f8c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2b9f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_2b9f90:
    // 0x2b9f90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b9f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9f94:
    // 0x2b9f94: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b9f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b9f98:
    // 0x2b9f98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b9f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b9f9c:
    // 0x2b9f9c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b9f9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b9fa0:
    // 0x2b9fa0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b9fa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9fa4:
    // 0x2b9fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b9fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9fa8:
    // 0x2b9fa8: 0x3e00008  jr          $ra
label_2b9fac:
    if (ctx->pc == 0x2B9FACu) {
        ctx->pc = 0x2B9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA8u;
        // 0x2b9fac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FB0u;
        goto label_fallthrough_0x2b9fa8;
    }
    ctx->pc = 0x2B9FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA8u;
        // 0x2b9fac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b9fa8:
    ctx->pc = 0x2B9FB0u;
}
