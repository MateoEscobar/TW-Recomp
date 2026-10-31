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

// Function: sub_0041DB08
// Address: 0x41db08 - 0x41dbe8
void sub_0041DB08_0x41db08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DB08_0x41db08");
#endif

    switch (ctx->pc) {
        case 0x41db48u: goto label_41db48;
        case 0x41db5cu: goto label_41db5c;
        case 0x41db80u: goto label_41db80;
        case 0x41dbb0u: goto label_41dbb0;
        default: break;
    }

    ctx->pc = 0x41db08u;

    // 0x41db08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x41db08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x41db0c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x41db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x41db10: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x41db10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x41db14: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x41db14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x41db18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41db18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41db1c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x41db1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x41db20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41db20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41db24: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x41db24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x41db28: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x41db28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x41db2c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x41db2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x41db30: 0x3c150051  lui         $s5, 0x51
    ctx->pc = 0x41db30u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)81 << 16));
    // 0x41db34: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x41db34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x41db38: 0x24560848  addiu       $s6, $v0, 0x848
    ctx->pc = 0x41db38u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 2120));
    // 0x41db3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x41db3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x41db40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41db40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41db44: 0x8ea4489c  lw          $a0, 0x489C($s5)
    ctx->pc = 0x41db44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
label_41db48:
    // 0x41db48: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x41db48u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x41db4c: 0x26020228  addiu       $v0, $s0, 0x228
    ctx->pc = 0x41db4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x41db50: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x41db50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x41db54: 0xc0e409a  jal         func_390268
    ctx->pc = 0x41DB54u;
    SET_GPR_U32(ctx, 31, 0x41DB5Cu);
    ctx->pc = 0x41DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DB54u;
    // 0x41db58: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x41DB54u, 0x41DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DB5Cu;
label_41db5c:
    // 0x41db5c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x41DB5Cu;
    {
        const bool branch_taken_0x41db5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DB5Cu;
        // 0x41db60: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41db5c) {
            ctx->pc = 0x41DBB0u;
            goto label_41dbb0;
        }
    }
    ctx->pc = 0x41DB64u;
    // 0x41db64: 0x904203ac  lbu         $v0, 0x3AC($v0)
    ctx->pc = 0x41db64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 940)));
    // 0x41db68: 0x54540012  bnel        $v0, $s4, . + 4 + (0x12 << 2)
    ctx->pc = 0x41DB68u;
    {
        const bool branch_taken_0x41db68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x41db68) {
            ctx->pc = 0x41DB6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41DB68u;
            // 0x41db6c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41DBB4u;
            goto label_41dbb4;
        }
    }
    ctx->pc = 0x41DB70u;
    // 0x41db70: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x41db70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x41db74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41db74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41db78: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x41db78u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x41db7c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x41db7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
label_41db80:
    // 0x41db80: 0x8cc2489c  lw          $v0, 0x489C($a2)
    ctx->pc = 0x41db80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 18588)));
    // 0x41db84: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x41db84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x41db88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x41db88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x41db8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x41db90: 0x2ca40007  sltiu       $a0, $a1, 0x7
    ctx->pc = 0x41db90u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x41db94: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x41DB94u;
    {
        const bool branch_taken_0x41db94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x41DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DB94u;
        // 0x41db98: 0xa052041e  sb          $s2, 0x41E($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1054), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41db94) {
            ctx->pc = 0x41DB80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41db80;
        }
    }
    ctx->pc = 0x41DB9Cu;
    // 0x41db9c: 0xf61021  addu        $v0, $a3, $s6
    ctx->pc = 0x41db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x41dba0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x41dba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41dba4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x41dba8: 0xc069b0e  jal         func_1A6C38
    ctx->pc = 0x41DBA8u;
    SET_GPR_U32(ctx, 31, 0x41DBB0u);
    ctx->pc = 0x41DBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41DBA8u;
    // 0x41dbac: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6C38u, 0x41DBA8u, 0x41DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41DBB0u;
label_41dbb0:
    // 0x41dbb0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x41dbb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41dbb4:
    // 0x41dbb4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x41dbb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x41dbb8: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x41DBB8u;
    {
        const bool branch_taken_0x41dbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41dbb8) {
            ctx->pc = 0x41DBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41DBB8u;
            // 0x41dbbc: 0x8ea4489c  lw          $a0, 0x489C($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 18588)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41DB48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41db48;
        }
    }
    ctx->pc = 0x41DBC0u;
    // 0x41dbc0: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x41dbc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x41dbc4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x41dbc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x41dbc8: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x41dbc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x41dbcc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x41dbccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x41dbd0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x41dbd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41dbd4: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x41dbd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41dbd8: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x41dbd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41dbdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41dbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41dbe0: 0x3e00008  jr          $ra
    ctx->pc = 0x41DBE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41DBE0u;
        // 0x41dbe4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41DBE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41DBE8u;
}
