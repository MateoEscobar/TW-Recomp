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

// Function: sub_00469F48
// Address: 0x469f48 - 0x469fc0
void sub_00469F48_0x469f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469F48_0x469f48");
#endif

    switch (ctx->pc) {
        case 0x469f48u: goto label_469f48;
        case 0x469f4cu: goto label_469f4c;
        case 0x469f50u: goto label_469f50;
        case 0x469f54u: goto label_469f54;
        case 0x469f58u: goto label_469f58;
        case 0x469f5cu: goto label_469f5c;
        case 0x469f60u: goto label_469f60;
        case 0x469f64u: goto label_469f64;
        case 0x469f68u: goto label_469f68;
        case 0x469f6cu: goto label_469f6c;
        case 0x469f70u: goto label_469f70;
        case 0x469f74u: goto label_469f74;
        case 0x469f78u: goto label_469f78;
        case 0x469f7cu: goto label_469f7c;
        case 0x469f80u: goto label_469f80;
        case 0x469f84u: goto label_469f84;
        case 0x469f88u: goto label_469f88;
        case 0x469f8cu: goto label_469f8c;
        case 0x469f90u: goto label_469f90;
        case 0x469f94u: goto label_469f94;
        case 0x469f98u: goto label_469f98;
        case 0x469f9cu: goto label_469f9c;
        case 0x469fa0u: goto label_469fa0;
        case 0x469fa4u: goto label_469fa4;
        case 0x469fa8u: goto label_469fa8;
        case 0x469facu: goto label_469fac;
        case 0x469fb0u: goto label_469fb0;
        case 0x469fb4u: goto label_469fb4;
        case 0x469fb8u: goto label_469fb8;
        case 0x469fbcu: goto label_469fbc;
        default: break;
    }

    ctx->pc = 0x469f48u;

label_469f48:
    // 0x469f48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x469f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_469f4c:
    // 0x469f4c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x469f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_469f50:
    // 0x469f50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x469f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_469f54:
    // 0x469f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x469f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_469f58:
    // 0x469f58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x469f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_469f5c:
    // 0x469f5c: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x469f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_469f60:
    // 0x469f60: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x469f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_469f64:
    // 0x469f64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x469f64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_469f68:
    // 0x469f68: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x469f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_469f6c:
    // 0x469f6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_469f70:
    // 0x469f70: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x469f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_469f74:
    // 0x469f74: 0x10520009  beq         $v0, $s2, . + 4 + (0x9 << 2)
label_469f78:
    if (ctx->pc == 0x469F78u) {
        ctx->pc = 0x469F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F74u;
        // 0x469f78: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469F7Cu;
        goto label_469f7c;
    }
    ctx->pc = 0x469F74u;
    {
        const bool branch_taken_0x469f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x469F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F74u;
        // 0x469f78: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469f74) {
            ctx->pc = 0x469F9Cu;
            goto label_469f9c;
        }
    }
    ctx->pc = 0x469F7Cu;
label_469f7c:
    // 0x469f7c: 0x2444ffc0  addiu       $a0, $v0, -0x40
    ctx->pc = 0x469f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_469f80:
    // 0x469f80: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x469f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_469f84:
    // 0x469f84: 0x280f809  jalr        $s4
label_469f88:
    if (ctx->pc == 0x469F88u) {
        ctx->pc = 0x469F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F84u;
        // 0x469f88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469F8Cu;
        goto label_469f8c;
    }
    ctx->pc = 0x469F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x469F8Cu);
        ctx->pc = 0x469F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F84u;
        // 0x469f88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469F84u, 0x469F8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x469F8Cu;
label_469f8c:
    // 0x469f8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_469f90:
    if (ctx->pc == 0x469F90u) {
        ctx->pc = 0x469F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F8Cu;
        // 0x469f90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469F94u;
        goto label_469f94;
    }
    ctx->pc = 0x469F8Cu;
    {
        const bool branch_taken_0x469f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x469F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F8Cu;
        // 0x469f90: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469f8c) {
            ctx->pc = 0x469F9Cu;
            goto label_469f9c;
        }
    }
    ctx->pc = 0x469F94u;
label_469f94:
    // 0x469f94: 0x1452fffa  bne         $v0, $s2, . + 4 + (-0x6 << 2)
label_469f98:
    if (ctx->pc == 0x469F98u) {
        ctx->pc = 0x469F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F94u;
        // 0x469f98: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469F9Cu;
        goto label_469f9c;
    }
    ctx->pc = 0x469F94u;
    {
        const bool branch_taken_0x469f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x469F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469F94u;
        // 0x469f98: 0x2444ffc0  addiu       $a0, $v0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x469f94) {
            ctx->pc = 0x469F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_469f80;
        }
    }
    ctx->pc = 0x469F9Cu;
label_469f9c:
    // 0x469f9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x469f9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_469fa0:
    // 0x469fa0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x469fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_469fa4:
    // 0x469fa4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x469fa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_469fa8:
    // 0x469fa8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x469fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_469fac:
    // 0x469fac: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x469facu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_469fb0:
    // 0x469fb0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x469fb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_469fb4:
    // 0x469fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_469fb8:
    // 0x469fb8: 0x3e00008  jr          $ra
label_469fbc:
    if (ctx->pc == 0x469FBCu) {
        ctx->pc = 0x469FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469FB8u;
        // 0x469fbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x469FC0u;
        goto label_fallthrough_0x469fb8;
    }
    ctx->pc = 0x469FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x469FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x469FB8u;
        // 0x469fbc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x469fb8:
    ctx->pc = 0x469FC0u;
}
