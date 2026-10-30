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

// Function: sub_0017AB78
// Address: 0x17ab78 - 0x17abe0
void sub_0017AB78_0x17ab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AB78_0x17ab78");
#endif

    switch (ctx->pc) {
        case 0x17ab98u: goto label_17ab98;
        case 0x17aba4u: goto label_17aba4;
        default: break;
    }

    ctx->pc = 0x17ab78u;

    // 0x17ab78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ab78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ab7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17ab7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17ab80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17ab80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17ab84: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x17ab84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17ab88: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17ab88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17ab8c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17ab8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ab94: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x17ab94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17ab98:
    // 0x17ab98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ab98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab9c: 0xc05ea2a  jal         func_17A8A8
    ctx->pc = 0x17AB9Cu;
    SET_GPR_U32(ctx, 31, 0x17ABA4u);
    ctx->pc = 0x17ABA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB9Cu;
    // 0x17aba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8A8u, 0x17AB9Cu, 0x17ABA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ABA4u;
label_17aba4:
    // 0x17aba4: 0xc621000c  lwc1        $f1, 0xC($s1)
    ctx->pc = 0x17aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17aba8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17aba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17abac: 0x0  nop
    ctx->pc = 0x17abacu;
    // NOP
    // 0x17abb0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x17ABB0u;
    {
        const bool branch_taken_0x17abb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABB0u;
        // 0x17abb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abb0) {
            ctx->pc = 0x17ABC8u;
            goto label_17abc8;
        }
    }
    ctx->pc = 0x17ABB8u;
    // 0x17abb8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x17abb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x17abbc: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x17ABBCu;
    {
        const bool branch_taken_0x17abbc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABBCu;
        // 0x17abc0: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abbc) {
            ctx->pc = 0x17AB98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ab98;
        }
    }
    ctx->pc = 0x17ABC4u;
    // 0x17abc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17abc8:
    // 0x17abc8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17abc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17abcc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17abccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17abd0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17abd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17abd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17abd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17abd8: 0x3e00008  jr          $ra
    ctx->pc = 0x17ABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ABD8u;
        // 0x17abdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ABD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ABE0u;
}
