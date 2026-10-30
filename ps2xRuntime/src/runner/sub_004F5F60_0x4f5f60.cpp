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

// Function: sub_004F5F60
// Address: 0x4f5f60 - 0x4f5fc0
void sub_004F5F60_0x4f5f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5F60_0x4f5f60");
#endif

    switch (ctx->pc) {
        case 0x4f5f60u: goto label_4f5f60;
        case 0x4f5f64u: goto label_4f5f64;
        case 0x4f5f68u: goto label_4f5f68;
        case 0x4f5f6cu: goto label_4f5f6c;
        case 0x4f5f70u: goto label_4f5f70;
        case 0x4f5f74u: goto label_4f5f74;
        case 0x4f5f78u: goto label_4f5f78;
        case 0x4f5f7cu: goto label_4f5f7c;
        case 0x4f5f80u: goto label_4f5f80;
        case 0x4f5f84u: goto label_4f5f84;
        case 0x4f5f88u: goto label_4f5f88;
        case 0x4f5f8cu: goto label_4f5f8c;
        case 0x4f5f90u: goto label_4f5f90;
        case 0x4f5f94u: goto label_4f5f94;
        case 0x4f5f98u: goto label_4f5f98;
        case 0x4f5f9cu: goto label_4f5f9c;
        case 0x4f5fa0u: goto label_4f5fa0;
        case 0x4f5fa4u: goto label_4f5fa4;
        case 0x4f5fa8u: goto label_4f5fa8;
        case 0x4f5facu: goto label_4f5fac;
        case 0x4f5fb0u: goto label_4f5fb0;
        case 0x4f5fb4u: goto label_4f5fb4;
        case 0x4f5fb8u: goto label_4f5fb8;
        case 0x4f5fbcu: goto label_4f5fbc;
        default: break;
    }

    ctx->pc = 0x4f5f60u;

label_4f5f60:
    // 0x4f5f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4f5f64:
    // 0x4f5f64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4f5f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4f5f68:
    // 0x4f5f68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5f68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f5f6c:
    // 0x4f5f6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f5f70:
    // 0x4f5f70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4f5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4f5f74:
    // 0x4f5f74: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x4f5f74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_4f5f78:
    // 0x4f5f78: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x4f5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4f5f7c:
    // 0x4f5f7c: 0x40f809  jalr        $v0
label_4f5f80:
    if (ctx->pc == 0x4F5F80u) {
        ctx->pc = 0x4F5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F7Cu;
        // 0x4f5f80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5F84u;
        goto label_4f5f84;
    }
    ctx->pc = 0x4F5F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F5F84u);
        ctx->pc = 0x4F5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F7Cu;
        // 0x4f5f80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5F7Cu, 0x4F5F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F5F84u;
label_4f5f84:
    // 0x4f5f84: 0x5c400003  bgtzl       $v0, . + 4 + (0x3 << 2)
label_4f5f88:
    if (ctx->pc == 0x4F5F88u) {
        ctx->pc = 0x4F5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F84u;
        // 0x4f5f88: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5F8Cu;
        goto label_4f5f8c;
    }
    ctx->pc = 0x4F5F84u;
    {
        const bool branch_taken_0x4f5f84 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x4f5f84) {
            ctx->pc = 0x4F5F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4F5F84u;
            // 0x4f5f88: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F5F94u;
            goto label_4f5f94;
        }
    }
    ctx->pc = 0x4F5F8Cu;
label_4f5f8c:
    // 0x4f5f8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_4f5f90:
    if (ctx->pc == 0x4F5F90u) {
        ctx->pc = 0x4F5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F8Cu;
        // 0x4f5f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5F94u;
        goto label_4f5f94;
    }
    ctx->pc = 0x4F5F8Cu;
    {
        const bool branch_taken_0x4f5f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F8Cu;
        // 0x4f5f90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5f8c) {
            ctx->pc = 0x4F5FACu;
            goto label_4f5fac;
        }
    }
    ctx->pc = 0x4F5F94u;
label_4f5f94:
    // 0x4f5f94: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4f5f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4f5f98:
    // 0x4f5f98: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4f5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4f5f9c:
    // 0x4f5f9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4f5f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4f5fa0:
    // 0x4f5fa0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4f5fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4f5fa4:
    // 0x4f5fa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4f5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4f5fa8:
    // 0x4f5fa8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x4f5fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_4f5fac:
    // 0x4f5fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4f5facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f5fb0:
    // 0x4f5fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f5fb4:
    // 0x4f5fb4: 0x3e00008  jr          $ra
label_4f5fb8:
    if (ctx->pc == 0x4F5FB8u) {
        ctx->pc = 0x4F5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5FB4u;
        // 0x4f5fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F5FBCu;
        goto label_4f5fbc;
    }
    ctx->pc = 0x4F5FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5FB4u;
        // 0x4f5fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F5FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F5FBCu;
label_4f5fbc:
    // 0x4f5fbc: 0x0  nop
    ctx->pc = 0x4f5fbcu;
    // NOP
    ctx->pc = 0x4f5fc0u;
}
