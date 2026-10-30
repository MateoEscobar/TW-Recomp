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

// Function: sub_001BDD38
// Address: 0x1bdd38 - 0x1bde18
void sub_001BDD38_0x1bdd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDD38_0x1bdd38");
#endif

    switch (ctx->pc) {
        case 0x1bdd98u: goto label_1bdd98;
        case 0x1bddb0u: goto label_1bddb0;
        case 0x1bddb8u: goto label_1bddb8;
        case 0x1bddc0u: goto label_1bddc0;
        case 0x1bdde0u: goto label_1bdde0;
        case 0x1bddf0u: goto label_1bddf0;
        case 0x1bddf8u: goto label_1bddf8;
        default: break;
    }

    ctx->pc = 0x1bdd38u;

    // 0x1bdd38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bdd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bdd3c: 0x3c060051  lui         $a2, 0x51
    ctx->pc = 0x1bdd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
    // 0x1bdd40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bdd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bdd44: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1bdd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bdd48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bdd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bdd4c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bdd4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bdd50: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x1bdd50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x1bdd54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bdd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bdd58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bdd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bdd5c: 0x8e72489c  lw          $s2, 0x489C($s3)
    ctx->pc = 0x1bdd5cu;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1bdd60: 0x8c820580  lw          $v0, 0x580($a0)
    ctx->pc = 0x1bdd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1408)));
    // 0x1bdd64: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x1bdd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x1bdd68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bdd6c: 0x8cc4aa84  lw          $a0, -0x557C($a2)
    ctx->pc = 0x1bdd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294945412)));
    // 0x1bdd70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdd74: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1bdd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdd78: 0x8cc200c8  lw          $v0, 0xC8($a2)
    ctx->pc = 0x1bdd78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x1bdd7c: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1bdd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1bdd80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bdd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bdd84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bdd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bdd88: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1bdd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bdd8c: 0x8cd10070  lw          $s1, 0x70($a2)
    ctx->pc = 0x1bdd8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x1bdd90: 0xc043f0c  jal         func_10FC30
    ctx->pc = 0x1BDD90u;
    SET_GPR_U32(ctx, 31, 0x1BDD98u);
    ctx->pc = 0x1BDD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDD90u;
    // 0x1bdd94: 0x8cd00000  lw          $s0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC30u, 0x1BDD90u, 0x1BDD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDD98u;
label_1bdd98:
    // 0x1bdd98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bdd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bdd9c: 0x24020084  addiu       $v0, $zero, 0x84
    ctx->pc = 0x1bdd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1bdda0: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x1bdda0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1bdda4: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x1bdda4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1bdda8: 0xc057550  jal         func_15D540
    ctx->pc = 0x1BDDA8u;
    SET_GPR_U32(ctx, 31, 0x1BDDB0u);
    ctx->pc = 0x1BDDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDA8u;
    // 0x1bddac: 0x8e4414d8  lw          $a0, 0x14D8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D540u, 0x1BDDA8u, 0x1BDDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDB0u;
label_1bddb0:
    // 0x1bddb0: 0xc057558  jal         func_15D560
    ctx->pc = 0x1BDDB0u;
    SET_GPR_U32(ctx, 31, 0x1BDDB8u);
    ctx->pc = 0x1BDDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDB0u;
    // 0x1bddb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D560u, 0x1BDDB0u, 0x1BDDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDB8u;
label_1bddb8:
    // 0x1bddb8: 0xc057568  jal         func_15D5A0
    ctx->pc = 0x1BDDB8u;
    SET_GPR_U32(ctx, 31, 0x1BDDC0u);
    ctx->pc = 0x1BDDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDB8u;
    // 0x1bddbc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15D5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D5A0u, 0x1BDDB8u, 0x1BDDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDC0u;
label_1bddc0:
    // 0x1bddc0: 0x2e310002  sltiu       $s1, $s1, 0x2
    ctx->pc = 0x1bddc0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bddc4: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1BDDC4u;
    {
        const bool branch_taken_0x1bddc4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDC4u;
        // 0x1bddc8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddc4) {
            ctx->pc = 0x1BDDFCu;
            goto label_1bddfc;
        }
    }
    ctx->pc = 0x1BDDCCu;
    // 0x1bddcc: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x1bddccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x1bddd0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BDDD0u;
    {
        const bool branch_taken_0x1bddd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDDD0u;
        // 0x1bddd4: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bddd0) {
            ctx->pc = 0x1BDDE0u;
            goto label_1bdde0;
        }
    }
    ctx->pc = 0x1BDDD8u;
    // 0x1bddd8: 0xc107810  jal         func_41E040
    ctx->pc = 0x1BDDD8u;
    SET_GPR_U32(ctx, 31, 0x1BDDE0u);
    ctx->pc = 0x1BDDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDD8u;
    // 0x1bdddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41E040u, 0x1BDDD8u, 0x1BDDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDE0u;
label_1bdde0:
    // 0x1bdde0: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1bdde0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1bdde4: 0x2610e490  addiu       $s0, $s0, -0x1B70
    ctx->pc = 0x1bdde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294960272));
    // 0x1bdde8: 0xc108a4c  jal         func_422930
    ctx->pc = 0x1BDDE8u;
    SET_GPR_U32(ctx, 31, 0x1BDDF0u);
    ctx->pc = 0x1BDDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDE8u;
    // 0x1bddec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422930u, 0x1BDDE8u, 0x1BDDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDF0u;
label_1bddf0:
    // 0x1bddf0: 0xc108b18  jal         func_422C60
    ctx->pc = 0x1BDDF0u;
    SET_GPR_U32(ctx, 31, 0x1BDDF8u);
    ctx->pc = 0x1BDDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BDDF0u;
    // 0x1bddf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x422C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x422C60u, 0x1BDDF0u, 0x1BDDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BDDF8u;
label_1bddf8:
    // 0x1bddf8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bddf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bddfc:
    // 0x1bddfc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bddfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bde00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bde00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bde04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bde04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bde08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bde08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bde0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDE0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDE0Cu;
        // 0x1bde10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDE0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDE14u;
    // 0x1bde14: 0x0  nop
    ctx->pc = 0x1bde14u;
    // NOP
    ctx->pc = 0x1bde18u;
}
