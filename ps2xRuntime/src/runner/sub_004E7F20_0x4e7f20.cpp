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

// Function: sub_004E7F20
// Address: 0x4e7f20 - 0x4e7fa0
void sub_004E7F20_0x4e7f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E7F20_0x4e7f20");
#endif

    switch (ctx->pc) {
        case 0x4e7f20u: goto label_4e7f20;
        case 0x4e7f24u: goto label_4e7f24;
        case 0x4e7f28u: goto label_4e7f28;
        case 0x4e7f2cu: goto label_4e7f2c;
        case 0x4e7f30u: goto label_4e7f30;
        case 0x4e7f34u: goto label_4e7f34;
        case 0x4e7f38u: goto label_4e7f38;
        case 0x4e7f3cu: goto label_4e7f3c;
        case 0x4e7f40u: goto label_4e7f40;
        case 0x4e7f44u: goto label_4e7f44;
        case 0x4e7f48u: goto label_4e7f48;
        case 0x4e7f4cu: goto label_4e7f4c;
        case 0x4e7f50u: goto label_4e7f50;
        case 0x4e7f54u: goto label_4e7f54;
        case 0x4e7f58u: goto label_4e7f58;
        case 0x4e7f5cu: goto label_4e7f5c;
        case 0x4e7f60u: goto label_4e7f60;
        case 0x4e7f64u: goto label_4e7f64;
        case 0x4e7f68u: goto label_4e7f68;
        case 0x4e7f6cu: goto label_4e7f6c;
        case 0x4e7f70u: goto label_4e7f70;
        case 0x4e7f74u: goto label_4e7f74;
        case 0x4e7f78u: goto label_4e7f78;
        case 0x4e7f7cu: goto label_4e7f7c;
        case 0x4e7f80u: goto label_4e7f80;
        case 0x4e7f84u: goto label_4e7f84;
        case 0x4e7f88u: goto label_4e7f88;
        case 0x4e7f8cu: goto label_4e7f8c;
        case 0x4e7f90u: goto label_4e7f90;
        case 0x4e7f94u: goto label_4e7f94;
        case 0x4e7f98u: goto label_4e7f98;
        case 0x4e7f9cu: goto label_4e7f9c;
        default: break;
    }

    ctx->pc = 0x4e7f20u;

label_4e7f20:
    // 0x4e7f20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e7f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e7f24:
    // 0x4e7f24: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e7f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e7f28:
    // 0x4e7f28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e7f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e7f2c:
    // 0x4e7f2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e7f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e7f30:
    // 0x4e7f30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e7f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e7f34:
    // 0x4e7f34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e7f34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e7f38:
    // 0x4e7f38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e7f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e7f3c:
    // 0x4e7f3c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e7f40:
    if (ctx->pc == 0x4E7F40u) {
        ctx->pc = 0x4E7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7F3Cu;
        // 0x4e7f40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7F44u;
        goto label_4e7f44;
    }
    ctx->pc = 0x4E7F3Cu;
    {
        const bool branch_taken_0x4e7f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E7F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7F3Cu;
        // 0x4e7f40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e7f3c) {
            ctx->pc = 0x4E7F84u;
            goto label_4e7f84;
        }
    }
    ctx->pc = 0x4E7F44u;
label_4e7f44:
    // 0x4e7f44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e7f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e7f48:
    // 0x4e7f48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e7f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e7f4c:
    // 0x4e7f4c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e7f4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e7f50:
    // 0x4e7f50: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e7f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e7f54:
    // 0x4e7f54: 0x60f809  jalr        $v1
label_4e7f58:
    if (ctx->pc == 0x4E7F58u) {
        ctx->pc = 0x4E7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7F54u;
        // 0x4e7f58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7F5Cu;
        goto label_4e7f5c;
    }
    ctx->pc = 0x4E7F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7F5Cu);
        ctx->pc = 0x4E7F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7F54u;
        // 0x4e7f58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7F54u, 0x4E7F5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7F5Cu;
label_4e7f5c:
    // 0x4e7f5c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e7f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e7f60:
    // 0x4e7f60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e7f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e7f64:
    // 0x4e7f64: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e7f64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e7f68:
    // 0x4e7f68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e7f68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e7f6c:
    // 0x4e7f6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e7f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e7f70:
    // 0x4e7f70: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e7f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e7f74:
    // 0x4e7f74: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e7f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e7f78:
    // 0x4e7f78: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e7f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e7f7c:
    // 0x4e7f7c: 0x60f809  jalr        $v1
label_4e7f80:
    if (ctx->pc == 0x4E7F80u) {
        ctx->pc = 0x4E7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7F7Cu;
        // 0x4e7f80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7F84u;
        goto label_4e7f84;
    }
    ctx->pc = 0x4E7F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E7F84u);
        ctx->pc = 0x4E7F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7F7Cu;
        // 0x4e7f80: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7F7Cu, 0x4E7F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E7F84u;
label_4e7f84:
    // 0x4e7f84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e7f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e7f88:
    // 0x4e7f88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e7f88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e7f8c:
    // 0x4e7f8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e7f8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e7f90:
    // 0x4e7f90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e7f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e7f94:
    // 0x4e7f94: 0x3e00008  jr          $ra
label_4e7f98:
    if (ctx->pc == 0x4E7F98u) {
        ctx->pc = 0x4E7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7F94u;
        // 0x4e7f98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E7F9Cu;
        goto label_4e7f9c;
    }
    ctx->pc = 0x4E7F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E7F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E7F94u;
        // 0x4e7f98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E7F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E7F9Cu;
label_4e7f9c:
    // 0x4e7f9c: 0x0  nop
    ctx->pc = 0x4e7f9cu;
    // NOP
    ctx->pc = 0x4e7fa0u;
}
