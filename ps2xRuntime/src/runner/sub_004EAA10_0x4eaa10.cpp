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

// Function: sub_004EAA10
// Address: 0x4eaa10 - 0x4eaa90
void sub_004EAA10_0x4eaa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAA10_0x4eaa10");
#endif

    switch (ctx->pc) {
        case 0x4eaa10u: goto label_4eaa10;
        case 0x4eaa14u: goto label_4eaa14;
        case 0x4eaa18u: goto label_4eaa18;
        case 0x4eaa1cu: goto label_4eaa1c;
        case 0x4eaa20u: goto label_4eaa20;
        case 0x4eaa24u: goto label_4eaa24;
        case 0x4eaa28u: goto label_4eaa28;
        case 0x4eaa2cu: goto label_4eaa2c;
        case 0x4eaa30u: goto label_4eaa30;
        case 0x4eaa34u: goto label_4eaa34;
        case 0x4eaa38u: goto label_4eaa38;
        case 0x4eaa3cu: goto label_4eaa3c;
        case 0x4eaa40u: goto label_4eaa40;
        case 0x4eaa44u: goto label_4eaa44;
        case 0x4eaa48u: goto label_4eaa48;
        case 0x4eaa4cu: goto label_4eaa4c;
        case 0x4eaa50u: goto label_4eaa50;
        case 0x4eaa54u: goto label_4eaa54;
        case 0x4eaa58u: goto label_4eaa58;
        case 0x4eaa5cu: goto label_4eaa5c;
        case 0x4eaa60u: goto label_4eaa60;
        case 0x4eaa64u: goto label_4eaa64;
        case 0x4eaa68u: goto label_4eaa68;
        case 0x4eaa6cu: goto label_4eaa6c;
        case 0x4eaa70u: goto label_4eaa70;
        case 0x4eaa74u: goto label_4eaa74;
        case 0x4eaa78u: goto label_4eaa78;
        case 0x4eaa7cu: goto label_4eaa7c;
        case 0x4eaa80u: goto label_4eaa80;
        case 0x4eaa84u: goto label_4eaa84;
        case 0x4eaa88u: goto label_4eaa88;
        case 0x4eaa8cu: goto label_4eaa8c;
        default: break;
    }

    ctx->pc = 0x4eaa10u;

label_4eaa10:
    // 0x4eaa10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eaa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eaa14:
    // 0x4eaa14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eaa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eaa18:
    // 0x4eaa18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eaa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eaa1c:
    // 0x4eaa1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eaa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eaa20:
    // 0x4eaa20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eaa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eaa24:
    // 0x4eaa24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eaa24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eaa28:
    // 0x4eaa28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eaa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eaa2c:
    // 0x4eaa2c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4eaa30:
    if (ctx->pc == 0x4EAA30u) {
        ctx->pc = 0x4EAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA2Cu;
        // 0x4eaa30: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAA34u;
        goto label_4eaa34;
    }
    ctx->pc = 0x4EAA2Cu;
    {
        const bool branch_taken_0x4eaa2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA2Cu;
        // 0x4eaa30: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eaa2c) {
            ctx->pc = 0x4EAA74u;
            goto label_4eaa74;
        }
    }
    ctx->pc = 0x4EAA34u;
label_4eaa34:
    // 0x4eaa34: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4eaa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4eaa38:
    // 0x4eaa38: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4eaa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4eaa3c:
    // 0x4eaa3c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4eaa3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4eaa40:
    // 0x4eaa40: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4eaa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4eaa44:
    // 0x4eaa44: 0x60f809  jalr        $v1
label_4eaa48:
    if (ctx->pc == 0x4EAA48u) {
        ctx->pc = 0x4EAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA44u;
        // 0x4eaa48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAA4Cu;
        goto label_4eaa4c;
    }
    ctx->pc = 0x4EAA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAA4Cu);
        ctx->pc = 0x4EAA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA44u;
        // 0x4eaa48: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAA44u, 0x4EAA4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAA4Cu;
label_4eaa4c:
    // 0x4eaa4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eaa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eaa50:
    // 0x4eaa50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eaa50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eaa54:
    // 0x4eaa54: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eaa54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eaa58:
    // 0x4eaa58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eaa58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eaa5c:
    // 0x4eaa5c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eaa5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eaa60:
    // 0x4eaa60: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eaa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eaa64:
    // 0x4eaa64: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eaa64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eaa68:
    // 0x4eaa68: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eaa68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eaa6c:
    // 0x4eaa6c: 0x60f809  jalr        $v1
label_4eaa70:
    if (ctx->pc == 0x4EAA70u) {
        ctx->pc = 0x4EAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA6Cu;
        // 0x4eaa70: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAA74u;
        goto label_4eaa74;
    }
    ctx->pc = 0x4EAA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAA74u);
        ctx->pc = 0x4EAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA6Cu;
        // 0x4eaa70: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAA6Cu, 0x4EAA74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAA74u;
label_4eaa74:
    // 0x4eaa74: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eaa74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eaa78:
    // 0x4eaa78: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4eaa78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eaa7c:
    // 0x4eaa7c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4eaa7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eaa80:
    // 0x4eaa80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eaa80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eaa84:
    // 0x4eaa84: 0x3e00008  jr          $ra
label_4eaa88:
    if (ctx->pc == 0x4EAA88u) {
        ctx->pc = 0x4EAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA84u;
        // 0x4eaa88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAA8Cu;
        goto label_4eaa8c;
    }
    ctx->pc = 0x4EAA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAA84u;
        // 0x4eaa88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EAA8Cu;
label_4eaa8c:
    // 0x4eaa8c: 0x0  nop
    ctx->pc = 0x4eaa8cu;
    // NOP
    ctx->pc = 0x4eaa90u;
}
