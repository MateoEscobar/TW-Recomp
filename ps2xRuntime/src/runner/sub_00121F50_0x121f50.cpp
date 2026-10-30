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

// Function: sub_00121F50
// Address: 0x121f50 - 0x121fd8
void sub_00121F50_0x121f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121F50_0x121f50");
#endif

    switch (ctx->pc) {
        case 0x121f50u: goto label_121f50;
        case 0x121f54u: goto label_121f54;
        case 0x121f58u: goto label_121f58;
        case 0x121f5cu: goto label_121f5c;
        case 0x121f60u: goto label_121f60;
        case 0x121f64u: goto label_121f64;
        case 0x121f68u: goto label_121f68;
        case 0x121f6cu: goto label_121f6c;
        case 0x121f70u: goto label_121f70;
        case 0x121f74u: goto label_121f74;
        case 0x121f78u: goto label_121f78;
        case 0x121f7cu: goto label_121f7c;
        case 0x121f80u: goto label_121f80;
        case 0x121f84u: goto label_121f84;
        case 0x121f88u: goto label_121f88;
        case 0x121f8cu: goto label_121f8c;
        case 0x121f90u: goto label_121f90;
        case 0x121f94u: goto label_121f94;
        case 0x121f98u: goto label_121f98;
        case 0x121f9cu: goto label_121f9c;
        case 0x121fa0u: goto label_121fa0;
        case 0x121fa4u: goto label_121fa4;
        case 0x121fa8u: goto label_121fa8;
        case 0x121facu: goto label_121fac;
        case 0x121fb0u: goto label_121fb0;
        case 0x121fb4u: goto label_121fb4;
        case 0x121fb8u: goto label_121fb8;
        case 0x121fbcu: goto label_121fbc;
        case 0x121fc0u: goto label_121fc0;
        case 0x121fc4u: goto label_121fc4;
        case 0x121fc8u: goto label_121fc8;
        case 0x121fccu: goto label_121fcc;
        case 0x121fd0u: goto label_121fd0;
        case 0x121fd4u: goto label_121fd4;
        default: break;
    }

    ctx->pc = 0x121f50u;

label_121f50:
    // 0x121f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x121f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_121f54:
    // 0x121f54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x121f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_121f58:
    // 0x121f58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x121f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_121f5c:
    // 0x121f5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_121f60:
    // 0x121f60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_121f64:
    // 0x121f64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x121f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121f68:
    // 0x121f68: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x121f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_121f6c:
    // 0x121f6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_121f70:
    // 0x121f70: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x121f70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_121f74:
    // 0x121f74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x121f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121f78:
    // 0x121f78: 0x86260168  lh          $a2, 0x168($s1)
    ctx->pc = 0x121f78u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 360)));
label_121f7c:
    // 0x121f7c: 0x84450060  lh          $a1, 0x60($v0)
    ctx->pc = 0x121f7cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_121f80:
    // 0x121f80: 0x26310168  addiu       $s1, $s1, 0x168
    ctx->pc = 0x121f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
label_121f84:
    // 0x121f84: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x121f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_121f88:
    // 0x121f88: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x121f88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_121f8c:
    // 0x121f8c: 0x60f809  jalr        $v1
label_121f90:
    if (ctx->pc == 0x121F90u) {
        ctx->pc = 0x121F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F8Cu;
        // 0x121f90: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F94u;
        goto label_121f94;
    }
    ctx->pc = 0x121F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121F94u);
        ctx->pc = 0x121F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F8Cu;
        // 0x121f90: 0x2052821  addu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121F8Cu, 0x121F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121F94u;
label_121f94:
    // 0x121f94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x121f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_121f98:
    // 0x121f98: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x121f98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_121f9c:
    // 0x121f9c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x121f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_121fa0:
    // 0x121fa0: 0x60f809  jalr        $v1
label_121fa4:
    if (ctx->pc == 0x121FA4u) {
        ctx->pc = 0x121FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FA0u;
        // 0x121fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FA8u;
        goto label_121fa8;
    }
    ctx->pc = 0x121FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121FA8u);
        ctx->pc = 0x121FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FA0u;
        // 0x121fa4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121FA0u, 0x121FA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121FA8u;
label_121fa8:
    // 0x121fa8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x121fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_121fac:
    // 0x121fac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x121facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_121fb0:
    // 0x121fb0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x121fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_121fb4:
    // 0x121fb4: 0x40f809  jalr        $v0
label_121fb8:
    if (ctx->pc == 0x121FB8u) {
        ctx->pc = 0x121FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FB4u;
        // 0x121fb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FBCu;
        goto label_121fbc;
    }
    ctx->pc = 0x121FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121FBCu);
        ctx->pc = 0x121FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FB4u;
        // 0x121fb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121FB4u, 0x121FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121FBCu;
label_121fbc:
    // 0x121fbc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x121fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_121fc0:
    // 0x121fc0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x121fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121fc4:
    // 0x121fc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_121fc8:
    // 0x121fc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_121fcc:
    // 0x121fcc: 0x3e00008  jr          $ra
label_121fd0:
    if (ctx->pc == 0x121FD0u) {
        ctx->pc = 0x121FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FCCu;
        // 0x121fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121FD4u;
        goto label_121fd4;
    }
    ctx->pc = 0x121FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121FCCu;
        // 0x121fd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121FD4u;
label_121fd4:
    // 0x121fd4: 0x0  nop
    ctx->pc = 0x121fd4u;
    // NOP
    ctx->pc = 0x121fd8u;
}
