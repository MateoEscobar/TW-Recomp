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

// Function: sub_0026CB98
// Address: 0x26cb98 - 0x26cc18
void sub_0026CB98_0x26cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CB98_0x26cb98");
#endif

    switch (ctx->pc) {
        case 0x26cb98u: goto label_26cb98;
        case 0x26cb9cu: goto label_26cb9c;
        case 0x26cba0u: goto label_26cba0;
        case 0x26cba4u: goto label_26cba4;
        case 0x26cba8u: goto label_26cba8;
        case 0x26cbacu: goto label_26cbac;
        case 0x26cbb0u: goto label_26cbb0;
        case 0x26cbb4u: goto label_26cbb4;
        case 0x26cbb8u: goto label_26cbb8;
        case 0x26cbbcu: goto label_26cbbc;
        case 0x26cbc0u: goto label_26cbc0;
        case 0x26cbc4u: goto label_26cbc4;
        case 0x26cbc8u: goto label_26cbc8;
        case 0x26cbccu: goto label_26cbcc;
        case 0x26cbd0u: goto label_26cbd0;
        case 0x26cbd4u: goto label_26cbd4;
        case 0x26cbd8u: goto label_26cbd8;
        case 0x26cbdcu: goto label_26cbdc;
        case 0x26cbe0u: goto label_26cbe0;
        case 0x26cbe4u: goto label_26cbe4;
        case 0x26cbe8u: goto label_26cbe8;
        case 0x26cbecu: goto label_26cbec;
        case 0x26cbf0u: goto label_26cbf0;
        case 0x26cbf4u: goto label_26cbf4;
        case 0x26cbf8u: goto label_26cbf8;
        case 0x26cbfcu: goto label_26cbfc;
        case 0x26cc00u: goto label_26cc00;
        case 0x26cc04u: goto label_26cc04;
        case 0x26cc08u: goto label_26cc08;
        case 0x26cc0cu: goto label_26cc0c;
        case 0x26cc10u: goto label_26cc10;
        case 0x26cc14u: goto label_26cc14;
        default: break;
    }

    ctx->pc = 0x26cb98u;

label_26cb98:
    // 0x26cb98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26cb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26cb9c:
    // 0x26cb9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26cb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26cba0:
    // 0x26cba0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26cba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26cba4:
    // 0x26cba4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26cba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_26cba8:
    // 0x26cba8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x26cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26cbac:
    // 0x26cbac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_26cbb0:
    // 0x26cbb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26cbb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26cbb4:
    // 0x26cbb4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26cbb8:
    // 0x26cbb8: 0x844400e0  lh          $a0, 0xE0($v0)
    ctx->pc = 0x26cbb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_26cbbc:
    // 0x26cbbc: 0x8c4600e4  lw          $a2, 0xE4($v0)
    ctx->pc = 0x26cbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
label_26cbc0:
    // 0x26cbc0: 0xc0f809  jalr        $a2
label_26cbc4:
    if (ctx->pc == 0x26CBC4u) {
        ctx->pc = 0x26CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBC0u;
        // 0x26cbc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBC8u;
        goto label_26cbc8;
    }
    ctx->pc = 0x26CBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x26CBC8u);
        ctx->pc = 0x26CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBC0u;
        // 0x26cbc4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CBC0u, 0x26CBC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CBC8u;
label_26cbc8:
    // 0x26cbc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26cbcc:
    // 0x26cbcc: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x26cbccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26cbd0:
    // 0x26cbd0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_26cbd4:
    // 0x26cbd4: 0x40f809  jalr        $v0
label_26cbd8:
    if (ctx->pc == 0x26CBD8u) {
        ctx->pc = 0x26CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBD4u;
        // 0x26cbd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBDCu;
        goto label_26cbdc;
    }
    ctx->pc = 0x26CBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CBDCu);
        ctx->pc = 0x26CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBD4u;
        // 0x26cbd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CBD4u, 0x26CBDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CBDCu;
label_26cbdc:
    // 0x26cbdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_26cbe0:
    if (ctx->pc == 0x26CBE0u) {
        ctx->pc = 0x26CBE4u;
        goto label_26cbe4;
    }
    ctx->pc = 0x26CBDCu;
    {
        const bool branch_taken_0x26cbdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26cbdc) {
            ctx->pc = 0x26CBFCu;
            goto label_26cbfc;
        }
    }
    ctx->pc = 0x26CBE4u;
label_26cbe4:
    // 0x26cbe4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x26cbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_26cbe8:
    // 0x26cbe8: 0x846400f0  lh          $a0, 0xF0($v1)
    ctx->pc = 0x26cbe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 240)));
label_26cbec:
    // 0x26cbec: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x26cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
label_26cbf0:
    // 0x26cbf0: 0x40f809  jalr        $v0
label_26cbf4:
    if (ctx->pc == 0x26CBF4u) {
        ctx->pc = 0x26CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBF0u;
        // 0x26cbf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBF8u;
        goto label_26cbf8;
    }
    ctx->pc = 0x26CBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26CBF8u);
        ctx->pc = 0x26CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBF0u;
        // 0x26cbf4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CBF0u, 0x26CBF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26CBF8u;
label_26cbf8:
    // 0x26cbf8: 0xa440003c  sh          $zero, 0x3C($v0)
    ctx->pc = 0x26cbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 60), (uint16_t)GPR_U32(ctx, 0));
label_26cbfc:
    // 0x26cbfc: 0xc089a80  jal         func_226A00
label_26cc00:
    if (ctx->pc == 0x26CC00u) {
        ctx->pc = 0x26CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBFCu;
        // 0x26cc00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC04u;
        goto label_26cc04;
    }
    ctx->pc = 0x26CBFCu;
    SET_GPR_U32(ctx, 31, 0x26CC04u);
    ctx->pc = 0x26CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CBFCu;
    // 0x26cc00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A00u, 0x26CBFCu, 0x26CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC04u;
label_26cc04:
    // 0x26cc04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26cc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_26cc08:
    // 0x26cc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26cc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26cc0c:
    // 0x26cc0c: 0x3e00008  jr          $ra
label_26cc10:
    if (ctx->pc == 0x26CC10u) {
        ctx->pc = 0x26CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC0Cu;
        // 0x26cc10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC14u;
        goto label_26cc14;
    }
    ctx->pc = 0x26CC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC0Cu;
        // 0x26cc10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26CC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26CC14u;
label_26cc14:
    // 0x26cc14: 0x0  nop
    ctx->pc = 0x26cc14u;
    // NOP
    ctx->pc = 0x26cc18u;
}
