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

// Function: sub_00323D38
// Address: 0x323d38 - 0x323df8
void sub_00323D38_0x323d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00323D38_0x323d38");
#endif

    switch (ctx->pc) {
        case 0x323dd8u: goto label_323dd8;
        default: break;
    }

    ctx->pc = 0x323d38u;

    // 0x323d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x323d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x323d3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x323d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x323d40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x323d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x323d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x323d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x323d48: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x323D48u;
    {
        const bool branch_taken_0x323d48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x323D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D48u;
        // 0x323d4c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d48) {
            ctx->pc = 0x323D60u;
            goto label_323d60;
        }
    }
    ctx->pc = 0x323D50u;
    // 0x323d50: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323d54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x323d58: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x323D58u;
    {
        const bool branch_taken_0x323d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D58u;
        // 0x323d5c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d58) {
            ctx->pc = 0x323DBCu;
            goto label_323dbc;
        }
    }
    ctx->pc = 0x323D60u;
label_323d60:
    // 0x323d60: 0x4a00021  bltz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x323D60u;
    {
        const bool branch_taken_0x323d60 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x323D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D60u;
        // 0x323d64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d60) {
            ctx->pc = 0x323DE8u;
            goto label_323de8;
        }
    }
    ctx->pc = 0x323D68u;
    // 0x323d68: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x323d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x323d6c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x323d6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x323d70: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x323D70u;
    {
        const bool branch_taken_0x323d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D70u;
        // 0x323d74: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d70) {
            ctx->pc = 0x323DB4u;
            goto label_323db4;
        }
    }
    ctx->pc = 0x323D78u;
    // 0x323d78: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x323d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x323d7c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x323d7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x323d80: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x323d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x323d84: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x323d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x323d88: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x323d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x323d8c: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323D8Cu;
    {
        const bool branch_taken_0x323d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x323D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D8Cu;
        // 0x323d90: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d8c) {
            ctx->pc = 0x323D9Cu;
            goto label_323d9c;
        }
    }
    ctx->pc = 0x323D94u;
    // 0x323d94: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x323D94u;
    {
        const bool branch_taken_0x323d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x323D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323D94u;
        // 0x323d98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323d94) {
            ctx->pc = 0x323DE8u;
            goto label_323de8;
        }
    }
    ctx->pc = 0x323D9Cu;
label_323d9c:
    // 0x323d9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x323d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323da0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x323da0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x323da4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x323da4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x323da8: 0xdca40008  ld          $a0, 0x8($a1)
    ctx->pc = 0x323da8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x323dac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x323DACu;
    {
        const bool branch_taken_0x323dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DACu;
        // 0x323db0: 0xfc440008  sd          $a0, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323dac) {
            ctx->pc = 0x323DBCu;
            goto label_323dbc;
        }
    }
    ctx->pc = 0x323DB4u;
label_323db4:
    // 0x323db4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x323DB4u;
    {
        const bool branch_taken_0x323db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DB4u;
        // 0x323db8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323db4) {
            ctx->pc = 0x323DE8u;
            goto label_323de8;
        }
    }
    ctx->pc = 0x323DBCu;
label_323dbc:
    // 0x323dbc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323dc0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x323dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x323dc4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x323DC4u;
    {
        const bool branch_taken_0x323dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x323DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DC4u;
        // 0x323dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323dc4) {
            ctx->pc = 0x323DE0u;
            goto label_323de0;
        }
    }
    ctx->pc = 0x323DCCu;
    // 0x323dcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323dd0: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x323DD0u;
    SET_GPR_U32(ctx, 31, 0x323DD8u);
    ctx->pc = 0x323DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323DD0u;
    // 0x323dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x323DD0u, 0x323DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323DD8u;
label_323dd8:
    // 0x323dd8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x323dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x323ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x323ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323de0:
    // 0x323de0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x323de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x323de4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x323de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_323de8:
    // 0x323de8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x323de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x323dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x323decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x323df0: 0x3e00008  jr          $ra
    ctx->pc = 0x323DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323DF0u;
        // 0x323df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323DF8u;
}
