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

// Function: sub_0027BD98
// Address: 0x27bd98 - 0x27bdf8
void sub_0027BD98_0x27bd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027BD98_0x27bd98");
#endif

    switch (ctx->pc) {
        case 0x27bdb8u: goto label_27bdb8;
        case 0x27bdccu: goto label_27bdcc;
        default: break;
    }

    ctx->pc = 0x27bd98u;

    // 0x27bd98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27bd98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27bd9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27bd9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27bda0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27bda0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27bda4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27bda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27bda8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x27bdac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27bdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27bdb0: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BDB0u;
    SET_GPR_U32(ctx, 31, 0x27BDB8u);
    ctx->pc = 0x27BDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDB0u;
    // 0x27bdb4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BDB0u, 0x27BDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDB8u;
label_27bdb8:
    // 0x27bdb8: 0x8e030988  lw          $v1, 0x988($s0)
    ctx->pc = 0x27bdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2440)));
    // 0x27bdbc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27BDBCu;
    {
        const bool branch_taken_0x27bdbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27BDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDBCu;
        // 0x27bdc0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bdbc) {
            ctx->pc = 0x27BDD8u;
            goto label_27bdd8;
        }
    }
    ctx->pc = 0x27BDC4u;
    // 0x27bdc4: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27BDC4u;
    SET_GPR_U32(ctx, 31, 0x27BDCCu);
    ctx->pc = 0x27BDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27BDC4u;
    // 0x27bdc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27BDC4u, 0x27BDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BDCCu;
label_27bdcc:
    // 0x27bdcc: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x27bdccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x27bdd0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BDD0u;
    {
        const bool branch_taken_0x27bdd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27BDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDD0u;
        // 0x27bdd4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bdd0) {
            ctx->pc = 0x27BDE0u;
            goto label_27bde0;
        }
    }
    ctx->pc = 0x27BDD8u;
label_27bdd8:
    // 0x27bdd8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x27bdd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27bddc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x27bddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27bde0:
    // 0x27bde0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27bde0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27bde4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27bde4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27bde8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27bde8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27bdec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27bdecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27bdf0: 0x3e00008  jr          $ra
    ctx->pc = 0x27BDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27BDF0u;
        // 0x27bdf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27BDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27BDF8u;
}
