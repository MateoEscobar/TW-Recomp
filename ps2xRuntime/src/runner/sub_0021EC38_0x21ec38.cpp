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

// Function: sub_0021EC38
// Address: 0x21ec38 - 0x21ecd0
void sub_0021EC38_0x21ec38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EC38_0x21ec38");
#endif

    switch (ctx->pc) {
        case 0x21ec60u: goto label_21ec60;
        case 0x21ec98u: goto label_21ec98;
        case 0x21ecacu: goto label_21ecac;
        default: break;
    }

    ctx->pc = 0x21ec38u;

    // 0x21ec38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ec3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21ec3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21ec40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21ec40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21ec44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ec44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21ec4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21ec4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21ec50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec54: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x21ec54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x21ec58: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x21EC58u;
    SET_GPR_U32(ctx, 31, 0x21EC60u);
    ctx->pc = 0x21EC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC58u;
    // 0x21ec5c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x21EC58u, 0x21EC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC60u;
label_21ec60:
    // 0x21ec60: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x21EC60u;
    {
        const bool branch_taken_0x21ec60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ec60) {
            ctx->pc = 0x21EC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EC60u;
            // 0x21ec64: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ECBCu;
            goto label_21ecbc;
        }
    }
    ctx->pc = 0x21EC68u;
    // 0x21ec68: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EC68u;
    {
        const bool branch_taken_0x21ec68 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21ec68) {
            ctx->pc = 0x21EC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EC68u;
            // 0x21ec6c: 0x8e020170  lw          $v0, 0x170($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EC80u;
            goto label_21ec80;
        }
    }
    ctx->pc = 0x21EC70u;
    // 0x21ec70: 0x92020194  lbu         $v0, 0x194($s0)
    ctx->pc = 0x21ec70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x21ec74: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x21EC74u;
    {
        const bool branch_taken_0x21ec74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ec74) {
            ctx->pc = 0x21EC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21EC74u;
            // 0x21ec78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21ECBCu;
            goto label_21ecbc;
        }
    }
    ctx->pc = 0x21EC7Cu;
    // 0x21ec7c: 0x8e020170  lw          $v0, 0x170($s0)
    ctx->pc = 0x21ec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_21ec80:
    // 0x21ec80: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x21ec80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21ec84: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EC84u;
    {
        const bool branch_taken_0x21ec84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x21EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC84u;
        // 0x21ec88: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec84) {
            ctx->pc = 0x21EC9Cu;
            goto label_21ec9c;
        }
    }
    ctx->pc = 0x21EC8Cu;
    // 0x21ec8c: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x21ec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
    // 0x21ec90: 0xc088d52  jal         func_223548
    ctx->pc = 0x21EC90u;
    SET_GPR_U32(ctx, 31, 0x21EC98u);
    ctx->pc = 0x21EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC90u;
    // 0x21ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223548u, 0x21EC90u, 0x21EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC98u;
label_21ec98:
    // 0x21ec98: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x21ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_21ec9c:
    // 0x21ec9c: 0x8e050178  lw          $a1, 0x178($s0)
    ctx->pc = 0x21ec9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x21eca0: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x21eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    // 0x21eca4: 0xc0440c6  jal         func_110318
    ctx->pc = 0x21ECA4u;
    SET_GPR_U32(ctx, 31, 0x21ECACu);
    ctx->pc = 0x21ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECA4u;
    // 0x21eca8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x21ECA4u, 0x21ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECACu;
label_21ecac:
    // 0x21ecac: 0xa2110194  sb          $s1, 0x194($s0)
    ctx->pc = 0x21ecacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 404), (uint8_t)GPR_U32(ctx, 17));
    // 0x21ecb0: 0xa2110195  sb          $s1, 0x195($s0)
    ctx->pc = 0x21ecb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 405), (uint8_t)GPR_U32(ctx, 17));
    // 0x21ecb4: 0xae000184  sw          $zero, 0x184($s0)
    ctx->pc = 0x21ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 0));
    // 0x21ecb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21ecb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21ecbc:
    // 0x21ecbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21ecbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ecc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ecc4: 0x3e00008  jr          $ra
    ctx->pc = 0x21ECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECC4u;
        // 0x21ecc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21ECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21ECCCu;
    // 0x21eccc: 0x0  nop
    ctx->pc = 0x21ecccu;
    // NOP
    ctx->pc = 0x21ecd0u;
}
