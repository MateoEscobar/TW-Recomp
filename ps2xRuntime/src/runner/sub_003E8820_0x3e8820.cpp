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

// Function: sub_003E8820
// Address: 0x3e8820 - 0x3e8888
void sub_003E8820_0x3e8820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8820_0x3e8820");
#endif

    switch (ctx->pc) {
        case 0x3e8820u: goto label_3e8820;
        case 0x3e8824u: goto label_3e8824;
        case 0x3e8828u: goto label_3e8828;
        case 0x3e882cu: goto label_3e882c;
        case 0x3e8830u: goto label_3e8830;
        case 0x3e8834u: goto label_3e8834;
        case 0x3e8838u: goto label_3e8838;
        case 0x3e883cu: goto label_3e883c;
        case 0x3e8840u: goto label_3e8840;
        case 0x3e8844u: goto label_3e8844;
        case 0x3e8848u: goto label_3e8848;
        case 0x3e884cu: goto label_3e884c;
        case 0x3e8850u: goto label_3e8850;
        case 0x3e8854u: goto label_3e8854;
        case 0x3e8858u: goto label_3e8858;
        case 0x3e885cu: goto label_3e885c;
        case 0x3e8860u: goto label_3e8860;
        case 0x3e8864u: goto label_3e8864;
        case 0x3e8868u: goto label_3e8868;
        case 0x3e886cu: goto label_3e886c;
        case 0x3e8870u: goto label_3e8870;
        case 0x3e8874u: goto label_3e8874;
        case 0x3e8878u: goto label_3e8878;
        case 0x3e887cu: goto label_3e887c;
        case 0x3e8880u: goto label_3e8880;
        case 0x3e8884u: goto label_3e8884;
        default: break;
    }

    ctx->pc = 0x3e8820u;

label_3e8820:
    // 0x3e8820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e8820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3e8824:
    // 0x3e8824: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e8824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3e8828:
    // 0x3e8828: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e8828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3e882c:
    // 0x3e882c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e882cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e8830:
    // 0x3e8830: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e8830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3e8834:
    // 0x3e8834: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e8834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e8838:
    // 0x3e8838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e8838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3e883c:
    // 0x3e883c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3e883cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e8840:
    // 0x3e8840: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e8840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8844:
    // 0x3e8844: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8848:
    // 0x3e8848: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e884c:
    // 0x3e884c: 0x40f809  jalr        $v0
label_3e8850:
    if (ctx->pc == 0x3E8850u) {
        ctx->pc = 0x3E8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E884Cu;
        // 0x3e8850: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8854u;
        goto label_3e8854;
    }
    ctx->pc = 0x3E884Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8854u);
        ctx->pc = 0x3E8850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E884Cu;
        // 0x3e8850: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E884Cu, 0x3E8854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8854u;
label_3e8854:
    // 0x3e8854: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x3e8854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_3e8858:
    // 0x3e8858: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
label_3e885c:
    if (ctx->pc == 0x3E885Cu) {
        ctx->pc = 0x3E885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8858u;
        // 0x3e885c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8860u;
        goto label_3e8860;
    }
    ctx->pc = 0x3E8858u;
    {
        const bool branch_taken_0x3e8858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x3E885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8858u;
        // 0x3e885c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8858) {
            ctx->pc = 0x3E8870u;
            goto label_3e8870;
        }
    }
    ctx->pc = 0x3E8860u;
label_3e8860:
    // 0x3e8860: 0xc0ea146  jal         func_3A8518
label_3e8864:
    if (ctx->pc == 0x3E8864u) {
        ctx->pc = 0x3E8864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8860u;
        // 0x3e8864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8868u;
        goto label_3e8868;
    }
    ctx->pc = 0x3E8860u;
    SET_GPR_U32(ctx, 31, 0x3E8868u);
    ctx->pc = 0x3E8864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8860u;
    // 0x3e8864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E8860u, 0x3E8868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8868u;
label_3e8868:
    // 0x3e8868: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x3e8868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_3e886c:
    // 0x3e886c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e886cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e8870:
    // 0x3e8870: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e8870u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8874:
    // 0x3e8874: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e8874u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3e8878:
    // 0x3e8878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e887c:
    // 0x3e887c: 0x3e00008  jr          $ra
label_3e8880:
    if (ctx->pc == 0x3E8880u) {
        ctx->pc = 0x3E8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E887Cu;
        // 0x3e8880: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8884u;
        goto label_3e8884;
    }
    ctx->pc = 0x3E887Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E887Cu;
        // 0x3e8880: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E887Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8884u;
label_3e8884:
    // 0x3e8884: 0x0  nop
    ctx->pc = 0x3e8884u;
    // NOP
    ctx->pc = 0x3e8888u;
}
